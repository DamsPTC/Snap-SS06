/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e7fe4c; end: 108e80087; +[SCStickerPickerDataSourceUpdateHint updateHintFromMergingHints:] */

void FUN_108e7fe4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar6 = lVar9;
      func_0x00010c0674e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        lVar6 = lVar9;
        func_0x00010c0674e0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef92e0(puVar2);
        _objc_release(lVar6);
      }
      lVar6 = lVar9;
      func_0x00010c28d760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        lVar6 = lVar9;
        func_0x00010c28d760(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef92e0(puVar3);
        _objc_release(lVar6);
      }
      lVar6 = lVar9;
      func_0x00010bf6d000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        func_0x00010bf6d000(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef92e0(puVar4);
        _objc_release(lVar9);
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = PTR_PTR_1126d4ee8;
  _objc_alloc(PTR_PTR_1126d4ee8);
  func_0x00010c01e340();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 108e80088; end: 108e800c3; -[SCStickerPickerDataSourceUpdateHint .cxx_destruct] */

void FUN_108e80088(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e800c4; end: 108e8033b; -[SCStickerPickerSectionHeaderCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108e800c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126fed40;
  puVar1 = &uStack_98;
  uStack_98 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar5 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(param_1,uVar9,uVar10,uVar11);
    lVar8 = (long)_DAT_11277cb88;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_11277cb8c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
    uStack_88 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    puStack_78 = puVar2;
    func_0x00010bf1ecc0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cb90);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cb90) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(param_1,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_11277cb94;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = *(undefined8 **)((long)puVar1 + lVar8);
    func_0x00010befbb60();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cb98) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)puVar5 + (long)_DAT_11277cb9c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar5;
}



/* Entry: 108e8033c; end: 108e8034b; -[SCStickerPickerSectionHeaderCell setLeftContentInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8033c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277cb9c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108e8034c; end: 108e8057b; -[SCStickerPickerSectionHeaderCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8034c(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fed40;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  if (*(long *)(param_3 + _DAT_11277cb98) == 1) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_11277cb94);
    func_0x00010bfe6ac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar1);
    dVar8 = 30.0;
    dVar9 = 30.0;
    if (param_2 != 0.0) {
      dVar9 = (param_1 / param_2) * 30.0;
    }
  }
  else {
    dVar8 = 0.0;
    dVar9 = 0.0;
    if (*(long *)(param_3 + _DAT_11277cb98) == 0) {
      lVar3 = (long)_DAT_11277cb8c;
      func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar3));
      func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar3));
      dVar8 = param_2;
      dVar9 = param_1;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  dVar5 = *(double *)(param_3 + _DAT_11277cb9c);
  dVar10 = dVar5 + 2.0;
  func_0x00010c15b1c0(param_3);
  func_0x00010c292b00();
  if (puVar2 == (undefined *)0x1) {
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    dVar5 = dVar5 - dVar10;
    dVar10 = dVar5 - dVar9;
  }
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  lVar3 = (long)_DAT_11277cb88;
  func_0x00010c19f0e0(dVar10,(dVar5 - dVar8) + -6.0,dVar9,dVar8,*(undefined8 *)(param_3 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetWidth();
  dVar8 = dVar10;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetHeight();
  lVar4 = (long)_DAT_11277cb8c;
  uVar6 = 0;
  func_0x00010c19f0e0(0,0,dVar10,dVar8,*(undefined8 *)(param_3 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetMidX();
  uVar1 = uVar6;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar6,uVar1,*(undefined8 *)(param_3 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetWidth();
  uVar1 = uVar6;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetHeight();
  lVar4 = (long)_DAT_11277cb94;
  uVar7 = 0;
  func_0x00010c19f0e0(0,0,uVar6,uVar1,*(undefined8 *)(param_3 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetMidX();
  uVar1 = uVar7;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar7,uVar1,*(undefined8 *)(param_3 + lVar4));
  return;
}



/* Entry: 108e8057c; end: 108e805eb; -[SCStickerPickerSectionHeaderCell setupWithContent:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8057c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  *(long *)(param_1 + _DAT_11277cb98) = param_4;
  if (param_4 == 1) {
    func_0x00010beb1760(param_1,param_2,param_3);
  }
  else if (param_4 == 0) {
    func_0x00010c2283e0(param_1,param_2,param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e805ec; end: 108e80703; -[SCStickerPickerSectionHeaderCell setup:textColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e805ec(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277cb94),param_2,1);
  lVar3 = (long)_DAT_11277cb8c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  if (param_4 == (undefined *)0x0) {
    param_4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cb90);
  func_0x00010c0d3c80(uVar1);
  func_0x00010c1d0640();
  if (param_3 == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar3));
  }
  func_0x00010c1cbe20(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e80704; end: 108e8070f; +[SCStickerPickerSectionHeaderCell reuseIdentifier] */

undefined ** FUN_108e80704(void)

{
  return &PTR____CFConstantStringClassReference_110efcd58;
}



/* Entry: 108e80710; end: 108e807a7; -[SCStickerPickerSectionHeaderCell _setupWithImageContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e80710(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277cb8c),param_2,1);
  lVar2 = (long)_DAT_11277cb94;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
    _objc_release(puVar1);
  }
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e807a8; end: 108e807b7; -[SCStickerPickerSectionHeaderCell leftContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e807a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cb9c);
}



/* Entry: 108e807b8; end: 108e80817; -[SCStickerPickerSectionHeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e807b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cb90,0);
  _objc_storeStrong(param_1 + _DAT_11277cb94,0);
  _objc_storeStrong(param_1 + _DAT_11277cb88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cb8c,0);
  return;
}



/* Entry: 108e80818; end: 108e8083f;  */

undefined ** FUN_108e80818(long param_1)

{
  if (param_1 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110ac7a38)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db9e38;
}



/* Entry: 108e80840; end: 108e8088f; -[CustomBlurEffect initWithBlurRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e80840(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fed48;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cba0) = param_1;
  }
  return;
}



/* Entry: 108e80890; end: 108e808d7; -[CustomBlurEffect init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e80890(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fed48;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cba0) = 0x4008000000000000;
  }
  return;
}



/* Entry: 108e808d8; end: 108e80987; -[CustomBlurEffect effectSettings] */

void FUN_108e808d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fed48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_effectSettings_1125392d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf1e7c0(param_1);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1);
  _objc_release(puVar2);
  func_0x00010c220220(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e80988; end: 108e80997; -[CustomBlurEffect blurRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e80988(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cba0);
}



/* Entry: 108e80998; end: 108e809a7; -[CustomBlurEffect setBlurRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e80998(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277cba0) = param_1;
  return;
}



/* Entry: 108e809a8; end: 108e809b7; +[SCStickerPickerStyle shouldBlurBackgroundForSourceType:] */

bool FUN_108e809a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 1;
}



/* Entry: 108e809b8; end: 108e80a33; +[SCStickerPickerStyle blurOverlayColorForSourceType:] */

void FUN_108e809b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *unaff_x19;
  undefined8 uVar2;
  
  if (param_3 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10dfa3c18 + param_3 * 8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10dfa3bf8 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = puVar1;
    func_0x00010bf414e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 108e80a34; end: 108e80abb; +[SCStickerPickerStyle heavyBlurOverlayColorForSourceType:] */

void FUN_108e80a34(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010c14c660(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80ab4;
    }
    if (param_3 != 1) goto LAB_108e80ab4;
  }
  else {
    if (param_3 == 2) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80ab4;
    }
    if (param_3 != 3) goto LAB_108e80ab4;
  }
  func_0x00010bf41680(0x3ff0000000000000,0x3feccccccccccccd,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
LAB_108e80ab4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80abc; end: 108e80b7b; +[SCStickerPickerStyle toolbarFillViewColorForSourceType:] */

void FUN_108e80abc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *unaff_x19;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      unaff_x19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80b6c;
    }
    if (param_3 != 1) goto LAB_108e80b6c;
  }
  else {
    if (param_3 == 2) {
      unaff_x19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80b6c;
    }
    if (param_3 != 3) goto LAB_108e80b6c;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7d);
  _objc_retainAutoreleasedReturnValue();
  unaff_x19 = puVar1;
  func_0x00010bf414e0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_108e80b6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 108e80b7c; end: 108e80be3; +[SCStickerPickerStyle sectionHeaderTextColorForSourceType:] */

void FUN_108e80b7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
LAB_108e80bc8:
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80bdc;
    }
    if (param_3 != 1) goto LAB_108e80bdc;
  }
  else {
    if (param_3 == 2) goto LAB_108e80bc8;
    if (param_3 != 3) goto LAB_108e80bdc;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
LAB_108e80bdc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80be4; end: 108e80cb7; +[SCStickerPickerStyle blurEffectForSourceType:traitCollection:] */

void FUN_108e80be4(undefined *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if ((param_3 & 0xfffffffffffffffd) == 1) {
    uVar2 = 10;
  }
  else {
    lVar1 = param_4;
    func_0x00010c292b20();
    if (lVar1 == 2) {
      uVar2 = 2;
    }
    else {
      if (param_3 == 0) {
        func_0x00010bee6600();
        if ((int)param_1 != 0) {
          param_1 = PTR_PTR_1126dc438;
          _objc_alloc(PTR_PTR_1126dc438);
          func_0x00010bff8fa0(0x4024000000000000);
          goto LAB_108e80c9c;
        }
      }
      else if ((param_3 != 2) && (param_3 != 3)) goto LAB_108e80c9c;
      uVar2 = 1;
    }
  }
  param_1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_108e80c9c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e80cb8; end: 108e80d3b; +[SCStickerPickerStyle _useCustomBlur] */

undefined * FUN_108e80cb8(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0768;
  func_0x00010c067fc0();
  if (ppuVar1 == (undefined **)0x1) {
    puVar3 = (undefined *)0x0;
  }
  else if (ppuVar1 == (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0793e0();
    _objc_release(puVar2);
  }
  else {
    puVar3 = (undefined *)0x1;
  }
  return puVar3;
}



/* Entry: 108e80d3c; end: 108e80d83; +[SCStickerPickerStyle toolbarHeightForSourceType:bottomInset:] */

double FUN_108e80d3c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  double dVar1;
  
  if (param_5 < 2) {
    if (param_5 == 0) {
LAB_108e80d70:
      dVar1 = 45.0;
      goto LAB_108e80d78;
    }
    if (param_5 != 1) {
      return param_2;
    }
  }
  else {
    if (param_5 == 2) goto LAB_108e80d70;
    if (param_5 != 3) {
      return param_2;
    }
  }
  dVar1 = 35.0;
LAB_108e80d78:
  return param_1 + dVar1;
}



/* Entry: 108e80d84; end: 108e80d9b; +[SCStickerPickerStyle subToolbarHeightForSourceType:] */

undefined8 FUN_108e80d84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4041800000000000;
  if ((param_3 & 0xfffffffffffffffd) != 0) {
    uVar1 = 0x403d000000000000;
  }
  return uVar1;
}



/* Entry: 108e80d9c; end: 108e80ddb; +[SCStickerPickerStyle scrollbarStickColor:] */

void FUN_108e80d9c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    func_0x00010bf41680(*(undefined8 *)(&UNK_10dfa3c38 + param_3 * 8),0x3fb999999999999a,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80ddc; end: 108e80e43; +[SCStickerPickerStyle scrollbarGrabberColor:] */

void FUN_108e80ddc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
LAB_108e80e28:
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80e3c;
    }
    if (param_3 != 1) goto LAB_108e80e3c;
  }
  else {
    if (param_3 == 2) goto LAB_108e80e28;
    if (param_3 != 3) goto LAB_108e80e3c;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x89);
  _objc_retainAutoreleasedReturnValue();
LAB_108e80e3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80e44; end: 108e80eab; +[SCStickerPickerStyle linkingPageTextColor:] */

void FUN_108e80e44(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
LAB_108e80e90:
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80ea4;
    }
    if (param_3 != 1) goto LAB_108e80ea4;
  }
  else {
    if (param_3 == 2) goto LAB_108e80e90;
    if (param_3 != 3) goto LAB_108e80ea4;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x89);
  _objc_retainAutoreleasedReturnValue();
LAB_108e80ea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80eac; end: 108e80eeb; +[SCStickerPickerStyle linkingPageSubTextColor:] */

void FUN_108e80eac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    func_0x00010bf41680(*(undefined8 *)(&UNK_10dfa3c38 + param_3 * 8),0x3fd999999999999a,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80eec; end: 108e80f37; +[SCStickerPickerStyle stickerImageLoadingViewColor:] */

void FUN_108e80eec(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    func_0x00010bfce0e0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80f38; end: 108e80faf; +[SCStickerPickerStyle noResultsTextColor:] */

void FUN_108e80f38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80fa8;
    }
    if (param_3 != 1) goto LAB_108e80fa8;
LAB_108e80f68:
    uVar1 = 0xbf;
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) goto LAB_108e80fa8;
      goto LAB_108e80f68;
    }
    uVar1 = 0x7b;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_108e80fa8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e80fb0; end: 108e80fff; +[SCStickerPickerStyle searchBarBackgroundColor:] */

void FUN_108e80fb0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (1 < param_3) {
    if (param_3 == 2) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e80ff8;
    }
    if (param_3 != 3) goto LAB_108e80ff8;
  }
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
LAB_108e80ff8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e81000; end: 108e81287; -[SCStickerQuickSearchKeywords init] */

undefined8 * FUN_108e81000(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  puStack_70 = PTR_PTR_1126fed50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar19 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000108e86a30();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000108e86910();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000108e86928();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000108e86940();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000108e86958();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000108e86a48();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000108e86970();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x000108e868e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x000108e868f8();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x000108e869a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x000108e86988();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x000108e869b8();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x000108e869d0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x000108e869e8();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x000108e86a00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x000108e86a18();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x000108e86a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = puVar1[1];
    puVar1[1] = puVar19;
    _objc_release(uVar20);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 108e81288; end: 108e81433; -[SCStickerQuickSearchKeywords keywordFromText:] */

void FUN_108e81288(long param_1,undefined8 param_2,undefined **param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar6 = (undefined **)0x1;
    do {
      ppuVar3 = param_3;
      func_0x00010c0dfd40(param_3,param_2,(long)ppuVar6 + -1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_3;
      func_0x00010bf529e0();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar6 < ppuVar4) {
        ppuVar4 = param_3;
        func_0x00010c0dfd40(param_3,param_2,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110db27b8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        uVar8 = *(ulong *)(param_1 + 8);
        ppuVar4 = ppuVar5;
        func_0x00010c09e5e0(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar8,param_2,ppuVar4);
        _objc_release(ppuVar4);
        if ((uVar8 & 1) == 0) {
          _objc_release(ppuVar5);
          goto LAB_108e81390;
        }
LAB_108e81400:
        ppuVar2 = ppuVar5;
        _objc_release(ppuVar3);
        break;
      }
LAB_108e81390:
      uVar7 = *(undefined8 *)(param_1 + 8);
      ppuVar5 = ppuVar3;
      func_0x00010c09e5e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar7,param_2,ppuVar5);
      _objc_release(ppuVar5);
      if ((int)uVar7 != 0) {
        _objc_retain(ppuVar3);
        ppuVar5 = ppuVar3;
        goto LAB_108e81400;
      }
      _objc_release(ppuVar3);
      ppuVar5 = param_3;
      func_0x00010bf529e0();
      bVar1 = ppuVar6 < ppuVar5;
      ppuVar6 = (undefined **)((long)ppuVar6 + 1);
    } while (bVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108e81434; end: 108e8143f; -[SCStickerQuickSearchKeywords .cxx_destruct] */

void FUN_108e81434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e81440; end: 108e8151b; -[SCStickerPillViewLabelFormat initWithOriginalText:characterCount:isSingleLine:shouldAdjustFontSize:formattedText:lineHeight:] */

undefined1 *
FUN_108e81440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fed58;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
  }
  _objc_release(param_8);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8151c; end: 108e81523; -[SCStickerPillViewLabelFormat originalText] */

undefined8 FUN_108e8151c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e81524; end: 108e8152b; -[SCStickerPillViewLabelFormat characterCount] */

undefined8 FUN_108e81524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e8152c; end: 108e81533; -[SCStickerPillViewLabelFormat isSingleLine] */

undefined1 FUN_108e8152c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e81534; end: 108e8153b; -[SCStickerPillViewLabelFormat shouldAdjustFontSize] */

undefined1 FUN_108e81534(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108e8153c; end: 108e81543; -[SCStickerPillViewLabelFormat formattedText] */

undefined8 FUN_108e8153c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e81544; end: 108e8154b; -[SCStickerPillViewLabelFormat lineHeight] */

undefined8 FUN_108e81544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e8154c; end: 108e8157b; -[SCStickerPillViewLabelFormat .cxx_destruct] */

void FUN_108e8154c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e8157c; end: 108e81587; -[SCStickerPillViewLabelFormatDefaultConfiguration fontName] */

undefined ** FUN_108e8157c(void)

{
  return &PTR____CFConstantStringClassReference_110efbb58;
}



/* Entry: 108e81588; end: 108e8158f; -[SCStickerPillViewLabelFormatDefaultConfiguration fontSizeAdjustmentCharacterLimit] */

undefined8 FUN_108e81588(void)

{
  return 0x16;
}



/* Entry: 108e81590; end: 108e81597; -[SCStickerPillViewLabelFormatDefaultConfiguration lineCharacterLimit] */

undefined8 FUN_108e81590(void)

{
  return 0x16;
}



/* Entry: 108e81598; end: 108e815a3; -[SCStickerPillViewLabelFormatDefaultConfiguration lineJoiningString] */

undefined ** FUN_108e81598(void)

{
  return &PTR____CFConstantStringClassReference_110db2db8;
}



/* Entry: 108e815a4; end: 108e815ab; -[SCStickerPillViewLabelFormatDefaultConfiguration truncationCharacterLimit] */

undefined8 FUN_108e815a4(void)

{
  return 0x50;
}



/* Entry: 108e815ac; end: 108e815b3; -[SCStickerPillViewLabelFormatterSpaceIndex codePointIndex] */

undefined8 FUN_108e815ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e815b4; end: 108e815bb; -[SCStickerPillViewLabelFormatterSpaceIndex setCodePointIndex:] */

void FUN_108e815b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108e815bc; end: 108e815c3; -[SCStickerPillViewLabelFormatterSpaceIndex characterIndex] */

undefined8 FUN_108e815bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e815c4; end: 108e815cb; -[SCStickerPillViewLabelFormatterSpaceIndex setCharacterIndex:] */

void FUN_108e815c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108e815cc; end: 108e81613; -[SCStickerPillViewLabelFormatter initWithDefaultConfiguration] */

undefined8 FUN_108e815cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc440;
  _objc_opt_new(PTR_PTR_1126dc440);
  func_0x00010c001640(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108e81614; end: 108e81687; -[SCStickerPillViewLabelFormatter initWithConfiguration:] */

undefined1 * FUN_108e81614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fed60;
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



/* Entry: 108e81688; end: 108e8179b; -[SCStickerPillViewLabelFormatter formatForText:] */

void FUN_108e81688(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char cStack_51;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  uVar4 = param_1;
  func_0x00010beea080(param_1,param_2,ppuVar1);
  uVar2 = param_1;
  func_0x00010be43ba0(param_1,param_2,uVar4);
  cStack_51 = (char)uVar2;
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4020();
  _objc_release(uVar2);
  func_0x00010be18b60(param_1,param_2,ppuVar1,&cStack_51,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if (cStack_51 == '\0') {
    uVar4 = 0x4034000000000000;
  }
  puVar3 = PTR_PTR_1126dc448;
  _objc_alloc(PTR_PTR_1126dc448);
  func_0x00010c0325e0(uVar4);
  _objc_release(param_1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e8179c; end: 108e81867; -[SCStickerPillViewLabelFormatter _visibleCharacterCountForString:] */

undefined8 FUN_108e8179c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c08fa60(param_3);
  func_0x00010bf98040(param_3);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108e81868; end: 108e8187f;  */

void FUN_108e81868(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 108e81880; end: 108e818c3; -[SCStickerPillViewLabelFormatter _isSingleLineForCharacterCount:] */

bool FUN_108e81880(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0991e0();
  _objc_release(param_1);
  return param_3 <= lVar1;
}



/* Entry: 108e818c4; end: 108e81b77; -[SCStickerPillViewLabelFormatter _formatText:isSingleLine:characterCount:] */

void FUN_108e818c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar8 = param_3;
  if (*param_4 == '\x01') {
    _objc_retain(param_3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    func_0x00010c08fa60(param_3);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    func_0x00010bf98040(param_3);
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      *param_4 = '\x01';
      _objc_retain(param_3);
    }
    else {
      uVar4 = param_1;
      func_0x00010be16820(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ed60();
      uVar5 = param_3;
      func_0x00010c260c20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ed60(uVar4);
      uVar6 = param_3;
      func_0x00010c260c00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c25d0a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0d3c80();
      _objc_release(uVar7);
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010c0993a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf070e0(uVar8);
      _objc_release(uVar7);
      _objc_release(param_1);
      uVar7 = uVar6;
      func_0x00010c25d0a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf070e0(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 108e81b78; end: 108e81bc7;  */

void FUN_108e81b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010be80980(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),param_3,
                      *(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 108e81bc8; end: 108e81c93; -[SCStickerPillViewLabelFormatter _processCharacterSequenceWithSubstring:characterSet:characterIndex:codePointIndex:matchingCharacterIndexes:] */

void FUN_108e81bc8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 2) {
    uVar1 = param_3;
    func_0x00010bf35920(param_3,param_2,0);
    uVar2 = param_4;
    func_0x00010bf359c0(param_4,param_2,uVar1);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126dc450;
      _objc_opt_new(PTR_PTR_1126dc450);
      func_0x00010c17acc0();
      func_0x00010c17dc20(puVar3,param_2,param_6);
      func_0x00010befa120(param_7,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e81c94; end: 108e81de7; -[SCStickerPillViewLabelFormatter _findCenterMostSpace:characterCount:] */

void FUN_108e81c94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0x7fffffffffffffff;
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_108e81de8;
    uStack_60 = 0x108e81df8;
    uStack_58 = 0;
    func_0x00010bf97e80(param_3);
    lVar1 = puStack_78[5];
    _objc_retain(lVar1);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108e81de8; end: 108e81dff;  */

void FUN_108e81de8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e81e00; end: 108e81ecb;  */

void FUN_108e81e00(long param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27cb80();
  _objc_release(uVar1);
  if (uVar2 < param_3) {
    *param_4 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  lVar4 = param_2;
  func_0x00010bf35960();
  lVar5 = lVar5 - lVar4;
  lVar4 = -lVar5;
  if (-1 < lVar5) {
    lVar4 = lVar5;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if (lVar4 < *(long *)(lVar5 + 0x18)) {
    *(long *)(lVar5 + 0x18) = lVar4;
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = param_2;
    _objc_release(uVar3);
  }
  else {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e81ecc; end: 108e81ed3; -[SCStickerPillViewLabelFormatter configuration] */

undefined8 FUN_108e81ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e81ed4; end: 108e81edf; -[SCStickerPillViewLabelFormatter .cxx_destruct] */

void FUN_108e81ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e81ee0; end: 108e8245f; -[SCStickerPillRainbowView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e81ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126fed68;
  puVar1 = &uStack_108;
  uStack_108 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar21 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_11277cbcc;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar2;
    _objc_release(uVar23);
    func_0x00010c209760(0x3fbeb851eb851eb8,0x3fd8f5c28f5c28f6,*(undefined8 *)((long)puVar1 + lVar25)
                       );
    func_0x00010c196020(0x3fec7ae147ae147b,0x3fe3851eb851eb85,*(undefined8 *)((long)puVar1 + lVar25)
                       );
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_f8 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_f0 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_e8 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_e0 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_d8 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_d0 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_c8 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_c0 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_b8 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_b0 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar15;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_90 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar17;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_88 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar18;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_80 = puVar3;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar19;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar25));
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1bff00(*(undefined8 *)((long)puVar1 + lVar25));
    puVar21 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar21);
    puVar21 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar25));
    _objc_release(puVar21);
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = (long)_DAT_11277cbd0;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar2;
    _objc_release(uVar23);
    func_0x00010c1733a0(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar24));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release(puVar2);
    param_2 = 0x3fd6666666666666;
    param_1 = 0;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd6666666666666);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release(puVar2);
    func_0x00010c1c2d20(*(undefined8 *)((long)puVar1 + lVar24));
    puVar21 = *(undefined8 **)((long)puVar1 + lVar25);
    func_0x00010c1c2c00();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puStack_1b8 = PTR_PTR_1126fed68;
  puStack_1c0 = puVar21;
  _objc_msgSendSuper2(&puStack_1c0,PTR_s_layoutSublayersOfLayer__1125377f8);
  puVar1 = puVar21;
  func_0x00010c08c0e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar22 = puVar21;
  func_0x00010bfcd9c0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(puVar22);
  _objc_release(puVar1);
  puVar1 = puVar21;
  func_0x00010bfcd9c0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar22 = puVar21;
  func_0x00010bf1fba0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(puVar22);
  _objc_release(puVar1);
  puVar1 = puVar21;
  func_0x00010bf1fba0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf1fba0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4 * 0.5);
  _objc_release(puVar21);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 108e82460; end: 108e825c3; -[SCStickerPillRainbowView layoutSublayersOfLayer:] */

void FUN_108e82460(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fed68;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSublayersOfLayer__1125377f8);
  uVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010bfcd9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfcd9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010bf1fba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf1fba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf1fba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4 * 0.5);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 108e825c4; end: 108e825d3; -[SCStickerPillRainbowView gradientLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e825c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbcc);
}



/* Entry: 108e825d4; end: 108e825e3; -[SCStickerPillRainbowView borderMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e825d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cbd0);
}



/* Entry: 108e825e4; end: 108e82623; -[SCStickerPillRainbowView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e825e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cbd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cbcc,0);
  return;
}



/* Entry: 108e82624; end: 108e8272f; -[SCStickerPillView initWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108e82624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fed70;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dc458;
    _objc_alloc();
    func_0x00010c009f80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cbd4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cbd4) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277cbd8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108e82730;
    puStack_50 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_48 = puVar1;
    func_0x000107c312cc("APPSTORE",&puStack_68);
    _objc_release(puStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e82730; end: 108e8277f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e82730(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cbdc) = 0;
  func_0x00010beb0340(*(undefined8 *)(param_1 + 0x20));
  func_0x00010beabac0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bed8ae0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bee1220(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108e82780; end: 108e827a7; -[SCStickerPillView _shouldDrawPillAsCircle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e82780(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277cbd8);
  func_0x00010c0fbe80(lVar1);
  return lVar1 == 1;
}



/* Entry: 108e827a8; end: 108e82837; -[SCStickerPillView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e827a8(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double in_d3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fed70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_1;
  func_0x00010beb35c0();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_11277cbe0;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(in_d3 * 0.5);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 108e82838; end: 108e8288f; -[SCStickerPillView _setupSubviews] */

void FUN_108e82838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5d60(param_1);
  func_0x00010bdc5d80(param_1,param_2,puVar1);
  func_0x00010bdc5da0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e82890; end: 108e829eb; -[SCStickerPillView _addAndSetupBackgroundView] */

/* WARNING: Possible PIC construction at 0x000108e82914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e82990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e82918) */
/* WARNING: Removing unreachable block (ram,0x000108e82964) */
/* WARNING: Removing unreachable block (ram,0x000108e82988) */
/* WARNING: Removing unreachable block (ram,0x000108e82994) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e82890(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11277cbe0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167540();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108e829ec; end: 108e82b53; -[SCStickerPillView _addAndSetupIconViewWithTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e829ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_retain(param_3);
  _objc_alloc_init();
  lVar3 = (long)_DAT_11277cbec;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  func_0x000108e82a80(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108e82b54; end: 108e82c07; -[SCStickerPillView _addAndSetupLabelWithTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e82b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_3);
  _objc_alloc_init();
  lVar3 = (long)_DAT_11277cbf0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  func_0x00010beb35c0();
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1e0180(0x406fc00000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x000108e82a80(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108e82c08; end: 108e82c33; -[SCStickerPillView _setupConstraints] */

void FUN_108e82c08(undefined8 param_1)

{
  func_0x00010bdc5fe0();
  func_0x00010bdc7080(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc7310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addLabelConstraints_11254f660);
  return;
}



/* Entry: 108e82c34; end: 108e83337; -[SCStickerPillView _addBackgroundViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e82c34(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar23 = (long)_DAT_11277cbe0;
  uVar1 = *(undefined8 *)(param_2 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  lStack_100 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = (undefined *)lVar13;
  func_0x00010bf493a0(uVar1,param_3,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar23);
  lStack_110 = uVar1;
  uStack_90 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  puStack_118 = (undefined *)uVar2;
  func_0x00010c2793a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar2,param_3,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar23);
  uStack_88 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2;
  func_0x00010c274200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf493a0(uVar3,param_3,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar23);
  lStack_f8 = lVar23;
  uStack_80 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x00010bf1ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf493a0(uVar4,param_3,lVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_120,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar18);
  _objc_release(lVar23);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(lVar24);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar13);
  _objc_release(puStack_118);
  _objc_release(lStack_110);
  _objc_release(puStack_108);
  _objc_release(lStack_100);
  lVar13 = param_2;
  func_0x00010beb35c0();
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = (long)_DAT_11277cbe4;
  puVar5 = *(undefined **)(param_2 + lVar24);
  if ((int)lVar13 == 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lStack_f8;
    uVar1 = *(undefined8 *)(param_2 + lStack_f8);
    puStack_120 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_100 = uVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar24);
    puStack_108 = puVar5;
    puStack_d0 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c2793a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_110 = uVar4;
    func_0x00010bf493a0(uVar4,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar24);
    uStack_c8 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c274200(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bf493a0(uVar6,param_3,uVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = *(undefined **)(param_2 + lVar24);
    uStack_c0 = uVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010bf1ff80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    func_0x00010bf493a0(puVar7,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_d0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_118,param_3,puVar8);
    puVar5 = puStack_120;
    _objc_release(puVar8);
  }
  else {
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lStack_f8;
    uVar1 = *(undefined8 *)(param_2 + lStack_f8);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar5;
    lStack_100 = uVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar24);
    puStack_108 = puVar16;
    puStack_b0 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_110 = uVar4;
    func_0x00010bf493a0(uVar4,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar24);
    uStack_a8 = uVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 46.0;
    uVar18 = uVar6;
    func_0x00010bf49420(0x4047000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + lVar24);
    uStack_a0 = uVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = *(undefined **)(param_2 + lVar24);
    func_0x00010bfe0660(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf493a0(uVar1,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_b0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_118,param_3,puVar16);
  }
  _objc_release(puVar16);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_110);
  _objc_release(puStack_108);
  _objc_release(lStack_100);
  _objc_release(puVar5);
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar23 = (long)_DAT_11277cbe8;
  lVar24 = *(long *)(param_2 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lStack_f8;
  uVar1 = *(undefined8 *)(param_2 + lStack_f8);
  lStack_100 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = (undefined *)uVar1;
  func_0x00010bf493a0(lVar24,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar23);
  lStack_110 = lVar24;
  lStack_f0 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf493a0(uVar3,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar23);
  uStack_e8 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar6;
  func_0x00010bf493a0(uVar6,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + lVar23);
  uStack_e0 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf493a0(uVar10,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_f0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_118,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar18);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_110);
  _objc_release(puStack_108);
  lVar13 = lStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_108e83338;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = lVar13;
  uStack_180 = uVar9;
  uStack_178 = uVar6;
  uStack_170 = uVar1;
  uStack_168 = uVar18;
  uStack_160 = uVar4;
  uStack_158 = uVar3;
  puStack_150 = puVar5;
  uStack_148 = uVar2;
  uStack_140 = uVar10;
  uStack_138 = uVar11;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010beb35c0();
  if ((int)lVar24 == 0) {
    lVar25 = (long)_DAT_11277cbec;
    uVar18 = *(undefined8 *)(lVar13 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar13;
    func_0x00010c08de00(lVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar18;
    func_0x00010bf493c0(0x4028000000000000,uVar18,param_3,lVar24);
    _objc_retainAutoreleasedReturnValue();
    lVar23 = (long)_DAT_11277cbf4;
    uVar2 = *(undefined8 *)(lVar13 + lVar23);
    *(undefined8 *)(lVar13 + lVar23) = uVar1;
    _objc_release(uVar2);
    _objc_release(lVar24);
    _objc_release(uVar18);
    uStack_1c8 = *(undefined8 *)(lVar13 + lVar23);
    puStack_1d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar23 = *(long *)(lVar13 + lVar25);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar13;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar23;
    func_0x00010bf493a0(lVar23,param_3,lVar24);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar13 + lVar25);
    lStack_1c0 = lVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar26 = 17.0;
    uVar1 = uVar3;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar13 + lVar25);
    uStack_1b8 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar13 + lVar25);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar2;
    func_0x00010bf493a0(uVar2,param_3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1b0 = uVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_1c8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1d0,param_3,puVar5);
  }
  else {
    puStack_1d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar23 = (long)_DAT_11277cbec;
    lVar12 = *(long *)(lVar13 + lVar23);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_11277cbe4;
    lVar24 = *(long *)(lVar13 + lVar25);
    lStack_1d8 = lVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e0 = lVar24;
    func_0x00010bf493a0(lVar12,param_3,lVar24);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar13 + lVar23);
    lStack_1a8 = lVar12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar13 + lVar25);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf493a0(uVar3,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar13 + lVar23);
    uStack_1a0 = uVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar26 = 25.0;
    uVar18 = uVar4;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(lVar13 + lVar23);
    uStack_198 = uVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(lVar13 + lVar23);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar5;
    func_0x00010bf493a0(puVar5,param_3,lVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_190 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_1a8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1d0,param_3,puVar8);
    lVar24 = lStack_1e0;
    _objc_release(puVar8);
    lVar23 = lStack_1d8;
    _objc_release(puVar16);
    _objc_release(lVar13);
  }
  _objc_release(puVar5);
  _objc_release(uVar18);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(lVar24);
  lVar25 = lVar23;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return dVar26;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_108e836c0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = lVar25;
  puStack_240 = puVar5;
  uStack_238 = uVar18;
  uStack_230 = uVar4;
  uStack_228 = uVar2;
  uStack_220 = uVar1;
  lStack_218 = lVar13;
  uStack_210 = uVar3;
  lStack_208 = lVar12;
  lStack_200 = lVar24;
  lStack_1f8 = lVar23;
  ppuStack_1f0 = &puStack_130;
  func_0x00010beb35c0();
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if ((int)lVar14 == 0) {
    lVar23 = (long)_DAT_11277cbf0;
    uVar18 = *(undefined8 *)(lVar25 + lVar23);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar25;
    func_0x00010bf348e0(lVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar18;
    func_0x00010bf493a0(uVar18,param_3,lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar24 = (long)_DAT_11277cbf8;
    uVar2 = *(undefined8 *)(lVar25 + lVar24);
    *(undefined8 *)(lVar25 + lVar24) = uVar1;
    _objc_release(uVar2);
    _objc_release(lVar13);
    _objc_release(uVar18);
    uVar18 = *(undefined8 *)(lVar25 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar25;
    func_0x00010c2793a0(lVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar18;
    func_0x00010bf493c0(0xc02e000000000000,uVar18,param_3,lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11277cbfc;
    uVar2 = *(undefined8 *)(lVar25 + lVar12);
    *(undefined8 *)(lVar25 + lVar12) = uVar1;
    _objc_release(uVar2);
    _objc_release(lVar13);
    _objc_release(uVar18);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar15 = *(ulong *)(lVar25 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(lVar25 + _DAT_11277cbec);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    dVar26 = 4.0;
    uVar19 = uVar15;
    func_0x00010bf493c0(uVar15,param_3,lVar13);
    _objc_retainAutoreleasedReturnValue();
    uStack_278 = *(undefined8 *)(lVar25 + lVar24);
    uStack_270 = *(undefined8 *)(lVar25 + lVar12);
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_280 = uVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_280,3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    func_0x00010beef8c0(puVar5);
  }
  else {
    lVar12 = (long)_DAT_11277cbf0;
    uVar15 = *(ulong *)(lVar25 + lVar12);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar25;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar15;
    func_0x00010bf493a0(uVar15,param_3,lVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = *(undefined **)(lVar25 + lVar12);
    uStack_268 = uVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar25;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar16;
    func_0x00010bf493a0(puVar16,param_3,lVar24);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar25 + lVar12);
    puStack_260 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar25;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf493a0(uVar2,param_3,lVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar25 + lVar12);
    uStack_258 = uVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar25 + _DAT_11277cbe4);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    dVar26 = 5.0;
    uVar18 = uVar3;
    func_0x00010bf493c0(uVar3,param_3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_250 = uVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_268,4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar17;
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar17);
    _objc_release(uVar18);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(lVar23);
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(lVar24);
  }
  _objc_release(puVar16);
  _objc_release(uVar19);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return dVar26;
  }
  ___stack_chk_fail();
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  uVar19 = uVar15;
  func_0x00010beb35c0();
  if ((uVar19 & 1) == 0) {
    uVar19 = uVar15;
    func_0x00010c087500(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    puVar5 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    func_0x00010c099280(puVar8);
    dVar30 = dVar26;
    func_0x00010c099280(uVar20);
    dVar30 = dVar26 / dVar30;
    dVar29 = dVar30;
    func_0x00010c1bdc00(puVar5);
    dVar26 = 0.0;
    dVar28 = 0.0;
    dVar27 = 1.0;
    if (0.0 < dVar30) {
      func_0x00010c099280(uVar20);
      dVar27 = dVar29;
      func_0x00010c099280(uVar20);
      dVar28 = (dVar30 * dVar29 - dVar27) * 0.5;
      dVar27 = dVar30;
    }
    puVar16 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar19 = uVar15;
    func_0x00010c087500(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_358 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uStack_350 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_348 = puVar5;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_340 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_348,&uStack_358,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar16,param_3,uVar21,puVar17);
    uVar22 = uVar15;
    func_0x00010c087500(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar22);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar7);
    _objc_release(uVar21);
    _objc_release(uVar19);
    uVar19 = uVar15;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010c0def20();
    _objc_release(uVar19);
    if (uVar21 == 1) {
      _objc_retain(uVar20);
      func_0x00010c099280(uVar20);
      dVar29 = dVar27 * dVar28;
      func_0x00010c08dd20(uVar20);
      _objc_release(uVar20);
      dVar26 = dVar27;
      FUN_108e83da0(uVar20);
      dVar30 = dVar26;
      _objc_retain(uVar20);
      func_0x00010c099280(uVar20);
      dVar31 = dVar27 * dVar30;
      func_0x00010c08dd20(uVar20);
      FUN_108e83da0(uVar20);
      dVar30 = (dVar31 + (dVar31 + dVar30) * 0.0) - dVar27;
      func_0x00010bf6e320(uVar20);
      _objc_release(uVar20);
      dVar26 = (dVar29 + (dVar29 + dVar28) * 0.0) * 0.5 - (dVar26 + (dVar27 + dVar30) * 0.5);
    }
    func_0x00010c087560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181140(dVar26);
    _objc_release(uVar15);
    _objc_release(puVar5);
    _objc_release(uVar20);
  }
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return dVar26;
  }
  ___stack_chk_fail();
  dVar30 = dVar26;
  _objc_retain();
  func_0x00010c099280(puVar8);
  dVar26 = dVar26 * dVar30;
  func_0x00010bf2f960(puVar8);
  dVar26 = dVar26 - dVar30;
  func_0x00010bf6e320(puVar8);
  _objc_release(puVar8);
  return dVar26 + dVar30;
}



/* Entry: 108e83338; end: 108e836bf; -[SCStickerPillView _addIconViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e83338(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010beb35c0();
  if ((int)lVar2 == 0) {
    lVar19 = (long)_DAT_11277cbec;
    uVar13 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010bf493c0(0x4028000000000000,uVar13,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11277cbf4;
    uVar11 = *(undefined8 *)(param_1 + lVar18);
    *(undefined8 *)(param_1 + lVar18) = uVar4;
    _objc_release(uVar11);
    _objc_release(lVar2);
    _objc_release(uVar13);
    uStack_a8 = *(undefined8 *)(param_1 + lVar18);
    puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar18 = *(long *)(param_1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar18;
    func_0x00010bf493a0(lVar18,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar19);
    lStack_a0 = lVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 17.0;
    uVar4 = uVar3;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar19);
    uStack_98 = uVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0(uVar11,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b0,param_2,puVar6);
  }
  else {
    puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar18 = (long)_DAT_11277cbec;
    lVar1 = *(long *)(param_1 + lVar18);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11277cbe4;
    lVar2 = *(long *)(param_1 + lVar19);
    lStack_b8 = lVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar2;
    func_0x00010bf493a0(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar18);
    lStack_88 = lVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar18);
    uStack_80 = uVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 25.0;
    uVar13 = uVar5;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_1 + lVar18);
    uStack_78 = uVar13;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(param_1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf493a0(puVar6,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b0,param_2,puVar7);
    lVar2 = lStack_c0;
    _objc_release(puVar7);
    lVar18 = lStack_b8;
    _objc_release(puVar9);
    _objc_release(param_1);
  }
  _objc_release(puVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar19 = lVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar21;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_108e836c0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = lVar19;
  puStack_120 = puVar6;
  uStack_118 = uVar13;
  uStack_110 = uVar5;
  uStack_108 = uVar11;
  uStack_100 = uVar4;
  lStack_f8 = param_1;
  uStack_f0 = uVar3;
  lStack_e8 = lVar1;
  lStack_e0 = lVar2;
  lStack_d8 = lVar18;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010beb35c0();
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if ((int)lVar20 == 0) {
    lVar1 = (long)_DAT_11277cbf0;
    uVar13 = *(undefined8 *)(lVar19 + lVar1);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar19;
    func_0x00010bf348e0(lVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11277cbf8;
    uVar11 = *(undefined8 *)(lVar19 + lVar18);
    *(undefined8 *)(lVar19 + lVar18) = uVar4;
    _objc_release(uVar11);
    _objc_release(lVar2);
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(lVar19 + lVar1);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar19;
    func_0x00010c2793a0(lVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010bf493c0(0xc02e000000000000,uVar13,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_11277cbfc;
    uVar11 = *(undefined8 *)(lVar19 + lVar20);
    *(undefined8 *)(lVar19 + lVar20) = uVar4;
    _objc_release(uVar11);
    _objc_release(lVar2);
    _objc_release(uVar13);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(ulong *)(lVar19 + lVar1);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(lVar19 + _DAT_11277cbec);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 4.0;
    uVar14 = uVar8;
    func_0x00010bf493c0(uVar8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = *(undefined8 *)(lVar19 + lVar18);
    uStack_150 = *(undefined8 *)(lVar19 + lVar20);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_160 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_160,3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010beef8c0(puVar6);
  }
  else {
    lVar20 = (long)_DAT_11277cbf0;
    uVar8 = *(ulong *)(lVar19 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(lVar19 + lVar20);
    uStack_148 = uVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0(puVar9,param_2,lVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar19 + lVar20);
    puStack_140 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010bf493a0(uVar11,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar19 + lVar20);
    uStack_138 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar19 + _DAT_11277cbe4);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 5.0;
    uVar13 = uVar3;
    func_0x00010bf493c0(uVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_130 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_148,4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar12);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(lVar18);
  }
  _objc_release(puVar9);
  _objc_release(uVar14);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return dVar21;
  }
  ___stack_chk_fail();
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  uVar14 = uVar8;
  func_0x00010beb35c0();
  if ((uVar14 & 1) == 0) {
    uVar14 = uVar8;
    func_0x00010c087500(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    puVar6 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    func_0x00010c099280(puVar7);
    dVar25 = dVar21;
    func_0x00010c099280(uVar15);
    dVar25 = dVar21 / dVar25;
    dVar24 = dVar25;
    func_0x00010c1bdc00(puVar6);
    dVar21 = 0.0;
    dVar23 = 0.0;
    dVar22 = 1.0;
    if (0.0 < dVar25) {
      func_0x00010c099280(uVar15);
      dVar22 = dVar24;
      func_0x00010c099280(uVar15);
      dVar23 = (dVar25 * dVar24 - dVar22) * 0.5;
      dVar22 = dVar25;
    }
    puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar14 = uVar8;
    func_0x00010c087500(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uStack_230 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_228 = puVar6;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_220 = puVar10;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_228,&uStack_238,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar9,param_2,uVar16,puVar12);
    uVar17 = uVar8;
    func_0x00010c087500(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar17);
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(uVar16);
    _objc_release(uVar14);
    uVar14 = uVar8;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010c0def20();
    _objc_release(uVar14);
    if (uVar16 == 1) {
      _objc_retain(uVar15);
      func_0x00010c099280(uVar15);
      dVar24 = dVar22 * dVar23;
      func_0x00010c08dd20(uVar15);
      _objc_release(uVar15);
      dVar21 = dVar22;
      FUN_108e83da0(uVar15);
      dVar25 = dVar21;
      _objc_retain(uVar15);
      func_0x00010c099280(uVar15);
      dVar26 = dVar22 * dVar25;
      func_0x00010c08dd20(uVar15);
      FUN_108e83da0(uVar15);
      dVar25 = (dVar26 + (dVar26 + dVar25) * 0.0) - dVar22;
      func_0x00010bf6e320(uVar15);
      _objc_release(uVar15);
      dVar21 = (dVar24 + (dVar24 + dVar23) * 0.0) * 0.5 - (dVar21 + (dVar22 + dVar25) * 0.5);
    }
    func_0x00010c087560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181140(dVar21);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(uVar15);
  }
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return dVar21;
  }
  ___stack_chk_fail();
  dVar25 = dVar21;
  _objc_retain();
  func_0x00010c099280(puVar7);
  dVar21 = dVar21 * dVar25;
  func_0x00010bf2f960(puVar7);
  dVar21 = dVar21 - dVar25;
  func_0x00010bf6e320(puVar7);
  _objc_release(puVar7);
  return dVar21 + dVar25;
}



/* Entry: 108e836c0; end: 108e83a63; -[SCStickerPillView _addLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e836c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1;
  func_0x00010beb35c0();
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if ((int)lVar10 == 0) {
    lVar19 = (long)_DAT_11277cbf0;
    uVar8 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf348e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_11277cbf8;
    uVar4 = *(undefined8 *)(param_1 + lVar17);
    *(undefined8 *)(param_1 + lVar17) = uVar9;
    _objc_release(uVar4);
    _objc_release(lVar10);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf493c0(0xc02e000000000000,uVar8,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11277cbfc;
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    *(undefined8 *)(param_1 + lVar18) = uVar9;
    _objc_release(uVar4);
    _objc_release(lVar10);
    _objc_release(uVar8);
    puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar1 = *(ulong *)(param_1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + _DAT_11277cbec);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    dVar20 = 4.0;
    uVar11 = uVar1;
    func_0x00010bf493c0(uVar1,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = *(undefined8 *)(param_1 + lVar17);
    uStack_90 = *(undefined8 *)(param_1 + lVar18);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a0 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010beef8c0(puVar13);
  }
  else {
    lVar18 = (long)_DAT_11277cbf0;
    uVar1 = *(ulong *)(param_1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010bf493a0(uVar1,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = *(undefined **)(param_1 + lVar18);
    uStack_88 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493a0(puVar2,param_2,lVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    puStack_80 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar18);
    uStack_78 = uVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11277cbe4);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    dVar20 = 5.0;
    uVar8 = uVar5;
    func_0x00010bf493c0(uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    func_0x00010beef8c0(puVar13);
    _objc_release(puVar7);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(lVar19);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(lVar17);
  }
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar20;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  uVar11 = uVar1;
  func_0x00010beb35c0();
  if ((uVar11 & 1) == 0) {
    uVar11 = uVar1;
    func_0x00010c087500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    puVar13 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    func_0x00010c099280(puVar16);
    dVar24 = dVar20;
    func_0x00010c099280(uVar12);
    dVar24 = dVar20 / dVar24;
    dVar23 = dVar24;
    func_0x00010c1bdc00(puVar13);
    dVar20 = 0.0;
    dVar22 = 0.0;
    dVar21 = 1.0;
    if (0.0 < dVar24) {
      func_0x00010c099280(uVar12);
      dVar21 = dVar23;
      func_0x00010c099280(uVar12);
      dVar22 = (dVar24 * dVar23 - dVar21) * 0.5;
      dVar21 = dVar24;
    }
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar11 = uVar1;
    func_0x00010c087500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uStack_170 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_168 = puVar13;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_160 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_168,&uStack_178,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2,param_2,uVar14,puVar7);
    uVar15 = uVar1;
    func_0x00010c087500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar15);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(uVar14);
    _objc_release(uVar11);
    uVar11 = uVar1;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010c0def20();
    _objc_release(uVar11);
    if (uVar14 == 1) {
      _objc_retain(uVar12);
      func_0x00010c099280(uVar12);
      dVar23 = dVar21 * dVar22;
      func_0x00010c08dd20(uVar12);
      _objc_release(uVar12);
      dVar20 = dVar21;
      FUN_108e83da0(uVar12);
      dVar24 = dVar20;
      _objc_retain(uVar12);
      func_0x00010c099280(uVar12);
      dVar25 = dVar21 * dVar24;
      func_0x00010c08dd20(uVar12);
      FUN_108e83da0(uVar12);
      dVar24 = (dVar25 + (dVar25 + dVar24) * 0.0) - dVar21;
      func_0x00010bf6e320(uVar12);
      _objc_release(uVar12);
      dVar20 = (dVar23 + (dVar23 + dVar22) * 0.0) * 0.5 - (dVar20 + (dVar21 + dVar24) * 0.5);
    }
    func_0x00010c087560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181140(dVar20);
    _objc_release(uVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
  }
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return dVar20;
  }
  ___stack_chk_fail();
  dVar24 = dVar20;
  _objc_retain();
  func_0x00010c099280(puVar16);
  dVar20 = dVar20 * dVar24;
  func_0x00010bf2f960(puVar16);
  dVar20 = dVar20 - dVar24;
  func_0x00010bf6e320(puVar16);
  _objc_release(puVar16);
  return dVar20 + dVar24;
}



/* Entry: 108e83a64; end: 108e83d9f; -[SCStickerPillView _adjustLabelCenterYWithFormat:] */

double FUN_108e83a64(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010beb35c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c087500(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    func_0x00010c099280(param_4);
    dVar12 = param_1;
    func_0x00010c099280(uVar2);
    dVar12 = param_1 / dVar12;
    dVar13 = dVar12;
    func_0x00010c1bdc00(puVar3);
    param_1 = 0.0;
    dVar10 = 0.0;
    dVar9 = 1.0;
    if (0.0 < dVar12) {
      func_0x00010c099280(uVar2);
      dVar9 = dVar13;
      func_0x00010c099280(uVar2);
      dVar10 = (dVar12 * dVar13 - dVar9) * 0.5;
      dVar9 = dVar12;
    }
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar1 = param_2;
    func_0x00010c087500(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uStack_b0 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar3;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a8,&uStack_b8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar4,param_3,uVar5,puVar7);
    uVar8 = param_2;
    func_0x00010c087500(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0def20();
    _objc_release(uVar1);
    if (uVar5 == 1) {
      _objc_retain(uVar2);
      func_0x00010c099280(uVar2);
      dVar11 = dVar9 * dVar10;
      func_0x00010c08dd20(uVar2);
      _objc_release(uVar2);
      dVar12 = dVar9;
      FUN_108e83da0(uVar2);
      dVar13 = dVar12;
      _objc_retain(uVar2);
      func_0x00010c099280(uVar2);
      dVar14 = dVar9 * dVar13;
      func_0x00010c08dd20(uVar2);
      FUN_108e83da0(uVar2);
      dVar13 = (dVar14 + (dVar14 + dVar13) * 0.0) - dVar9;
      func_0x00010bf6e320(uVar2);
      _objc_release(uVar2);
      param_1 = (dVar11 + (dVar11 + dVar10) * 0.0) * 0.5 - (dVar12 + (dVar9 + dVar13) * 0.5);
    }
    func_0x00010c087560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181140(param_1);
    _objc_release(param_2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar12 = param_1;
  _objc_retain();
  func_0x00010c099280(param_4);
  param_1 = param_1 * dVar12;
  func_0x00010bf2f960(param_4);
  param_1 = param_1 - dVar12;
  func_0x00010bf6e320(param_4);
  _objc_release(param_4);
  return param_1 + dVar12;
}



/* Entry: 108e83da0; end: 108e83dfb;  */

double FUN_108e83da0(double param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain();
  func_0x00010c099280(param_2);
  param_1 = param_1 * dVar1;
  func_0x00010bf2f960(param_2);
  param_1 = param_1 - dVar1;
  func_0x00010bf6e320(param_2);
  _objc_release(param_2);
  return param_1 + dVar1;
}



/* Entry: 108e83dfc; end: 108e83e3b; -[SCStickerPillView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e83dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cbd8);
  *(undefined8 *)(param_1 + _DAT_11277cbd8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed8af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFromViewModel_112593c60);
  return;
}



/* Entry: 108e83e3c; end: 108e83e5f; -[SCStickerPillView _updateFromViewModel] */

void FUN_108e83e3c(undefined8 param_1)

{
  func_0x00010bed95a0();
                    /* WARNING: Could not recover jumptable at 0x00010c28add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateText_112680598);
  return;
}



/* Entry: 108e83e60; end: 108e84093; -[SCStickerPillView _updateIconImage] */

void FUN_108e83e60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe59c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0fd960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bfe5c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bec20();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar4 = param_1;
    func_0x00010bfe5c00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      lVar1 = param_1;
      func_0x00010bfe5c00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b4860;
      func_0x00010c29d560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60(puVar6,param_2,lVar3,5);
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc0000000;
      pcStack_58 = FUN_108e84094;
      puStack_50 = &UNK_110958128;
      lStack_48 = lVar2;
      func_0x00010c1cc220(lVar1,param_2,puVar6,&puStack_68,0);
      _objc_release(puVar6);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(lVar1);
      return;
    }
  }
  func_0x00010bfe5c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e84094; end: 108e8409f;  */

void FUN_108e84094(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_imageWithRenderingMode__1125d7f90,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e840a0; end: 108e8416f; -[SCStickerPillView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e840a0(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  puVar2 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  lVar6 = (long)_DAT_11277cbd8;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0fd960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0fbe80(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe59c0(uVar5);
  func_0x00010c051400(puVar2,param_2,ppuVar1,0,uVar3,uVar4,uVar5);
  func_0x00010c2226c0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010c28adc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 108e84170; end: 108e843f7; -[SCStickerPillView updateText] */

void FUN_108e84170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c0876c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb5b40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beb35c0();
  if ((int)uVar1 == 0) {
    uVar1 = uVar3;
    func_0x00010c22dc60();
    func_0x000107c30a88();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfb3e60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c087500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010c07e280();
    uVar1 = param_1;
    func_0x00010c087500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
  }
  else {
    func_0x000107c30a88();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfb3e60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c087500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfb61e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c07e280();
  uVar4 = 0x4028000000000000;
  if ((int)uVar1 == 0) {
    uVar4 = 0x4031000000000000;
  }
  uVar1 = param_1;
  func_0x00010bfe5880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c07e280();
  uVar4 = 0xc02e000000000000;
  if ((int)uVar1 == 0) {
    uVar4 = 0xc03e000000000000;
  }
  uVar1 = param_1;
  func_0x00010c087840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(uVar4);
  _objc_release(uVar1);
  func_0x00010bdc93e0(param_1,param_2,uVar3);
  func_0x00010c069fa0(param_1);
  func_0x00010c1cbe20(param_1);
  func_0x00010c23d620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108e843f8; end: 108e84457; -[SCStickerPillView setImageDownloader:] */

void FUN_108e843f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe5c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed95b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateIconImage_112593f10);
  return;
}



/* Entry: 108e84458; end: 108e8449b; -[SCStickerPillView imageDownloader] */

void FUN_108e84458(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe5c00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e8449c; end: 108e844eb; -[SCStickerPillView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8449c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (param_3 == lVar1) {
    return;
  }
  *(long *)(param_1 + _DAT_11277cbdc) = param_3;
  func_0x00010c28adc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStyle_112595e30);
  return;
}



/* Entry: 108e844ec; end: 108e8451f; -[SCStickerPillView _updateStyle] */

void FUN_108e844ec(undefined8 param_1)

{
  func_0x00010bed39e0();
  func_0x00010bedfcc0(param_1);
  func_0x00010bee1d40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateIconColor_112593ef8);
  return;
}



/* Entry: 108e84520; end: 108e84627; -[SCStickerPillView _updateBackground] */

/* WARNING: Possible PIC construction at 0x000108e8454c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e84550) */
/* WARNING: Removing unreachable block (ram,0x000108e84594) */
/* WARNING: Removing unreachable block (ram,0x000108e8460c) */
/* WARNING: Removing unreachable block (ram,0x000108e8459c) */
/* WARNING: Removing unreachable block (ram,0x000108e845a4) */
/* WARNING: Removing unreachable block (ram,0x000108e84574) */
/* WARNING: Removing unreachable block (ram,0x000108e845d0) */
/* WARNING: Removing unreachable block (ram,0x000108e84578) */
/* WARNING: Removing unreachable block (ram,0x000108e845c0) */
/* WARNING: Removing unreachable block (ram,0x000108e84580) */
/* WARNING: Removing unreachable block (ram,0x000108e845e4) */
/* WARNING: Removing unreachable block (ram,0x000108e845f0) */
/* WARNING: Removing unreachable block (ram,0x000108e84610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e84520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cbe4),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108e84628; end: 108e846c7; -[SCStickerPillView _updateShadows] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e84628(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + _DAT_11277cbdc) - 1U & 0xfffffffffffffffd) != 0) {
    uVar1 = 0x3f0ccccd;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277cbf0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277cbec);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e846c8; end: 108e8477b; -[SCStickerPillView _updateTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e846c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  lVar2 = *(long *)(param_1 + _DAT_11277cbdc);
  if (lVar2 < 2) {
    if (lVar2 == 0) goto LAB_108e8473c;
    if (lVar2 != 1) goto LAB_108e84758;
    uVar1 = 0x1b1e22;
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 == 3) {
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_108e84758;
    }
LAB_108e8473c:
    uVar1 = 0xffffff;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_108e84758:
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11277cbf0),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108e8477c; end: 108e8483f; -[SCStickerPillView _updateIconColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8477c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  lVar2 = *(long *)(param_1 + _DAT_11277cbdc);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if (lVar2 != 1) goto LAB_108e8481c;
      uVar1 = 0x1b1e22;
LAB_108e8480c:
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e8481c;
    }
    uVar1 = 0xa1;
  }
  else {
    if (lVar2 == 2) {
      uVar1 = 0xffffff;
      goto LAB_108e8480c;
    }
    if (lVar2 != 3) goto LAB_108e8481c;
    uVar1 = 0xd5;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_108e8481c:
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11277cbec),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}


