/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10554dd2c; end: 10554ddb7; -[SCInfoStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10554dd2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8ef0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_stickerForCTPItem_presentationMo_1126729e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010554dd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10554ddb8; end: 10554de07; -[SCInfoStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10554ddb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8ef0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_stickerForCTItemInstance_present_1126729e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010554dd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10554de08; end: 10554de13; -[SCInfoStickerInjectorImpl expectedCTPEntityTypeNum] */

undefined ** FUN_10554de08(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c08e0;
}



/* Entry: 10554de14; end: 10554de1f; -[SCInfoStickerInjectorImpl expectedCTItemInstanceTypeNum] */

undefined ** FUN_10554de14(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c08f8;
}



/* Entry: 10554de20; end: 10554de2b; -[SCInfoStickerInjectorImpl expectedStickerTypeNum] */

undefined ** FUN_10554de20(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0910;
}



/* Entry: 10554de2c; end: 10554de37; -[SCInfoStickerInjectorImpl expectedSOJUGalleryStickerTypeNum] */

undefined ** FUN_10554de2c(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0928;
}



/* Entry: 10554de38; end: 10554de73; -[SCInfoStickerInjectorImpl typeForCTPItem:] */

undefined8 FUN_10554de38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be39180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfee000();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10554de74; end: 10554df9f; -[SCInfoStickerInjectorImpl typeForCTItemInstance:] */

long FUN_10554de74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96ee0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 7) {
    lVar5 = 0x13;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf96ee0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0x18) {
      lVar5 = 0x11;
    }
    else {
      uVar1 = param_3;
      func_0x00010c0840e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfede40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c27dd80();
      lVar5 = (long)(int)uVar4;
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10554dfa0; end: 10554dfa7; -[SCInfoStickerInjectorImpl typeForStickerState:] */

void FUN_10554dfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_infoStickerType_1125d91c8);
  return;
}



/* Entry: 10554dfa8; end: 10554dfaf; -[SCInfoStickerInjectorImpl typeForSOJUGallerySticker:] */

void FUN_10554dfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_infoStickerTypeEnum_1125d91d0);
  return;
}



/* Entry: 10554dfb0; end: 10554e02b; -[SCInfoStickerInjectorImpl _infoStickerEntityForCTPItem:] */

void FUN_10554dfb0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
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
  if (uVar1 == 0) {
    param_3 = 0;
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10554e02c; end: 10554e16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554e02c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126baba0;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c126880(puVar1,param_2,uVar3,uVar5);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar4 + _DAT_1127258ac);
  _objc_destroyWeak(lVar4 + _DAT_1127258c0);
  _objc_destroyWeak(lVar4 + _DAT_11272589c);
  _objc_destroyWeak(lVar4 + _DAT_11272588c);
  _objc_destroyWeak(lVar4 + _DAT_1127258a4);
  _objc_destroyWeak(lVar4 + _DAT_112725888);
  _objc_destroyWeak(lVar4 + _DAT_112725890);
  _objc_destroyWeak(lVar4 + _DAT_112725898);
  _objc_destroyWeak(lVar4 + _DAT_112725880);
  _objc_destroyWeak(lVar4 + _DAT_112725884);
  _objc_destroyWeak(lVar4 + _DAT_11272587c);
  _objc_destroyWeak(lVar4 + _DAT_112725874);
  _objc_destroyWeak(lVar4 + _DAT_1127258b8);
  _objc_destroyWeak(lVar4 + _DAT_112725894);
  _objc_destroyWeak(lVar4 + _DAT_1127258b0);
  _objc_destroyWeak(lVar4 + _DAT_1127258b4);
  _objc_destroyWeak(lVar4 + _DAT_1127258a0);
  _objc_destroyWeak(lVar4 + _DAT_1127258a8);
  _objc_destroyWeak(lVar4 + _DAT_1127258bc);
  _objc_destroyWeak(lVar4 + _DAT_112725878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar4 + _DAT_1127258c4);
  return;
}



/* Entry: 10554e170; end: 10554e28b; -[SCInfoStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554e170(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127258ac);
  _objc_destroyWeak(param_1 + _DAT_1127258c0);
  _objc_destroyWeak(param_1 + _DAT_11272589c);
  _objc_destroyWeak(param_1 + _DAT_11272588c);
  _objc_destroyWeak(param_1 + _DAT_1127258a4);
  _objc_destroyWeak(param_1 + _DAT_112725888);
  _objc_destroyWeak(param_1 + _DAT_112725890);
  _objc_destroyWeak(param_1 + _DAT_112725898);
  _objc_destroyWeak(param_1 + _DAT_112725880);
  _objc_destroyWeak(param_1 + _DAT_112725884);
  _objc_destroyWeak(param_1 + _DAT_11272587c);
  _objc_destroyWeak(param_1 + _DAT_112725874);
  _objc_destroyWeak(param_1 + _DAT_1127258b8);
  _objc_destroyWeak(param_1 + _DAT_112725894);
  _objc_destroyWeak(param_1 + _DAT_1127258b0);
  _objc_destroyWeak(param_1 + _DAT_1127258b4);
  _objc_destroyWeak(param_1 + _DAT_1127258a0);
  _objc_destroyWeak(param_1 + _DAT_1127258a8);
  _objc_destroyWeak(param_1 + _DAT_1127258bc);
  _objc_destroyWeak(param_1 + _DAT_112725878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127258c4);
  return;
}



/* Entry: 10554e28c; end: 10554e2bb; -[SCDiscoverDeeplinkStickerInjectorServices .cxx_destruct] */

void FUN_10554e28c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10554e2bc; end: 10554e2eb; -[SCGenericImageStickerInjectorServices .cxx_destruct] */

void FUN_10554e2bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10554e2ec; end: 10554e2ef; -[SCSnapchatStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_10554e2ec(void)

{
  return;
}



/* Entry: 10554e2f0; end: 10554e2f7; -[SCSnapchatStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10554e2f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c27dd80();
    if (lVar2 == 2) {
      bVar1 = true;
    }
    else {
      lVar2 = param_3;
      func_0x00010c27dd80(param_3);
      bVar1 = lVar2 == 4;
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554e2f8; end: 10554e357;  */

bool FUN_10554e2f8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c27dd80();
    if (lVar2 == 2) {
      bVar1 = true;
    }
    else {
      lVar2 = param_1;
      func_0x00010c27dd80(param_1);
      bVar1 = lVar2 == 4;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10554e358; end: 10554e35f; -[SCSnapchatStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

byte FUN_10554e358(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  
  _objc_retain();
  if (param_3 == 0) {
    bVar3 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c27dde0();
    if (lVar2 == 0x1f8b58) {
      bVar1 = true;
    }
    else {
      lVar2 = param_3;
      func_0x00010c27dde0(param_3);
      bVar1 = lVar2 == 0x7f6db8cc;
    }
    lVar2 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar3 = lVar2 != 0 & bVar1;
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10554e360; end: 10554e3f7;  */

byte FUN_10554e360(long param_1)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c27dde0();
    if (lVar2 == 0x1f8b58) {
      bVar1 = true;
    }
    else {
      lVar2 = param_1;
      func_0x00010c27dde0(param_1);
      bVar1 = lVar2 == 0x7f6db8cc;
    }
    lVar2 = param_1;
    func_0x00010c2540c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar3 = lVar2 != 0 & bVar1;
  }
  _objc_release(param_1);
  return bVar3;
}



/* Entry: 10554e3f8; end: 10554e42f; -[SCSnapchatStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10554e3f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10554e430(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554e430; end: 10554e4ff;  */

void FUN_10554e430(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96ee0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010c2434c0();
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



/* Entry: 10554e500; end: 10554e507; -[SCSnapchatStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_10554e500(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf96f00(), lVar1 != 1)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126babc8;
    _objc_opt_class(PTR_PTR_1126babc8);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10554e508; end: 10554e59b;  */

uint FUN_10554e508(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bf96f00(), lVar1 != 1)) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf96da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126babc8;
    _objc_opt_class(PTR_PTR_1126babc8);
    lVar3 = lVar1;
    _objc_opt_isKindOfClass(lVar1,puVar2);
    _objc_release(lVar1);
    uVar4 = (uint)lVar3 & (uint)(lVar1 != 0);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10554e59c; end: 10554e647; -[SCSnapchatStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10554e59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  FUN_10554e2f8();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000105d0b188(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c06c000(param_3);
    func_0x00010c1af2c0(uVar1,param_2,uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf21f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10554e648; end: 10554e743; -[SCSnapchatStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10554e648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  FUN_10554e360();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bf37800(PTR_PTR_1126ba7d8,param_2,param_3,2,0x3f997e22,param_1,param_6,param_5,0,
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



/* Entry: 10554e744; end: 10554e96b; -[SCSnapchatStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10554e744(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10554e360();
  if ((int)lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar4 = PTR_PTR_1126babb0;
    _objc_opt_new(PTR_PTR_1126babb0);
    puVar5 = PTR_PTR_1126b0ce8;
    _objc_alloc_init(PTR_PTR_1126b0ce8);
    puVar6 = PTR_PTR_1126babb8;
    _objc_opt_new(PTR_PTR_1126babb8);
    lVar1 = param_3;
    func_0x00010c0cdf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c0cdf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0cdf40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c7fe0(puVar6,param_2,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c0cdf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0cdf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8020(puVar6,param_2,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar1);
      func_0x00010c1c8000(puVar4,param_2,puVar6);
    }
    lVar1 = param_3;
    func_0x00010bf9e600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182a60(puVar5,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(puVar4,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c06c0a0(param_3);
    func_0x00010c1af280(puVar4,param_2,lVar1);
    func_0x00010c1c4360(puVar4,param_2,puVar5);
    func_0x00010c2056e0(puVar3,param_2,puVar4);
    func_0x00010c196600(puVar2,param_2,puVar3);
    func_0x00010c1b5d40(puVar8,param_2,puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10554e96c; end: 10554ebe3; -[SCSnapchatStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10554e96c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10554e430();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar1;
    func_0x00010c0d4f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x000105d0b870(param_3,param_4,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar1;
    func_0x00010bfd9220();
    if ((int)lVar10 != 0) {
      puVar3 = PTR_PTR_1126babc0;
      _objc_alloc_init();
      lVar10 = lVar1;
      func_0x00010c0cdf60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010c0cdf40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c1c7fe0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c0cdf60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0cdf80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c1c8020(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(lVar10);
      _objc_release(puVar3);
      func_0x00010c1c8000(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    func_0x00010c21ace0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c06c000(lVar1);
    func_0x00010c1af2c0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c0c45e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010bf4db80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199840(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar10);
    func_0x00010c1d7da0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bf21f60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 10554ebe4; end: 10554ebeb; -[SCSnapchatStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10554ebe4(void)

{
  return 0;
}



/* Entry: 10554ebec; end: 10554ec8f; -[SCSnapchatStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10554ebec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10554ec90; end: 10554ecef; -[SCSnapchatStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_10554ec90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10554e508();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ba7a8;
    _objc_alloc(PTR_PTR_1126ba7a8);
    func_0x00010bffa520();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10554ecf0; end: 10554ed53; -[SCSnapchatStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10554ecf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10554e430();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba7a8;
    _objc_alloc(PTR_PTR_1126ba7a8);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10554ed54; end: 10554edcb; -[SCSnapchatStickerInjectorImpl isAnimatedItemInstance:] */

undefined8 FUN_10554ed54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2434c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c000();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10554edcc; end: 10554edd3; -[SCSnapchatStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_10554edcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c27dd80();
    if (lVar2 == 2) {
      bVar1 = true;
    }
    else {
      lVar2 = param_3;
      func_0x00010c27dd80(param_3);
      bVar1 = lVar2 == 4;
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554edd4; end: 10554eddb; -[SCSnapchatStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_10554edd4(void)

{
  return 0;
}



/* Entry: 10554eddc; end: 10554ede3; -[SCSnapchatStickerInjectorImpl prepareItemInstanceForContextAction:] */

undefined8 FUN_10554eddc(void)

{
  return 0;
}



/* Entry: 10554ede4; end: 10554edff;  */

void FUN_10554ede4(void)

{
  _objc_alloc_init(PTR_PTR_1126babd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10554ee00; end: 10554ee2f; -[SCSnapchatStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554ee00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127258d8);
  return;
}



/* Entry: 10554ee30; end: 10554f087; -[SCCreativeToolsMetricsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554ee30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10554f088;
  puStack_78 = &UNK_1108969d0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127258dc);
  *(undefined **)(param_1 + _DAT_1127258dc) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ae720;
  puStack_b8 = puVar2;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10554f120;
  puStack_a0 = &UNK_110896a00;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127258e0);
  *(undefined **)(param_1 + _DAT_1127258e0) = puVar1;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127258e4);
  *(undefined **)(param_1 + _DAT_1127258e4) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126babf8;
  _objc_alloc(PTR_PTR_1126babf8);
  lVar3 = param_1;
  func_0x00010c08d740(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02cce0(puVar2);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10554f088; end: 10554f19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554f088(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126babe0;
    _objc_alloc(PTR_PTR_1126babe0);
    lVar1 = param_1 + _DAT_1127258f0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f0c0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10554f1a0; end: 10554f277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554f1a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126babf0;
    _objc_alloc(PTR_PTR_1126babf0);
    lVar1 = param_1 + _DAT_1127258f0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127258f4;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f4a0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10554f278; end: 10554f287; -[SCCreativeToolsMetricsServiceProvider lazyMusicBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10554f278(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127258dc);
}



/* Entry: 10554f288; end: 10554f297; -[SCCreativeToolsMetricsServiceProvider lazyStickerLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10554f288(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127258e0);
}



/* Entry: 10554f298; end: 10554f2a7; -[SCCreativeToolsMetricsServiceProvider lazyStickerBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10554f298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127258e4);
}



/* Entry: 10554f2a8; end: 10554f327; -[SCCreativeToolsMetricsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554f2a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127258e4,0);
  _objc_storeStrong(param_1 + _DAT_1127258e0,0);
  _objc_storeStrong(param_1 + _DAT_1127258dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127258f4);
  _objc_destroyWeak(param_1 + _DAT_1127258f0);
  _objc_destroyWeak(param_1 + _DAT_1127258ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127258e8);
  return;
}



/* Entry: 10554f328; end: 10554f39b; -[SCCreativeToolsMusicBlizzardLoggerImpl initWithUserTrackedLogger:] */

undefined1 * FUN_10554f328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8f08;
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



/* Entry: 10554f39c; end: 10554f48f; -[SCCreativeToolsMusicBlizzardLoggerImpl logSpotlightTrendingUseSoundWithTrackId:pickerSessionId:sectionId:] */

void FUN_10554f39c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac00;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126bac08;
  _objc_opt_new(PTR_PTR_1126bac08);
  func_0x00010c1b5f20();
  _objc_release(param_3);
  func_0x00010c1f9340(puVar2,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1b5fe0(puVar1,param_2,puVar2);
  func_0x00010c1db720(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1db7c0(puVar1,param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554f490; end: 10554f49b; -[SCCreativeToolsMusicBlizzardLoggerImpl .cxx_destruct] */

void FUN_10554f490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10554f49c; end: 10554f53f; -[SCCreativeToolsStickerBlizzardLoggerImpl initWithUserTrackedLogger:subscriptionInfoProvider:] */

undefined1 *
FUN_10554f49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8f10;
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



/* Entry: 10554f540; end: 10554f6ff; -[SCCreativeToolsStickerBlizzardLoggerImpl logChatSuggestionDrawerActionForSource:stickerType:isDrawerInDarkMode:cameoSuggestionId:cameoFriendTargetIsAvailable:cameoFriendTargetIsReady:hasCameos:] */

void FUN_10554f540(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  if (param_4 < 3) {
    if (param_4 == 1) {
      puVar2 = (undefined *)0x0;
      uVar3 = 5;
      goto LAB_10554f604;
    }
    if (param_4 == 2) {
      puVar2 = (undefined *)0x0;
      uVar3 = 4;
      goto LAB_10554f604;
    }
  }
  else {
    if (param_4 == 0xb) {
      if (param_6 == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR_PTR_1126bac10;
        _objc_alloc_init(PTR_PTR_1126bac10);
        func_0x00010c172940();
      }
      uVar3 = 3;
      goto LAB_10554f604;
    }
    if (param_4 == 3) {
      puVar2 = (undefined *)0x0;
      uVar3 = 2;
      goto LAB_10554f604;
    }
  }
  puVar2 = (undefined *)0x0;
  uVar3 = 0xffffffffffffffff;
LAB_10554f604:
  puVar1 = PTR_PTR_1126bac18;
  _objc_alloc_init(PTR_PTR_1126bac18);
  func_0x00010c191840();
  func_0x00010c191860(puVar1,param_2,4);
  func_0x00010c191940(puVar1,param_2,0xffffffffffffffff);
  func_0x00010c226c40(puVar1,param_2,1);
  func_0x00010c1918e0(puVar1,param_2,param_3);
  func_0x00010c1b0500(puVar1,param_2,param_5);
  func_0x00010c1e1d80(puVar1,param_2,uVar3);
  func_0x00010c172040(puVar1,param_2,puVar2);
  func_0x00010c172840(puVar1,param_2,param_7);
  func_0x00010c172860(puVar1,param_2,param_8);
  func_0x00010c1a5b00(puVar1,param_2,param_9);
  func_0x00010c1afba0(puVar1,param_2,0);
  func_0x00010c1afbc0(puVar1,param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10554f700; end: 10554f8a7; -[SCCreativeToolsStickerBlizzardLoggerImpl logStickerFavorited:stickerId:entityType:stickerPickerSessionId:favoritedLocation:superCategoryType:indexPath:isAnimated:] */

void FUN_10554f700(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126bac20;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c206fa0();
  func_0x00010c1db720(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1db7c0(puVar1,param_2,1);
  puVar2 = PTR_PTR_1126bac28;
  func_0x00010c113fc0(PTR_PTR_1126bac28,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1b5f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010554ee10(param_5);
  func_0x00010c1b6340(puVar1,param_2,param_5);
  func_0x00010c161c40(puVar1,param_2,param_3 ^ 1);
  lVar3 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar3);
  func_0x00010c1b6060(puVar1,param_2,param_10);
  if (param_8 != 0) {
    func_0x00010c1db7a0(puVar1,param_2,param_8);
  }
  if (param_9 != 0) {
    lVar3 = param_9;
    func_0x00010c1554e0(param_9);
    func_0x00010c1f95a0(puVar1,param_2,lVar3);
    lVar3 = param_9;
    func_0x00010c0840e0(param_9);
    func_0x00010c1b61a0(puVar1,param_2,lVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10554f8a8; end: 10554f97f; -[SCCreativeToolsStickerBlizzardLoggerImpl logCustomStickerCreatedFromSourcePageName:stickerPickerSessionId:] */

void FUN_10554f8a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bac20;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  lVar2 = param_3;
  func_0x00010bc9109c();
  _objc_release(param_3);
  if (lVar2 != -1) {
    func_0x00010c206fa0(puVar1,param_2,lVar2);
  }
  if (param_4 != 0) {
    func_0x00010c1db720(puVar1,param_2,param_4);
  }
  func_0x00010c1db7c0(puVar1,param_2,8);
  func_0x00010c161c40(puVar1,param_2,8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10554f980; end: 10554fac7; -[SCCreativeToolsStickerBlizzardLoggerImpl logStickerRemixTappedWithStickerId:entityType:stickerPickerSessionId:sourcePageType:isAnimated:] */

void FUN_10554f980(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bac20;
  _objc_alloc_init(PTR_PTR_1126bac20);
  if (param_6 != -1) {
    func_0x00010c206fa0(puVar1,param_2,param_6);
  }
  if (param_5 != 0) {
    func_0x00010c1db720(puVar1,param_2,param_5);
  }
  func_0x00010c1db7c0(puVar1,param_2,1);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126bac28;
    func_0x00010c113fc0(PTR_PTR_1126bac28,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010554ee10(param_4);
  func_0x00010c1b6340(puVar1,param_2,param_4);
  func_0x00010c161c40(puVar1,param_2,9);
  lVar3 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar3);
  func_0x00010c1b6060(puVar1,param_2,param_7);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10554fac8; end: 10554fb4f; -[SCCreativeToolsStickerBlizzardLoggerImpl logStickerCutoutEditStartForOpenAction:] */

void FUN_10554fac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bac30;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1939c0();
  func_0x00010c1d4c40(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554fb50; end: 10554fc17; -[SCCreativeToolsStickerBlizzardLoggerImpl logStickerSaveToFavoritesAutoPromptShownWithEntityType:isAnimated:] */

void FUN_10554fb50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac20;
  _objc_alloc_init(PTR_PTR_1126bac20);
  func_0x00010c206fa0();
  func_0x00010c1db7c0(puVar1,param_2,1);
  func_0x00010554ee10(param_3);
  func_0x00010c1b6340(puVar1,param_2,param_3);
  func_0x00010c161c40(puVar1,param_2,0);
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  func_0x00010c1b6060(puVar1,param_2,param_4);
  func_0x00010c1db7a0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea678);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554fc18; end: 10554fcdf; -[SCCreativeToolsStickerBlizzardLoggerImpl logStickerSaveToFavoritesAutoPromptUndoTappedWithEntityType:isAnimated:] */

void FUN_10554fc18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac20;
  _objc_alloc_init(PTR_PTR_1126bac20);
  func_0x00010c206fa0();
  func_0x00010c1db7c0(puVar1,param_2,1);
  func_0x00010554ee10(param_3);
  func_0x00010c1b6340(puVar1,param_2,param_3);
  func_0x00010c161c40(puVar1,param_2,1);
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  func_0x00010c1b6060(puVar1,param_2,param_4);
  func_0x00010c1db7a0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea698);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554fce0; end: 10554fda7; -[SCCreativeToolsStickerBlizzardLoggerImpl logStickerSaveToFavoritesOptInPromptShownWithEntityType:isAnimated:] */

void FUN_10554fce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac20;
  _objc_alloc_init(PTR_PTR_1126bac20);
  func_0x00010c206fa0();
  func_0x00010c1db7c0(puVar1,param_2,1);
  func_0x00010554ee10(param_3);
  func_0x00010c1b6340(puVar1,param_2,param_3);
  func_0x00010c161c40(puVar1,param_2,0);
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  func_0x00010c1b6060(puVar1,param_2,param_4);
  func_0x00010c1db7a0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea6b8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554fda8; end: 10554fe6f; -[SCCreativeToolsStickerBlizzardLoggerImpl logStickerSaveToFavoritesOptInPromptFavoriteTappedWithEntityType:isAnimated:] */

void FUN_10554fda8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac20;
  _objc_alloc_init(PTR_PTR_1126bac20);
  func_0x00010c206fa0();
  func_0x00010c1db7c0(puVar1,param_2,1);
  func_0x00010554ee10(param_3);
  func_0x00010c1b6340(puVar1,param_2,param_3);
  func_0x00010c161c40(puVar1,param_2,0);
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  func_0x00010c1b6060(puVar1,param_2,param_4);
  func_0x00010c1db7a0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea6d8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554fe70; end: 10554feeb; -[SCCreativeToolsStickerBlizzardLoggerImpl logCustomStickerPreviewAction:] */

void FUN_10554fe70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac38;
  _objc_alloc_init(PTR_PTR_1126bac38);
  func_0x00010c161620();
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554feec; end: 10554ff67; -[SCCreativeToolsStickerBlizzardLoggerImpl logCustomStickerSaveWithStickerType:] */

void FUN_10554feec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac40;
  _objc_alloc_init(PTR_PTR_1126bac40);
  func_0x00010c20baa0();
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554ff68; end: 10554ffcf; -[SCCreativeToolsStickerBlizzardLoggerImpl logCustomStickerCreateTapped] */

void FUN_10554ff68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac48;
  _objc_alloc_init(PTR_PTR_1126bac48);
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554ffd0; end: 10555005b; -[SCCreativeToolsStickerBlizzardLoggerImpl logCustomStickerMediaSelectionWithMediaType:sourceTab:] */

void FUN_10554ffd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bac50;
  _objc_alloc_init(PTR_PTR_1126bac50);
  func_0x00010c1c5440();
  func_0x00010c2071c0(puVar1,param_2,param_4);
  lVar2 = param_1;
  func_0x00010be33b20(param_1);
  func_0x00010c1a57c0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10555005c; end: 1055500f3; -[SCCreativeToolsStickerBlizzardLoggerImpl logCustomStickerGenerateResultWithResultMetadata:] */

void FUN_10555005c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bac58;
    _objc_alloc_init(PTR_PTR_1126bac58);
    func_0x00010c1ed3e0();
    lVar1 = param_1;
    func_0x00010be33b20(param_1);
    func_0x00010c1a57c0(puVar2,param_2,lVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055500f4; end: 105550153; -[SCCreativeToolsStickerBlizzardLoggerImpl _hasActiveSnapchatPlus] */

undefined8 FUN_1055500f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105550154; end: 105550183; -[SCCreativeToolsStickerBlizzardLoggerImpl .cxx_destruct] */

void FUN_105550154(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105550184; end: 10555028b; -[SCCreativeToolsStickerLoggerImpl initWithGrapheneServices:] */

undefined1 * FUN_105550184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c254060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5d6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10555028c; end: 10555044b; -[SCCreativeToolsStickerLoggerImpl reportChatCTPItemPickForEntityTypeName:stickerLocation:superCategoryTypeName:location:isLocalSearch:isBackendSearch:] */

void FUN_10555028c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,int param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126bac60;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf371a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dea718,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar4);
  func_0x000100c6f294(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dea738,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_6);
  func_0x00010ba40324(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dea758,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea798;
  if (param_7 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dea778;
  if (param_8 == 0) {
    ppuVar2 = ppuVar1;
  }
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dea7b8,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10555044c; end: 1055505fb; -[SCCreativeToolsStickerLoggerImpl reportLegacyChatStickerPickForType:stickerLocation:fromSearch:location:] */

void FUN_10555044c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126bac68;
  _objc_retain(param_3);
  func_0x00010c253b00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c25d700(PTR____kCFBooleanTrue_11034ab68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dea7d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea7f8;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
  }
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dea7b8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x000100c6f294(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dea738,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_6);
  func_0x00010ba40324(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dea758,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1055505fc; end: 105550703; -[SCCreativeToolsStickerLoggerImpl reportCTPItemChatLatencyForEntityType:latency:success:] */

void FUN_1055505fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bac60;
  _objc_retain(param_4);
  func_0x00010bf36a20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 0x10),param_3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105550704; end: 10555079b; -[SCCreativeToolsStickerLoggerImpl reportCTPItemSentInChatSize:entityType:] */

void FUN_105550704(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bac60;
  _objc_retain(param_4);
  func_0x00010bf37720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10555079c; end: 1055507df; -[SCCreativeToolsStickerLoggerImpl reportCTPCustomStickerMissingBoltObject] */

void FUN_10555079c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bac60;
  func_0x00010bf61ee0(PTR_PTR_1126bac60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055507e0; end: 1055508ff; -[SCCreativeToolsStickerLoggerImpl didFavoriteSticker:pageSource:stickerType:superCategoryType:] */

void FUN_1055507e0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bac68;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  if ((param_3 & 1) == 0) {
    func_0x00010c12c400(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef82a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dea858,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea878,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105550900; end: 105550bf7; -[SCCreativeToolsStickerLoggerImpl reportStickerImageMetricsWithStartTime:imageLoader:stickerType:thumbnail:error:] */

void FUN_105550900(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar1 = PTR_PTR_1126bac68;
  dVar7 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfe8100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dea898,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dea8b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110daeeb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_2 + 8);
  _CACurrentMediaTime();
  func_0x00010befc000(dVar7 - param_1,uVar6,param_3,puVar3);
  puVar1 = PTR_PTR_1126bac68;
  func_0x00010bfe80e0(PTR_PTR_1126bac68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dea898,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dea8b8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110daeeb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105550bf8; end: 105550d2f; -[SCCreativeToolsStickerLoggerImpl reportStickerImageInvalidBoltURLForStickerId:] */

void FUN_105550bf8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bac68;
  func_0x00010c069b40(PTR_PTR_1126bac68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08fa60();
  uVar3 = param_3;
  if (0x40 < uVar2) {
    func_0x00010c260c20(param_3,param_2,0x40);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea8d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (0x40 < uVar2) {
    _objc_release(uVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x40 < uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dea8f8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105550d30; end: 105550d5f; -[SCCreativeToolsStickerLoggerImpl .cxx_destruct] */

void FUN_105550d30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105550d60; end: 105550e77; -[CTKmpStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105550d60(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272590c);
  return;
}



/* Entry: 105550e78; end: 105550f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105550e78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112725938;
    _objc_loadWeakRetained(lVar1);
    puVar3 = PTR_PTR_1126bac78;
    _objc_alloc(PTR_PTR_1126bac78);
    lVar2 = lVar1;
    func_0x00010bfcdfa0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0184a0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105550f14; end: 105550fdf; -[CTPPersistenceServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105550f14(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112725914);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112725918);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + _DAT_11272591c);
      func_0x00010c06f880();
      if ((uVar1 & 1) == 0) {
        puStack_28 = PTR_PTR_1126e8f20;
        lStack_30 = param_1;
        _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105550fa8;
      }
    }
  }
  puVar2 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112725928;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010bddf920(param_1);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
LAB_105550fa8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105550fe0; end: 10555105b; -[CTPPersistenceServiceProvider _newFeedsPersistenceService] */

undefined * FUN_105550fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bac88;
  _objc_alloc(PTR_PTR_1126bac88);
  FUN_10555105c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10555105c; end: 10555107f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10555105c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725934);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105551080; end: 105551107; -[CTPPersistenceServiceProvider _newItemsPersistenceService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105551080(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bac90;
  _objc_alloc(PTR_PTR_1126bac90);
  lVar2 = param_1;
  FUN_10555105c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00dfe0(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_112725924));
  _objc_release(lVar3);
  _objc_release(lVar2);
  return puVar1;
}



/* Entry: 105551108; end: 105551183; -[CTPPersistenceServiceProvider _newSearchSectionPersistenceService] */

undefined * FUN_105551108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bac98;
  _objc_alloc(PTR_PTR_1126bac98);
  FUN_10555105c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 105551184; end: 1055511ff; -[CTPPersistenceServiceProvider _newExternalIdsPersistenceService] */

undefined * FUN_105551184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126baca0;
  _objc_alloc(PTR_PTR_1126baca0);
  FUN_10555105c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 105551200; end: 105551423; -[CTPPersistenceServiceProvider _cleanupPersistedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105551200(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1;
  _dispatch_group_create();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  lVar5 = (long)_DAT_11272592c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _dispatch_group_enter(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725918);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6b420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105551424;
  puStack_70 = &UNK_11084e010;
  _objc_retain(lVar1);
  lStack_68 = lVar1;
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _dispatch_group_enter(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725914);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6b320();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10555142c;
  puStack_98 = &UNK_11084e010;
  _objc_retain(lVar1);
  lStack_90 = lVar1;
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_b8,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105551434;
  puStack_c8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x000100bc0718(lVar1,uVar4,&puStack_e0);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(lStack_90);
  _objc_release(lStack_68);
  _objc_release(lVar1);
  return;
}



/* Entry: 105551424; end: 105551433;  */

void FUN_105551424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105551434; end: 10555145f;  */

void FUN_105551434(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105551460; end: 10555146f; -[CTPPersistenceServiceProvider _finishCleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105551460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112725928),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105551470; end: 105551523; -[CTPPersistenceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105551470(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725938);
  _objc_destroyWeak(param_1 + _DAT_112725934);
  _objc_destroyWeak(param_1 + _DAT_112725930);
  _objc_storeStrong(param_1 + _DAT_11272592c,0);
  _objc_storeStrong(param_1 + _DAT_112725928,0);
  _objc_storeStrong(param_1 + _DAT_112725924,0);
  _objc_storeStrong(param_1 + _DAT_112725920,0);
  _objc_storeStrong(param_1 + _DAT_11272591c,0);
  _objc_storeStrong(param_1 + _DAT_112725918,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725914,0);
  return;
}



/* Entry: 105551524; end: 105551597; -[CTPPersistenceLoggerImplementation initWithGrapheneRegistry:] */

undefined1 * FUN_105551524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8f28;
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



/* Entry: 105551598; end: 10555161b; -[CTPPersistenceLoggerImplementation logCTPItemsLoadLatency:] */

void FUN_105551598(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126baca8;
  func_0x00010c0841a0(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10555161c; end: 1055516c7; -[CTPPersistenceLoggerImplementation .cxx_destruct] */

void FUN_10555161c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055516c8; end: 10555171f; -[CTPFeedIdentifiers feedIdentifierString] */

void FUN_1055516c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c27dd80();
  func_0x00010bf4e080();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea938);
  return;
}



/* Entry: 105551720; end: 105551733; -[CTPFeedIdentifiers scFeedType] */

int FUN_105551720(long param_1)

{
  char cVar1;
  
  func_0x00010c27dd80();
  if (param_1 - 1U < 0x19) {
    cVar1 = (&UNK_10ddb1c1f)[param_1];
  }
  else {
    cVar1 = '\0';
  }
  return (int)cVar1;
}



/* Entry: 105551734; end: 105551747; -[CTPFeedIdentifiers scFeedContext] */

uint FUN_105551734(ulong param_1)

{
  uint uVar1;
  
  func_0x00010bf4e080();
  uVar1 = (uint)(0x507060403020100 >> ((param_1 & 7) << 3));
  if (7 < param_1) {
    uVar1 = 0;
  }
  return uVar1 & 7;
}



/* Entry: 105551748; end: 10555180f;  */

void FUN_105551748(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  if (param_2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bacb0;
    _objc_alloc(PTR_PTR_1126bacb0);
    lVar1 = param_2;
    func_0x00010bf4e080(param_2);
    func_0x00010c08ac80(param_2);
    lVar2 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004280(param_1,puVar3,param_3,lVar1,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105551810; end: 1055518d7;  */

void FUN_105551810(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  if (param_2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bacb8;
    _objc_alloc(PTR_PTR_1126bacb8);
    lVar1 = param_2;
    func_0x00010bf4e080(param_2);
    func_0x00010c08a800(param_2);
    lVar2 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0042a0(param_1,puVar3,param_3,lVar1,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055518d8; end: 1055519fb;  */

void FUN_1055518d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b0cb0;
    _objc_alloc(PTR_PTR_1126b0cb0);
    lVar2 = param_2;
    func_0x00010c27dd80(param_2);
    lVar3 = param_2;
    func_0x00010bf4e080(param_2);
    func_0x000105551650(lVar2);
    func_0x0001055516a0(lVar3);
    func_0x00010c0559c0(puVar1,param_3,lVar2,lVar3);
    puVar4 = PTR_PTR_1126bacc0;
    _objc_alloc(PTR_PTR_1126bacc0);
    func_0x00010c08ac80(param_2);
    lVar2 = param_2;
    func_0x00010c0f2460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021940(param_1,puVar4,param_3,puVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055519fc; end: 105551ac7;  */

void FUN_1055519fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bacc8;
  _objc_alloc(PTR_PTR_1126bacc8);
  uVar2 = param_1;
  func_0x00010bfa3da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c14c220(param_1);
  uVar4 = param_1;
  func_0x00010c14c200(param_1);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c012800(puVar1,param_2,uVar2,uVar3,uVar4,0);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105551ac8; end: 105551d4b;  */

void FUN_105551ac8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bf5cfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      puVar10 = PTR_PTR_1126bacd0;
      _objc_alloc(PTR_PTR_1126bacd0);
      uVar1 = param_1;
      func_0x00010bf5cfe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c11f6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      FUN_105551d4c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b0cb0;
      _objc_alloc(PTR_PTR_1126b0cb0);
      uVar7 = param_1;
      func_0x00010c27dd80(param_1);
      uVar8 = param_1;
      func_0x00010bf4e080(param_1);
      func_0x000105551650(uVar7);
      func_0x0001055516a0(uVar8);
      func_0x00010c0559c0(puVar6,param_2,uVar7,uVar8);
      uVar7 = param_1;
      func_0x00010c298be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010bf3cba0();
      uVar9 = param_1;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ffe0(puVar10,param_2,uVar1,uVar2,uVar3,uVar5,puVar6,uVar7,uVar8 & 0xffffffff,
                          uVar9,0);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_105551c8c;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_105551c8c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105551d4c; end: 105551e0f;  */

void FUN_105551d4c(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  puVar4 = PTR_PTR_1126bad00;
  _objc_alloc(PTR_PTR_1126bad00);
  uVar5 = param_1;
  func_0x00010c27dd80();
  uVar3 = (int)uVar5 - 1;
  iVar2 = 0;
  if (uVar3 < 3) {
    iVar2 = (uVar3 & 0xff) + 1;
  }
  uVar5 = param_1;
  func_0x00010c11f520(param_1);
  uVar6 = param_1;
  func_0x00010c08cc60();
  uVar7 = param_1;
  func_0x00010bf85520(param_1);
  uVar1 = 2;
  if ((int)uVar6 != 2) {
    uVar1 = (int)uVar6 == 1;
  }
  func_0x00010c055f80(puVar4,param_2,iVar2,uVar5 & 0xffffffff,uVar1,uVar7 & 0xffffffff);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


