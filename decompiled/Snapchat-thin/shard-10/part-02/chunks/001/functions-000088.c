/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b62e58; end: 107b62ec3; -[SCOperaInteractionButtonsLayerViewController saveButtonPressed:] */

void FUN_107b62e58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010c149e20(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b62ec4; end: 107b62f4f; -[SCOperaInteractionButtonsLayerViewController favoriteButtonPressed:isFavorited:] */

void FUN_107b62ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c2729a0(param_3);
  puVar1 = PTR_PTR_1126b5b28;
  if ((param_4 & 1) == 0) {
    func_0x00010bfa0ee0(PTR_PTR_1126b5b28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c27fa80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b62f50; end: 107b63183; -[SCOperaInteractionButtonsLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b62f50(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0683e0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0683e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    lVar2 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar2);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0683a0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0683a0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0683c0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c067ec0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    lVar2 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    func_0x00010bf02cc0(param_1,*(undefined8 *)(param_2 + _DAT_11276ae70),param_3,lVar3,
                        (long)(int)lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b63184; end: 107b63197; -[SCOperaInteractionButtonsLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ae70,0);
  return;
}



/* Entry: 107b63198; end: 107b63297; -[SCOperaOptInDoorbellLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b63198(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9fe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276ae74;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ae78);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ae78) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b63298; end: 107b63343; -[SCOperaOptInDoorbellLayerView setupViewForLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63298(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x0001008522a8();
  uVar2 = param_5;
  func_0x000107d36174(param_5,uVar1);
  _objc_release(param_5);
  *(char *)(param_2 + _DAT_11276ae7c) = (char)uVar2;
  uVar1 = param_4;
  func_0x00010c07b480();
  *(char *)(param_2 + _DAT_11276ae80) = (char)uVar1;
  uVar1 = param_4;
  func_0x00010bf021e0();
  *(char *)(param_2 + _DAT_11276ae84) = (char)uVar1;
  func_0x00010c2747c0(param_4);
  _objc_release(param_4);
  *(undefined8 *)(param_2 + _DAT_11276ae88) = param_1;
  return;
}



/* Entry: 107b63344; end: 107b6340f; -[SCOperaOptInDoorbellLayerView updateViewOpacityWithYOffset:] */

void FUN_107b63344(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = param_4;
  _objc_release(uVar1);
  if ((param_1 != 0.0) && (param_4 != 0.0)) {
    uVar1 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = param_1 / dVar2;
    _objc_release(uVar1);
    func_0x00010c1677c0(param_5);
    func_0x00010bf01b40(param_5);
    if (param_1 < 0.1) {
      func_0x00010c1677c0(0,param_5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setHidden__1126479f8,param_1 < 0.1);
    return;
  }
  return;
}



/* Entry: 107b63410; end: 107b634a3; -[SCOperaOptInDoorbellLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63410(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c082800();
  if ((int)lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (long)_DAT_11276ae74;
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar2));
    uVar1 = *(undefined8 *)(param_3 + lVar2);
    func_0x00010bfe3a40(uVar1,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b634a4; end: 107b63503; -[SCOperaOptInDoorbellLayerView _optInDoorbellTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b634a4(long param_1)

{
  *(byte *)(param_1 + _DAT_11276ae8c) = *(byte *)(param_1 + _DAT_11276ae8c) ^ 1;
  func_0x00010bed9700();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b63504; end: 107b6354b; -[SCOperaOptInDoorbellLayerView didMoveToWindow] */

void FUN_107b63504(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9fe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 107b6354c; end: 107b636cf; -[SCOperaOptInDoorbellLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6354c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  double dVar6;
  double in_d3;
  double dVar7;
  double dVar8;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9fe0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  dVar6 = *(double *)(param_1 + (long)_DAT_11276ae90);
  lVar5 = (long)_DAT_11276ae84;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    dVar6 = dVar6 + *(double *)(param_1 + (long)_DAT_11276ae88);
  }
  func_0x00010c14d760(param_1);
  if ((*(byte *)(param_1 + (long)_DAT_11276ae80) & 1) == 0) {
    if (*(char *)(param_1 + lVar5) == '\x01') {
      dVar8 = *(double *)(param_1 + (long)_DAT_11276ae88);
      bVar4 = 1;
    }
    else {
      bVar4 = 0;
      dVar8 = 0.0;
    }
  }
  else {
    dVar8 = *(double *)(param_1 + (long)_DAT_11276ae88);
    bVar1 = false;
    if ((0.0 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar8))) {
      bVar1 = dVar6 < dVar8;
    }
    if (bVar1) goto LAB_107b63624;
    bVar4 = *(byte *)(param_1 + lVar5);
  }
  if ((bVar4 & dVar6 == 0.0) == 0) {
    dVar8 = dVar6;
  }
LAB_107b63624:
  uVar2 = param_1;
  func_0x00010bf20c00();
  _CGRectGetMaxX();
  func_0x0001008522a8();
  dVar7 = 0.0;
  if (((uVar2 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_11276ae7c) & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _objc_release(puVar3);
    dVar7 = in_d3;
  }
  func_0x00010c19f0e0(dVar6 + -40.0 + -33.0,dVar8 + 10.0 + dVar7,0x4040800000000000,
                      0x4040800000000000,*(undefined8 *)(param_1 + (long)_DAT_11276ae74));
  return;
}



/* Entry: 107b636d0; end: 107b636df; -[SCOperaOptInDoorbellLayerView setIsOptedIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b636d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276ae8c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed9710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImage_112593f68);
  return;
}



/* Entry: 107b636e0; end: 107b63783; -[SCOperaOptInDoorbellLayerView _updateImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b636e0(long param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + _DAT_11276ae8c) == '\x01') {
    if (lRam0000000113727600 == -1) {
      puVar2 = (undefined8 *)0x1137275f8;
      goto LAB_107b63738;
    }
    puVar2 = (undefined8 *)0x1137275f8;
    ppuVar1 = &PTR___NSConcreteGlobalBlock_1109fe208;
  }
  else {
    if (lRam0000000113727610 == -1) {
      puVar2 = (undefined8 *)0x113727608;
      goto LAB_107b63738;
    }
    puVar2 = (undefined8 *)0x113727608;
    ppuVar1 = &PTR___NSConcreteGlobalBlock_1109fe228;
  }
  func_0x00010002a2fc(puVar2 + 1,ppuVar1);
LAB_107b63738:
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ae74),PTR_s_setImage__1126481e8,*puVar2);
  return;
}



/* Entry: 107b63784; end: 107b63793; -[SCOperaOptInDoorbellLayerView setDoorbellHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ae74),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 107b63794; end: 107b637b3; -[SCOperaOptInDoorbellLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63794(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ae94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b637b4; end: 107b637c7; -[SCOperaOptInDoorbellLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b637b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ae94,param_3);
  return;
}



/* Entry: 107b637c8; end: 107b637df; -[SCOperaOptInDoorbellLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b637c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ae90);
}



/* Entry: 107b637e0; end: 107b637f7; -[SCOperaOptInDoorbellLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b637e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276ae90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b637f8; end: 107b63807; -[SCOperaOptInDoorbellLayerView isProgressBarAlignedToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b637f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ae80);
}



/* Entry: 107b63808; end: 107b63817; -[SCOperaOptInDoorbellLayerView setIsProgressBarAlignedToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63808(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276ae80) = param_3;
  return;
}



/* Entry: 107b63818; end: 107b63827; -[SCOperaOptInDoorbellLayerView alwaysUseTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b63818(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ae84);
}



/* Entry: 107b63828; end: 107b63837; -[SCOperaOptInDoorbellLayerView setAlwaysUseTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63828(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276ae84) = param_3;
  return;
}



/* Entry: 107b63838; end: 107b63883; -[SCOperaOptInDoorbellLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63838(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ae94);
  _objc_storeStrong(param_1 + _DAT_11276ae74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ae78,0);
  return;
}



/* Entry: 107b63884; end: 107b638fb;  */

void FUN_107b63884(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eaf478);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137275f8;
  puRam00000001137275f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b638fc; end: 107b63993; -[SCOperaOptInDoorbellLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b638fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6b60;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276ae98;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107b63994; end: 107b63ca7; -[SCOperaOptInDoorbellLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63994(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11276ae98;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229940(uVar5);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_107b63c5c;
    lVar1 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a59d8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c079460(param_4);
    func_0x00010c1b3120(uVar5);
    _objc_initWeak(auStack_58,param_1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x107b63cec;
    puStack_90 = &UNK_110871898;
    ppuVar4 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c175bc0(lVar1);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a59d8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107b63ca8;
    puStack_68 = &UNK_110871898;
    ppuVar4 = &puStack_80;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c175bc0(lVar1);
  }
  _objc_destroyWeak(ppuVar4 + 4);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
LAB_107b63c5c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b63ca8; end: 107b63d2f;  */

void FUN_107b63ca8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27eb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b63d30; end: 107b63e53; -[SCOperaOptInDoorbellLayerViewController viewWillAppear:] */

void FUN_107b63d30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9fe8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c175bc0(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 107b63e54; end: 107b63e97;  */

void FUN_107b63e54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27eb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b63e98; end: 107b63edb; -[SCOperaOptInDoorbellLayerViewController udpateOptInDoorbellCanOptIn:isOptedIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63e98(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276ae98;
  func_0x00010c190fc0(*(undefined8 *)(param_1 + lVar1),param_2,param_3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b3130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setIsOptedIn__11264a670,param_4);
  return;
}



/* Entry: 107b63edc; end: 107b64087; -[SCOperaOptInDoorbellLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b63edc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c238dc0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c238dc0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276ae98),param_2,(uint)lVar3 ^ 1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c238da0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c238de0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    if (lVar3 == 0) goto LAB_107b6406c;
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276ae98);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c238da0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c238de0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c220(uVar5,param_2,param_3,puVar1,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
LAB_107b6406c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b64088; end: 107b640db; -[SCOperaOptInDoorbellLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64088(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9fe8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276ae98));
  return;
}



/* Entry: 107b640dc; end: 107b64137; -[SCOperaOptInDoorbellLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b640dc(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  func_0x00010be6f1e0();
  lVar1 = (long)_DAT_11276ae98;
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar1));
  dVar2 = ABS(param_1) * -2.0 + 1.0;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,*(undefined8 *)(param_2 + lVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b64138; end: 107b641af; -[SCOperaOptInDoorbellLayerViewController _pageHasInterstitial] */

bool FUN_107b64138(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107b641b0; end: 107b642ab; -[SCOperaOptInDoorbellLayerViewController operaOptInDoorbellLayerView:shouldOptIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b641b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b5bf0;
  func_0x00010c0ebe20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11276ae98,0);
  return;
}



/* Entry: 107b642ac; end: 107b642bf; -[SCOperaOptInDoorbellLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b642ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ae98,0);
  return;
}



/* Entry: 107b642c0; end: 107b6447b; -[SCOperaShowActionMenuButtonLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b642c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9ff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    dVar7 = *(double *)PTR__CGRectZero_110347608;
    func_0x00010c013de0(dVar7,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar6 = (long)_DAT_11276ae9c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar5);
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010bfe90c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar8 = 3.0;
    func_0x00010c2256c0(dVar7 + 19.0 + 3.0,*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010bfe90c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1a7d00(dVar8 + 22.0,*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c181e40(0x4026000000000000,0x4033000000000000,0x4026000000000000,0x4008000000000000,
                        *(undefined8 *)((long)puVar1 + lVar6));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b6447c; end: 107b64533; -[SCOperaShowActionMenuButtonLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6447c(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c082800();
  if ((((int)uVar1 == 0) || (uVar1 = param_3, func_0x00010c074c20(), (uVar1 & 1) != 0)) ||
     (func_0x00010bf01b40(param_3), dVar4 <= 0.01)) {
    uVar2 = 0;
  }
  else {
    lVar3 = (long)_DAT_11276ae9c;
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar3));
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bfe3a40(uVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b64534; end: 107b6456b; -[SCOperaShowActionMenuButtonLayerView showActionMenuButtonPressed:] */

void FUN_107b64534(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6456c; end: 107b6467f; -[SCOperaShowActionMenuButtonLayerView setupViewForLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6456c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2bec60(param_4);
  *(undefined8 *)(param_2 + _DAT_11276aea0) = param_1;
  uVar2 = param_4;
  func_0x00010c08ce40();
  *(char *)(param_2 + _DAT_11276aea4) = (char)uVar2;
  uVar2 = *(undefined8 *)(param_2 + _DAT_11276ae9c);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar1);
  func_0x0001008522a8();
  uVar2 = param_5;
  func_0x000107d36174(param_5,puVar1);
  _objc_release(param_5);
  *(char *)(param_2 + _DAT_11276aea8) = (char)uVar2;
  uVar2 = param_4;
  func_0x00010c07b480();
  *(char *)(param_2 + _DAT_11276aeac) = (char)uVar2;
  uVar2 = param_4;
  func_0x00010bf021e0();
  *(char *)(param_2 + _DAT_11276aeb0) = (char)uVar2;
  func_0x00010c2747c0(param_4);
  _objc_release(param_4);
  *(undefined8 *)(param_2 + _DAT_11276aeb4) = param_1;
  return;
}



/* Entry: 107b64680; end: 107b646c7; -[SCOperaShowActionMenuButtonLayerView didMoveToWindow] */

void FUN_107b64680(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ff0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 107b646c8; end: 107b64867; -[SCOperaShowActionMenuButtonLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b646c8(ulong param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double in_d3;
  double dVar7;
  double dVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  uVar3 = 0;
  puStack_58 = PTR_PTR_1126f9ff0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  dVar6 = *(double *)(param_1 + (long)_DAT_11276aeb8);
  lVar5 = (long)_DAT_11276aeac;
  lVar1 = (long)_DAT_11276aeb0;
  cVar2 = *(char *)(param_1 + lVar1);
  if ((*(byte *)(param_1 + lVar5) & 1) == 0) {
    dVar8 = 0.0;
    if (cVar2 == '\0') goto LAB_107b64750;
    dVar8 = *(double *)(param_1 + (long)_DAT_11276aeb4);
  }
  else {
    dVar8 = *(double *)(param_1 + (long)_DAT_11276aeb4);
    if (cVar2 == '\0') goto LAB_107b64750;
  }
  dVar6 = dVar6 + dVar8;
LAB_107b64750:
  dVar7 = dVar8;
  if ((*(byte *)(param_1 + (long)_DAT_11276aea4) & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c14d760();
    dVar7 = dVar6;
  }
  func_0x0001008522a8();
  dVar6 = 0.0;
  if (((uVar3 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_11276aea8) & 1) == 0)) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _objc_release(puVar4);
    dVar6 = in_d3;
  }
  if ((((*(char *)(param_1 + lVar5) != '\x01') || (dVar7 < 0.0)) || (dVar8 <= dVar7)) &&
     ((*(byte *)(param_1 + lVar1) & dVar7 == 0.0) == 0)) {
    dVar8 = dVar7;
  }
  dVar6 = dVar6 + dVar8 + *(double *)(param_1 + (long)_DAT_11276aea0) +
          *(double *)(param_1 + (long)_DAT_11276aebc);
  if (!NAN(dVar6)) {
    dVar6 = dVar6 + 0.0;
    lVar5 = (long)_DAT_11276ae9c;
    func_0x00010c2172c0(dVar6,*(undefined8 *)(param_1 + lVar5));
    func_0x00010bf20c00(param_1);
    _CGRectGetMaxX();
    func_0x00010c1ee020(dVar6 - *(double *)(param_1 + (long)_DAT_11276aec0),
                        *(undefined8 *)(param_1 + lVar5));
  }
  return;
}



/* Entry: 107b64868; end: 107b6495b; -[SCOperaShowActionMenuButtonLayerView updateViewYOffset:animated:] */

void FUN_107b64868(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_initWeak(auStack_48,param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107b6495c;
  puStack_68 = &UNK_11085da78;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = (undefined1)param_4;
  uStack_58 = param_1;
  _objc_retainBlock();
  if (param_4 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b6495c; end: 107b649b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6495c(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + _DAT_11276aea0) = *(undefined8 *)(param_1 + 0x28);
    cVar1 = *(char *)(param_1 + 0x30);
    func_0x00010c1cbe20(lVar2);
    if (cVar1 == '\x01') {
      func_0x00010c08cdc0(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b649b8; end: 107b64a47; -[SCOperaShowActionMenuButtonLayerView animateVisibility:duration:] */

void FUN_107b649b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010c21e900(param_2,param_3,param_4 ^ 1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b64a48;
  puStack_48 = &UNK_110845ce0;
  uStack_38 = (undefined1)param_4;
  uStack_40 = param_2;
  func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,4,&puStack_60,0);
  return;
}



/* Entry: 107b64a48; end: 107b64a63;  */

void FUN_107b64a48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b64a64; end: 107b64b33; -[SCOperaShowActionMenuButtonLayerView updateYOffset:] */

void FUN_107b64a64(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = param_4;
  _objc_release(uVar1);
  if ((param_1 != 0.0) && (param_4 != 0.0)) {
    uVar1 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = param_1 / dVar2;
    _objc_release(uVar1);
    func_0x00010c1677c0(param_5);
    func_0x00010bf01b40(param_5);
    if (param_1 < 0.1) {
      param_1 = 0.0;
      func_0x00010c1677c0(param_5);
    }
    func_0x00010bf01b40(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_5,PTR_s_setUserInteractionEnabled__112665468,0.0 < param_1);
    return;
  }
  return;
}



/* Entry: 107b64b34; end: 107b64b8b; -[SCOperaShowActionMenuButtonLayerView updateButtonOffsetsForPreviewToolbarEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64b34(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x404a000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + _DAT_11276aec0) = uVar1;
  uVar1 = 0x4010000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + _DAT_11276aebc) = uVar1;
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b64b8c; end: 107b64bab; -[SCOperaShowActionMenuButtonLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64b8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276aec4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b64bac; end: 107b64bbf; -[SCOperaShowActionMenuButtonLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64bac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276aec4,param_3);
  return;
}



/* Entry: 107b64bc0; end: 107b64bcf; -[SCOperaShowActionMenuButtonLayerView button] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b64bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ae9c);
}



/* Entry: 107b64bd0; end: 107b64be7; -[SCOperaShowActionMenuButtonLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b64bd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aeb8);
}



/* Entry: 107b64be8; end: 107b64bff; -[SCOperaShowActionMenuButtonLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276aeb8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b64c00; end: 107b64c0f; -[SCOperaShowActionMenuButtonLayerView isProgressBarAlignedToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b64c00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aeac);
}



/* Entry: 107b64c10; end: 107b64c1f; -[SCOperaShowActionMenuButtonLayerView setIsProgressBarAlignedToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64c10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276aeac) = param_3;
  return;
}



/* Entry: 107b64c20; end: 107b64c2f; -[SCOperaShowActionMenuButtonLayerView alwaysUseTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b64c20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aeb0);
}



/* Entry: 107b64c30; end: 107b64c3f; -[SCOperaShowActionMenuButtonLayerView setAlwaysUseTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64c30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276aeb0) = param_3;
  return;
}



/* Entry: 107b64c40; end: 107b64c7b; -[SCOperaShowActionMenuButtonLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64c40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ae9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276aec4);
  return;
}



/* Entry: 107b64c7c; end: 107b64caf; -[SCOperaShowActionMenuButtonLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107b64c7c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9ff8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithConfiguration_layerViewC_1125de030);
  return;
}



/* Entry: 107b64cb0; end: 107b64d47; -[SCOperaShowActionMenuButtonLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64cb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c4170;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276aec8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107b64d48; end: 107b64de3; -[SCOperaShowActionMenuButtonLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64d48(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ff8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  lVar1 = (long)_DAT_11276aec8;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1));
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  return;
}



/* Entry: 107b64de4; end: 107b64eff; -[SCOperaShowActionMenuButtonLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276aec8);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229940(uVar7,param_2,param_4,lVar1);
  _objc_release(param_4);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c29a1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(lVar1,param_2,param_1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = param_1;
    func_0x00010c118b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c283f60(*(undefined8 *)(lVar1 + _DAT_11276aec8),param_2,lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b64f00; end: 107b64fd3; -[SCOperaShowActionMenuButtonLayerViewController didUpdateOperaPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b64f00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c283f60(*(undefined8 *)(param_1 + _DAT_11276aec8),param_2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b64fd4; end: 107b65057; -[SCOperaShowActionMenuButtonLayerViewController operaViewDidSendEvent:page:params:] */

void FUN_107b64fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2638;
  _objc_retain(param_3);
  func_0x00010c29a1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea0230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendShowActionMenuButtonSizeUpd_112585a30)
    ;
    return;
  }
  return;
}



/* Entry: 107b65058; end: 107b650c3; -[SCOperaShowActionMenuButtonLayerViewController showActionMenuButtonPressed:] */

void FUN_107b65058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b650c4; end: 107b6548f; -[SCOperaShowActionMenuButtonLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b650c4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c235980(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c0e00e0(param_5,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar6 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c235980(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar6);
    _objc_release(puVar1);
    lVar6 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar6);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39140(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c0e00e0(param_5,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  uVar5 = param_1;
  if (lVar6 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf39140(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar5 = param_1;
    _objc_release(lVar6);
    _objc_release(puVar1);
    lVar6 = (long)_DAT_11276aec8;
    uVar2 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010bf25360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar2);
    if (0.0 <= param_2) {
      func_0x00010c28c120(param_1,*(undefined8 *)(param_3 + lVar6),param_4,1);
      uVar5 = param_1;
    }
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39100(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c0e00e0(param_5,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_release(puVar1);
  }
  else {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010bf39120(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(lVar6);
    _objc_release(puVar1);
    if (lVar4 != 0) {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf39100(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_5;
      func_0x00010c0e00e0(param_5,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf1f3c0();
      _objc_release(lVar6);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf39120(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_5;
      func_0x00010c0e00e0(param_5,param_4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(lVar6);
      _objc_release(puVar1);
      func_0x00010bf033a0(uVar5,*(undefined8 *)(param_3 + _DAT_11276aec8),param_4,lVar4);
    }
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c235920(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c0e00e0(param_5,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c2359a0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(lVar6);
    _objc_release(puVar1);
    if (lVar4 == 0) goto LAB_107b65470;
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276aec8);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c235920(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c2359a0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c220(uVar5,param_4,param_5,puVar1,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_107b65470:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b65490; end: 107b65563; -[SCOperaShowActionMenuButtonLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65490(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11276aec8));
  return;
}



/* Entry: 107b65564; end: 107b65647; -[SCOperaShowActionMenuButtonLayerViewController _sendShowActionMenuButtonSizeUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65564(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_4 + _DAT_11276aec8);
  func_0x00010bf25360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c0df720(param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9410;
  func_0x00010c29a540(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_5,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c118dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b65648; end: 107b6564f; -[SCOperaShowActionMenuButtonLayerViewController movingViewsForFadeTransition] */

undefined8 FUN_107b65648(void)

{
  return 0;
}



/* Entry: 107b65650; end: 107b65697; -[SCOperaShowActionMenuButtonLayerViewController fadingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65650(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b65698; end: 107b656e7; -[SCOperaShowActionMenuButtonLayerViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65698(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ff8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_resume_11262ce90);
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + _DAT_11276aec8));
  return;
}



/* Entry: 107b656e8; end: 107b656fb; -[SCOperaShowActionMenuButtonLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b656e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aec8,0);
  return;
}



/* Entry: 107b656fc; end: 107b65927; -[SCOperaSubscribeButtonCondensedView initWithFrame:isSubscribed:theme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b656fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa000;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276aecc) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276aed0) = 0;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276aed4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_11276aed8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar3);
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276aedc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c1fbe00(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    if ((param_3 & 1) == 0) {
      FUN_107b664c8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107b66438();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9f00(uVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276aee0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276aee0) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b65928; end: 107b65a9f; -[SCOperaSubscribeButtonCondensedView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65928(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fa000;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  param_1 = param_1 + -33.0;
  dVar4 = param_1 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  param_1 = param_1 + -33.0;
  dVar3 = param_1;
  func_0x00010c19f0e0(param_1,dVar4,0x4040800000000000,0x4040800000000000,
                      *(undefined8 *)(param_2 + _DAT_11276aedc));
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  lVar2 = (long)_DAT_11276aed4;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c19f0e0(0,0,param_1,dVar3,uVar1);
  FUN_107b66558();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(uVar1);
  FUN_107b66558();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(uVar1);
  FUN_107b66650();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(uVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMinX();
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11276aed8));
  return;
}



/* Entry: 107b65aa0; end: 107b65ab7; -[SCOperaSubscribeButtonCondensedView sizeThatFits:] */

void FUN_107b65aa0(void)

{
  func_0x00010c088140();
  return;
}



/* Entry: 107b65ab8; end: 107b65b7f; -[SCOperaSubscribeButtonCondensedView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65ab8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_3;
  func_0x00010c082800();
  if ((int)lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (long)_DAT_11276aedc;
    func_0x00010bf51200(param_1,param_2,*(undefined8 *)(param_3 + lVar3),param_4,param_3);
    func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
    func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar3));
    iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
    func_0x00010bf20c00();
    _CGRectInset();
    _CGRectContainsPoint();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + lVar3);
    }
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b65b80; end: 107b65c7f; -[SCOperaSubscribeButtonCondensedView updateIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65b80(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11276aee4;
  if (*(byte *)(param_1 + lVar3) == param_3) {
    return;
  }
  if ((*(byte *)(param_1 + _DAT_11276aee8) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec6990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeButtonStateChanged__11258f408);
    return;
  }
  *(char *)(param_1 + lVar3) = (char)param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276aedc);
  lVar1 = param_1;
  if ((param_3 & 1) == 0) {
    FUN_107b664c8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107b66438();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(uVar2);
  _objc_release(lVar1);
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    lVar4 = (long)_DAT_11276aed8;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b65c80; end: 107b65cab; -[SCOperaSubscribeButtonCondensedView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b65c80(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_11276aecc) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_11276aed0);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 107b65cac; end: 107b65d27; -[SCOperaSubscribeButtonCondensedView largestExpectedWidth] */

double FUN_107b65cac(double param_1,undefined8 param_2)

{
  double dVar1;
  
  FUN_107b66558();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  dVar1 = param_1;
  _objc_release(param_2);
  FUN_107b66650();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(param_2);
  if (dVar1 <= param_1) {
    dVar1 = param_1;
  }
  return dVar1 + 0.0 + 33.0;
}



/* Entry: 107b65d28; end: 107b65d33; +[SCOperaSubscribeButtonCondensedView smallestExpectedWidth] */

undefined8 FUN_107b65d28(void)

{
  return 0x4040800000000000;
}



/* Entry: 107b65d34; end: 107b65d93; -[SCOperaSubscribeButtonCondensedView _subscribeButtonViewTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65d34(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11276aee8) = 1;
  param_1 = param_1 + _DAT_11276aeec;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b65d94; end: 107b65fb7; -[SCOperaSubscribeButtonCondensedView _subscribeButtonStateChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65d94(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar4 = (long)_DAT_11276aed0;
  *(undefined1 *)(param_1 + lVar4) = 1;
  lVar3 = (long)_DAT_11276aee4;
  *(undefined1 *)(param_1 + lVar3) = param_3;
  lVar5 = (long)_DAT_11276aed8;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb00b8;
  if (*(char *)(param_1 + lVar3) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb00d8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c212f20(uVar2);
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    FUN_107b664c8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107b66438();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bdcad60(param_1);
  _objc_release(uVar2);
  func_0x00010be24be0(param_1);
  lVar3 = (long)_DAT_11276aecc;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + lVar3) = 0;
    *(undefined1 *)(param_1 + lVar4) = 0;
    lVar3 = param_1 + _DAT_11276aeec;
    _objc_loadWeakRetained(lVar3);
    _objc_opt_class(param_1);
    func_0x00010c23eae0();
    func_0x00010c0eb5a0(lVar3);
    _objc_release(lVar3);
  }
  else {
    *(undefined1 *)(param_1 + lVar3) = 1;
    _objc_initWeak(auStack_48,param_1);
    lVar3 = param_1 + _DAT_11276aeec;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c088140(param_1);
    func_0x00010c0eb5a0(lVar3);
    _objc_release(lVar3);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bdcb180(0,0x3fbeb851eb851eb8,param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107b65fb8; end: 107b66087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b65fb8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11276aed4));
  _CGRectGetWidth();
  _objc_copyWeak(auStack_48,param_2 + 0x28);
  func_0x00010bdcb180(param_1,0x4008000000000000,lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b66088; end: 107b660b3;  */

void FUN_107b66088(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be693c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b660b4; end: 107b66127; -[SCOperaSubscribeButtonCondensedView _onFinishAnimate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b660b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11276aeec;
  _objc_loadWeakRetained(lVar1);
  _objc_opt_class(param_1);
  func_0x00010c23eae0();
  func_0x00010c0eb5a0(lVar1);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_11276aecc) = 0;
  *(undefined1 *)(param_1 + _DAT_11276aed0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aed8),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107b66128; end: 107b66197; -[SCOperaSubscribeButtonCondensedView _animateTitleLabelToOriginX:delay:completion:] */

void FUN_107b66128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107b66198;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0,&puStack_40,
                      param_4);
  return;
}



/* Entry: 107b66198; end: 107b661d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66198(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276aed8;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107b661d4; end: 107b662cf; -[SCOperaSubscribeButtonCondensedView _animateImageViewToImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b661d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___CATransition_1126b3c00;
  _objc_retain(param_3);
  func_0x00010bf039a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21acc0(puVar1,param_2,*(undefined8 *)PTR__kCATransitionFade_110346da8);
  func_0x00010c192d40(0x3fb999999999999a,puVar1);
  lVar4 = (long)_DAT_11276aedc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar3);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b662d0; end: 107b66377; -[SCOperaSubscribeButtonCondensedView _growAndShrinkImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b662d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6c80();
  func_0x00010c220360(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_1111818f8);
  func_0x00010c1b6d00(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181910);
  func_0x00010c192d40(0x3fceb851eb851eb8,puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276aedc);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b66378; end: 107b66387; -[SCOperaSubscribeButtonCondensedView isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b66378(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aee4);
}



/* Entry: 107b66388; end: 107b66397; -[SCOperaSubscribeButtonCondensedView setIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66388(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276aee4) = param_3;
  return;
}



/* Entry: 107b66398; end: 107b663b7; -[SCOperaSubscribeButtonCondensedView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66398(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276aeec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b663b8; end: 107b663cb; -[SCOperaSubscribeButtonCondensedView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b663b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276aeec,param_3);
  return;
}



/* Entry: 107b663cc; end: 107b6648b; -[SCOperaSubscribeButtonCondensedView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b663cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276aeec);
  _objc_storeStrong(param_1 + _DAT_11276aed8,0);
  _objc_storeStrong(param_1 + _DAT_11276aedc,0);
  _objc_storeStrong(param_1 + _DAT_11276aed4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aee0,0);
  return;
}



/* Entry: 107b6648c; end: 107b664c7;  */

void FUN_107b6648c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb0118);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727618;
  puRam0000000113727618 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b664c8; end: 107b6651b;  */

void FUN_107b664c8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727630 != -1) {
    func_0x00010002a2fc(0x113727630,&PTR___NSConcreteGlobalBlock_1109fe2a8);
  }
  uVar1 = uRam0000000113727628;
  _objc_retain(uRam0000000113727628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b6651c; end: 107b66557;  */

void FUN_107b6651c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb0138);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727628;
  puRam0000000113727628 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b66558; end: 107b665ab;  */

void FUN_107b66558(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727640 != -1) {
    func_0x00010002a2fc(0x113727640,&PTR___NSConcreteGlobalBlock_1109fe2c8);
  }
  uVar1 = uRam0000000113727638;
  _objc_retain(uRam0000000113727638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b665ac; end: 107b6664f;  */

void FUN_107b665ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  uVar1 = puRam0000000113727638;
  puRam0000000113727638 = puVar2;
  _objc_release(uVar1);
  puVar2 = puRam0000000113727638;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2);
  _objc_release(puVar3);
  puVar2 = puRam0000000113727638;
  ppuVar4 = &PTR____CFConstantStringClassReference_110eb00b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb00b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 107b66650; end: 107b666a3;  */

void FUN_107b66650(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727650 != -1) {
    func_0x00010002a2fc(0x113727650,&PTR___NSConcreteGlobalBlock_1109fe2e8);
  }
  uVar1 = uRam0000000113727648;
  _objc_retain(uRam0000000113727648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


