/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105549c18; end: 105549c4f; -[SCStoryInviteStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105549c18(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272584c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725848);
  return;
}



/* Entry: 105549c50; end: 105549c53; -[SCUVIndexStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_105549c50(void)

{
  return;
}



/* Entry: 105549c54; end: 105549c5b; -[SCUVIndexStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_105549c54(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0x14)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105549df0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105549c5c; end: 105549ce7;  */

bool FUN_105549c5c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0x14)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105549df0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105549ce8; end: 105549d1f; -[SCUVIndexStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_105549ce8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105549d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105549d20; end: 105549db7;  */

void FUN_105549d20(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != -0x169e9e6c)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c294d80();
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



/* Entry: 105549db8; end: 105549def; -[SCUVIndexStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_105549db8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105549df0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105549df0; end: 105549ed7;  */

void FUN_105549df0(long param_1)

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
    func_0x00010c294de0();
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



/* Entry: 105549ed8; end: 105549fa3; -[SCUVIndexStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_105549ed8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
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
      bVar1 = uVar3 == 0x16;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105549fa4; end: 10554a0d3; -[SCUVIndexStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_105549fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_105549c5c();
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



/* Entry: 10554a0d4; end: 10554a1e3; -[SCUVIndexStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10554a0d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_105549d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0x14,param_1,param_6,param_5,0,param_7);
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



/* Entry: 10554a1e4; end: 10554a343; -[SCUVIndexStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10554a1e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  FUN_105549d20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar1 = PTR_PTR_1126baac8;
    _objc_opt_new(PTR_PTR_1126baac8);
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar4 = PTR_PTR_1126ba8f8;
    _objc_opt_new(PTR_PTR_1126ba8f8);
    func_0x00010c21acc0();
    lVar5 = param_3;
    func_0x00010c294d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c067ec0();
    func_0x00010c21fca0(puVar1,param_2,lVar6);
    _objc_release(lVar5);
    func_0x00010c1ac500(puVar3,param_2,puVar4);
    func_0x00010c196600(puVar2,param_2,puVar3);
    func_0x00010c1b5d40(puVar9,param_2,puVar2);
    puVar7 = puVar9;
    func_0x00010c0cc0c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fcc0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10554a344; end: 10554a4e3; -[SCUVIndexStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10554a344(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_105549df0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126baad0;
    _objc_alloc_init(PTR_PTR_1126baad0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c294d80(lVar1);
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fca0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fca0(puVar3);
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



/* Entry: 10554a4e4; end: 10554a50b; -[SCUVIndexStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10554a4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_105549df0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return 0;
}



/* Entry: 10554a50c; end: 10554a567; -[SCUVIndexStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10554a50c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  FUN_105549df0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10554a568; end: 10554a667; -[SCUVIndexStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10554a568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10554a668;
  uStack_40 = 0x10554a678;
  uStack_38 = 0;
  func_0x00010c0c11a0(param_4);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10554a668; end: 10554a67f;  */

void FUN_10554a668(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10554a680; end: 10554a757;  */

void FUN_10554a680(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
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
    func_0x00010bfcb9a0();
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126baad8;
    _objc_alloc();
    func_0x00010c05fa60();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10554a758; end: 10554a7df; -[SCUVIndexStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10554a758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c294de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294d80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_alloc(PTR_PTR_1126baad8);
  func_0x00010c05fa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10554a7e0; end: 10554a89f; -[SCUVIndexStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

bool FUN_10554a7e0(void)

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
    func_0x00010bfcb9a0();
    _objc_release(uVar4);
    bVar6 = (long)uVar5 < 1;
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(in_x3);
  return bVar6;
}



/* Entry: 10554a8a0; end: 10554a8bb;  */

void FUN_10554a8a0(void)

{
  _objc_alloc_init(PTR_PTR_1126baae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10554a8bc; end: 10554a8cb; -[SCUVIndexStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554a8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725850);
  return;
}



/* Entry: 10554a8cc; end: 10554a8cf; -[SCVenueStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10554a8cc(void)

{
  return;
}



/* Entry: 10554a8d0; end: 10554a8d7; -[SCVenueStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10554a8d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 5)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10554aa6c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554a8d8; end: 10554a963;  */

bool FUN_10554a8d8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 5)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10554aa6c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554a964; end: 10554a99b; -[SCVenueStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10554a964(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10554a99c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554a99c; end: 10554aa33;  */

void FUN_10554a99c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != 0x4dc724f)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c297b40();
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



/* Entry: 10554aa34; end: 10554aa6b; -[SCVenueStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10554aa34(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10554aa6c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554aa6c; end: 10554ab53;  */

void FUN_10554aa6c(long param_1)

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
    func_0x00010c0fd520();
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



/* Entry: 10554ab54; end: 10554ab5b; -[SCVenueStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_10554ab54(undefined8 param_1,undefined8 param_2,ulong param_3)

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
      bVar1 = uVar3 == 7;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554ab5c; end: 10554ac13;  */

bool FUN_10554ab5c(ulong param_1)

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
      bVar1 = uVar3 == 7;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554ac14; end: 10554ad43; -[SCVenueStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10554ac14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10554a8d8();
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



/* Entry: 10554ad44; end: 10554ae53; -[SCVenueStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10554ad44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_10554a99c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,5,param_1,param_6,param_5,0,param_7);
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



/* Entry: 10554ae54; end: 10554af5b; -[SCVenueStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10554ae54(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  FUN_10554a99c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    func_0x00010be74280(param_1,param_2,lVar1);
    puVar5 = PTR_PTR_1126b13b0;
    lVar1 = param_3;
    func_0x00010c297b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c297b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2980a0(puVar5,param_2,lVar2,lVar4,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10554af5c; end: 10554b1cf; -[SCVenueStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10554af5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10554aa6c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    func_0x00010c27dd80(lVar1);
    func_0x00010bebdec0(param_1);
    lVar8 = lVar1;
    func_0x00010c0fd0e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bfe2ee0();
    lVar3 = lVar8;
    func_0x00010c0b5940(lVar8);
    func_0x000100c4a928(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar8);
    puVar4 = PTR_PTR_1126baaf0;
    _objc_alloc(PTR_PTR_1126baaf0);
    lVar8 = lVar1;
    func_0x00010c0d4f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060820(puVar4);
    _objc_release(lVar8);
    puVar5 = PTR_PTR_1126baaf8;
    _objc_alloc_init(PTR_PTR_1126baaf8);
    func_0x00010c220720();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21ace0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar7 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220720(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    lVar2 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    lVar8 = lVar2;
    func_0x00010bf21f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10554b1d0; end: 10554b1d7; -[SCVenueStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10554b1d0(void)

{
  return 0;
}



/* Entry: 10554b1d8; end: 10554b27b; -[SCVenueStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10554b1d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10554b27c; end: 10554b507; -[SCVenueStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10554b27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10554ab5c();
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_10554b508;
    uStack_60 = 0x10554b518;
    uStack_58 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10554b508;
    uStack_90 = 0x10554b518;
    uStack_88 = 0;
    uVar1 = param_4;
    func_0x00010c0c11a0(param_4);
    func_0x000109201bb0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bab10;
    func_0x00010c298180(PTR_PTR_1126bab10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bab18;
    _objc_alloc(PTR_PTR_1126bab18);
    func_0x00010c01bb80();
    _objc_release(puVar5);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b13b0;
    puVar6 = (undefined *)puStack_78[5];
    puVar5 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar5 = puVar2;
      func_0x00010bfe5ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = (undefined *)puStack_a8[5];
    puVar3 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c2711a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2980a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126bab00;
    _objc_alloc(PTR_PTR_1126bab00);
    func_0x00010c020180();
    _objc_release(puVar4);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10554b508; end: 10554b51f;  */

void FUN_10554b508(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10554b520; end: 10554b837;  */

void FUN_10554b520(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((param_2 == 0) || ((uVar2 & 1) == 0)) goto LAB_10554b7f4;
  uVar2 = param_2;
  func_0x00010bfc6da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcc060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar3 = uVar4;
  func_0x00010c2981c0();
  _objc_retainAutoreleasedReturnValue();
  param_3 = &uStack_130;
  uVar5 = uVar3;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar11 = *plStack_120;
    do {
      uVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(uVar3);
        }
        uVar13 = *(ulong *)(lStack_128 + uVar12 * 8);
        uVar6 = uVar13;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c08fa60();
        if (uVar7 == 0) {
          _objc_release(uVar6);
        }
        else {
          uVar7 = uVar13;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c08fa60();
          _objc_release(uVar7);
          _objc_release(uVar6);
          if (uVar8 != 0) {
            _objc_retain(uVar13);
            _objc_release(uVar3);
            if (uVar13 == 0) goto LAB_10554b71c;
            uVar3 = uVar13;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
            uVar10 = *(undefined8 *)(lVar11 + 0x28);
            *(ulong *)(lVar11 + 0x28) = uVar3;
            _objc_release(uVar10);
            uVar3 = uVar13;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
            uVar10 = *(undefined8 *)(lVar11 + 0x28);
            *(ulong *)(lVar11 + 0x28) = uVar3;
            _objc_release(uVar10);
            goto LAB_10554b7dc;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar5 != uVar12);
      param_3 = &uStack_130;
      uVar5 = uVar3;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar3);
LAB_10554b71c:
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08fa60();
  if (uVar5 == 0) {
    _objc_release(uVar3);
    uVar13 = uVar4;
LAB_10554b7dc:
    _objc_release(uVar13);
  }
  else {
    uVar5 = uVar4;
    func_0x00010bfed6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c08fa60();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    if (uVar12 != 0) {
      uVar3 = uVar4;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar10 = *(undefined8 *)(lVar11 + 0x28);
      *(ulong *)(lVar11 + 0x28) = uVar3;
      _objc_release(uVar10);
      uVar3 = uVar4;
      func_0x00010bfed6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar13 = *(ulong *)(lVar11 + 0x28);
      *(ulong *)(lVar11 + 0x28) = uVar3;
      goto LAB_10554b7dc;
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_10554b7f4:
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    puVar9 = param_3;
    FUN_10554aa6c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = (undefined *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      puVar1 = PTR_PTR_1126bab00;
      _objc_alloc(PTR_PTR_1126bab00);
      func_0x00010c020180();
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10554b838; end: 10554b89b; -[SCVenueStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10554b838(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10554aa6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bab00;
    _objc_alloc(PTR_PTR_1126bab00);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10554b89c; end: 10554b963; -[SCVenueStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

bool FUN_10554b89c(void)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar3 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar4 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar3);
  uVar1 = in_x3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    bVar2 = true;
  }
  else {
    uVar4 = in_x3;
    func_0x00010bfc6da0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfcc060();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar6 == 0;
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(in_x3);
  return bVar2;
}



/* Entry: 10554b964; end: 10554b9c7; -[SCVenueStickerInjectorImpl _placeStickerMetadataTypeForSOJUVenueStyleType:] */

undefined8 FUN_10554b964(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < -0x2e088750) {
    if (param_3 == -0x77ddfd44) {
      return 2;
    }
    if (param_3 == -0x52738bd4) {
      return 0;
    }
  }
  else {
    if (param_3 == -0x2e088750) {
      return 3;
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 10554b9c8; end: 10554ba17; -[SCVenueStickerInjectorImpl _sojuVenueStyleTypeForPlaceStickerMetadataType:] */

undefined8 FUN_10554b9c8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x348139;
  if (param_3 < 2) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 2) {
    uVar2 = 0xffffffff882202bc;
  }
  uVar1 = 0xffffffffd1f778b0;
  if (param_3 != 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10554ba18; end: 10554ba1f; -[SCVenueStickerInjectorImpl shouldShowMenuForCTItemInstance:mediaType:] */

undefined8 FUN_10554ba18(void)

{
  return 1;
}



/* Entry: 10554ba20; end: 10554bc43; -[SCVenueStickerInjectorImpl menuActionsForCTItemInstance:actionHandler:] */

void FUN_10554ba20(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **unaff_x24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_4);
  func_0x00010c253ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0c40;
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126bab08;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x000109201bc8();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10554bc44;
    puStack_70 = &UNK_110841fb0;
    unaff_x24 = &puStack_88;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_1);
    lStack_68 = param_1;
    func_0x00010c053120();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010c239180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10554bc44; end: 10554bc77;  */

void FUN_10554bc44(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c239180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10554bc78; end: 10554bd73; -[SCVenueStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_10554bc78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_10554aa6c();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfda400(), (int)lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0fd0e0();
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
    lVar1 = lVar3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126ba918;
      func_0x00010c0cb140(PTR_PTR_1126ba918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      func_0x00010c1b6b40(puVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10554bd74; end: 10554bd7b; -[SCVenueStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_10554bd74(void)

{
  return 1;
}



/* Entry: 10554bd7c; end: 10554bd97;  */

void FUN_10554bd7c(void)

{
  _objc_alloc_init(PTR_PTR_1126bab20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10554bd98; end: 10554bda7; -[SCVenueStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554bd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725854);
  return;
}



/* Entry: 10554bda8; end: 10554be2b; -[SCWeatherSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10554bda8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8ee0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112725858;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10554be2c; end: 10554bf5f; -[SCWeatherSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554be2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                      ,0,*(undefined8 *)(param_7 + _DAT_112725858),param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10554bf60; end: 10554bf6b; -[SCWeatherSticker stickerId] */

void FUN_10554bf60(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 10554bf6c; end: 10554c067; -[SCWeatherSticker shortLoggingName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554bf6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725858);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a2e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release();
  func_0x00010b759d8c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c27dd80(uVar3);
  uVar4 = uVar1;
  func_0x00010c26c080(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dea638);
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



/* Entry: 10554c068; end: 10554c06f; -[SCWeatherSticker toCTPItem] */

undefined8 FUN_10554c068(void)

{
  return 0;
}



/* Entry: 10554c070; end: 10554c09f; -[SCWeatherSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554c070(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725858);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10554c0a0; end: 10554c0a7; -[SCWeatherSticker supportedFlows] */

undefined8 FUN_10554c0a0(void)

{
  return 0;
}



/* Entry: 10554c0a8; end: 10554c0df; -[SCWeatherSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554c0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725858);
  *(undefined8 *)(param_1 + _DAT_112725858) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10554c0e0; end: 10554c0e7; -[SCWeatherSticker infoType] */

undefined8 FUN_10554c0e0(void)

{
  return 1;
}



/* Entry: 10554c0e8; end: 10554c0fb; -[SCWeatherSticker intrinsicSize] */

void FUN_10554c0e8(void)

{
  return;
}



/* Entry: 10554c0fc; end: 10554c1ab; -[SCWeatherSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10554c0fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bab30;
  _objc_opt_class(PTR_PTR_1126bab30);
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
    uVar4 = *(undefined8 *)(param_1 + _DAT_112725858);
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



/* Entry: 10554c1ac; end: 10554c1bb; -[SCWeatherSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554c1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112725858),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10554c1bc; end: 10554c1cf; -[SCWeatherSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554c1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725858,0);
  return;
}



/* Entry: 10554c1d0; end: 10554c297; -[SCWeatherStickerInjectorImpl initWithLocationProvider:weatherProvider:] */

undefined1 *
FUN_10554c1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8ee8;
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
    puVar3 = PTR_PTR_1126bab38;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10554c298; end: 10554c29b; -[SCWeatherStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10554c298(void)

{
  return;
}



/* Entry: 10554c29c; end: 10554c2a3; -[SCWeatherStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10554c29c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 1)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10554c438();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554c2a4; end: 10554c32f;  */

bool FUN_10554c2a4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 1)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10554c438();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554c330; end: 10554c367; -[SCWeatherStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10554c330(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10554c368(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554c368; end: 10554c3ff;  */

void FUN_10554c368(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != 0x73b7c3d4)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a2c20();
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



/* Entry: 10554c400; end: 10554c437; -[SCWeatherStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10554c400(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10554c438(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554c438; end: 10554c51f;  */

void FUN_10554c438(long param_1)

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
    func_0x00010c2a2e20();
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



/* Entry: 10554c520; end: 10554c527; -[SCWeatherStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_10554c520(undefined8 param_1,undefined8 param_2,ulong param_3)

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
      bVar1 = uVar3 == 0xd;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554c528; end: 10554c5df;  */

bool FUN_10554c528(ulong param_1)

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
      bVar1 = uVar3 == 0xd;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554c5e0; end: 10554c70f; -[SCWeatherStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10554c5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10554c2a4();
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



/* Entry: 10554c710; end: 10554c81f; -[SCWeatherStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10554c710(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_10554c368();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,1,param_1,param_6,param_5,0,param_7);
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



/* Entry: 10554c820; end: 10554ca03; -[SCWeatherStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10554c820(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  FUN_10554c368();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0x73b7c3d4;
  func_0x000105d0bdcc(0x73b7c3d4,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c2a2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar7 = (undefined *)0x0;
  if ((param_3 != 0) && (lVar2 != 0)) {
    func_0x00010b79ea48(param_3);
    func_0x00010beeaa40(param_1);
    lVar1 = lVar2;
    func_0x00010bfe4800(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010beea9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf632c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010beea9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c26aee0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010beeaa00(param_1);
    puVar7 = PTR_PTR_1126b13b0;
    lVar1 = lVar2;
    func_0x00010bf34540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c067ec0();
    lVar6 = lVar2;
    func_0x00010c09f000(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2e00((float)(int)lVar5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10554ca04; end: 10554cb5b; -[SCWeatherStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10554ca04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10554c438();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x00010c27dd80(lVar1);
    func_0x00010bebdf00(param_1);
    puVar2 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    func_0x00010b79eac8(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224b40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar5 = lVar3;
    func_0x00010bf21f60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10554cb5c; end: 10554cd8f; -[SCWeatherStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_10554cb5c(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  
  FUN_10554c438();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010bf34540(param_4);
    func_0x00010be0e140(param_2);
    lVar1 = param_4;
    fVar7 = param_1;
    func_0x00010c27dd80(param_4);
    func_0x00010bebdf00(param_2,param_3,lVar1);
    puVar2 = PTR_PTR_1126bab40;
    lVar1 = param_4;
    func_0x00010bfe47e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246800(puVar2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126bab40;
    lVar1 = param_4;
    func_0x00010bf632a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2464c0(puVar3,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126bab48;
    _objc_alloc_init(PTR_PTR_1126bab48);
    func_0x00010bf34540(param_4);
    func_0x00010c17a660(puVar4,param_3,(int)fVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c199dc0(puVar4,param_3,(int)param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c09f000(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bfa60(puVar4,param_3,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c1a9360(puVar4,param_3,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c189360(puVar4,param_3,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c222dc0(puVar4,param_3,param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba8c8;
    _objc_alloc_init(PTR_PTR_1126ba8c8);
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224b40(puVar5,param_3,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10554cd90; end: 10554ce33; -[SCWeatherStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10554cd90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10554ce34; end: 10554cf4b; -[SCWeatherStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10554ce34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10554c528();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10554cf4c;
    uStack_40 = 0x10554cf5c;
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



/* Entry: 10554cf4c; end: 10554cf63;  */

void FUN_10554cf4c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10554cf64; end: 10554d187;  */

void FUN_10554cf64(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010bfc6da0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfcc320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c2a2d00(uVar5);
    func_0x00010beeaa40(uVar8);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = uVar5;
    func_0x00010bfe4800(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beea9e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = uVar5;
    func_0x00010bf632c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beea9c0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar10 = *(long *)(param_2 + 0x20);
    func_0x00010c26aee0(*(undefined8 *)(lVar10 + 0x18));
    func_0x00010beeaa00(lVar10);
    puVar2 = PTR_PTR_1126b13b0;
    func_0x00010bf34540(uVar5);
    uVar4 = uVar5;
    func_0x00010c09f000(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2e00(param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126bab30;
    _objc_alloc();
    func_0x00010c020180();
    lVar10 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    uVar7 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined **)(lVar10 + 0x28) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10554d188; end: 10554d1eb; -[SCWeatherStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10554d188(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10554c438();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bab30;
    _objc_alloc(PTR_PTR_1126bab30);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10554d1ec; end: 10554d1f3; -[SCWeatherStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_10554d1ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 1)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10554c438();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554d1f4; end: 10554d1fb; -[SCWeatherStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_10554d1f4(void)

{
  return 1;
}



/* Entry: 10554d1fc; end: 10554d3c3; -[SCWeatherStickerInjectorImpl prepareItemInstanceForContextAction:] */

void FUN_10554d1fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_3);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  uVar5 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  func_0x00010bfab640(param_1,param_2,uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10554d3c4; end: 10554d657;  */

void FUN_10554d3c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126bab50;
  func_0x00010bf51580(PTR_PTR_1126bab50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  puVar6 = PTR_PTR_1126bab58;
  _objc_opt_new(PTR_PTR_1126bab58);
  func_0x00010c21acc0(puVar5,param_2,0xe);
  func_0x00010bf34540(puVar1);
  func_0x00010c17a640(puVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cc0c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2a2e20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c27dd80();
  func_0x00010c21acc0(puVar6,param_2,uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar11 = puVar1;
  func_0x00010c09f000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bfa60(puVar6,param_2,puVar11);
  _objc_release(puVar11);
  lVar12 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar12);
  puVar11 = puVar1;
  func_0x00010bfe4800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010beea9e0(lVar12,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9340(puVar6,param_2,lVar13);
  _objc_release(lVar13);
  _objc_release(puVar11);
  _objc_release(lVar12);
  lVar12 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar12);
  puVar11 = puVar1;
  func_0x00010bf632c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010beea9c0(lVar12,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189340(puVar6,param_2,lVar13);
  _objc_release(lVar13);
  _objc_release(puVar11);
  _objc_release(lVar12);
  func_0x00010c1ac500(puVar4,param_2,puVar5);
  func_0x00010c196600(puVar3,param_2,puVar4);
  func_0x00010c1b5d40(puVar2,param_2,puVar3);
  puVar11 = puVar2;
  func_0x00010c0cc0c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224c00();
  _objc_release(puVar14);
  _objc_release(puVar11);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554d658; end: 10554d71f; -[SCWeatherStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

bool FUN_10554d658(void)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar3 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar4 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar3);
  uVar1 = in_x3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    bVar2 = true;
  }
  else {
    uVar4 = in_x3;
    func_0x00010bfc6da0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfcc320();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar6 == 0;
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(in_x3);
  return bVar2;
}



/* Entry: 10554d720; end: 10554d757; -[SCWeatherStickerInjectorImpl _weatherStickerMetadataTypeForSOJUWeatherFilterViewType:] */

undefined4 FUN_10554d720(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0x10212c09) {
    uVar2 = 3;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (param_3 != -0xd50e65f) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10554d758; end: 10554d7a7; -[SCWeatherStickerInjectorImpl _sojuWeatherViewTypeForWeatherStickerMetadataType:] */

undefined8 FUN_10554d758(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x7fbe62ee;
  if (param_3 < 2) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 3) {
    uVar2 = 0x10212c09;
  }
  uVar1 = 0xfffffffff2af19a1;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10554d7a8; end: 10554d7e7; -[SCWeatherStickerInjectorImpl _weatherMetadataHourlyForecastForSOJUWeatherHourlyForecasts:] */

void FUN_10554d7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110896920);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10554d7e8; end: 10554d8af;  */

void FUN_10554d7e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bab60;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010bf34540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  func_0x00010c17a640((float)(int)uVar3,puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c2a2c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224b60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf86680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c18ffa0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10554d8b0; end: 10554d8ef; -[SCWeatherStickerInjectorImpl _weatherMetadataDailyForecastForSOJUWeatherDailyForecasts:] */

void FUN_10554d8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110896960);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10554d8f0; end: 10554d9e3;  */

void FUN_10554d8f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bab68;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010bf34580(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  func_0x00010c1c7e80((float)(int)uVar3,puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf34560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  func_0x00010c1c3820((float)(int)uVar3,puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c2a2c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224b60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf86680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c18ffa0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10554d9e4; end: 10554d9f3; -[SCWeatherStickerInjectorImpl _weatherMetadataMeasurementSystemForTemperatureScale:] */

undefined4 FUN_10554d9e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_3 == 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10554d9f4; end: 10554dab7; -[SCWeatherStickerInjectorImpl _fahrenheitValueForCelsius:] */

float FUN_10554d9f4(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMeasurement_1126bab70;
  _objc_alloc(PTR__OBJC_CLASS___NSMeasurement_1126bab70);
  dVar4 = (double)param_1;
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf34540(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e380(dVar4,puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf9fa60(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0c3f80(puVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (float)dVar4;
}



/* Entry: 10554dab8; end: 10554db23; -[SCWeatherStickerInjectorImpl .cxx_destruct] */

void FUN_10554dab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10554db24; end: 10554db67; -[SCWeatherStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554db24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272586c);
  _objc_destroyWeak(param_1 + _DAT_112725868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725870);
  return;
}



/* Entry: 10554db68; end: 10554dd2b; -[SCInfoStickerInjectorImpl registerInjector:infoConfig:] */

void FUN_10554db68(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bab90;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010bf5d780(param_4);
    func_0x00010c14c140(param_4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfee000(param_4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c246540(param_4);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ea0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puStack_80 = PTR_PTR_1126e8ef0;
    uStack_88 = param_1;
    _objc_msgSendSuper2(&uStack_88,PTR_s_registerInjector_config__112529fb8,param_3,puVar1);
    _objc_release(param_3);
    _objc_release(puVar1);
  }
  lVar6 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  plVar7 = &lStack_c0;
  uStack_98 = 0x10554dd2c;
  puStack_b8 = PTR_PTR_1126e8ef0;
  lStack_c0 = lVar6;
  lStack_b0 = param_3;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_stickerForCTPItem_presentationMo_1126729e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010554dd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
  return;
}


