/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e461a8; end: 108e4625f; -[SCEyeDropperColorPickerView _getScreenshotColorInLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e461a8(double param_1,double param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(long *)(param_3 + _DAT_11277c3d4) != 0) {
    uVar2 = *(int *)(param_3 + _DAT_11277c3cc) - 1;
    if ((int)param_1 <= (int)uVar2) {
      uVar2 = (int)param_1;
    }
    uVar3 = *(int *)(param_3 + _DAT_11277c3d0) - 1;
    if ((int)param_2 <= (int)uVar3) {
      uVar3 = (int)param_2;
    }
    pbVar1 = (byte *)(*(long *)(param_3 + _DAT_11277c3d4) +
                     (long)(int)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) +
                                (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) *
                                *(int *)(param_3 + _DAT_11277c3cc)) * 4);
    dVar4 = (double)NEON_ucvtf((ulong)pbVar1[3]);
    dVar5 = (double)NEON_ucvtf((ulong)pbVar1[2]);
    dVar6 = (double)NEON_ucvtf((ulong)pbVar1[1]);
    dVar7 = (double)NEON_ucvtf((ulong)*pbVar1);
    func_0x00010bf41620(dVar4 / 255.0,dVar5 / 255.0,dVar6 / 255.0,dVar7 / 255.0,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e46260; end: 108e4639b; -[SCEyeDropperColorPickerView _generateImageBitmap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46260(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = param_3;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    if (uVar2 != 0) {
      func_0x00010bdf8540(param_1);
      uVar2 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      _CGImageGetWidth();
      uVar3 = param_3;
      _objc_retainAutorelease();
      iVar1 = (int)uVar3;
      func_0x00010bdc1020();
      _CGImageGetHeight();
      iVar7 = (int)uVar2;
      lVar4 = (long)(iVar7 * iVar1 * 4);
      _calloc(lVar4,1);
      lVar5 = lVar4;
      _CGColorSpaceCreateDeviceRGB();
      lVar6 = lVar4;
      _CGBitmapContextCreate
                (lVar4,(long)iVar7,(long)iVar1,8,
                 -(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2,lVar5,0x2001)
      ;
      _CGColorSpaceRelease(lVar5);
      uVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc1020();
      _CGContextDrawImage(0,0,(double)iVar7,(double)iVar1,lVar6,uVar2);
      _CGContextRelease(lVar6);
      *(long *)(param_1 + _DAT_11277c3d4) = lVar4;
      *(int *)(param_1 + _DAT_11277c3d0) = iVar1;
      *(int *)(param_1 + _DAT_11277c3cc) = iVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e4639c; end: 108e463f7; -[SCEyeDropperColorPickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4639c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c3c8,0);
  _objc_storeStrong(param_1 + _DAT_11277c3c4,0);
  _objc_destroyWeak(param_1 + _DAT_11277c3c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c3bc,0);
  return;
}



/* Entry: 108e463f8; end: 108e4645f; -[SCPreviewToolbarColorPickerViewImpl initWithColorPickerVersion:paletteType:] */

undefined1 * FUN_108e463f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126feb08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1460(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e46460; end: 108e46487; +[SCPreviewToolbarColorPickerViewImpl createSingularColorPickerView] */

void FUN_108e46460(void)

{
  _objc_alloc(PTR_PTR_1126dba78);
  func_0x00010bfffc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e46488; end: 108e464bb; +[SCPreviewToolbarColorPickerViewImpl createPalettedColorPickerViewWithPaletteType:] */

void FUN_108e46488(void)

{
  _objc_alloc(PTR_PTR_1126dba78);
  func_0x00010bfffc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e464bc; end: 108e46743; -[SCPreviewToolbarColorPickerViewImpl _setupViewWithColorPickerVersion:paletteType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e464bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126dc250;
  if (param_3 == 0) {
    func_0x00010bf552a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 1) {
      lVar4 = (long)_DAT_11277c3dc;
      goto LAB_108e46534;
    }
    func_0x00010bf57740(PTR_PTR_1126dc250,param_2,param_4,0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = (long)_DAT_11277c3dc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
LAB_108e46534:
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c222680(param_1,param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0(puVar1);
  func_0x00010c181a20(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar4 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(uVar3);
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c17f940(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf431e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar4);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010bf431e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf431e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  lVar4 = param_1;
  func_0x00010bf431e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf431e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e46744; end: 108e4679f; -[SCPreviewToolbarColorPickerViewImpl sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e46744(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x00010c29d520();
  if (lVar1 == 1) {
    func_0x00010c23d5a0(param_1,param_2,*(undefined8 *)(param_3 + _DAT_11277c3dc));
  }
  return 0x4046000000000000;
}



/* Entry: 108e467a0; end: 108e46a4f; -[SCPreviewToolbarColorPickerViewImpl layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e467a0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126feb08;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar5 = (long)_DAT_11277c3dc;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf8ab40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  dVar9 = param_1;
  dVar7 = param_2;
  _objc_release(uVar2);
  func_0x00010c112660(param_5);
  dVar6 = dVar9;
  dVar8 = dVar7;
  func_0x00010bf20c00(param_5);
  bVar1 = false;
  if ((dVar9 == param_3) && (bVar1 = false, !NAN(dVar7) && !NAN(param_4))) {
    bVar1 = dVar7 == param_4;
  }
  if (!bVar1) {
    func_0x00010bde77e0(param_5);
    lVar3 = param_5;
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(dVar6,dVar8,param_3,param_4);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bf431e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 30.0;
    uVar2 = 0x403e000000000000;
    func_0x00010c1739e0(0,0,0x403e000000000000,0x403e000000000000);
    _objc_release(lVar3);
    func_0x00010bf20c00(param_5);
    func_0x00010c1e2520(dVar9,uVar2,param_5);
    lVar3 = param_5;
    func_0x00010c29d520();
    lVar4 = param_5;
    if (lVar3 == 1) {
      func_0x00010bf4b2a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMidX();
      param_2 = dVar9;
      func_0x00010bf8ab20(*(undefined8 *)(param_5 + lVar5));
    }
    else {
      if (lVar3 != 0) goto LAB_108e46958;
      func_0x00010bf4b2a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMidX();
      lVar3 = param_5;
      param_2 = dVar9;
      func_0x00010bf4b2a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMidY();
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
    param_1 = dVar9;
  }
LAB_108e46958:
  lVar3 = param_5;
  func_0x00010bf431e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(lVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  lVar3 = param_5;
  dVar9 = param_1;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  lVar4 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,dVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar3);
  return;
}



/* Entry: 108e46a50; end: 108e46b3b; -[SCPreviewToolbarColorPickerViewImpl hitTest:withEvent:] */

void FUN_108e46a50(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  puStack_48 = PTR_PTR_1126feb08;
  puStack_50 = param_3;
  _objc_msgSendSuper2(&puStack_50,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c29d520();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(param_1,param_2,param_3);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010be24500(param_1,param_2);
    if ((int)puVar2 != 0) {
      func_0x00010bf431e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e46b18;
    }
  }
  _objc_retain(ppuVar1);
  param_3 = (undefined1 *)ppuVar1;
LAB_108e46b18:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108e46b3c; end: 108e46bab; -[SCPreviewToolbarColorPickerViewImpl animateViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46b3c(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126feb08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_animateViews__11259e668);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c3dc);
  func_0x00010bde1fa0(param_1);
  func_0x00010bf02d40(uVar1);
  return;
}



/* Entry: 108e46bac; end: 108e46c73; -[SCPreviewToolbarColorPickerViewImpl onPreAnimateForViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46bac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126feb08;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_onPreAnimateForViews__1126170e8);
  lVar2 = (long)_DAT_11277c3dc;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bde1fa0(param_3);
  func_0x00010c2a57e0(uVar1);
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bf8ab40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010bf431e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 108e46c74; end: 108e46ce3; -[SCPreviewToolbarColorPickerViewImpl onPostAnimateForViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46c74(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126feb08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_onPostAnimateForViews__1126170d0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c3dc);
  func_0x00010bde1fa0(param_1);
  func_0x00010bf723a0(uVar1);
  return;
}



/* Entry: 108e46ce4; end: 108e46d9b; -[SCPreviewToolbarColorPickerViewImpl setCompactButtonIcon:] */

void FUN_108e46ce4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf431e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar1 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1a9f00(uVar1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108e46d9c; end: 108e46e17; -[SCPreviewToolbarColorPickerViewImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_11277c3e0,param_3);
  if (*(long *)(param_1 + _DAT_11277c3e4) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c273900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e46e18; end: 108e46e83; -[SCPreviewToolbarColorPickerViewImpl moveDropletToCenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c3dc);
  func_0x00010c0d1420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273900();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e46e84; end: 108e46e93; -[SCPreviewToolbarColorPickerViewImpl moveDropletToColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c3dc),PTR_s_moveDropletToColor__112611f28);
  return;
}



/* Entry: 108e46e94; end: 108e46f2b; -[SCPreviewToolbarColorPickerViewImpl _containerViewBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e46e94(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010c29d520();
  if (lVar1 != 0) {
    param_1 = 0x7fefffffffffffff;
    func_0x00010c23d5a0(0x7fefffffffffffff,0x7fefffffffffffff,
                        *(undefined8 *)(param_2 + _DAT_11277c3dc));
  }
  func_0x00010bf20c00(param_2);
  _CGRectGetMinX();
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  return param_1;
}



/* Entry: 108e46f2c; end: 108e46fd7; -[SCPreviewToolbarColorPickerViewImpl _tappedCompactButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46f2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_11277c3e4) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c273900(lVar1,param_2,param_1,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c273900(lVar1,param_2,param_1);
  }
  _objc_release(lVar1);
  func_0x00010c29d540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fbc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e46fd8; end: 108e47063; -[SCPreviewToolbarColorPickerViewImpl _gradientPickerHitTest:] */

void FUN_108e46fd8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar1 + -10.0,dVar2 + -5.0,param_3 + 20.0,param_4 + 15.0,param_1,param_2);
  return;
}



/* Entry: 108e47064; end: 108e4710b; -[SCPreviewToolbarColorPickerViewImpl colorPickerView:didChangeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e47064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11277c3e4;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_4;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273900();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29d520();
  if (lVar2 == 0) {
    func_0x00010c29d540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fbc40();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e4710c; end: 108e4718f; -[SCPreviewToolbarColorPickerViewImpl colorPickerView:didTogglePaletteToType:selectedColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4710c(long param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  
  _objc_retain(in_x4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c3e4);
  *(undefined8 *)(param_1 + _DAT_11277c3e4) = in_x4;
  _objc_retain(in_x4);
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273920();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e47190; end: 108e471cb; -[SCPreviewToolbarColorPickerViewImpl colorPickerViewWillExpandSize:] */

void FUN_108e47190(undefined8 param_1)

{
  func_0x00010c29d540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e471cc; end: 108e47207; -[SCPreviewToolbarColorPickerViewImpl colorPickerViewWillShrinkSize:] */

void FUN_108e471cc(undefined8 param_1)

{
  func_0x00010c29d540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e47208; end: 108e47243; -[SCPreviewToolbarColorPickerViewImpl colorPickerViewWillDragPickerOutsideBounds:] */

void FUN_108e47208(undefined8 param_1)

{
  func_0x00010c29d540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e47244; end: 108e4724f; -[SCPreviewToolbarColorPickerViewImpl _colorPickerViewModeFromPaletteViewMode:] */

bool FUN_108e47244(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 108e47250; end: 108e4726f; -[SCPreviewToolbarColorPickerViewImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e47250(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e47270; end: 108e47283; -[SCPreviewToolbarColorPickerViewImpl previousBoundsSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e47270(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277c3d8);
}



/* Entry: 108e47284; end: 108e47297; -[SCPreviewToolbarColorPickerViewImpl setPreviousBoundsSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e47284(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277c3d8;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108e47298; end: 108e472e3; -[SCPreviewToolbarColorPickerViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e47298(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277c3e0);
  _objc_storeStrong(param_1 + _DAT_11277c3dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c3e4,0);
  return;
}



/* Entry: 108e472e4; end: 108e47353; -[SCPreviewToolBarPickerView init] */

undefined1 * FUN_108e472e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126feb10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(0x3fe0000000000000,0);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e47354; end: 108e474d3; -[SCPreviewToolBarPickerView switchPickerViewMode:withAnimation:withAnimationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e47354(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar4 = &puStack_a0;
  lVar5 = (long)_DAT_11277c3e8;
  if (((*(long *)(param_2 + lVar5) != param_4) && (*(long *)(param_2 + _DAT_11277c3ec) != 0)) &&
     (*(long *)(param_2 + _DAT_11277c3f0) != 0)) {
    *(long *)(param_2 + lVar5) = param_4;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108e474d4;
    puStack_60 = &UNK_110842e18;
    ppuVar3 = &puStack_78;
    lStack_58 = param_2;
    _objc_retainBlock();
    puStack_a0 = puVar2;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108e47510;
    puStack_88 = &UNK_110841f20;
    lStack_80 = param_2;
    _objc_retainBlock();
    lVar5 = *(long *)(param_2 + lVar5);
    func_0x00010c0e5b40(param_2);
    if (param_5 == 0) {
      (*(code *)ppuVar3[2])(ppuVar3);
      (**(code **)((long)ppuVar4 + 0x10))(ppuVar4,1);
    }
    else {
      lVar1 = 8;
      if (lVar5 != 1) {
        lVar1 = 0;
      }
      func_0x00010bf03460((param_1 / 0.4) * 0.4000000059604645,
                          (param_1 / 0.4) * *(double *)(&UNK_10dfa3aa0 + lVar1),0x3fe999999999999a,0
                          ,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  return;
}



/* Entry: 108e474d4; end: 108e4750f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e474d4(long param_1,undefined8 param_2)

{
  func_0x00010bf03300(*(long *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c3e8));
  func_0x00010c23d620(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108e47510; end: 108e4752b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e47510(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s_onPostAnimateForViews__1126170d0,
               *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c3e8));
    return;
  }
  return;
}



/* Entry: 108e4752c; end: 108e4753b; -[SCPreviewToolBarPickerView viewMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4752c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c3e8);
}



/* Entry: 108e4753c; end: 108e47567; -[SCPreviewToolBarPickerView animateViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4753c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_11277c3ec),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e47568; end: 108e475db; -[SCPreviewToolBarPickerView onPreAnimateForViews:] */

void FUN_108e47568(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
    piVar2 = (int *)&DAT_11277c3ec;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar3 = 0x3ff0000000000000;
    piVar2 = (int *)&DAT_11277c3f0;
  }
  iVar1 = *piVar2;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + iVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,*(undefined8 *)(param_1 + iVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e475dc; end: 108e4763b; -[SCPreviewToolBarPickerView onPostAnimateForViews:] */

void FUN_108e475dc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 == 0) {
    piVar2 = (int *)&DAT_11277c3f0;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    piVar2 = (int *)&DAT_11277c3ec;
  }
  iVar1 = *piVar2;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + iVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + iVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e4763c; end: 108e47697; -[SCPreviewToolBarPickerView pointInside:withEvent:] */

void FUN_108e4763c(undefined8 param_1)

{
  func_0x00010c29d520();
  func_0x00010bf20c00(param_1);
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108e47698; end: 108e476b7; -[SCPreviewToolBarPickerView viewModeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e47698(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c3f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e476b8; end: 108e476cb; -[SCPreviewToolBarPickerView setViewModeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e476b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277c3f4,param_3);
  return;
}



/* Entry: 108e476cc; end: 108e476db; -[SCPreviewToolBarPickerView containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e476cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c3f0);
}



/* Entry: 108e476dc; end: 108e4771b; -[SCPreviewToolBarPickerView setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e476dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c3f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e4771c; end: 108e4772b; -[SCPreviewToolBarPickerView compactButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4771c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c3ec);
}



/* Entry: 108e4772c; end: 108e4776b; -[SCPreviewToolBarPickerView setCompactButtonView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4772c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c3ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e4776c; end: 108e4777b; -[SCPreviewToolBarPickerView setViewMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4776c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277c3e8) = param_3;
  return;
}



/* Entry: 108e4777c; end: 108e477c7; -[SCPreviewToolBarPickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4777c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c3ec,0);
  _objc_storeStrong(param_1 + _DAT_11277c3f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c3f4);
  return;
}



/* Entry: 108e477c8; end: 108e4783b; -[SCPreviewFeatureCaptionServices initWithCaption:] */

undefined1 * FUN_108e477c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feb18;
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



/* Entry: 108e4783c; end: 108e47843; -[SCPreviewFeatureCaptionServices caption] */

undefined8 FUN_108e4783c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e47844; end: 108e4784f; -[SCPreviewFeatureCaptionServices .cxx_destruct] */

void FUN_108e47844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e47850; end: 108e4798f; -[SCCaptionDisplayViewParams initWithShouldLayoutForEyewearMedia:shouldLayoutForUserTagging:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:edgeInsets:] */

undefined8 *
FUN_108e47850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126feb20;
  puVar1 = &uStack_80;
  uStack_80 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_5;
    puVar1[8] = param_6;
    puVar1[9] = param_7;
    puVar1[10] = param_8;
    puVar1[0xb] = in_stack_00000000;
    puVar1[0xc] = in_stack_00000008;
    puVar1[0xd] = in_stack_00000010;
    puVar1[0xe] = in_stack_00000018;
    puVar1[0xf] = in_stack_00000020;
    puVar1[0x10] = in_stack_00000028;
    puVar1[0x11] = in_stack_00000030;
    puVar1[0x12] = in_stack_00000038;
  }
  _objc_release(param_13);
  return puVar1;
}



/* Entry: 108e47990; end: 108e479b3; -[SCCaptionDisplayViewParams copyWithZone:] */

undefined8 FUN_108e47990(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e479b4; end: 108e47c2b; -[SCCaptionDisplayViewParams hash] */

ulong * FUN_108e479b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ushort uVar8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = (ulong)*(byte *)(param_1 + 8);
  uStack_b8 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_b0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_a8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_a0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_98 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_88 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_90 = uVar3;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_108e47d30:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e47d34;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    iVar2 = (int)puVar5;
    if (((((ulong)puVar5 & 1) != 0) &&
        (((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9]))
         && (_CGRectEqualToRect((short)*(undefined8 *)((long)puVar4 + 0x18),
                                *(undefined8 *)((long)puVar4 + 0x20),
                                *(undefined8 *)((long)puVar4 + 0x28),
                                *(undefined8 *)((long)puVar4 + 0x30),*(undefined8 *)(param_3 + 0x18)
                                ,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28),
                                *(undefined8 *)(param_3 + 0x30)), iVar2 != 0)))) &&
       ((_CGRectEqualToRect((short)*(undefined8 *)((long)puVar4 + 0x38),
                            *(undefined8 *)((long)puVar4 + 0x40),
                            *(undefined8 *)((long)puVar4 + 0x48),
                            *(undefined8 *)((long)puVar4 + 0x50),*(undefined8 *)(param_3 + 0x38),
                            *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48),
                            *(undefined8 *)(param_3 + 0x50)), iVar2 != 0 &&
        (_CGRectEqualToRect((short)*(undefined8 *)((long)puVar4 + 0x58),
                            *(undefined8 *)((long)puVar4 + 0x60),
                            *(undefined8 *)((long)puVar4 + 0x68),
                            *(undefined8 *)((long)puVar4 + 0x70),*(undefined8 *)(param_3 + 0x58),
                            *(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_3 + 0x68),
                            *(undefined8 *)(param_3 + 0x70)), iVar2 != 0)))) {
      uVar8 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar4 + 0x90) ==
                                           *(double *)(param_3 + 0x90)),
                                  CONCAT24(-(ushort)(*(double *)((long)puVar4 + 0x88) ==
                                                    *(double *)(param_3 + 0x88)),
                                           CONCAT22(-(ushort)(*(double *)((long)puVar4 + 0x80) ==
                                                             *(double *)(param_3 + 0x80)),
                                                    -(ushort)(*(double *)((long)puVar4 + 0x78) ==
                                                             *(double *)(param_3 + 0x78))))),2);
      if ((uVar8 & 1) != 0) {
        puVar7 = *(undefined1 **)((long)puVar4 + 0x10);
        if (puVar7 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108e47d34;
        }
        goto LAB_108e47d30;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_108e47d34:
  _objc_release(param_3);
  return (ulong *)puVar7;
}



/* Entry: 108e47c2c; end: 108e47d4f; -[SCCaptionDisplayViewParams isEqual:] */

long FUN_108e47c2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e47d30:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e47d34;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    iVar1 = (int)uVar3;
    if ((((uVar3 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (_CGRectEqualToRect((short)*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                             *(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),
                             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30)),
         iVar1 != 0)))) &&
       ((_CGRectEqualToRect((short)*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                            *(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40),
                            *(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50)),
        iVar1 != 0 &&
        (_CGRectEqualToRect((short)*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                            *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                            *(undefined8 *)(param_3 + 0x58),*(undefined8 *)(param_3 + 0x60),
                            *(undefined8 *)(param_3 + 0x68),*(undefined8 *)(param_3 + 0x70)),
        iVar1 != 0)))) {
      uVar5 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x90) ==
                                           *(double *)(param_3 + 0x90)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x88) ==
                                                    *(double *)(param_3 + 0x88)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x80) ==
                                                             *(double *)(param_3 + 0x80)),
                                                    -(ushort)(*(double *)(param_1 + 0x78) ==
                                                             *(double *)(param_3 + 0x78))))),2);
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108e47d34;
        }
        goto LAB_108e47d30;
      }
    }
    lVar4 = 0;
  }
LAB_108e47d34:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108e47d50; end: 108e47d57; -[SCCaptionDisplayViewParams shouldLayoutForEyewearMedia] */

undefined1 FUN_108e47d50(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e47d58; end: 108e47d5f; -[SCCaptionDisplayViewParams shouldLayoutForUserTagging] */

undefined1 FUN_108e47d58(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108e47d60; end: 108e47d6b; -[SCCaptionDisplayViewParams originalContentBounds] */

undefined8 FUN_108e47d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e47d6c; end: 108e47d73; -[SCCaptionDisplayViewParams captionCarouselContainerView] */

undefined8 FUN_108e47d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e47d74; end: 108e47d7f; -[SCCaptionDisplayViewParams superviewBounds] */

undefined8 FUN_108e47d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108e47d80; end: 108e47d8b; -[SCCaptionDisplayViewParams superviewContentBounds] */

undefined8 FUN_108e47d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e47d8c; end: 108e47d97; -[SCCaptionDisplayViewParams edgeInsets] */

undefined8 FUN_108e47d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108e47d98; end: 108e47da3; -[SCCaptionDisplayViewParams .cxx_destruct] */

void FUN_108e47d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e47da4; end: 108e4824b; -[SCCaptionStyleSOJUWrapper initWithName:fontName:styleProperty:caps:kerning:leading:borderWidth:shadow:backgroundColor:fontColor:fontPatternImageUrl:fontColorMode:colorChangeable:rotation:effect:regularTypefaceUrl:boldTypefaceUrl:italicsTypefaceUrl:italicsBoldTypefaceUrl:backgroundCornerRadius:fontFamilyName:backgroundImageUrl:displayName:] */

undefined8 *
FUN_108e47da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126feb28;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e4824c; end: 108e4826f; -[SCCaptionStyleSOJUWrapper copyWithZone:] */

undefined8 FUN_108e4824c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e48270; end: 108e483df; -[SCCaptionStyleSOJUWrapper hash] */

undefined8 * FUN_108e48270(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_e0,0x17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108e48658:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e48664;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x48);
                      if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x50);
                        if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x58);
                          if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x60);
                            if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x68);
                              if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x70);
                                if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = *(long *)((long)puVar3 + 0x78);
                                  if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = *(long *)((long)puVar3 + 0x80);
                                    if ((lVar5 == *(long *)(param_3 + 0x80)) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = *(long *)((long)puVar3 + 0x88);
                                      if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = *(long *)((long)puVar3 + 0x90);
                                        if ((lVar5 == *(long *)(param_3 + 0x90)) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = *(long *)((long)puVar3 + 0x98);
                                          if ((lVar5 == *(long *)(param_3 + 0x98)) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = *(long *)((long)puVar3 + 0xa0);
                                            if ((lVar5 == *(long *)(param_3 + 0xa0)) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = *(long *)((long)puVar3 + 0xa8);
                                              if ((lVar5 == *(long *)(param_3 + 0xa8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = *(long *)((long)puVar3 + 0xb0);
                                                if ((lVar5 == *(long *)(param_3 + 0xb0)) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  puVar6 = *(undefined1 **)((long)puVar3 + 0xb8);
                                                  if (puVar6 != *(undefined1 **)(param_3 + 0xb8)) {
                                                    func_0x00010c071ae0();
                                                    goto LAB_108e48664;
                                                  }
                                                  goto LAB_108e48658;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108e48664:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108e483e0; end: 108e4867f; -[SCCaptionStyleSOJUWrapper isEqual:] */

long FUN_108e483e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e48658:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e48664;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x58);
                          if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x60);
                            if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x68);
                              if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x70);
                                if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x78);
                                  if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x80);
                                    if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0x88);
                                      if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0x90);
                                        if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0x98);
                                          if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xa0);
                                            if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xa8);
                                              if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xb0);
                                                if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0xb8);
                                                  if (lVar3 != *(long *)(param_3 + 0xb8)) {
                                                    func_0x00010c071ae0();
                                                    goto LAB_108e48664;
                                                  }
                                                  goto LAB_108e48658;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e48664:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e48680; end: 108e48687; -[SCCaptionStyleSOJUWrapper name] */

undefined8 FUN_108e48680(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e48688; end: 108e4868f; -[SCCaptionStyleSOJUWrapper fontName] */

undefined8 FUN_108e48688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e48690; end: 108e48697; -[SCCaptionStyleSOJUWrapper styleProperty] */

undefined8 FUN_108e48690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e48698; end: 108e4869f; -[SCCaptionStyleSOJUWrapper caps] */

undefined8 FUN_108e48698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e486a0; end: 108e486a7; -[SCCaptionStyleSOJUWrapper kerning] */

undefined8 FUN_108e486a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e486a8; end: 108e486af; -[SCCaptionStyleSOJUWrapper leading] */

undefined8 FUN_108e486a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e486b0; end: 108e486b7; -[SCCaptionStyleSOJUWrapper borderWidth] */

undefined8 FUN_108e486b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108e486b8; end: 108e486bf; -[SCCaptionStyleSOJUWrapper shadow] */

undefined8 FUN_108e486b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108e486c0; end: 108e486c7; -[SCCaptionStyleSOJUWrapper backgroundColor] */

undefined8 FUN_108e486c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108e486c8; end: 108e486cf; -[SCCaptionStyleSOJUWrapper fontColor] */

undefined8 FUN_108e486c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108e486d0; end: 108e486d7; -[SCCaptionStyleSOJUWrapper fontPatternImageUrl] */

undefined8 FUN_108e486d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e486d8; end: 108e486df; -[SCCaptionStyleSOJUWrapper fontColorMode] */

undefined8 FUN_108e486d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108e486e0; end: 108e486e7; -[SCCaptionStyleSOJUWrapper colorChangeable] */

undefined8 FUN_108e486e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108e486e8; end: 108e486ef; -[SCCaptionStyleSOJUWrapper rotation] */

undefined8 FUN_108e486e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108e486f0; end: 108e486f7; -[SCCaptionStyleSOJUWrapper effect] */

undefined8 FUN_108e486f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108e486f8; end: 108e486ff; -[SCCaptionStyleSOJUWrapper regularTypefaceUrl] */

undefined8 FUN_108e486f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108e48700; end: 108e48707; -[SCCaptionStyleSOJUWrapper boldTypefaceUrl] */

undefined8 FUN_108e48700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108e48708; end: 108e4870f; -[SCCaptionStyleSOJUWrapper italicsTypefaceUrl] */

undefined8 FUN_108e48708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108e48710; end: 108e48717; -[SCCaptionStyleSOJUWrapper italicsBoldTypefaceUrl] */

undefined8 FUN_108e48710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108e48718; end: 108e4871f; -[SCCaptionStyleSOJUWrapper backgroundCornerRadius] */

undefined8 FUN_108e48718(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108e48720; end: 108e48727; -[SCCaptionStyleSOJUWrapper fontFamilyName] */

undefined8 FUN_108e48720(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108e48728; end: 108e4872f; -[SCCaptionStyleSOJUWrapper backgroundImageUrl] */

undefined8 FUN_108e48728(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108e48730; end: 108e48737; -[SCCaptionStyleSOJUWrapper displayName] */

undefined8 FUN_108e48730(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108e48738; end: 108e48863; -[SCCaptionStyleSOJUWrapper .cxx_destruct] */

void FUN_108e48738(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e48864; end: 108e4896f; -[SCCaptionStyleShadowSOJUWrapper initWithColor:offsetX:offsetY:radius:] */

undefined1 *
FUN_108e48864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126feb30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e48970; end: 108e48993; -[SCCaptionStyleShadowSOJUWrapper copyWithZone:] */

undefined8 FUN_108e48970(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e48994; end: 108e48a1f; -[SCCaptionStyleShadowSOJUWrapper hash] */

undefined8 * FUN_108e48994(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e48ad0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e48adc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_108e48adc;
            }
            goto LAB_108e48ad0;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e48adc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e48a20; end: 108e48af7; -[SCCaptionStyleShadowSOJUWrapper isEqual:] */

long FUN_108e48a20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e48ad0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e48adc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_108e48adc;
            }
            goto LAB_108e48ad0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e48adc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e48af8; end: 108e48aff; -[SCCaptionStyleShadowSOJUWrapper color] */

undefined8 FUN_108e48af8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e48b00; end: 108e48b07; -[SCCaptionStyleShadowSOJUWrapper offsetX] */

undefined8 FUN_108e48b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e48b08; end: 108e48b0f; -[SCCaptionStyleShadowSOJUWrapper offsetY] */

undefined8 FUN_108e48b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e48b10; end: 108e48b17; -[SCCaptionStyleShadowSOJUWrapper radius] */

undefined8 FUN_108e48b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e48b18; end: 108e48b5f; -[SCCaptionStyleShadowSOJUWrapper .cxx_destruct] */

void FUN_108e48b18(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e48b60; end: 108e48beb; -[SCCaptionUserInputEvent initWithTextRange:changedText:] */

undefined1 *
FUN_108e48b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126feb38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}


