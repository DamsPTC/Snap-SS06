/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ec2b64; end: 108ec2b9b; -[SCMemoriesPhotoLibraryFetchParamsBuilder withFetchLimit:] */

long FUN_108ec2b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ec2b9c; end: 108ec2bd3; -[SCMemoriesPhotoLibraryFetchParamsBuilder withPredicates:] */

long FUN_108ec2b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ec2bd4; end: 108ec2c0b; -[SCMemoriesPhotoLibraryFetchParamsBuilder withMediaType:] */

long FUN_108ec2bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ec2c0c; end: 108ec2c43; -[SCMemoriesPhotoLibraryFetchParamsBuilder withAssetCollection:] */

long FUN_108ec2c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ec2c44; end: 108ec2c7b; -[SCMemoriesPhotoLibraryFetchParamsBuilder withCreationDateEnd:] */

long FUN_108ec2c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ec2c7c; end: 108ec2cdb; -[SCMemoriesPhotoLibraryFetchParamsBuilder .cxx_destruct] */

void FUN_108ec2c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ec2cdc; end: 108ec2d47; +[SCGenericImageStickerSource boltWithBoltUrlString:] */

void FUN_108ec2cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4970;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ec2d48; end: 108ec2db3; +[SCGenericImageStickerSource externalWithExternalUrlString:] */

void FUN_108ec2d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4970;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ec2db4; end: 108ec2e17; +[SCGenericImageStickerSource localWithLocalUrlString:] */

void FUN_108ec2db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4970;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ec2e18; end: 108ec2e3b; -[SCGenericImageStickerSource copyWithZone:] */

undefined8 FUN_108ec2e18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ec2e3c; end: 108ec2ebf; -[SCGenericImageStickerSource hash] */

void FUN_108ec2e3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126ff0c0;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec2ec0; end: 108ec2f03; -[SCGenericImageStickerSource internalInit] */

void FUN_108ec2ec0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff0c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec2f04; end: 108ec2fd3; -[SCGenericImageStickerSource isEqual:] */

long FUN_108ec2f04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ec2fac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ec2fb8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108ec2fb8;
          }
          goto LAB_108ec2fac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ec2fb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ec2fd4; end: 108ec307f; -[SCGenericImageStickerSource matchLocal:external:bolt:] */

void FUN_108ec2fd4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_108ec305c;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_108ec305c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_108ec305c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108ec305c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ec3080; end: 108ec30bb; -[SCGenericImageStickerSource .cxx_destruct] */

void FUN_108ec3080(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ec30bc; end: 108ec32bf;  */

void FUN_108ec30bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar4 = *(ulong *)(lVar10 * 8);
      func_0x00010bf5d7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar4 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010bf62ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c08fa60();
      _objc_release(uVar7);
      _objc_release(uVar5);
      if (uVar8 != 0) {
        uVar5 = uVar4;
        func_0x00010bf62ee0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar7);
        _objc_release(uVar5);
      }
      _objc_release(uVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ec32c0; end: 108ec32fb; -[SCPreviewStickerViewContentView drawScreenshotImageInCurrentContextWithRect:] */

void FUN_108ec32c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ec32fc; end: 108ec3303; -[SCPreviewStickerViewContentView hasImage] */

undefined8 FUN_108ec32fc(void)

{
  return 1;
}



/* Entry: 108ec3304; end: 108ec330b; -[SCPreviewStickerViewContentView shouldRespondToLongPress:] */

undefined8 FUN_108ec3304(void)

{
  return 1;
}



/* Entry: 108ec330c; end: 108ec3313; -[SCPreviewStickerViewContentView shouldRespondToTap:] */

undefined8 FUN_108ec330c(void)

{
  return 0;
}



/* Entry: 108ec3314; end: 108ec331b; -[SCPreviewStickerViewContentView shouldRespondToTouchControl:] */

undefined8 FUN_108ec3314(void)

{
  return 0;
}



/* Entry: 108ec331c; end: 108ec331f; -[SCPreviewStickerViewContentView tap:] */

void FUN_108ec331c(void)

{
  return;
}



/* Entry: 108ec3320; end: 108ec3323; -[SCPreviewStickerViewContentView pan:] */

void FUN_108ec3320(void)

{
  return;
}



/* Entry: 108ec3324; end: 108ec332b; -[SCPreviewStickerViewContentView renderState] */

undefined8 FUN_108ec3324(void)

{
  return 0;
}



/* Entry: 108ec332c; end: 108ec332f; -[SCPreviewStickerViewContentView onStickerViewScaled:] */

void FUN_108ec332c(void)

{
  return;
}



/* Entry: 108ec3330; end: 108ec3337; -[SCPreviewStickerViewContentView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_108ec3330(void)

{
  return 1;
}



/* Entry: 108ec3338; end: 108ec333f; -[SCPreviewStickerViewContentView scaleLimit] */

undefined8 FUN_108ec3338(void)

{
  return 1;
}



/* Entry: 108ec3340; end: 108ec3347; -[SCPreviewStickerViewContentView tappableElementBounds] */

undefined8 FUN_108ec3340(void)

{
  return 0;
}



/* Entry: 108ec3348; end: 108ec3357; -[SCPreviewStickerViewContentView previewContentSize] */

undefined1  [16] FUN_108ec3348(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108ec3358; end: 108ec3377; -[SCPreviewStickerViewContentView sizeChangeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec3358(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec3378; end: 108ec338b; -[SCPreviewStickerViewContentView setSizeChangeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec3378(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d3e0,param_3);
  return;
}



/* Entry: 108ec338c; end: 108ec33ab; -[SCPreviewStickerViewContentView metadataChangeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec338c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d3e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec33ac; end: 108ec33bf; -[SCPreviewStickerViewContentView setMetadataChangeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec33ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d3e4,param_3);
  return;
}



/* Entry: 108ec33c0; end: 108ec33f7; -[SCPreviewStickerViewContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec33c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277d3e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277d3e0);
  return;
}



/* Entry: 108ec33f8; end: 108ec344b; -[CompletionAnimationGroup init] */

undefined1 * FUN_108ec33f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff0c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ec344c; end: 108ec34ab; -[CompletionAnimationGroup animationDidStop:finished:] */

void FUN_108ec344c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108ec34ac; end: 108ec34bb; -[CompletionAnimationGroup completion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec34ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d3e8);
}



/* Entry: 108ec34bc; end: 108ec34c7; -[CompletionAnimationGroup setCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec34bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ec34c8; end: 108ec34db; -[CompletionAnimationGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec34c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d3e8,0);
  return;
}



/* Entry: 108ec34dc; end: 108ec3547; -[SCPreviewStickerViewTransitionAnimator initWithAnimatingView:] */

undefined1 * FUN_108ec34dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff0d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ec3548; end: 108ec3677; -[SCPreviewStickerViewTransitionAnimator cancelAnimations] */

void FUN_108ec3548(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_c0;
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
  
  lVar1 = param_1;
  func_0x00010bf03980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c252100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c252100();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bdc0f80(&uStack_c0,lVar1);
    }
    lVar2 = param_1;
    func_0x00010bf03980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c209d80(param_1,param_2,0);
  }
  return;
}



/* Entry: 108ec3678; end: 108ec3d3b; -[SCPreviewStickerViewTransitionAnimator transitionWithBlock:] */

/* WARNING: Possible PIC construction at 0x000108ec373c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ec3740) */
/* WARNING: Removing unreachable block (ram,0x000108ec3790) */
/* WARNING: Removing unreachable block (ram,0x000108ec3780) */
/* WARNING: Removing unreachable block (ram,0x000108ec37a4) */

void FUN_108ec3678(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    (**(code **)(*(long *)(param_3 + 0x40) + 0x10))();
    puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fb999999999999a);
    func_0x00010c216080(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar6);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar6);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fb999999999999a);
    func_0x00010c216080(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_3 + 0x148),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126dc628;
    func_0x00010bf039a0(PTR_PTR_1126dc628);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fb999999999999a);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar2);
    _objc_release(puVar3);
    func_0x00010c17fb20(puVar2);
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010bf03980(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010bf03980(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010bf03980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    param_1 = *(long *)(puVar6 + 0x20);
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010bf2de20(param_1);
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    lVar7 = param_1;
    func_0x00010bf03980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_160,lVar7);
    }
    func_0x00010c297140(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStartingTransformValue__112660188,puVar6);
  return;
}



/* Entry: 108ec3d3c; end: 108ec40db;  */

void FUN_108ec3d3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fb999999999999a);
  func_0x00010c216080(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fb999999999999a);
  func_0x00010c216080(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x148),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126dc628;
  func_0x00010bf039a0(PTR_PTR_1126dc628);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fb999999999999a);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3);
  _objc_release(puVar4);
  func_0x00010c17fb20(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf03980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf03980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf03980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c209d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s_setStartingTransformValue__112660188,0);
  return;
}



/* Entry: 108ec40dc; end: 108ec40e7;  */

void FUN_108ec40dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setStartingTransformValue__112660188,0);
  return;
}



/* Entry: 108ec40e8; end: 108ec40ff; -[SCPreviewStickerViewTransitionAnimator animatingView] */

void FUN_108ec40e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec4100; end: 108ec410b; -[SCPreviewStickerViewTransitionAnimator setAnimatingView:] */

void FUN_108ec4100(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 108ec410c; end: 108ec4113; -[SCPreviewStickerViewTransitionAnimator startingTransformValue] */

undefined8 FUN_108ec410c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ec4114; end: 108ec411b; -[SCPreviewStickerViewTransitionAnimator setStartingTransformValue:] */

void FUN_108ec4114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ec411c; end: 108ec4147; -[SCPreviewStickerViewTransitionAnimator .cxx_destruct] */

void FUN_108ec411c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108ec4148; end: 108ec457b; -[SCPreviewStickerView initWithCTItemInstance:presentationModelProviderType:sticker:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ec4148(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126ff0d8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126dbc28;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_4 != 0) {
      uVar7 = param_6;
      func_0x00010c2540c0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1235a0(puVar3);
      _objc_release(uVar7);
    }
    _objc_retain(param_6);
    uVar2 = param_6;
    func_0x000107c318f8(param_6,PTR_DAT_1126a5b48);
    uVar7 = param_6;
    if ((int)uVar2 == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d410);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d410) = uVar7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d414);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d414) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126dc630;
    _objc_alloc();
    func_0x00010bff2e80();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d418);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d418) = puVar3;
    _objc_release(uVar7);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d41c) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d420) = 1;
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = puVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d424);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d424) = puVar4;
    _objc_release(uVar7);
    func_0x00010c160fc0(puVar1);
    uVar7 = param_7;
    func_0x00010c29ce00(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar5 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = uVar7;
    func_0x00010c0e0460(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(puVar3);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar7);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108ec457c; end: 108ec45eb;  */

void FUN_108ec457c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ec45ec; end: 108ec4a27; -[SCPreviewStickerView initWithCTPItem:ctpItemViewService:presentationModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ec45ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126ff0d8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_4;
    func_0x00010c2721e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126dbc28;
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c2540c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1235a0(puVar6);
      _objc_release(lVar3);
    }
    _objc_retain(lVar2);
    lVar4 = lVar2;
    func_0x000107c318f8(lVar2,PTR_DAT_1126a5b48);
    lVar3 = lVar2;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d410);
    *(long *)((long)puVar1 + (long)_DAT_11277d410) = lVar3;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d414);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d414) = puVar6;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126dc630;
    _objc_alloc();
    func_0x00010bff2e80();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d418);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d418) = puVar6;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d41c) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d420) = 1;
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar7 = puVar6;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d424);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d424) = puVar7;
    _objc_release(uVar5);
    func_0x00010c160fc0(puVar1);
    uVar5 = param_5;
    func_0x00010c29cde0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(puVar8);
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar8 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(param_1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_initWeak(auStack_88,puVar1);
    uVar9 = uVar5;
    func_0x00010c0e0460(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(puVar6);
    uVar10 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108ec4a28; end: 108ec4a97;  */

void FUN_108ec4a28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ec4a98; end: 108ec4a9f; -[SCPreviewStickerView initWithSticker:itemView:] */

void FUN_108ec4a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSticker_itemView_creativ_1125f0ba0,param_3,param_4,0);
  return;
}



/* Entry: 108ec4aa0; end: 108ec4d57; -[SCPreviewStickerView initWithSticker:itemView:creativeToolsABProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ec4aa0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
  puStack_68 = PTR_PTR_1126ff0d8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(uVar7,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  puVar4 = PTR_PTR_1126dbc28;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 != 0) {
      lVar6 = param_3;
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1235a0(puVar4);
      _objc_release(lVar6);
    }
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x000107c318f8(param_3,PTR_DAT_1126a5b48);
    lVar6 = param_3;
    if ((int)lVar2 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d410);
    *(long *)((long)puVar1 + (long)_DAT_11277d410) = lVar6;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d41c) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d420) = 1;
    puVar4 = PTR_PTR_1126dc630;
    _objc_alloc();
    func_0x00010bff2e80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d418);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d418) = puVar4;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_11277d428;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar3);
    func_0x00010c21dbe0(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010be2b040(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ec4d58; end: 108ec5097; -[SCPreviewStickerView initWithSticker:image:isAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ec4d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             int param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x000107c308a4();
  puStack_68 = PTR_PTR_1126ff0d8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  puVar4 = PTR_PTR_1126dbc28;
  if (puVar1 != (undefined8 *)0x0) {
    if ((param_4 != 0) && (param_5 != 0)) {
      lVar6 = param_4;
      func_0x00010c2540c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1235a0(puVar4);
      _objc_release(lVar6);
    }
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x000107c318f8(param_4,PTR_DAT_1126a5b48);
    lVar6 = param_4;
    if ((int)lVar2 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d410);
    *(long *)((long)puVar1 + (long)_DAT_11277d410) = lVar6;
    _objc_release(uVar3);
    if (param_6 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
    }
    else {
      puVar4 = PTR_PTR_1126bb2a0;
      _objc_alloc();
      func_0x00010c01bf60();
    }
    lVar6 = (long)_DAT_11277d42c;
    _objc_retain();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar4);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar6));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(param_1);
    _objc_release(uVar3);
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR_PTR_1126dc630;
    _objc_alloc();
    func_0x00010bff2e80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d418);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d418) = puVar4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d430) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d41c) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d420) = 1;
    *(char *)((long)puVar1 + (long)_DAT_11277d434) = (char)param_6;
    func_0x00010c160fc0(puVar1);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108ec5098; end: 108ec51e7; -[SCPreviewStickerView initWithSticker:center:fontSize:thumbnail:shouldLimitSize:userSession:isAnimated:] */

undefined8
FUN_108ec5098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar1 = param_6;
  func_0x00010c27dd80();
  uVar2 = 0;
  if (uVar1 < 0xc) {
    if ((1L << (uVar1 & 0x3f) & 0xfbcU) == 0) {
      if (uVar1 != 1) goto LAB_108ec5150;
      func_0x00010be3aea0(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      func_0x00010be3acc0(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    }
    _objc_retain();
    uVar2 = param_4;
  }
LAB_108ec5150:
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 108ec51e8; end: 108ec52af; -[SCPreviewStickerView initWithSticker:contentView:] */

undefined8
FUN_108ec51e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double dVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfb68e0(param_5);
  _CGRectGetWidth();
  dVar1 = param_1;
  func_0x00010bfb68e0(param_5);
  _CGRectGetHeight();
  func_0x00010c04c620(param_1 * 0.5,dVar1 * 0.5,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 108ec52b0; end: 108ec559b; -[SCPreviewStickerView initWithSticker:contentView:center:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ec52b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ff0d8;
  uStack_60 = param_3;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = param_5;
    func_0x000107c318f8(param_5,PTR_DAT_1126a5b48);
    uVar5 = param_5;
    if ((int)uVar2 == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d410);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d410) = uVar5;
    _objc_release(uVar2);
    func_0x00010c21dbe0(puVar1);
    func_0x00010bea2fa0(puVar1);
    lVar6 = (long)_DAT_11277d438;
    func_0x00010befbb60(puVar1);
    func_0x00010c23d620(puVar1);
    func_0x00010c17a6a0(param_1,param_2,puVar1);
    func_0x00010bf20c00(puVar1);
    _CGRectGetWidth();
    dVar7 = param_1;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    param_1 = param_1 * 0.5;
    func_0x00010c17a6a0(param_1,dVar7 * 0.5,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c202ce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1c7480(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR_PTR_1126dc630;
    _objc_alloc();
    func_0x00010bff2e80();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d418);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d418) = puVar3;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d430) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d41c) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d420) = 1;
    func_0x00010c160fc0(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108ec559c; end: 108ec5793; -[SCPreviewStickerView _setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec559c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277d438;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = param_3;
  _objc_release(uVar2);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b28);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
  if (lVar1 == 0) {
    uVar7 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar7);
    uVar4 = uVar7;
    func_0x000107c318f8(uVar7,PTR_DAT_1126a52d8);
    uVar8 = uVar7;
    if ((int)uVar4 == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar7);
    if (uVar8 == 0) goto LAB_108ec5718;
    uVar8 = uVar7;
    _objc_opt_respondsToSelector(uVar7,PTR_s_imageFuture_1125d7900);
    puVar5 = PTR_PTR_1126ae558;
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar7;
      func_0x00010bfe90c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277d424);
      *(undefined **)(param_1 + _DAT_11277d424) = puVar5;
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    else {
      uVar4 = uVar7;
      func_0x00010bfe7ce0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(ulong *)(param_1 + _DAT_11277d424);
      *(ulong *)(param_1 + _DAT_11277d424) = uVar4;
    }
    _objc_release(uVar8);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf03820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(ulong *)(param_1 + _DAT_11277d424);
    *(long *)(param_1 + _DAT_11277d424) = lVar3;
  }
  _objc_release(uVar7);
LAB_108ec5718:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ec5794; end: 108ec5883; -[SCPreviewStickerView _handleCTPItemContainerResult:imagePromise:] */

void FUN_108ec5794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108ec5884;
  puStack_58 = &UNK_110ac9d78;
  uStack_50 = param_1;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108ec5984;
  puStack_88 = &UNK_110ac9da8;
  uStack_80 = param_1;
  uStack_78 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3,param_2,&puStack_70,&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ec5884; end: 108ec5983;  */

void FUN_108ec5884(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010be2b040(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_2;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be0b340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar3);
  }
  else {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ec5984; end: 108ec5a1f;  */

void FUN_108ec5984(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010be0b340(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    lVar1 = param_2;
  }
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ec5a20; end: 108ec5b1f; -[SCPreviewStickerView _errorWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ec5a20(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010bf99240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar22 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(param_5);
  __Unwind_Resume();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar23);
  _objc_retain(ppuVar23);
  puVar4 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  ppuVar5 = ppuVar23;
  _objc_opt_isKindOfClass(ppuVar23,puVar4);
  ppuVar1 = ppuVar23;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar23);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar5 = ppuVar23;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = (long)_DAT_11277d42c;
    uVar25 = *(undefined8 *)(lVar22 + lVar27);
    *(undefined ***)(lVar22 + lVar27) = ppuVar5;
    _objc_release(uVar25);
    func_0x00010c219b60(*(undefined8 *)(lVar22 + lVar27));
    uVar25 = *(undefined8 *)(lVar22 + lVar27);
    func_0x00010c08c0e0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(uVar25);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    uVar25 = *(undefined8 *)(lVar22 + lVar27);
    func_0x00010c08c0e0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(param_1);
    _objc_release(uVar25);
    _objc_release(puVar4);
    func_0x00010befbb60(lVar22);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)(lVar22 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar22 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar22 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar22;
    func_0x00010c274200(lVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar22 + lVar27);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar22;
    func_0x00010bf1ff80(lVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar20);
    _objc_release(lVar27);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(lVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(uVar13);
    _objc_release(uVar25);
    _objc_release(lVar26);
    _objc_release(uVar12);
    if ((*(byte *)(lVar22 + _DAT_11277d43c) & 1) == 0) {
      func_0x00010c2a5f80(ppuVar23);
    }
    puVar4 = PTR_PTR_1126ba960;
    ppuVar5 = ppuVar23;
    func_0x00010bfe90c0(ppuVar23);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar5;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254f40(puVar4);
    _objc_release(ppuVar21);
    _objc_release(ppuVar5);
    func_0x00010bf20c00(lVar22);
    func_0x00010bf20c00(lVar22);
    func_0x00010c1739e0(param_1,lVar22);
  }
  else {
    func_0x00010c110a20(ppuVar23);
    dVar28 = *(double *)PTR__CGSizeZero_110347620;
    bVar2 = false;
    if ((param_1 == dVar28) &&
       (bVar2 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar2) {
      func_0x00010befbb60(lVar22);
      func_0x00010c23d620(lVar22);
      func_0x00010bfb68e0(ppuVar23);
      _CGRectGetWidth();
      dVar29 = dVar28;
      func_0x00010bfb68e0(ppuVar23);
      _CGRectGetHeight();
      param_1 = 0.0;
      func_0x00010c1739e0(0,0,dVar28,dVar29,lVar22);
    }
    else {
      func_0x00010c219b60(ppuVar23);
      func_0x00010befbb60(lVar22);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      ppuVar5 = ppuVar23;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar22;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar23;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar22;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar23;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar22;
      func_0x00010c274200(lVar22);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar23;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = lVar22;
      func_0x00010bf1ff80(lVar22);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar3);
      _objc_release(ppuVar11);
      _objc_release(lVar27);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(lVar17);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(lVar14);
      _objc_release(ppuVar6);
      _objc_release(ppuVar21);
      _objc_release(lVar26);
      _objc_release(ppuVar5);
      func_0x00010bf20c00(lVar22);
      func_0x00010bf20c00(lVar22);
      func_0x00010c1739e0(dVar28,lVar22);
      param_1 = dVar28;
    }
    func_0x00010bea2fa0(lVar22);
    func_0x00010bf20c00(lVar22);
    _CGRectGetWidth();
    dVar28 = param_1;
    func_0x00010bf20c00(lVar22);
    _CGRectGetHeight();
    param_1 = param_1 * 0.5;
    lVar26 = (long)_DAT_11277d438;
    func_0x00010c17a6a0(param_1,dVar28 * 0.5,*(undefined8 *)(lVar22 + lVar26));
    func_0x00010c202ce0(*(undefined8 *)(lVar22 + lVar26));
    func_0x00010c1c7480(*(undefined8 *)(lVar22 + lVar26));
  }
  lVar22 = lVar22 + _DAT_11277d440;
  _objc_loadWeakRetained(lVar22);
  func_0x00010c111e80();
  _objc_release(lVar22);
  _objc_release(ppuVar1);
  ppuVar5 = ppuVar23;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar23);
  __Unwind_Resume();
  lVar22 = *(long *)((long)ppuVar5 + (long)_DAT_11277d438);
  if (lVar22 != 0) {
    func_0x00010c14e340();
    dVar28 = 2.0;
    if (lVar22 != 0) {
      dVar28 = -1.0;
    }
    return dVar28;
  }
  return -1.0;
}



/* Entry: 108ec5b20; end: 108ec641f; -[SCPreviewStickerView _handleItemView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ec5b20(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (uVar1 == 0) {
    uVar4 = param_5;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_11277d42c;
    uVar23 = *(undefined8 *)(param_3 + lVar25);
    *(ulong *)(param_3 + lVar25) = uVar4;
    _objc_release(uVar23);
    func_0x00010c219b60(*(undefined8 *)(param_3 + lVar25));
    uVar23 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c08c0e0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(uVar23);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    uVar23 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c08c0e0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(param_1);
    _objc_release(uVar23);
    _objc_release(puVar3);
    func_0x00010befbb60(param_3);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar11 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_3;
    func_0x00010bf1ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(lVar25);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(lVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar23);
    _objc_release(lVar24);
    _objc_release(uVar11);
    if ((*(byte *)(param_3 + _DAT_11277d43c) & 1) == 0) {
      func_0x00010c2a5f80(param_5);
    }
    puVar3 = PTR_PTR_1126ba960;
    uVar4 = param_5;
    func_0x00010bfe90c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254f40(puVar3);
    _objc_release(uVar21);
    _objc_release(uVar4);
    func_0x00010bf20c00(param_3);
    func_0x00010bf20c00(param_3);
    func_0x00010c1739e0(param_1,param_3);
  }
  else {
    func_0x00010c110a20(param_5);
    dVar26 = *(double *)PTR__CGSizeZero_110347620;
    bVar2 = false;
    if ((param_1 == dVar26) &&
       (bVar2 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar2) {
      func_0x00010befbb60(param_3);
      func_0x00010c23d620(param_3);
      func_0x00010bfb68e0(param_5);
      _CGRectGetWidth();
      dVar27 = dVar26;
      func_0x00010bfb68e0(param_5);
      _CGRectGetHeight();
      param_1 = 0.0;
      func_0x00010c1739e0(0,0,dVar26,dVar27,param_3);
    }
    else {
      func_0x00010c219b60(param_5);
      func_0x00010befbb60(param_3);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = param_5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = param_3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_3;
      func_0x00010c274200(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = param_3;
      func_0x00010bf1ff80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar20);
      _objc_release(uVar10);
      _objc_release(lVar25);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(lVar16);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar13);
      _objc_release(uVar5);
      _objc_release(uVar21);
      _objc_release(lVar24);
      _objc_release(uVar4);
      func_0x00010bf20c00(param_3);
      func_0x00010bf20c00(param_3);
      func_0x00010c1739e0(dVar26,param_3);
      param_1 = dVar26;
    }
    func_0x00010bea2fa0(param_3);
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    dVar26 = param_1;
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    param_1 = param_1 * 0.5;
    lVar24 = (long)_DAT_11277d438;
    func_0x00010c17a6a0(param_1,dVar26 * 0.5,*(undefined8 *)(param_3 + lVar24));
    func_0x00010c202ce0(*(undefined8 *)(param_3 + lVar24));
    func_0x00010c1c7480(*(undefined8 *)(param_3 + lVar24));
  }
  param_3 = param_3 + _DAT_11277d440;
  _objc_loadWeakRetained(param_3);
  func_0x00010c111e80();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar4 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar1);
  _objc_release(param_5);
  __Unwind_Resume();
  lVar22 = *(long *)(uVar4 + (long)_DAT_11277d438);
  if (lVar22 != 0) {
    func_0x00010c14e340();
    dVar26 = 2.0;
    if (lVar22 != 0) {
      dVar26 = -1.0;
    }
    return dVar26;
  }
  return -1.0;
}



/* Entry: 108ec6420; end: 108ec645b; -[SCPreviewStickerView maxScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec6420(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277d438);
  if (lVar1 != 0) {
    func_0x00010c14e340();
    uVar2 = 0x4000000000000000;
    if (lVar1 != 0) {
      uVar2 = 0xbff0000000000000;
    }
    return uVar2;
  }
  return 0xbff0000000000000;
}



/* Entry: 108ec645c; end: 108ec6497; -[SCPreviewStickerView minScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec645c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277d438);
  if (lVar1 != 0) {
    func_0x00010c14e340();
    uVar2 = 0x3fe0000000000000;
    if (lVar1 != 0) {
      uVar2 = 0xbff0000000000000;
    }
    return uVar2;
  }
  return 0xbff0000000000000;
}



/* Entry: 108ec6498; end: 108ec649b; -[SCPreviewStickerView recomputeTransform] */

void FUN_108ec6498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be872f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recomputeTransform_11257f658);
  return;
}



/* Entry: 108ec649c; end: 108ec65df; -[SCPreviewStickerView _recomputeTransform] */

void FUN_108ec649c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  
  func_0x00010c141a80();
  _CGAffineTransformMakeRotation(&uStack_60);
  func_0x00010c14e120(param_2);
  uVar1 = param_1;
  func_0x00010c14e120(param_2);
  _CGAffineTransformMakeScale(&uStack_90,param_1,uVar1);
  uStack_138 = uStack_88;
  uStack_140 = uStack_90;
  uStack_128 = uStack_78;
  uStack_130 = uStack_80;
  uStack_118 = uStack_68;
  uStack_120 = uStack_70;
  uStack_1e8 = uStack_58;
  uStack_1f0 = uStack_60;
  uStack_1d8 = uStack_48;
  uStack_1e0 = uStack_50;
  uStack_1c8 = uStack_38;
  uStack_1d0 = uStack_40;
  _CGAffineTransformConcat(&uStack_c0,&uStack_140,&uStack_1f0);
  uVar1 = param_2;
  func_0x00010c073260();
  if ((int)uVar1 == 0) {
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
  }
  else {
    _CATransform3DMakeRotation(&uStack_140,0x400921fb54442d18,0,0x3ff0000000000000,0);
    uStack_1a8 = uStack_f8;
    uStack_1b0 = uStack_100;
    uStack_198 = uStack_e8;
    uStack_1a0 = uStack_f0;
    uStack_188 = uStack_d8;
    uStack_190 = uStack_e0;
    uStack_178 = uStack_c8;
    uStack_180 = uStack_d0;
    uStack_1e8 = uStack_138;
    uStack_1f0 = uStack_140;
    uStack_1d8 = uStack_128;
    uStack_1e0 = uStack_130;
    uStack_1c8 = uStack_118;
    uStack_1d0 = uStack_120;
    uStack_1b8 = uStack_108;
    uStack_1c0 = uStack_110;
    _CATransform3DGetAffineTransform(&uStack_170,&uStack_1f0);
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    uStack_1d8 = uStack_a8;
    uStack_1e0 = uStack_b0;
    uStack_1c8 = uStack_98;
    uStack_1d0 = uStack_a0;
    uStack_248 = uStack_168;
    uStack_250 = uStack_170;
    uStack_238 = uStack_158;
    uStack_240 = uStack_160;
    uStack_228 = uStack_148;
    uStack_230 = uStack_150;
    _CGAffineTransformConcat(&uStack_220,&uStack_1f0,&uStack_250);
    uStack_1e8 = uStack_218;
    uStack_1f0 = uStack_220;
    uStack_1d8 = uStack_208;
    uStack_1e0 = uStack_210;
    uStack_1c8 = uStack_1f8;
    uStack_1d0 = uStack_200;
  }
  func_0x00010c219960(param_2);
  return;
}



/* Entry: 108ec65e0; end: 108ec65ef; -[SCPreviewStickerView renderState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec65e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c130110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d438),PTR_s_renderState_112629a60);
  return;
}



/* Entry: 108ec65f0; end: 108ec6b67; -[SCPreviewStickerView _initWithTextSticker:center:fontSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *******
FUN_108ec65f0(double param_1,double param_2,double param_3,undefined8 ******param_4,
             undefined8 param_5,undefined8 *******param_6,long param_7,int param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined **ppuVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******unaff_x24;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined8 *****pppppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar3 = param_6;
  _objc_retain(param_6);
  puVar9 = PTR__CGRectZero_110347608;
  dVar13 = *(double *)PTR__CGRectZero_110347608;
  dVar14 = *(double *)(PTR__CGRectZero_110347608 + 8);
  puStack_a0 = PTR_PTR_1126ff0d8;
  pppppppuVar11 = (undefined8 *******)0x0;
  pppppppuVar2 = (undefined8 *******)&pppppuStack_a8;
  pppppuStack_a8 = param_4;
  _objc_msgSendSuper2(dVar13,dVar14,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),pppppppuVar2,
                      PTR_s_initWithFrame__1125e2948);
  if (pppppppuVar2 != (undefined8 *******)0x0) {
    _objc_retain(param_6);
    pppppppuVar3 = param_6;
    func_0x000107c318f8(param_6,PTR_DAT_1126a5b48);
    pppppppuVar11 = param_6;
    if ((int)pppppppuVar3 == 0) {
      pppppppuVar11 = (undefined8 *******)0x0;
    }
    _objc_retain(pppppppuVar11);
    _objc_release(param_6);
    uVar4 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_11277d410);
    *(undefined8 ********)((long)pppppppuVar2 + (long)_DAT_11277d410) = pppppppuVar11;
    _objc_release(uVar4);
    func_0x00010c21dbe0(pppppppuVar2);
    puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)puVar9,*(undefined8 *)(puVar9 + 8),
                        *(undefined8 *)(puVar9 + 0x10),*(undefined8 *)(puVar9 + 0x18));
    lVar12 = (long)_DAT_11277d444;
    uVar4 = *(undefined8 *)((long)pppppppuVar2 + lVar12);
    *(undefined **)((long)pppppppuVar2 + lVar12) = puVar5;
    _objc_release(uVar4);
    func_0x00010c213040(*(undefined8 *)((long)pppppppuVar2 + lVar12));
    func_0x00010befbb60(pppppppuVar2);
    _objc_retain(param_6);
    puVar9 = PTR_PTR_1126b0d08;
    _objc_opt_class(PTR_PTR_1126b0d08);
    pppppppuVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar9);
    pppppppuVar11 = param_6;
    if (((ulong)pppppppuVar3 & 1) == 0) {
      pppppppuVar11 = (undefined8 *******)0x0;
    }
    _objc_retain(pppppppuVar11);
    _objc_release(param_6);
    puVar9 = PTR_PTR_1126d3f50;
    pppppppuVar3 = pppppppuVar11;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_7 = 6;
    param_8 = 2;
    param_9 = 1;
    puVar10 = puVar6;
    func_0x00010bf0e4a0();
    param_10 = SUB81(puVar10,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)((long)pppppppuVar2 + lVar12));
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(pppppppuVar3);
    pppppppuVar3 = pppppppuVar2;
    func_0x00010c262ca0(pppppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    pppppppuVar7 = pppppppuVar2;
    dVar13 = param_3;
    func_0x00010c262ca0(pppppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    pppppppuVar8 = pppppppuVar2;
    if (dVar13 <= param_3) {
      func_0x00010c262ca0(pppppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
    }
    else {
      func_0x00010c262ca0(pppppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
    }
    _objc_release(pppppppuVar8);
    _objc_release(pppppppuVar7);
    _objc_release(pppppppuVar3);
    func_0x00010c23d5a0((double)(long)dVar13,0x47efffffe0000000,
                        *(undefined8 *)((long)pppppppuVar2 + lVar12));
    func_0x000107c308a4();
    func_0x00010c19f0e0(*(undefined8 *)((long)pppppppuVar2 + lVar12));
    func_0x00010c160fc0(*(undefined8 *)((long)pppppppuVar2 + lVar12));
    func_0x00010bfb68e0(*(undefined8 *)((long)pppppppuVar2 + lVar12));
    func_0x00010c1739e0(pppppppuVar2);
    func_0x00010c17a6a0(pppppppuVar2);
    func_0x00010c160fc0(pppppppuVar2);
    pppppppuVar3 = pppppppuVar2;
    func_0x00010c08c0e0(pppppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(pppppppuVar3);
    puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    unaff_x24 = pppppppuVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620();
    _objc_release(unaff_x24);
    _objc_release(puVar9);
    puVar5 = PTR_PTR_1126dc630;
    _objc_alloc();
    pppppppuVar3 = pppppppuVar2;
    func_0x00010bff2e80();
    uVar4 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_11277d418);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_11277d418) = puVar5;
    _objc_release(uVar4);
    *(undefined1 *)((long)pppppppuVar2 + (long)_DAT_11277d41c) = 1;
    *(undefined1 *)((long)pppppppuVar2 + (long)_DAT_11277d420) = 1;
    _objc_release(pppppppuVar11);
    dVar13 = param_1;
    dVar14 = param_2;
  }
  pppppppuVar7 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_release(unaff_x24);
    _objc_release(puVar9);
    _objc_release(pppppppuVar11);
    _objc_release(param_6);
    _objc_release(pppppppuVar2);
    __Unwind_Resume();
    _objc_retain(pppppppuVar3);
    _objc_retain(param_7);
    _objc_retain(param_9);
    dVar16 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar17 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    puStack_138 = PTR_PTR_1126ff0d8;
    pppppppuVar2 = &ppppppuStack_140;
    ppppppuStack_140 = pppppppuVar7;
    _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),pppppppuVar2,
                        PTR_s_initWithFrame__1125e2948);
    if (pppppppuVar2 != (undefined8 *******)0x0) {
      puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      dVar15 = dVar16;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      if (dVar17 <= dVar16) {
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
      }
      else {
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        dVar17 = dVar15;
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar9);
      _objc_retain(pppppppuVar3);
      pppppppuVar7 = pppppppuVar3;
      func_0x000107c318f8(pppppppuVar3,PTR_DAT_1126a5b48);
      pppppppuVar11 = pppppppuVar3;
      if ((int)pppppppuVar7 == 0) {
        pppppppuVar11 = (undefined8 *******)0x0;
      }
      _objc_retain(pppppppuVar11);
      _objc_release(pppppppuVar3);
      uVar4 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_11277d410);
      *(undefined8 ********)((long)pppppppuVar2 + (long)_DAT_11277d410) = pppppppuVar11;
      _objc_release(uVar4);
      lVar12 = (long)_DAT_11277d434;
      *(undefined1 *)((long)pppppppuVar2 + lVar12) = param_10;
      func_0x00010c160fc0(pppppppuVar2);
      func_0x00010c17a6a0(pppppppuVar2);
      func_0x00010c21dbe0(pppppppuVar2);
      pppppppuVar11 = pppppppuVar2;
      func_0x00010c08c0e0(pppppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200c80();
      _objc_release(pppppppuVar11);
      puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      pppppppuVar11 = pppppppuVar2;
      func_0x00010c08c0e0(pppppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7620();
      _objc_release(pppppppuVar11);
      _objc_release(puVar9);
      if (param_7 != 0) {
        pppppppuVar11 = pppppppuVar3;
        func_0x00010c27dd80();
        if (((pppppppuVar11 == (undefined8 *******)0x5) ||
            (pppppppuVar11 = pppppppuVar3, func_0x00010c27dd80(),
            pppppppuVar11 == (undefined8 *******)0x9)) ||
           (pppppppuVar11 = pppppppuVar3, func_0x00010c27dd80(),
           pppppppuVar11 == (undefined8 *******)0xa)) {
          func_0x00010c23d0a0(param_7);
        }
        else {
          pppppppuVar11 = pppppppuVar3;
          func_0x00010c27dd80();
          if (pppppppuVar11 == (undefined8 *******)0x7) {
            func_0x00010c23d0a0(param_7);
            dVar17 = dVar13;
            dVar15 = dVar14;
            func_0x00010c23d0a0(param_7);
            dVar16 = dVar17;
            func_0x00010c23d0a0(param_7);
            if (dVar17 <= dVar15) {
              dVar16 = dVar15;
              func_0x00010c23d0a0(param_7);
            }
            else {
              func_0x00010c23d0a0(param_7);
            }
            dVar15 = 200.0;
            dVar16 = 200.0 / dVar16;
            dVar17 = 1.0;
            if (dVar16 < 1.0) {
              func_0x00010c23d0a0(param_7);
              dVar17 = dVar16;
              func_0x00010c23d0a0(param_7);
              if (dVar16 <= dVar15) {
                dVar17 = dVar15;
                func_0x00010c23d0a0(param_7);
              }
              else {
                func_0x00010c23d0a0(param_7);
              }
              dVar17 = 200.0 / dVar17;
            }
            func_0x00010b690ad8(dVar13,dVar14,dVar17);
          }
          else {
            dVar13 = dVar17 * 0.5;
            dVar14 = dVar13;
          }
        }
        if ((param_8 != 0) &&
           (pppppppuVar11 = pppppppuVar3, func_0x00010c27dd80(),
           pppppppuVar11 == (undefined8 *******)0x5)) {
          dVar17 = dVar13;
          if (dVar13 <= dVar14) {
            dVar17 = dVar14;
          }
          uVar4 = NEON_fminnm(350.0 / dVar17,0x3ff0000000000000);
          func_0x00010b690ad8(dVar13,dVar14,uVar4);
        }
        ppuVar1 = &PTR_PTR_1126bb2a0;
        if (*(char *)((long)pppppppuVar2 + lVar12) == '\0') {
          ppuVar1 = &PTR__OBJC_CLASS___UIImageView_1126aec28;
        }
        puVar9 = *ppuVar1;
        _objc_alloc();
        func_0x000107c308a4(dVar13,dVar14);
        func_0x00010c013de0();
        lVar12 = (long)_DAT_11277d42c;
        uVar4 = *(undefined8 *)((long)pppppppuVar2 + lVar12);
        *(undefined **)((long)pppppppuVar2 + lVar12) = puVar9;
        _objc_release(uVar4);
        func_0x00010c1a9f00(*(undefined8 *)((long)pppppppuVar2 + lVar12));
        uVar4 = *(undefined8 *)((long)pppppppuVar2 + lVar12);
        func_0x00010c08c0e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c200c80();
        _objc_release(uVar4);
        puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        uVar4 = *(undefined8 *)((long)pppppppuVar2 + lVar12);
        func_0x00010c08c0e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e7620(dVar13);
        _objc_release(uVar4);
        _objc_release(puVar9);
        func_0x00010befbb60(pppppppuVar2);
        func_0x00010bfb68e0(*(undefined8 *)((long)pppppppuVar2 + lVar12));
        func_0x00010c1739e0(pppppppuVar2);
      }
      puVar9 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar5 = puVar9;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_11277d424);
      *(undefined **)((long)pppppppuVar2 + (long)_DAT_11277d424) = puVar5;
      _objc_release(uVar4);
      _objc_initWeak(auStack_148,pppppppuVar2);
      _objc_copyWeak(auStack_150,auStack_148);
      _objc_retain(pppppppuVar3);
      _objc_retain(puVar9);
      func_0x00010bfe9880(pppppppuVar3);
      puVar5 = PTR_PTR_1126dc630;
      _objc_alloc();
      func_0x00010bff2e80();
      uVar4 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_11277d418);
      *(undefined **)((long)pppppppuVar2 + (long)_DAT_11277d418) = puVar5;
      _objc_release(uVar4);
      *(undefined1 *)((long)pppppppuVar2 + (long)_DAT_11277d41c) = 1;
      *(undefined1 *)((long)pppppppuVar2 + (long)_DAT_11277d420) = 1;
      _objc_release(puVar9);
      _objc_release(pppppppuVar3);
      _objc_destroyWeak(auStack_150);
      _objc_destroyWeak(auStack_148);
      _objc_release(puVar9);
    }
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(pppppppuVar3);
    return pppppppuVar2;
  }
  return pppppppuVar2;
}



/* Entry: 108ec6b68; end: 108ec7223; -[SCPreviewStickerView _initWithImageSticker:center:thumbnail:shouldLimitSize:userSession:isAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ec6b68(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long param_6,int param_7,undefined8 param_8,undefined1 param_9)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  dVar11 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar12 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  puStack_88 = PTR_PTR_1126ff0d8;
  puVar2 = &uStack_90;
  uStack_90 = param_3;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),puVar2,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar10 = dVar11;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    if (dVar12 <= dVar11) {
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
    }
    else {
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar12 = dVar10;
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_retain(param_5);
    lVar5 = param_5;
    func_0x000107c318f8(param_5,PTR_DAT_1126a5b48);
    lVar9 = param_5;
    if ((int)lVar5 == 0) {
      lVar9 = 0;
    }
    _objc_retain(lVar9);
    _objc_release(param_5);
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277d410);
    *(long *)((long)puVar2 + (long)_DAT_11277d410) = lVar9;
    _objc_release(uVar6);
    lVar9 = (long)_DAT_11277d434;
    *(undefined1 *)((long)puVar2 + lVar9) = param_9;
    func_0x00010c160fc0(puVar2);
    func_0x00010c17a6a0(puVar2);
    func_0x00010c21dbe0(puVar2);
    puVar7 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(puVar7);
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar7 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620();
    _objc_release(puVar7);
    _objc_release(puVar8);
    if (param_6 != 0) {
      lVar5 = param_5;
      func_0x00010c27dd80();
      if (((lVar5 == 5) || (lVar5 = param_5, func_0x00010c27dd80(), lVar5 == 9)) ||
         (lVar5 = param_5, func_0x00010c27dd80(), lVar5 == 10)) {
        func_0x00010c23d0a0(param_6);
      }
      else {
        lVar5 = param_5;
        func_0x00010c27dd80();
        if (lVar5 == 7) {
          func_0x00010c23d0a0(param_6);
          dVar12 = param_1;
          dVar10 = param_2;
          func_0x00010c23d0a0(param_6);
          dVar11 = dVar12;
          func_0x00010c23d0a0(param_6);
          if (dVar12 <= dVar10) {
            dVar11 = dVar10;
            func_0x00010c23d0a0(param_6);
          }
          else {
            func_0x00010c23d0a0(param_6);
          }
          dVar10 = 200.0;
          dVar11 = 200.0 / dVar11;
          dVar12 = 1.0;
          if (dVar11 < 1.0) {
            func_0x00010c23d0a0(param_6);
            dVar12 = dVar11;
            func_0x00010c23d0a0(param_6);
            if (dVar11 <= dVar10) {
              dVar12 = dVar10;
              func_0x00010c23d0a0(param_6);
            }
            else {
              func_0x00010c23d0a0(param_6);
            }
            dVar12 = 200.0 / dVar12;
          }
          func_0x00010b690ad8(param_1,param_2,dVar12);
        }
        else {
          param_1 = dVar12 * 0.5;
          param_2 = param_1;
        }
      }
      if ((param_7 != 0) && (lVar5 = param_5, func_0x00010c27dd80(), lVar5 == 5)) {
        dVar12 = param_1;
        if (param_1 <= param_2) {
          dVar12 = param_2;
        }
        uVar6 = NEON_fminnm(350.0 / dVar12,0x3ff0000000000000);
        func_0x00010b690ad8(param_1,param_2,uVar6);
      }
      ppuVar1 = &PTR_PTR_1126bb2a0;
      if (*(char *)((long)puVar2 + lVar9) == '\0') {
        ppuVar1 = &PTR__OBJC_CLASS___UIImageView_1126aec28;
      }
      puVar8 = *ppuVar1;
      _objc_alloc();
      func_0x000107c308a4(param_1,param_2);
      func_0x00010c013de0();
      lVar9 = (long)_DAT_11277d42c;
      uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
      *(undefined **)((long)puVar2 + lVar9) = puVar8;
      _objc_release(uVar6);
      func_0x00010c1a9f00(*(undefined8 *)((long)puVar2 + lVar9));
      uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200c80();
      _objc_release(uVar6);
      puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7620(param_1);
      _objc_release(uVar6);
      _objc_release(puVar8);
      func_0x00010befbb60(puVar2);
      func_0x00010bfb68e0(*(undefined8 *)((long)puVar2 + lVar9));
      func_0x00010c1739e0(puVar2);
    }
    puVar8 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar3 = puVar8;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277d424);
    *(undefined **)((long)puVar2 + (long)_DAT_11277d424) = puVar3;
    _objc_release(uVar6);
    _objc_initWeak(auStack_98,puVar2);
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_5);
    _objc_retain(puVar8);
    func_0x00010bfe9880(param_5);
    puVar3 = PTR_PTR_1126dc630;
    _objc_alloc();
    func_0x00010bff2e80();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277d418);
    *(undefined **)((long)puVar2 + (long)_DAT_11277d418) = puVar3;
    _objc_release(uVar6);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11277d41c) = 1;
    *(undefined1 *)((long)puVar2 + (long)_DAT_11277d420) = 1;
    _objc_release(puVar8);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar8);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 108ec7224; end: 108ec7497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec7224(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar4 = (long)_DAT_11277d42c;
      if (*(long *)(lVar1 + lVar4) == 0) {
        func_0x00010c254f40(PTR_PTR_1126ba960);
        if (*(char *)(lVar1 + _DAT_11277d434) == '\x01') {
          puVar2 = PTR_PTR_1126bb2a0;
          _objc_alloc();
          func_0x000107c308a4(param_1,param_2);
          func_0x00010c013de0();
          uVar3 = *(undefined8 *)(lVar1 + lVar4);
          *(undefined **)(lVar1 + lVar4) = puVar2;
          _objc_release(uVar3);
          func_0x00010c16ce00(*(undefined8 *)(lVar1 + lVar4));
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          func_0x000107c308a4(param_1,param_2);
          func_0x00010c013de0();
          uVar3 = *(undefined8 *)(lVar1 + lVar4);
          *(undefined **)(lVar1 + lVar4) = puVar2;
          _objc_release(uVar3);
        }
        uVar3 = *(undefined8 *)(lVar1 + lVar4);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c200c80();
        _objc_release(uVar3);
        puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        uVar3 = *(undefined8 *)(lVar1 + lVar4);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e7620(param_1);
        _objc_release(uVar3);
        _objc_release(puVar2);
        func_0x00010befbb60(lVar1);
      }
      puVar2 = PTR_PTR_1126dbc28;
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c2540c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1235a0(puVar2);
      _objc_release(uVar3);
      func_0x00010c1a9f00(*(undefined8 *)(lVar1 + lVar4));
      func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x28));
      func_0x00010bfb68e0(*(undefined8 *)(lVar1 + lVar4));
      func_0x00010c1739e0(lVar1);
      lVar4 = lVar1 + _DAT_11277d440;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c111e80();
      _objc_release(lVar4);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ec7498; end: 108ec74bf; -[SCPreviewStickerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108ec7498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277d438));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108ec74c0; end: 108ec7557; -[SCPreviewStickerView relativeSize] */

undefined1  [16]
FUN_108ec74c0(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  auVar3._0_8_ = param_3 / param_1;
  auVar3._8_8_ = param_4 / dVar2;
  return auVar3;
}



/* Entry: 108ec7558; end: 108ec75fb; -[SCPreviewStickerView relativeCenter] */

undefined1  [16] FUN_108ec7558(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c262ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar3 = dVar2;
  _objc_release(uVar1);
  func_0x00010bf345e0(param_3);
  func_0x00010bf345e0(param_3);
  auVar4._8_8_ = param_2 / dVar2;
  auVar4._0_8_ = dVar3 / param_1;
  return auVar4;
}



/* Entry: 108ec75fc; end: 108ec7657; -[SCPreviewStickerView canPersistStickerState] */

uint FUN_108ec75fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 108ec7658; end: 108ec7a23; -[SCPreviewStickerView stickerStateWithStaticBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec7658(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar1 = param_5;
  func_0x00010bf2d0a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      dVar9 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      uVar1 = param_5;
      dVar10 = param_1;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = param_5;
      func_0x00010c081660();
      if ((int)uVar1 == 0) {
        func_0x00010bf345e0(param_5);
        dVar15 = dVar10;
        func_0x00010bf345e0(param_5);
        uVar1 = param_5;
        dVar18 = param_2;
        func_0x00010c253880(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1281e0(param_5);
        dVar16 = dVar15;
        func_0x00010c141a80(param_5);
        dVar17 = dVar16;
        func_0x00010c14e120(param_5);
        func_0x00010c073260(param_5);
        uVar5 = uVar1;
        func_0x00010c255060(dVar15,dVar18,dVar10 / dVar9,param_2 / param_1,dVar16,dVar17,uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar5 = param_5;
        func_0x00010c26a1a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uVar1 = uVar5;
        func_0x00010c27a4a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar3 = param_5;
        func_0x00010c253880(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1281e0(param_5);
        uVar12 = uVar11;
        dVar9 = param_2;
        func_0x00010c27ada0(uVar1);
        uVar13 = uVar12;
        func_0x00010c141a80(uVar1);
        uVar14 = uVar13;
        func_0x00010c14e120(uVar1);
        func_0x00010c081160(param_5);
        uVar4 = param_5;
        func_0x00010c279100(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c073260(param_5);
        uVar5 = uVar3;
        func_0x00010c255060(uVar11,param_2,uVar12,dVar9,uVar13,uVar14,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar1);
      puVar6 = PTR_PTR_1126d4dd0;
      func_0x00010c255040(PTR_PTR_1126d4dd0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2bbdc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      goto LAB_108ec795c;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_108ec795c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108ec7a24; end: 108ec7aeb; -[SCPreviewStickerView updateWithItemView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec7a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe90c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277d42c),param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + _DAT_11277d43c) & 1) == 0) {
    func_0x00010c2a5f80(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ec7aec; end: 108ec7c4b; -[SCPreviewStickerView stickerImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec7aec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = (long)_DAT_11277d42c;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar6 = *(undefined **)(param_1 + _DAT_11277d438);
    _objc_retain(puVar6);
    puVar3 = puVar6;
    func_0x000107c318f8(puVar6,PTR_DAT_1126a5b28);
    puVar1 = puVar6;
    if ((int)puVar3 == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010bf03800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (puVar6 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010bfe7c80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar6);
      puVar3 = puVar6;
    }
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
  else {
    puVar3 = *(undefined **)(param_1 + lVar5);
    func_0x00010bfe6ac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ec7c4c; end: 108ec7e1f; -[SCPreviewStickerView stickerImageFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec7c4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar4 = *(undefined **)(param_1 + _DAT_11277d424);
  if (puVar4 == (undefined *)0x0) {
    lVar6 = (long)_DAT_11277d42c;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126ae558;
    if (lVar1 == 0) {
      puVar5 = *(undefined **)(param_1 + _DAT_11277d438);
      _objc_retain(puVar5);
      puVar4 = puVar5;
      func_0x000107c318f8(puVar5,PTR_DAT_1126a5b28);
      puVar2 = puVar5;
      if ((int)puVar4 == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar5);
      puVar4 = puVar2;
      func_0x00010bf03800();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        func_0x00010bfe7c80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      else {
        _objc_retain(puVar4);
        puVar5 = puVar4;
      }
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar2 = *(undefined **)(param_1 + lVar6);
      func_0x00010bfe6ac0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ec7e20; end: 108ec81df; -[SCPreviewStickerView textFrameContainsGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ec7e20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  _objc_retain(param_7);
  func_0x00010c14e120(param_5);
  if (param_1 == 0.0) {
LAB_108ec8018:
    bVar4 = false;
  }
  else {
    uVar3 = param_5;
    func_0x00010c081660();
    dVar8 = 1.2;
    uVar12 = 0x3ff0000000000000;
    dVar16 = dVar8;
    if ((int)uVar3 == 0) {
      dVar16 = 1.0;
    }
    func_0x00010bfb68e0(param_5);
    _CGRectGetWidth();
    dVar15 = 80.0;
    if (80.0 < dVar8) {
      func_0x00010bfb68e0(param_5);
      _CGRectGetWidth();
      dVar15 = dVar8;
    }
    func_0x00010bfb68e0(param_5);
    _CGRectGetHeight();
    dVar10 = 80.0;
    if (80.0 < dVar8) {
      func_0x00010bfb68e0(param_5);
      _CGRectGetHeight();
      dVar10 = dVar8;
    }
    func_0x00010bfb68e0(param_5);
    dVar9 = dVar8;
    _CGRectGetMidX();
    _CGRectGetMidY(dVar8,uVar12,param_3,param_4);
    dVar15 = dVar16 * dVar15;
    dVar16 = dVar16 * dVar10;
    func_0x00010b690910(dVar9,dVar8,dVar15,dVar16);
    uVar3 = param_5;
    dVar10 = dVar9;
    dVar13 = dVar8;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_7);
    _objc_release();
    dVar11 = dVar9;
    dVar14 = dVar8;
    _CGRectContainsPoint(dVar9,dVar8,dVar15,dVar16,dVar10,dVar13);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      dVar10 = dVar11;
      do {
        uVar7 = param_7;
        func_0x00010c0df520();
        if (uVar7 <= uVar3) goto LAB_108ec8018;
        uVar7 = param_5;
        func_0x00010c262ca0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_7;
        func_0x00010c09f140();
        dVar11 = dVar9;
        dVar13 = dVar8;
        _CGRectContainsPoint(dVar9,dVar8,dVar15,dVar16,dVar10,dVar14);
        _objc_release(uVar7);
        uVar3 = uVar3 + 1;
        dVar10 = dVar11;
        dVar14 = dVar13;
      } while ((uVar1 & 1) == 0);
    }
    uVar3 = param_5;
    func_0x00010c081660();
    if ((uVar3 & 1) == 0) {
      func_0x00010bfb68e0(param_5);
      _CGRectGetHeight();
      if (110.0 <= dVar11) {
        lVar5 = (long)_DAT_11277d42c;
        uVar3 = *(ulong *)(param_5 + lVar5);
        if (uVar3 == 0) {
          uVar3 = *(ulong *)(param_5 + (long)_DAT_11277d444);
        }
        _objc_retain(uVar3);
        lVar6 = *(long *)(param_5 + lVar5);
        _objc_retain(lVar6);
        puVar2 = PTR_PTR_1126bb2a0;
        _objc_opt_class(PTR_PTR_1126bb2a0);
        lVar5 = lVar6;
        _objc_opt_isKindOfClass(lVar6,puVar2);
        _objc_release(lVar6);
        if ((((uint)lVar5 & (uint)(lVar6 != 0)) == 1) &&
           (lVar5 = *(long *)(param_5 + (long)_DAT_11277d428), lVar5 != 0)) {
          func_0x00010c087020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06c080();
          _objc_release(lVar5);
        }
        func_0x00010c09ef00(param_7);
        uVar7 = uVar3;
        func_0x00010c0fcb40();
        if ((int)uVar7 == 0) {
          bVar4 = true;
        }
        else {
          uVar7 = param_7;
          func_0x00010c0df520();
          if (uVar7 < 2) {
            bVar4 = false;
          }
          else {
            uVar7 = 0;
            do {
              uVar1 = param_7;
              func_0x00010c0df520();
              bVar4 = uVar1 > uVar7;
              if (uVar1 <= uVar7) break;
              func_0x00010c09f140(param_7);
              uVar1 = uVar3;
              func_0x00010c0fcb40();
              uVar7 = uVar7 + 1;
            } while ((uVar1 & 1) != 0);
          }
        }
        _objc_release(uVar3);
        goto LAB_108ec801c;
      }
    }
    bVar4 = true;
  }
LAB_108ec801c:
  _objc_release(param_7);
  return bVar4;
}



/* Entry: 108ec81e0; end: 108ec8253; -[SCPreviewStickerView shouldRespondToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108ec81e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11277d438);
  if (uVar1 == 0) {
    func_0x00010c06c000(param_1);
    uVar1 = (ulong)((uint)param_1 ^ 1);
  }
  else {
    func_0x00010c232a60(uVar1,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108ec8254; end: 108ec82bf; -[SCPreviewStickerView shouldRespondToLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108ec8254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11277d438);
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    func_0x00010c232a20(lVar1,param_2,param_3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 108ec82c0; end: 108ec843f; -[SCPreviewStickerView tap:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec82c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c232a60();
  if ((uVar1 & 1) != 0) {
    func_0x00010bf345e0(param_1);
    lVar6 = (long)_DAT_11277d438;
    uVar1 = *(ulong *)(param_1 + lVar6);
    _objc_opt_respondsToSelector(uVar1,PTR_s_cycleStickerToNextStyle_1125b6608);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + lVar6);
      _objc_retain(lVar3);
      lVar2 = lVar3;
      func_0x000107c318f8(lVar3,PTR_DAT_1126a5b50);
      _objc_release(lVar3);
      iVar5 = 0;
      if (lVar3 != 0) {
        iVar5 = (int)lVar2;
      }
      if (iVar5 == 1) {
        uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11277d418);
        _objc_retain(param_4);
        func_0x00010c27ac20(uVar4);
        _objc_release(param_4);
      }
    }
    func_0x00010c268be0(*(undefined8 *)(param_1 + lVar6));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ec8440; end: 108ec84ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec8440(long param_1)

{
  long lVar1;
  
  func_0x00010bf63180(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277d438));
  func_0x00010c23d620(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010bea2fa0();
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11277d440;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c111e80();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ec84c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108ec84f0; end: 108ec856f; -[SCPreviewStickerView pan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec84f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff0d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_pan__11261a798,param_3);
  func_0x00010c0f3600(*(undefined8 *)(param_1 + _DAT_11277d438));
  _objc_release(param_3);
  return;
}



/* Entry: 108ec8570; end: 108ec85c3; -[SCPreviewStickerView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec8570(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff0d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010be88480(param_1);
  return;
}



/* Entry: 108ec85c4; end: 108ec85db; -[SCPreviewStickerView isTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ec85c4(long param_1)

{
  return *(long *)(param_1 + _DAT_11277d448) != 0;
}



/* Entry: 108ec85dc; end: 108ec85eb; -[SCPreviewStickerView targetTrajectory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec85dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d448),PTR_s_targetTrajectory_112678290);
  return;
}



/* Entry: 108ec85ec; end: 108ec865f; -[SCPreviewStickerView enableTrackingWithManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec85ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277d448;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ec8660; end: 108ec868f; -[SCPreviewStickerView trajectoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec8660(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d448);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ec8690; end: 108ec86c7; -[SCPreviewStickerView disableTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec8690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d448;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ec86c8; end: 108ec86d7; -[SCPreviewStickerView onStickerViewScaled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec86c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d438),PTR_s_onStickerViewScaled__1126174a8);
  return;
}



/* Entry: 108ec86d8; end: 108ec87c3; -[SCPreviewStickerView trajectoryManager:didOutputTransform:shouldAnimate:] */

void FUN_108ec86d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108ec87c4;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_4);
  uStack_38 = param_4;
  _objc_retainBlock();
  if (param_5 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3f9eb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 108ec87c4; end: 108ec88b3;  */

void FUN_108ec87c4(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010c27ada0(*(undefined8 *)(param_3 + 0x28));
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  dVar3 = param_1;
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = dVar3;
  func_0x00010c27ada0(*(undefined8 *)(param_3 + 0x28));
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010c219b80(param_1 * dVar3,param_2 * dVar4,*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c14e120(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c1f5fe0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c141a80(*(undefined8 *)(param_3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1ee7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_setRotation__112659410);
  return;
}



/* Entry: 108ec88b4; end: 108ec893b; +[SCPreviewStickerView fontSizeForLineHeight:] */

double FUN_108ec88b4(double param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 55.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x404b800000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0();
  dVar3 = dVar2;
  func_0x00010c099280(puVar1);
  _objc_release(puVar1);
  return (double)(long)(param_1 * (dVar2 / dVar3) + 0.5);
}



/* Entry: 108ec893c; end: 108ec8cdb; +[SCPreviewStickerView stickerSizeForSticker:image:] */

undefined1  [16]
FUN_108ec893c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_7;
  func_0x00010c27dd80();
  dVar7 = 65.0;
  dVar5 = dVar7;
  if (lVar1 < 7) {
    if (lVar1 < 5) {
      if (lVar1 - 2U < 3) goto LAB_108ec8a04;
      if (lVar1 != 0) goto LAB_108ec8c00;
    }
    else {
      if (lVar1 == 5) goto LAB_108ec8abc;
      if (lVar1 != 6) goto LAB_108ec8c00;
    }
  }
  else if (lVar1 < 0xb) {
    if (lVar1 - 9U < 2) {
LAB_108ec8abc:
      func_0x00010c23d0a0(param_8);
      dVar7 = param_1;
      dVar5 = param_2;
      goto LAB_108ec8c00;
    }
    if (lVar1 == 7) {
      if (param_8 != 0) {
        func_0x00010c23d0a0(param_8);
        dVar5 = param_1;
        func_0x00010c23d0a0(param_8);
        if (param_1 <= param_2) {
          dVar5 = param_2;
          func_0x00010c23d0a0(param_8);
        }
        else {
          func_0x00010c23d0a0(param_8);
        }
        dVar6 = 200.0;
        dVar5 = 200.0 / dVar5;
        dVar7 = dVar5;
        if (dVar5 < 1.0) {
          func_0x00010c23d0a0(param_8);
          dVar7 = dVar5;
          func_0x00010c23d0a0(param_8);
          if (dVar5 <= dVar6) {
            dVar7 = dVar6;
            func_0x00010c23d0a0(param_8);
          }
          else {
            func_0x00010c23d0a0(param_8);
          }
        }
        dVar5 = 200.0;
        func_0x00010c23d0a0(param_8);
LAB_108ec8bf0:
        func_0x00010b690ad8();
        goto LAB_108ec8c00;
      }
    }
    else {
      if (lVar1 != 8) goto LAB_108ec8c00;
      if (param_8 != 0) {
        func_0x00010c23d0a0(param_8);
        dVar5 = param_1;
        func_0x00010c23d0a0(param_8);
        if (param_1 <= param_2) {
          dVar5 = param_2;
          func_0x00010c23d0a0(param_8);
        }
        else {
          func_0x00010c23d0a0(param_8);
        }
        dVar6 = 200.0;
        dVar5 = 200.0 / dVar5;
        dVar7 = dVar5;
        if (dVar5 < 1.0) {
          func_0x00010c23d0a0(param_8);
          dVar7 = dVar5;
          func_0x00010c23d0a0(param_8);
          if (dVar5 <= dVar6) {
            dVar7 = dVar6;
            func_0x00010c23d0a0(param_8);
          }
          else {
            func_0x00010c23d0a0(param_8);
          }
        }
        dVar5 = 200.0;
        func_0x00010c23d0a0(param_8);
        goto LAB_108ec8bf0;
      }
    }
  }
  else {
    if (lVar1 - 0xbU < 2) {
LAB_108ec8a04:
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      dVar7 = param_3;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      if (param_4 <= param_3) {
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
      }
      else {
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        param_4 = dVar7;
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      dVar7 = param_4 / 3.0;
      dVar5 = param_4 / 3.0;
      goto LAB_108ec8c00;
    }
    if (lVar1 != 0xd) goto LAB_108ec8c00;
  }
  dVar7 = *(double *)PTR__CGSizeZero_110347620;
  dVar5 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_108ec8c00:
  _objc_release(param_8);
  _objc_release(param_7);
  auVar8._8_8_ = dVar5;
  auVar8._0_8_ = dVar7;
  return auVar8;
}



/* Entry: 108ec8cdc; end: 108ec8deb; -[SCPreviewStickerView stopAnimatedStickerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec8cdc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + _DAT_11277d43c) = 1;
  uVar6 = *(ulong *)(param_1 + _DAT_11277d42c);
  _objc_retain(uVar6);
  puVar3 = PTR_PTR_1126bb2a0;
  _objc_opt_class(PTR_PTR_1126bb2a0);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x00010c2558c0(uVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11277d438);
  _objc_retain(uVar7);
  uVar5 = uVar7;
  func_0x000107c318f8(uVar7,PTR_DAT_1126a5b28);
  uVar2 = uVar7;
  if ((int)uVar5 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar7);
  func_0x00010c2558c0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ec8dec; end: 108ec8ef7; -[SCPreviewStickerView resumeAnimatedStickerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec8dec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + _DAT_11277d43c) = 0;
  uVar6 = *(ulong *)(param_1 + _DAT_11277d42c);
  _objc_retain(uVar6);
  puVar3 = PTR_PTR_1126bb2a0;
  _objc_opt_class(PTR_PTR_1126bb2a0);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x00010c24dbc0(uVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11277d438);
  _objc_retain(uVar7);
  uVar5 = uVar7;
  func_0x000107c318f8(uVar7,PTR_DAT_1126a5b28);
  uVar2 = uVar7;
  if ((int)uVar5 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar7);
  func_0x00010c24dbc0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


