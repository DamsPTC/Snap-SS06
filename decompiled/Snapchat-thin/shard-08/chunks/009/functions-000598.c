/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067475c4; end: 1067476b7;  */

void FUN_1067475c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  if ((param_4 != 0) && (param_5 == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
    }
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bdc5c20();
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bdc5c20();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010674765c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1067476b8; end: 1067477bb; -[SCEmbeddedMapManager _addAccessoryViewsToMapView:personImageView:labelImageView:propImageView:context:] */

void FUN_1067476b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010bdc60e0(param_1,param_2,param_3,param_4);
  }
  if (param_5 == 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bfb68e0(param_4);
      func_0x00010bdc6280(param_1,param_2,param_3);
    }
  }
  else {
    func_0x00010bfb68e0(param_4);
    func_0x00010bdc9200(param_1,param_2,param_5,param_3,param_7);
  }
  if (param_6 != 0) {
    func_0x00010bdc7ee0(param_1,param_2,param_6,param_3,param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067477bc; end: 106747893; -[SCEmbeddedMapManager _addPropImageView:toMapView:withPersonImageView:] */

void FUN_1067477bc(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_9);
  func_0x00010bfb68e0(param_9);
  dVar1 = -100.0;
  func_0x00010bfb68e0(param_9);
  func_0x00010bfb68e0(param_9);
  _objc_release(param_9);
  func_0x00010c19f0e0(param_1 + param_3 + -100.0,dVar1 + param_4 + -80.0,0x4054000000000000,
                      0x4054000000000000,param_7);
  func_0x00010befbb60(param_8,param_6,param_7);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106747894; end: 1067479af; -[SCEmbeddedMapManager _addBitmojiShadowToMapView:belowPersonImageView:] */

void FUN_106747894(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_8);
  uVar1 = param_7;
  _objc_retain(param_7);
  func_0x000106b1d1b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(uVar1);
  dVar4 = param_2 * 0.7;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  dVar3 = *(double *)(param_5 + 0x58);
  func_0x00010bfb68e0(param_8);
  func_0x00010bfb68e0(param_8);
  func_0x00010c013de0((dVar3 - param_1 * 0.7) * 0.5,((param_2 + param_4) - dVar4 * 0.5) + -5.0,
                      param_1 * 0.7,dVar4,puVar2);
  func_0x00010c1a9f00();
  func_0x00010c066fe0(param_7,param_6,puVar2,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067479b0; end: 106747a87; -[SCEmbeddedMapManager _personImageViewForNoAvatarForPersonLocation:context:] */

void FUN_1067479b0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c2923e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x000108ffe710();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar2 = uVar1;
  func_0x000106b1d04c(uVar1,0,*(undefined1 *)(param_5 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010bfb68e0();
  func_0x00010bfb68e0(puVar3);
  func_0x00010bdd45c0(param_3 / param_4,param_5);
  func_0x00010c19f0e0(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106747a88; end: 106747c1b; -[SCEmbeddedMapManager _updateCalloutViewForPersonLocation:] */

void FUN_106747a88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar2;
    _objc_release(uVar5);
    lVar1 = *(long *)(param_1 + 0x78);
  }
  func_0x00010c1a9f00(lVar1,param_2,0);
  if ((*(byte *)(param_1 + 0x71) & 1) == 0) {
    lVar1 = param_3;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar6 = *(ulong *)(param_1 + 0x88);
      lVar3 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar6,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if ((uVar6 & 1) == 0) {
        lVar1 = param_3;
        func_0x00010bf64de0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010c09e300(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bdd8f80(param_1,param_2,lVar1,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar1);
        puVar2 = PTR_PTR_1126cd610;
        uVar5 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c279540(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf28960(puVar2,param_2,0,lVar4,0,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x78),param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(uVar5);
        _objc_release(lVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106747c1c; end: 106747f83; -[SCEmbeddedMapManager _createBitmojiLabelViewForPersonLocation:bestFriendEmoji:showLastSeenAndDistance:context:] */

void FUN_106747c1c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined **param_6,int param_7,long param_8)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(char *)(param_3 + 0x41) == '\x01') {
    puVar3 = param_5;
    func_0x00010bf4e080();
    bVar2 = puVar3 == (undefined *)0x1;
    if (param_7 != 0) goto LAB_106747db8;
LAB_106747c90:
    if (param_8 == 1 || bVar2) {
      puVar12 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      param_2 = *(double *)(PTR__CGRectZero_110347608 + 8);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      puVar4 = PTR_PTR_1126cd618;
      func_0x00010bf1bc20(PTR_PTR_1126cd618,param_4,param_5,*(undefined8 *)(param_3 + 0x10),
                          *(undefined8 *)(param_3 + 0x88));
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cd620;
      _objc_alloc(PTR_PTR_1126cd620);
      func_0x00010c0074a0();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = param_5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_78,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf1bc00(puVar5,param_4,puVar11,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar3 = PTR_PTR_1126cd628;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e5acd8;
      if (!bVar2) {
        ppuVar1 = param_6;
      }
      puVar7 = puVar12;
      func_0x00010c279540(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1bbc0(puVar3,param_4,puVar4,puVar6,0,0,ppuVar1,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010c1a9f00(puVar12);
      goto LAB_106747eec;
    }
  }
  else {
    bVar2 = false;
    if (param_7 == 0) goto LAB_106747c90;
LAB_106747db8:
    puVar3 = *(undefined **)(param_3 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = *(undefined **)(param_3 + 0x88);
    puVar4 = puVar3;
    func_0x00010c0fa5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if ((param_5 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
      puVar12 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      param_2 = *(double *)(PTR__CGRectZero_110347608 + 8);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      puVar5 = PTR_PTR_1126cd618;
      puVar11 = param_5;
      func_0x00010bf1bb80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126cd620;
        _objc_alloc(PTR_PTR_1126cd620);
        func_0x00010c0074a0();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = param_5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_70,1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf1bc00(puVar6,param_4,puVar11,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar8 = PTR_PTR_1126cd628;
        puVar3 = puVar12;
        func_0x00010c279540(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1bba0(puVar8,param_4,puVar7,puVar5,0,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar8;
        func_0x00010c1a9f00(puVar12);
        _objc_release(puVar8);
LAB_106747eec:
        _objc_release(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        goto LAB_106747f34;
      }
      _objc_release(puVar4);
      puVar4 = puVar12;
    }
    _objc_release(puVar4);
  }
  puVar12 = (undefined *)0x0;
LAB_106747f34:
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(param_5 + 0x80) = 0x4024000000000000;
  if (puVar11 == (undefined *)0x0) {
    lVar9 = *(long *)(param_5 + 0x78);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) {
      dVar13 = 0.0;
    }
    else {
      uVar10 = *(undefined8 *)(param_5 + 0x78);
      func_0x00010bfe6ac0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(uVar10);
      if (param_2 <= 80.0) {
        return;
      }
      dVar13 = *(double *)(param_5 + 0x80) + 10.0;
    }
  }
  else {
    dVar13 = -40.0;
  }
  *(double *)(param_5 + 0x80) = dVar13;
  return;
}



/* Entry: 106747f84; end: 106748027; -[SCEmbeddedMapManager _setBitmojiImageOffsetForContext:] */

void FUN_106747f84(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  *(undefined8 *)(param_3 + 0x80) = 0x4024000000000000;
  if (param_5 == 0) {
    lVar1 = *(long *)(param_3 + 0x78);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      dVar3 = 0.0;
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x78);
      func_0x00010bfe6ac0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(uVar2);
      if (param_2 <= 80.0) {
        return;
      }
      dVar3 = *(double *)(param_3 + 0x80) + 10.0;
    }
  }
  else {
    dVar3 = -40.0;
  }
  *(double *)(param_3 + 0x80) = dVar3;
  return;
}



/* Entry: 106748028; end: 10674808b; -[SCEmbeddedMapManager _bitmojiAvatarViewFrameWithAspectRatio:context:hasLabel:] */

undefined1  [16]
FUN_106748028(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 8;
  if (param_4 != 0) {
    lVar1 = 0;
  }
  dVar4 = *(double *)(&UNK_10ddde900 + lVar1) * *(double *)(param_2 + 0x60);
  dVar3 = *(double *)(param_2 + 0x60) - dVar4;
  dVar2 = dVar3 * 0.5;
  if (param_4 != 0) {
    dVar2 = dVar3 * 0.66;
  }
  dVar3 = 12.0;
  if (param_5 == 0) {
    dVar3 = 0.0;
  }
  auVar5._8_8_ = (*(double *)(param_2 + 0x80) + dVar2) - dVar3;
  auVar5._0_8_ = (*(double *)(param_2 + 0x58) - param_1 * dVar4) * 0.5;
  return auVar5;
}



/* Entry: 10674808c; end: 106748137; -[SCEmbeddedMapManager _calloutFrameWithPersonAvatarViewFrame:] */

double FUN_10674808c(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar3 = (*(double *)(param_2 + 0x58) - param_1 * 0.82) * 0.5;
  dVar4 = dVar3;
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  return (double)(long)(dVar3 * dVar4) / dVar4;
}



/* Entry: 106748138; end: 1067481df; -[SCEmbeddedMapManager _addCalloutViewToMapImageView:relativeToPersonImageViewFrame:] */

void FUN_106748138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = *(long *)(param_5 + 0x78);
  _objc_retain(param_7);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_5 + 0x78));
  }
  func_0x00010bdd8f20(param_1,param_2,param_3,param_4,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0x78));
  func_0x00010befbb60(param_7,param_6,*(undefined8 *)(param_5 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1067481e0; end: 1067482bf; -[SCEmbeddedMapManager _calloutSubtitleWithTimestamp:locality:] */

void FUN_1067481e0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5a60(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = in_x3;
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5acf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5acf8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  _objc_release(puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067482c0; end: 1067483a7; -[SCEmbeddedMapManager _labelFrameWithImageView:personAvatarViewFrame:context:] */

double FUN_1067482c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe6ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  uVar2 = param_4;
  func_0x00010bfe6ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c23d0a0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar3 = 0.82;
  if (param_5 != 0) {
    dVar3 = 1.25;
  }
  return (*(double *)(param_2 + 0x58) - dVar3 * param_1) * 0.5;
}



/* Entry: 1067483a8; end: 106748447; -[SCEmbeddedMapManager _addlabelImageView:mapImageView:relativeToPersonImageViewFrame:context:] */

void FUN_1067483a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010be46b40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9);
  func_0x00010c19f0e0(param_7);
  func_0x00010befbb60(param_8,param_6,param_7);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106748448; end: 1067484d7; -[SCEmbeddedMapManager .cxx_destruct] */

void FUN_106748448(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 1067484d8; end: 106748637; -[SCEmbeddedMapServiceProvider provide] */

void FUN_1067484d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106748638;
  puStack_68 = &UNK_110938950;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd630;
  _objc_alloc(PTR_PTR_1126cd630);
  func_0x00010c00f4e0();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106748638; end: 1067486b7;  */

void FUN_106748638(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be076c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067486b8; end: 1067488ff; -[SCEmbeddedMapServiceProvider _embeddedStaticMapProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067486b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126cd638;
  _objc_alloc();
  lVar19 = (long)_DAT_11274f4e8;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1aca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_106748900();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11274f4ec;
  lVar7 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar10 = lVar18;
  func_0x00010c0b96a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274f4f0;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0b9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11274f4f4;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar16 = lVar19;
  func_0x00010c28fd40();
  param_1 = param_1 + _DAT_11274f4f8;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7ba0(puVar1,param_2,lVar4,lVar6,lVar9,lVar11,lVar13,lVar15,(byte)lVar16 ^ 1);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar19);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106748900; end: 106748923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106748900(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274f500);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106748924; end: 1067489e7; -[SCEmbeddedMapServiceProvider _mapSnapshotProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106748924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cd640;
  _objc_alloc(PTR_PTR_1126cd640);
  lVar2 = param_1;
  FUN_106748900(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11274f4f4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bf398e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048960(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067489e8; end: 106748a5b; -[SCEmbeddedMapServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067489e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f4f8);
  _objc_destroyWeak(param_1 + _DAT_11274f4f4);
  _objc_destroyWeak(param_1 + _DAT_11274f4f0);
  _objc_destroyWeak(param_1 + _DAT_11274f500);
  _objc_destroyWeak(param_1 + _DAT_11274f4e8);
  _objc_destroyWeak(param_1 + _DAT_11274f4ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f4fc);
  return;
}



/* Entry: 106748a5c; end: 106748aff; -[SCStaticMapSnapshotProvider initWithSnapTokenProvider:configProvider:] */

undefined1 *
FUN_106748a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2e50;
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



/* Entry: 106748b00; end: 106748c33; -[SCStaticMapSnapshotProvider generateSnapshotForCamera:imageSize:traitCollection:completionQueue:completion:] */

void FUN_106748b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126cd648;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c251a20(param_1,param_2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106748c34;
  puStack_60 = &UNK_110842e18;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bffae00(puVar2,param_4,&puStack_78);
  _objc_release(puStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106748c34; end: 106748c3b;  */

void FUN_106748c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106748c3c; end: 106748c6b; -[SCStaticMapSnapshotProvider .cxx_destruct] */

void FUN_106748c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106748c6c; end: 106748ffb; -[SCStaticMapSnapshotter startWithCamera:size:snapTokenProvider:configProvider:traitCollection:queue:completion:] */

void FUN_106748c6c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  
  dVar5 = param_1;
  dVar10 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    func_0x00010bf34640(param_5);
    dVar9 = dVar5;
    func_0x00010bf01f00(param_5);
    dVar6 = dVar9;
    func_0x00010c0fc7c0(param_5);
    dVar6 = 1.5707963267948966 - (dVar6 * 3.141592653589793) / 180.0;
    _sin();
    dVar7 = 0.2617993877991494;
    _tan();
    dVar8 = (dVar5 * 3.141592653589793) / 180.0;
    _cos();
    dVar9 = ((dVar8 * 6.283185307179586 * 6378137.0) /
            ((dVar7 * (dVar9 / dVar6 + dVar9 / dVar6)) / param_2)) * 0.001953125;
    _log2();
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    dVar6 = 18.0;
    if (dVar9 <= 18.0) {
      dVar6 = dVar9;
    }
    puVar1 = PTR_PTR_1126cd5f8;
    func_0x00010c0b9220(dVar5,dVar10,param_1,param_2,dVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b0,param_3);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _qos_class_self();
    uVar3 = uVar3 & 0xffffffff;
    _dispatch_get_global_queue(uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _qos_class_self();
    uVar4 = uVar4 & 0xffffffff;
    _dispatch_get_global_queue(uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_106748ffc;
    puStack_d8 = &UNK_1109389b0;
    _objc_copyWeak(auStack_b8,auStack_b0);
    _objc_retain(puVar1);
    puStack_d0 = puVar1;
    _objc_retain(param_9);
    uStack_c8 = param_9;
    _objc_retain(param_10);
    uStack_c0 = param_10;
    _objc_copyWeak(auStack_f8,auStack_b0);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bfa48e0(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_destroyWeak(auStack_f8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(puStack_d0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106748ffc; end: 1067490ab;  */

void FUN_106748ffc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067490ac; end: 10674910f; -[SCStaticMapSnapshotter cancel] */

void FUN_1067490ac(long param_1)

{
  undefined *puVar1;
  
  if (((*(byte *)(param_1 + 8) & 1) == 0) &&
     (*(undefined1 *)(param_1 + 8) = 1, *(long *)(param_1 + 0x10) != 0)) {
    puVar1 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ec80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106749110; end: 1067493d7; -[SCStaticMapSnapshotter _fetchStaticImageWithURL:accessToken:completionQueue:completion:] */

void FUN_106749110(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined **param_5,
                  undefined8 param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **unaff_x26;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined **ppuStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_4;
  ppuVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    puVar1 = auStack_88;
    _objc_initWeak(puVar1,param_1);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar9);
    puVar5 = PTR_PTR_1126b4960;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dad998;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_70 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _qos_class_self();
    uVar6 = (ulong)puVar3 & 0xffffffff;
    _dispatch_get_global_queue(uVar6,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1067493d8;
    puStack_a8 = &UNK_1108b1af8;
    unaff_x26 = &puStack_c0;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_5);
    ppuStack_a0 = param_5;
    _objc_retain(param_6);
    ppuVar8 = &puStack_c0;
    uVar7 = uVar6;
    uStack_98 = param_6;
    func_0x00010c25f5e0(puVar2);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(uStack_98);
    _objc_release(ppuStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 6);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(ppuVar8);
  _objc_retain(uVar7);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2b7c0();
  _objc_release(ppuVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067493d8; end: 106749443;  */

void FUN_1067493d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b7c0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106749444; end: 10674957f; -[SCStaticMapSnapshotter _handleLoadCompletedWithData:error:queue:completion:] */

void FUN_106749444(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if ((param_4 == 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = (undefined *)0x0;
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106749580;
    puStack_60 = &UNK_11084a9e8;
    _objc_retain(param_6);
    puStack_58 = puVar2;
    uStack_48 = param_6;
    _objc_retain(param_4);
    lStack_50 = param_4;
    _objc_retain(puVar2);
    func_0x00010007380c(param_5,&puStack_78);
    _objc_release(lStack_50);
    _objc_release(puStack_58);
    _objc_release(uStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106749580; end: 106749593;  */

void FUN_106749580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106749590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106749594; end: 10674959f; -[SCStaticMapSnapshotter .cxx_destruct] */

void FUN_106749594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067495a0; end: 10674966f; +[SCMapBitmojiLabelImageUtil bitmojiLabelSizeWithName:lastSeen:trailingText:lastSeenJustNow:emoji:] */

undefined1  [16]
FUN_1067495a0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_6);
  FUN_106749670(param_5,param_9);
  _objc_retainAutoreleasedReturnValue();
  FUN_106749700();
  dVar1 = 9.0;
  FUN_10674a01c(param_6);
  _objc_release(param_6);
  dVar2 = *(double *)PTR__CGSizeZero_110347620;
  dVar3 = dVar1 + 2.0;
  if (dVar1 <= 0.0) {
    dVar3 = 0.0;
  }
  _objc_release(param_5);
  auVar4._8_8_ = param_2 + 4.0 + 8.0;
  auVar4._0_8_ = dVar2 + param_1 + dVar3 + 8.0 + 8.0;
  return auVar4;
}



/* Entry: 106749670; end: 1067496ff;  */

void FUN_106749670(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106749700; end: 1067497cb;  */

undefined1  [16] FUN_106749700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain();
  dVar3 = 11.0;
  func_0x00010bf1ecc0(0x4026000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000106749bf4();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = 150.0;
  func_0x00010c23d680(0x4062c00000000000,dVar3,param_1,param_2,puVar2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  auVar5._0_8_ = (long)dVar4;
  auVar5._8_8_ = (long)dVar3;
  return auVar5;
}



/* Entry: 1067497cc; end: 106749b63; +[SCMapBitmojiLabelImageUtil bitmojiLabelImageWithName:lastSeen:trailingText:lastSeenJustNow:emoji:traitCollection:] */

void FUN_1067497cc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  
  _objc_retain(param_10);
  _objc_retain(param_6);
  FUN_106749670(param_5,param_9);
  _objc_retainAutoreleasedReturnValue();
  FUN_106749700();
  dVar7 = 9.0;
  dVar9 = param_2;
  FUN_10674a01c(param_6);
  dVar12 = *(double *)PTR__CGSizeZero_110347620;
  uVar13 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  dVar8 = dVar7 + 2.0;
  if (dVar7 <= 0.0) {
    dVar8 = 0.0;
  }
  dVar8 = dVar12 + param_1 + dVar8;
  dVar10 = dVar8 + 8.0;
  dVar11 = param_2 + 4.0;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0x4010000000000000,0x4010000000000000,dVar10,dVar11,0x4014000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar10 + 8.0,dVar11 + 8.0,0,0);
  _UIGraphicsGetCurrentContext();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetShadowWithColor(dVar12,uVar13,0x4010000000000000,uVar2,puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_106749b64();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf414e0(0x3feeb851eb851eb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bfad4a0(puVar1);
  _CGContextSetShadowWithColor(dVar12,uVar13,0,uVar2,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_106749b64();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000106749bf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89d20((dVar10 - dVar8) * 0.5 + 4.0,(dVar11 - param_2) * 0.5 + 4.0,param_1,param_2,
                      param_5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_106749b64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4022000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010674a20c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010bf89d20((dVar10 - dVar7) - dVar12,(dVar11 - dVar9) * 0.5 + 4.0,dVar7,dVar9,param_6);
  _objc_release(param_6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106749b64; end: 106749c63;  */

void FUN_106749b64(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  if (param_2 == (undefined *)0x0) {
    _objc_retain(param_1);
    func_0x00010bf60720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar1 = param_2;
  }
  uVar2 = param_1;
  func_0x00010c13afc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106749c64; end: 10674a01b; +[SCMapBitmojiLabelImageUtil bitmojiLabelImageWithLastSeen:distanceText:lastSeenJustNow:traitCollection:] */

void FUN_106749c64(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_5);
  dVar6 = 10.0;
  FUN_10674a01c(param_5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  dVar7 = dVar6;
  dVar12 = param_2;
  _objc_retain(param_6);
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010674a188();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_6);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  dVar11 = (double)(long)dVar12;
  dVar8 = dVar6 + 4.0 + (double)(long)((double)(long)dVar7 + 0.0);
  dVar12 = dVar11;
  if (dVar11 <= param_2) {
    dVar12 = param_2;
  }
  dVar9 = dVar8 + 8.0;
  dVar10 = dVar12 + 4.0;
  dVar8 = (dVar9 - dVar8) * 0.5 + 4.0;
  dVar12 = (dVar10 - dVar12) * 0.5 + 4.0;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0x4010000000000000,0x4010000000000000,dVar9,dVar10,0x4014000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar9 + 8.0,dVar10 + 8.0,0,0);
  _UIGraphicsGetCurrentContext();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar14 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar13 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _CGContextSetShadowWithColor(uVar14,uVar13,0x4010000000000000,uVar3,puVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_106749b64();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf414e0(0x3feeb851eb851eb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010bfad4a0(puVar1);
  _CGContextSetShadowWithColor(uVar14,uVar13,0,uVar3,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_106749b64();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010674a0c8(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89d20(dVar8,dVar12,dVar6,param_2,param_5);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_106749b64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  puVar5 = puVar4;
  func_0x00010674a188(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89d20(dVar6 + dVar8 + 2.0,dVar12,(long)((double)(long)dVar7 + 0.0),dVar11,param_6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10674a01c; end: 10674a0c7;  */

undefined1  [16] FUN_10674a01c(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain();
  func_0x00010c23ba80(puVar1,param_4,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_10674a0c8(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c23d660(param_3,param_4,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  auVar3._8_8_ = (long)param_2;
  auVar3._0_8_ = (double)(long)param_1 + 0.0;
  return auVar3;
}



/* Entry: 10674a0c8; end: 10674a313;  */

void FUN_10674a0c8(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (param_1 == 10.0) {
    puVar1 = param_2;
    _objc_retain(param_2);
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb3e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf6d680(0x4022000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = puVar2;
  func_0x00010674a20c(puVar2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674a314; end: 10674a6c3; +[SCMapCalloutImageUtil calloutImageWithTitle:subtitle:text:traitCollection:] */

void FUN_10674a314(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_10674a6c4(param_3,param_4,param_5,&uStack_e0,&uStack_e8,&uStack_f0,&dStack_b8,&dStack_c8,
                &dStack_d8,param_6);
  _objc_retain();
  _objc_retain(uStack_e8);
  _objc_retain(uStack_f0);
  dVar6 = dStack_c8;
  if (dStack_c8 <= dStack_b8) {
    dVar6 = dStack_b8;
  }
  if (dVar6 <= dStack_d8) {
    dVar6 = dStack_d8;
  }
  dVar8 = dStack_b0 + dStack_c0 + dStack_d0;
  dVar9 = 60.0;
  if (60.0 <= dVar6 + 26.0) {
    dVar9 = dVar6 + 26.0;
  }
  dVar11 = dVar8 + 14.0;
  dVar8 = (dVar11 - dVar8) * 0.5 + 10.0;
  lVar1 = param_3;
  func_0x00010c08fa60();
  dVar6 = 0.0;
  if (lVar1 != 0) {
    dVar6 = -1.0;
  }
  dVar6 = dVar6 + dStack_b0 + dVar8;
  lVar1 = param_4;
  func_0x00010c08fa60();
  dVar7 = 0.0;
  if (lVar1 != 0) {
    dVar7 = 1.0;
  }
  FUN_10674aaf8(0x4024000000000000,0x4024000000000000,dVar9,dVar11,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar9 + 20.0,dVar11 + 20.0 + 6.75,0,0);
  _UIGraphicsGetCurrentContext();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar10 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar12 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _CGContextSetShadowWithColor(uVar10,uVar12,0x4024000000000000,uVar2,puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_10674ad30();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar5 = puVar4;
  func_0x00010bf414e0(0x3feeb851eb851eb8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bfad4a0(param_1);
  _CGContextSetShadowWithColor(uVar10,uVar12,0,uVar2,0);
  func_0x00010bf89d20((dVar9 - dStack_c8) * 0.5 + 10.0,dVar6,dStack_c8,dStack_c0,param_4);
  _objc_release(param_4);
  func_0x00010bf89d20((dVar9 - dStack_b8) * 0.5 + 10.0,dVar8,dStack_b8,dStack_b0,param_3);
  _objc_release(param_3);
  func_0x00010bf89d20((dVar9 - dStack_d8) * 0.5 + 10.0,dVar7 + dStack_c0 + dVar6,dStack_d8,dStack_d0
                      ,param_5);
  _objc_release(uStack_f0);
  _objc_release(param_5);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(param_1);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10674a6c4; end: 10674aaf7;  */

void FUN_10674a6c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,long *param_8,
                  double *param_9,long *param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_11);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_2;
  _objc_retain();
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  _objc_release(puVar5);
  func_0x00010c1bdb00(puVar6);
  func_0x00010c166c00(puVar6);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  FUN_10674ad30();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_5 = puVar8;
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  FUN_10674ad30();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_6 = puVar8;
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  uVar1 = param_11;
  FUN_10674ad30();
  iVar9 = (int)uVar1;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_7 = puVar8;
  _objc_release(puVar7);
  _objc_release(puVar5);
  func_0x00010c099280(uVar2);
  dVar15 = param_1 * 3.0;
  func_0x00010c099280(uVar3);
  dVar11 = param_1;
  func_0x00010c099280(uVar4);
  dVar19 = 250.0;
  dVar12 = dVar19;
  func_0x00010c23d680(param_2);
  _objc_release(param_2);
  dVar13 = dVar19;
  func_0x00010c23d680(param_3);
  _objc_release(param_3);
  func_0x00010c23d680(param_4);
  _objc_release(param_4);
  dVar15 = (double)(long)dVar15;
  dVar13 = (double)(long)dVar13;
  dVar14 = (double)(long)param_1;
  *param_8 = (long)dVar12;
  param_8[1] = (long)dVar15;
  dVar11 = (double)(long)dVar11;
  *param_9 = dVar13;
  param_9[1] = dVar14;
  *param_10 = (long)dVar19;
  param_10[1] = (long)dVar11;
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_opt_self();
  dVar12 = dVar14 * 0.5;
  if (iVar9 == 0) {
    dVar12 = 7.0;
  }
  puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  dVar18 = dVar11 + dVar13 * 0.5;
  dVar14 = dVar15 + dVar14;
  dVar16 = dVar14 + 6.75;
  func_0x00010c0d18c0(dVar18,dVar16);
  dVar19 = dVar18 + 7.875;
  func_0x00010bef7ba0(dVar19,dVar14,dVar18 + 3.0,dVar16,dVar19 + -3.0,dVar14,puVar5);
  func_0x00010bef98c0(dVar19,dVar14,puVar5);
  dVar20 = (dVar11 + dVar13) - dVar12;
  func_0x00010bef98c0(dVar20,dVar14,puVar5);
  dVar19 = dVar14 - dVar12;
  func_0x00010bef6d40(dVar20,dVar19,dVar12,0x3ff921fb54442d18,0,puVar5);
  dVar17 = dVar15 + dVar12;
  func_0x00010bef98c0(dVar11 + dVar13,dVar17,puVar5);
  func_0x00010bef6d40(dVar20,dVar17,dVar12,0,0xbff921fb54442d18,puVar5);
  dVar13 = dVar11 + dVar12;
  func_0x00010bef98c0(dVar13,dVar15,puVar5);
  func_0x00010bef6d40(dVar13,dVar17,dVar12,0x4012d97c7f3321d2,0x400921fb54442d18,puVar5);
  func_0x00010bef98c0(dVar11,dVar19,puVar5);
  func_0x00010bef6d40(dVar13,dVar19,dVar12,0x400921fb54442d18,0x3ff921fb54442d18,puVar5);
  func_0x00010bef98c0(dVar18 + -7.875,dVar14,puVar5);
  func_0x00010bef7ba0(dVar18,dVar16,dVar18 + -7.875 + 3.0,dVar14,dVar18 + -3.0,dVar16,puVar5);
  func_0x00010bf3dc80(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10674aaf8; end: 10674ad2f;  */

void FUN_10674aaf8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  int param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_opt_self();
  dVar2 = param_4 * 0.5;
  if (param_6 == 0) {
    dVar2 = 7.0;
  }
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = param_1 + param_3 * 0.5;
  param_4 = param_2 + param_4;
  dVar3 = param_4 + 6.75;
  func_0x00010c0d18c0(dVar5,dVar3);
  dVar7 = dVar5 + 7.875;
  func_0x00010bef7ba0(dVar7,param_4,dVar5 + 3.0,dVar3,dVar7 + -3.0,param_4,puVar1);
  func_0x00010bef98c0(dVar7,param_4,puVar1);
  dVar6 = (param_1 + param_3) - dVar2;
  func_0x00010bef98c0(dVar6,param_4,puVar1);
  dVar7 = param_4 - dVar2;
  func_0x00010bef6d40(dVar6,dVar7,dVar2,0x3ff921fb54442d18,0,puVar1);
  dVar4 = param_2 + dVar2;
  func_0x00010bef98c0(param_1 + param_3,dVar4,puVar1);
  func_0x00010bef6d40(dVar6,dVar4,dVar2,0,0xbff921fb54442d18,puVar1);
  dVar6 = param_1 + dVar2;
  func_0x00010bef98c0(dVar6,param_2,puVar1);
  func_0x00010bef6d40(dVar6,dVar4,dVar2,0x4012d97c7f3321d2,0x400921fb54442d18,puVar1);
  func_0x00010bef98c0(param_1,dVar7,puVar1);
  func_0x00010bef6d40(dVar6,dVar7,dVar2,0x400921fb54442d18,0x3ff921fb54442d18,puVar1);
  func_0x00010bef98c0(dVar5 + -7.875,param_4,puVar1);
  func_0x00010bef7ba0(dVar5,dVar3,dVar5 + -7.875 + 3.0,param_4,dVar5 + -3.0,dVar3,puVar1);
  func_0x00010bf3dc80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674ad30; end: 10674ad87;  */

void FUN_10674ad30(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  if (param_2 == 0) {
    _objc_retain(param_1);
  }
  else {
    func_0x00010c13afc0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10674ad88; end: 10674ae67; +[SCMapCalloutImageUtil calloutSizeWithTitle:subtitle:text:] */

undefined1  [16]
FUN_10674ad88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  FUN_10674a6c4(param_3,param_4,param_5,&uStack_68,&uStack_70,auStack_78,&dStack_40,&dStack_50,
                &dStack_60,0);
  _objc_retain(uStack_68);
  _objc_retain(uStack_70);
  if (dStack_50 <= dStack_40) {
    dStack_50 = dStack_40;
  }
  if (dStack_50 <= dStack_60) {
    dStack_50 = dStack_60;
  }
  dVar1 = 60.0;
  if (60.0 <= dStack_50 + 26.0) {
    dVar1 = dStack_50 + 26.0;
  }
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  auVar2._8_8_ = dStack_38 + dStack_48 + dStack_58 + 14.0 + 20.0 + 6.75;
  auVar2._0_8_ = dVar1 + 20.0;
  return auVar2;
}



/* Entry: 10674ae68; end: 10674b63b; +[SCMapCalloutImageUtil actionCalloutImageWithTitle:titleStyle:subtitle:subtitleStyle:leftIcon:tintLeftIcon:showsCaret:timestampText:traitCollection:] */

void FUN_10674ae68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,int param_8,char param_9,
                  undefined4 param_10,long param_11,undefined *param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined *puStack_128;
  undefined *puStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puVar11 = param_12;
  _objc_retain();
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puStack_128 = (undefined *)0x0;
  if (param_4 < 2) {
    if ((param_4 == 0) || (param_4 == 1)) goto LAB_10674afe4;
  }
  else if ((param_4 == 2) || (param_4 == 3)) {
LAB_10674afe4:
    puStack_128 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 4) {
    puStack_128 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_128;
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar11);
    puVar12 = &uStack_c0;
    FUN_10674b63c(param_3,puVar2,puStack_128,0,&uStack_c0,&dStack_b8,param_12);
    puVar1 = puVar2;
    goto LAB_10674b020;
  }
  puVar12 = &uStack_c8;
  FUN_10674b63c(param_3,puVar1,puStack_128,1,&uStack_c8,&dStack_b8,param_12);
LAB_10674b020:
  uVar3 = *puVar12;
  uVar15 = uVar3;
  _objc_retain();
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  if ((param_6 == 0) || (param_6 == 1)) {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  FUN_10674b63c(param_5,uVar4,puVar11,1,&uStack_e0,&dStack_d8,param_12);
  uVar15 = uStack_e0;
  _objc_retain();
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10674b63c(param_11,uVar5,puVar2,1,&puStack_f8,&dStack_f0,param_12);
  _objc_retain(puStack_f8);
  dVar18 = 12.0;
  if (param_9 == '\0') {
    dVar18 = 0.0;
  }
  dVar21 = dStack_d8;
  if (dStack_d8 <= dStack_b8) {
    dVar21 = dStack_b8;
  }
  func_0x00010c23d0a0(param_7);
  dVar13 = (double)NEON_fminnm(dStack_d8,0x4034000000000000);
  uVar15 = 0xc010000000000000;
  dVar14 = 0.0;
  if (param_11 != 0) {
    dVar14 = dStack_f0;
  }
  dVar23 = dStack_b0 + dStack_d0;
  dVar16 = 4.0;
  if (dVar23 <= 24.0) {
    dVar16 = 7.0;
  }
  dVar17 = 11.0;
  if (dVar23 <= 24.0) {
    dVar17 = 13.0;
  }
  dVar14 = dVar14 + dVar18 + dVar21 + dVar13 + -4.0 + dVar17 * 2.0;
  dVar18 = 60.0;
  if (60.0 <= dVar14) {
    dVar18 = dVar14;
  }
  dVar16 = dVar23 + dVar16 * 2.0;
  func_0x00010c23d0a0(param_7);
  dVar14 = (double)NEON_fminnm(uVar15,0x4034000000000000);
  dVar14 = (dVar16 - dVar14) * 0.5;
  uVar15 = 0x4024000000000000;
  dVar13 = dVar14 + 10.0;
  func_0x00010c23d0a0(param_7);
  uVar22 = NEON_fminnm(dVar14,0x4034000000000000);
  func_0x00010c23d0a0(param_7);
  uVar15 = NEON_fminnm(uVar15,0x4034000000000000);
  dVar14 = 0.0;
  if (param_7 != 0) {
    dVar14 = 6.0;
  }
  dVar17 = 19.0;
  _CGRectGetMaxX(0x4033000000000000,dVar13,uVar22);
  dVar14 = dVar14 + dVar17;
  dVar23 = (dVar16 - dVar23) * 0.5 + 10.0;
  FUN_10674aaf8(0x4024000000000000,0x4024000000000000,dVar18,dVar16,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar18 + 20.0,dVar16 + 20.0 + 6.75 + -4.0,0,0);
  _UIGraphicsGetCurrentContext();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar19 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar20 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _CGContextSetShadowWithColor(uVar19,uVar20,0x4024000000000000,uVar6,puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  FUN_10674ad30();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf414e0(0x3feeb851eb851eb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010bfad4a0(param_1);
  _CGContextSetShadowWithColor(uVar19,uVar20,0,uVar6,0);
  if (param_8 == 0) {
    func_0x00010bf89920(0x4033000000000000,dVar13,uVar22,uVar15,param_7);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    FUN_10674ad30();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_7;
    func_0x00010c14d100(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010bf89920(0x4033000000000000,dVar13,uVar22,uVar15,lVar10);
    _objc_release(lVar10);
  }
  func_0x00010bf89d20(dVar14,dVar23,dVar21,dStack_b0,param_3);
  func_0x00010bf89d20(dVar14,dStack_b0 + dVar23,dVar21,dStack_d0,param_5);
  func_0x00010bf89d20(dStack_b8 + dVar14,dVar23 + 0.65,dStack_f0,uStack_e8,param_11);
  _objc_release(puStack_f8);
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar8 = puStack_f8;
  if (param_9 != '\0') {
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140a80(0x4018000000000000,0x4022000000000000,0x4008000000000000,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _CGRectGetMaxX(dVar14,dVar23,dVar21,dStack_b0);
    func_0x00010c23d0a0(puVar7);
    dVar18 = (dVar16 - dVar23) * 0.5;
    uVar15 = 0x4024000000000000;
    dVar21 = dVar18 + 10.0;
    func_0x00010c23d0a0(puVar7);
    func_0x00010c23d0a0(puVar7);
    func_0x00010bf89920(dVar14 + 6.0,dVar21,dVar18,uVar15,puVar7);
    _objc_release(puVar7);
    puVar8 = puVar7;
  }
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uStack_e0);
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puStack_128);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10674b63c; end: 10674b867;  */

void FUN_10674b63c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,double *param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar9 = param_7;
  _objc_retain();
  _objc_retain(param_3);
  puVar6 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  func_0x00010c166c00(puVar1);
  uStack_b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uVar2 = param_4;
  lVar5 = param_8;
  uStack_a0 = param_3;
  FUN_10674ad30();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_4);
  uStack_a8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar7 = &uStack_b8;
  iVar8 = 3;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_98 = uVar2;
  puStack_90 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_6 = puVar6;
  _objc_release(uVar2);
  func_0x00010c099280(param_3);
  puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  dVar10 = param_1;
  func_0x00010c0d96e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f340(param_2);
  _objc_release(puVar6);
  if (lVar5 != 0) {
    func_0x00010c099280(param_3);
    param_1 = dVar10 + dVar10;
  }
  dVar14 = 250.0;
  func_0x00010c23d680(param_2);
  puVar6 = (undefined *)*param_6;
  dVar10 = dVar14;
  func_0x00010c23d660(param_2);
  if (250.0 < dVar10) {
    func_0x00010c099280(param_3);
    param_1 = dVar10 + dVar10;
  }
  dVar10 = (double)(long)dVar14;
  dVar14 = (double)(long)param_1;
  *param_7 = dVar10;
  param_7[1] = dVar14;
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    _objc_retain(pdVar9);
    func_0x00010c23d0a0(puVar6);
    func_0x00010c23d0a0(puVar6);
    dVar10 = dVar10 / dVar14;
    dVar17 = dVar10;
    dVar14 = dVar10;
    dVar18 = dVar10;
    if (puVar7 == (undefined8 *)0x0) {
      dVar18 = 6.0;
      dVar17 = 30.0;
      dVar14 = 12.0 / dVar10;
    }
    dVar11 = 16.0 / dVar10;
    dVar13 = 10.0;
    if (puVar7 != (undefined8 *)0x1) {
      dVar11 = dVar14;
      dVar13 = dVar18;
    }
    dVar14 = 18.0;
    if (puVar7 != (undefined8 *)0x1) {
      dVar14 = dVar17;
    }
    dVar17 = 11.0 / dVar10;
    dVar18 = 3.0;
    if (puVar7 != (undefined8 *)0x2) {
      dVar17 = dVar11;
      dVar18 = dVar13;
    }
    dVar13 = 32.0;
    if (puVar7 != (undefined8 *)0x2) {
      dVar13 = dVar14;
    }
    dVar14 = 12.0;
    if (iVar8 == 0) {
      dVar14 = 0.0;
    }
    dVar14 = dVar14 + dVar10 * dVar13;
    dVar11 = dVar14 + dVar17 * 2.0;
    dVar12 = dVar13 + dVar18 * 2.0;
    dVar10 = dVar17 + 10.0;
    FUN_10674aaf8(0x4024000000000000,0x4024000000000000,dVar11,dVar12,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    _UIGraphicsBeginImageContextWithOptions(dVar11 + 20.0,dVar12 + 20.0 + 2.25,0,0);
    _UIGraphicsGetCurrentContext();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar15 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar16 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    _CGContextSetShadowWithColor(uVar15,uVar16,0x4024000000000000,uVar2,puVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_10674ad30();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pdVar9);
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3feeb851eb851eb8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010bfad4a0(param_2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetShadowWithColor(uVar15,uVar16,0x4008000000000000,uVar2,puVar3);
    _objc_release(puVar1);
    _CGContextSetShadowWithColor(uVar15,uVar16,0,uVar2,0);
    puVar3 = puVar6;
    func_0x00010bf89920(dVar10,dVar18 + 10.0,dVar14,dVar13,puVar6);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (iVar8 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c140a80(0x4018000000000000,0x4022000000000000,0x4008000000000000,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _CGRectGetMaxX(dVar10,dVar18 + 10.0,dVar14,dVar13);
      dVar17 = dVar17 * 0.5;
      dVar10 = dVar17 + dVar10;
      func_0x00010c23d0a0(puVar1);
      dVar14 = (dVar12 - dVar17) * 0.5;
      uVar2 = 0x4024000000000000;
      dVar18 = dVar14 + 10.0;
      func_0x00010c23d0a0(puVar1);
      func_0x00010c23d0a0(puVar1);
      func_0x00010bf89920(dVar10,dVar18,dVar14,uVar2,puVar1);
      _objc_release(puVar1);
      puVar3 = puVar1;
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(param_2);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10674b868; end: 10674bc07; +[SCMapCalloutImageUtil actionCalloutImageWithNoTitle:imageOnlyIconStyle:showsCaret:traitCollection:] */

void FUN_10674b868(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6,int param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  param_1 = param_1 / param_2;
  dVar12 = param_1;
  dVar6 = param_1;
  dVar13 = param_1;
  if (param_6 == 0) {
    dVar13 = 6.0;
    dVar12 = 30.0;
    dVar6 = 12.0 / param_1;
  }
  dVar5 = 16.0 / param_1;
  dVar9 = 10.0;
  if (param_6 != 1) {
    dVar5 = dVar6;
    dVar9 = dVar13;
  }
  dVar6 = 18.0;
  if (param_6 != 1) {
    dVar6 = dVar12;
  }
  dVar12 = 11.0 / param_1;
  dVar13 = 3.0;
  if (param_6 != 2) {
    dVar12 = dVar5;
    dVar13 = dVar9;
  }
  dVar9 = 32.0;
  if (param_6 != 2) {
    dVar9 = dVar6;
  }
  dVar6 = 12.0;
  if (param_7 == 0) {
    dVar6 = 0.0;
  }
  dVar6 = dVar6 + param_1 * dVar9;
  dVar7 = dVar6 + dVar12 * 2.0;
  dVar8 = dVar9 + dVar13 * 2.0;
  dVar5 = dVar12 + 10.0;
  FUN_10674aaf8(0x4024000000000000,0x4024000000000000,dVar7,dVar8,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar7 + 20.0,dVar8 + 20.0 + 2.25,0,0);
  _UIGraphicsGetCurrentContext();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar10 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar11 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _CGContextSetShadowWithColor(uVar10,uVar11,0x4024000000000000,uVar1,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_10674ad30();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  puVar4 = puVar3;
  func_0x00010bf414e0(0x3feeb851eb851eb8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfad4a0(param_3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetShadowWithColor(uVar10,uVar11,0x4008000000000000,uVar1,puVar3);
  _objc_release(puVar2);
  _CGContextSetShadowWithColor(uVar10,uVar11,0,uVar1,0);
  puVar3 = param_5;
  func_0x00010bf89920(dVar5,dVar13 + 10.0,dVar6,dVar9,param_5);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_7 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140a80(0x4018000000000000,0x4022000000000000,0x4008000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _CGRectGetMaxX(dVar5,dVar13 + 10.0,dVar6,dVar9);
    dVar12 = dVar12 * 0.5;
    dVar5 = dVar12 + dVar5;
    func_0x00010c23d0a0(puVar2);
    dVar6 = (dVar8 - dVar12) * 0.5;
    uVar1 = 0x4024000000000000;
    dVar13 = dVar6 + 10.0;
    func_0x00010c23d0a0(puVar2);
    func_0x00010c23d0a0(puVar2);
    func_0x00010bf89920(dVar5,dVar13,dVar6,uVar1,puVar2);
    _objc_release(puVar2);
    puVar3 = puVar2;
  }
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10674bc08; end: 10674be2b; +[SCMapCalloutImageUtil actionCalloutSizeWithTitle:subtitle:leftIcon:showsTimestamp:showsCaret:] */

undefined1  [16]
FUN_10674bc08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_c0 [8];
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_10674b63c(param_3,uVar2,puVar3,1,&uStack_a8,&dStack_a0,0);
  _objc_release(param_3);
  uVar1 = uStack_a8;
  _objc_retain(uStack_a8);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10674b63c(param_4,uVar4,puVar3,1,auStack_c0,&dStack_b8,0);
  _objc_release(param_4);
  dVar8 = 13.0;
  if (param_6 == 0) {
    dVar8 = 0.0;
  }
  dVar9 = 12.0;
  if (param_7 == 0) {
    dVar9 = 0.0;
  }
  dVar10 = dStack_98 + dStack_b0;
  dVar11 = dStack_b8;
  if (dStack_b8 <= dStack_a0) {
    dVar11 = dStack_a0;
  }
  dVar5 = dStack_98;
  func_0x00010c23d0a0(param_5);
  _objc_release(param_5);
  dVar5 = (double)NEON_fminnm(dVar5,0x4034000000000000);
  dVar6 = 4.0;
  if (dVar10 <= 24.0) {
    dVar6 = 7.0;
  }
  dVar7 = 11.0;
  if (dVar10 <= 24.0) {
    dVar7 = 13.0;
  }
  dVar9 = dVar8 + dVar9 + dVar11 + dVar5 + -4.0 + dVar7 * 2.0;
  dVar8 = 60.0;
  if (60.0 <= dVar9) {
    dVar8 = dVar9;
  }
  _objc_release(uStack_a8);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  auVar12._8_8_ = dVar10 + dVar6 * 2.0 + 20.0 + 6.75;
  auVar12._0_8_ = dVar8 + 20.0;
  return auVar12;
}



/* Entry: 10674be2c; end: 10674bf2f; +[SCMapCalloutImageUtil actionCalloutSizeWithNoTitle:imageOnlyIconStyle:showsCaret:] */

undefined1  [16]
FUN_10674be2c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long param_6,int param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    param_1 = 1.0;
  }
  else {
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    param_1 = param_1 / param_2;
  }
  dVar4 = param_1;
  dVar3 = param_1;
  dVar5 = param_1;
  if (param_6 == 0) {
    dVar5 = 6.0;
    dVar4 = 30.0;
    dVar3 = 12.0 / param_1;
  }
  dVar2 = 16.0 / param_1;
  dVar1 = 10.0;
  if (param_6 != 1) {
    dVar2 = dVar3;
    dVar1 = dVar5;
  }
  dVar3 = 18.0;
  if (param_6 != 1) {
    dVar3 = dVar4;
  }
  dVar4 = 11.0 / param_1;
  dVar5 = 3.0;
  if (param_6 != 2) {
    dVar4 = dVar2;
    dVar5 = dVar1;
  }
  dVar1 = 36.0;
  if (param_6 != 2) {
    dVar1 = dVar3;
  }
  dVar3 = 12.0;
  if (param_7 == 0) {
    dVar3 = 0.0;
  }
  _objc_release(param_5);
  auVar6._8_8_ = dVar1 + dVar5 * 2.0 + 20.0 + 2.25;
  auVar6._0_8_ = dVar3 + param_1 * dVar1 + dVar4 * 2.0 + 20.0;
  return auVar6;
}



/* Entry: 10674bf30; end: 10674c0c3;  */

void FUN_10674bf30(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_60 [48];
  
  _objc_opt_self();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0x4030000000000000,0);
  func_0x00010bef98c0(0x4020800000000000,0x4030000000000000,puVar1);
  func_0x00010bef98c0(0x401b000000000000,0x4022800000000000,puVar1);
  func_0x00010bef98c0(0,0x401f000000000000,puVar1);
  func_0x00010bf3dc80(puVar1);
  _CGAffineTransformMakeTranslation(auStack_60,0x4018000000000000,0x4020000000000000);
  func_0x00010bf08a40(puVar1);
  _UIGraphicsBeginImageContextWithOptions(0x403e000000000000,0x403e000000000000,0,0);
  if (param_2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,0x403e000000000000,0x403e000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
    _objc_release(puVar2);
    func_0x00010bfad4a0(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bfad4a0(puVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10674c0c4; end: 10674c51b; -[SCMapFootstepsPill initWithBackgroundColor:textColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10674c0c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f2e58;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  puVar4 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4029000000000000);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b08d8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4010000000000000,0x3fd3333333333333,0,0x4000000000000000,puVar3,puVar1,
                        puVar2);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar16 = (long)_DAT_11274f514;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar3;
    _objc_release(uVar15);
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c207380(0x4020000000000000,*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar3 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar17 = (long)_DAT_11274f518;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f51c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274f51c) = puVar3;
    _objc_release(uVar15);
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar17 = (long)_DAT_11274f520;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar15);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar17));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar3);
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = *(undefined8 **)((long)puVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar6;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar15;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c28ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar4;
}



/* Entry: 10674c51c; end: 10674c523; -[SCMapFootstepsPill updateText:image:] */

void FUN_10674c51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateText_image_loadingState__1126805a8,param_3,param_4,0);
  return;
}



/* Entry: 10674c524; end: 10674c52f; -[SCMapFootstepsPill updateText:loadingState:] */

void FUN_10674c524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateText_image_loadingState__1126805a8,param_3,0,param_4);
  return;
}



/* Entry: 10674c530; end: 10674c5f3; -[SCMapFootstepsPill updateText:image:loadingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10674c530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274f520);
  _objc_retain(param_4);
  func_0x00010c212f20(uVar2);
  lVar1 = (long)_DAT_11274f51c;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
  lVar1 = (long)_DAT_11274f518;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_startAnimating_112671118);
    return;
  }
  func_0x00010c06c0e0();
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_stopAnimating_112673058);
    return;
  }
  return;
}



/* Entry: 10674c5f4; end: 10674c653; -[SCMapFootstepsPill .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10674c5f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f520,0);
  _objc_storeStrong(param_1 + _DAT_11274f518,0);
  _objc_storeStrong(param_1 + _DAT_11274f51c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f514,0);
  return;
}



/* Entry: 10674c654; end: 10674c667; +[SCMapQuickStickerImageUtil footstepsActivityPill] */

void FUN_10674c654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010be186d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b20c8,PTR_s__footstepsActivityPillWithBackgr_112563b50,0x8c,0xd5);
  return;
}



/* Entry: 10674c668; end: 10674c67b; +[SCMapQuickStickerImageUtil footstepsTemporaryCalloutPill] */

void FUN_10674c668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010be186d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b20c8,PTR_s__footstepsActivityPillWithBackgr_112563b50,0xd5,0xd4);
  return;
}



/* Entry: 10674c67c; end: 10674c7ff; +[SCMapQuickStickerImageUtil footstepsStickerImageWithLocationText:footstepsPillText:bitmojiImage:] */

void FUN_10674c67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b20c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb45a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ae20();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b20c8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73e00(0x4044000000000000,puVar3,param_2,param_3,puVar2,0x16,0xc6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b20c8;
  func_0x00010be37840(0x4062c00000000000,0x4062c00000000000,PTR_PTR_1126b20c8,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = PTR_PTR_1126b20c8;
  func_0x00010be186e0(PTR_PTR_1126b20c8,param_2,puVar2,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b20c8;
  func_0x00010be37340(PTR_PTR_1126b20c8,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5b40;
  func_0x00010bf69940(PTR_PTR_1126b5b40,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10674c800; end: 10674caa7; +[SCMapQuickStickerImageUtil placeLoyaltyStickerImageWithStickerData:bitmojiImage:trophyImage:] */

void FUN_10674c800(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126b20c8;
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x8c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73e00(0x403e000000000000,puVar3,param_2,uVar1,puVar2,0x18,0xd5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar1 = param_3;
  func_0x00010c11f580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf415c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b20c8;
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73e00(0x403e000000000000,puVar4,param_2,uVar1,puVar2,0x18,0xd5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_4 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b20c8;
    func_0x00010be37840(0x4062c00000000000,0x4062c00000000000,PTR_PTR_1126b20c8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126b20c8;
  func_0x00010be37840(0x4062c00000000000,0x405e000000000000,PTR_PTR_1126b20c8,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b20c8;
  func_0x00010be741e0(PTR_PTR_1126b20c8,param_2,puVar10,puVar5,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b20c8;
  func_0x00010be37340(PTR_PTR_1126b20c8,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b5b40;
  uVar1 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0fd260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fd200(puVar9,param_2,puVar7,uVar1,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10674caa8; end: 10674ce53; +[SCMapQuickStickerImageUtil _pillWithText:backgroundColor:pillHeight:typeStyle:textColor:] */

void FUN_10674caa8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
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
  long lVar17;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c16e440();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  func_0x00010c21ad00();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  func_0x00010c212f20(puVar2);
  _objc_release(param_5);
  func_0x00010befbb60(puVar1);
  func_0x00010c219b60(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
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
  func_0x00010c219b60(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  param_1 = param_1 * 0.5;
  puVar3 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    _objc_alloc();
    func_0x00010c01bf60();
    _objc_release(puVar7);
    func_0x00010c182220(puVar1);
    func_0x00010c219b60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49420(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c267070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28,
                 *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8),0x447a0000,
                 0x437a0000,puVar8,PTR_s_systemLayoutSizeFittingSize_with_112677640);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674ce54; end: 10674cfc7; +[SCMapQuickStickerImageUtil _imageViewForImage:imageWidth:imageHeight:] */

void FUN_10674ce54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_5);
  func_0x00010c182220(puVar2);
  func_0x00010c219b60(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c267070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28,
             *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8),0x447a0000,0x437a0000
             ,puVar8,PTR_s_systemLayoutSizeFittingSize_with_112677640);
  return;
}



/* Entry: 10674cfc8; end: 10674cfeb; +[SCMapQuickStickerImageUtil _calculateWidthForView:] */

void FUN_10674cfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28,
             *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8),0x447a0000,0x437a0000
             ,param_3,PTR_s_systemLayoutSizeFittingSize_with_112677640);
  return;
}



/* Entry: 10674cfec; end: 10674d0b7; +[SCMapQuickStickerImageUtil _imageFromView:] */

void FUN_10674cfec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010bf20c00(param_7);
  func_0x00010c0469e0(param_3,param_4,puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10674d0b8;
  puStack_40 = &UNK_11086bc40;
  uStack_38 = param_7;
  _objc_retain(param_7);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_6,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10674d0b8; end: 10674d0e3;  */

void FUN_10674d0b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf20c00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1);
  return;
}



/* Entry: 10674d0e4; end: 10674d36b; +[SCMapQuickStickerImageUtil _placeLoyaltyStickerStackViewWithBitmojiImageView:trophyImageView:titlePill:subtitlePill:] */

undefined1 *
FUN_10674d0e4(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_3;
    puStack_80 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    _objc_release(puVar2);
    if (puVar12 != (undefined *)0x0) {
      func_0x00010c16e060(puVar12);
      func_0x00010c190b80(puVar12);
      func_0x00010c207380(0xc056800000000000,puVar12);
      func_0x00010c166c00(puVar12);
      func_0x00010c219b60(puVar12);
      func_0x00010bf21300(puVar12);
      bVar13 = false;
      puStack_a0 = puVar12;
      goto LAB_10674d200;
    }
  }
  bVar13 = true;
  puStack_a0 = param_4;
LAB_10674d200:
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = param_6;
  uStack_90 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar3);
  func_0x00010c16e060(puVar2);
  func_0x00010c190b80(puVar2);
  dVar14 = 8.0;
  func_0x00010c207380(puVar2);
  func_0x00010c166c00(puVar2);
  func_0x00010c219b60(puVar2);
  func_0x00010bdd8a60(PTR_PTR_1126b20c8);
  dVar15 = dVar14;
  func_0x00010bdd8a60(PTR_PTR_1126b20c8);
  dVar16 = dVar15;
  if (dVar15 <= dVar14) {
    dVar16 = dVar14;
  }
  dVar14 = dVar16;
  if ((!bVar13) && (func_0x00010bdd8a60(PTR_PTR_1126b20c8), dVar14 = dVar15, dVar15 <= dVar16)) {
    dVar14 = dVar16;
  }
  lVar1 = 8;
  if (param_3 != 0) {
    lVar1 = 0;
  }
  func_0x00010c19f0e0(0,0,dVar14,*(undefined8 *)(&UNK_10ddde940 + lVar1),puVar2);
  func_0x00010c1cbe20(puVar2);
  func_0x00010c08cdc0(puVar2);
  _objc_release(puVar12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_10674d36c;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126cd650;
    puStack_e0 = puVar2;
    puStack_d8 = puVar12;
    uStack_d0 = param_6;
    uStack_c8 = param_5;
    puStack_c0 = param_4;
    lStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010bff64a0();
    func_0x00010c219b60();
    puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 1;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f0 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010beef8c0(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
      pcStack_f8 = FUN_10674d470;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_100 = &puStack_b0;
      _objc_retain(uVar7);
      _objc_retain(uVar10);
      _objc_retain(puVar8);
      _objc_alloc();
      uVar11 = 3;
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_160 = puVar8;
      uStack_158 = uVar7;
      uStack_150 = uVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff3fe0();
      _objc_release(puVar12);
      func_0x00010c16e060(puVar2);
      func_0x00010c190b80(puVar2);
      dVar16 = 8.0;
      func_0x00010c207380(puVar2);
      func_0x00010c166c00(puVar2);
      func_0x00010c219b60(puVar2);
      func_0x00010bdd8a60(PTR_PTR_1126b20c8);
      uVar9 = uVar7;
      dVar15 = dVar16;
      func_0x00010bdd8a60(PTR_PTR_1126b20c8);
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(puVar8);
      if (dVar15 <= dVar16) {
        dVar15 = dVar16;
      }
      func_0x00010c19f0e0(0,0,dVar15,0x406ce00000000000,puVar2);
      func_0x00010c1cbe20(puVar2);
      puVar12 = puVar2;
      func_0x00010c08cdc0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
        ___stack_chk_fail();
        ppuVar6 = &puStack_1a0;
        pcStack_168 = FUN_10674d5f8;
        puStack_190 = puVar2;
        uStack_188 = uVar7;
        uStack_180 = uVar10;
        puStack_178 = puVar8;
        pppuStack_170 = &ppuStack_100;
        _objc_retain(uVar9);
        _objc_retain(uVar11);
        puStack_198 = PTR_PTR_1126f2e60;
        puStack_1a0 = puVar12;
        _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
        if (ppuVar6 != (undefined **)0x0) {
          _objc_retain(uVar9);
          uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
          *(undefined8 *)((long)ppuVar6 + 8) = uVar9;
          _objc_release(uVar7);
          uVar7 = uVar11;
          func_0x00010bf51e00();
          uVar10 = *(undefined8 *)((long)ppuVar6 + 0x20);
          *(undefined8 *)((long)ppuVar6 + 0x20) = uVar7;
          _objc_release(uVar10);
          puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_alloc_init();
          uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
          *(undefined **)((long)ppuVar6 + 0x10) = puVar12;
          _objc_release(uVar7);
          puVar12 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          _objc_alloc_init();
          uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
          *(undefined **)((long)ppuVar6 + 0x18) = puVar12;
          _objc_release(uVar7);
          *(undefined4 *)((long)ppuVar6 + 0x28) = 0;
        }
        _objc_release(uVar11);
        _objc_release(uVar9);
        return (undefined1 *)ppuVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10674d36c; end: 10674d46f; +[SCMapQuickStickerImageUtil _footstepsActivityPillWithBackgroundColor:textColor:] */

undefined1 * FUN_10674d36c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_x4;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cd650;
  _objc_alloc();
  func_0x00010bff64a0();
  func_0x00010c219b60();
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010beef8c0(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    pcStack_58 = FUN_10674d470;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(in_x4);
    _objc_retain(uVar9);
    _objc_retain(puVar7);
    _objc_alloc();
    uVar10 = 3;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar7;
    uStack_b8 = in_x4;
    uStack_b0 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    _objc_release(puVar5);
    func_0x00010c16e060(puVar1);
    func_0x00010c190b80(puVar1);
    dVar12 = 8.0;
    func_0x00010c207380(puVar1);
    func_0x00010c166c00(puVar1);
    func_0x00010c219b60(puVar1);
    func_0x00010bdd8a60(PTR_PTR_1126b20c8);
    uVar8 = in_x4;
    dVar13 = dVar12;
    func_0x00010bdd8a60(PTR_PTR_1126b20c8);
    _objc_release(in_x4);
    _objc_release(uVar9);
    _objc_release(puVar7);
    if (dVar13 <= dVar12) {
      dVar13 = dVar12;
    }
    func_0x00010c19f0e0(0,0,dVar13,0x406ce00000000000,puVar1);
    func_0x00010c1cbe20(puVar1);
    puVar5 = puVar1;
    func_0x00010c08cdc0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      ppuVar6 = &puStack_100;
      pcStack_c8 = FUN_10674d5f8;
      puStack_f0 = puVar1;
      uStack_e8 = in_x4;
      uStack_e0 = uVar9;
      puStack_d8 = puVar7;
      ppuStack_d0 = &puStack_60;
      _objc_retain(uVar8);
      _objc_retain(uVar10);
      puStack_f8 = PTR_PTR_1126f2e60;
      puStack_100 = puVar5;
      _objc_msgSendSuper2(&puStack_100,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined **)0x0) {
        _objc_retain(uVar8);
        uVar9 = *(undefined8 *)((long)ppuVar6 + 8);
        *(undefined8 *)((long)ppuVar6 + 8) = uVar8;
        _objc_release(uVar9);
        uVar9 = uVar10;
        func_0x00010bf51e00();
        uVar11 = *(undefined8 *)((long)ppuVar6 + 0x20);
        *(undefined8 *)((long)ppuVar6 + 0x20) = uVar9;
        _objc_release(uVar11);
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_alloc_init();
        uVar9 = *(undefined8 *)((long)ppuVar6 + 0x10);
        *(undefined **)((long)ppuVar6 + 0x10) = puVar5;
        _objc_release(uVar9);
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_alloc_init();
        uVar9 = *(undefined8 *)((long)ppuVar6 + 0x18);
        *(undefined **)((long)ppuVar6 + 0x18) = puVar5;
        _objc_release(uVar9);
        *(undefined4 *)((long)ppuVar6 + 0x28) = 0;
      }
      _objc_release(uVar10);
      _objc_release(uVar8);
      return (undefined1 *)ppuVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10674d470; end: 10674d5f7; +[SCMapQuickStickerImageUtil _footstepsStickerStackViewWithBitmojiImageView:FootstepsPill:locationPill:] */

undefined1 *
FUN_10674d470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar6 = 3;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_3;
  uStack_68 = param_5;
  uStack_60 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar2);
  func_0x00010c16e060(puVar1);
  func_0x00010c190b80(puVar1);
  dVar8 = 8.0;
  func_0x00010c207380(puVar1);
  func_0x00010c166c00(puVar1);
  func_0x00010c219b60(puVar1);
  func_0x00010bdd8a60(PTR_PTR_1126b20c8);
  uVar5 = param_5;
  dVar9 = dVar8;
  func_0x00010bdd8a60(PTR_PTR_1126b20c8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (dVar9 <= dVar8) {
    dVar9 = dVar8;
  }
  func_0x00010c19f0e0(0,0,dVar9,0x406ce00000000000,puVar1);
  func_0x00010c1cbe20(puVar1);
  puVar2 = puVar1;
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_b0;
  pcStack_78 = FUN_10674d5f8;
  puStack_a0 = puVar1;
  uStack_98 = param_5;
  uStack_90 = param_4;
  uStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  puStack_a8 = PTR_PTR_1126f2e60;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined8 *)((long)ppuVar3 + 8) = uVar5;
    _objc_release(uVar4);
    uVar4 = uVar6;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x20);
    *(undefined8 *)((long)ppuVar3 + 0x20) = uVar4;
    _objc_release(uVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined **)((long)ppuVar3 + 0x10) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined **)((long)ppuVar3 + 0x18) = puVar1;
    _objc_release(uVar4);
    *(undefined4 *)((long)ppuVar3 + 0x28) = 0;
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 10674d5f8; end: 10674d6db; -[SCMapLocalTimeManager initWithLocationContextGRPCService:mutedFriendsSet:] */

undefined1 *
FUN_10674d5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2e60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10674d6dc; end: 10674d7c7; -[SCMapLocalTimeManager localTimeObservableForFriendId:] */

void FUN_10674d6dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x28);
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126ae568;
      _objc_alloc_init(PTR_PTR_1126ae568);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,param_3);
    }
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf4b900(uVar3,param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x28);
    if ((uVar3 & 1) == 0) {
      func_0x00010be913c0(param_1,param_2,param_3);
    }
    puVar4 = puVar2;
    func_0x00010bf870a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10674d7c8; end: 10674da87; -[SCMapLocalTimeManager updateMutedFriendsSet:] */

void FUN_10674d7c8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
  }
  else {
    func_0x00010bf51e00();
  }
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
  }
  else {
    puVar2 = param_3;
    func_0x00010bf51e00();
  }
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  puVar4 = puVar2;
  puVar12 = puVar1;
  func_0x00010c072060();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar2;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    puVar5 = puVar1;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(puVar4);
    puVar6 = puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar10 = *plStack_1a0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar10) {
            _objc_enumerationMutation(puVar4);
          }
          func_0x00010be07b00(param_1,param_2,*(undefined8 *)(lStack_1a8 + (long)puVar11 * 8));
          puVar11 = puVar11 + 1;
        } while (puVar6 != puVar11);
        puVar6 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(puVar5);
    puVar12 = &uStack_1f0;
    puVar7 = puVar5;
    func_0x00010bf52a60();
    if (puVar7 != (undefined8 *)0x0) {
      lVar10 = *plStack_1e0;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_1e0 != lVar10) {
            _objc_enumerationMutation(puVar5);
          }
          uVar3 = *(undefined8 *)(lStack_1e8 + (long)puVar12 * 8);
          lVar8 = *(long *)(param_1 + 0x10);
          func_0x00010c0e00e0(lVar8,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar9 = *(ulong *)(param_1 + 0x18);
          func_0x00010bf4b900(uVar9,param_2,uVar3);
          if (lVar8 != 0 && (uVar9 & 1) == 0) {
            func_0x00010be913c0(param_1,param_2,uVar3);
          }
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar7 != puVar12);
        puVar12 = &uStack_1f0;
        puVar7 = puVar5;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined8 *)0x0);
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x28);
  __Unwind_Resume();
  _objc_retain(puVar12);
  puVar1 = puVar12;
  func_0x00010c08fa60();
  if (puVar1 != (undefined8 *)0x0) {
    if (*(long *)(param_3 + 8) != 0) {
      _os_unfair_lock_lock(param_3 + 0x28);
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf4b900(uVar3,param_2,puVar12);
      _os_unfair_lock_unlock(param_3 + 0x28);
      if ((int)uVar3 == 0) {
        _os_unfair_lock_lock(param_3 + 0x28);
        func_0x00010befa120(*(undefined8 *)(param_3 + 0x18),param_2,puVar12);
        _os_unfair_lock_unlock(param_3 + 0x28);
        func_0x00010be5ba60(param_3,param_2,puVar12);
        goto LAB_10674db18;
      }
    }
    func_0x00010be07b00(param_3,param_2,puVar12);
  }
LAB_10674db18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 10674da88; end: 10674db43; -[SCMapLocalTimeManager _requestLocalTimeForFriendId:] */

void FUN_10674da88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      _os_unfair_lock_lock(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4b900(uVar2,param_2,param_3);
      _os_unfair_lock_unlock(param_1 + 0x28);
      if ((int)uVar2 == 0) {
        _os_unfair_lock_lock(param_1 + 0x28);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
        _os_unfair_lock_unlock(param_1 + 0x28);
        func_0x00010be5ba60(param_1,param_2,param_3);
        goto LAB_10674db18;
      }
    }
    func_0x00010be07b00(param_1,param_2,param_3);
  }
LAB_10674db18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10674db44; end: 10674dbdb; -[SCMapLocalTimeManager _emitEmptyTimeForFriendUnlocked:] */

void FUN_10674db44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  if (lVar1 != 0) {
    func_0x00010c0d9840(lVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10674dbdc; end: 10674dd87; -[SCMapLocalTimeManager _makeGRPCRequestForFriendId:] */

void FUN_10674dbdc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd658;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0157a0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  FUN_106750f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_58;
  _objc_initWeak(puVar3,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x000106750d1c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_58;
  _objc_copyWeak(auStack_60,puVar4);
  _objc_retain(param_3);
  puVar5 = puVar2;
  func_0x00010bfc7200(uVar6);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2b960();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10674dd88; end: 10674ddf3;  */

void FUN_10674dd88(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b960();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10674ddf4; end: 10674deff; -[SCMapLocalTimeManager _handleLocationContextResponse:error:friendId:] */

void FUN_10674ddf4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = 0;
  if ((param_3 != 0) && (param_4 == 0)) {
    lVar2 = param_3;
    FUN_106750d68();
    _objc_retainAutoreleasedReturnValue();
  }
  _os_unfair_lock_lock(param_1 + 0x28);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x28);
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      func_0x00010c0d9840(lVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    }
    else {
      func_0x00010be07e80(param_1,param_2,lVar2,param_5,lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10674df00; end: 10674e16b; -[SCMapLocalTimeManager _emitLocalTimeFromResponse:forFriendId:toSubject:] */

void FUN_10674df00(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar9 = 0;
  func_0x00010bfb8440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_3);
LAB_10674e0e8:
      func_0x00010c0d9840(param_5);
LAB_10674e11c:
      _objc_release(param_5);
      _objc_release(param_4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_4 + 0x20,0);
      _objc_storeStrong(param_4 + 0x18,0);
      _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar3 = uVar7;
      func_0x00010bfb81c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        _objc_retain(uVar7);
        _objc_release(param_3);
        if (uVar7 == 0) goto LAB_10674e0e8;
        uVar3 = uVar7;
        func_0x00010c09ec20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if ((uVar4 == 0) || (uVar3 = uVar4, func_0x00010befd100(), uVar3 != 1)) {
LAB_10674e0fc:
          func_0x00010c0d9840(param_5);
        }
        else {
          uVar3 = uVar4;
          func_0x00010c26fd00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar3 == 0) goto LAB_10674e0fc;
          uVar3 = uVar4;
          func_0x00010c26fd00(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c294ce0();
          _objc_release(uVar3);
          puVar5 = PTR_PTR_1126cd660;
          func_0x00010c26f960(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(param_5);
          _objc_release(puVar5);
        }
        _objc_release(uVar4);
        _objc_release(uVar7);
        goto LAB_10674e11c;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10674e16c; end: 10674e1b3; -[SCMapLocalTimeManager .cxx_destruct] */

void FUN_10674e16c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10674e1b4; end: 10674e447; -[SCMapLocationContextFetcher initWithUnifiedGRPCClientFactory:mutingService:workerQueue:circumstanceEngine:mapNetworkCacheManager:snapchattersDataFetcher:] */

undefined8 *
FUN_10674e1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f2e68;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    puVar1[0xe] = param_1;
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 10) = 0;
    uVar2 = param_7;
    func_0x00010902231c();
    *(char *)(puVar1 + 6) = (char)uVar2;
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0d41e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x10];
    puVar1[0x10] = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10674e448; end: 10674e48f;  */

void FUN_10674e448(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10674e490; end: 10674e56b; -[SCMapLocationContextFetcher localTimeManager] */

void FUN_10674e490(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == 0) {
    lVar1 = param_1;
    func_0x00010c09ec80();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x50);
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 == 0) {
      puVar2 = PTR_PTR_1126cd668;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c026cc0(puVar2,param_2,lVar1,puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar2;
      _objc_release(uVar4);
      _objc_release(puVar3);
      lVar5 = *(long *)(param_1 + 0x48);
    }
    _objc_retain(lVar5);
    _os_unfair_lock_unlock(param_1 + 0x50);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10674e56c; end: 10674e65b; -[SCMapLocationContextFetcher fetchMapFriendsContextsForFriendIds:ignoreCache:completion:] */

void FUN_10674e56c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10674e65c; end: 10674e89b;  */

void FUN_10674e65c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010be1d800(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0d3c80();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = puVar1;
  func_0x00010bf002e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = lVar2;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1,0);
  }
  else {
    puVar4 = PTR_PTR_1126cd670;
    _objc_opt_new(PTR_PTR_1126cd670);
    lVar5 = lVar2;
    func_0x000100504554(lVar2,&PTR___NSConcreteGlobalBlock_110938a10);
    lVar6 = lVar5;
    func_0x00010c0d3c80();
    func_0x00010c19fd80(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09ec80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000106750d1c();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar1);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    func_0x00010bfc5f20(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10674e89c; end: 10674e8ff;  */

void FUN_10674e89c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674e900; end: 10674e96b;  */

void FUN_10674e900(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bf40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10674e96c; end: 10674ecb3; -[SCMapLocationContextFetcher _getCachedOrMutedMapFriendsContextsForFriendIds:] */

void FUN_10674e96c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain();
  _os_unfair_lock_unlock(param_1 + 0x50);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        uVar4 = uVar2;
        func_0x00010bf4b900(uVar2,param_2,uVar15);
        if ((int)uVar4 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
          _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
          func_0x00010c04e820();
          lVar6 = *(long *)(param_1 + 0x20);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126cd680;
          _objc_opt_class(PTR_PTR_1126cd680);
          lVar8 = lVar6;
          func_0x00010bf27460(lVar6,param_2,puVar5,uVar15,puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          if (lVar8 != 0) {
            lVar6 = lVar8;
            func_0x00010bfe5d20();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar6;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            lVar6 = lVar8;
            func_0x00010beef440(lVar8);
            FUN_106750fa4();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar8;
            func_0x00010bfba100();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            FUN_10674ecb4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar10);
            puVar7 = PTR_PTR_1126cd678;
            _objc_alloc(PTR_PTR_1126cd678);
            lVar10 = lVar9;
            func_0x00010bdc2b80(lVar9);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar9;
            func_0x00010c27dd80(lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c015700(puVar7,param_2,uVar15,lVar10,lVar12,lVar6,lVar11);
            _objc_release(lVar12);
            _objc_release(lVar10);
            func_0x00010c1d0560(puVar1,param_2,puVar7,uVar15);
            _objc_release(puVar7);
            _objc_release(lVar11);
            _objc_release(lVar6);
            _objc_release(lVar9);
          }
          _objc_release(lVar8);
        }
        else {
          puVar5 = PTR_PTR_1126cd678;
          _objc_alloc(PTR_PTR_1126cd678);
          func_0x00010c015700();
          func_0x00010c1d0560(puVar1,param_2,puVar5,uVar15);
        }
        _objc_release(puVar5);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126cd6b0;
    _objc_retain();
    _objc_alloc(puVar1);
    lVar3 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_3;
    func_0x00010bf8d020(param_3);
    lVar8 = param_3;
    func_0x00010bf9c920(param_3);
    _objc_release(param_3);
    func_0x00010c0561c0((double)(int)lVar14,(double)(int)lVar8,puVar1,param_2,lVar3,lVar13);
    _objc_release(lVar13);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674ecb4; end: 10674ed77;  */

void FUN_10674ecb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126cd6b0;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c27dd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf8d020(param_1);
  uVar5 = param_1;
  func_0x00010bf9c920(param_1);
  _objc_release(param_1);
  func_0x00010c0561c0((double)(int)uVar4,(double)(int)uVar5,puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674ed78; end: 10674f0cf; -[SCMapLocationContextFetcher _handleMapFriendsIconsResponseWithResponse:error:cachedFriendContexts:completion:] */

void FUN_10674ed78(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfb81a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = auStack_f0;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar14 = *(undefined8 *)(lVar13 * 8);
        uVar10 = uVar14;
        func_0x00010bfb81c0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bfe2ee0();
        uVar6 = uVar10;
        func_0x00010c0b5940(uVar10);
        func_0x000100c4a928(uVar5,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar10);
        uVar10 = uVar14;
        func_0x00010bfe5d20(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        uVar10 = uVar14;
        func_0x00010beef440(uVar14);
        FUN_106750fa4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfba100(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar14;
        FUN_10674ecb4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        puVar8 = PTR_PTR_1126cd678;
        _objc_alloc(PTR_PTR_1126cd678);
        uVar14 = uVar5;
        func_0x00010bdc2b80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010c27dd80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c015700(puVar8);
        _objc_release(uVar9);
        _objc_release(uVar14);
        func_0x00010c220220(puVar2);
        func_0x00010bdd7ae0(param_1);
        _objc_release(puVar8);
        _objc_release(uVar7);
        _objc_release(uVar10);
        _objc_release(uVar5);
        _objc_release(uVar6);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      puVar12 = auStack_f0;
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    puVar11 = (undefined1 *)0x0;
    (**(code **)(param_6 + 0x10))(param_6,puVar2,0);
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_5;
    func_0x00010bf529e0();
    lVar4 = 0;
    if (lVar1 != 0) {
      lVar4 = param_5;
    }
    puVar11 = param_4;
    (**(code **)(param_6 + 0x10))(param_6,lVar4,param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(puVar12);
  _objc_retain(puVar11);
  _objc_alloc(puVar2);
  func_0x00010c04e820();
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26a60(0x4072c00000000000);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10674f0d0; end: 10674f173; -[SCMapLocationContextFetcher _cacheMapFriendsIconForFriendId:friendIcon:] */

void FUN_10674f0d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e820();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26a60(0x4072c00000000000);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10674f174; end: 10674f2a7; -[SCMapLocationContextFetcher fetchMapLocationContextWithRequest:completionHandler:] */

void FUN_10674f174(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x50);
    uVar2 = uVar1;
    func_0x00010c069880();
    if ((int)uVar2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_4);
      _objc_release(param_3);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10674f2a8; end: 10674f3d3;  */

void FUN_10674f2a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09ec80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_106750f00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106750d1c();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  func_0x00010bfc7200(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10674f3d4; end: 10674f43f;  */

void FUN_10674f3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b940();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10674f440; end: 10674f5a3; -[SCMapLocationContextFetcher _handleLocationContextResponse:error:completionHandler:] */

void FUN_10674f440(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_5 == 0) {
    _objc_retain(param_6);
    FUN_106750d68(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9da0();
    if (param_1 <= 0.0) {
      param_1 = 60.0;
    }
    else {
      func_0x00010c0d9da0(param_4);
    }
    *(double *)(param_2 + 0x78) = param_1;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(double *)(param_2 + 0x70) = param_1 + *(double *)(param_2 + 0x78);
    _objc_release(puVar1);
    lVar2 = param_4;
    func_0x00010bfb8440(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8100(param_2);
    _objc_release(lVar2);
    (**(code **)(param_6 + 0x10))(param_6,param_4,0);
    _objc_release(param_6);
  }
  else {
    _objc_retain(param_6);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(double *)(param_2 + 0x70) = param_1;
    _objc_release(puVar1);
    *(undefined8 *)(param_2 + 0x78) = 0x404e000000000000;
    (**(code **)(param_6 + 0x10))(param_6,0,param_5);
    param_4 = param_6;
  }
  _objc_release(param_4);
  func_0x00010bec11a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10674f5a4; end: 10674f7f3; -[SCMapLocationContextFetcher fetchMapGroupLocationContextWithRequest:completionHandler:] */

void FUN_10674f5a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar5);
    _os_unfair_lock_unlock(param_1 + 0x50);
    _objc_initWeak(auStack_a0,param_1);
    func_0x00010c09ec80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar5);
    puVar1 = PTR_PTR_1126cd6b8;
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    uVar2 = param_3;
    func_0x00010c292720(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x106750c3c;
    puStack_80 = &UNK_110938bb0;
    uStack_78 = uVar5;
    _objc_retain(uVar5);
    uVar3 = uVar2;
    func_0x000100504554(uVar2,&puStack_98);
    uVar4 = uVar3;
    func_0x00010c0d3c80();
    func_0x00010c21e700(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_78);
    uVar2 = uVar5;
    _objc_release(uVar5);
    func_0x000106750d1c();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(param_4);
    func_0x00010bfc6180(param_1);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10674f7f4; end: 10674f85f;  */

void FUN_10674f7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a640();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10674f860; end: 10674fa47; -[SCMapLocationContextFetcher _handleGroupLocationContextFetchResponse:error:completionHandler:] */

void FUN_10674f860(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfceda0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,param_4);
    }
  }
  else {
    lVar1 = lVar2;
    func_0x00010c292740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000100504554();
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(lVar2);
    _objc_retain(param_3);
    _objc_retain(lVar3);
    func_0x00010c244e80(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_5);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10674fa48; end: 10674fac7;  */

void FUN_10674fa48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe2ee0(param_2);
  uVar2 = param_2;
  func_0x00010c0b5940(param_2);
  _objc_release(param_2);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10674fac8; end: 10674fdcb;  */

void FUN_10674fac8(long param_1,long param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_2);
          }
          puVar4 = *(undefined **)(lStack_128 + lVar11 * 8);
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010901e6c8();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar4 = puVar5;
          func_0x00010c08fa60();
          if (puVar4 != (undefined *)0x0) {
            puVar9 = (undefined8 *)puVar5;
            func_0x00010befa120(puVar3);
            puVar4 = puVar3;
            func_0x00010bf529e0();
            iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
            func_0x00010c0de540();
            if (puVar4 == (undefined *)(long)iVar1) {
              _objc_release(puVar5);
              goto LAB_10674fc38;
            }
          }
          _objc_release(puVar5);
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = param_2;
        puVar9 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
LAB_10674fc38:
    _objc_release(param_2);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0de540();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)(long)iVar1) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c26b700(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de20(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar4 = PTR_PTR_1126cd688;
      _objc_alloc();
      func_0x00010bf8d020(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bffc680();
      puVar7 = PTR_PTR_1126cd690;
      _objc_alloc(PTR_PTR_1126cd690);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f0 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0d9da0(uVar6);
      puVar9 = (undefined8 *)puVar8;
      func_0x00010c019180((double)(int)uVar6,puVar7);
      _objc_release(puVar8);
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 != 0) {
        puVar9 = (undefined8 *)0x0;
        (**(code **)(lVar2 + 0x10))(lVar2,puVar7,0);
      }
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 != 0) {
        puVar9 = (undefined8 *)0x0;
        (**(code **)(lVar2 + 0x10))(lVar2,0,0);
      }
    }
    _objc_release(puVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    puVar9 = (undefined8 *)puVar3;
    if (lVar2 != 0) {
      puVar9 = (undefined8 *)param_3;
      (**(code **)(lVar2 + 0x10))(lVar2,0,param_3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    func_0x00010c09e020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c09e040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10674fdcc; end: 10674fe37; -[SCMapLocationContextFetcher localTimeObservableForUserId:] */

void FUN_10674fdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c09e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c09e040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


