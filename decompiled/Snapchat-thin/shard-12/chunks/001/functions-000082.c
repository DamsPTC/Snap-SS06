/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d1f890; end: 108d1f8c7; -[SCStickerPickerIconCell setIconImage:animate:] */

void FUN_108d1f890(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010c1a9720();
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateImage_1125504e8);
    return;
  }
  return;
}



/* Entry: 108d1f8c8; end: 108d1f8d7; -[SCStickerPickerIconCell setIconAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f8c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b2b0),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d1f8d8; end: 108d1f94f; -[SCStickerPickerIconCell setTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setTintColor__112663280;
  puStack_38 = PTR_PTR_1126fe5e0;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11277b2b0));
  _objc_release(param_3);
  return;
}



/* Entry: 108d1f950; end: 108d1fa7b; -[SCStickerPickerIconCell _animateImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1f950(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = (long)_DAT_11277b2b0;
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + lVar2));
  _CGAffineTransformMakeScale(&uStack_68,0x3f847ae147ae147b,0x3f847ae147ae147b);
  uStack_98 = uStack_60;
  uStack_a0 = uStack_68;
  uStack_88 = uStack_50;
  uStack_90 = uStack_58;
  uStack_78 = uStack_40;
  uStack_80 = uStack_48;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108d1fa7c;
  puStack_b0 = &UNK_110842e18;
  lStack_a8 = param_1;
  _objc_copyWeak(auStack_d0,auStack_38);
  func_0x00010bf03440(0x3fd0000000000000,0x3fd0000000000000,puVar1);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108d1fa7c; end: 108d1fad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1fa7c(long param_1,undefined8 param_2)

{
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
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff4000000000000,0x3ff4000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b2b0),param_2,
                      &uStack_80);
  return;
}



/* Entry: 108d1fad8; end: 108d1fb6b;  */

void FUN_108d1fad8(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_28 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x00010bf03400(0x3fd0000000000000,puVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108d1fb6c; end: 108d1fbbf;  */

void FUN_108d1fb6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c219960();
  _objc_release(param_1);
  return;
}



/* Entry: 108d1fbc0; end: 108d1fbcf; -[SCStickerPickerIconCell type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1fbc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b2ac);
}



/* Entry: 108d1fbd0; end: 108d1fbdf; -[SCStickerPickerIconCell setType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1fbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277b2ac) = param_3;
  return;
}



/* Entry: 108d1fbe0; end: 108d1fc1f; -[SCStickerPickerIconCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1fbe0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b2b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b2b0,0);
  return;
}



/* Entry: 108d1fc20; end: 108d1fc93; -[SCStickerPickerIconsCollectionViewLayout initWithIconViewWidth:blackOverlayHeight:bottomInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1fc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe5e8;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b2b8) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b2bc) = param_2;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b2c0) = param_3;
  }
  return;
}



/* Entry: 108d1fc94; end: 108d1fceb; -[SCStickerPickerIconsCollectionViewLayout resetLayoutEngines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1fc94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277b2c4);
  *(undefined8 *)(param_2 + _DAT_11277b2c4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277b2c8);
  *(undefined8 *)(param_2 + _DAT_11277b2c8) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + _DAT_11277b2c0) = param_1;
  return;
}



/* Entry: 108d1fcec; end: 108d1ff23; -[SCStickerPickerIconsCollectionViewLayout selectedIconsVisibleRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108d1fcec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x00010c1099a0();
  lVar2 = (long)_DAT_11277b2c8;
  lVar3 = *(long *)(param_5 + _DAT_11277b2c4);
  lVar5 = *(long *)(param_5 + lVar2);
  if (lVar3 == 0) {
    if (lVar5 == 0) {
      return *(double *)PTR__CGRectZero_110347608;
    }
  }
  else {
    bVar1 = lVar5 != 0;
    lVar5 = lVar3;
    if (bVar1) {
      dVar10 = (double)(long)*(double *)(param_5 + _DAT_11277b2cc);
      dVar6 = *(double *)(param_5 + _DAT_11277b2cc) - dVar10;
      dVar7 = dVar6;
      func_0x00010c159880();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      func_0x00010c08c980(param_5,param_6,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      dVar8 = dVar7;
      dVar11 = dVar10;
      uVar12 = param_3;
      uVar13 = param_4;
      _objc_release(lVar5);
      _objc_release(lVar3);
      uVar4 = *(undefined8 *)(param_5 + lVar2);
      func_0x00010c159880(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c980(param_5,param_6,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(param_5);
      _objc_release(uVar4);
      dVar9 = dVar7;
      _CGRectGetMinX(dVar7,dVar10,param_3,param_4);
      _CGRectGetMinX(dVar8,dVar11,uVar12,uVar13);
      _CGRectGetMinY(dVar7,dVar10,param_3,param_4);
      _CGRectGetWidth(dVar7,dVar10,param_3,param_4);
      _CGRectGetHeight(dVar7,dVar10,param_3,param_4);
      return dVar6 * dVar8 + dVar9 * (1.0 - dVar6) + -50.0;
    }
  }
  func_0x00010c159880(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c980(param_5,param_6,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_5);
  _objc_release(lVar5);
  return param_1;
}



/* Entry: 108d1ff24; end: 108d202eb; -[SCStickerPickerIconsCollectionViewLayout prepareLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1ff24(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fe5e8;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_prepareLayout_112620088);
  dVar11 = *(double *)(param_1 + _DAT_11277b2cc);
  lVar9 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0df2e0();
  _objc_release(lVar9);
  if (0 < lVar10) {
    lVar9 = 0;
    lVar10 = 1;
    do {
      lVar2 = param_1;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0deec0();
      _objc_release(lVar2);
      lVar9 = lVar3 + lVar9;
      if ((long)dVar11 < lVar9) {
        puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        if ((long)dVar11 + 1 < lVar9) {
LAB_108d200cc:
          puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar9 = param_1;
          func_0x00010bf40120();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar9;
          func_0x00010c0df2e0();
          _objc_release(lVar9);
          if (lVar10 < lVar2) goto LAB_108d200cc;
          puVar7 = (undefined *)0x0;
        }
        if (puVar6 == (undefined *)0x0) {
LAB_108d20144:
          if (puVar7 == (undefined *)0x0) {
LAB_108d201a4:
            if (puVar6 != (undefined *)0x0) {
              lVar9 = (long)_DAT_11277b2c4;
              goto LAB_108d201b0;
            }
            goto LAB_108d20248;
          }
          lVar9 = (long)_DAT_11277b2c4;
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c159880(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar7;
          func_0x00010c071ae0();
          _objc_release(uVar4);
          if ((int)puVar5 == 0) goto LAB_108d201a4;
          uVar8 = *(undefined8 *)(param_1 + lVar9);
          lVar10 = (long)_DAT_11277b2c8;
          _objc_retain(uVar8);
          uVar4 = *(undefined8 *)(param_1 + lVar10);
          *(undefined8 *)(param_1 + lVar10) = uVar8;
          _objc_release(uVar4);
          if (puVar6 != (undefined *)0x0) goto LAB_108d201b0;
        }
        else {
          lVar9 = (long)_DAT_11277b2c8;
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c159880(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010c071ae0();
          _objc_release(uVar4);
          if ((int)puVar5 == 0) goto LAB_108d20144;
          uVar8 = *(undefined8 *)(param_1 + lVar9);
          lVar9 = (long)_DAT_11277b2c4;
          _objc_retain(uVar8);
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          *(undefined8 *)(param_1 + lVar9) = uVar8;
          _objc_release(uVar4);
LAB_108d201b0:
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c159880(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010c071ae0();
          _objc_release(uVar4);
          if (((ulong)puVar5 & 1) == 0) {
            puVar5 = PTR_PTR_1126dbc98;
            _objc_alloc();
            lVar10 = param_1;
            func_0x00010bf40120(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfff920(*(undefined8 *)(param_1 + _DAT_11277b2b8),
                                *(undefined8 *)(param_1 + _DAT_11277b2bc),
                                *(undefined8 *)(param_1 + _DAT_11277b2c0));
            uVar4 = *(undefined8 *)(param_1 + lVar9);
            *(undefined **)(param_1 + lVar9) = puVar5;
            _objc_release(uVar4);
            _objc_release(lVar10);
          }
LAB_108d20248:
          if (puVar7 == (undefined *)0x0) goto LAB_108d20020;
          lVar10 = (long)_DAT_11277b2c8;
        }
        uVar4 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c159880(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c071ae0();
        _objc_release(uVar4);
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = PTR_PTR_1126dbc98;
          _objc_alloc();
          lVar9 = param_1;
          func_0x00010bf40120(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfff920(*(undefined8 *)(param_1 + _DAT_11277b2b8),
                              *(undefined8 *)(param_1 + _DAT_11277b2bc),
                              *(undefined8 *)(param_1 + _DAT_11277b2c0));
          uVar4 = *(undefined8 *)(param_1 + lVar10);
          *(undefined **)(param_1 + lVar10) = puVar5;
          _objc_release(uVar4);
          _objc_release(lVar9);
        }
        goto LAB_108d20020;
      }
      lVar2 = param_1;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0df2e0();
      _objc_release(lVar2);
      bVar1 = lVar10 < lVar3;
      lVar10 = lVar10 + 1;
    } while (bVar1);
  }
  puVar7 = (undefined *)0x0;
  puVar6 = (undefined *)0x0;
LAB_108d20020:
  _objc_release(puVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 108d202ec; end: 108d203ab; -[SCStickerPickerIconsCollectionViewLayout collectionViewContentSize] */

/* WARNING: Possible PIC construction at 0x000108d20370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d20374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d202ec(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + _DAT_11277b2cc) -
          (double)(long)*(double *)(param_1 + _DAT_11277b2cc);
  if ((dVar3 == 0.0) || (lVar1 = *(long *)(param_1 + _DAT_11277b2c8), lVar1 == 0)) {
    lVar1 = *(long *)(param_1 + _DAT_11277b2c4);
  }
  else if ((dVar3 != 1.0) && (lVar2 = *(long *)(param_1 + _DAT_11277b2c4), lVar2 != 0))
  goto code_r0x00010bf407a0;
  lVar2 = lVar1;
code_r0x00010bf407a0:
                    /* WARNING: Could not recover jumptable at 0x00010bf407b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_collectionViewContentSize_1125adb90);
  return;
}



/* Entry: 108d203ac; end: 108d207eb; -[SCStickerPickerIconsCollectionViewLayout layoutAttributesForElementsInRect:] */

void FUN_108d203ac(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar6;
  long lVar7;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0df2e0();
  _objc_release(lVar6);
  if (0 < lVar7) {
    lVar6 = 0;
    do {
      lVar7 = param_2;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c0deec0();
      _objc_release(lVar7);
      if (0 < lVar3) {
        lVar7 = 0;
        do {
          puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,lVar7,lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_2;
          func_0x00010c08c980(param_2,param_3,puVar4);
          _objc_retainAutoreleasedReturnValue();
          if ((lVar3 != 0) && (func_0x00010bf01b40(lVar3), param_1 != 0.0)) {
            lVar5 = lVar3;
            func_0x00010bfb68e0();
            iVar1 = (int)lVar5;
            _CGRectIntersectsRect();
            if (iVar1 != 0) {
              func_0x00010befa120(puVar2,param_3,lVar3);
            }
          }
          lVar5 = param_2;
          func_0x00010c08c9e0(param_2,param_3,&PTR____CFConstantStringClassReference_110ef2c58,
                              puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          if ((lVar5 != 0) && (func_0x00010bf01b40(lVar5), param_1 != 0.0)) {
            lVar3 = lVar5;
            func_0x00010bfb68e0();
            iVar1 = (int)lVar3;
            _CGRectIntersectsRect();
            if (iVar1 != 0) {
              func_0x00010befa120(puVar2,param_3,lVar5);
            }
          }
          lVar3 = param_2;
          func_0x00010c08c9e0(param_2,param_3,&PTR____CFConstantStringClassReference_110ef2c78,
                              puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          if ((lVar3 != 0) && (func_0x00010bf01b40(lVar3), param_1 != 0.0)) {
            lVar5 = lVar3;
            func_0x00010bfb68e0();
            iVar1 = (int)lVar5;
            _CGRectIntersectsRect();
            if (iVar1 != 0) {
              func_0x00010befa120(puVar2,param_3,lVar3);
            }
          }
          _objc_release(lVar3);
          _objc_release(puVar4);
          lVar7 = lVar7 + 1;
          lVar3 = param_2;
          func_0x00010bf40120();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010c0deec0();
          _objc_release(lVar3);
        } while (lVar7 < lVar5);
      }
      puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010c08c9e0(param_2,param_3,&PTR____CFConstantStringClassReference_110ef2c18,puVar4);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar7 != 0) && (func_0x00010bf01b40(lVar7), param_1 != 0.0)) {
        lVar3 = lVar7;
        func_0x00010bfb68e0();
        iVar1 = (int)lVar3;
        _CGRectIntersectsRect();
        if (iVar1 != 0) {
          func_0x00010befa120(puVar2,param_3,lVar7);
        }
      }
      lVar3 = param_2;
      func_0x00010c08c9e0(param_2,param_3,&PTR____CFConstantStringClassReference_110ef2c38,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      if ((lVar3 != 0) && (func_0x00010bf01b40(lVar3), param_1 != 0.0)) {
        lVar7 = lVar3;
        func_0x00010bfb68e0();
        iVar1 = (int)lVar7;
        _CGRectIntersectsRect();
        if (iVar1 != 0) {
          func_0x00010befa120(puVar2,param_3,lVar3);
        }
      }
      lVar7 = param_2;
      func_0x00010c08c9e0(param_2,param_3,&PTR____CFConstantStringClassReference_110ef2c98,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if ((lVar7 != 0) && (func_0x00010bf01b40(lVar7), param_1 != 0.0)) {
        lVar3 = lVar7;
        func_0x00010bfb68e0();
        iVar1 = (int)lVar3;
        _CGRectIntersectsRect();
        if (iVar1 != 0) {
          func_0x00010befa120(puVar2,param_3,lVar7);
        }
      }
      _objc_release(lVar7);
      _objc_release(puVar4);
      lVar6 = lVar6 + 1;
      lVar7 = param_2;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c0df2e0();
      _objc_release(lVar7);
    } while (lVar6 < lVar3);
  }
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108d207ec; end: 108d20983; -[SCStickerPickerIconsCollectionViewLayout layoutAttributesForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d207ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_7);
  dVar8 = (double)(long)*(double *)(param_5 + _DAT_11277b2cc);
  dVar9 = *(double *)(param_5 + _DAT_11277b2cc) - dVar8;
  if (dVar9 == 0.0) {
LAB_108d20838:
    lVar1 = *(long *)(param_5 + _DAT_11277b2c4);
  }
  else {
    lVar4 = (long)_DAT_11277b2c8;
    lVar1 = *(long *)(param_5 + lVar4);
    if (lVar1 == 0) goto LAB_108d20838;
    dVar5 = 1.0;
    if ((dVar9 != 1.0) && (lVar3 = *(long *)(param_5 + _DAT_11277b2c4), lVar3 != 0)) {
      func_0x00010c08c980(lVar3,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar4);
      func_0x00010c08c980(uVar2,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf51e00(lVar3);
      _objc_release(lVar3);
      func_0x00010bfb68e0(lVar1);
      dVar6 = dVar5;
      func_0x00010bfb68e0(lVar1);
      _CGRectGetMinX();
      dVar7 = dVar6;
      func_0x00010bfb68e0(uVar2);
      _CGRectGetMinX();
      func_0x00010bc851d4(dVar5,dVar8,param_3,param_4,dVar9 * dVar7 + dVar6 * (1.0 - dVar9));
      func_0x00010c19f0e0(lVar1);
      func_0x00010bf01b40(lVar1);
      dVar8 = dVar5;
      func_0x00010bf01b40(uVar2);
      func_0x00010c1677c0(dVar9 * dVar8 + dVar5 * (1.0 - dVar9),lVar1);
      _objc_release(uVar2);
      goto LAB_108d20858;
    }
  }
  func_0x00010c08c980(lVar1,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
LAB_108d20858:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d20984; end: 108d20b5f; -[SCStickerPickerIconsCollectionViewLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d20984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  dVar9 = *(double *)(param_1 + _DAT_11277b2cc) -
          (double)(long)*(double *)(param_1 + _DAT_11277b2cc);
  if (dVar9 == 0.0) {
LAB_108d209dc:
    lVar1 = *(long *)(param_1 + _DAT_11277b2c4);
  }
  else {
    lVar4 = (long)_DAT_11277b2c8;
    lVar1 = *(long *)(param_1 + lVar4);
    if (lVar1 == 0) goto LAB_108d209dc;
    dVar5 = 1.0;
    if ((dVar9 != 1.0) && (lVar3 = *(long *)(param_1 + _DAT_11277b2c4), lVar3 != 0)) {
      func_0x00010c08c9e0(lVar3,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c08c9e0(uVar2,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf51e00(lVar3);
      _objc_release(lVar3);
      func_0x00010bfb68e0(lVar1);
      _CGRectGetMinX();
      dVar6 = dVar5;
      func_0x00010bfb68e0(uVar2);
      _CGRectGetMinX();
      dVar10 = 1.0 - dVar9;
      dVar6 = dVar9 * dVar6;
      dVar8 = dVar6 + dVar5 * dVar10;
      func_0x00010bfb68e0(lVar1);
      _CGRectGetMinY();
      dVar5 = dVar6;
      func_0x00010bfb68e0(lVar1);
      _CGRectGetWidth();
      dVar7 = dVar5;
      func_0x00010bfb68e0(uVar2);
      _CGRectGetWidth();
      dVar7 = dVar9 * dVar7;
      dVar5 = dVar7 + dVar5 * dVar10;
      func_0x00010bfb68e0(lVar1);
      _CGRectGetHeight();
      func_0x00010c19f0e0(dVar8,dVar6,dVar5,dVar7,lVar1);
      func_0x00010bf01b40(lVar1);
      dVar5 = dVar8;
      func_0x00010bf01b40(uVar2);
      func_0x00010c1677c0(dVar9 * dVar5 + dVar8 * dVar10,lVar1);
      _objc_release(uVar2);
      goto LAB_108d20a00;
    }
  }
  func_0x00010c08c9e0(lVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_108d20a00:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d20b60; end: 108d20ca7; -[SCStickerPickerIconsCollectionViewLayout rectForSection:] */

void FUN_108d20b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0deec0();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,0,param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c08c980(param_5,param_6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar4 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  _objc_release(lVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,lVar2 + -1,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c980(param_5,param_6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectUnion_110347600)(param_1,param_2,param_3,param_4,uVar4,uVar5,uVar6,uVar7);
  return;
}



/* Entry: 108d20ca8; end: 108d20d4f; -[SCStickerPickerIconsCollectionViewLayout sectionForScrollOffset:] */

long FUN_108d20ca8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0df2e0();
  _objc_release(lVar3);
  if (lVar4 < 1) {
    lVar4 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = param_1;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0deec0();
      _objc_release(lVar1);
      param_3 = param_3 - lVar2;
      if (param_3 < 0) {
        return lVar3;
      }
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  return lVar4;
}



/* Entry: 108d20d50; end: 108d20ff7; -[SCStickerPickerIconsCollectionViewLayout targetContentOffsetForProposedContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108d20d50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  if ((*(long *)(param_5 + (long)_DAT_11277b2c4) == 0) ||
     (*(long *)(param_5 + (long)_DAT_11277b2c8) == 0)) goto LAB_108d20f28;
  dVar4 = *(double *)(param_5 + (long)_DAT_11277b2cc);
  uVar1 = param_5;
  uVar7 = param_2;
  func_0x00010c155d40(param_5,param_6,(long)dVar4);
  func_0x00010c124580(param_5,param_6,uVar1);
  dVar6 = dVar4;
  uVar8 = uVar7;
  uVar9 = param_3;
  uVar10 = param_4;
  _CGRectGetWidth();
  uVar1 = param_5;
  dVar5 = dVar6;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar11 = dVar5;
  _objc_release(uVar1);
  uVar1 = param_5;
  if (dVar5 <= dVar6) {
    func_0x00010c159800(param_5);
    uVar2 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf20c00();
    _CGRectContainsRect();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_108d20f28;
    dVar6 = dVar11;
    _CGRectGetMaxX(dVar11,uVar8,uVar9,uVar10);
    uVar2 = param_5;
    dVar5 = dVar6;
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMaxX();
    _objc_release(uVar2);
    if (dVar5 < dVar6) {
      _CGRectGetMaxX(dVar11,uVar8,uVar9,uVar10);
      uVar2 = param_5;
      dVar6 = dVar11;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxX();
      dVar4 = dVar11 - dVar6;
      _objc_release(uVar2);
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMinX();
      goto LAB_108d20e48;
    }
  }
  else {
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar6 = dVar4;
    _CGRectGetWidth(dVar4,uVar7,param_3,param_4);
    dVar6 = (dVar11 - dVar6) * -0.5;
    uVar8 = uVar7;
    uVar9 = param_3;
    uVar10 = param_4;
LAB_108d20e48:
    dVar11 = dVar4 + dVar6;
    _objc_release(uVar1);
  }
  _CGRectGetMinX(dVar11,uVar8,uVar9,uVar10);
  dVar6 = dVar11;
  if (dVar11 <= 0.0) {
    dVar6 = 0.0;
  }
  func_0x00010bf407a0(param_5);
  dVar5 = dVar11;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_5);
  _CGRectGetMinX(dVar6,uVar8,uVar9,uVar10);
  param_1 = dVar11 - dVar5;
  if (dVar6 <= dVar11 - dVar5) {
    param_1 = dVar6;
  }
  _CGRectGetMinX(param_1,uVar8,uVar9,uVar10);
LAB_108d20f28:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 108d20ff8; end: 108d21007; -[SCStickerPickerIconsCollectionViewLayout scrollOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d20ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b2cc);
}



/* Entry: 108d21008; end: 108d21017; -[SCStickerPickerIconsCollectionViewLayout setScrollOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d21008(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277b2cc) = param_1;
  return;
}



/* Entry: 108d21018; end: 108d21057; -[SCStickerPickerIconsCollectionViewLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d21018(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b2c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b2c4,0);
  return;
}



/* Entry: 108d21058; end: 108d211e3; -[SCStickerPickerIconsCollectionViewLayoutEngine initWithCollectionView:selectedIndexPath:iconViewWidth:blackOverlayHeight:bottomInset:] */

undefined1 *
FUN_108d21058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fe5f0;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_6);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
    func_0x00010be787e0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108d211e4; end: 108d21237; -[SCStickerPickerIconsCollectionViewLayoutEngine collectionViewContentSize] */

undefined1  [16] FUN_108d211e4(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar2 = *(double *)(param_2 + 0x58);
  _objc_release(lVar1);
  auVar4._8_8_ = param_1 - dVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 108d21238; end: 108d2123f; -[SCStickerPickerIconsCollectionViewLayoutEngine layoutAttributesForItemAtIndexPath:] */

void FUN_108d21238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 108d21240; end: 108d21337; -[SCStickerPickerIconsCollectionViewLayoutEngine layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

void FUN_108d21240(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2c58);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2c78);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2c18);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2c38);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2c98);
          if ((int)uVar1 == 0) {
            uVar2 = 0;
            goto LAB_108d2130c;
          }
          lVar3 = 0x50;
        }
        else {
          lVar3 = 0x48;
        }
      }
      else {
        lVar3 = 0x40;
      }
    }
    else {
      lVar3 = 0x38;
    }
  }
  else {
    lVar3 = 0x30;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0e00e0(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_108d2130c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d21338; end: 108d21bab; -[SCStickerPickerIconsCollectionViewLayoutEngine _prepareLayout] */

void FUN_108d21338(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  dVar19 = *(double *)(param_2 + 0x10);
  lVar15 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar15;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2 + 8;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar3;
  func_0x00010c0df300(lVar3,param_3,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar15);
  lVar15 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar15;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2 + 8;
  _objc_loadWeakRetained(lVar9);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c1554e0(uVar5);
  lVar6 = lVar3;
  func_0x00010bf404e0(lVar3,param_3,lVar9,uVar5);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar15);
  dVar24 = 12.0;
  if (lVar6 != 1) {
    param_1 = *(double *)(param_2 + 0x10);
    dVar19 = (double)(lVar6 + 1) * 12.0 + (double)lVar6 * param_1;
    lVar15 = param_2 + 8;
    _objc_loadWeakRetained(lVar15);
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar25 = param_1 + -18.0;
    _objc_release(lVar15);
    if (dVar25 < dVar19) {
      param_1 = *(double *)(param_2 + 0x10);
      dVar24 = 9.0;
      dVar19 = (double)(lVar6 + 1) * 9.0 + (double)lVar6 * param_1;
    }
  }
  lVar15 = param_2 + 8;
  _objc_loadWeakRetained(lVar15);
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar25 = *(double *)(param_2 + 0x10);
  _objc_release(lVar15);
  dVar19 = ((param_1 - dVar19) - (double)(lVar4 + -1) * dVar25) / (double)lVar4;
  if (dVar19 <= 16.0) {
    dVar19 = 16.0;
  }
  dVar16 = 0.5;
  dVar20 = dVar19 * 0.5;
  lVar15 = param_2 + 8;
  _objc_loadWeakRetained(lVar15);
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar22 = *(double *)(param_2 + 0x58);
  _objc_release(lVar15);
  lVar15 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar15;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2 + 8;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar3;
  func_0x00010c0df300(lVar3,param_3,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar15);
  dVar25 = dVar20;
  if (0 < lVar4) {
    lVar15 = 0;
    dVar16 = dVar16 - dVar22;
    do {
      puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,lVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2 + 8;
      _objc_loadWeakRetained();
      lVar4 = lVar9;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2 + 8;
      _objc_loadWeakRetained(lVar3);
      lVar6 = lVar4;
      func_0x00010bf404e0(lVar4,param_3,lVar3,lVar15);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar9);
      if (lVar6 == 1) {
        puVar8 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3,
                            &PTR____CFConstantStringClassReference_110ef2c38,puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0(dVar25,0,*(undefined8 *)(param_2 + 0x10),dVar16);
        func_0x00010c227920(puVar8,param_3,2);
        lVar9 = *(long *)(param_2 + 0x60);
        func_0x00010c1554e0();
        uVar5 = 0x3ff0000000000000;
        if (lVar15 != lVar9) {
          uVar5 = 0;
        }
        func_0x00010c1677c0(uVar5,puVar8);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x48),param_3,puVar8,puVar7);
        _objc_release(puVar8);
        bVar1 = false;
      }
      else {
        lVar9 = *(long *)(param_2 + 0x60);
        func_0x00010c1554e0();
        bVar1 = lVar15 == lVar9;
      }
      dVar22 = 0.0;
      puVar8 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3,
                          &PTR____CFConstantStringClassReference_110ef2c18,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar25,0,*(undefined8 *)(param_2 + 0x10),dVar16);
      func_0x00010c227920(puVar8,param_3,1);
      dVar17 = 0.0;
      if (!bVar1) {
        dVar25 = dVar25 + dVar19 + *(double *)(param_2 + 0x10);
        dVar17 = 1.0;
      }
      func_0x00010c1677c0(dVar17,puVar8);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x40),param_3,puVar8,puVar7);
      if (lVar6 == 1) {
        puVar10 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3,
                            puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0(puVar8);
        func_0x00010c19f0e0(puVar10);
        func_0x00010c227920(puVar10,param_3,3);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar10,puVar7);
      }
      else {
        lVar9 = param_2 + 8;
        _objc_loadWeakRetained();
        lVar4 = lVar9;
        func_0x00010bf643e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_2 + 8;
        _objc_loadWeakRetained(lVar3);
        lVar6 = lVar4;
        func_0x00010bf404e0(lVar4,param_3,lVar3,lVar15);
        _objc_release(lVar3);
        _objc_release(lVar4);
        _objc_release(lVar9);
        if (lVar6 < 1) {
          dVar26 = 0.0;
        }
        else {
          lVar9 = 0;
          dVar23 = dVar22;
          dVar27 = 0.0;
          do {
            puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,lVar9,lVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
            func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3
                                ,&PTR____CFConstantStringClassReference_110ef2c58,puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
            func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3
                                ,&PTR____CFConstantStringClassReference_110ef2c78,puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c227920(puVar11,param_3,1);
            func_0x00010c227920(puVar12,param_3,2);
            if (bVar1) {
              dVar26 = dVar24 + dVar25;
              dVar22 = dVar25;
              if (lVar9 != 0) {
                dVar26 = dVar25;
                dVar22 = dVar23;
              }
              func_0x00010c19f0e0(dVar26,0,*(undefined8 *)(param_2 + 0x10),dVar16,puVar11);
              func_0x00010bfb68e0(puVar11);
              func_0x00010c19f0e0(puVar12);
              dVar26 = dVar26 + dVar24 + *(double *)(param_2 + 0x10);
              uVar5 = *(undefined8 *)(param_2 + 0x60);
              func_0x00010c071ae0(uVar5,param_3,puVar10);
              bVar2 = (int)uVar5 == 0;
              uVar5 = 0x3ff0000000000000;
              if (bVar2) {
                uVar5 = 0;
              }
              uVar21 = 0;
              if (bVar2) {
                uVar21 = 0x3ff0000000000000;
              }
              func_0x00010c1677c0(uVar5,puVar12);
              func_0x00010c1677c0(uVar21,puVar11);
              lVar3 = param_2 + 8;
              _objc_loadWeakRetained();
              lVar6 = lVar3;
              func_0x00010bf643e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = param_2 + 8;
              _objc_loadWeakRetained(lVar4);
              lVar13 = lVar6;
              func_0x00010bf404e0(lVar6,param_3,lVar4,lVar15);
              _objc_release(lVar4);
              _objc_release(lVar6);
              _objc_release(lVar3);
              dVar17 = dVar19 + dVar26;
              dVar25 = dVar17;
              if (lVar9 != lVar13 + -1) {
                dVar25 = dVar26;
                dVar26 = dVar27;
              }
            }
            else {
              dVar18 = *(double *)(param_2 + 0x10);
              dVar17 = (dVar25 - dVar19) - dVar18;
              dVar22 = dVar17;
              dVar26 = dVar18 + dVar17;
              if (lVar9 != 0) {
                dVar22 = dVar23;
                dVar26 = dVar27;
              }
              func_0x00010c19f0e0(dVar17,0,dVar18,dVar16,puVar11);
              func_0x00010bfb68e0(puVar11);
              func_0x00010c19f0e0(puVar12);
              func_0x00010c1677c0(0,puVar11);
              dVar17 = 0.0;
              func_0x00010c1677c0(0,puVar12);
            }
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x30),param_3,puVar11,puVar10);
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,puVar12,puVar10);
            puVar14 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
            func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3
                                ,puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0(puVar11);
            func_0x00010c19f0e0(puVar14);
            func_0x00010c227920(puVar14,param_3,3);
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar14,puVar10);
            _objc_release(puVar14);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            lVar9 = lVar9 + 1;
            lVar3 = param_2 + 8;
            _objc_loadWeakRetained();
            lVar6 = lVar3;
            func_0x00010bf643e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_2 + 8;
            _objc_loadWeakRetained(lVar4);
            lVar13 = lVar6;
            func_0x00010bf404e0(lVar6,param_3,lVar4,lVar15);
            _objc_release(lVar4);
            _objc_release(lVar6);
            _objc_release(lVar3);
            dVar23 = dVar22;
            dVar27 = dVar26;
          } while (lVar9 < lVar13);
        }
        puVar10 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3,
                            &PTR____CFConstantStringClassReference_110ef2c98,puVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_2 + 8;
        _objc_loadWeakRetained(lVar9);
        func_0x00010bf20c00();
        _CGRectGetHeight();
        func_0x00010c19f0e0(dVar22,((dVar17 - *(double *)(param_2 + 0x18)) -
                                   *(double *)(param_2 + 0x58)) * 0.5,dVar26 - dVar22,puVar10);
        _objc_release(lVar9);
        if (!bVar1) {
          func_0x00010c1677c0(0,puVar10);
        }
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50),param_3,puVar10,puVar7);
      }
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      lVar15 = lVar15 + 1;
      lVar9 = param_2 + 8;
      _objc_loadWeakRetained();
      lVar4 = lVar9;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2 + 8;
      _objc_loadWeakRetained(lVar3);
      lVar6 = lVar4;
      func_0x00010c0df300(lVar4,param_3,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar9);
    } while (lVar15 < lVar6);
  }
  *(double *)(param_2 + 0x20) = dVar25 - dVar20;
  return;
}



/* Entry: 108d21bac; end: 108d21bb3; -[SCStickerPickerIconsCollectionViewLayoutEngine selectedIndexPath] */

undefined8 FUN_108d21bac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108d21bb4; end: 108d21c27; -[SCStickerPickerIconsCollectionViewLayoutEngine .cxx_destruct] */

void FUN_108d21bb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108d21c28; end: 108d21ca3; -[SCStickerPickerInteractiveStickersCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108d21c28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe5f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b300);
    *(undefined **)((long)puVar1 + (long)_DAT_11277b300) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b304) = 0xbff0000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d21ca4; end: 108d21d03; -[SCStickerPickerInteractiveStickersCell setRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d21ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277b308;
  if (*(long *)(param_1 + lVar2) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010beaa4c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d21d04; end: 108d21dab; -[SCStickerPickerInteractiveStickersCell setStickers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d21d04(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11277b30c;
    uVar1 = *(ulong *)(param_1 + lVar3);
    if ((uVar1 == 0) || (func_0x00010c071ae0(uVar1,param_2,param_3), (uVar1 & 1) == 0)) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277b300);
      lVar3 = param_3;
      func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ac2818,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2,param_2,lVar3);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d21dac; end: 108d22053; -[SCStickerPickerInteractiveStickersCell _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d21dac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar5 = (long)_DAT_11277b310;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126dbca0;
    _objc_alloc_init(PTR_PTR_1126dbca0);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277b300);
    func_0x00010c272120(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bd40(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dbca8;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11277b314;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,param_1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108d22054;
    puStack_88 = &UNK_110ac2798;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c1d3640(*(undefined8 *)(param_1 + lVar4));
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_108d2215c;
    puStack_b0 = &UNK_1108681f8;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c1d3760(*(undefined8 *)(param_1 + lVar4));
    puStack_f0 = puVar3;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_108d22298;
    puStack_d8 = &UNK_110842c58;
    _objc_copyWeak(auStack_d0,auStack_78);
    func_0x00010c225a40(*(undefined8 *)(param_1 + lVar4));
    _objc_copyWeak(auStack_f8,auStack_78);
    func_0x00010c18db40(*(undefined8 *)(param_1 + lVar4));
    puVar3 = PTR_PTR_1126dbcb0;
    _objc_alloc();
    func_0x00010c061d40();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108d22054; end: 108d2215b;  */

void FUN_108d22054(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108d220fc;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108d2215c; end: 108d221e3;  */

void FUN_108d2215c(undefined8 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d221e4;
  puStack_48 = &UNK_110846540;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 108d221e4; end: 108d22297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d221e4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    dVar5 = *(double *)(param_1 + 0x28);
    lVar4 = (long)_DAT_11277b30c;
    uVar2 = *(ulong *)(lVar1 + lVar4);
    func_0x00010bf529e0();
    if (dVar5 < (double)uVar2) {
      uVar3 = *(undefined8 *)(lVar1 + lVar4);
      func_0x00010c0dfd20(uVar3,param_2,(long)*(double *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1 + _DAT_11277b318;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf7d5a0();
      _objc_release(lVar4);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d22298; end: 108d222d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d22298(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + _DAT_11277b304) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d222d4; end: 108d22363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d222d4(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_2 + _DAT_11277b30c);
    func_0x00010bf529e0();
    if (lVar1 == lVar2) {
      _CACurrentMediaTime();
      func_0x00010be006c0(param_1 - *(double *)(param_2 + _DAT_11277b304),param_2);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d22364; end: 108d2248b; -[SCStickerPickerInteractiveStickersCell _didShowStickers:timeToDisplay:] */

void FUN_108d22364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d2248c;
  puStack_68 = &UNK_110ac27c8;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  ppuVar2 = &puStack_80;
  uStack_60 = param_4;
  uStack_50 = param_1;
  _objc_retainBlock();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108d22550;
  puStack_98 = &UNK_110848708;
  _objc_copyWeak(auStack_88,auStack_48);
  _objc_retain(ppuVar2);
  ppuStack_90 = ppuVar2;
  func_0x000107c312d0("APPSTORE",&puStack_b0);
  _objc_release(ppuStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 108d2248c; end: 108d2254f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d2248c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar6 = 0;
      lVar2 = (long)_DAT_11277b30c;
      do {
        uVar3 = *(undefined8 *)(lVar1 + lVar2);
        func_0x00010c0dfd20(uVar3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1 + _DAT_11277b318;
        _objc_loadWeakRetained(lVar4);
        func_0x00010c068de0(*(undefined8 *)(param_1 + 0x30));
        _objc_release(lVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar5 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf529e0();
      } while (uVar6 < uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d22550; end: 108d225d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d22550(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar5 = (long)_DAT_11277b31c;
    iVar1 = (int)*(undefined8 *)(lVar2 + lVar5);
    func_0x00010c082b20();
    if (iVar1 != 0) {
      func_0x00010c069d00(*(undefined8 *)(lVar2 + lVar5));
    }
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c150360(0x3fb999999999999a,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,0,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + lVar5);
    *(undefined **)(lVar2 + lVar5) = puVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108d225d8; end: 108d225f7; -[SCStickerPickerInteractiveStickersCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d225d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d225f8; end: 108d2260b; -[SCStickerPickerInteractiveStickersCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d225f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b318,param_3);
  return;
}



/* Entry: 108d2260c; end: 108d22697; -[SCStickerPickerInteractiveStickersCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d2260c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b318);
  _objc_storeStrong(param_1 + _DAT_11277b31c,0);
  _objc_storeStrong(param_1 + _DAT_11277b300,0);
  _objc_storeStrong(param_1 + _DAT_11277b310,0);
  _objc_storeStrong(param_1 + _DAT_11277b314,0);
  _objc_storeStrong(param_1 + _DAT_11277b30c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b308,0);
  return;
}



/* Entry: 108d22698; end: 108d227c7;  */

void FUN_108d22698(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d4fc0;
  _objc_opt_class(PTR_PTR_1126d4fc0);
  puVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = param_2;
    func_0x00010c271a60(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ba8f8;
    _objc_opt_new(PTR_PTR_1126ba8f8);
    func_0x00010c21acc0();
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    func_0x00010c1ac500();
    puVar4 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    func_0x00010c196600();
    puVar1 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    func_0x00010c1b5d40();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b3800;
  _objc_alloc(PTR_PTR_1126b3800);
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa140(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108d227c8; end: 108d22837; -[SCStickerPickerLayoutAttributes copyWithZone:] */

undefined1 * FUN_108d227c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe600;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_copyWithZone__1125b2238);
  func_0x00010bf857a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fb40(puVar1);
  _objc_release(param_1);
  return (undefined1 *)puVar1;
}



/* Entry: 108d22838; end: 108d2292f; -[SCStickerPickerLayoutAttributes isEqual:] */

undefined1 * FUN_108d22838(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar6 = &uStack_50;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dbc80;
  _objc_opt_class(PTR_PTR_1126dbc80);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = param_1;
    func_0x00010bf857a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf857a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      puStack_48 = PTR_PTR_1126fe600;
      uStack_50 = param_1;
      _objc_msgSendSuper2(&uStack_50,PTR_s_isEqual__1125fa0c8,param_3);
      goto LAB_108d22904;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_108d22904:
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar6;
}



/* Entry: 108d22930; end: 108d2293f; -[SCStickerPickerLayoutAttributes displayGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d22930(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b320);
}



/* Entry: 108d22940; end: 108d2294b; -[SCStickerPickerLayoutAttributes setDisplayGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d22940(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d2294c; end: 108d2295f; -[SCStickerPickerLayoutAttributes .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d2294c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b320,0);
  return;
}



/* Entry: 108d22960; end: 108d229ff; -[SCStickerPickerScrollPerformanceEvent initWithStartDate:startTime:] */

undefined1 *
FUN_108d22960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe608;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108d22a00; end: 108d22b17; -[SCStickerPickerScrollPerformanceEvent finishWithEndTime:] */

void FUN_108d22a00(double param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  func_0x00010c196200();
  puVar1 = PTR_PTR_1126dbcb8;
  _objc_opt_new(PTR_PTR_1126dbcb8);
  uVar2 = param_2;
  func_0x00010c24e820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d280(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010bf95780(param_2);
  dVar4 = param_1;
  func_0x00010c250f20(param_2);
  func_0x00010c1f7ca0(puVar1,param_3,(long)((param_1 - dVar4) * 1000.0));
  uVar2 = param_2;
  func_0x00010c254540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf446e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b440(puVar1,param_3,uVar2);
  func_0x00010bfb6b20(param_2);
  func_0x00010c19ef40((double)param_2 / (param_1 - dVar4),puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d22b18; end: 108d22b1f; -[SCStickerPickerScrollPerformanceEvent startDate] */

undefined8 FUN_108d22b18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d22b20; end: 108d22b4f; -[SCStickerPickerScrollPerformanceEvent setStartDate:] */

void FUN_108d22b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d22b50; end: 108d22b57; -[SCStickerPickerScrollPerformanceEvent startTime] */

undefined8 FUN_108d22b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d22b58; end: 108d22b5f; -[SCStickerPickerScrollPerformanceEvent setStartTime:] */

void FUN_108d22b58(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108d22b60; end: 108d22b67; -[SCStickerPickerScrollPerformanceEvent endTime] */

undefined8 FUN_108d22b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d22b68; end: 108d22b6f; -[SCStickerPickerScrollPerformanceEvent setEndTime:] */

void FUN_108d22b68(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108d22b70; end: 108d22b77; -[SCStickerPickerScrollPerformanceEvent stickerPackIDs] */

undefined8 FUN_108d22b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108d22b78; end: 108d22ba7; -[SCStickerPickerScrollPerformanceEvent setStickerPackIDs:] */

void FUN_108d22b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d22ba8; end: 108d22baf; -[SCStickerPickerScrollPerformanceEvent frameCount] */

undefined8 FUN_108d22ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108d22bb0; end: 108d22bb7; -[SCStickerPickerScrollPerformanceEvent setFrameCount:] */

void FUN_108d22bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108d22bb8; end: 108d22be7; -[SCStickerPickerScrollPerformanceEvent .cxx_destruct] */

void FUN_108d22bb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d22be8; end: 108d22c8b; -[SCStickerPickerScrollPerformanceTracker initWithStickerCategoryType:userBlizzardLogger:] */

undefined1 * FUN_108d22be8(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_40;
  _objc_retain(param_4);
  if (param_3 == 3) {
    puStack_38 = PTR_PTR_1126fe610;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar2 != (undefined1 **)0x0) {
      _objc_retain(param_4);
      uVar1 = *(undefined8 *)((long)ppuVar2 + 0x18);
      *(undefined8 *)((long)ppuVar2 + 0x18) = param_4;
      _objc_release(uVar1);
    }
    _objc_retain(ppuVar2);
    param_1 = (undefined1 *)ppuVar2;
  }
  else {
    ppuVar2 = (undefined1 **)0x0;
  }
  _objc_release(param_4);
  _objc_release(param_1);
  return (undefined1 *)ppuVar2;
}



/* Entry: 108d22c8c; end: 108d22ccf; -[SCStickerPickerScrollPerformanceTracker dealloc] */

void FUN_108d22c8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be16e40();
  puStack_28 = PTR_PTR_1126fe610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d22cd0; end: 108d22dcb; -[SCStickerPickerScrollPerformanceTracker willBeginScrolling] */

void FUN_108d22cd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126dbcc0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c04ba20();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar4);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 108d22dcc; end: 108d22e2f; -[SCStickerPickerScrollPerformanceTracker trackStickerPackID:] */

void FUN_108d22dcc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    _objc_retain(param_3);
    func_0x00010c254540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 108d22e30; end: 108d22e3b; -[SCStickerPickerScrollPerformanceTracker didEndDraggingAndWillDecelerate:] */

void FUN_108d22e30(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be16e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishEvent_112563530);
  return;
}



/* Entry: 108d22e3c; end: 108d22e3f; -[SCStickerPickerScrollPerformanceTracker didEndDecelerating] */

void FUN_108d22e3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishEvent_112563530);
  return;
}



/* Entry: 108d22e40; end: 108d22e43; -[SCStickerPickerScrollPerformanceTracker interrupt] */

void FUN_108d22e40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishEvent_112563530);
  return;
}



/* Entry: 108d22e44; end: 108d22f0f; -[SCStickerPickerScrollPerformanceTracker _finishEvent] */

void FUN_108d22e44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    _objc_retain(lVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    func_0x00010c1d9980(*(undefined8 *)(param_1 + 8),param_2,1);
    lVar2 = lVar4;
    func_0x00010c254540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      _CACurrentMediaTime();
      lVar2 = lVar4;
      func_0x00010bfafe40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 108d22f10; end: 108d22f3b; -[SCStickerPickerScrollPerformanceTracker _displayLinkDidFire:] */

void FUN_108d22f10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x00010bfb6b20(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c19f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setFrameCount__1126456c0,lVar1 + 1);
  return;
}



/* Entry: 108d22f3c; end: 108d22f77; -[SCStickerPickerScrollPerformanceTracker .cxx_destruct] */

void FUN_108d22f3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d22f78; end: 108d22f7f; -[SCHighlightedIndicatorProperties centerX] */

undefined8 FUN_108d22f78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d22f80; end: 108d22f87; -[SCHighlightedIndicatorProperties setCenterX:] */

void FUN_108d22f80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 108d22f88; end: 108d22f8f; -[SCHighlightedIndicatorProperties width] */

undefined8 FUN_108d22f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d22f90; end: 108d22f97; -[SCHighlightedIndicatorProperties setWidth:] */

void FUN_108d22f90(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108d22f98; end: 108d232f7; -[SCStickerPickerV2IconsController initWithFrame:] */

undefined1 *
FUN_108d22f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126fe618;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = 0x4038000000000000;
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    func_0x00010c1c82c0(0x4038000000000000);
    func_0x00010c1c8300(0x4038000000000000,puVar2);
    func_0x00010c1b6260(*(undefined8 *)((long)puVar1 + 0x30),*(undefined8 *)((long)puVar1 + 0x30),
                        puVar2);
    func_0x00010c1f7ac0(puVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    func_0x00010c20fda0(puVar1);
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189840();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2025c0();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d5018);
    func_0x00010c126000(puVar4);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x00010c126000(puVar4);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    _objc_release(puVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c262bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d232f8; end: 108d232ff; -[SCStickerPickerV2IconsController numberOfSectionsInCollectionView:] */

undefined8 FUN_108d232f8(void)

{
  return 1;
}



/* Entry: 108d23300; end: 108d23337; -[SCStickerPickerV2IconsController collectionView:numberOfItemsInSection:] */

long FUN_108d23300(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0df460();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108d23338; end: 108d2334b; -[SCStickerPickerV2IconsController collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_108d23338(void)

{
  return 0;
}



/* Entry: 108d2334c; end: 108d23497; -[SCStickerPickerV2IconsController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

double FUN_108d2334c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_5;
  func_0x00010c262bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bf404e0(param_5,param_6,lVar1,param_9);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c262bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(lVar1);
  dVar3 = param_1;
  func_0x00010be4c440(param_5,param_6,lVar2);
  if (dVar3 < 24.0) {
    func_0x00010bf40280(param_5,param_6,param_7,param_8,param_9);
    dVar3 = param_4 + param_1 + *(double *)(param_5 + 0x30) * 0.4;
    func_0x00010be4c440(dVar3,param_5,param_6,
                        (long)(double)(long)((param_1 - param_2) /
                                            (*(double *)(param_5 + 0x30) + 24.0)));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return dVar3;
}



/* Entry: 108d23498; end: 108d234d7; -[SCStickerPickerV2IconsController _lineSpacingForWidth:numberOfItems:] */

double FUN_108d23498(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  double dVar1;
  double dVar2;
  
  dVar2 = 24.0;
  if (1 < (long)param_4) {
    dVar1 = ((param_1 - *(double *)(param_2 + 0x30) * (double)param_4) + -24.0) /
            (double)(param_4 - 1);
    dVar2 = 24.0;
    if (24.0 <= dVar1) {
      dVar2 = dVar1;
    }
  }
  return dVar2;
}



/* Entry: 108d234d8; end: 108d238ef; -[SCStickerPickerV2IconsController collectionView:cellForItemAtIndexPath:] */

void FUN_108d234d8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2 + 0x48;
  _objc_loadWeakRetained();
  func_0x00010c0840e0(param_5);
  lVar2 = lVar1;
  func_0x00010c2550c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c27dd80();
  uVar3 = param_4;
  func_0x00010bf6e0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 - *(double *)(param_2 + 0x30);
  dVar9 = param_1 * 0.5;
  func_0x00010bf20c00(uVar3);
  _CGRectGetHeight();
  func_0x00010c1aace0(dVar9,(param_1 - *(double *)(param_2 + 0x30)) * 0.5,uVar3);
  lVar8 = *(long *)(param_2 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar8 == 0) || (lVar1 == 5)) {
    _objc_release();
    _objc_release(puVar4);
  }
  else {
    _objc_release();
    _objc_release(puVar4);
    if (lVar1 != 2) {
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9720(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar4);
      func_0x00010c1a9760(uVar3);
      goto LAB_108d23834;
    }
  }
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108d238f0;
  uStack_88 = 0x108d23900;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_108d238f0;
  uStack_b8 = 0x108d23900;
  uStack_b0 = 0;
  lVar8 = lVar2;
  puStack_d0 = &uStack_d8;
  puStack_a0 = &uStack_a8;
  func_0x00010bf33400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_108d23908;
  puStack_e8 = &UNK_1109910c0;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_108d23940;
  puStack_118 = &UNK_110ac2838;
  puStack_110 = &uStack_a8;
  puStack_108 = &uStack_d8;
  puStack_e0 = &uStack_a8;
  func_0x00010c0c0ce0();
  _objc_release(lVar8);
  func_0x00010c1a9760(uVar3);
  _objc_initWeak(auStack_138,param_2);
  puStack_168 = puVar4;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x108d239b4;
  puStack_150 = &UNK_110871040;
  _objc_copyWeak(auStack_148,auStack_138);
  ppuVar5 = &puStack_168;
  lStack_140 = lVar1;
  _objc_retainBlock();
  uVar7 = puStack_a0[5];
  ppuVar6 = ppuVar5;
  _objc_retain();
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_138);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
LAB_108d23834:
  func_0x00010c27dd80(lVar2);
  func_0x00010bddbf80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar3);
  _objc_release(param_2);
  func_0x00010c21acc0(uVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108d238f0; end: 108d23907;  */

void FUN_108d238f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108d23908; end: 108d2393f;  */

void FUN_108d23908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d23940; end: 108d23a9b;  */

void FUN_108d23940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d23a9c; end: 108d23aeb; -[SCStickerPickerV2IconsController setSelectedIndex:] */

void FUN_108d23a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d23aec; end: 108d23d2b; -[SCStickerPickerV2IconsController _handleSuperIconTap:] */

/* WARNING: Possible PIC construction at 0x000108d23dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d23dcc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_108d23aec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010c252440();
  dVar9 = param_1;
  if (lVar2 == 3) {
    lVar2 = param_5;
    func_0x00010c262bc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_7);
    uVar10 = param_2;
    _objc_release(lVar2);
    dVar9 = 0.0;
    lVar2 = param_5;
    func_0x00010c262bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(undefined8 *)(lVar8 * 8);
        lVar4 = param_5;
        func_0x00010c262bc0();
        iVar1 = (int)lVar4;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0(uVar7);
        func_0x00010be190c0(param_5);
        _CGRectInset();
        _objc_release();
        _CGRectContainsPoint(dVar9,uVar10,param_3,param_4,param_1,param_2);
        if (iVar1 != 0) {
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0840e0(uVar7);
          func_0x00010bf7b240(param_5);
          _objc_release(param_5);
          goto LAB_108d23cd0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
LAB_108d23cd0:
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (0.0 <= dVar9) {
    lVar2 = param_7;
    func_0x00010c262bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0deec0();
    _objc_release(lVar2);
    if (dVar9 < (double)lVar6) {
      lVar2 = param_7;
      func_0x00010c262bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_7 + 0x10),PTR_s_setHidden__1126479f8,lVar5 == 0);
      return;
    }
  }
  return;
}



/* Entry: 108d23d2c; end: 108d23ecb; -[SCStickerPickerV2IconsController setSuperCategoryHighlightedItemIndex:] */

/* WARNING: Possible PIC construction at 0x000108d23dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d23dcc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_108d23d2c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0.0 <= param_1) {
    lVar1 = param_2;
    func_0x00010c262bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0deec0();
    _objc_release(lVar1);
    if (param_1 < (double)lVar2) {
      lVar1 = param_2;
      func_0x00010c262bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 0x10),PTR_s_setHidden__1126479f8,lVar3 == 0);
      return;
    }
  }
  return;
}



/* Entry: 108d23ecc; end: 108d23f87; -[SCStickerPickerV2IconsController _frameForItemInCollectionView:atIndex:] */

undefined8
FUN_108d23ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_4);
  func_0x00010bfed020(puVar1,param_3,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c08c980(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfb68e0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108d23f88; end: 108d2414f; -[SCStickerPickerV2IconsController _getHighlightedIndicatorProperties:withHighlightedItemIndex:] */

void FUN_108d23f88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  
  dVar11 = param_1;
  _objc_retain(param_7);
  uVar4 = (ulong)param_1;
  uVar3 = (long)param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
  lVar1 = *(long *)(param_5 + 0x38);
  func_0x00010c0deec0(lVar1,param_6,0);
  if (lVar1 <= (long)uVar4) {
    lVar1 = *(long *)(param_5 + 0x38);
    func_0x00010c0deec0(lVar1,param_6,0);
    uVar4 = lVar1 - 1;
  }
  func_0x00010be190c0(param_5,param_6,param_7,uVar3);
  if (uVar3 == uVar4) {
    dVar7 = dVar11;
    _CGRectGetMidX(dVar11,param_2,param_3,param_4);
    _CGRectGetWidth(dVar11,param_2,param_3,param_4);
  }
  else {
    dVar5 = dVar11;
    uVar8 = param_2;
    uVar9 = param_3;
    uVar10 = param_4;
    func_0x00010be190c0(param_5,param_6,param_7,uVar4);
    dVar7 = dVar11;
    _CGRectGetMidX(dVar11,param_2,param_3,param_4);
    dVar6 = dVar5;
    _CGRectGetMidX(dVar5,uVar8,uVar9,uVar10);
    dVar7 = (param_1 - (double)uVar3) * dVar6 + dVar7 * ((double)(long)uVar4 - param_1);
    _CGRectGetWidth(dVar11,param_2,param_3,param_4);
    _CGRectGetWidth(dVar5,uVar8,uVar9,uVar10);
    dVar11 = (param_1 - (double)uVar3) * dVar5 + dVar11 * ((double)(long)uVar4 - param_1);
  }
  puVar2 = PTR_PTR_1126dbcc8;
  _objc_alloc_init(PTR_PTR_1126dbcc8);
  func_0x00010c17a840(dVar7);
  func_0x00010c2256c0(dVar11 + 35.0,puVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108d24150; end: 108d241a3; -[SCStickerPickerV2IconsController _categoryIconCellAccessibilityIdentifierFromIndexPath:] */

void FUN_108d24150(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  uVar1 = param_3 - 2;
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea1398;
  if ((uVar1 < 0xb) && ((0x48fU >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
    ppuVar2 = *(undefined ***)(&PTR_PTR_110ac2868)[uVar1];
    _objc_retain(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108d241a4; end: 108d242e3; -[SCStickerPickerV2IconsController _scrollItemAtIndexToVisible:] */

void FUN_108d241a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (-1 < param_7) {
    lVar1 = param_5;
    func_0x00010c262bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0deec0();
    _objc_release(lVar1);
    if (param_7 < lVar2) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,param_7,0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c08c980(uVar4,param_6,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(uVar4);
      _CGRectInset(param_1,param_2,param_3,param_4,0xc028000000000000,0);
      uVar5 = *(ulong *)(param_5 + 0x38);
      func_0x00010bfb68e0();
      _CGRectContainsRect();
      if ((uVar5 & 1) == 0) {
        func_0x00010c1521c0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x38),param_6,
                            1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 108d242e4; end: 108d24403; -[SCStickerPickerV2IconsController stickerPickerIconCellForType:] */

void FUN_108d242e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = *(long *)(lStack_118 + lVar6 * 8);
        lVar3 = lVar4;
        func_0x00010c27dd80();
        if (lVar3 == param_3) {
          _objc_retain(lVar4);
          goto LAB_108d243c0;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  lVar4 = 0;
LAB_108d243c0:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 108d24404; end: 108d2440f; -[SCStickerPickerV2IconsController superIconsCollectionView] */

void FUN_108d24404(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 108d24410; end: 108d24417; -[SCStickerPickerV2IconsController setSuperIconsCollectionView:] */

void FUN_108d24410(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108d24418; end: 108d2442f; -[SCStickerPickerV2IconsController delegate] */

void FUN_108d24418(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


