/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10718d634; end: 10718d733; -[SCStickerDataProvider stickerPickerMenu:stickerCategoryForIndexPath:] */

void FUN_10718d634(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c254ac0(param_1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x00010c0840e0();
  uVar1 = param_1;
  func_0x00010c253a60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar1 = param_1;
    func_0x00010c253a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    uVar3 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10718d734; end: 10718d79f; -[SCStickerDataProvider stickerPickerMenu:shouldDisplayEmptyStateForIndexPath:sourceType:] */

long FUN_10718d734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(lVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c27dd80();
  if (lVar1 == 4) {
    func_0x00010c22f3a0(param_1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 10718d7a0; end: 10718d9af; -[SCStickerDataProvider stickerPickerMenu:emptyStateViewForIndexPath:frame:sourceType:] */

void FUN_10718d7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_5 + 8);
  func_0x00010c1554e0(param_8);
  func_0x00010c0dfd40(lVar9,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c27dd80();
  _objc_release(lVar9);
  if (lVar1 == 4) {
    func_0x000108e07220();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x000108e072a4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000108e0719c();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_5 + 0x48) == 0) {
      puVar8 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar3 = param_5 + 0x30;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c253dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar8,param_6,lVar4,1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar5 = PTR_PTR_1126d4ef0;
      _objc_alloc();
      func_0x00010c0564a0();
      uVar7 = *(undefined8 *)(param_5 + 0x48);
      *(undefined **)(param_5 + 0x48) = puVar5;
      _objc_release(uVar7);
      _objc_release(puVar8);
    }
    puVar8 = PTR_PTR_1126d4ef8;
    _objc_alloc(PTR_PTR_1126d4ef8);
    lVar3 = lVar9;
    func_0x00010c269d40(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x48);
    lVar6 = lVar2;
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c014de0(param_1,param_2,param_3,param_4,puVar8,param_6,param_9,lVar3,lVar4,uVar7,
                        lVar6,*(undefined8 *)(param_5 + 0xa0));
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar9);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10718d9b0; end: 10718d9cf; -[SCStickerDataProvider stickerPickerMenuHasSuperCategoryType:] */

bool FUN_10718d9b0(long param_1)

{
  func_0x00010be38d40();
  return param_1 != 0x7fffffffffffffff;
}



/* Entry: 10718d9d0; end: 10718da2f; -[SCStickerDataProvider stickerPickerMenuHasSuperCategoryType:atIndex:] */

bool FUN_10718d9d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010be38d40(param_1,param_2,param_3);
  lVar1 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_release(param_4);
  return param_1 == lVar1;
}



/* Entry: 10718da30; end: 10718daab; -[SCStickerDataProvider superCategoryTypeAtIndexPath:] */

undefined8 FUN_10718da30(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c1554e0();
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27dd80();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
    if (*(long *)(param_1 + 0x18) != 0x1f8b58) {
      uVar3 = 2;
    }
  }
  return uVar3;
}



/* Entry: 10718daac; end: 10718dad3; -[SCStickerDataProvider layoutSource] */

void FUN_10718daac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10718dad4; end: 10718dadb; -[SCStickerDataProvider venuesInfoToDisplayForVenueStickerInPickerMenu:] */

void FUN_10718dad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_getVenuesInfo_1125d09c0);
  return;
}



/* Entry: 10718dadc; end: 10718dae3; -[SCStickerDataProvider topicsInfoToDisplayForTopicStickerInPickerMenu:] */

undefined8 FUN_10718dadc(void)

{
  return 0;
}



/* Entry: 10718dae4; end: 10718daf3; -[SCStickerDataProvider supportsAnimatedStickers] */

byte FUN_10718dae4(long param_1)

{
  return (*(byte *)(param_1 + 0x28) ^ 0xff) & 1;
}



/* Entry: 10718daf4; end: 10718dafb; -[SCStickerDataProvider numberOfSuperCategories] */

void FUN_10718daf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10718dafc; end: 10718dbcf; -[SCStickerDataProvider numberOfCategoriesInSuperCategory:] */

undefined8 FUN_10718dafc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  uVar2 = 0;
  if ((-1 < (long)param_3) && (param_3 < uVar1)) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27dd80();
    if (lVar4 == 4) {
      uVar1 = param_1;
      func_0x00010c22f3a0();
      _objc_release(lVar3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    else {
      _objc_release(lVar3);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0dfd40(uVar5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c253a60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf529e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  return uVar2;
}



/* Entry: 10718dbd0; end: 10718dbd7; -[SCStickerDataProvider stickerSuperCategoryForIndex:] */

void FUN_10718dbd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectAtIndexedSubscript__112615968);
  return;
}



/* Entry: 10718dbd8; end: 10718dc77; -[SCStickerDataProvider stickerCategoryForIndexPath:] */

void FUN_10718dbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1554e0(param_3);
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c253a60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10718dc78; end: 10718dc7f; -[SCStickerDataProvider customStickers] */

undefined8 FUN_10718dc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10718dc80; end: 10718dd67; -[SCStickerDataProvider .cxx_destruct] */

void FUN_10718dc80(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10718dd68; end: 10718dd6f; -[SCStickerPickerCategoryCellModel loadingIndicatorDisabled] */

undefined1 FUN_10718dd68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10718dd70; end: 10718dd77; -[SCStickerPickerCategoryCellModel setLoadingIndicatorDisabled:] */

void FUN_10718dd70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10718dd78; end: 10718dd7f; -[SCStickerPickerCategoryCellModel stateLabelHidden] */

undefined1 FUN_10718dd78(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10718dd80; end: 10718dd87; -[SCStickerPickerCategoryCellModel setStateLabelHidden:] */

void FUN_10718dd80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10718dd88; end: 10718dd8f; -[SCStickerPickerCategoryCellModel stateLabelText] */

undefined8 FUN_10718dd88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10718dd90; end: 10718dd97; -[SCStickerPickerCategoryCellModel setStateLabelText:] */

void FUN_10718dd90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10718dd98; end: 10718dd9f; -[SCStickerPickerCategoryCellModel collectionViewHidden] */

undefined1 FUN_10718dd98(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10718dda0; end: 10718dda7; -[SCStickerPickerCategoryCellModel setCollectionViewHidden:] */

void FUN_10718dda0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10718dda8; end: 10718ddaf; -[SCStickerPickerCategoryCellModel displayZeroState] */

undefined1 FUN_10718dda8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10718ddb0; end: 10718ddb7; -[SCStickerPickerCategoryCellModel setDisplayZeroState:] */

void FUN_10718ddb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10718ddb8; end: 10718ddc3; -[SCStickerPickerCategoryCellModel .cxx_destruct] */

void FUN_10718ddb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10718ddc4; end: 10718ddff; -[SCStickerPickerCategoryCell initWithFrame:] */

void FUN_10718ddc4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c014c80(param_1,param_2,0,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 10718de00; end: 10718e5b3; -[SCStickerPickerCategoryCell initWithFrame:shouldIncludeQueryHeader:useVerticalGiphySection:sourceType:ctpItemViewService:friendmojiFilteredContainer:bitmoji3DContentFetcher:preferences:userBlizzardLogger:avatarProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10718de00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,undefined1 param_8,undefined8 param_9
             ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_b8 = PTR_PTR_1126f8ae0;
  puVar2 = &uStack_c0;
  uStack_c0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar2);
    lVar13 = (long)_DAT_112764ac0;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined8 *)((long)puVar2 + lVar13) = param_10;
    _objc_release(uVar3);
    lVar13 = (long)_DAT_112764ac4;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined8 *)((long)puVar2 + lVar13) = param_11;
    _objc_release(uVar3);
    *(char *)((long)puVar2 + (long)_DAT_112764ac8) = (char)param_7;
    if (param_7 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + (long)_DAT_112764acc);
      func_0x00010c2331a0();
    }
    *(undefined1 *)((long)puVar2 + (long)_DAT_112764ad0) = uVar1;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112764ad4) = param_8;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764ad8) = param_9;
    lVar13 = (long)_DAT_112764adc;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined8 *)((long)puVar2 + lVar13) = param_15;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126cbde8;
    func_0x00010c07d4e0();
    uVar3 = 0x4054000000000000;
    if ((int)puVar4 == 0) {
      uVar3 = 0x4051c00000000000;
    }
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764ae0) = uVar3;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764ae4);
    *(undefined **)((long)puVar2 + (long)_DAT_112764ae4) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d4f18;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764ae8);
    *(undefined **)((long)puVar2 + (long)_DAT_112764ae8) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    lVar13 = (long)_DAT_112764aec;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined **)((long)puVar2 + lVar13) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar13));
    _objc_release(puVar4);
    func_0x00010c2026e0(*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010c167a20(*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010c18e220(*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010c189840(*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar13));
    lVar13 = (long)_DAT_112764af0;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined8 *)((long)puVar2 + lVar13) = param_12;
    _objc_release(uVar3);
    lVar13 = (long)_DAT_112764af4;
    _objc_retain(param_13);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined8 *)((long)puVar2 + lVar13) = param_13;
    _objc_release();
    func_0x0001004fa1d0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764af8);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764af8) = uVar3;
    _objc_release(uVar12);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764afc);
    *(undefined **)((long)puVar2 + (long)_DAT_112764afc) = puVar4;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb668);
    uVar3 = uVar5;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764b00);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764b00) = uVar5;
    _objc_release(uVar12);
    puVar4 = PTR_PTR_1126d4e60;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764b04);
    *(undefined **)((long)puVar2 + (long)_DAT_112764b04) = puVar4;
    _objc_release(uVar5);
    func_0x00010be89d00(puVar2);
    puVar4 = PTR_PTR_1126d4f20;
    _objc_alloc();
    func_0x00010c04ea80();
    lVar13 = (long)_DAT_112764acc;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined **)((long)puVar2 + lVar13) = puVar4;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar13));
    puVar6 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar6);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar13 = (long)_DAT_112764b08;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined **)((long)puVar2 + lVar13) = puVar4;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010c178280(*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010bef9040(puVar2);
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar14 = (long)_DAT_112764b0c;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar14);
    *(undefined **)((long)puVar2 + lVar14) = puVar4;
    _objc_release(uVar5);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar2 + lVar14));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar14));
    func_0x00010bef9040(puVar2);
    func_0x00010c1374a0(*(undefined8 *)((long)puVar2 + lVar13));
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764b10);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112764b10) = 0;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764b14);
    *(undefined **)((long)puVar2 + (long)_DAT_112764b14) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764b18);
    *(undefined **)((long)puVar2 + (long)_DAT_112764b18) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764b1c);
    *(undefined **)((long)puVar2 + (long)_DAT_112764b1c) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112764b20;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined **)((long)puVar2 + lVar13) = puVar4;
    _objc_release(uVar5);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar13));
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_b0 = puVar4;
    func_0x00010bf41680(0,0x3fd0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar4;
    func_0x00010bf41680(0,0x3fa999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar4;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar2 + lVar13));
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c209760(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                        *(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010c196020(0,0x3ff0000000000000,*(undefined8 *)((long)puVar2 + lVar13));
    func_0x00010bdc8dc0(puVar2);
    func_0x00010bee2ae0(puVar2);
    puVar4 = PTR_PTR_1126c49d8;
    _objc_alloc();
    func_0x00010bf20c00(puVar2);
    _CGRectGetWidth();
    func_0x00010c0630e0();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112764b24);
    *(undefined **)((long)puVar2 + (long)_DAT_112764b24) = puVar4;
    _objc_release(uVar5);
    lVar13 = (long)_DAT_112764b28;
    _objc_retain(param_14);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined8 *)((long)puVar2 + lVar13) = param_14;
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)PTR_PTR_1126b0d28;
  _objc_alloc_init(PTR_PTR_1126b0d28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 10718e5b4; end: 10718e5cf;  */

void FUN_10718e5b4(void)

{
  _objc_alloc_init(PTR_PTR_1126b0d28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10718e5d0; end: 10718e5d7;  */

void FUN_10718e5d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersDataFetcher_11266ecd8);
  return;
}



/* Entry: 10718e5d8; end: 10718e99f; -[SCStickerPickerCategoryCell _registerReusableViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10718e5d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112764ac0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_138 = lVar1;
  func_0x00010c127900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x28 = &PTR_PTR_1126d4000;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar1);
        }
        uVar15 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        uVar18 = *(undefined8 *)(param_1 + _DAT_112764aec);
        puVar3 = PTR_PTR_1126d4f28;
        _objc_opt_class(PTR_PTR_1126d4f28);
        func_0x00010c29e120(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c126000(uVar18,param_2,puVar3,uVar15);
        _objc_release(uVar15);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar1 = (long)_DAT_112764aec;
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea0fd8);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea0ff8);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126d4f30;
  _objc_opt_class(PTR_PTR_1126d4f30);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1058);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126d4f38;
  _objc_opt_class(PTR_PTR_1126d4f38);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1078);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126d4f40;
  _objc_opt_class(PTR_PTR_1126d4f40);
  uVar18 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  puVar4 = PTR_PTR_1126d4f40;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar15,param_2,puVar3,uVar18,puVar4);
  _objc_release(puVar4);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1038);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea10b8);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1098);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1018);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1158);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1178);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1198);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126d4f48;
  _objc_opt_class(PTR_PTR_1126d4f48);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea1138);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126d4f50;
  _objc_opt_class(PTR_PTR_1126d4f50);
  func_0x00010c126000(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea10d8);
  uVar15 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126d4f58;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d4f58;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar15,param_2,puVar3,&PTR____CFConstantStringClassReference_110ef2bd8,puVar5)
  ;
  _objc_release(puVar5);
  lVar2 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar2;
  }
  ___stack_chk_fail();
  puStack_190 = &DAT_112764000;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110ef2bd8;
  ppuStack_158 = &PTR_PTR_1126d4000;
  pcStack_148 = FUN_10718e9a0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aeff0;
  ppuStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_188 = lVar1;
  puStack_180 = puVar4;
  puStack_178 = puVar5;
  puStack_168 = puVar3;
  uStack_160 = uVar15;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar14 = (long)_DAT_112764b2c;
  uVar15 = *(undefined8 *)(lVar2 + lVar14);
  *(undefined **)(lVar2 + lVar14) = puVar6;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar14),param_2,0);
  func_0x00010c1a8560(*(undefined8 *)(lVar2 + lVar14),param_2,1);
  func_0x00010c2558c0(*(undefined8 *)(lVar2 + lVar14));
  lVar1 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar16 = (long)_DAT_112764b30;
  uVar15 = *(undefined8 *)(lVar2 + lVar16);
  *(undefined **)(lVar2 + lVar16) = puVar3;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar16),param_2,0);
  puVar3 = PTR_PTR_1126d4eb0;
  func_0x00010c0da900(PTR_PTR_1126d4eb0,param_2,*(undefined8 *)(lVar2 + _DAT_112764ad8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + lVar16),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + lVar16),param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1cfce0(*(undefined8 *)(lVar2 + lVar16),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(lVar2 + lVar16),param_2,1);
  lVar1 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puStack_228 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(lVar2 + lVar14);
  lStack_1f0 = lVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  uStack_1e8 = uVar15;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e0 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = lVar1;
  func_0x00010bf493a0(uVar15,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar14);
  uStack_200 = uVar15;
  uStack_1d8 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  uStack_210 = uVar18;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = lVar1;
  func_0x00010bf493a0(uVar18,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar2 + lVar16);
  uStack_220 = uVar18;
  uStack_1d0 = uVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  uStack_238 = uVar15;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_230 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_240 = lVar1;
  func_0x00010bf493a0(uVar15,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar16);
  uStack_248 = uVar15;
  uStack_1c8 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  uStack_250 = uVar18;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar18,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + lVar16);
  uStack_1c0 = uVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar7;
  func_0x00010bf49480(0x4038000000000000,uVar7,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b8 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1d8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_228,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar15);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar18);
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(lStack_240);
  _objc_release(lStack_230);
  _objc_release(uStack_238);
  _objc_release(uStack_220);
  _objc_release(lStack_218);
  _objc_release(lStack_208);
  _objc_release(uStack_210);
  _objc_release(uStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1e0);
  _objc_release(uStack_1e8);
  uVar9 = *(undefined8 *)(lVar2 + lStack_1f0);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112764b34;
  uVar13 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined8 *)(lVar2 + lVar19) = uVar15;
  _objc_release(uVar13);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(uVar9);
  func_0x00010c162480(*(undefined8 *)(lVar2 + lVar19),param_2,1);
  uVar9 = *(undefined8 *)(lVar2 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112764b38;
  uVar13 = *(undefined8 *)(lVar2 + lVar16);
  *(undefined8 *)(lVar2 + lVar16) = uVar15;
  _objc_release(uVar13);
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(uVar9);
  lVar10 = *(long *)(lVar2 + lVar16);
  func_0x00010c162480(lVar10,param_2,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return lVar10;
  }
  ___stack_chk_fail();
  puStack_298 = &DAT_112764ad8;
  pcStack_258 = FUN_10718ef18;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112764b3c;
  lVar12 = lVar10;
  lStack_2b0 = lVar8;
  uStack_2a8 = uVar7;
  uStack_2a0 = uVar18;
  lStack_290 = lVar19;
  lStack_288 = lVar16;
  lStack_280 = lVar14;
  lStack_278 = lVar1;
  uStack_270 = uVar9;
  lStack_268 = lVar2;
  ppuStack_260 = &puStack_150;
  if ((*(long *)(lVar10 + lVar17) == 0) && (func_0x00010beb3a20(), (int)lVar12 != 0)) {
    func_0x00010bec7b40(lVar10);
    puVar3 = PTR_PTR_1126d4f60;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(lVar10 + _DAT_112764b40);
    *(undefined **)(lVar10 + _DAT_112764b40) = puVar3;
    _objc_release(uVar15);
    puVar3 = PTR_PTR_1126d4f68;
    _objc_alloc();
    lVar2 = lVar10 + _DAT_112764b44;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c042980(puVar3,param_2,lVar2);
    uVar15 = *(undefined8 *)(lVar10 + lVar17);
    *(undefined **)(lVar10 + lVar17) = puVar3;
    _objc_release(uVar15);
    _objc_release(lVar2);
    lVar2 = lVar10;
    func_0x00010bf4dce0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    func_0x00010c219b60(*(undefined8 *)(lVar10 + lVar17),param_2,0);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(lVar10 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar10 + lVar17);
    uStack_2d0 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar10;
    func_0x00010bf4dce0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar10 + lVar17);
    uStack_2c8 = uVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_2c0 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_2d0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar18);
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(uVar13);
    _objc_release(uVar15);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(uVar9);
    uVar18 = *(undefined8 *)(lVar10 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf4dce0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar18;
    func_0x00010bf493a0(uVar18,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112764b48;
    uVar7 = *(undefined8 *)(lVar10 + lVar14);
    *(undefined8 *)(lVar10 + lVar14) = uVar15;
    _objc_release(uVar7);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(uVar18);
    func_0x00010c162480(*(undefined8 *)(lVar10 + lVar14),param_2,1);
    lVar12 = *(long *)(lVar10 + lVar17);
    func_0x00010c1a7f60(lVar12,param_2,1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return lVar12;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar12 + _DAT_112764b4c) != 0) {
    return -1;
  }
  lVar2 = 2;
  if (*(long *)(lVar12 + _DAT_112764b50) == 2) {
    lVar2 = 3;
  }
  lVar1 = 0;
  if (*(long *)(lVar12 + _DAT_112764b50) != 3) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10718e9a0; end: 10718ef17; -[SCStickerPickerCategoryCell _addUIStateSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10718e9a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar12 = (long)_DAT_112764b2c;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar12),param_2,1);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar13 = (long)_DAT_112764b30;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
  puVar1 = PTR_PTR_1126d4eb0;
  func_0x00010c0da900(PTR_PTR_1126d4eb0,param_2,*(undefined8 *)(param_1 + _DAT_112764ad8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar13),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar13),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar13),param_2,1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  lStack_b0 = lVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_a8 = uVar10;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar2;
  func_0x00010bf493a0(uVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_c0 = uVar10;
  uStack_98 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d0 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar2;
  func_0x00010bf493a0(uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  uStack_e0 = uVar3;
  uStack_90 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_f8 = uVar10;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar2;
  func_0x00010bf493a0(uVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_108 = uVar10;
  uStack_88 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_110 = uVar3;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar3,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf49480(0x4038000000000000,uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_e8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  _objc_release(lStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(lStack_a0);
  _objc_release(uStack_a8);
  uVar5 = *(undefined8 *)(param_1 + lStack_b0);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112764b34;
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = uVar10;
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release(lVar12);
  _objc_release(uVar5);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar15),param_2,1);
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112764b38;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = uVar10;
  _objc_release(uVar11);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(uVar5);
  lVar6 = *(long *)(param_1 + lVar13);
  func_0x00010c162480(lVar6,param_2,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar6;
  }
  ___stack_chk_fail();
  puStack_158 = &DAT_112764ad8;
  pcStack_118 = FUN_10718ef18;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112764b3c;
  lVar9 = lVar6;
  lStack_170 = lVar16;
  uStack_168 = uVar4;
  uStack_160 = uVar3;
  lStack_150 = lVar15;
  lStack_148 = lVar13;
  lStack_140 = lVar12;
  lStack_138 = lVar2;
  uStack_130 = uVar5;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar6 + lVar14) == 0) && (func_0x00010beb3a20(), (int)lVar9 != 0)) {
    func_0x00010bec7b40(lVar6);
    puVar1 = PTR_PTR_1126d4f60;
    _objc_alloc_init();
    uVar10 = *(undefined8 *)(lVar6 + _DAT_112764b40);
    *(undefined **)(lVar6 + _DAT_112764b40) = puVar1;
    _objc_release(uVar10);
    puVar1 = PTR_PTR_1126d4f68;
    _objc_alloc();
    lVar2 = lVar6 + _DAT_112764b44;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c042980(puVar1,param_2,lVar2);
    uVar10 = *(undefined8 *)(lVar6 + lVar14);
    *(undefined **)(lVar6 + lVar14) = puVar1;
    _objc_release(uVar10);
    _objc_release(lVar2);
    lVar2 = lVar6;
    func_0x00010bf4dce0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    func_0x00010c219b60(*(undefined8 *)(lVar6 + lVar14),param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(lVar6 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar6 + lVar14);
    uStack_190 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar6;
    func_0x00010bf4dce0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bf493a0(uVar11,param_2,lVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar6 + lVar14);
    uStack_188 = uVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_180 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_190,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(lVar13);
    _objc_release(lVar16);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(uVar5);
    uVar3 = *(undefined8 *)(lVar6 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf4dce0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112764b48;
    uVar4 = *(undefined8 *)(lVar6 + lVar16);
    *(undefined8 *)(lVar6 + lVar16) = uVar10;
    _objc_release(uVar4);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(uVar3);
    func_0x00010c162480(*(undefined8 *)(lVar6 + lVar16),param_2,1);
    lVar9 = *(long *)(lVar6 + lVar14);
    func_0x00010c1a7f60(lVar9,param_2,1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return lVar9;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar9 + _DAT_112764b4c) != 0) {
    return -1;
  }
  lVar2 = 2;
  if (*(long *)(lVar9 + _DAT_112764b50) == 2) {
    lVar2 = 3;
  }
  lVar12 = 0;
  if (*(long *)(lVar9 + _DAT_112764b50) != 3) {
    lVar12 = lVar2;
  }
  return lVar12;
}



/* Entry: 10718ef18; end: 10718f247; -[SCStickerPickerCategoryCell _addChatStickerSearchBarViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10718ef18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112764b3c;
  lVar9 = param_1;
  if ((*(long *)(param_1 + lVar12) == 0) && (func_0x00010beb3a20(), (int)lVar9 != 0)) {
    func_0x00010bec7b40(param_1);
    puVar1 = PTR_PTR_1126d4f60;
    _objc_alloc_init();
    uVar10 = *(undefined8 *)(param_1 + _DAT_112764b40);
    *(undefined **)(param_1 + _DAT_112764b40) = puVar1;
    _objc_release(uVar10);
    puVar1 = PTR_PTR_1126d4f68;
    _objc_alloc();
    lVar9 = param_1 + _DAT_112764b44;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c042980(puVar1,param_2,lVar9);
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar1;
    _objc_release(uVar10);
    _objc_release(lVar9);
    lVar9 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar9);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    uStack_80 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar12);
    uStack_78 = uVar8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(lVar5);
    _objc_release(lVar13);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(uVar2);
    uVar8 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112764b48;
    uVar11 = *(undefined8 *)(param_1 + lVar13);
    *(undefined8 *)(param_1 + lVar13) = uVar10;
    _objc_release(uVar11);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(uVar8);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar13),param_2,1);
    lVar9 = *(long *)(param_1 + lVar12);
    func_0x00010c1a7f60(lVar9,param_2,1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar9;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar9 + _DAT_112764b4c) != 0) {
    return -1;
  }
  lVar12 = 2;
  if (*(long *)(lVar9 + _DAT_112764b50) == 2) {
    lVar12 = 3;
  }
  lVar3 = 0;
  if (*(long *)(lVar9 + _DAT_112764b50) != 3) {
    lVar3 = lVar12;
  }
  return lVar3;
}



/* Entry: 10718f248; end: 10718f283; -[SCStickerPickerCategoryCell _stickerSearchSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10718f248(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_112764b4c) != 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = 2;
  if (*(long *)(param_1 + _DAT_112764b50) == 2) {
    uVar1 = 3;
  }
  uVar2 = 0;
  if (*(long *)(param_1 + _DAT_112764b50) != 3) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10718f284; end: 10718f313; -[SCStickerPickerCategoryCell _shouldExplicitSearchBarBeVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10718f284(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(ulong *)(param_1 + _DAT_112764ad8) & 0xfffffffffffffffd) != 1) {
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112764b4c);
  if (uVar1 < 0xb) {
    if ((1L << (uVar1 & 0x3f) & 0x668U) != 0) {
      return 0;
    }
    if ((uVar1 == 0) && (*(long *)(param_1 + _DAT_112764b50) == 3)) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112764b3c),param_2,1);
      return 0;
    }
  }
  return 1;
}



/* Entry: 10718f314; end: 10718f38b; -[SCStickerPickerCategoryCell updateExplicitSearchBarText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f314(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112764b44;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf9cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c212fa0(*(undefined8 *)(param_1 + _DAT_112764b3c),param_2,lVar2,
                      *(long *)(param_1 + _DAT_112764b4c) == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10718f38c; end: 10718f4b3; -[SCStickerPickerCategoryCell _updateDirectionalLockEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f38c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if (*(long *)(param_1 + _DAT_112764ad8) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112764b54);
    func_0x00010c087020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07b060();
    _objc_release(uVar1);
    lVar5 = (long)_DAT_112764aec;
    func_0x00010c18e220(*(undefined8 *)(param_1 + lVar5));
    iVar6 = _DAT_112764b58;
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + _DAT_112764b58) == 0) {
        puVar3 = PTR_PTR_1126d4f70;
        _objc_alloc();
        func_0x00010c050900();
        uVar4 = *(undefined8 *)(param_1 + iVar6);
        *(undefined **)(param_1 + iVar6) = puVar3;
        _objc_release(uVar4);
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + iVar6));
        func_0x00010c178280(*(undefined8 *)(param_1 + iVar6));
        func_0x00010bef9040(param_1);
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c0f36c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1374a0();
        _objc_release(uVar4);
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    func_0x00010c18e220(*(undefined8 *)(param_1 + _DAT_112764aec),param_2,0);
    uVar4 = 0;
    iVar6 = _DAT_112764b58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + iVar6),PTR_s_setEnabled__112642f38,uVar4);
  return;
}



/* Entry: 10718f4b4; end: 10718f4f3; -[SCStickerPickerCategoryCell setCreativeToolsABProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764b54);
  *(undefined8 *)(param_1 + _DAT_112764b54) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDirectionalLockEnabled_112593548);
  return;
}



/* Entry: 10718f4f4; end: 10718f553; -[SCStickerPickerCategoryCell _updateStyles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f4f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4eb0;
  func_0x00010c0da900(PTR_PTR_1126d4eb0,param_2,*(undefined8 *)(param_1 + _DAT_112764ad8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112764b30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10718f554; end: 10718f5c3; -[SCStickerPickerCategoryCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f554(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + _DAT_112764b5c) == '\x01') {
    func_0x00010c12d580(*(undefined8 *)(param_1 + _DAT_112764aec),param_2,param_1,
                        &PTR____CFConstantStringClassReference_110dc3bd8);
  }
  puStack_28 = PTR_PTR_1126f8ae0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10718f5c4; end: 10718f697; -[SCStickerPickerCategoryCell observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f5c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == *(long *)(param_1 + _DAT_112764aec)) &&
     (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    func_0x00010c0b33a0(param_1);
  }
  else {
    puStack_48 = PTR_PTR_1126f8ae0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,param_4,
                        param_5,param_6);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10718f698; end: 10718f78f; -[SCStickerPickerCategoryCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f698(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8ae0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar3 = (long)_DAT_112764aec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c070400();
  if (iVar1 != 0) {
    func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                        *(undefined8 *)(param_1 + lVar3));
  }
  lVar4 = (long)_DAT_112764b5c;
  if (*(char *)(param_1 + lVar4) == '\x01') {
    func_0x00010c12d580(*(undefined8 *)(param_1 + lVar3));
    *(undefined1 *)(param_1 + lVar4) = 0;
  }
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112764b1c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112764b18));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112764ae4));
  func_0x00010bee2ae0(param_1);
  lVar3 = (long)_DAT_112764b60;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_112764b50) = 0;
  return;
}



/* Entry: 10718f790; end: 10718f7ab; -[SCStickerPickerCategoryCell performCollectionViewUpdates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f790(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764aec),
             PTR_s_performBatchUpdates_completion__11261bb28,param_3,
             &PTR___NSConcreteGlobalBlock_110990d80);
  return;
}



/* Entry: 10718f7ac; end: 10718f7ff; -[SCStickerPickerCategoryCell _modelForState] */

void FUN_10718f7ac(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136ca078 != -1) {
    func_0x00010002a2fc(0x1136ca078,&PTR___NSConcreteGlobalBlock_110990da0);
  }
  uVar1 = uRam00000001136ca070;
  _objc_retain(uRam00000001136ca070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10718f800; end: 10718f9d7;  */

void FUN_10718f800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar4 = puRam00000001136ca070;
  puRam00000001136ca070 = puVar1;
  _objc_release(uVar4);
  lVar5 = 0;
  do {
    puVar1 = PTR_PTR_1126d4fe0;
    _objc_alloc_init(PTR_PTR_1126d4fe0);
    if (lVar5 < 3) {
      if ((lVar5 == 0) || (lVar5 != 1)) {
        func_0x00010c1bece0(puVar1,param_2,1);
        func_0x00010c20a0e0(puVar1,param_2,1);
        uVar4 = 0;
      }
      else {
        func_0x00010c1bece0(puVar1,param_2,0);
        func_0x00010c20a0e0(puVar1,param_2,1);
LAB_10718f8cc:
        uVar4 = 1;
      }
      func_0x00010c17e760(puVar1,param_2,uVar4);
      uVar4 = 0;
LAB_10718f904:
      func_0x00010c190120(puVar1,param_2,uVar4);
    }
    else {
      if (lVar5 == 3) {
        func_0x00010c1bece0(puVar1,param_2,1);
        func_0x00010c20a0e0(puVar1,param_2,1);
        func_0x00010c17e760(puVar1,param_2,1);
        uVar4 = 1;
        goto LAB_10718f904;
      }
      if (lVar5 == 4) {
        func_0x00010c1bece0(puVar1,param_2,1);
        puVar3 = puVar1;
        func_0x00010c20a0e0(puVar1,param_2,0);
        func_0x000109201b20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a100(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        goto LAB_10718f8cc;
      }
      func_0x00010c1bece0(puVar1,param_2,1);
      puVar3 = puVar1;
      func_0x00010c20a0e0(puVar1,param_2,0);
      func_0x000109201a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a100(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010c17e760(puVar1,param_2,1);
    }
    puVar3 = puRam00000001136ca070;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar5 = lVar5 + 1;
    if (lVar5 == 6) {
      return;
    }
  } while( true );
}



/* Entry: 10718f9d8; end: 10718fb17; -[SCStickerPickerCategoryCell _updateUIState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718f9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be60f40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c252640(lVar3);
  lVar4 = (long)_DAT_112764b30;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
  lVar1 = lVar3;
  func_0x00010bf408a0(lVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112764aec),param_2,lVar1);
  lVar1 = lVar3;
  func_0x00010c09cf80();
  if ((int)lVar1 == 0) {
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_112764b2c));
  }
  else {
    func_0x00010c2558c0();
  }
  lVar1 = lVar3;
  func_0x00010c252660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = lVar3;
    func_0x00010c252660(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = lVar3;
  func_0x00010bf86840();
  if ((int)lVar1 == 0) {
    func_0x00010be8c0c0(param_1);
  }
  else {
    func_0x00010be04600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10718fb18; end: 10719012f; -[SCStickerPickerCategoryCell _displayFeedZeroState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718fb18(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126d4f78;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = *(ulong *)(param_1 + _DAT_112764b64);
  _objc_retain(uVar18);
  _objc_opt_class(puVar1);
  uVar2 = uVar18;
  _objc_opt_isKindOfClass(uVar18,puVar1);
  uVar17 = uVar18;
  if ((uVar2 & 1) == 0) {
    uVar17 = 0;
  }
  _objc_retain(uVar17);
  _objc_release(uVar18);
  if (uVar17 != 0) {
    func_0x00010bfa3620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar18;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27dd80();
    _objc_release(uVar2);
    _objc_release(uVar18);
    if (uVar3 == 4) {
      func_0x00010be04420(param_1);
    }
    else if ((uVar3 == 0xd) && (lVar21 = (long)_DAT_112764b68, *(long *)(param_1 + lVar21) == 0)) {
      puVar4 = PTR_PTR_1126d4f80;
      _objc_alloc();
      func_0x00010c04ac40();
      _objc_retain();
      uVar5 = *(undefined8 *)(param_1 + lVar21);
      *(undefined **)(param_1 + lVar21) = puVar4;
      _objc_release();
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b9f68);
      uVar6 = uVar5;
      func_0x00010beecc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar7 = PTR_PTR_1126aebd8;
      func_0x00010c14e320();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_88,puVar4);
      uVar5 = uVar6;
      func_0x00010bfe63a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      lVar19 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar9);
      puVar1 = auStack_88;
      _objc_copyWeak(auStack_90,puVar1);
      func_0x00010bf88c20(uVar8);
      _objc_release(puVar9);
      _objc_release(lVar19);
      _objc_release(uVar8);
      _objc_release(uVar5);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21));
      lVar19 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar19);
      lVar19 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15cda0();
      _objc_release(lVar19);
      lVar19 = (long)_DAT_112764b3c;
      uVar5 = *(undefined8 *)(param_1 + lVar21);
      if (*(long *)(param_1 + lVar19) == 0) {
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar19;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde1d40(param_1);
        uVar8 = uVar5;
        func_0x00010bf493c0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = (long)_DAT_112764b6c;
        uVar10 = *(undefined8 *)(param_1 + lVar20);
        *(undefined8 *)(param_1 + lVar20) = uVar8;
        _objc_release(uVar10);
        _objc_release(lVar11);
        _objc_release(lVar19);
        _objc_release(uVar5);
        func_0x00010c162480(*(undefined8 *)(param_1 + lVar20));
      }
      else {
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + lVar19);
        func_0x00010bf1ff80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010bf493a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162480();
        _objc_release(uVar8);
        _objc_release(uVar10);
        _objc_release(uVar5);
      }
      puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar12 = *(undefined8 *)(param_1 + lVar21);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar19;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar21);
      uStack_80 = uVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar20;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar21);
      uStack_78 = uVar8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar15;
      func_0x00010bf493c0(0xc04b800000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar9);
      _objc_release(puVar16);
      _objc_release(uVar10);
      _objc_release(lVar21);
      _objc_release(param_1);
      _objc_release(uVar15);
      _objc_release(uVar8);
      _objc_release(lVar14);
      _objc_release(lVar20);
      _objc_release(uVar13);
      _objc_release(uVar5);
      _objc_release(lVar11);
      _objc_release(lVar19);
      _objc_release(uVar12);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
  }
  _objc_release(uVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bf89350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_downloader_1125bfe78);
  return;
}



/* Entry: 107190130; end: 107190137;  */

void FUN_107190130(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_downloader_1125bfe78);
  return;
}



/* Entry: 107190138; end: 1071901e3;  */

void FUN_107190138(long param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1071901e4;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1071901e4; end: 10719021f;  */

void FUN_1071901e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2279c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107190220; end: 1071905d7; -[SCStickerPickerCategoryCell _displayCustomStickerZeroState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190220(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d4f88;
  _objc_alloc();
  func_0x00010c014e20(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  lVar12 = param_1;
  func_0x00010c0fba80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar2,param_2,lVar12);
  _objc_release(lVar12);
  lVar11 = (long)_DAT_112764b68;
  _objc_retain(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar2;
  _objc_release(uVar3);
  lVar12 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar12);
  lVar12 = (long)_DAT_112764b3c;
  lVar13 = *(long *)(param_1 + lVar12);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    lVar12 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde1d40(param_1);
    uVar5 = uVar3;
    func_0x00010bf493c0(uVar3,param_2,lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112764b6c;
    uVar4 = *(undefined8 *)(param_1 + lVar14);
    *(undefined8 *)(param_1 + lVar14) = uVar5;
    _objc_release(uVar4);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(uVar3);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar14),param_2,1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf493c0(0xc04b800000000000,uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar4);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_112764b68;
  func_0x00010c12c960(*(undefined8 *)(puVar2 + lVar12));
  uVar3 = *(undefined8 *)(puVar2 + lVar12);
  *(undefined8 *)(puVar2 + lVar12) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1071905d8; end: 10719060b; -[SCStickerPickerCategoryCell _removeFeedZeroState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071905d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764b68;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719060c; end: 107190677; -[SCStickerPickerCategoryCell _collectionViewInsetDidChange] */

/* WARNING: Possible PIC construction at 0x000107190638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107190658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010719063c) */
/* WARNING: Removing unreachable block (ram,0x00010719065c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719060c(long param_1)

{
  func_0x00010bde1d40();
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764b48),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 107190678; end: 1071906eb; -[SCStickerPickerCategoryCell _collectionTopInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107190678(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf4c7c0(*(undefined8 *)(param_2 + _DAT_112764aec));
  lVar1 = param_2;
  func_0x00010beb3a20();
  dVar2 = 50.0;
  if ((int)lVar1 == 0) {
    dVar2 = 12.0;
  }
  dVar3 = (param_1 - dVar2) + -20.0;
  if (*(char *)(param_2 + _DAT_112764b74) == '\0') {
    dVar3 = param_1 - dVar2;
  }
  return dVar3;
}



/* Entry: 1071906ec; end: 107190787; -[SCStickerPickerCategoryCell _subscribeToKeyboardNotifications] */

void FUN_1071906ec(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107190788; end: 107190813; -[SCStickerPickerCategoryCell _unsubscribeFromKeyboardNotifications] */

void FUN_107190788(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107190814; end: 107190827; -[SCStickerPickerCategoryCell _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764b3c),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107190828; end: 10719083b; -[SCStickerPickerCategoryCell _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764b3c),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 10719083c; end: 107190873; -[SCStickerPickerCategoryCell setUserBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719083c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764b28);
  *(undefined8 *)(param_1 + _DAT_112764b28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107190874; end: 1071908b3; -[SCStickerPickerCategoryCell setCtpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764ac0);
  *(undefined8 *)(param_1 + _DAT_112764ac0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be89d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerReusableViews_1125800e0);
  return;
}



/* Entry: 1071908b4; end: 1071908ff; -[SCStickerPickerCategoryCell setSourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071908b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112764ad8) = param_3;
  func_0x00010bed6e80();
  func_0x00010c207200(*(undefined8 *)(param_1 + _DAT_112764b78));
                    /* WARNING: Could not recover jumptable at 0x00010bee1290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStyles_112595e48);
  return;
}



/* Entry: 107190900; end: 10719096f; -[SCStickerPickerCategoryCell _spacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107190900(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = 8;
  if ((*(ulong *)(param_1 + _DAT_112764ad8) & 0xfffffffffffffffd) != 1) {
    lVar1 = 0;
  }
  dVar2 = *(double *)(&UNK_10de1fd60 + lVar1);
  dVar3 = dVar2 + (double)*(long *)(param_1 + _DAT_112764b7c) / -200.0;
  func_0x00010bf20c00();
  _CGRectGetWidth();
  return (long)(dVar2 * dVar3);
}



/* Entry: 107190970; end: 1071909f3; -[SCStickerPickerCategoryCell _sectionTopSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107190970(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_112764b64;
  lVar1 = *(long *)(param_2 + lVar3);
  func_0x00010c1568e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    dVar4 = 5.0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c1568e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar4 = (double)param_1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return dVar4;
}



/* Entry: 1071909f4; end: 107190a77; -[SCStickerPickerCategoryCell _sectionBottomSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1071909f4(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_112764b64;
  lVar1 = *(long *)(param_2 + lVar3);
  func_0x00010c155620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    dVar4 = 8.0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c155620(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar4 = (double)param_1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return dVar4;
}



/* Entry: 107190a78; end: 107190acf; -[SCStickerPickerCategoryCell _itemHeightWithSpacing:shouldDisplayScrollbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107190a78(double param_1,long param_2,undefined8 param_3,uint param_4)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010bdd8560();
  return (long)((dVar1 - param_1 * (double)(long)(*(long *)(param_2 + _DAT_112764b7c) +
                                                 (ulong)(param_4 ^ 1))) /
               (double)*(long *)(param_2 + _DAT_112764b7c));
}



/* Entry: 107190ad0; end: 107190bab; -[SCStickerPickerCategoryCell _scrollScrollbarToCurrentSectionAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112764b64);
  func_0x00010c22fb00();
  dVar5 = 0.0;
  dVar7 = 16.0;
  dVar8 = 16.0;
  if (iVar1 == 0) {
    dVar8 = 0.0;
  }
  lVar4 = (long)_DAT_112764aec;
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010bf4cdc0(lVar3);
  dVar6 = dVar5;
  func_0x00010bf4c7c0(*(undefined8 *)(param_1 + lVar4));
  dVar5 = dVar5 + dVar7;
  func_0x00010bf4cdc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bf4c7c0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfed040(dVar5,dVar8 + dVar7 + dVar6);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764b78);
    lVar4 = lVar3;
    func_0x00010c1554e0(lVar3);
    func_0x00010c152780(uVar2,param_2,lVar4,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107190bac; end: 107190c93; -[SCStickerPickerCategoryCell updateStickersInSection:columnCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190bac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_4 < 1) {
    param_4 = *(long *)(param_1 + _DAT_112764b7c);
  }
  *(long *)(param_1 + _DAT_112764b7c) = param_4;
  if (*(char *)(param_1 + _DAT_112764ac8) == '\x01') {
    uVar1 = *(ulong *)(param_1 + _DAT_112764acc);
    func_0x00010c2331a0();
    param_3 = param_3 + (uVar1 & 0xffffffff);
  }
  lVar5 = (long)_DAT_112764aec;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c0df2e0();
  if (param_3 < lVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf408e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0(uVar3);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c138e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetLayout_11262bdb8);
    return;
  }
  return;
}



/* Entry: 107190c94; end: 107190d3b; -[SCStickerPickerCategoryCell removeSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190c94(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + _DAT_112764ac8) == '\x01') {
    uVar1 = *(ulong *)(param_1 + _DAT_112764acc);
    func_0x00010c2331a0();
    param_3 = param_3 + (uVar1 & 0xffffffff);
  }
  lVar5 = (long)_DAT_112764aec;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c0df2e0();
  if (param_3 < lVar2) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c740(uVar4,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107190d3c; end: 107190f4b; -[SCStickerPickerCategoryCell resetLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190d3c(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  if (*(char *)(param_2 + _DAT_112764b80) == '\x01') {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar4 = param_1 + -21.0;
    lVar3 = (long)_DAT_112764ae0;
    uVar5 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    dVar6 = (param_1 - *(double *)(param_2 + lVar3)) + -55.0;
    lVar3 = (long)_DAT_112764b78;
    if (*(long *)(param_2 + lVar3) == 0) {
      puVar1 = PTR_PTR_1126d4f90;
      _objc_alloc();
      func_0x00010c013de0(dVar4,uVar5,0x4035000000000000,dVar6);
      uVar5 = *(undefined8 *)(param_2 + lVar3);
      *(undefined **)(param_2 + lVar3) = puVar1;
      _objc_release(uVar5);
      func_0x00010c207200(*(undefined8 *)(param_2 + lVar3));
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar3));
      lVar2 = param_2;
      func_0x00010bf4dce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar2);
      param_1 = dVar4;
    }
    else {
      func_0x00010c19f0e0(dVar4,uVar5,0x4035000000000000,dVar6);
      param_1 = dVar4;
    }
    func_0x00010c1558c0(*(undefined8 *)(param_2 + _DAT_112764b64));
    func_0x00010c1f9180(*(undefined8 *)(param_2 + lVar3));
    uVar5 = *(undefined8 *)(param_2 + lVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + _DAT_112764b78);
  }
  func_0x00010c1a7f60(uVar5);
  func_0x00010bebe7e0(param_2);
  dVar4 = param_1;
  func_0x00010be45d20(param_2);
  *(double *)(param_2 + _DAT_112764b84) = dVar4;
  lVar3 = param_2;
  func_0x00010bde86a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + _DAT_112764b14);
  *(long *)(param_2 + _DAT_112764b14) = lVar3;
  _objc_release(uVar5);
  lVar3 = param_2;
  func_0x00010c08c7c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8300(param_1);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c08c7c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(lVar3);
  if (*(long *)(param_2 + _DAT_112764b88) != 0) {
    *(undefined8 *)(param_2 + _DAT_112764b88) = 0;
    _objc_release();
    func_0x00010bfe27e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be48fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__layoutCollectionView_11256fd88);
  return;
}



/* Entry: 107190f4c; end: 107190f93; -[SCStickerPickerCategoryCell layoutSubviews] */

void FUN_107190f4c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8ae0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be48fa0(param_1);
  return;
}



/* Entry: 107190f94; end: 107190fe7; -[SCStickerPickerCategoryCell _layoutCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107190f94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdd8560();
  uVar1 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,uVar1,*(undefined8 *)(param_2 + _DAT_112764aec),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107190fe8; end: 107191023; -[SCStickerPickerCategoryCell _calculateContentWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107190fe8(double param_1,long param_2)

{
  char cVar1;
  double dVar2;
  
  cVar1 = *(char *)(param_2 + _DAT_112764b80);
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = param_1 + -21.0;
  if (cVar1 == '\0') {
    dVar2 = param_1;
  }
  return dVar2;
}



/* Entry: 107191024; end: 10719146f; -[SCStickerPickerCategoryCell setStickerCategory:superCategoryType:queryKeywords:enableWhiteUI:columnCount:userSession:explicitSearchDelegate:stickerInjector:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191024(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_5);
  func_0x00010be051e0(param_1);
  puVar4 = PTR_PTR_1126d4f78;
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar5 = uVar1;
  func_0x00010bfa3620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2480a0();
  if ((long)uVar6 < 1) {
    *(undefined8 *)(param_1 + _DAT_112764b7c) = param_7;
  }
  else {
    uVar6 = uVar1;
    func_0x00010bfa3620();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2480a0();
    *(ulong *)(param_1 + _DAT_112764b7c) = uVar7;
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  lVar11 = (long)_DAT_112764acc;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  uVar8 = param_5;
  func_0x00010bf51e00(param_5);
  _objc_release(param_5);
  func_0x00010c20faa0(uVar10);
  _objc_release(uVar8);
  if (*(char *)(param_1 + _DAT_112764ac8) == '\x01') {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + lVar11);
    func_0x00010c2331a0();
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + _DAT_112764ad0) = uVar2;
  lVar11 = (long)_DAT_112764b8c;
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(ulong *)(param_1 + lVar11) = param_3;
  _objc_release(uVar8);
  *(long *)(param_1 + _DAT_112764b4c) = param_4;
  _objc_storeWeak(param_1 + _DAT_112764b44,param_9);
  _objc_release(param_9);
  lVar12 = (long)_DAT_112764b70;
  _objc_retain(param_8);
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = param_8;
  _objc_release(uVar8);
  lVar12 = (long)_DAT_112764b90;
  _objc_retain(param_10);
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = param_10;
  _objc_release(uVar8);
  lVar12 = (long)_DAT_112764ac0;
  _objc_retain(param_11);
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = param_11;
  _objc_release(uVar8);
  iVar3 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c22fae0();
  if (iVar3 == 0) {
    bVar9 = false;
  }
  else {
    lVar11 = *(long *)(param_1 + lVar11);
    func_0x00010c1558c0();
    bVar9 = 1 < lVar11;
  }
  *(bool *)(param_1 + _DAT_112764b80) = bVar9;
  puVar4 = PTR_PTR_1126d4f98;
  _objc_alloc();
  func_0x00010c04c6e0();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112764b94);
  *(undefined **)(param_1 + _DAT_112764b94) = puVar4;
  _objc_release(uVar8);
  if ((param_4 == 3) && ((*(byte *)(param_1 + _DAT_112764b5c) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112764b5c) = 1;
    func_0x00010befa220(*(undefined8 *)(param_1 + _DAT_112764aec));
  }
  lVar11 = (long)_DAT_112764b64;
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(ulong *)(param_1 + lVar11) = param_3;
  _objc_release(uVar8);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112764ac4);
  func_0x00010c088c60(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010bed4040(param_1);
  *(char *)(param_1 + _DAT_112764b98) = (char)param_6;
  puVar4 = PTR_PTR_1126cbde8;
  func_0x00010c07d4e0();
  dVar15 = 80.0;
  if ((int)puVar4 == 0) {
    dVar15 = 71.0;
  }
  if ((param_6 != 0) && ((int)puVar4 != 0)) {
    dVar13 = 15.0;
    dVar15 = 8.0;
    if (param_4 == 3) {
      dVar15 = 15.0;
    }
    func_0x00010be9d040(param_1);
    dVar14 = dVar13;
    func_0x00010be9cbc0(param_1);
    dVar15 = dVar15 + dVar13 + dVar14;
  }
  lVar11 = (long)_DAT_112764ae0;
  *(double *)(param_1 + lVar11) = dVar15;
  func_0x00010bec7720(param_1);
  uVar5 = param_3;
  func_0x00010c254e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0cc0(param_1);
  _objc_release(uVar5);
  func_0x00010bdc63e0(param_1);
  if (uVar1 == 0) {
    func_0x00010be8a740(param_1);
  }
  dVar13 = *(double *)(param_1 + lVar11);
  func_0x00010be9d040(param_1);
  dVar13 = dVar13 - dVar15;
  func_0x00010be9cbc0(param_1);
  func_0x00010bed5600(dVar13 - dVar15,param_1);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107191470; end: 10719159f; -[SCStickerPickerCategoryCell _updateBirthdaySearchPillIfNeededForFriendmojiUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191470(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb3a20();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar2 & 1) == 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112764b00);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c2448c0(uVar3);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071915a0; end: 107191633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071915a0(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_opt_new(puVar1);
    func_0x00010901cdb0(param_2,puVar1);
    _objc_release(param_2);
    _objc_release(puVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010c170500(*(undefined8 *)(param_1 + _DAT_112764b3c));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107191634; end: 107191683; -[SCStickerPickerCategoryCell _onAvatarCreatedFromBitmojiCTA] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191634(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764b9c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112764ba0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be8a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadCollectionView_112580370);
  return;
}



/* Entry: 107191684; end: 107191773; -[SCStickerPickerCategoryCell _updateStickerSearchDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191684(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bee2ae0(param_1);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764b60);
    *(long *)(param_1 + _DAT_112764b60) = lVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107191774; end: 10719194f;  */

void FUN_107191774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x2020000000;
    uStack_88 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_107191950;
    uStack_b0 = 0x107191960;
    uStack_a8 = 0;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_107191968;
    puStack_f8 = &UNK_110990de0;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_107191a14;
    puStack_128 = &UNK_1108b9728;
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x107191a38;
    puStack_158 = &UNK_110860b78;
    puStack_150 = &uStack_80;
    puStack_148 = &uStack_d0;
    puStack_120 = &uStack_80;
    puStack_118 = &uStack_d0;
    lStack_f0 = param_1;
    puStack_e8 = &uStack_80;
    puStack_e0 = &uStack_a0;
    puStack_d8 = &uStack_d0;
    puStack_c8 = &uStack_d0;
    puStack_98 = &uStack_a0;
    puStack_78 = &uStack_80;
    func_0x00010c0c04c0(param_2);
    puStack_1b0 = puVar1;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_107191a5c;
    puStack_198 = &UNK_1109072a8;
    lStack_190 = param_1;
    puStack_188 = &uStack_80;
    puStack_180 = &uStack_d0;
    puStack_178 = &uStack_a0;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_1b0);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 107191950; end: 107191967;  */

void FUN_107191950(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107191968; end: 107191a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191968(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764b50) = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    *(undefined8 *)(lVar2 + 0x18) = 5;
  }
  else {
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107191a14; end: 107191a5b;  */

void FUN_107191a14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107191a5c; end: 107191ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191a5c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  func_0x00010bee2ae0(*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bed23e0();
  if (iVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  }
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764aec),
               PTR_s_reloadData_112627cf8);
    return;
  }
  return;
}



/* Entry: 107191ae4; end: 107191b4f; -[SCStickerPickerCategoryCell _reloadCollectionView] */

void FUN_107191ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107191b50;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  func_0x00010c138e60(param_1);
  return;
}



/* Entry: 107191b50; end: 107191b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764aec),
             PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 107191b64; end: 107191c17; -[SCStickerPickerCategoryCell setContentOffsetY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191b64(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_112764aec;
  dVar3 = param_1;
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar2));
  if (-dVar3 <= param_1) {
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010bf408e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf407a0();
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
    _objc_release(uVar1);
    if (param_1 <= (param_2 + param_3) - param_4) {
      func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_5 + lVar2),PTR_s_setContentOffset__11263e2d8);
      return;
    }
  }
  return;
}



/* Entry: 107191c18; end: 107191c3b; -[SCStickerPickerCategoryCell contentOffsetY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107191c18(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_112764aec));
  return param_2;
}



/* Entry: 107191c3c; end: 107191d33; -[SCStickerPickerCategoryCell setBottomInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191c3c(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == *(double *)(param_2 + _DAT_112764ba4)) {
    return;
  }
  *(double *)(param_2 + _DAT_112764ba4) = param_1;
  if (param_1 <= 0.0) {
    lVar2 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_2 + _DAT_112764b20);
  }
  else {
    lVar4 = (long)_DAT_112764b20;
    lVar2 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_2 + lVar4);
  }
  func_0x00010c1a7f60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107191d34; end: 107191d7b; -[SCStickerPickerCategoryCell isAtTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107191d34(double param_1,double param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112764aec;
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar1));
  func_0x00010bf4c7c0(*(undefined8 *)(param_3 + lVar1));
  return param_1 <= -param_2;
}



/* Entry: 107191d7c; end: 107191dc7; -[SCStickerPickerCategoryCell scrollToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107191d7c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_112764aec;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar1));
  dVar2 = param_1;
  func_0x00010bf4c7c0(*(undefined8 *)(param_2 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,-dVar2,*(undefined8 *)(param_2 + lVar1),PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 107191dc8; end: 107191e0f; -[SCStickerPickerCategoryCell isCollectionViewGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107191dc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + _DAT_112764aec);
  _objc_release();
  return param_3 == lVar1;
}



/* Entry: 107191e10; end: 10719201b; -[SCStickerPickerCategoryCell canSubCellCollectionViewHandleGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107191e10(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112764b64;
  lVar6 = *(long *)(param_1 + lVar7);
  puVar5 = PTR_PTR_1126d4fa0;
  func_0x00010bfccb40(PTR_PTR_1126d4fa0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c156080();
  if (lVar6 == 0x7fffffffffffffff) {
    lVar6 = *(long *)(param_1 + lVar7);
    puVar1 = PTR_PTR_1126d4fa0;
    func_0x00010bfccbe0(PTR_PTR_1126d4fa0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156080();
    _objc_release(puVar1);
    _objc_release(puVar5);
    if (lVar6 == 0x7fffffffffffffff) {
      puVar5 = (undefined *)0x0;
      goto LAB_107191fd4;
    }
  }
  else {
    _objc_release(puVar5);
  }
  lVar2 = *(long *)(param_1 + _DAT_112764aec);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar5 = (undefined *)0x0;
  if (lVar7 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        puVar5 = *(undefined **)(lVar8 * 8);
        puVar1 = PTR_PTR_1126d4f50;
        _objc_opt_class(PTR_PTR_1126d4f50);
        puVar3 = puVar5;
        _objc_opt_isKindOfClass(puVar5,puVar1);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010c09ef00(param_3);
          func_0x00010bf20c00(puVar5);
          _CGRectContainsPoint();
          goto LAB_107191fc4;
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = lVar2;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
    puVar5 = (undefined *)0x0;
  }
LAB_107191fc4:
  _objc_release(lVar2);
  _objc_release(lVar2);
LAB_107191fd4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    if (*(long *)(param_3 + _DAT_112764b10) != 0) {
      param_3 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf03440(0x3fc999999999999a,0x4000000000000000,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    return param_3;
  }
  return puVar5;
}



/* Entry: 10719201c; end: 1071920b7; -[SCStickerPickerCategoryCell fadeOutTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719201c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_112764b10) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1071920b8;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1071920d0;
    puStack_48 = &UNK_110841f20;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fc999999999999a,0x4000000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                        param_2,0,&puStack_38,&puStack_60);
  }
  return;
}



/* Entry: 1071920b8; end: 1071920cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071920b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764b10),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1071920d0; end: 10719210b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071920d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764b10;
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10719210c; end: 107192437; -[SCStickerPickerCategoryCell showToolTipBelowFirstCellWithText:] */

/* WARNING: Possible PIC construction at 0x000107192204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107192208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719210c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112764aec;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c0df2e0();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_112764b10;
    if (*(long *)(param_1 + lVar1) == 0) {
      func_0x00010c08cdc0(param_1);
      lVar5 = *(long *)(param_1 + lVar5);
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (lVar5 != 0) {
        puVar2 = PTR_PTR_1126b6950;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar4 = *(undefined8 *)(param_1 + lVar1);
        *(undefined **)(param_1 + lVar1) = puVar2;
        _objc_release(uVar4);
        func_0x00010c219b60(*(undefined8 *)(param_1 + lVar1));
        uVar4 = *(undefined8 *)(param_1 + lVar1);
        uVar6 = 0;
        goto code_r0x00010c1677c0;
      }
      _objc_release(0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_112764b10);
  uVar6 = 0x3ff0000000000000;
code_r0x00010c1677c0:
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,uVar4,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107192438; end: 107192457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107192438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764b10),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107192458; end: 10719263b; -[SCStickerPickerCategoryCell layoutSublayersOfLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107192458(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  double in_d3;
  double dVar11;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar3 = PTR_s_layoutSublayersOfLayer__1125377f8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126f8ae0;
  puStack_88 = param_1;
  _objc_retain(param_3);
  puVar7 = param_3;
  _objc_msgSendSuper2(&puStack_88,puVar3,param_3);
  puVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  _objc_release();
  if (param_3 == puVar2) {
    puVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar10 = (long)_DAT_112764b20;
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar10));
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar3);
    dVar11 = in_d3 - *(double *)(param_1 + _DAT_112764ba4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((dVar11 + -20.0) / in_d3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar3;
    func_0x00010c0df720((dVar11 + -10.0) / in_d3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_70 = puVar2;
    func_0x00010c0df720(dVar11 / in_d3);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184ea0;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c1bff00(*(undefined8 *)(param_1 + lVar10));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar10 = (long)_DAT_112764b64;
  uVar8 = *(ulong *)(puVar3 + lVar10);
  puVar2 = PTR_PTR_1126d4f78;
  _objc_opt_class(PTR_PTR_1126d4f78);
  _objc_opt_isKindOfClass(uVar8,puVar2);
  puVar2 = PTR_PTR_1126d4f78;
  if ((uVar8 & 1) == 0) {
    bVar1 = puVar3[_DAT_112764ad0];
    lVar10 = *(long *)(puVar3 + lVar10);
    func_0x00010c1558c0(lVar10);
    puVar3 = (undefined *)(lVar10 + (ulong)bVar1);
  }
  else {
    uVar9 = *(ulong *)(puVar3 + lVar10);
    _objc_retain(uVar9);
    _objc_opt_class(puVar2);
    uVar6 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar2);
    uVar8 = uVar9;
    if ((uVar6 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    func_0x00010be656c0(puVar3);
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  return puVar3;
}



/* Entry: 10719263c; end: 10719271b; -[SCStickerPickerCategoryCell numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10719263c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112764b64;
  uVar4 = *(ulong *)(param_1 + lVar6);
  puVar2 = PTR_PTR_1126d4f78;
  _objc_opt_class(PTR_PTR_1126d4f78);
  _objc_opt_isKindOfClass(uVar4,puVar2);
  puVar2 = PTR_PTR_1126d4f78;
  if ((uVar4 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112764ad0);
    param_1 = *(long *)(param_1 + lVar6);
    func_0x00010c1558c0(param_1);
    param_1 = param_1 + (ulong)bVar1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar2);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    func_0x00010be656c0(param_1);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10719271c; end: 1071928ef; -[SCStickerPickerCategoryCell collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10719271c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if ((param_4 != 0) || ((*(byte *)(param_1 + (long)_DAT_112764ad0) & 1) == 0)) {
    func_0x00010bde9de0(param_1);
    uVar1 = param_1;
    func_0x00010be49d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    lVar6 = (long)_DAT_112764b64;
    uVar1 = *(ulong *)(param_1 + lVar6);
    func_0x00010c230ee0();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + lVar6);
      puVar2 = PTR_PTR_1126d4f78;
      _objc_opt_class(PTR_PTR_1126d4f78);
      _objc_opt_isKindOfClass(uVar1,puVar2);
      if ((uVar1 & 1) != 0) {
        func_0x00010be65560(param_1);
        uVar5 = param_1;
        goto LAB_1071927b0;
      }
      if (*(long *)(param_1 + (long)_DAT_112764b4c) == 9) {
        uVar1 = *(ulong *)(param_1 + lVar6);
        func_0x00010c0717c0();
        if ((uVar1 & 1) != 0) goto LAB_1071927b0;
      }
      if ((long)uVar5 < 1) {
        uVar5 = param_1;
        func_0x00010c074740();
        if ((uVar5 & 1) != 0) goto LAB_1071927ac;
        lVar4 = *(long *)(param_1 + lVar6);
        func_0x00010c1558c0();
        if (lVar4 == 0) {
          uVar5 = 0;
          goto LAB_1071927b0;
        }
        uVar1 = param_1;
        func_0x00010beb3280();
        uVar3 = *(ulong *)(param_1 + lVar6);
        func_0x00010c255420(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf529e0();
        if ((int)uVar1 != 0) {
          lVar4 = *(long *)(param_1 + (long)_DAT_112764ba8);
          func_0x00010c084fc0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010bf529e0();
          uVar5 = lVar6 + uVar5;
          _objc_release(lVar4);
        }
      }
      else {
        uVar3 = *(ulong *)(param_1 + lVar6);
        func_0x00010c255420(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010bf529e0();
        uVar5 = uVar1 + uVar5;
      }
      _objc_release(uVar3);
      goto LAB_1071927b0;
    }
  }
LAB_1071927ac:
  uVar5 = 1;
LAB_1071927b0:
  _objc_release(param_3);
  return uVar5;
}


