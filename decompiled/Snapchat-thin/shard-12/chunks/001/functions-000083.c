/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d24430; end: 108d2443b; -[SCStickerPickerV2IconsController setDelegate:] */

void FUN_108d24430(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 108d2443c; end: 108d24453; -[SCStickerPickerV2IconsController dataSource] */

void FUN_108d2443c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d24454; end: 108d2445f; -[SCStickerPickerV2IconsController setDataSource:] */

void FUN_108d24454(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 108d24460; end: 108d244c3; -[SCStickerPickerV2IconsController .cxx_destruct] */

void FUN_108d24460(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d244c4; end: 108d246b7; -[SCStickerQuerySuggestionCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d244c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126fe620;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar5 = (long)_DAT_11277b370;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1f5ec0(0x402e000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar4);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b374) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d246b8; end: 108d246cb; -[SCStickerQuerySuggestionCell setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d246b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277b374) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdcebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyStateStyles__112551490,0);
  return;
}



/* Entry: 108d246cc; end: 108d24727; -[SCStickerQuerySuggestionCell updateBordColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d246cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b370);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d24728; end: 108d247ef; -[SCStickerQuerySuggestionCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d24728(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe620;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_1 = param_1 + -30.0;
  dVar3 = param_1 * 0.5;
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,dVar3,param_1,0x403e000000000000,*(undefined8 *)(param_2 + _DAT_11277b370));
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 108d247f0; end: 108d24853; -[SCStickerQuerySuggestionCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d247f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe620;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277b370));
  func_0x00010bdcebc0(param_1);
  return;
}



/* Entry: 108d24854; end: 108d248c3; -[SCStickerQuerySuggestionCell setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d24854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b378);
  *(undefined8 *)(param_1 + _DAT_11277b378) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277b370));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108d248c4; end: 108d248cf; +[SCStickerQuerySuggestionCell reuseIdentifier] */

undefined ** FUN_108d248c4(void)

{
  return &PTR____CFConstantStringClassReference_110ef2cb8;
}



/* Entry: 108d248d0; end: 108d248d3; -[SCStickerQuerySuggestionCell applyState:] */

void FUN_108d248d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyStateStyles__112551490);
  return;
}



/* Entry: 108d248d4; end: 108d24a8f; -[SCStickerQuerySuggestionCell _applyStateStyles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d248d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1;
  func_0x00010bdd5300();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar5 = (long)_DAT_11277b370;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010becb420(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bdd22a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + _DAT_11277b374);
  puVar2 = *(undefined **)(param_1 + lVar5);
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    func_0x00010c1fe7a0(0,0x3ff0000000000000,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fb47ae147ae147b,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar1);
    uVar1 = 0x4000000000000000;
  }
  else {
    uVar1 = 0;
    func_0x00010c1fe7a0(0,0,puVar2);
  }
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108d24a90; end: 108d24aef; -[SCStickerQuerySuggestionCell _borderColorForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d24a90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 1) {
    uVar1 = 0x82;
  }
  else {
    if (*(long *)(param_1 + _DAT_11277b374) == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108d24ad8;
    }
    uVar1 = 0x85;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_108d24ad8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d24af0; end: 108d24b53; -[SCStickerQuerySuggestionCell _textColorForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d24af0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    if (*(long *)(param_1 + _DAT_11277b374) == 0) {
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108d24b4c;
    }
  }
  else if (*(long *)(param_1 + _DAT_11277b374) != 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108d24b4c;
  }
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
LAB_108d24b4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d24b54; end: 108d24bbf; -[SCStickerQuerySuggestionCell _backgroundColorForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d24b54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 1) {
    if (*(long *)(param_1 + _DAT_11277b374) == 0) {
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108d24bb8;
    }
    uVar1 = 0x7b;
  }
  else {
    if (*(long *)(param_1 + _DAT_11277b374) == 0) {
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108d24bb8;
    }
    uVar1 = 0x85;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_108d24bb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d24bc0; end: 108d24bcf; -[SCStickerQuerySuggestionCell title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d24bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b378);
}



/* Entry: 108d24bd0; end: 108d24c0f; -[SCStickerQuerySuggestionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d24bd0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b378,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b370,0);
  return;
}



/* Entry: 108d24c10; end: 108d24d77; -[SCStickerQuerySuggestionController initWithStyle:] */

undefined1 * FUN_108d24c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fe628;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    func_0x00010c1f93e0(0x4028000000000000,0x4028000000000000,0,0x4028000000000000);
    func_0x00010c1c82c0(0x4018000000000000,puVar2);
    func_0x00010c1f7ac0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + 8));
    _objc_release(puVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + 8));
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    _objc_opt_class(PTR_PTR_1126dbcd0);
    puVar3 = PTR_PTR_1126dbcd0;
    func_0x00010c13fda0(PTR_PTR_1126dbcd0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(uVar4);
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d24d78; end: 108d24d9f; -[SCStickerQuerySuggestionController view] */

void FUN_108d24d78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d24da0; end: 108d24dc3; -[SCStickerQuerySuggestionController shouldShow] */

bool FUN_108d24da0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010bf529e0();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 108d24dc4; end: 108d24e57; -[SCStickerQuerySuggestionController needsLayout] */

uint FUN_108d24dc4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  if (((int)uVar2 == 0) || (uVar2 = param_1, func_0x00010c2331a0(), (uVar2 & 1) == 0)) {
    uVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    if ((uVar3 & 1) == 0) {
      func_0x00010c2331a0(param_1);
      uVar4 = (uint)param_1 ^ 1;
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar2);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 108d24e58; end: 108d24eab; -[SCStickerQuerySuggestionController setSuggestedQueries:] */

void FUN_108d24e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c128b60(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d24eac; end: 108d24eb7; +[SCStickerQuerySuggestionController height] */

undefined8 FUN_108d24eac(void)

{
  return 0x4045000000000000;
}



/* Entry: 108d24eb8; end: 108d24ebf; -[SCStickerQuerySuggestionController collectionView:numberOfItemsInSection:] */

void FUN_108d24eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108d24ec0; end: 108d24f8f; -[SCStickerQuerySuggestionController collectionView:cellForItemAtIndexPath:] */

void FUN_108d24ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dbcd0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c13fda0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e0c0(uVar4,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c20eaa0(uVar4,param_2,*(long *)(param_1 + 0x18) != 0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(uVar4,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108d24f90; end: 108d2504b; -[SCStickerQuerySuggestionController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_108d24f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined8 in_x4;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c142240(in_x4);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 8));
  dVar3 = 2.0;
  FUN_108d25134(0x4000000000000000,param_3,param_4,uVar2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  dVar4 = 50.0;
  if (50.0 <= dVar3 + 20.0) {
    dVar4 = dVar3 + 20.0;
  }
  auVar5._8_8_ = 0x403e000000000000;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 108d2504c; end: 108d250d7; -[SCStickerQuerySuggestionController collectionView:didSelectItemAtIndexPath:] */

void FUN_108d2504c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11da00(lVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d250d8; end: 108d250ef; -[SCStickerQuerySuggestionController delegate] */

void FUN_108d250d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d250f0; end: 108d250fb; -[SCStickerQuerySuggestionController setDelegate:] */

void FUN_108d250f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108d250fc; end: 108d25133; -[SCStickerQuerySuggestionController .cxx_destruct] */

void FUN_108d250fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d25134; end: 108d2527f;  */

undefined1 *
FUN_108d25134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010c08fa60();
  if (puVar1 != (undefined1 *)0x0) {
    uStack_78 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_68 = puVar2;
    uStack_60 = param_5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf20ba0(param_2,param_3,param_4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  puVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppuVar4 = &puStack_b0;
    pcStack_88 = FUN_108d25280;
    puStack_a8 = PTR_PTR_1126fe630;
    puStack_b0 = puVar1;
    uStack_a0 = param_5;
    puStack_98 = param_4;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
    if (ppuVar4 != (undefined1 **)0x0) {
      *(undefined8 *)((long)ppuVar4 + 0x10) = 0;
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
      *(undefined **)((long)ppuVar4 + 8) = puVar2;
      _objc_release(uVar5);
      puVar2 = PTR_PTR_1126ae790;
      _objc_alloc();
      func_0x00010c021520();
      uVar5 = *(undefined8 *)((long)ppuVar4 + 0x20);
      *(undefined **)((long)ppuVar4 + 0x20) = puVar2;
      _objc_release(uVar5);
    }
    return (undefined1 *)ppuVar4;
  }
  return puVar1;
}



/* Entry: 108d25280; end: 108d2531b; -[SCStickerTimeToDisplayMetrics init] */

undefined1 * FUN_108d25280(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d2531c; end: 108d253cb; -[SCStickerTimeToDisplayMetrics avgTimeToRender] */

undefined8 FUN_108d2531c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d253cc;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_80);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 108d253cc; end: 108d25413;  */

void FUN_108d253cc(long param_1)

{
  ulong uVar1;
  double dVar2;
  
  dVar2 = *(double *)(*(long *)(param_1 + 0x20) + 0x10);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf529e0();
  *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = dVar2 / (double)uVar1;
  return;
}



/* Entry: 108d25414; end: 108d254b3; -[SCStickerTimeToDisplayMetrics trackSticker:timeToDisplay:] */

void FUN_108d25414(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108d254b4;
  puStack_60 = &UNK_110844b80;
  lStack_58 = param_2;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 108d254b4; end: 108d2553f;  */

void FUN_108d254b4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = *(undefined8 *)(param_1 + 0x30);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bf4b900(uVar2,param_2,lVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,lVar1);
      *(double *)(*(long *)(param_1 + 0x20) + 0x10) =
           *(double *)(param_1 + 0x30) + *(double *)(*(long *)(param_1 + 0x20) + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d25540; end: 108d25547; -[SCStickerTimeToDisplayMetrics stickerSourceTab] */

undefined8 FUN_108d25540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108d25548; end: 108d2554f; -[SCStickerTimeToDisplayMetrics setStickerSourceTab:] */

void FUN_108d25548(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108d25550; end: 108d25557; -[SCStickerTimeToDisplayMetrics stickerPickerTabSection] */

undefined8 FUN_108d25550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108d25558; end: 108d2555f; -[SCStickerTimeToDisplayMetrics setStickerPickerTabSection:] */

void FUN_108d25558(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108d25560; end: 108d25567; -[SCStickerTimeToDisplayMetrics ttrFirstAsset] */

undefined8 FUN_108d25560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108d25568; end: 108d2556f; -[SCStickerTimeToDisplayMetrics setTtrFirstAsset:] */

void FUN_108d25568(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 108d25570; end: 108d255ab; -[SCStickerTimeToDisplayMetrics .cxx_destruct] */

void FUN_108d25570(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d255ac; end: 108d2569b;  */

void FUN_108d255ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bf20c00();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_6,puVar3);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(param_5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d2569c; end: 108d25837; -[SCCustomStickerController initWithImageSizeLimit:shouldFadeInAndOut:playbackAssetRepository:playerProvider:simpleContentFetcher:circumstanceEngine:previewTooltipsProvider:] */

undefined1 *
FUN_108d2569c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fe638;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + 0xa8));
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108d25838; end: 108d25953; -[SCCustomStickerController close] */

void FUN_108d25838(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + 0x98) = 0;
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0xa8),param_2,0);
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108d25954;
    puStack_30 = &UNK_11087bb00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x108d25964;
    puStack_58 = &UNK_110896ce8;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,3,
                        &puStack_48,&puStack_70);
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0xa8));
  }
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dfa0();
  _objc_release(param_1);
  return;
}



/* Entry: 108d25954; end: 108d2597b;  */

void FUN_108d25954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d2597c; end: 108d25b13; -[SCCustomStickerController openCustomStickerScribbleView] */

void FUN_108d2597c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x99) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x98) = 1;
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126dbcd8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar1;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xa8),param_2,param_1);
    func_0x00010c1d4c20(*(undefined8 *)(param_1 + 0xa8),param_2,0);
    lVar2 = *(long *)(param_1 + 0xa8);
  }
  func_0x00010c1677c0(0,lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0xa8),param_2,1);
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108d25b14;
    puStack_30 = &UNK_11087bb00;
    lStack_28 = param_1;
    func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,3,
                        &puStack_48,0);
  }
  else {
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 0xa8));
  }
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9d80();
  _objc_release(lVar2);
  func_0x00010beacec0(param_1);
  func_0x00010beb8920(param_1);
  return;
}



/* Entry: 108d25b14; end: 108d25b23;  */

void FUN_108d25b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d25b24; end: 108d25ec3; -[SCCustomStickerController _setupHeader] */

void FUN_108d25b24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12c960();
  }
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar12);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c213040(uVar12,param_2,1);
  func_0x000108e86808();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20),param_2,uVar12);
  _objc_release(uVar12);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x20),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c262ca0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar12);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c274200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0x4034000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c2a5060(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0xc060e00000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar3);
  uVar11 = uVar2;
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar2);
  __Unwind_Resume(uVar11);
  uVar12 = uVar11;
  func_0x000108e86820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebb800(uVar11,param_2,uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 108d25ec4; end: 108d25f13; -[SCCustomStickerController showOnboardingTooltip] */

void FUN_108d25ec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000108e86820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebb800(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d25f14; end: 108d25f63; -[SCCustomStickerController showMaxLimitHitTooltip] */

void FUN_108d25f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001092018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebb800(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d25f64; end: 108d25fb7; -[SCCustomStickerController _showTooltip:] */

void FUN_108d25f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x00010beb8900(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d25fb8; end: 108d2635f; -[SCCustomStickerController _showCutAlertLabel:] */

void FUN_108d25fb8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c12c960();
  }
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar11);
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x50),param_2,lStack_88);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + 0x50),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + 0x50),param_2,1);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + 0x50),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x50),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x50),param_2,puVar1);
  _objc_release(puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c262ca0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + 0x50),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_90 = uVar11;
  func_0x00010bf34860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uStack_90;
  func_0x00010bf493a0(uStack_90,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4024000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a5060(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  lVar10 = lStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(lStack_88);
  __Unwind_Resume();
  pcStack_98 = FUN_108d26360;
  if (*(long *)(lVar10 + 0x50) != 0) {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_108d263f0;
    puStack_b0 = &UNK_11087bb00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_108d26400;
    puStack_d8 = &UNK_110896ce8;
    lStack_d0 = lVar10;
    lStack_a8 = lVar10;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_c8,
                        &puStack_f0);
  }
  return;
}



/* Entry: 108d26360; end: 108d263ef; -[SCCustomStickerController _fadeOutCutAlertLabel] */

void FUN_108d26360(long param_1,undefined8 param_2)

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
  
  if (*(long *)(param_1 + 0x50) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108d263f0;
    puStack_20 = &UNK_11087bb00;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108d26400;
    puStack_48 = &UNK_110896ce8;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                        &puStack_60);
  }
  return;
}



/* Entry: 108d263f0; end: 108d263ff;  */

void FUN_108d263f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d26400; end: 108d26433;  */

void FUN_108d26400(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d26434; end: 108d26467; -[SCCustomStickerController showOnboardingVideo] */

void FUN_108d26434(undefined8 param_1)

{
  func_0x00010beaacc0();
  func_0x00010beaef20(param_1);
  func_0x00010beb1000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be4ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadVideo_112571528);
  return;
}



/* Entry: 108d26468; end: 108d26817; -[SCCustomStickerController _setupBackgroundView] */

void FUN_108d26468(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 **ppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x40));
  uVar17 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c262ca0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uStack_a8 = uVar2;
  uStack_88 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_90 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uStack_90;
  uStack_b0 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(uStack_b0);
  _objc_release(uStack_90);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + 0x40));
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_b8 = FUN_108d26818;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126bf660;
  uStack_110 = uVar2;
  uStack_108 = uVar4;
  uStack_100 = uVar3;
  uStack_f8 = uVar17;
  puStack_f0 = puVar7;
  puStack_e8 = puVar8;
  uStack_e0 = uVar15;
  uStack_d8 = uVar6;
  uStack_d0 = uVar5;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar17 = *(undefined8 *)(puVar9 + 0x30);
  *(undefined **)(puVar9 + 0x30) = puVar10;
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(puVar9 + 0x30);
  func_0x00010c100c60(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2218a0();
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(puVar9 + 0x30));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar9 + 0x30));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar17 = *(undefined8 *)(puVar9 + 0x30);
  func_0x00010c100c60(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)(puVar9 + 0x30);
  func_0x00010c100c60(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4020000000000000);
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(puVar9 + 0x30);
  func_0x00010c08c0e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(puVar9 + 0x30);
  func_0x00010c08c0e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar17);
  func_0x00010befbb60(*(undefined8 *)(puVar9 + 0x40));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(puVar9 + 0x30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar9 + 0x40);
  lStack_148 = lVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_150 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar9 + 0x30);
  lStack_158 = lVar11;
  lStack_138 = lVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar9 + 0x40);
  uStack_140 = uVar17;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uStack_140;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar9 + 0x30);
  uStack_130 = uVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar9 + 0x40);
  func_0x00010c2a5060(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493c0(0xc05b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar9 + 0x30);
  uStack_128 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar9 + 0x30);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010bf493e0(0x3ff7ae147ae147ae);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uStack_140);
  _objc_release(lStack_158);
  _objc_release(uStack_150);
  lVar11 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uStack_140);
  _objc_release(lStack_158);
  _objc_release(uStack_150);
  _objc_release(lStack_148);
  lVar13 = lVar11;
  __Unwind_Resume();
  pcStack_168 = FUN_108d26cbc;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  uStack_1b0 = uVar4;
  uStack_1a8 = uVar17;
  uStack_1a0 = uVar12;
  uStack_198 = uVar3;
  puStack_190 = puVar7;
  uStack_188 = uVar15;
  uStack_180 = uVar6;
  lStack_178 = lVar11;
  ppuStack_170 = &puStack_c0;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar13 + 0x38);
  *(undefined **)(lVar13 + 0x38) = puVar1;
  _objc_release(uVar17);
  func_0x00010c20eaa0(*(undefined8 *)(lVar13 + 0x38));
  uVar17 = *(undefined8 *)(lVar13 + 0x38);
  func_0x00010c219b60(uVar17);
  uVar2 = *(undefined8 *)(lVar13 + 0x38);
  func_0x000109201a78();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2);
  _objc_release(uVar17);
  func_0x00010befbd60(*(undefined8 *)(lVar13 + 0x38));
  func_0x00010befbb60(*(undefined8 *)(lVar13 + 0x40));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = *(long *)(lVar13 + 0x38);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar13 + 0x40);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar13 + 0x38);
  lStack_1c8 = lVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar13 + 0x30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493c0(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1c0 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(uVar2);
  lVar13 = lVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(uVar2);
  _objc_release(lVar14);
  lVar16 = lVar13;
  __Unwind_Resume();
  pcStack_1d8 = FUN_108d26f3c;
  uStack_210 = uVar3;
  lStack_208 = lVar13;
  uStack_200 = uVar15;
  lStack_1f8 = lVar11;
  uStack_1f0 = uVar2;
  lStack_1e8 = lVar14;
  ppuStack_1e0 = &ppuStack_170;
  _objc_initWeak(auStack_218,lVar16);
  uVar17 = *(undefined8 *)(lVar16 + 0x78);
  func_0x00010c25d780(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  uVar2 = *(undefined8 *)(lVar16 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_220,auStack_218);
  func_0x00010c13e600(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_220);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(uVar17);
  _objc_destroyWeak(auStack_218);
  return;
}



/* Entry: 108d26818; end: 108d26cbb; -[SCCustomStickerController _setupPlayerView] */

void FUN_108d26818(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bf660;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c100c60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2218a0();
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c100c60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar13);
  _objc_release(puVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c100c60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4020000000000000);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar13);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  lStack_98 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lStack_a8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uStack_90;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2a5060(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493c0(0xc05b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bf493e0(0x3ff7ae147ae147ae);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(lStack_a8);
  _objc_release(uStack_a0);
  lVar2 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(lStack_a8);
  _objc_release(uStack_a0);
  _objc_release(lStack_98);
  lVar9 = lVar2;
  __Unwind_Resume();
  pcStack_b8 = FUN_108d26cbc;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  uStack_100 = uVar4;
  uStack_f8 = uVar13;
  uStack_f0 = uVar7;
  uStack_e8 = uVar3;
  puStack_e0 = puVar8;
  uStack_d8 = uVar11;
  uStack_d0 = uVar6;
  lStack_c8 = lVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar9 + 0x38);
  *(undefined **)(lVar9 + 0x38) = puVar1;
  _objc_release(uVar13);
  func_0x00010c20eaa0(*(undefined8 *)(lVar9 + 0x38));
  uVar13 = *(undefined8 *)(lVar9 + 0x38);
  func_0x00010c219b60(uVar13);
  uVar14 = *(undefined8 *)(lVar9 + 0x38);
  func_0x000109201a78();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar14);
  _objc_release(uVar13);
  func_0x00010befbd60(*(undefined8 *)(lVar9 + 0x38));
  func_0x00010befbb60(*(undefined8 *)(lVar9 + 0x40));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(lVar9 + 0x38);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar9 + 0x40);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar9 + 0x38);
  lStack_118 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar9 + 0x30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release(uVar14);
  lVar9 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release(uVar14);
  _objc_release(lVar10);
  lVar12 = lVar9;
  __Unwind_Resume();
  pcStack_128 = FUN_108d26f3c;
  uStack_160 = uVar3;
  lStack_158 = lVar9;
  uStack_150 = uVar11;
  lStack_148 = lVar2;
  uStack_140 = uVar14;
  lStack_138 = lVar10;
  ppuStack_130 = &puStack_c0;
  _objc_initWeak(auStack_168,lVar12);
  uVar13 = *(undefined8 *)(lVar12 + 0x78);
  func_0x00010c25d780(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  uVar14 = *(undefined8 *)(lVar12 + 0x68);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  func_0x00010c13e600(uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_168);
  return;
}



/* Entry: 108d26cbc; end: 108d26f3b; -[SCCustomStickerController _setupVideoButton] */

void FUN_108d26cbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar9);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + 0x38));
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c219b60(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x000109201a78();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar10);
  _objc_release(uVar9);
  func_0x00010befbd60(*(undefined8 *)(param_1 + 0x38));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lStack_68 = lVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493c0(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar10);
  lVar7 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar10);
  _objc_release(lVar2);
  lVar8 = lVar7;
  __Unwind_Resume();
  pcStack_78 = FUN_108d26f3c;
  uStack_b0 = uVar5;
  lStack_a8 = lVar7;
  uStack_a0 = uVar4;
  lStack_98 = lVar3;
  uStack_90 = uVar10;
  lStack_88 = lVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_b8,lVar8);
  uVar9 = *(undefined8 *)(lVar8 + 0x78);
  func_0x00010c25d780(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  uVar10 = *(undefined8 *)(lVar8 + 0x68);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x00010c13e600(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_b8);
  return;
}



/* Entry: 108d26f3c; end: 108d270e7; -[SCCustomStickerController _loadVideo] */

void FUN_108d26f3c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c25d780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c13e600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108d270e8; end: 108d2722f;  */

void FUN_108d270e8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf549c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be33020();
      _objc_release(param_1);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d27230; end: 108d273d3; -[SCCustomStickerController _handleVideoAsset:] */

void FUN_108d27230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x28) == 0)) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    func_0x00010bff41a0();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11dfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
    func_0x00010c100ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar4;
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108d273d4;
    puStack_60 = &UNK_110896d48;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar3);
    uStack_58 = uVar3;
    func_0x000107c312d0("APPSTORE",&puStack_78);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108d273d4; end: 108d2745b;  */

void FUN_108d273d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1dda40(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c100720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d2745c; end: 108d2751f; -[SCCustomStickerController _dismissOnboarding] */

void FUN_108d2745c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108d27520;
  puStack_38 = &UNK_110876b10;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108d27520; end: 108d27597;  */

void FUN_108d27520(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78440();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d27598; end: 108d275ff; -[SCCustomStickerController _setSnapCutModelIfNecessaryWithFilePath:] */

void FUN_108d27598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x58) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = param_3;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d27600; end: 108d2781f; -[SCCustomStickerController _loadSnapCutModelCompletion:] */

void FUN_108d27600(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110db9e38;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003a80();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_58;
  _objc_copyWeak(auStack_60);
  _objc_retain(param_3);
  func_0x00010c13e600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  lVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar9);
  puVar6 = puVar9;
  func_0x00010bfcaaa0();
  if (puVar6 == (undefined1 *)0x0) {
    puVar7 = puVar9;
    func_0x00010bfc5880(puVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5 + 0x28;
    _objc_loadWeakRetained(lVar8);
    func_0x00010bea7a00();
    _objc_release(lVar8);
    _objc_release(puVar7);
  }
  (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))(*(long *)(lVar5 + 0x20),puVar6 == (undefined1 *)0x0)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 108d27820; end: 108d278e7;  */

void FUN_108d27820(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010bfc5880(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bea7a00();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d278e8; end: 108d27947; -[SCCustomStickerController scribbleBegan] */

void FUN_108d278e8(long param_1)

{
  *(undefined1 *)(param_1 + 0x99) = 1;
  func_0x00010be0e000();
  func_0x00010be0e080(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d27948; end: 108d27a5f; -[SCCustomStickerController scribbleEnded:] */

void FUN_108d27948(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x99) = 0;
  if ((param_3 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar1 = param_1;
    func_0x00010c151bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108d27a60;
    puStack_48 = &UNK_110896de8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010be4e740(param_1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151b80();
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 108d27a60; end: 108d27a73;  */

void FUN_108d27a60(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be97ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__runGrabCut__112583950,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 108d27a74; end: 108d27bc7; -[SCCustomStickerController _runGrabCut:] */

void FUN_108d27a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar2 = &puStack_90;
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108d27bc8;
  puStack_78 = &UNK_110ac2920;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retainBlock(&puStack_90);
  puVar1 = PTR_PTR_1126dbce8;
  func_0x00010c151bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010bf9ec80(puVar1);
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 108d27bc8; end: 108d27c83;  */

void FUN_108d27bc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d27c84;
  puStack_68 = &UNK_110982a48;
  _objc_copyWeak(auStack_58,param_3 + 0x20);
  uStack_60 = param_4;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _objc_retain(param_4);
  func_0x000107c312d0("APPSTORE",&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108d27c84; end: 108d27df7;  */

void FUN_108d27c84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [48];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar4 = lVar1 + 0xa0;
      _objc_loadWeakRetained(lVar4);
      uVar5 = *(undefined8 *)(lVar1 + 0x18);
      FUN_1091748f4(auStack_80,uVar5);
      func_0x00010bf9fd60(lVar4,param_2,uVar5,auStack_80);
    }
    else {
      lVar4 = lVar1;
      func_0x00010c151bc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf51d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51240(uVar5,uVar6,lVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar4);
      lVar4 = lVar1 + 0xa0;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bfaf740(uVar5,uVar6);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108d27df8; end: 108d27e27; -[SCCustomStickerController setCapturedImage:] */

void FUN_108d27df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d27e28; end: 108d27fc3; -[SCCustomStickerController _showCutoutsIfPossible] */

void FUN_108d27e28(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  iVar2 = 2;
  func_0x000107c31924(2,0x11,0,0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      lVar3 = param_1 + 0xa0;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010bfb5400();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = puVar1;
      uStack_60 = 0xc0000000;
      pcStack_58 = FUN_108d27fc4;
      puStack_50 = &UNK_1108ed870;
      lVar5 = lVar4;
      uStack_48 = uVar7;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      *(long *)(param_1 + 0x90) = lVar5;
      _objc_release(uVar7);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_initWeak(auStack_70,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    puVar6 = auStack_78;
    _objc_copyWeak(puVar6,auStack_70);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  return;
}



/* Entry: 108d27fc4; end: 108d28027;  */

void FUN_108d27fc4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_108d28028;
  puStack_20 = &UNK_110958128;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8620(param_2,param_2,&puStack_38,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d28028; end: 108d280d3;  */

void FUN_108d28028(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c23d0a0(param_3);
  uVar1 = param_3;
  if (((double)*(long *)(param_2 + 0x20) < param_1) ||
     (func_0x00010c23d0a0(param_3), (double)*(long *)(param_2 + 0x20) < param_1)) {
    func_0x00010c14e300(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d280d4; end: 108d28157;  */

void FUN_108d280d4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bebabc0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d28158; end: 108d2883f; -[SCCustomStickerController _showSegmentedImages:] */

void FUN_108d28158(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *unaff_x22;
  long lVar20;
  undefined8 *puVar21;
  double dVar22;
  double dVar23;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [128];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = param_4;
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010bf529e0();
  if (puVar2 != (undefined8 *)0x0) {
    lStack_230 = *(long *)(param_2 + 0xa8);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((lStack_230 != 0) &&
       ((lVar3 = *(long *)(param_2 + 0x50), lVar3 != 0 ||
        (lVar3 = *(long *)(param_2 + 0x20), lVar3 != 0)))) {
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_2 + 0x80);
      if (lVar4 == 0) {
        puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        uVar18 = *(undefined8 *)(param_2 + 0x80);
        *(undefined **)(param_2 + 0x80) = puVar5;
        _objc_release(uVar18);
        func_0x00010c16e060(*(undefined8 *)(param_2 + 0x80),param_3,0);
        func_0x00010c166c00(*(undefined8 *)(param_2 + 0x80),param_3,3);
        func_0x00010c190b80(*(undefined8 *)(param_2 + 0x80),param_3,1);
        func_0x00010c207380(0x402751eb851eb852,*(undefined8 *)(param_2 + 0x80));
        func_0x00010c219b60(*(undefined8 *)(param_2 + 0x80),param_3,0);
        func_0x00010c160fc0(*(undefined8 *)(param_2 + 0x80),param_3,
                            &PTR____CFConstantStringClassReference_110f036d8);
        lVar4 = *(long *)(param_2 + 0x80);
      }
      dVar22 = 1.0;
      func_0x00010c1677c0(lVar4);
      func_0x00010befbb60(lStack_230,param_3,*(undefined8 *)(param_2 + 0x80));
      puVar21 = param_4;
      func_0x00010bf529e0();
      unaff_x22 = param_4;
      if (puVar21 < (undefined8 *)0x4) {
        _objc_retain(param_4);
      }
      else {
        func_0x00010c25e980(param_4,param_3,0,3);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar21 = unaff_x22;
      func_0x00010bf529e0();
      puVar2 = unaff_x22;
      func_0x00010bf529e0();
      func_0x00010bf20c00(lStack_230);
      _CGRectGetWidth();
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = *(undefined8 *)(param_2 + 0x80);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lStack_230;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x80);
      uStack_a0 = uVar18;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf493c0(0x4027570a3d70a3d7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x80);
      uStack_98 = uVar8;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0x405063d70a3d70a4;
      dVar23 = (double)(undefined *)((long)puVar2 + -1) * 11.66 + (double)puVar21 * 65.56;
      if (dVar22 + -23.32 <= dVar23) {
        dVar23 = dVar22 + -23.32;
      }
      uVar10 = uVar9;
      func_0x00010bf49420(dVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + 0x80);
      uStack_90 = uVar10;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf49420(0x405063d70a3d70a4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_a0,4);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar2;
      func_0x00010beef8c0(puVar5,param_3,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar18);
      _objc_release(lVar4);
      _objc_release(uVar6);
      lVar13 = *(long *)(param_2 + 0x80);
      func_0x00010bf09ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar13;
      func_0x00010bf529e0();
      _objc_release(lVar13);
      if (lVar4 == 0) {
        param_1 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        plStack_1d0 = (long *)0x0;
        _objc_retain(unaff_x22);
        puVar21 = &uStack_1e0;
        puVar2 = unaff_x22;
        func_0x00010bf52a60(unaff_x22,param_3,puVar21,auStack_120,0x10);
        puVar5 = PTR__CGRectZero_110347608;
        if (puVar2 != (undefined8 *)0x0) {
          lVar4 = *plStack_1d0;
          do {
            puVar1 = PTR_s__segmentedImageTap__11253d1d8;
            puVar21 = (undefined8 *)0x0;
            do {
              if (*plStack_1d0 != lVar4) {
                _objc_enumerationMutation(unaff_x22);
              }
              puVar14 = PTR_PTR_1126dbcf0;
              _objc_alloc(PTR_PTR_1126dbcf0);
              param_1 = *(undefined8 *)puVar5;
              func_0x00010c013de0(param_1,*(undefined8 *)(puVar5 + 8),*(undefined8 *)(puVar5 + 0x10)
                                  ,*(undefined8 *)(puVar5 + 0x18));
              func_0x00010c1a9f00();
              func_0x00010befbd60(puVar14,param_3,param_2,puVar1,0x40);
              func_0x00010bef6d60(*(undefined8 *)(param_2 + 0x80),param_3,puVar14);
              _objc_release(puVar14);
              puVar21 = (undefined8 *)((long)puVar21 + 1);
            } while (puVar2 != puVar21);
            puVar21 = &uStack_1e0;
            puVar2 = unaff_x22;
            func_0x00010bf52a60(unaff_x22,param_3,puVar21,auStack_120,0x10);
          } while (puVar2 != (undefined8 *)0x0);
        }
        _objc_release(unaff_x22);
      }
      func_0x00010c1cbe20(*(undefined8 *)(param_2 + 0x80));
      func_0x00010c08cdc0(*(undefined8 *)(param_2 + 0x80));
      uVar15 = *(ulong *)(param_2 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c22f5a0();
      _objc_release(uVar15);
      if ((uVar16 & 1) != 0) {
        param_1 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        lStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        plStack_210 = (long *)0x0;
        lVar13 = *(long *)(param_2 + 0x80);
        func_0x00010bf09ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = &uStack_220;
        lVar4 = lVar13;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar19 = *plStack_210;
          do {
            lVar20 = 0;
            do {
              if (*plStack_210 != lVar19) {
                _objc_enumerationMutation(lVar13);
              }
              func_0x00010c22c7c0(*(undefined8 *)(lStack_218 + lVar20 * 8));
              lVar20 = lVar20 + 1;
            } while (lVar4 != lVar20);
            puVar21 = &uStack_220;
            lVar4 = lVar13;
            func_0x00010bf52a60(lVar13,param_3,puVar21,auStack_1a0,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar13);
        uVar18 = *(undefined8 *)(param_2 + 0x88);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c190380();
        _objc_release(uVar18);
      }
      _objc_release(unaff_x22);
      _objc_release(lVar3);
      lStack_238 = lVar3;
    }
    _objc_release(lStack_230);
  }
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  _objc_release(unaff_x22);
  _objc_release(lStack_238);
  _objc_release(lStack_230);
  _objc_release(param_4);
  __Unwind_Resume();
  func_0x00010bfe6ac0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar21;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  func_0x00010bf20c00(puVar2[0x15]);
  _CGRectGetMidX();
  uVar18 = param_1;
  func_0x00010bf20c00(puVar2[0x15]);
  _CGRectGetMidY();
  puVar2 = puVar2 + 0x14;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bfaf740(param_1,uVar18);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return;
}



/* Entry: 108d28840; end: 108d28917; -[SCCustomStickerController _segmentedImageTap:] */

void FUN_108d28840(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfe6ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0xa8));
  _CGRectGetMidX();
  uVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0xa8));
  _CGRectGetMidY();
  param_2 = param_2 + 0xa0;
  _objc_loadWeakRetained(param_2);
  func_0x00010bfaf740(param_1,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d28918; end: 108d289ef; -[SCCustomStickerController _fadeOutSegmentedImagesStackView] */

void FUN_108d28918(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108d289f0;
    puStack_40 = &UNK_11087bb00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x108d28a00;
    puStack_68 = &UNK_110896ce8;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                        &puStack_80);
  }
  return;
}



/* Entry: 108d289f0; end: 108d28a0b;  */

void FUN_108d289f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d28a0c; end: 108d28a23; -[SCCustomStickerController delegate] */

void FUN_108d28a0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d28a24; end: 108d28a2f; -[SCCustomStickerController setDelegate:] */

void FUN_108d28a24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 108d28a30; end: 108d28a37; -[SCCustomStickerController isOpen] */

undefined1 FUN_108d28a30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 108d28a38; end: 108d28a3f; -[SCCustomStickerController isCutting] */

undefined1 FUN_108d28a38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



/* Entry: 108d28a40; end: 108d28a47; -[SCCustomStickerController scribbleView] */

undefined8 FUN_108d28a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108d28a48; end: 108d28b33; -[SCCustomStickerController .cxx_destruct] */

void FUN_108d28a48(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0xa0);
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
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108d28b34; end: 108d28b7b;  */

void FUN_108d28b34(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef2d58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ef2d58,
                      &PTR____CFConstantStringClassReference_110ef2d78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108d28b7c; end: 108d28cf7; -[SCChatStickerFuzzySearchListenerAnnouncer description] */

void FUN_108d28b7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_108d28cf8(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108d28cf8; end: 108d28d57;  */

void FUN_108d28cf8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 108d28d58; end: 108d29003; -[SCChatStickerFuzzySearchListenerAnnouncer addListener:] */

undefined8 FUN_108d28d58(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110ac2960;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_108d29004(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_108d29144(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_108d28f0c:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_108d28f2c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_108d29004(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_108d29004(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_108d29144(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_108d28f0c;
    }
  }
  uVar9 = 1;
LAB_108d28f2c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 108d29004; end: 108d29143;  */

void FUN_108d29004(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_108d294e8();
LAB_108d29140:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_108d29140;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 108d29144; end: 108d2918b;  */

void FUN_108d29144(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 108d2918c; end: 108d293bb; -[SCChatStickerFuzzySearchListenerAnnouncer removeListener:] */

void FUN_108d2918c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_108d29340;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108d291f4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_108d29144(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108d29340;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_108d291f4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110ac2960;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_108d29004(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_108d29144(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_108d29340;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_108d29340:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d293bc; end: 108d2949f; -[SCChatStickerFuzzySearchListenerAnnouncer chatStickerFuzzySearchResultDidChange:] */

void FUN_108d293bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_108d28cf8(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf377c0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


