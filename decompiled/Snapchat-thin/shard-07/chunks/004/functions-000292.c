/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105543898; end: 1055438c7; -[SCDiscoverDeeplinkSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105543898(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725808);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055438c8; end: 1055438cf; -[SCDiscoverDeeplinkSticker supportedFlows] */

undefined8 FUN_1055438c8(void)

{
  return 0;
}



/* Entry: 1055438d0; end: 1055438d7; -[SCDiscoverDeeplinkSticker infoType] */

undefined8 FUN_1055438d0(void)

{
  return 0x12;
}



/* Entry: 1055438d8; end: 1055438eb; -[SCDiscoverDeeplinkSticker intrinsicSize] */

void FUN_1055438d8(void)

{
  return;
}



/* Entry: 1055438ec; end: 1055438ff; -[SCDiscoverDeeplinkSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055438ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725808,0);
  return;
}



/* Entry: 105543900; end: 105543937; -[SCDiscoverDeeplinkStickerEntity init] */

void FUN_105543900(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e8eb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithInfoStickerType__1125e5098,0x11);
  return;
}



/* Entry: 105543938; end: 1055439f7; -[SCDiscoverDeeplinkStickerEntity initWithDeeplinkUrl:title:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105543938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e8eb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithInfoStickerType__1125e5098,0x11);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11272580c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112725810;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055439f8; end: 105543a07; -[SCDiscoverDeeplinkStickerEntity deeplinkUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055439f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272580c);
}



/* Entry: 105543a08; end: 105543a17; -[SCDiscoverDeeplinkStickerEntity title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105543a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725810);
}



/* Entry: 105543a18; end: 105543a57; -[SCDiscoverDeeplinkStickerEntity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105543a18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725810,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272580c,0);
  return;
}



/* Entry: 105543a58; end: 105543a5b; -[SCDiscoverDeeplinkStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_105543a58(void)

{
  return;
}



/* Entry: 105543a5c; end: 105543a93; -[SCDiscoverDeeplinkStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_105543a5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105543a94(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105543a94; end: 105543b23;  */

void FUN_105543a94(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0x12)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0846e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_105543c90();
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



/* Entry: 105543b24; end: 105543b5b; -[SCDiscoverDeeplinkStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_105543b24(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105543b5c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105543b5c; end: 105543c57;  */

void FUN_105543b5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bfee020(), lVar1 != 0x4007b5cf)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf81500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126ba9d8;
      _objc_alloc(PTR_PTR_1126ba9d8);
      lVar1 = lVar2;
      func_0x00010bf68980(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2711a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c009e40(puVar4,param_2,lVar1,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105543c58; end: 105543c8f; -[SCDiscoverDeeplinkStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_105543c58(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105543c90(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105543c90; end: 105543de7;  */

void FUN_105543c90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27dd80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 == 0x14) {
      lVar1 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf815a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR_PTR_1126ba9d8;
        _objc_alloc(PTR_PTR_1126ba9d8);
        lVar1 = lVar3;
        func_0x00010bf68960(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c2711a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c009e40(puVar5,param_2,lVar1,lVar2);
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
      _objc_release(lVar3);
      goto LAB_105543dc8;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105543dc8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105543de8; end: 105543e8b; -[SCDiscoverDeeplinkStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_105543de8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if ((uVar1 == 0) || (uVar3 = param_3, func_0x00010bfee000(), uVar3 != 0x11)) {
      param_3 = 0;
    }
    else {
      _objc_retain(param_3);
    }
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  return param_3 != 0;
}



/* Entry: 105543e8c; end: 105543fcb; -[SCDiscoverDeeplinkStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_105543e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  FUN_105543a94();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126ba8a8;
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    lVar1 = param_5;
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
    func_0x00010c2551c0(param_1,param_2,uVar3,uVar6,uVar4,uVar5,puVar2,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0846e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246580(param_3,param_4,lVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105543fcc; end: 1055440df; -[SCDiscoverDeeplinkStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_105543fcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_105543b5c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0x12,param_1,param_6,param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055440e0; end: 10554427f; -[SCDiscoverDeeplinkStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_1055440e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  FUN_105543b5c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ba9c8;
    _objc_opt_new(PTR_PTR_1126ba9c8);
    lVar2 = param_3;
    func_0x00010bf68980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ad40(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar1,param_2,lVar2);
      _objc_release(lVar2);
    }
    puVar4 = PTR_PTR_1126ba8f8;
    _objc_opt_new(PTR_PTR_1126ba8f8);
    func_0x00010c21acc0();
    puVar5 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    func_0x00010c1ac500();
    puVar6 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    func_0x00010c196600();
    puVar9 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    func_0x00010c1b5d40();
    puVar7 = puVar9;
    func_0x00010c0cc0c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ef00();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105544280; end: 10554443b; -[SCDiscoverDeeplinkStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_105544280(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_105543c90();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126ba9d0;
    _objc_alloc_init(PTR_PTR_1126ba9d0);
    lVar6 = lVar1;
    func_0x00010bf68980(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ada0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar1;
    func_0x00010c2711a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18eee0(puVar3);
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



/* Entry: 10554443c; end: 105544443; -[SCDiscoverDeeplinkStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10554443c(void)

{
  return 0;
}



/* Entry: 105544444; end: 10554449f; -[SCDiscoverDeeplinkStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105544444(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  FUN_105543c90();
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



/* Entry: 1055444a0; end: 1055444a7; -[SCDiscoverDeeplinkStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

undefined8 FUN_1055444a0(void)

{
  return 0;
}



/* Entry: 1055444a8; end: 10554450b; -[SCDiscoverDeeplinkStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_1055444a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105543c90();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba9c0;
    _objc_alloc(PTR_PTR_1126ba9c0);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10554450c; end: 1055445c7; -[SCDiscoverDeeplinkStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_10554450c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_105543c90();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf68980();
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
      func_0x00010bf68980(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar3,param_2,lVar1);
      _objc_release(lVar1);
      goto LAB_1055445ac;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_1055445ac:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055445c8; end: 1055445cf; -[SCDiscoverDeeplinkStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_1055445c8(void)

{
  return 1;
}



/* Entry: 1055445d0; end: 1055445eb;  */

void FUN_1055445d0(void)

{
  _objc_alloc_init(PTR_PTR_1126ba9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055445ec; end: 1055445fb; -[SCDiscoverDeeplinkStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055445ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725814);
  return;
}



/* Entry: 1055445fc; end: 1055445ff; -[SCGenericImageStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1055445fc(void)

{
  return;
}



/* Entry: 105544600; end: 105544637; -[SCGenericImageStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_105544600(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105544638(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105544638; end: 1055446c7;  */

void FUN_105544638(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0x13)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0846e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_105544784();
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



/* Entry: 1055446c8; end: 10554474b; -[SCGenericImageStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_1055446c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000105544700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554474c; end: 105544783; -[SCGenericImageStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10554474c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105544784(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105544784; end: 10554486b;  */

void FUN_105544784(long param_1)

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
    func_0x00010bfc0fa0();
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



/* Entry: 10554486c; end: 105544873; -[SCGenericImageStickerInjectorImpl isConversionSupportedForCTPItem:] */

undefined8 FUN_10554486c(void)

{
  return 0;
}



/* Entry: 105544874; end: 1055449b3; -[SCGenericImageStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_105544874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  FUN_105544638();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126ba8a8;
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    lVar1 = param_5;
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
    func_0x00010c2551c0(param_1,param_2,uVar3,uVar6,uVar4,uVar5,puVar2,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0846e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246580(param_3,param_4,lVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1055449b4; end: 105544b1b; -[SCGenericImageStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_1055449b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x000105544700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc0fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ba7d8;
    uVar2 = uVar4;
    func_0x00010c27dd80();
    func_0x0001060cedbc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfedfa0(puVar5,param_2,param_3,0x13,param_1,param_6,param_5,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105544b1c; end: 105544f1b; -[SCGenericImageStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_105544b1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000105544700();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar4 = PTR_PTR_1126ba8f8;
    _objc_opt_new(PTR_PTR_1126ba8f8);
    puVar5 = PTR_PTR_1126ba9f0;
    _objc_opt_new(PTR_PTR_1126ba9f0);
    func_0x00010c21acc0(puVar4,param_2,0x16);
    uVar6 = uVar1;
    func_0x00010bf05ba0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar5,param_2,uVar6);
    _objc_release(uVar6);
    uVar6 = uVar1;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 != 0) {
      uVar6 = uVar1;
      func_0x00010bf0d6a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdee0(puVar5,param_2,uVar6);
      _objc_release(uVar6);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar6 = param_3;
    func_0x00010bf9e600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar7,param_2,uVar6);
    _objc_release(uVar6);
    if (((ulong)puVar7 & 1) == 0) {
      uVar6 = param_3;
      func_0x00010bf9e600();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bfda7c0();
      _objc_release(uVar6);
      uVar6 = param_3;
      func_0x00010bf9e600(param_3);
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar8 == 0) {
        func_0x00010c199400(puVar5,param_2,uVar6);
      }
      else {
        func_0x00010c1befc0();
      }
      _objc_release(uVar6);
    }
    uVar6 = uVar1;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 != 0) {
      uVar8 = uVar6;
      func_0x00010bf44740(uVar6,param_2,&PTR____CFConstantStringClassReference_110db2d98);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ba9f8;
      _objc_opt_new();
      uVar9 = uVar8;
      func_0x00010bf529e0();
      if (1 < uVar9) {
        uVar9 = uVar8;
        func_0x00010c0dfd40(uVar8,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c067fc0();
        func_0x00010c2256c0(puVar7,param_2,uVar10);
        _objc_release(uVar9);
        uVar9 = uVar8;
        func_0x00010c0dfd40(uVar8,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c067fc0();
        func_0x00010c1a7d00(puVar7,param_2,uVar10);
        _objc_release(uVar9);
      }
      func_0x00010c1aa9c0(puVar5,param_2,puVar7);
      uVar9 = uVar8;
      func_0x00010bf529e0();
      if (2 < uVar9) {
        uVar9 = uVar8;
        func_0x00010c0dfd40(uVar8,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c067ec0();
        _objc_release(uVar9);
        func_0x00010c21acc0(puVar5,param_2,uVar10);
      }
      uVar9 = uVar8;
      func_0x00010bf529e0();
      if (3 < uVar9) {
        uVar9 = uVar8;
        func_0x00010c0dfd40(uVar8,param_2,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e6d60(puVar5,param_2,uVar9);
        _objc_release(uVar9);
      }
      _objc_release(puVar7);
      _objc_release(uVar8);
    }
    uVar8 = param_3;
    func_0x00010c06c0a0(param_3);
    func_0x00010c1af280(puVar5,param_2,uVar8);
    func_0x00010c1ac500(puVar3,param_2,puVar4);
    func_0x00010c196600(puVar2,param_2,puVar3);
    func_0x00010c1b5d40(puVar12,param_2,puVar2);
    puVar7 = puVar12;
    func_0x00010c0cc0c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2ae0();
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105544f1c; end: 1055452ef; -[SCGenericImageStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

long FUN_105544f1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  FUN_105544784();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bfe8ba0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar11 = lVar2;
    func_0x00010bfe8ba0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(lVar2);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar11);
    _objc_release(puVar4);
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = lVar2;
    func_0x00010c11ee60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = lVar2;
      func_0x00010c11ee60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8);
      _objc_release(lVar3);
    }
    puVar5 = puVar8;
    func_0x00010bf446e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126baa00;
    _objc_alloc(PTR_PTR_1126baa00);
    lVar3 = lVar2;
    func_0x00010c26b700(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010c099820(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3500(puVar6);
    _objc_release(lVar11);
    _objc_release(lVar3);
    lVar9 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c169260(lVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c06c000(lVar2);
    func_0x00010c0df6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1af280(lVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar3 = lVar2;
    func_0x00010c2541e0();
    iVar1 = (int)lVar3;
    lVar12 = lVar2;
    if (iVar1 == 3) {
      func_0x00010bf1ee20(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 2) {
      func_0x00010c09d760(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar12 = 0;
      if (iVar1 == 1) {
        lVar12 = lVar2;
        func_0x00010bf9de40(lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    lVar3 = 0;
    if ((int)puVar4 == 0) {
      lVar3 = lVar12;
    }
    func_0x00010c199840(lVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf21f60(lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(lVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar8);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    FUN_105544784(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return lVar11;
}



/* Entry: 1055452f0; end: 105545317; -[SCGenericImageStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_1055452f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_105544784(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return 0;
}



/* Entry: 105545318; end: 105545403; -[SCGenericImageStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105545318(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c2465a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
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
  }
  else {
    param_1 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105545404; end: 10554540b; -[SCGenericImageStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

undefined8 FUN_105545404(void)

{
  return 0;
}



/* Entry: 10554540c; end: 105545457; -[SCGenericImageStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10554540c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126baa08;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c020180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105545458; end: 1055454cf; -[SCGenericImageStickerInjectorImpl isAnimatedItemInstance:] */

undefined8 FUN_105545458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc0fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c000();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1055454d0; end: 10554553b; -[SCGenericImageStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_1055454d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  FUN_105544638();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c27dd80();
    if ((int)lVar2 == 4) {
      bVar1 = true;
    }
    else {
      lVar2 = param_3;
      func_0x00010c27dd80(param_3);
      bVar1 = (int)lVar2 == 5;
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554553c; end: 105545543; -[SCGenericImageStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_10554553c(void)

{
  return 0;
}



/* Entry: 105545544; end: 10554554b; -[SCGenericImageStickerInjectorImpl prepareItemInstanceForContextAction:] */

undefined8 FUN_105545544(void)

{
  return 0;
}



/* Entry: 10554554c; end: 1055455ef; -[SCGenericImageStickerInjectorImpl doesCTItemInstanceHaveAttachmentMetadata:] */

bool FUN_10554554c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_105544784();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010c099820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    if ((((ulong)puVar3 & 1) == 0) && (lVar2 = param_3, func_0x00010c27dd80(), (int)lVar2 != 1)) {
      lVar2 = param_3;
      func_0x00010c27dd80(param_3);
      bVar1 = (int)lVar2 != 3;
      goto LAB_1055455c0;
    }
  }
  bVar1 = false;
LAB_1055455c0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055455f0; end: 10554569f; -[SCGenericImageStickerInjectorImpl attachmentURLForCTItemInstance:] */

void FUN_1055455f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_105544784();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c099820(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    if (((((ulong)puVar2 & 1) == 0) && (lVar3 = param_3, func_0x00010c27dd80(), (int)lVar3 != 1)) &&
       (lVar3 = param_3, func_0x00010c27dd80(), (int)lVar3 != 3)) {
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



/* Entry: 1055456a0; end: 1055458b7; -[SCGenericImageStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_1055456a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  FUN_105544784();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_105545898;
  }
  puVar1 = PTR_PTR_1126ba918;
  func_0x00010c0cb140(PTR_PTR_1126ba918);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c27dd80();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_3;
  if ((int)lVar2 == 5) {
    lVar2 = param_3;
    func_0x00010c11ee60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10554572c;
    func_0x00010c11ee60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 5;
LAB_105545864:
    func_0x00010c1b6b40(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010c179660(puVar1,param_2,uVar5);
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  else {
LAB_10554572c:
    lVar2 = param_3;
    func_0x00010c27dd80();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)lVar2 == 1) {
      lVar2 = param_3;
      func_0x00010c099820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar4,param_2,lVar2);
      _objc_release(lVar2);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010c099820(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = 2;
        goto LAB_105545864;
      }
    }
    lVar2 = param_3;
    func_0x00010c27dd80();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)lVar2 == 3) {
      lVar2 = param_3;
      func_0x00010c099820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar4,param_2,lVar2);
      _objc_release(lVar2);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010c099820(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = 0x50;
        goto LAB_105545864;
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_3;
    func_0x00010c099820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010c099820(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 1;
      goto LAB_105545864;
    }
    puVar4 = (undefined *)0x0;
  }
  _objc_release(puVar1);
LAB_105545898:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055458b8; end: 1055458bf; -[SCGenericImageStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_1055458b8(void)

{
  return 1;
}



/* Entry: 1055458c0; end: 1055458db;  */

void FUN_1055458c0(void)

{
  _objc_alloc_init(PTR_PTR_1126baa10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055458dc; end: 1055458eb; -[SCGenericImageStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055458dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725818);
  return;
}



/* Entry: 1055458ec; end: 1055458ef; -[SCMentionStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1055458ec(void)

{
  return;
}



/* Entry: 1055458f0; end: 1055458f7; -[SCMentionStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_1055458f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 8)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105545a8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055458f8; end: 105545983;  */

bool FUN_1055458f8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 8)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105545a8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105545984; end: 1055459bb; -[SCMentionStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_105545984(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1055459bc(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 1055459bc; end: 105545a53;  */

void FUN_1055459bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != 0x6370a9ca)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ca400();
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



/* Entry: 105545a54; end: 105545a8b; -[SCMentionStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_105545a54(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105545a8c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105545a8c; end: 105545b73;  */

void FUN_105545a8c(long param_1)

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
    func_0x00010c0ca640();
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



/* Entry: 105545b74; end: 105545b7b; -[SCMentionStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_105545b74(undefined8 param_1,undefined8 param_2,ulong param_3)

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
      bVar1 = uVar3 == 8;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105545b7c; end: 105545c33;  */

bool FUN_105545b7c(ulong param_1)

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
      bVar1 = uVar3 == 8;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105545c34; end: 105545d63; -[SCMentionStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_105545c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1055458f8();
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



/* Entry: 105545d64; end: 105545e73; -[SCMentionStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_105545d64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_1055459bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,8,param_1,param_6,param_5,0,param_7);
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



/* Entry: 105545e74; end: 105545f63; -[SCMentionStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_105545e74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_1055459bc();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    func_0x00010be5f520(param_1,param_2,lVar1);
    puVar4 = PTR_PTR_1126b13b0;
    lVar1 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ca620(puVar4,param_2,lVar1,lVar2,lVar3,param_1);
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



/* Entry: 105545f64; end: 10554625f; -[SCMentionStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_105545f64(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  FUN_105545a8c();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    func_0x00010c27dd80(ppuVar1);
    func_0x00010bebde00(param_1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar9 = ppuVar1;
    func_0x00010bf85d80(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar2 & 1) == 0) {
      ppuVar7 = ppuVar1;
      func_0x00010bf85d80(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = (undefined **)0x0;
    }
    _objc_release(ppuVar9);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar9 = ppuVar1;
    func_0x00010c294420(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar2 & 1) == 0) {
      ppuVar8 = ppuVar1;
      func_0x00010c294420(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_release(ppuVar9);
    ppuVar9 = ppuVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar9;
    func_0x00010bfe2ee0();
    ppuVar4 = ppuVar9;
    func_0x00010c0b5940(ppuVar9);
    func_0x000100c4a928(ppuVar3,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar9);
    puVar2 = PTR_PTR_1126baa20;
    _objc_alloc_init(PTR_PTR_1126baa20);
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21f760(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21e620(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar6 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6880(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    ppuVar4 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(ppuVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    ppuVar9 = ppuVar4;
    func_0x00010bf21f60(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 105546260; end: 105546267; -[SCMentionStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_105546260(void)

{
  return 0;
}



/* Entry: 105546268; end: 10554630b; -[SCMentionStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105546268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10554630c; end: 105546387; -[SCMentionStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10554630c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_105545b7c();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b13b0;
    func_0x00010c0ca620(PTR_PTR_1126b13b0,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110daafd8,0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126baa28;
    _objc_alloc(PTR_PTR_1126baa28);
    func_0x00010c020180();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105546388; end: 1055463eb; -[SCMentionStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_105546388(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105545a8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126baa28;
    _objc_alloc(PTR_PTR_1126baa28);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055463ec; end: 10554641f; -[SCMentionStickerInjectorImpl _mentionStickerMetadataTypeFromSOJUMentionStickerStyleType:] */

undefined4 FUN_1055463ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0x2eef76) {
    uVar2 = 2;
  }
  uVar1 = 3;
  if (param_3 != 0x3a0799b6) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 105546420; end: 10554646f; -[SCMentionStickerInjectorImpl _sojuMentionStickerStyleTypeForMentionStickerMetadataType:] */

undefined8 FUN_105546420(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x6233516;
  if (param_3 < 2) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 2) {
    uVar2 = 0x2eef76;
  }
  uVar1 = 0x3a0799b6;
  if (param_3 != 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105546470; end: 105546567; -[SCMentionStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_105546470(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_105545a8c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
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



/* Entry: 105546568; end: 10554656f; -[SCMentionStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_105546568(void)

{
  return 1;
}



/* Entry: 105546570; end: 10554658b;  */

void FUN_105546570(void)

{
  _objc_alloc_init(PTR_PTR_1126baa30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10554658c; end: 10554659b; -[SCMentionStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554658c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272581c);
  return;
}



/* Entry: 10554659c; end: 10554661f; -[SCPollSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10554659c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8ec0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112725820;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105546620; end: 105546753; -[SCPollSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105546620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                      ,0,*(undefined8 *)(param_7 + _DAT_112725820),param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105546754; end: 10554675f; -[SCPollSticker stickerId] */

void FUN_105546754(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 105546760; end: 10554676b; -[SCPollSticker shortLoggingName] */

void FUN_105546760(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 10554676c; end: 105546773; -[SCPollSticker toCTPItem] */

undefined8 FUN_10554676c(void)

{
  return 0;
}



/* Entry: 105546774; end: 1055467a3; -[SCPollSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105546774(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725820);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055467a4; end: 1055467ab; -[SCPollSticker supportedFlows] */

undefined8 FUN_1055467a4(void)

{
  return 0;
}



/* Entry: 1055467ac; end: 1055467b3; -[SCPollSticker infoType] */

undefined8 FUN_1055467ac(void)

{
  return 0xe;
}



/* Entry: 1055467b4; end: 1055467c7; -[SCPollSticker intrinsicSize] */

void FUN_1055467b4(void)

{
  return;
}



/* Entry: 1055467c8; end: 105546887; -[SCPollSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055467c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    puVar2 = PTR_PTR_1126baa40;
    _objc_opt_class(PTR_PTR_1126baa40);
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
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112725820);
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



/* Entry: 105546888; end: 105546897; -[SCPollSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105546888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112725820),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105546898; end: 1055468ab; -[SCPollSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105546898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725820,0);
  return;
}



/* Entry: 1055468ac; end: 1055468af; -[SCPollStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1055468ac(void)

{
  return;
}



/* Entry: 1055468b0; end: 1055468b7; -[SCPollStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_1055468b0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1055468b8; end: 105546943;  */

bool FUN_1055468b8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0xe)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105546a48();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105546944; end: 10554697b; -[SCPollStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_105546944(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10554697c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554697c; end: 105546a0f;  */

void FUN_10554697c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010bfee020();
    if (lVar2 == 0x258fbf) {
      lVar1 = param_1;
      func_0x00010bfedfc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1031c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        _objc_retain(lVar2);
      }
      _objc_release(lVar2);
      goto LAB_1055469f4;
    }
  }
  lVar2 = 0;
LAB_1055469f4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105546a10; end: 105546a47; -[SCPollStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_105546a10(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105546a48(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105546a48; end: 105546b2f;  */

void FUN_105546a48(long param_1)

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
    func_0x00010c103540();
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



/* Entry: 105546b30; end: 105546b37; -[SCPollStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_105546b30(undefined8 param_1,undefined8 param_2,ulong param_3)

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
      bVar1 = uVar3 == 0xe;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105546b38; end: 105546bef;  */

bool FUN_105546b38(ulong param_1)

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
      bVar1 = uVar3 == 0xe;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105546bf0; end: 105546d1f; -[SCPollStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_105546bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1055468b8();
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


