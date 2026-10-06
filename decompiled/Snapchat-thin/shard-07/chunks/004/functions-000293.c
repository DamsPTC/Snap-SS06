/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105546d20; end: 105546e2f; -[SCPollStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_105546d20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_10554697c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0xe,param_1,param_6,param_5,0,param_7);
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



/* Entry: 105546e30; end: 105546f13; -[SCPollStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_105546e30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_10554697c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar2 = param_3;
    func_0x00010c103320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b61b8;
    _objc_alloc(PTR_PTR_1126b61b8);
    func_0x00010c008360();
    puVar4 = PTR_PTR_1126b13b0;
    lVar2 = param_3;
    func_0x00010c071160(param_3);
    func_0x00010c103520(puVar4,param_2,puVar3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105546f14; end: 1055470eb; -[SCPollStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_105546f14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_105546a48();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126baa48;
    _objc_alloc_init(PTR_PTR_1126baa48);
    lVar7 = lVar1;
    func_0x00010c1032c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1deb20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    func_0x00010c071080(lVar1);
    func_0x00010c1b09a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar6 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dea00(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
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



/* Entry: 1055470ec; end: 1055470f3; -[SCPollStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_1055470ec(void)

{
  return 0;
}



/* Entry: 1055470f4; end: 105547197; -[SCPollStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_1055470f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 105547198; end: 105547207; -[SCPollStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_105547198(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_105546b38();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b13b0;
    func_0x00010c103520(PTR_PTR_1126b13b0,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126baa40;
    _objc_alloc(PTR_PTR_1126baa40);
    func_0x00010c020180();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105547208; end: 10554726b; -[SCPollStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_105547208(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105546a48();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126baa40;
    _objc_alloc(PTR_PTR_1126baa40);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10554726c; end: 105547273; -[SCPollStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_10554726c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0xe)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105546a48();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105547274; end: 10554727b; -[SCPollStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_105547274(void)

{
  return 0;
}



/* Entry: 10554727c; end: 105547283; -[SCPollStickerInjectorImpl prepareItemInstanceForContextAction:] */

undefined8 FUN_10554727c(void)

{
  return 0;
}



/* Entry: 105547284; end: 10554734f; -[SCPollStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_105547284(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_105546a48();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfda600(), (int)lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c1032c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1032a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126ba918;
      func_0x00010c0cb140(PTR_PTR_1126ba918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      func_0x00010c1b6b40(puVar3,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105547350; end: 1055473a7; -[SCPollStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined4 FUN_105547350(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  FUN_105546a48();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c071080();
    uVar2 = 3;
    if ((int)lVar1 != 0) {
      uVar2 = 4;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1055473a8; end: 1055473c3;  */

void FUN_1055473a8(void)

{
  _objc_alloc_init(PTR_PTR_1126baa50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055473c4; end: 1055473d3; -[SCPollStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055473c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725824);
  return;
}



/* Entry: 1055473d4; end: 1055474b3; -[SCQuestionSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1055473d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8ec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112725828;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar4 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272582c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272582c) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055474b4; end: 1055475e7; -[SCQuestionSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055474b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                      ,0,*(undefined8 *)(param_7 + _DAT_112725828),param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055475e8; end: 1055475f3; -[SCQuestionSticker stickerId] */

void FUN_1055475e8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 1055475f4; end: 1055475ff; -[SCQuestionSticker shortLoggingName] */

void FUN_1055475f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 105547600; end: 10554762f; -[SCQuestionSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105547600(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272582c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105547630; end: 10554765f; -[SCQuestionSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105547630(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725828);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105547660; end: 105547667; -[SCQuestionSticker supportedFlows] */

undefined8 FUN_105547660(void)

{
  return 0;
}



/* Entry: 105547668; end: 10554766f; -[SCQuestionSticker infoType] */

undefined8 FUN_105547668(void)

{
  return 0x10;
}



/* Entry: 105547670; end: 105547683; -[SCQuestionSticker intrinsicSize] */

void FUN_105547670(void)

{
  return;
}



/* Entry: 105547684; end: 105547743; -[SCQuestionSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105547684(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    puVar2 = PTR_PTR_1126baa68;
    _objc_opt_class(PTR_PTR_1126baa68);
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
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112725828);
      uVar3 = param_3;
      func_0x00010c271a60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105547744; end: 105547753; -[SCQuestionSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105547744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112725828),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105547754; end: 105547793; -[SCQuestionSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105547754(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272582c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725828,0);
  return;
}



/* Entry: 105547794; end: 105547797; -[SCQuestionStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_105547794(void)

{
  return;
}



/* Entry: 105547798; end: 10554779f; -[SCQuestionStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_105547798(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0x10)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105547934();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055477a0; end: 10554782b;  */

bool FUN_1055477a0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0x10)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105547934();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554782c; end: 105547863; -[SCQuestionStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10554782c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105547864(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105547864; end: 1055478fb;  */

void FUN_105547864(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != -0x16d7d41a)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11dc00();
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



/* Entry: 1055478fc; end: 105547933; -[SCQuestionStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_1055478fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105547934(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105547934; end: 105547a1b;  */

void FUN_105547934(long param_1)

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
    func_0x00010c11dd60();
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



/* Entry: 105547a1c; end: 105547a23; -[SCQuestionStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_105547a1c(undefined8 param_1,undefined8 param_2,ulong param_3)

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
      bVar1 = uVar3 == 0x10;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105547a24; end: 105547adb;  */

bool FUN_105547a24(ulong param_1)

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
      bVar1 = uVar3 == 0x10;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105547adc; end: 105547c0b; -[SCQuestionStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_105547adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1055477a0();
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



/* Entry: 105547c0c; end: 105547d1b; -[SCQuestionStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_105547c0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_105547864();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0x10,param_1,param_6,param_5,0,param_7);
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



/* Entry: 105547d1c; end: 105547dc3; -[SCQuestionStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_105547d1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_105547864();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b13b0;
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c11dc00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf04880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11dd40(puVar3,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105547dc4; end: 105547f7f; -[SCQuestionStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_105547dc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_105547934();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126baa70;
    _objc_alloc_init(PTR_PTR_1126baa70);
    lVar6 = lVar1;
    func_0x00010c11ddc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6540(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar1;
    func_0x00010bf048c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168500(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6540(puVar3);
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



/* Entry: 105547f80; end: 105547f87; -[SCQuestionStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_105547f80(void)

{
  return 0;
}



/* Entry: 105547f88; end: 10554802b; -[SCQuestionStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105547f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10554802c; end: 1055480c3; -[SCQuestionStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10554802c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_105547a24();
  puVar1 = PTR_PTR_1126b13b0;
  if ((int)param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000108e73a88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11dd40(puVar1,param_2,param_3,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126baa68;
    _objc_alloc(PTR_PTR_1126baa68);
    func_0x00010c020180();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055480c4; end: 105548127; -[SCQuestionStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_1055480c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105547934();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126baa68;
    _objc_alloc(PTR_PTR_1126baa68);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105548128; end: 10554812f; -[SCQuestionStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_105548128(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0x10)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105547934();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105548130; end: 105548137; -[SCQuestionStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_105548130(void)

{
  return 0;
}



/* Entry: 105548138; end: 10554813f; -[SCQuestionStickerInjectorImpl prepareItemInstanceForContextAction:] */

undefined8 FUN_105548138(void)

{
  return 0;
}



/* Entry: 105548140; end: 1055481fb; -[SCQuestionStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_105548140(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_105547934();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c11ddc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126ba918;
      func_0x00010c0cb140(PTR_PTR_1126ba918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      lVar1 = param_3;
      func_0x00010c11ddc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar3,param_2,lVar1);
      _objc_release(lVar1);
      goto LAB_1055481e0;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_1055481e0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055481fc; end: 105548203; -[SCQuestionStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_1055481fc(void)

{
  return 5;
}



/* Entry: 105548204; end: 10554821f;  */

void FUN_105548204(void)

{
  _objc_alloc_init(PTR_PTR_1126baa78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105548220; end: 10554822f; -[SCQuestionStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105548220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725830);
  return;
}



/* Entry: 105548230; end: 1055482d3; -[SCSnapcodeStickerInjectorImpl initWithUserId:username:] */

undefined1 *
FUN_105548230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8ed0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055482d4; end: 1055482d7; -[SCSnapcodeStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1055482d4(void)

{
  return;
}



/* Entry: 1055482d8; end: 1055482df; -[SCSnapcodeStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_1055482d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 9)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105548474();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055482e0; end: 10554836b;  */

bool FUN_1055482e0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 9)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105548474();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554836c; end: 1055483a3; -[SCSnapcodeStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10554836c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1055483a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 1055483a4; end: 10554843b;  */

void FUN_1055483a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != 0x3f9998b7)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c244f40();
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



/* Entry: 10554843c; end: 105548473; -[SCSnapcodeStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10554843c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105548474(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105548474; end: 10554855b;  */

void FUN_105548474(long param_1)

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
    func_0x00010c2451a0();
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



/* Entry: 10554855c; end: 105548563; -[SCSnapcodeStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_10554855c(undefined8 param_1,undefined8 param_2,ulong param_3)

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
      bVar1 = uVar3 == 9;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105548564; end: 10554861b;  */

bool FUN_105548564(ulong param_1)

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
      bVar1 = uVar3 == 9;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554861c; end: 10554874b; -[SCSnapcodeStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10554861c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1055482e0();
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



/* Entry: 10554874c; end: 10554885b; -[SCSnapcodeStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10554874c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_1055483a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,9,param_1,param_6,param_5,0,param_7);
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



/* Entry: 10554885c; end: 10554894f; -[SCSnapcodeStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10554885c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_1055483a4();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    func_0x00010beeb580(param_1,param_2,lVar1);
    puVar4 = PTR_PTR_1126b13b0;
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c245180(puVar4,param_2,lVar1,lVar2,lVar3,0,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105548950; end: 105548c0f; -[SCSnapcodeStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_105548950(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_105548474();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x00010c2bc400();
    puVar2 = PTR_PTR_1126baa88;
    _objc_alloc_init(PTR_PTR_1126baa88);
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bfde100();
    if ((int)lVar7 != 0) {
      lVar7 = lVar1;
      func_0x00010c2923e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010bfe2ee0();
      lVar4 = lVar7;
      func_0x00010c0b5940(lVar7);
      func_0x000100c4a928(lVar3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010c21e620(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar7);
    }
    lVar7 = lVar1;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    if (lVar3 != 0) {
      lVar7 = lVar1;
      func_0x00010c292e20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f760(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar7);
    }
    lVar7 = lVar1;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    if (lVar3 != 0) {
      lVar7 = lVar1;
      func_0x00010bf12ea0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170a80(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar7);
    }
    puVar5 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar6 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205f80(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
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



/* Entry: 105548c10; end: 105548c17; -[SCSnapcodeStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_105548c10(void)

{
  return 0;
}



/* Entry: 105548c18; end: 105548cbb; -[SCSnapcodeStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105548c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 105548cbc; end: 105548d37; -[SCSnapcodeStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_105548cbc(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_105548564();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b13b0;
    func_0x00010c245180(PTR_PTR_1126b13b0,param_2,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),0,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126baa90;
    _objc_alloc(PTR_PTR_1126baa90);
    func_0x00010c020180();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105548d38; end: 105548d9b; -[SCSnapcodeStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_105548d38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105548474();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126baa90;
    _objc_alloc(PTR_PTR_1126baa90);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105548d9c; end: 105548db3; -[SCSnapcodeStickerInjectorImpl _withUserTagForSOJUSnapcodeStickerStyleType:] */

bool FUN_105548d9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0 && param_3 != -0x19279619;
}



/* Entry: 105548db4; end: 105548eb7; -[SCSnapcodeStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_105548db4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_105548474();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfde100(), (int)lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe2ee0();
    lVar3 = lVar1;
    func_0x00010c0b5940(lVar1);
    func_0x000100c4a928(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1126ba918;
      func_0x00010c0cb140(PTR_PTR_1126ba918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      func_0x00010c1b6b40(puVar4);
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105548eb8; end: 105548ebf; -[SCSnapcodeStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_105548eb8(void)

{
  return 1;
}



/* Entry: 105548ec0; end: 105548eef; -[SCSnapcodeStickerInjectorImpl .cxx_destruct] */

void FUN_105548ec0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105548ef0; end: 105548ef7;  */

void FUN_105548ef0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_currentValue_1125b5c50);
  return;
}



/* Entry: 105548ef8; end: 105548f5f;  */

void FUN_105548ef8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126baa98;
  _objc_alloc(PTR_PTR_1126baa98);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bf60(puVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105548f60; end: 105548f97; -[SCSnapcodeStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105548f60(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272583c);
  return;
}



/* Entry: 105548f98; end: 10554900b; -[SCStoryInviteStickerInjectorImpl initWithCreativeToolsABProvider:] */

undefined1 * FUN_105548f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8ed8;
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



/* Entry: 10554900c; end: 105549013; -[SCStoryInviteStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

void FUN_10554900c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isStoryStickerDeprecated_1125fd980);
  return;
}



/* Entry: 105549014; end: 105549017; -[SCStoryInviteStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_105549014(void)

{
  return;
}



/* Entry: 105549018; end: 10554901f; -[SCStoryInviteStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_105549018(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 10)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_1055491b4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105549020; end: 1055490ab;  */

bool FUN_105549020(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 10)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_1055491b4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1055490ac; end: 1055490e3; -[SCStoryInviteStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_1055490ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1055490e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 1055490e4; end: 10554917b;  */

void FUN_1055490e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != 0x5a8d701e)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25bcc0();
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



/* Entry: 10554917c; end: 1055491b3; -[SCStoryInviteStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10554917c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1055491b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 1055491b4; end: 10554929b;  */

void FUN_1055491b4(long param_1)

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
    func_0x00010c259fc0();
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



/* Entry: 10554929c; end: 1055492a3; -[SCStoryInviteStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_10554929c(undefined8 param_1,undefined8 param_2,ulong param_3)

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
      bVar1 = uVar3 == 0xb;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055492a4; end: 10554935b;  */

bool FUN_1055492a4(ulong param_1)

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
      bVar1 = uVar3 == 0xb;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554935c; end: 10554948b; -[SCStoryInviteStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10554935c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_105549020();
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



/* Entry: 10554948c; end: 10554959b; -[SCStoryInviteStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10554948c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_1055490e4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,10,param_1,param_6,param_5,0,param_7);
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



/* Entry: 10554959c; end: 10554968b; -[SCStoryInviteStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10554959c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_1055490e4();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c25b740(param_3);
    func_0x00010bec4aa0(param_1,param_2,lVar1);
    puVar4 = PTR_PTR_1126b13b0;
    lVar1 = param_3;
    func_0x00010c06a860(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c25a5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259fa0(puVar4,param_2,lVar1,lVar2,lVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10554968c; end: 1055498a7; -[SCStoryInviteStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10554968c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_1055491b4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x00010c27dd80(lVar1);
    func_0x00010bebdce0(param_1);
    puVar2 = PTR_PTR_1126baaa8;
    _objc_alloc_init(PTR_PTR_1126baaa8);
    lVar6 = lVar1;
    func_0x00010c25a5c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d540(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar1;
    func_0x00010c06a860(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeb00(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010c20dde0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c259cc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e0e0(puVar3);
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



/* Entry: 1055498a8; end: 1055498af; -[SCStoryInviteStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_1055498a8(void)

{
  return 0;
}



/* Entry: 1055498b0; end: 105549953; -[SCStoryInviteStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_1055498b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 105549954; end: 1055499cf; -[SCStoryInviteStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_105549954(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_1055492a4();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b13b0;
    func_0x00010c259fa0(PTR_PTR_1126b13b0,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110daafd8,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126baab0;
    _objc_alloc(PTR_PTR_1126baab0);
    func_0x00010c020180();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055499d0; end: 105549a33; -[SCStoryInviteStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_1055499d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_1055491b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126baab0;
    _objc_alloc(PTR_PTR_1126baab0);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105549a34; end: 105549a8f; -[SCStoryInviteStickerInjectorImpl _storyInviteStickerMetadataTypeForSOJUBroadcastMobStoryType:] */

undefined4 FUN_105549a34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0x180cb163) {
    if ((param_3 != -0x63b4c480) && (param_3 != 0)) {
      return 1;
    }
  }
  else if (param_3 != 0x6b166938) {
    uVar1 = 1;
    if (param_3 == 0x180cb163) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 105549a90; end: 105549abf; -[SCStoryInviteStickerInjectorImpl _sojuBroadcastMobStoryTypeForStoryInviteStickerMetadataType:] */

undefined4 FUN_105549a90(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x77297f71;
  if (param_3 == 2) {
    uVar2 = 0x180cb163;
  }
  uVar1 = 0;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105549ac0; end: 105549ba7; -[SCStoryInviteStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_105549ac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_1055491b4();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
LAB_105549b78:
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = param_3;
      func_0x00010c06a860();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 == 0) goto LAB_105549b78;
      puVar4 = PTR_PTR_1126ba918;
      func_0x00010c0cb140(PTR_PTR_1126ba918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      lVar1 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar4,param_2,lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105549ba8; end: 105549baf; -[SCStoryInviteStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_105549ba8(void)

{
  return 1;
}



/* Entry: 105549bb0; end: 105549bbb; -[SCStoryInviteStickerInjectorImpl .cxx_destruct] */

void FUN_105549bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105549bbc; end: 105549c17;  */

void FUN_105549bbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126baab8;
  _objc_alloc(PTR_PTR_1126baab8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5aea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006840(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


