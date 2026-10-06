/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e6bac0; end: 108e6bbb3; -[SCStickerTopicPickerViewController scrollViewDidScroll:] */

void FUN_108e6bac0(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0df2a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 != 0) {
    func_0x00010bf4cdc0(param_5);
    func_0x00010bf4c7c0(param_5);
    param_2 = param_2 + param_1;
    uVar1 = param_3;
    func_0x00010beebe20(param_2);
    if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010beebe40(param_2), (int)uVar1 != 0)) {
      puVar4 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar4);
    }
    func_0x00010c1b7940(param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e6bbb4; end: 108e6bbd7; -[SCStickerTopicPickerViewController _yOffsetIsOnCenterOfRow:] */

bool FUN_108e6bbb4(double param_1)

{
  _fmod(param_1,0x4053800000000000);
  return param_1 == 0.0;
}



/* Entry: 108e6bbd8; end: 108e6bc5b; -[SCStickerTopicPickerViewController _yOffsetPassedCenterOfRowSinceLastCheck:] */

bool FUN_108e6bbd8(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  func_0x00010c088580();
  uVar2 = param_2;
  func_0x00010beebe20();
  func_0x00010c088580(param_2);
  func_0x00010be97ae0(param_2);
  func_0x00010be97ae0(param_2);
  if (((int)uVar2 == 0) || (1.0 <= ABS(param_1 - dVar3))) {
    bVar1 = (long)dVar3 != (long)param_1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108e6bc5c; end: 108e6bc6b; -[SCStickerTopicPickerViewController _rowFloatForYOffset:] */

double FUN_108e6bc5c(double param_1)

{
  return param_1 / 78.0;
}



/* Entry: 108e6bc6c; end: 108e6bcef; -[SCStickerTopicPickerViewController _highlightedRow] */

long FUN_108e6bc6c(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf4cdc0(uVar2);
  func_0x00010bf4c7c0(uVar2);
  param_2 = param_2 + param_1;
  func_0x00010be97ae0(param_2,param_3);
  _objc_release(uVar2);
  return (long)param_2;
}



/* Entry: 108e6bcf0; end: 108e6bd0f; -[SCStickerTopicPickerViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6bcf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e6bd10; end: 108e6bd23; -[SCStickerTopicPickerViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6bd10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277c868,param_3);
  return;
}



/* Entry: 108e6bd24; end: 108e6bd33; -[SCStickerTopicPickerViewController topics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6bd24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c85c);
}



/* Entry: 108e6bd34; end: 108e6bd3f; -[SCStickerTopicPickerViewController setTopics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6bd34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e6bd40; end: 108e6bd4f; -[SCStickerTopicPickerViewController emptyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6bd40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c86c);
}



/* Entry: 108e6bd50; end: 108e6bd8f; -[SCStickerTopicPickerViewController setEmptyView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6bd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c86c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6bd90; end: 108e6bd9f; -[SCStickerTopicPickerViewController pickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6bd90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c870);
}



/* Entry: 108e6bda0; end: 108e6bddf; -[SCStickerTopicPickerViewController setPickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6bda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c870;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6bde0; end: 108e6bdef; -[SCStickerTopicPickerViewController lastCheckedYOffsetForHaptics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6bde0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c860);
}



/* Entry: 108e6bdf0; end: 108e6bdff; -[SCStickerTopicPickerViewController setLastCheckedYOffsetForHaptics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6bdf0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c860) = param_1;
  return;
}



/* Entry: 108e6be00; end: 108e6be0f; -[SCStickerTopicPickerViewController state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6be00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c864);
}



/* Entry: 108e6be10; end: 108e6be1f; -[SCStickerTopicPickerViewController setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6be10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277c864) = param_3;
  return;
}



/* Entry: 108e6be20; end: 108e6be7b; -[SCStickerTopicPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6be20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c870,0);
  _objc_storeStrong(param_1 + _DAT_11277c86c,0);
  _objc_storeStrong(param_1 + _DAT_11277c85c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c868);
  return;
}



/* Entry: 108e6be7c; end: 108e6bf53;  */

void FUN_108e6be7c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  func_0x00010bfb68e0(param_3);
  dVar2 = param_1;
  func_0x00010c247ac0(param_3);
  _CGRectGetMidX();
  param_1 = param_1 + dVar2 + -26.0;
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  uVar3 = 0x404a000000000000;
  uVar4 = 0x403c000000000000;
  func_0x00010c19f0e0(param_1,param_2,0x404a000000000000,0x403c000000000000);
  func_0x00010c247ac0(param_3);
  _objc_release(param_3);
  func_0x00010c207040(param_1 - (dVar2 + -26.0),param_2,uVar3,uVar4,uVar1);
  func_0x00010c1db6a0(0,uVar1);
  func_0x00010c1677c0(0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e6bf54; end: 108e6bf5f; +[SCTopicStickerPickerReusableView reuseIdentifier] */

undefined ** FUN_108e6bf54(void)

{
  return &PTR____CFConstantStringClassReference_110efc698;
}



/* Entry: 108e6bf60; end: 108e6bf6b; +[SCTopicStickerPickerReusableView preferredHeight] */

undefined8 FUN_108e6bf60(void)

{
  return 0x406d800000000000;
}



/* Entry: 108e6bf6c; end: 108e6c137; -[SCTopicStickerPickerReusableView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e6bf6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fec80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c874);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c874) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf14180(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277c878;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c87c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c87c) = puVar2;
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c880);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c880) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf0a1e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e6c138; end: 108e6c2eb; -[SCTopicStickerPickerReusableView updateWithTopicsInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6c138(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0fbba0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    _objc_release(lVar1);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126dc398;
      _objc_alloc_init();
      uVar5 = *(undefined8 *)(param_1 + _DAT_11277c884);
      *(undefined **)(param_1 + _DAT_11277c884) = puVar2;
      _objc_release(uVar5);
      lVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0fbba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0fbba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar1,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      func_0x00010c1cbe20(param_1);
    }
    lVar1 = param_1;
    func_0x00010c0fbba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c2759e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cf20(lVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c0fbba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
  lVar3 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e6c2ec; end: 108e6c34f; -[SCTopicStickerPickerReusableView layoutSubviews] */

void FUN_108e6c2ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be48be0();
  func_0x00010be48d80(param_1);
  func_0x00010be49a00(param_1);
  func_0x00010be49080(param_1);
  func_0x00010be49480(param_1);
  puStack_28 = PTR_PTR_1126fec80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 108e6c350; end: 108e6c423; -[SCTopicStickerPickerReusableView _layoutArrow] */

void FUN_108e6c350(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar1 = param_3;
  func_0x00010bf0a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar3 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf0a1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  func_0x00010c247ac0(param_3);
  _CGRectGetMidX();
  func_0x00010bf0a1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar3 + param_1 * -0.5,0,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e6c424; end: 108e6c4d3; -[SCTopicStickerPickerReusableView _layoutBackgroundImage] */

void FUN_108e6c424(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x00010bf0a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf14180(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0xbffaa7ef9db22d0e,param_1 + -1.666,param_3 + 3.332,
                      (param_4 - (param_1 + -1.666)) + 1.666);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e6c4d4; end: 108e6c567; -[SCTopicStickerPickerReusableView _layoutWindowView] */

void FUN_108e6c4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x00010bf14180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectInset();
  _objc_release(uVar1);
  func_0x00010c2a7360(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e6c568; end: 108e6c5ff; -[SCTopicStickerPickerReusableView _layoutContentView] */

void FUN_108e6c568(double param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010bfaef60();
  dVar2 = param_1;
  func_0x00010bfb68e0(param_5);
  uVar1 = param_5;
  func_0x00010c2a7360(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1 - dVar2,0,param_3,param_4 - param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e6c600; end: 108e6c69b; -[SCTopicStickerPickerReusableView _layoutPickerView] */

void FUN_108e6c600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar1);
  func_0x00010c0fbba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e6c69c; end: 108e6c7b7; -[SCTopicStickerPickerReusableView applyLayoutAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6c69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126dbc88;
  _objc_opt_class(PTR_PTR_1126dbc88);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)(param_5 + _DAT_11277c888);
    _objc_retain(param_7);
    func_0x00010c247ac0(param_7);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1 = (undefined8 *)(param_5 + _DAT_11277c88c);
    func_0x00010bfaef60(param_7);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    func_0x00010c0fb9a0(param_7);
    _objc_release(param_7);
    lVar4 = param_5;
    func_0x00010c0fbba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c08cdc0(param_5);
  }
  puStack_48 = PTR_PTR_1126fec80;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_applyLayoutAttributes__112527ed0,param_7);
  _objc_release(param_7);
  return;
}



/* Entry: 108e6c7b8; end: 108e6c823; -[SCTopicStickerPickerReusableView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6c7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277c890;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c0fbba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e6c824; end: 108e6c843; -[SCTopicStickerPickerReusableView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6c824(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e6c844; end: 108e6c853; -[SCTopicStickerPickerReusableView windowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6c844(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c878);
}



/* Entry: 108e6c854; end: 108e6c863; -[SCTopicStickerPickerReusableView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6c854(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c87c);
}



/* Entry: 108e6c864; end: 108e6c873; -[SCTopicStickerPickerReusableView backgroundImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6c864(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c874);
}



/* Entry: 108e6c874; end: 108e6c883; -[SCTopicStickerPickerReusableView arrowImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6c874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c880);
}



/* Entry: 108e6c884; end: 108e6c893; -[SCTopicStickerPickerReusableView pickerVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6c884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c884);
}



/* Entry: 108e6c894; end: 108e6c8ab; -[SCTopicStickerPickerReusableView sourceRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6c894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c888);
}



/* Entry: 108e6c8ac; end: 108e6c8c3; -[SCTopicStickerPickerReusableView finalFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6c8ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c88c);
}



/* Entry: 108e6c8c4; end: 108e6c93f; -[SCTopicStickerPickerReusableView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6c8c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c884,0);
  _objc_storeStrong(param_1 + _DAT_11277c880,0);
  _objc_storeStrong(param_1 + _DAT_11277c874,0);
  _objc_storeStrong(param_1 + _DAT_11277c87c,0);
  _objc_storeStrong(param_1 + _DAT_11277c878,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c890);
  return;
}



/* Entry: 108e6c940; end: 108e6ca0b; +[SCCheckInOption venuesFromSOJUVenues:] */

void FUN_108e6c940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108e6ca0c;
  puStack_30 = &UNK_110ac7658;
  puStack_28 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e6ca0c; end: 108e6ca7b;  */

void FUN_108e6ca0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bab18;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c041140();
  _objc_release(param_2);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e6ca7c; end: 108e6ca83; -[SCCheckInOption initWithSOJUVenue:] */

void FUN_108e6ca7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c041150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithSOJUVenue_rank__1125ede50,param_3,0);
  return;
}



/* Entry: 108e6ca84; end: 108e6ccb7; -[SCCheckInOption initWithSOJUVenue:rank:] */

undefined8
FUN_108e6ca84(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar4 = param_3;
  if (puVar2 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar2 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      uVar8 = 0;
    }
    else {
      func_0x00010c09e300();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(param_3);
      puVar4 = PTR_PTR_1126bab10;
      if (puVar3 == (undefined *)0x0) {
        uVar8 = 0;
        goto LAB_108e6cc7c;
      }
      puVar1 = param_3;
      func_0x00010bf33060(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010bfe5be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010c09e300(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010c072760(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf1f3c0();
      func_0x00010c298180(puVar4,param_2,puVar2,puVar3,puVar5,(uint)puVar7 ^ 1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = param_3;
      func_0x00010c297e20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c0d4f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bb80(param_1,param_2,puVar1,puVar2,param_4,puVar4,1,0,0);
      _objc_retain();
      uVar8 = param_1;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
LAB_108e6cc7c:
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar8;
}



/* Entry: 108e6ccb8; end: 108e6cd1b; -[SCCheckInOption _categoryAtIndex:categories:] */

void FUN_108e6ccb8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = param_4;
    func_0x00010c0dfd40(param_4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e6cd1c; end: 108e6cdcb; +[SCVenueStickerView placeholderVenueWithTitle:] */

void FUN_108e6cd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bab10;
  _objc_retain(param_3);
  func_0x00010c298180(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea5d8,0,param_3,1,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bab18;
  _objc_alloc(PTR_PTR_1126bab18);
  func_0x00010c01bb80();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e6cdcc; end: 108e6d05f; -[SCVenueStickerView initWithVenueStyle:] */

undefined8 FUN_108e6cdcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_PTR_1126bab40;
  if (param_3 == 0) {
    uVar10 = 0;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    func_0x00010bdc12e0(puVar2,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c297b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bab10;
    lVar3 = lVar1;
    func_0x00010bf33060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bfe5be0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c09e300(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c072760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298180(puVar8,param_2,lVar4,lVar5,lVar6,lVar7 == 0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126bab18;
    _objc_alloc(PTR_PTR_1126bab18);
    lVar3 = lVar1;
    func_0x00010c297e20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0d4f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bb80(puVar9,param_2,lVar3,lVar4,0,puVar8,1,0,0);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar8);
    lVar3 = param_3;
    func_0x00010c297b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar8 = PTR_PTR_1126c0e50;
    _objc_alloc(PTR_PTR_1126c0e50);
    lVar4 = lVar3;
    func_0x00010c297e20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0d4f60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036540(puVar8,param_2,lVar4,lVar5,1,1,0);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c060740(param_1,param_2,puVar9,(ulong)puVar2 & 0xffffffff,0,puVar8);
    _objc_retain();
    _objc_release(puVar8);
    _objc_release(lVar3);
    _objc_release(puVar9);
    _objc_release(lVar1);
    uVar10 = param_1;
  }
  _objc_release(param_1);
  return uVar10;
}



/* Entry: 108e6d060; end: 108e6d06f; -[SCVenueStickerView initWithVenue:placeTag:] */

void FUN_108e6d060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithVenue_viewType_pillType__1125f5be0,param_3,2,0,param_4);
  return;
}



/* Entry: 108e6d070; end: 108e6d0f7; -[SCVenueStickerView initForStickerPickerWithInteractiveStickerPillType:] */

undefined8 FUN_108e6d070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bb2f0;
  uVar1 = param_1;
  func_0x000109201bb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fdb00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060740(param_1,param_2,puVar2,2,param_3,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e6d0f8; end: 108e6d407; -[SCVenueStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e6d0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fec88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0fd520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11277c894;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x000108e6d2d8();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c898);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c898) = uVar3;
    _objc_release(uVar6);
    uVar3 = uVar2;
    FUN_108e6d408();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c89c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c89c) = uVar3;
    _objc_release(uVar6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c8a0) = 0;
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c8a4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c8a4) = puVar4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c8a8) = 1;
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar5 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c8ac);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c8ac) = puVar5;
    _objc_release(uVar3);
    func_0x00010c27dd80(uVar2);
    func_0x00010c222da0(puVar1);
    func_0x00010c08cdc0(*(undefined8 *)((long)puVar1 + (long)_DAT_11277c8b0));
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e6d408; end: 108e6d4eb;  */

void FUN_108e6d408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0fd0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe2ee0();
  uVar3 = uVar1;
  func_0x00010c0b5940(uVar1);
  func_0x000107c30948(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c0e50;
  _objc_alloc(PTR_PTR_1126c0e50);
  uVar1 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c036540(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e6d4ec; end: 108e6d603; -[SCVenueStickerView updateWithItemInstance:venueIsFromSearch:venueDistanceFromSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6d4ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fd520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_4);
  uVar1 = uVar2;
  func_0x000108e6d2d8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11277c898);
  *(undefined8 *)(param_2 + _DAT_11277c898) = uVar1;
  _objc_release(uVar3);
  uVar1 = uVar2;
  FUN_108e6d408();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11277c89c);
  *(undefined8 *)(param_2 + _DAT_11277c89c) = uVar1;
  _objc_release(uVar3);
  *(undefined1 *)(param_2 + _DAT_11277c8b4) = param_5;
  *(undefined8 *)(param_2 + _DAT_11277c8b8) = param_1;
  func_0x00010be86b00(param_2);
  func_0x00010c0cc2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e6d604; end: 108e6d7eb; -[SCVenueStickerView initWithVenue:viewType:pillType:placeTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e6d604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fec88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11277c898;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11277c89c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c8a0) = param_5;
    uVar2 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45e40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c894);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277c894) = puVar4;
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c8a4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c8a4) = puVar5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c8a8) = 1;
    puVar5 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar6 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c8ac);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c8ac) = puVar6;
    _objc_release(uVar2);
    func_0x00010c222da0(puVar1);
    func_0x00010c08cdc0(*(undefined8 *)((long)puVar1 + (long)_DAT_11277c8b0));
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e6d7ec; end: 108e6d81f; -[SCVenueStickerView initWithCoder:] */

void FUN_108e6d7ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fec88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 108e6d820; end: 108e6d823; -[SCVenueStickerView encodeWithCoder:] */

void FUN_108e6d820(void)

{
  return;
}



/* Entry: 108e6d824; end: 108e6d847; -[SCVenueStickerView copyWithZone:] */

undefined8 FUN_108e6d824(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e6d848; end: 108e6d853; -[SCVenueStickerView loggingParameters] */

undefined ** FUN_108e6d848(void)

{
  return &PTR__OBJC_CLASS___NSConstantDictionary_1111750a8;
}



/* Entry: 108e6d854; end: 108e6d85f; -[SCVenueStickerView packId] */

undefined ** FUN_108e6d854(void)

{
  return &PTR____CFConstantStringClassReference_110efc718;
}



/* Entry: 108e6d860; end: 108e6d8c3; -[SCVenueStickerView shortLoggingName] */

void FUN_108e6d860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110efc738);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e6d8c4; end: 108e6d8cb; -[SCVenueStickerView stickerId] */

undefined8 FUN_108e6d8c4(void)

{
  return 0;
}



/* Entry: 108e6d8cc; end: 108e6d8db; -[SCVenueStickerView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6d8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c898),PTR_s_title_112679e90);
  return;
}



/* Entry: 108e6d8dc; end: 108e6d92b; -[SCVenueStickerView venueName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6d8dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c898);
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e6d92c; end: 108e6d933; -[SCVenueStickerView toCTPItem] */

undefined8 FUN_108e6d92c(void)

{
  return 0;
}



/* Entry: 108e6d934; end: 108e6d963; -[SCVenueStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6d934(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c894);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e6d964; end: 108e6d96b; -[SCVenueStickerView type] */

undefined8 FUN_108e6d964(void)

{
  return 6;
}



/* Entry: 108e6d96c; end: 108e6d973; -[SCVenueStickerView infoType] */

undefined8 FUN_108e6d96c(void)

{
  return 5;
}



/* Entry: 108e6d974; end: 108e6d99b; -[SCVenueStickerView intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e6d974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277c8b0));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e6d99c; end: 108e6d9bb; -[SCVenueStickerView setViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6d99c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == *(int *)(param_1 + _DAT_11277c8bc)) {
    return;
  }
  *(int *)(param_1 + _DAT_11277c8bc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be86b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__rebuildStickerView_11257f460);
  return;
}



/* Entry: 108e6d9bc; end: 108e6dab7; -[SCVenueStickerView _rebuildStickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6d9bc(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11277c898;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277c8bc;
  lVar5 = param_1;
  func_0x00010be45e40(param_1,param_2,uVar2,uVar3,*(undefined4 *)(param_1 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277c894);
  *(long *)(param_1 + _DAT_11277c894) = lVar5;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)(param_1 + _DAT_11277c8b0) != 0) {
    func_0x00010c12c960();
  }
  uVar1 = *(int *)(param_1 + lVar6) - 1;
  if (uVar1 < 3) {
    func_0x00010beaa1a0(param_1,param_2,*(undefined8 *)(&UNK_10dfa3ba8 + (ulong)uVar1 * 8));
  }
  func_0x00010c0cc2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e6dab8; end: 108e6dbaf; -[SCVenueStickerView _setViewTypeToPillStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6dab8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  lVar4 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0513e0(puVar1,param_2,lVar4,0,*(undefined8 *)(param_1 + _DAT_11277c8a4),
                      *(undefined8 *)(param_1 + _DAT_11277c8a0));
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126d4fb0;
  _objc_alloc();
  func_0x00010c061ce0();
  func_0x00010c20eaa0();
  lVar4 = (long)_DAT_11277c8b0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar3);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c19f0e0(param_1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                      &PTR____CFConstantStringClassReference_110efc758);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e6dbb0; end: 108e6dc43; -[SCVenueStickerView tappableElementBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108e6dbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(0x3fe0000000000000);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + _DAT_11277c8c0;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c298040();
  _objc_release(puVar1);
  return (undefined *)0x1;
}



/* Entry: 108e6dc44; end: 108e6dc87; -[SCVenueStickerView shouldRespondToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6dc44(long param_1)

{
  param_1 = param_1 + _DAT_11277c8c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c298040();
  _objc_release(param_1);
  return 1;
}



/* Entry: 108e6dc88; end: 108e6dcb3; -[SCVenueStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6dc88(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + _DAT_11277c8bc) - 1;
  if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c222db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setViewType__112666590,
               *(undefined4 *)(&UNK_10dfa3bc0 + (ulong)uVar1 * 4));
    return;
  }
  return;
}



/* Entry: 108e6dcb4; end: 108e6dcbb; -[SCVenueStickerView scaleLimit] */

undefined8 FUN_108e6dcb4(void)

{
  return 0;
}



/* Entry: 108e6dcbc; end: 108e6dd5b; -[SCVenueStickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6dcbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c8b0);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,uVar3,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e6dd5c; end: 108e6dd5f; -[SCVenueStickerView didEndDisplay] */

void FUN_108e6dd5c(void)

{
  return;
}



/* Entry: 108e6dd60; end: 108e6dd63; -[SCVenueStickerView willDisplay] */

void FUN_108e6dd60(void)

{
  return;
}



/* Entry: 108e6dd64; end: 108e6df1f; -[SCVenueStickerView _itemInstanceFromVenueId:name:type:] */

void FUN_108e6dd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126dc3a0;
  _objc_opt_new(PTR_PTR_1126dc3a0);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  uVar6 = param_3;
  func_0x000107c3094c(param_3,auStack_68,auStack_70);
  _objc_release(param_3);
  if ((int)uVar6 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar8);
  }
  func_0x00010c1dc3a0(puVar2);
  _objc_release(puVar8);
  func_0x00010c1cafa0(puVar2);
  _objc_release(param_4);
  func_0x00010c21acc0(puVar2);
  func_0x00010c1ac500(puVar4);
  func_0x00010c196600(puVar3);
  func_0x00010c1b5d40(puVar1);
  puVar8 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc880();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e6df20; end: 108e6df2f; -[SCVenueStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e6df20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c8a8);
}



/* Entry: 108e6df30; end: 108e6df3f; -[SCVenueStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6df30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c8a8) = param_3;
  return;
}



/* Entry: 108e6df40; end: 108e6df4f; -[SCVenueStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6df40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c8ac);
}



/* Entry: 108e6df50; end: 108e6df5f; -[SCVenueStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6df50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c894);
}



/* Entry: 108e6df60; end: 108e6df7f; -[SCVenueStickerView interactionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6df60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c8c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e6df80; end: 108e6df93; -[SCVenueStickerView setInteractionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6df80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277c8c0,param_3);
  return;
}



/* Entry: 108e6df94; end: 108e6dfa3; -[SCVenueStickerView config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6df94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c8c4);
}



/* Entry: 108e6dfa4; end: 108e6dfb3; -[SCVenueStickerView venue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6dfa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c898);
}



/* Entry: 108e6dfb4; end: 108e6dfc3; -[SCVenueStickerView placeTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6dfb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c89c);
}



/* Entry: 108e6dfc4; end: 108e6dfd3; -[SCVenueStickerView viewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108e6dfc4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277c8bc);
}



/* Entry: 108e6dfd4; end: 108e6dfe3; -[SCVenueStickerView venueIsFromSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e6dfd4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c8b4);
}



/* Entry: 108e6dfe4; end: 108e6dff3; -[SCVenueStickerView setVenueIsFromSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6dfe4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c8b4) = param_3;
  return;
}



/* Entry: 108e6dff4; end: 108e6e003; -[SCVenueStickerView venueDistanceFromSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6dff4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c8b8);
}



/* Entry: 108e6e004; end: 108e6e013; -[SCVenueStickerView setVenueDistanceFromSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6e004(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c8b8) = param_1;
  return;
}



/* Entry: 108e6e014; end: 108e6e023; -[SCVenueStickerView stickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6e014(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c8b0);
}



/* Entry: 108e6e024; end: 108e6e063; -[SCVenueStickerView setStickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6e024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c8b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6e064; end: 108e6e073; -[SCVenueStickerView pillType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6e064(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c8a0);
}



/* Entry: 108e6e074; end: 108e6e083; -[SCVenueStickerView setPillType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6e074(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277c8a0) = param_3;
  return;
}



/* Entry: 108e6e084; end: 108e6e11f; -[SCVenueStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6e084(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c8b0,0);
  _objc_storeStrong(param_1 + _DAT_11277c89c,0);
  _objc_storeStrong(param_1 + _DAT_11277c898,0);
  _objc_storeStrong(param_1 + _DAT_11277c8c4,0);
  _objc_destroyWeak(param_1 + _DAT_11277c8c0);
  _objc_storeStrong(param_1 + _DAT_11277c894,0);
  _objc_storeStrong(param_1 + _DAT_11277c8ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c8a4,0);
  return;
}



/* Entry: 108e6e120; end: 108e6ea03; -[SCWeatherDailyView initWithFrame:dailyForecasts:temperatureScale:isPreviewSticker:infoStickerViewProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e6e120(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_b0 = PTR_PTR_1126fec90;
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar25 = (long)_DAT_11277c8c8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined8 *)((long)puVar1 + lVar25) = param_10;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11277c8cc;
    *(undefined1 *)((long)puVar1 + lVar26) = param_9;
    lVar22 = (long)_DAT_11277c8d0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(long *)((long)puVar1 + lVar22) = param_7;
    _objc_release(uVar2);
    lVar25 = param_7;
    func_0x00010bf529e0();
    lVar19 = (long)_DAT_11277c8d4;
    *(long *)((long)puVar1 + lVar19) = lVar25;
    dVar27 = 54.0;
    lVar23 = (long)_DAT_11277c8d8;
    *(double *)((long)puVar1 + lVar23) = (double)(lVar25 + -1) * 8.0 + (double)lVar25 * 54.0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar25 = (long)_DAT_11277c8dc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar20 = (long)_DAT_11277c8e0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar21 = (long)_DAT_11277c8e4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar3;
    _objc_release(uVar2);
    dVar29 = 0.0;
    dVar28 = 0.0;
    if ((*(byte *)((long)puVar1 + lVar26) & 1) == 0) {
      func_0x00010bf20c00(puVar1);
      dVar28 = (dVar27 - *(double *)((long)puVar1 + lVar23)) * 0.5;
      dVar29 = (param_4 + -130.0) * 0.5;
    }
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_108e6ea04;
    uStack_c8 = 0x108e6ea14;
    uStack_c0 = 0;
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_108e6ea04;
    uStack_f8 = 0x108e6ea14;
    uStack_f0 = 0;
    puStack_110 = &uStack_118;
    puStack_e0 = &uStack_e8;
    _objc_initWeak(auStack_120,puVar1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_108e6ea1c;
    puStack_138 = &UNK_110850308;
    _objc_copyWeak(auStack_128,auStack_120);
    ppuVar4 = &puStack_150;
    puStack_130 = &uStack_e8;
    _objc_retainBlock();
    puStack_178 = puVar3;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108e6eb20;
    puStack_160 = &UNK_110847658;
    ppuVar5 = &puStack_178;
    puStack_158 = &uStack_118;
    _objc_retainBlock();
    ppuVar6 = ppuVar5;
    _dispatch_group_create();
    ppuVar7 = ppuVar6;
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb380);
    ppuVar8 = ppuVar7;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar8;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar7;
    func_0x00010bfb3ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = (long)_DAT_11277c8f0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined ***)((long)puVar1 + lVar23) = ppuVar10;
    _objc_release(uVar2);
    _objc_release(ppuVar9);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    _dispatch_group_enter(ppuVar6);
    uVar24 = *(undefined8 *)((long)puVar1 + lVar23);
    uVar2 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_120);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar4);
    _objc_retain(ppuVar6);
    func_0x00010c09b520(uVar24);
    _objc_release(uVar2);
    _dispatch_group_enter(ppuVar6);
    uVar24 = *(undefined8 *)((long)puVar1 + lVar23);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar5);
    _objc_retain(ppuVar6);
    func_0x00010c09b520(uVar24);
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_time(0,500000000);
    ppuVar7 = ppuVar6;
    _dispatch_group_wait(ppuVar6,uVar2);
    if (ppuVar7 != (undefined **)0x0) {
      (*(code *)ppuVar4[2])();
      (*(code *)ppuVar5[2])();
    }
    if (0 < *(long *)((long)puVar1 + lVar19)) {
      lVar23 = 0;
      uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      do {
        uVar11 = *(undefined8 *)((long)puVar1 + lVar22);
        func_0x00010c0dfd40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
        func_0x00010c013de0(uVar2,uVar24,uVar30,uVar31);
        uVar12 = uVar11;
        func_0x00010c2a2c40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar1;
        func_0x00010be37360(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(puVar3);
        _objc_release(puVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        func_0x00010befbb60(puVar1);
        func_0x00010c19f0e0(dVar28,dVar29,0x404b000000000000,0x4060400000000000,puVar3);
        puVar15 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
        func_0x00010c013de0(uVar2,uVar24,uVar30,uVar31);
        uVar12 = uVar11;
        func_0x00010bf86680(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(puVar15);
        _objc_release(uVar12);
        func_0x00010c19e480(puVar15);
        puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(puVar15);
        _objc_release(puVar16);
        func_0x00010c23d620(puVar15);
        func_0x00010befbb60(puVar1);
        func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar25));
        puVar16 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
        func_0x00010c013de0(uVar2,uVar24,uVar30,uVar31);
        func_0x00010c19e480();
        puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(puVar16);
        _objc_release(puVar17);
        func_0x00010c1677c0(0x3fe999999999999a,puVar16);
        func_0x00010befbb60(puVar1);
        func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar20));
        puVar17 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
        func_0x00010c013de0(uVar2,uVar24,uVar30,uVar31);
        func_0x00010c19e480();
        puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(puVar17);
        _objc_release(puVar18);
        func_0x00010befbb60(puVar1);
        func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar21));
        dVar28 = dVar28 + 62.0;
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar3);
        _objc_release(uVar11);
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(long *)((long)puVar1 + lVar19));
    }
    func_0x00010c28c0c0(puVar1);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_180);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_120);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108e6ea04; end: 108e6ea1b;  */

void FUN_108e6ea04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e6ea1c; end: 108e6eb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6ea1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x403c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                        &PTR____CFConstantStringClassReference_110efb098);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    dVar5 = 15.0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                        &PTR____CFConstantStringClassReference_110efb098);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11277c8e8;
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
    *(undefined **)(lVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf2f960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    dVar6 = dVar5;
    func_0x00010bf2f960(*(undefined8 *)(lVar1 + lVar4));
    func_0x00010c0df720(dVar5 - dVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11277c8ec);
    *(undefined **)(lVar1 + _DAT_11277c8ec) = puVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


