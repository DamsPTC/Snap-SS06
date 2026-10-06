/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f6a690; end: 108f6a6b3; -[SCUnifiedProfileStoriesListCellButtonsView _handleDeleteButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e408),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11277e404),*(undefined8 *)(param_1 + _DAT_11277e3f0));
  return;
}



/* Entry: 108f6a6b4; end: 108f6a6c3; -[SCUnifiedProfileStoriesListCellButtonsView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6a6b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e408);
}



/* Entry: 108f6a6c4; end: 108f6a6d3; -[SCUnifiedProfileStoriesListCellButtonsView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6a6c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e3fc);
}



/* Entry: 108f6a6d4; end: 108f6a773; -[SCUnifiedProfileStoriesListCellButtonsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a6d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e3fc,0);
  _objc_storeStrong(param_1 + _DAT_11277e408,0);
  _objc_storeStrong(param_1 + _DAT_11277e404,0);
  _objc_storeStrong(param_1 + _DAT_11277e400,0);
  _objc_storeStrong(param_1 + _DAT_11277e3f8,0);
  _objc_storeStrong(param_1 + _DAT_11277e3f4,0);
  _objc_storeStrong(param_1 + _DAT_11277e3f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e3ec,0);
  return;
}



/* Entry: 108f6a774; end: 108f6a853; -[SCUnifiedProfileStoriesListCellCountsView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f6a774(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff630;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277e40c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f6a854; end: 108f6ac6b; -[SCUnifiedProfileStoriesListCellCountsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a854(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ff630;
  lStack_90 = param_2;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar7 = (long)_DAT_11277e40c;
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar7));
  puVar2 = PTR_PTR_1126cc2e0;
  uVar4 = *(ulong *)(param_2 + _DAT_11277e410);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetHeight();
  uVar3 = uVar1;
  dVar8 = param_1;
  func_0x00010c1518c0();
  if (uVar3 != 0) {
    lVar5 = (long)_DAT_11277e414;
    func_0x00010c23d620(*(undefined8 *)(param_2 + lVar5));
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
    _CGRectGetHeight();
    param_1 = param_1 + dVar8;
  }
  uVar3 = uVar1;
  func_0x00010c25ad00();
  if (uVar3 != 0) {
    lVar5 = (long)_DAT_11277e418;
    func_0x00010c23d620(*(undefined8 *)(param_2 + lVar5));
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
    _CGRectGetHeight();
    param_1 = param_1 + dVar8;
  }
  uVar3 = uVar1;
  func_0x00010bf9cec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11277e414));
    _CGRectGetWidth();
    dVar10 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11277e418));
    _CGRectGetWidth();
    if (dVar10 <= dVar8) {
      dVar10 = dVar8;
    }
    lVar5 = (long)dVar10;
    uVar3 = uVar1;
    func_0x00010c29c5c0();
    dVar8 = dVar10;
    if (uVar3 != 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
      _CGRectGetWidth();
      dVar8 = (double)lVar5;
      if ((double)lVar5 <= dVar10) {
        dVar8 = dVar10;
      }
      lVar5 = (long)dVar8;
    }
    uVar3 = 0xf;
    if (lVar5 < 1) {
      uVar3 = 6;
    }
    lVar6 = (long)_DAT_11277e41c;
    func_0x00010c23d620(*(undefined8 *)(param_2 + lVar6));
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar8 = dVar8 - (double)lVar5;
    dVar10 = dVar8 - (double)uVar3;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetWidth();
    dVar10 = dVar10 - dVar8;
    dVar11 = dVar10 + -6.0;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    func_0x00010b8162e0(dVar11,(dVar10 + -32.0) * 0.5,0x4040000000000000,0x4040000000000000);
    lVar5 = (long)_DAT_11277e420;
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar5));
    _CGRectGetWidth();
    dVar11 = dVar11 + -11.0;
    dVar8 = dVar11 * 0.5;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar5));
    _CGRectGetHeight();
    func_0x00010b8162e0(dVar8,(dVar11 + -11.0) * 0.5,0x4026000000000000,0x4026000000000000);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar6));
  }
  uVar3 = uVar1;
  func_0x00010c29c5c0();
  if (uVar3 != 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar10 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetWidth();
    dVar10 = dVar8 - dVar10;
    dVar8 = dVar10 + 6.0;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    dVar10 = dVar10 - param_1;
    dVar9 = dVar10 * 0.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetWidth();
    dVar11 = dVar10;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetHeight();
    func_0x00010b8162e0(dVar8,dVar9,dVar10,dVar11);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar7));
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetMaxY();
  dVar10 = dVar8 + 0.0;
  uVar3 = uVar1;
  func_0x00010c1518c0();
  if (uVar3 != 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    lVar7 = (long)_DAT_11277e414;
    dVar11 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetWidth();
    dVar11 = dVar8 - dVar11;
    dVar8 = dVar11 + 6.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetWidth();
    dVar9 = dVar11;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetHeight();
    func_0x00010b8162e0(dVar8,dVar10,dVar11,dVar9);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar7));
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetMaxY();
    dVar10 = dVar8 + 0.0;
  }
  uVar3 = uVar1;
  func_0x00010c25ad00();
  if (uVar3 != 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    lVar7 = (long)_DAT_11277e418;
    dVar11 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetWidth();
    dVar8 = dVar8 - dVar11;
    dVar9 = dVar8 + 6.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetWidth();
    dVar11 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetHeight();
    func_0x00010b8162e0(dVar9,dVar10,dVar8,dVar11);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar7));
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 108f6ac6c; end: 108f6aca3; -[SCUnifiedProfileStoriesListCellCountsView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6ac6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e424);
  *(undefined8 *)(param_1 + _DAT_11277e424) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6aca4; end: 108f6af9b; -[SCUnifiedProfileStoriesListCellCountsView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6aca4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277e410;
  uVar5 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108f6af84;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc2e0;
    uVar6 = *(ulong *)(param_1 + lVar7);
    _objc_retain(uVar6);
    _objc_opt_class(puVar3);
    uVar1 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar5 = uVar6;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar1 = uVar5;
    func_0x00010bf9cec0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    if (uVar1 == 0) {
LAB_108f6ae48:
      func_0x00010bf9cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      uVar6 = uVar5;
      func_0x00010bf9d020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar6 == 0) goto LAB_108f6ae48;
      lVar4 = param_1;
      func_0x00010bf9cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar4);
      uVar1 = uVar5;
      func_0x00010bf9cec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277e428);
      *(ulong *)(param_1 + _DAT_11277e428) = uVar1;
      _objc_release(uVar2);
      func_0x00010bf9cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010bf9d020(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc200(lVar7);
      _objc_release(uVar1);
    }
    _objc_release(lVar7);
    uVar1 = uVar5;
    func_0x00010c29c5c0();
    if (uVar1 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e40c));
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e40c));
      func_0x00010beb11e0(param_1);
    }
    uVar1 = uVar5;
    func_0x00010c1518c0();
    if ((uVar1 == 0) || (uVar1 = uVar5, func_0x00010c2343c0(), (uVar1 & 1) != 0)) {
      lVar7 = param_1;
      func_0x00010c151980(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar7);
    }
    else {
      lVar7 = param_1;
      func_0x00010c151980(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar7);
      func_0x00010beaf860(param_1);
    }
    uVar1 = uVar5;
    func_0x00010c25ad00();
    lVar7 = param_1;
    func_0x00010c25ad60(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      func_0x00010c1a7f60();
      _objc_release(lVar7);
    }
    else {
      func_0x00010c1a7f60();
      _objc_release(lVar7);
      func_0x00010beb0020(param_1);
    }
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
  }
  _objc_release(uVar5);
LAB_108f6af84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6af9c; end: 108f6afeb; -[SCUnifiedProfileStoriesListCellCountsView setImageDownloader:] */

void FUN_108f6af9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf9cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f6afec; end: 108f6b20b; -[SCUnifiedProfileStoriesListCellCountsView _setupViewCountLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6afec(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  puVar4 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  uVar12 = param_4;
  func_0x00010c2343c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6f38;
  if ((int)uVar12 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea9c18;
  }
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar4,param_3,puVar5);
  _objc_release(puVar5);
  uVar12 = param_4;
  func_0x00010c2343c0();
  lVar10 = (long)_DAT_11277e40c;
  uVar6 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010bfb3a80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f960();
  bVar2 = (int)uVar12 == 0;
  dVar11 = -12.0;
  if (bVar2) {
    dVar11 = -9.0;
  }
  uVar12 = 0x4022000000000000;
  if (bVar2) {
    uVar12 = 0x4028000000000000;
  }
  uVar13 = 0x4028000000000000;
  if (bVar2) {
    uVar13 = 0x4022000000000000;
  }
  func_0x00010c1739e0(0,(dVar11 + param_1) * 0.5,uVar12,uVar13,puVar4);
  _objc_release(uVar6);
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar12 = param_4;
  func_0x00010c29c5c0(param_4);
  func_0x00010c0df840(puVar8,param_3,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_3,&PTR____CFConstantStringClassReference_110f11e78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar7,param_3,puVar5);
  func_0x00010bf069e0(puVar3,param_3,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf069e0(puVar3,param_3,puVar5);
  _objc_release(puVar5);
  func_0x00010c16b720(*(undefined8 *)(param_2 + lVar10),param_3,puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f6b20c; end: 108f6b3fb; -[SCUnifiedProfileStoriesListCellCountsView _setupScreenshotLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6b20c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110ea9c38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  lVar8 = (long)_DAT_11277e414;
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfb3a80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f960();
  func_0x00010c1739e0(0,(param_1 + -10.0) * 0.5,0x4028000000000000,0x4024000000000000,puVar2);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_4;
  func_0x00010c1518c0(param_4);
  _objc_release(param_4);
  func_0x00010c0df840(puVar6,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110f11e78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar5,param_3,puVar3);
  func_0x00010bf069e0(puVar1,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf069e0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010c16b720(*(undefined8 *)(param_2 + lVar8),param_3,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f6b3fc; end: 108f6b5eb; -[SCUnifiedProfileStoriesListCellCountsView _setupStoryReplyLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6b3fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110eb9018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  lVar8 = (long)_DAT_11277e418;
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfb3a80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f960();
  func_0x00010c1739e0(0,(param_1 + -12.0) * 0.5,0x4023000000000000,0x4028000000000000,puVar2);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_4;
  func_0x00010c25ad00(param_4);
  _objc_release(param_4);
  func_0x00010c0df840(puVar6,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110f11e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar5,param_3,puVar3);
  func_0x00010bf069e0(puVar1,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf069e0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010c16b720(*(undefined8 *)(param_2 + lVar8),param_3,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f6b5ec; end: 108f6b6b7; -[SCUnifiedProfileStoriesListCellCountsView screenshotLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6b5ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277e414;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108f6b6b8; end: 108f6b783; -[SCUnifiedProfileStoriesListCellCountsView storyReplyLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6b6b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277e418;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108f6b784; end: 108f6b85f; -[SCUnifiedProfileStoriesListCellCountsView exportButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6b784(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277e41c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar3 = (long)_DAT_11277e420;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126b48f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3),param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,1);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108f6b860; end: 108f6b883; -[SCUnifiedProfileStoriesListCellCountsView _handleExportButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6b860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e424),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11277e428),*(undefined8 *)(param_1 + _DAT_11277e41c));
  return;
}



/* Entry: 108f6b884; end: 108f6b893; -[SCUnifiedProfileStoriesListCellCountsView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6b884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e424);
}



/* Entry: 108f6b894; end: 108f6b8a3; -[SCUnifiedProfileStoriesListCellCountsView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6b894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e410);
}



/* Entry: 108f6b8a4; end: 108f6b943; -[SCUnifiedProfileStoriesListCellCountsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6b8a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e410,0);
  _objc_storeStrong(param_1 + _DAT_11277e424,0);
  _objc_storeStrong(param_1 + _DAT_11277e420,0);
  _objc_storeStrong(param_1 + _DAT_11277e428,0);
  _objc_storeStrong(param_1 + _DAT_11277e41c,0);
  _objc_storeStrong(param_1 + _DAT_11277e418,0);
  _objc_storeStrong(param_1 + _DAT_11277e414,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e40c,0);
  return;
}



/* Entry: 108f6b944; end: 108f6be23; -[SCUnifiedProfileStoriesListCellMoreButtonView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f6b944(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126ff638;
  puVar20 = &uStack_e0;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(puVar20,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar20 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar23 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar23,uVar24,uVar25,uVar26);
    lVar22 = (long)_DAT_11277e42c;
    uVar17 = *(undefined8 *)((long)puVar20 + lVar22);
    *(undefined **)((long)puVar20 + lVar22) = puVar1;
    _objc_release(uVar17);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf33860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar18;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar20 + lVar22));
    _objc_release(uVar2);
    _objc_release(uVar18);
    _objc_release(uVar17);
    func_0x00010c182220(*(undefined8 *)((long)puVar20 + lVar22));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar20 + lVar22));
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar20 + lVar22));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar23,uVar24,uVar25,uVar26);
    lVar19 = (long)_DAT_11277e430;
    uVar18 = *(undefined8 *)((long)puVar20 + lVar19);
    *(undefined **)((long)puVar20 + lVar19) = puVar1;
    _objc_release(uVar18);
    func_0x00010c219b60(*(undefined8 *)((long)puVar20 + lVar19));
    func_0x00010befbb60(*(undefined8 *)((long)puVar20 + lVar19));
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar20 + lVar19));
    func_0x00010c21e900(*(undefined8 *)((long)puVar20 + lVar19));
    func_0x00010befbb60(puVar20);
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar20 + lVar22);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar20 + lVar19);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar18;
    uVar5 = *(undefined8 *)((long)puVar20 + lVar22);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar20 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar2;
    uVar7 = *(undefined8 *)((long)puVar20 + lVar22);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar7;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar17;
    uVar8 = *(undefined8 *)((long)puVar20 + lVar22);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar23;
    uVar9 = *(undefined8 *)((long)puVar20 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar9;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar24;
    uVar10 = *(undefined8 *)((long)puVar20 + lVar19);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar10;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar25;
    uVar11 = *(undefined8 *)((long)puVar20 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar20;
    func_0x00010bf348e0(puVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar26;
    uVar12 = *(undefined8 *)((long)puVar20 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar21);
    _objc_release(uVar12);
    _objc_release(uVar26);
    _objc_release(puVar16);
    _objc_release(uVar11);
    _objc_release(uVar25);
    _objc_release(uVar10);
    _objc_release(uVar24);
    _objc_release(uVar9);
    _objc_release(uVar23);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar18);
    _objc_release(uVar4);
    _objc_release(uVar3);
    param_3 = (undefined8 *)0x1;
    func_0x00010c21e900(puVar20);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar20;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar19 = (long)_DAT_11277e434;
  puVar20 = *(undefined8 **)(puVar1 + lVar19);
  _objc_retain(puVar20);
  _objc_retain(param_3);
  puVar16 = param_3;
  if (puVar20 != param_3) {
    if (param_3 == (undefined8 *)0x0) {
      _objc_release(puVar20);
    }
    else {
      puVar16 = puVar20;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar20);
      if (((ulong)puVar16 & 1) != 0) goto LAB_108f6bf8c;
    }
    _objc_retain(param_3);
    uVar18 = *(undefined8 *)(puVar1 + lVar19);
    *(undefined8 **)(puVar1 + lVar19) = param_3;
    _objc_release(uVar18);
    puVar15 = PTR_PTR_1126cc2e8;
    puVar21 = *(undefined8 **)(puVar1 + lVar19);
    _objc_retain(puVar21);
    _objc_opt_class(puVar15);
    puVar16 = puVar21;
    _objc_opt_isKindOfClass(puVar21,puVar15);
    puVar20 = puVar21;
    if (((ulong)puVar16 & 1) == 0) {
      puVar20 = (undefined8 *)0x0;
    }
    _objc_retain(puVar20);
    _objc_release(puVar21);
    puVar16 = puVar20;
    func_0x00010c268c60(puVar20);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11277e42c;
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar19));
    _objc_release(puVar16);
    puVar16 = puVar20;
    func_0x00010c268c60(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900(*(undefined8 *)(puVar1 + lVar19));
    _objc_release(puVar16);
    puVar21 = puVar20;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = *(undefined8 **)(puVar1 + _DAT_11277e438);
    *(undefined8 **)(puVar1 + _DAT_11277e438) = puVar21;
  }
  _objc_release(puVar16);
  _objc_release(puVar20);
LAB_108f6bf8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 108f6be24; end: 108f6bfa3; -[SCUnifiedProfileStoriesListCellMoreButtonView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6be24(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e434;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar3 = param_3;
  if (uVar4 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar3 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_108f6bf8c;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126cc2e8;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar2);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar3 = uVar4;
    func_0x00010c268c60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277e42c;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c268c60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar3);
    uVar5 = uVar4;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(ulong *)(param_1 + _DAT_11277e438);
    *(ulong *)(param_1 + _DAT_11277e438) = uVar5;
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
LAB_108f6bf8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6bfa4; end: 108f6bfdb; -[SCUnifiedProfileStoriesListCellMoreButtonView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6bfa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e43c);
  *(undefined8 *)(param_1 + _DAT_11277e43c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6bfdc; end: 108f6bfff; -[SCUnifiedProfileStoriesListCellMoreButtonView _handleMoreButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6bfdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e43c),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11277e438),*(undefined8 *)(param_1 + _DAT_11277e42c));
  return;
}



/* Entry: 108f6c000; end: 108f6c00f; -[SCUnifiedProfileStoriesListCellMoreButtonView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6c000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e43c);
}



/* Entry: 108f6c010; end: 108f6c01f; -[SCUnifiedProfileStoriesListCellMoreButtonView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6c010(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e434);
}



/* Entry: 108f6c020; end: 108f6c08f; -[SCUnifiedProfileStoriesListCellMoreButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c020(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e434,0);
  _objc_storeStrong(param_1 + _DAT_11277e43c,0);
  _objc_storeStrong(param_1 + _DAT_11277e438,0);
  _objc_storeStrong(param_1 + _DAT_11277e430,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e42c,0);
  return;
}



/* Entry: 108f6c090; end: 108f6c1eb; -[SCUnifiedProfileStoriesListViewMoreCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f6c090(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff640;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11277e440;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c1d0120();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f6c1ec; end: 108f6c2df; -[SCUnifiedProfileStoriesListViewMoreCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff640;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  lVar1 = (long)_DAT_11277e440;
  uVar2 = param_3;
  uVar3 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c1739e0(0,0,uVar2,uVar3,*(undefined8 *)(param_5 + lVar1));
  uVar2 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010c17a6a0(uVar2,param_1,*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 108f6c2e0; end: 108f6c3c7; -[SCUnifiedProfileStoriesListViewMoreCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c2e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277e444;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126d7930;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    func_0x00010c2716a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277e440));
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6c3c8; end: 108f6c3d3; +[SCUnifiedProfileStoriesListViewMoreCell sizeWithViewModel:constrainedToSize:] */

void FUN_108f6c3c8(void)

{
  return;
}



/* Entry: 108f6c3d4; end: 108f6c4af; -[SCUnifiedProfileStoriesListViewMoreCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c3d4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d7930;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e444);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277e448);
    func_0x00010c268c60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
    param_1 = param_1 + _DAT_11277e44c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c29de20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6c4b0; end: 108f6c4bf; -[SCUnifiedProfileStoriesListViewMoreCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6c4b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e448);
}



/* Entry: 108f6c4c0; end: 108f6c4ff; -[SCUnifiedProfileStoriesListViewMoreCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e448;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6c500; end: 108f6c50f; -[SCUnifiedProfileStoriesListViewMoreCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6c500(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e444);
}



/* Entry: 108f6c510; end: 108f6c52f; -[SCUnifiedProfileStoriesListViewMoreCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c510(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e44c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f6c530; end: 108f6c543; -[SCUnifiedProfileStoriesListViewMoreCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c530(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277e44c,param_3);
  return;
}



/* Entry: 108f6c544; end: 108f6c59f; -[SCUnifiedProfileStoriesListViewMoreCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c544(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277e44c);
  _objc_storeStrong(param_1 + _DAT_11277e444,0);
  _objc_storeStrong(param_1 + _DAT_11277e448,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e440,0);
  return;
}



/* Entry: 108f6c5a0; end: 108f6c683; -[SCUnifiedProfileStoriesListViewSnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f6c5a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff648;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1a08;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277e450;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126dcb60;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e454);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e454) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dcb68;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e458);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e458) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dcb70;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e45c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e45c) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f6c684; end: 108f6c6b7; -[SCUnifiedProfileStoriesListViewSnapCell layoutSubviews] */

void FUN_108f6c684(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff648;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 108f6c6b8; end: 108f6c717; -[SCUnifiedProfileStoriesListViewSnapCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e450);
  _objc_retain(param_3);
  func_0x00010c1aa200(uVar1,param_2,param_3);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11277e454),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6c718; end: 108f6ca87; -[SCUnifiedProfileStoriesListViewSnapCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6c718(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11277e460;
  uVar7 = *(ulong *)(param_1 + lVar8);
  _objc_retain(uVar7);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar7 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar1 = uVar7;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar7);
      if ((uVar1 & 1) != 0) goto LAB_108f6ca64;
    }
    puVar2 = PTR_PTR_1126cc2f8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar7 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_3);
    uVar1 = uVar7;
    func_0x00010c116ca0();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR_PTR_1126ff648;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_setViewModel__1126663d8,uVar1);
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = uVar3;
    _objc_release(uVar6);
    uVar3 = uVar1;
    func_0x00010c08e760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11277e464);
    *(ulong *)(param_1 + _DAT_11277e464) = uVar3;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_11277e450;
    func_0x00010c1ba240(param_1);
    uVar4 = uVar1;
    func_0x00010c08e7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4608;
    _objc_opt_class(PTR_PTR_1126b4608);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8));
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8));
    uVar3 = uVar7;
    func_0x00010c234820();
    if ((int)uVar3 == 0) {
      uVar3 = uVar7;
      func_0x00010c233420();
      if ((int)uVar3 == 0) {
        uVar3 = uVar7;
        func_0x00010c233c20();
        if ((int)uVar3 == 0) {
          func_0x00010c1ee160(param_1);
          piVar10 = (int *)&DAT_11277e45c;
          func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e454));
          piVar9 = (int *)&DAT_11277e458;
        }
        else {
          uVar3 = uVar1;
          func_0x00010c140c00(uVar1);
          _objc_retainAutoreleasedReturnValue();
          piVar9 = (int *)&DAT_11277e454;
          lVar8 = (long)_DAT_11277e45c;
          func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8));
          _objc_release(uVar3);
          func_0x00010c1ee160(param_1);
          func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
          piVar10 = (int *)&DAT_11277e458;
        }
      }
      else {
        uVar3 = uVar1;
        func_0x00010c140c00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        piVar9 = (int *)&DAT_11277e454;
        lVar8 = (long)_DAT_11277e458;
        func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8));
        _objc_release(uVar3);
        func_0x00010c1ee160(param_1);
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
        piVar10 = (int *)&DAT_11277e45c;
      }
    }
    else {
      uVar3 = uVar1;
      func_0x00010c140c00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      piVar10 = (int *)&DAT_11277e45c;
      lVar8 = (long)_DAT_11277e454;
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8));
      _objc_release(uVar3);
      func_0x00010c1ee160(param_1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
      piVar9 = (int *)&DAT_11277e458;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + *piVar9));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + *piVar10));
    func_0x00010c21e900(param_1);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar7);
LAB_108f6ca64:
  _objc_release(param_3);
  return;
}



/* Entry: 108f6ca88; end: 108f6cb3b; -[SCUnifiedProfileStoriesListViewSnapCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6ca88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff648;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setActionHandler__112636080,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e468);
  *(undefined8 *)(param_1 + _DAT_11277e468) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11277e458));
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11277e454));
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11277e45c));
  _objc_release(param_3);
  return;
}



/* Entry: 108f6cb3c; end: 108f6cb3f; -[SCUnifiedProfileStoriesListViewSnapCell handleTapOnBitmojiFromAvatarView:] */

void FUN_108f6cb3c(void)

{
  return;
}



/* Entry: 108f6cb40; end: 108f6cb5f; -[SCUnifiedProfileStoriesListViewSnapCell handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6cb40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e468),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11277e464),param_3);
  return;
}



/* Entry: 108f6cb60; end: 108f6cb63; -[SCUnifiedProfileStoriesListViewSnapCell handleLongPressOnStoryIconFromAvatarView:] */

void FUN_108f6cb60(void)

{
  return;
}



/* Entry: 108f6cb64; end: 108f6cb73; -[SCUnifiedProfileStoriesListViewSnapCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6cb64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e460);
}



/* Entry: 108f6cb74; end: 108f6cb83; -[SCUnifiedProfileStoriesListViewSnapCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6cb74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e468);
}



/* Entry: 108f6cb84; end: 108f6cb93; -[SCUnifiedProfileStoriesListViewSnapCell avatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6cb84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e450);
}



/* Entry: 108f6cb94; end: 108f6cbd3; -[SCUnifiedProfileStoriesListViewSnapCell setAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6cb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e450;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6cbd4; end: 108f6cc63; -[SCUnifiedProfileStoriesListViewSnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6cbd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e450,0);
  _objc_storeStrong(param_1 + _DAT_11277e468,0);
  _objc_storeStrong(param_1 + _DAT_11277e460,0);
  _objc_storeStrong(param_1 + _DAT_11277e464,0);
  _objc_storeStrong(param_1 + _DAT_11277e45c,0);
  _objc_storeStrong(param_1 + _DAT_11277e458,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e454,0);
  return;
}



/* Entry: 108f6cc64; end: 108f6ccdb; -[SCUnifiedProfileImageIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6cc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff650;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_11277e46c));
  return;
}



/* Entry: 108f6ccdc; end: 108f6cecf; -[SCUnifiedProfileImageIconView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6ccdc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277e470;
  uVar5 = *(ulong *)(param_1 + lVar7);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  if (param_3 == uVar5) {
    _objc_release(uVar5);
    _objc_release(param_3);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f6ceb4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11277e46c;
    if (*(long *)(param_1 + lVar9) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_1 + lVar9);
      *(undefined **)(param_1 + lVar9) = puVar3;
      _objc_release(uVar2);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar9));
      func_0x00010befbb60(param_1);
    }
    puVar6 = *(undefined **)(param_1 + lVar7);
    _objc_retain(puVar6);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    puVar4 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar3);
    puVar3 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 == (undefined *)0x0) {
      _objc_retain(puVar6);
      _objc_opt_class(puVar4);
      puVar8 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar4);
      puVar4 = puVar6;
      if (((ulong)puVar8 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar6);
      if (puVar4 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar6);
      puVar8 = puVar6;
    }
    _objc_release(puVar3);
    _objc_release(puVar6);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar8);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f6ceb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6ced0; end: 108f6cedf; -[SCUnifiedProfileImageIconView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6ced0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e470);
}



/* Entry: 108f6cee0; end: 108f6cf1f; -[SCUnifiedProfileImageIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6cee0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e470,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e46c,0);
  return;
}



/* Entry: 108f6cf20; end: 108f6d11f; -[SCUnifiedProfileDisplayTitleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f6cf20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff658;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108f6d120;
    puStack_78 = &UNK_110acede8;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e474);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e474) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e478);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e478) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e47c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e47c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e480);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e480) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1af000(puVar1);
    func_0x00010c160fc0(puVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 108f6d120; end: 108f6d15f;  */

void FUN_108f6d120(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f6d160; end: 108f6d163;  */

void FUN_108f6d160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c21e900();
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c1bdb00(puVar1,param_2,4);
  func_0x00010c213040(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f6d164; end: 108f6d1a3;  */

void FUN_108f6d164(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5bc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f6d1a4; end: 108f6d1bf;  */

void FUN_108f6d1a4(void)

{
  _objc_opt_new(PTR_PTR_1126b56f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f6d1c0; end: 108f6d307; -[SCUnifiedProfileDisplayTitleView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6d1c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff658;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_11277e480;
  lVar1 = *(long *)(param_3 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_3 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_3 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0;
      func_0x00010c19f0e0(0,0,param_1,param_2);
      _objc_release(uVar4);
      func_0x00010bf20c00(param_3);
      _CGRectGetMidX();
      uVar4 = uVar7;
      func_0x00010bf20c00(param_3);
      _CGRectGetMidY();
      uVar5 = *(undefined8 *)(param_3 + lVar6);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a6a0(uVar7,uVar4);
      _objc_release(uVar5);
    }
  }
  return;
}



/* Entry: 108f6d308; end: 108f6d34b; -[SCUnifiedProfileDisplayTitleView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6d308(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2);
  return;
}



/* Entry: 108f6d34c; end: 108f6d3e3; -[SCUnifiedProfileDisplayTitleView textRectForBounds:limitedToNumberOfLines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108f6d34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277e478);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c660(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f6d3e4; end: 108f6d3ef; -[SCUnifiedProfileDisplayTitleView leftAndRightTotalMargin] */

undefined8 FUN_108f6d3e4(void)

{
  return 0x4060000000000000;
}



/* Entry: 108f6d3f0; end: 108f6d5c7; -[SCUnifiedProfileDisplayTitleView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6d3f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e484;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uVar4 = param_3;
  if (param_3 == uVar5) {
    _objc_release(uVar5);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f6d57c;
    }
    puVar2 = PTR_PTR_1126dcb78;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108f6d5c8;
    puStack_68 = &UNK_11086cf48;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c0bd900(uVar4);
    func_0x00010c1cbe20(param_1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar4);
LAB_108f6d57c:
  _objc_release(param_3);
  return;
}



/* Entry: 108f6d5c8; end: 108f6d60f;  */

void FUN_108f6d5c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f6d610; end: 108f6d66f;  */

void FUN_108f6d610(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed70a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f6d670; end: 108f6d7c3; +[SCUnifiedProfileDisplayTitleView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f6d670(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126dcb78;
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (uVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bd900(param_5);
    if ((double)puStack_48[3] <= param_2) {
      param_2 = (double)puStack_48[3];
    }
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 108f6d7c4; end: 108f6d7d7;  */

void FUN_108f6d7c4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x403a000000000000;
  return;
}



/* Entry: 108f6d7d8; end: 108f6d87b;  */

void FUN_108f6d7d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000108f6e650();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  func_0x00010c16b720(uVar1);
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c19f0e0(0,0,*(double *)(param_1 + 0x28) + -64.0 + -64.0,uVar1);
  func_0x00010c23d620(uVar1);
  func_0x00010bfb68e0(uVar1);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6d87c; end: 108f6d9cf; -[SCUnifiedProfileDisplayTitleView _handleDisplayNameTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6d87c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126dcb78;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e484);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108f6d9d0;
  uStack_40 = 0x108f6d9e0;
  uStack_38 = 0;
  func_0x00010c0bd900(uVar1);
  if (puStack_58[5] != 0) {
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11277e488));
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 108f6d9d0; end: 108f6d9e7;  */

void FUN_108f6d9d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f6d9e8; end: 108f6da5f;  */

void FUN_108f6d9e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6da60; end: 108f6dc77; -[SCUnifiedProfileDisplayTitleView _makeDisplayNameLabelStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6da60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11277e478;
  lVar1 = *(long *)(param_1 + lVar14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar14));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  lVar15 = (long)_DAT_11277e47c;
  lVar1 = *(long *)(param_1 + lVar15);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar15));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c207380(0x4014000000000000,puVar2);
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar6);
  func_0x00010c166c00(puVar5);
  func_0x00010c16e060(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_f0,puVar2);
    puVar5 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181cc0(0x447a0000,puVar5);
    func_0x00010c1a9fc0(puVar5);
    func_0x00010c1aab40(puVar5);
    _objc_copyWeak(auStack_f8,auStack_f0);
    func_0x00010c1d3960(puVar5);
    func_0x00010c1a7f60(puVar5);
    func_0x00010c20eaa0(puVar5);
    func_0x00010c219b60(puVar5);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    puStack_e8 = puVar8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e0 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_f8);
    _objc_release(puVar6);
    puVar12 = auStack_f0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
      __Unwind_Resume(puVar12);
      puVar12 = puVar12 + 0x20;
      _objc_loadWeakRetained(puVar12);
      func_0x00010be00e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar12);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f6dc78; end: 108f6dedb; -[SCUnifiedProfileDisplayTitleView _makeIsMutedButton] */

void FUN_108f6dc78(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000,puVar2);
  func_0x00010c1a9fc0(puVar2);
  func_0x00010c1aab40(puVar2);
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1d3960(puVar2);
  func_0x00010c1a7f60(puVar2);
  func_0x00010c20eaa0(puVar2);
  func_0x00010c219b60(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_78 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  puVar9 = auStack_80;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(puVar9);
  puVar9 = puVar9 + 0x20;
  _objc_loadWeakRetained(puVar9);
  func_0x00010be00e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 108f6dedc; end: 108f6df07;  */

void FUN_108f6dedc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f6df08; end: 108f6e03f; -[SCUnifiedProfileDisplayTitleView _didTapIsMutedButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6df08(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126dcb78;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e484);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108f6d9d0;
  uStack_40 = 0x108f6d9e0;
  uStack_38 = 0;
  func_0x00010c0bd900(uVar1);
  if (puStack_58[5] != 0) {
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11277e488));
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 108f6e040; end: 108f6e077;  */

void FUN_108f6e040(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long lVar2;
  
  _objc_retain(in_x5);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6e078; end: 108f6e1d3; -[SCUnifiedProfileDisplayTitleView _updateDisplayNameButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6e078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277e480;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e478);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6e1d4; end: 108f6e56f; -[SCUnifiedProfileDisplayTitleView _updateDisplayNameLabel:maxLinesCount:isMuted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108f6e1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11277e474;
  lVar14 = *(long *)(param_1 + lVar15);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar15));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    uStack_80 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493c0(0x4050000000000000,uVar6,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar15);
    uStack_78 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493c0(0xc050000000000000,uVar10,param_2,lVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar14);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277e480);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar14 = (long)_DAT_11277e478;
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  lVar14 = *(long *)(param_1 + _DAT_11277e47c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar14;
  }
  ___stack_chk_fail();
  return *(long *)(lVar14 + _DAT_11277e488);
}



/* Entry: 108f6e570; end: 108f6e57f; -[SCUnifiedProfileDisplayTitleView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6e570(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e488);
}



/* Entry: 108f6e580; end: 108f6e5bf; -[SCUnifiedProfileDisplayTitleView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6e580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e488;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6e5c0; end: 108f6e5cf; -[SCUnifiedProfileDisplayTitleView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6e5c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e484);
}



/* Entry: 108f6e5d0; end: 108f6e6a7; -[SCUnifiedProfileDisplayTitleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6e5d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e484,0);
  _objc_storeStrong(param_1 + _DAT_11277e488,0);
  _objc_storeStrong(param_1 + _DAT_11277e480,0);
  _objc_storeStrong(param_1 + _DAT_11277e47c,0);
  _objc_storeStrong(param_1 + _DAT_11277e478,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e474,0);
  return;
}



/* Entry: 108f6e6a8; end: 108f6e6cf;  */

undefined8 FUN_108f6e6a8(void)

{
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return 0x4036000000000000;
}



/* Entry: 108f6e6d0; end: 108f6e797;  */

void FUN_108f6e6d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb4ff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f6e798; end: 108f6e98b; -[SCUnifiedProfileNetworkImageView initWithLoadingIndicatorColor:loadingBackgroundColor:cornerRadius:rectCorner:cornerColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108f6e798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ff660;
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11277e48c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    func_0x00010c17d4c0(puVar1);
    if (param_6 != 0) {
      puVar3 = PTR_PTR_1126b4640;
      _objc_alloc();
      func_0x00010c005ee0(param_1);
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e490);
      *(undefined **)((long)puVar1 + (long)_DAT_11277e490) = puVar3;
      _objc_release(uVar2);
      func_0x00010befbb60(puVar1);
    }
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e494);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e494) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e498);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e498) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e49c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e49c) = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108f6e98c; end: 108f6ea4f;  */

void FUN_108f6e98c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c182220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f6ea50; end: 108f6ec13; -[SCUnifiedProfileNetworkImageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6ea50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff660;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277e490));
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277e494);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277e498);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11277e49c;
  lVar2 = *(long *)(param_5 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202c80(param_1,param_2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010bf20c00(param_5);
    _CGRectGetMidX();
    uVar1 = param_1;
    func_0x00010bf20c00(param_5);
    _CGRectGetMidY();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(param_1,uVar1);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 108f6ec14; end: 108f6ec63; -[SCUnifiedProfileNetworkImageView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6ec14(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11277e4a0));
  puStack_28 = PTR_PTR_1126ff660;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108f6ec64; end: 108f6ed67; -[SCUnifiedProfileNetworkImageView setLoadingImageWithMiniThumbnailImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6ec64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11277e494);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if ((param_3 != 0) && (lVar2 == 0)) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be9a9a0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108f6ed68; end: 108f6edaf;  */

void FUN_108f6ed68(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedad80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f6edb0; end: 108f6ef07; -[SCUnifiedProfileNetworkImageView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6edb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010be92140(param_1);
  lVar3 = (long)_DAT_11277e4a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e4a8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010c09b780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277e4a0);
  *(undefined8 *)(param_1 + _DAT_11277e4a0) = uVar1;
  _objc_release(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108f6ef08; end: 108f6efa3;  */

void FUN_108f6ef08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010be9a880(param_1);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6efa4; end: 108f6efa7;  */

void FUN_108f6efa4(void)

{
  return;
}



/* Entry: 108f6efa8; end: 108f6f1a3; -[SCUnifiedProfileNetworkImageView _reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6efa8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277e498;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277e494;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar3 = (long)_DAT_11277e4a0;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf2dba0();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
  }
  lVar1 = (long)_DAT_11277e49c;
  lVar3 = *(long *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar1));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010c16e440(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277e48c));
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f6f1a4; end: 108f6f2e7; -[SCUnifiedProfileNetworkImageView _scaleImage:completion:] */

void FUN_108f6f1a4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  double dStack_50;
  double dStack_48;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_8 != 0) {
    func_0x00010bf20c00(param_5);
    if ((param_7 != 0) &&
       ((func_0x00010c23d0a0(param_7), param_4 < param_2 ||
        (func_0x00010c23d0a0(param_7), param_3 < param_1)))) {
      bVar1 = false;
      if ((param_3 == *(double *)PTR__CGSizeZero_110347620) &&
         (bVar1 = false, !NAN(param_4) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
        bVar1 = param_4 == *(double *)(PTR__CGSizeZero_110347620 + 8);
      }
      if (!bVar1) {
        uVar2 = 0x15;
        func_0x000107c312b8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_108f6f2e8;
        puStack_68 = &UNK_1108bb538;
        _objc_retain(param_7);
        lStack_60 = param_7;
        dStack_50 = param_3;
        dStack_48 = param_4;
        _objc_retain(param_8);
        lStack_58 = param_8;
        func_0x000107c27d8c(uVar2,&puStack_80);
        _objc_release(uVar2);
        _objc_release(lStack_58);
        _objc_release(lStack_60);
        goto LAB_108f6f2c0;
      }
    }
    (**(code **)(param_8 + 0x10))(param_8,param_7);
  }
LAB_108f6f2c0:
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 108f6f2e8; end: 108f6f3c3;  */

void FUN_108f6f2e8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c14e6c0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108f6f3c4;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 108f6f3c4; end: 108f6f3d3;  */

void FUN_108f6f3c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108f6f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108f6f3d4; end: 108f6f52f; -[SCUnifiedProfileNetworkImageView _scaleAndUpdateMediaCardImageView:networkImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6f3d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + _DAT_11277e4a4);
  _objc_retain(param_4);
  _objc_retain(lVar2);
  if (param_4 == lVar2) {
    _objc_release(lVar2);
    _objc_release(param_4);
  }
  else {
    if (lVar2 == 0) {
      _objc_release();
      goto LAB_108f6f4ec;
    }
    lVar1 = param_4;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(param_4);
    if ((int)lVar1 == 0) goto LAB_108f6f4ec;
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010be9a9a0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_108f6f4ec:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f6f530; end: 108f6f583;  */

void FUN_108f6f530(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb3c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


