/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10553d020; end: 10553d027; -[SCEmojiStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10553d020(void)

{
  return 0;
}



/* Entry: 10553d028; end: 10553d0cb; -[SCEmojiStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10553d028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553d0cc; end: 10553d127; -[SCEmojiStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10553d0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10553cb80();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0d08;
    _objc_alloc(PTR_PTR_1126b0d08);
    func_0x00010bffa500();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553d128; end: 10553d183; -[SCEmojiStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10553d128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10553cb0c();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0d08;
    _objc_alloc(PTR_PTR_1126b0d08);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553d184; end: 10553d19f;  */

void FUN_10553d184(void)

{
  _objc_alloc_init(PTR_PTR_1126ba860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10553d1a0; end: 10553d1af; -[SCEmojiStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553d1a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257ac);
  return;
}



/* Entry: 10553d1b0; end: 10553d1b3; -[SCGiphyStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10553d1b0(void)

{
  return;
}



/* Entry: 10553d1b4; end: 10553d1df; -[SCGiphyStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10553d1b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c27dd80(param_3);
    return param_3 == 7;
  }
  return false;
}



/* Entry: 10553d1e0; end: 10553d1e7; -[SCGiphyStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10553d1e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = false;
  if (param_3 != 0) {
    _objc_retain();
    lVar2 = param_3;
    func_0x00010c27dde0(param_3);
    lVar3 = param_3;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar3);
    bVar1 = lVar3 != 0 && lVar2 == 0x40ae93f;
  }
  return bVar1;
}



/* Entry: 10553d1e8; end: 10553d257;  */

bool FUN_10553d1e8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = false;
  if (param_1 != 0) {
    _objc_retain();
    lVar2 = param_1;
    func_0x00010c27dde0(param_1);
    lVar3 = param_1;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar3);
    bVar1 = lVar3 != 0 && lVar2 == 0x40ae93f;
  }
  return bVar1;
}



/* Entry: 10553d258; end: 10553d25f; -[SCGiphyStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10553d258(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    bVar1 = (int)lVar3 == 5;
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  return bVar1;
}



/* Entry: 10553d260; end: 10553d2cb;  */

bool FUN_10553d260(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    bVar1 = (int)lVar3 == 5;
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 10553d2cc; end: 10553d2d3; -[SCGiphyStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_10553d2cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf96f00(), lVar1 != 6)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba880;
    _objc_opt_class(PTR_PTR_1126ba880);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10553d2d4; end: 10553d367;  */

uint FUN_10553d2d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bf96f00(), lVar1 != 6)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba880;
    _objc_opt_class(PTR_PTR_1126ba880);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10553d368; end: 10553d413; -[SCGiphyStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10553d368(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c27dd80(), lVar2 != 7)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000105d0b188(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1af2c0(lVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf21f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10553d414; end: 10553d50f; -[SCGiphyStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10553d414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  FUN_10553d1e8();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bf37800(PTR_PTR_1126ba7d8,param_2,param_3,7,0x40ae93f,param_1,param_6,param_5,0,
                        param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553d510; end: 10553d683; -[SCGiphyStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10553d510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10553d1e8();
  if ((int)uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar4 = PTR_PTR_1126ba870;
    _objc_opt_new(PTR_PTR_1126ba870);
    puVar5 = PTR_PTR_1126b0ce8;
    _objc_alloc_init(PTR_PTR_1126b0ce8);
    uVar1 = param_3;
    func_0x00010bf9e600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214440(puVar5,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf9e600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182a60(puVar5,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3ba0(puVar4,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010c1c4360(puVar4,param_2,puVar5);
    func_0x00010c1a3b80(puVar3,param_2,puVar4);
    func_0x00010c196600(puVar2,param_2,puVar3);
    func_0x00010c1b5d40(puVar6,param_2,puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10553d684; end: 10553d7ff; -[SCGiphyStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10553d684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  FUN_10553d260();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfccaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010bfccae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x000105d0b870(param_3,param_4,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c21ace0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1af2c0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0c45e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf4db80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199840(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf21f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10553d800; end: 10553d807; -[SCGiphyStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10553d800(void)

{
  return 0;
}



/* Entry: 10553d808; end: 10553d8ab; -[SCGiphyStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10553d808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553d8ac; end: 10553d907; -[SCGiphyStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10553d8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10553d2d4();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ba878;
    _objc_alloc(PTR_PTR_1126ba878);
    func_0x00010bffa500();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553d908; end: 10553d963; -[SCGiphyStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10553d908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10553d260();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ba878;
    _objc_alloc(PTR_PTR_1126ba878);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553d964; end: 10553d96b; -[SCGiphyStickerInjectorImpl isAnimatedItemInstance:] */

undefined8 FUN_10553d964(void)

{
  return 1;
}



/* Entry: 10553d96c; end: 10553d997; -[SCGiphyStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_10553d96c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c27dd80(param_3);
    return param_3 == 7;
  }
  return false;
}



/* Entry: 10553d998; end: 10553d99f; -[SCGiphyStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_10553d998(void)

{
  return 0;
}



/* Entry: 10553d9a0; end: 10553d9a7; -[SCGiphyStickerInjectorImpl prepareItemInstanceForContextAction:] */

undefined8 FUN_10553d9a0(void)

{
  return 0;
}



/* Entry: 10553d9a8; end: 10553d9c3;  */

void FUN_10553d9a8(void)

{
  _objc_alloc_init(PTR_PTR_1126ba888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10553d9c4; end: 10553d9d3; -[SCGiphyStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553d9c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257b0);
  return;
}



/* Entry: 10553d9d4; end: 10553da57; -[SCAltitudeSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10553d9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8e90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127257b4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10553da58; end: 10553db8b; -[SCAltitudeSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553da58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  lVar3 = param_7;
  func_0x00010bfee0e0(param_7);
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,lVar3,0,0
                      ,0,*(undefined8 *)(param_7 + _DAT_1127257b4),param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10553db8c; end: 10553db97; -[SCAltitudeSticker stickerId] */

void FUN_10553db8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 10553db98; end: 10553dc93; -[SCAltitudeSticker shortLoggingName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553db98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127257b4);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf01fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release();
  func_0x00010b75a0ec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c27dd80(uVar3);
  uVar4 = uVar1;
  func_0x00010c26c080(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dea4d8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108ebb9cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10553dc94; end: 10553dc9b; -[SCAltitudeSticker toCTPItem] */

undefined8 FUN_10553dc94(void)

{
  return 0;
}



/* Entry: 10553dc9c; end: 10553dccb; -[SCAltitudeSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553dc9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127257b4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10553dccc; end: 10553dcd3; -[SCAltitudeSticker supportedFlows] */

undefined8 FUN_10553dccc(void)

{
  return 0;
}



/* Entry: 10553dcd4; end: 10553dd0b; -[SCAltitudeSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553dcd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127257b4);
  *(undefined8 *)(param_1 + _DAT_1127257b4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10553dd0c; end: 10553dd13; -[SCAltitudeSticker infoType] */

undefined8 FUN_10553dd0c(void)

{
  return 3;
}



/* Entry: 10553dd14; end: 10553dd27; -[SCAltitudeSticker intrinsicSize] */

void FUN_10553dd14(void)

{
  return;
}



/* Entry: 10553dd28; end: 10553ddd7; -[SCAltitudeSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10553dd28(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ba8a0;
  _objc_opt_class(PTR_PTR_1126ba8a0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127257b4);
    uVar3 = param_3;
    func_0x00010c271a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10553ddd8; end: 10553dde7; -[SCAltitudeSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553ddd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127257b4),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10553dde8; end: 10553ddfb; -[SCAltitudeSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553dde8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127257b4,0);
  return;
}



/* Entry: 10553ddfc; end: 10553de6f; -[SCAltitudeStickerInjectorImpl initWithLocationProvider:] */

undefined1 * FUN_10553ddfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8e98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10553de70; end: 10553de73; -[SCAltitudeStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10553de70(void)

{
  return;
}



/* Entry: 10553de74; end: 10553de7b; -[SCAltitudeStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10553de74(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 3)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10553e010();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553de7c; end: 10553df07;  */

bool FUN_10553de7c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 3)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10553e010();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10553df08; end: 10553df3f; -[SCAltitudeStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10553df08(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10553df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10553df40; end: 10553dfd7;  */

void FUN_10553df40(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != -0x57f6c55e)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf01f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10553dfd8; end: 10553e00f; -[SCAltitudeStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10553dfd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10553e010(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10553e010; end: 10553e0f7;  */

void FUN_10553e010(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010bf01fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_1 != 0) {
      _objc_retain(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553e0f8; end: 10553e0ff; -[SCAltitudeStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_10553e0f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  if ((param_3 == 0) || (uVar2 = param_3, func_0x00010bf96f00(), uVar2 != 4)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bfee000(uVar3);
      bVar1 = uVar3 == 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553e100; end: 10553e1b7;  */

bool FUN_10553e100(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar2 = param_1, func_0x00010bf96f00(), uVar2 != 4)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bfee000(uVar3);
      bVar1 = uVar3 == 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10553e1b8; end: 10553e2e7; -[SCAltitudeStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10553e1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  FUN_10553de7c();
  puVar2 = PTR_PTR_1126ba8a8;
  if ((int)uVar1 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = param_5;
    func_0x00010c2790e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1281e0(param_5);
    uVar3 = param_1;
    uVar6 = param_2;
    func_0x00010bf345e0(param_5);
    uVar4 = uVar3;
    func_0x00010c14e120(param_5);
    uVar5 = uVar4;
    func_0x00010c141a80(param_5);
    func_0x00010c2551c0(param_1,param_2,uVar3,uVar6,uVar4,uVar5,puVar2,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0846e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246580(param_3,param_4,uVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10553e2e8; end: 10553e3f7; -[SCAltitudeStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10553e2e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_10553df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,3,param_1,param_6,param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553e3f8; end: 10553e523; -[SCAltitudeStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10553e3f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  FUN_10553df40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = 0xffffffffa8093aa2;
    func_0x000105d0bdcc(0xffffffffa8093aa2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280800(param_3);
    func_0x00010bdca520(param_1);
    func_0x00010c27dde0(param_3);
    func_0x00010bdca500(param_1);
    puVar4 = PTR_PTR_1126b13b0;
    uVar2 = uVar1;
    func_0x00010bf01f00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf01f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bf01f80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10553e524; end: 10553e6d7; -[SCAltitudeStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10553e524(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10553e010();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x00010c27dd80(lVar1);
    func_0x00010bebdca0(param_1);
    func_0x00010c0c3fc0(lVar1);
    func_0x00010bebdcc0(param_1);
    puVar2 = PTR_PTR_1126ba8b0;
    _objc_alloc_init(PTR_PTR_1126ba8b0);
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21b980(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167920(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar5 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar6 = lVar5;
    func_0x00010bf21f60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10553e6d8; end: 10553e823; -[SCAltitudeStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_10553e6d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_10553e010();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    uVar2 = param_1;
    func_0x00010bebdc60(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c0c3fc0(param_3);
    func_0x00010bebdc80(param_1,param_2,lVar1);
    puVar3 = PTR_PTR_1126ba8c0;
    _objc_alloc_init(PTR_PTR_1126ba8c0);
    lVar1 = param_3;
    func_0x00010bf01f00(param_3);
    func_0x00010c1679c0((double)(int)lVar1,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21ace0(puVar3,param_2,uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21b980(puVar3,param_2,param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8c8;
    _objc_alloc_init(PTR_PTR_1126ba8c8);
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167920(puVar4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10553e824; end: 10553e8c7; -[SCAltitudeStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10553e824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553e8c8; end: 10553e9df; -[SCAltitudeStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10553e8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10553e100();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10553e9e0;
    uStack_40 = 0x10553e9f0;
    uStack_38 = 0;
    func_0x00010c0c11a0(param_4);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10553e9e0; end: 10553e9f7;  */

void FUN_10553e9e0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10553e9f8; end: 10553eb57;  */

void FUN_10553e9f8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_2;
    func_0x00010bfc6da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc2420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2807a0(uVar5);
    func_0x00010bdc3740(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29e660(uVar5);
    func_0x00010bdc3760(uVar8);
    puVar2 = PTR_PTR_1126b13b0;
    func_0x00010bf01f20(uVar5);
    func_0x00010bf01f80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ba8a0;
    _objc_alloc();
    func_0x00010c020180();
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar6;
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10553eb58; end: 10553ebbb; -[SCAltitudeStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10553eb58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10553e010();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba8a0;
    _objc_alloc(PTR_PTR_1126ba8a0);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553ebbc; end: 10553ebc3; -[SCAltitudeStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_10553ebbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 3)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10553e010();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553ebc4; end: 10553ebcb; -[SCAltitudeStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_10553ebc4(void)

{
  return 1;
}



/* Entry: 10553ebcc; end: 10553ecf7; -[SCAltitudeStickerInjectorImpl prepareItemInstanceForContextAction:] */

void FUN_10553ebcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01f00();
  uVar5 = uVar2;
  func_0x00010c0cc0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf01fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167920();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bf43d60(puVar1,param_2,uVar2);
  puVar8 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10553ecf8; end: 10553edd7; -[SCAltitudeStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

bool FUN_10553ecf8(double param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong in_x3;
  bool bVar6;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    bVar6 = true;
  }
  else {
    uVar3 = in_x3;
    func_0x00010bfc6da0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc2420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010bf01f20(uVar5);
    bVar6 = param_1 <= 142.0;
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(in_x3);
  return bVar6;
}



/* Entry: 10553edd8; end: 10553edf7; -[SCAltitudeStickerInjectorImpl _altitudeStickerMetadataTypeForSOJUAltitudeType:] */

undefined4 FUN_10553edd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0x40758d9) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10553edf8; end: 10553ee27; -[SCAltitudeStickerInjectorImpl _sojuAltitudeTypeForAltitudeStickerMetadataType:] */

undefined4 FUN_10553edf8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x273d2d;
  if (param_3 == 2) {
    uVar2 = 0x40758d9;
  }
  uVar1 = 0;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10553ee28; end: 10553ee47; -[SCAltitudeStickerInjectorImpl _altitudeStickerMetadataUnitForSOJUAltitudeUnit:] */

undefined4 FUN_10553ee28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 != -0x78a745f6) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10553ee48; end: 10553ee77; -[SCAltitudeStickerInjectorImpl _sojuAltitudeUnitForAltitudeStickerMetadataUnit:] */

undefined8 FUN_10553ee48(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x20ddae;
  if (param_3 == 1) {
    uVar1 = 0xffffffff8758ba0a;
  }
  uVar2 = 0;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10553ee78; end: 10553eea7; -[SCAltitudeStickerInjectorImpl _sojuAltitudeInfoFilterTypeForAltitudeStickerMetadataType:] */

undefined4 FUN_10553ee78(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x273d2d;
  if (param_3 == 2) {
    uVar2 = 0x40758d9;
  }
  uVar1 = 0;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10553eea8; end: 10553eed7; -[SCAltitudeStickerInjectorImpl _sojuAltitudeInfoFilterUnitsForAltitudeStickerMetadataUnits:] */

undefined8 FUN_10553eea8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x20ddae;
  if (param_3 == 1) {
    uVar1 = 0xffffffff8758ba0a;
  }
  uVar2 = 0;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10553eed8; end: 10553eeef; -[SCAltitudeStickerInjectorImpl _CTPAltitudeStickerMetadataMeasurementUnitFromSCAltitudeUnit:] */

undefined4 FUN_10553eed8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10553eef0; end: 10553ef07; -[SCAltitudeStickerInjectorImpl _CTPAltitudeStickerTypeFromSCAltitudeViewType:] */

undefined4 FUN_10553eef0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10553ef08; end: 10553ef13; -[SCAltitudeStickerInjectorImpl .cxx_destruct] */

void FUN_10553ef08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10553ef14; end: 10553ef43;  */

void FUN_10553ef14(void)

{
  _objc_alloc(PTR_PTR_1126ba8e0);
  func_0x00010c026e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10553ef44; end: 10553ef7b; -[SCAltitudeStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553ef44(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127257bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257c0);
  return;
}



/* Entry: 10553ef7c; end: 10553ef7f; -[SCAttachmentStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10553ef7c(void)

{
  return;
}



/* Entry: 10553ef80; end: 10553ef87; -[SCAttachmentStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10553ef80(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0xc)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10553f11c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553ef88; end: 10553f013;  */

bool FUN_10553ef88(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0xc)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10553f11c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10553f014; end: 10553f04b; -[SCAttachmentStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10553f014(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10553f04c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10553f04c; end: 10553f0e3;  */

void FUN_10553f04c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != -0x581ebadd)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10553f0e4; end: 10553f11b; -[SCAttachmentStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10553f0e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10553f11c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10553f11c; end: 10553f1eb;  */

void FUN_10553f11c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar1;
    func_0x00010bf0d340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (param_1 != 0) {
      _objc_retain(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553f1ec; end: 10553f1f3; -[SCAttachmentStickerInjectorImpl isConversionSupportedForCTPItem:] */

undefined8 FUN_10553f1ec(void)

{
  return 0;
}



/* Entry: 10553f1f4; end: 10553f323; -[SCAttachmentStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10553f1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  FUN_10553ef88();
  puVar2 = PTR_PTR_1126ba8a8;
  if ((int)uVar1 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = param_5;
    func_0x00010c2790e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1281e0(param_5);
    uVar3 = param_1;
    uVar6 = param_2;
    func_0x00010bf345e0(param_5);
    uVar4 = uVar3;
    func_0x00010c14e120(param_5);
    uVar5 = uVar4;
    func_0x00010c141a80(param_5);
    func_0x00010c2551c0(param_1,param_2,uVar3,uVar6,uVar4,uVar5,puVar2,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0846e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246580(param_3,param_4,uVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10553f324; end: 10553f433; -[SCAttachmentStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10553f324(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_10553f04c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0xc,param_1,param_6,param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553f434; end: 10553f5cb; -[SCAttachmentStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10553f434(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  FUN_10553f04c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar1 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar2 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar3 = PTR_PTR_1126ba8f8;
    _objc_opt_new(PTR_PTR_1126ba8f8);
    puVar4 = PTR_PTR_1126ba900;
    _objc_opt_new(PTR_PTR_1126ba900);
    func_0x00010c21acc0(puVar3,param_2,0x15);
    lVar5 = param_3;
    func_0x00010bf0d6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3a0(puVar4,param_2,lVar5);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c22d9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffea0(puVar4,param_2,lVar5);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar4,param_2,lVar5);
    _objc_release(lVar5);
    func_0x00010c1ac500(puVar2,param_2,puVar3);
    func_0x00010c196600(puVar1,param_2,puVar2);
    func_0x00010c1b5d40(puVar7,param_2,puVar1);
    puVar6 = puVar7;
    func_0x00010c0cc0c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b260();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10553f5cc; end: 10553f77b; -[SCAttachmentStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10553f5cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10553f11c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126ba908;
    _objc_alloc(PTR_PTR_1126ba908);
    lVar7 = lVar1;
    func_0x00010bf0d660(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c2711a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c22d960(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4d80(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    puVar5 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    func_0x00010c16b040();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar7 = lVar3;
    func_0x00010bf21f60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10553f77c; end: 10553f783; -[SCAttachmentStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10553f77c(void)

{
  return 0;
}



/* Entry: 10553f784; end: 10553f827; -[SCAttachmentStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10553f784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553f828; end: 10553f82f; -[SCAttachmentStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

undefined8 FUN_10553f828(void)

{
  return 0;
}



/* Entry: 10553f830; end: 10553f893; -[SCAttachmentStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10553f830(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10553f11c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba910;
    _objc_alloc(PTR_PTR_1126ba910);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553f894; end: 10553f917; -[SCAttachmentStickerInjectorImpl doesCTItemInstanceHaveAttachmentMetadata:] */

uint FUN_10553f894(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  
  FUN_10553f11c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf0d660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    uVar3 = (uint)puVar2 ^ 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10553f918; end: 10553f9a7; -[SCAttachmentStickerInjectorImpl attachmentURLForCTItemInstance:] */

void FUN_10553f918(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_10553f11c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf0d660(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retain(lVar1);
      lVar3 = lVar1;
    }
    else {
      lVar3 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10553f9a8; end: 10553fa73; -[SCAttachmentStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_10553f9a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_10553f11c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf0d660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_PTR_1126ba918;
      func_0x00010c0cb140(PTR_PTR_1126ba918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      lVar1 = param_3;
      func_0x00010bf0d660(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar2,param_2,lVar1);
      _objc_release(lVar1);
      goto LAB_10553fa58;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_10553fa58:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553fa74; end: 10553fa7b; -[SCAttachmentStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_10553fa74(void)

{
  return 1;
}



/* Entry: 10553fa7c; end: 10553fa97;  */

void FUN_10553fa7c(void)

{
  _objc_alloc_init(PTR_PTR_1126ba920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10553fa98; end: 10553faa7; -[SCAttachmentStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10553fa98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257c4);
  return;
}



/* Entry: 10553faa8; end: 10553faab; -[SCBatteryStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10553faa8(void)

{
  return;
}



/* Entry: 10553faac; end: 10553fad7; -[SCBatteryStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10553faac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bfee000(param_3);
    return param_3 == 4;
  }
  return false;
}


