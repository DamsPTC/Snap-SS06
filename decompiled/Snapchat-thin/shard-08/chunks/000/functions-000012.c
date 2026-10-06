/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bd835c; end: 105bd83cb; -[SCAddFriendsTableViewMoreCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd835c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec328;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112731b14));
  _objc_release(lVar1);
  return;
}



/* Entry: 105bd83cc; end: 105bd83db; -[SCAddFriendsTableViewMoreCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd83cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731b14),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 105bd83dc; end: 105bd83e7; +[SCAddFriendsTableViewMoreCell sizeWithViewModel:constrainedToSize:] */

void FUN_105bd83dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c2ef0,PTR_s_sizeWithViewModel_constrainedToS_11266cfe0);
  return;
}



/* Entry: 105bd83e8; end: 105bd83f7; -[SCAddFriendsTableViewMoreCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd83e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ee990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731b14),PTR_s_setRoundedCorners__112659488);
  return;
}



/* Entry: 105bd83f8; end: 105bd8433; -[SCAddFriendsTableViewMoreCell viewMoreViewDidTapViewMore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd83f8(long param_1)

{
  param_1 = param_1 + _DAT_112731b18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29dda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd8434; end: 105bd8443; -[SCAddFriendsTableViewMoreCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bd8434(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731b1c);
}



/* Entry: 105bd8444; end: 105bd8453; -[SCAddFriendsTableViewMoreCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bd8444(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731b10);
}



/* Entry: 105bd8454; end: 105bd8473; -[SCAddFriendsTableViewMoreCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8454(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112731b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd8474; end: 105bd8487; -[SCAddFriendsTableViewMoreCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8474(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112731b18,param_3);
  return;
}



/* Entry: 105bd8488; end: 105bd84d3; -[SCAddFriendsTableViewMoreCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8488(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731b18);
  _objc_storeStrong(param_1 + _DAT_112731b1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731b14,0);
  return;
}



/* Entry: 105bd84d4; end: 105bd867b; -[SCAddFriendsViewMoreView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bd84d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ec330;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar4 = (long)_DAT_112731b24;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_112731b28;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731b2c);
    *(undefined **)((long)puVar1 + (long)_DAT_112731b2c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bd867c; end: 105bd86e3;  */

void FUN_105bd867c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2ef8;
  _objc_alloc(PTR_PTR_1126c2ef8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c520(0x4024000000000000,puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bd86e4; end: 105bd89d3; -[SCAddFriendsViewMoreView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd86e4(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ec330;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar6 = (long)_DAT_112731b24;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  dVar8 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar14 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar5 = (long)_DAT_112731b28;
  dVar9 = param_3;
  dVar11 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar5));
  dVar10 = (dVar8 - dVar9) * 0.5;
  dVar12 = (dVar14 - dVar11) * 0.5;
  func_0x00010b816528(dVar10,dVar12,dVar9,dVar11);
  lVar7 = (long)_DAT_112731b2c;
  uVar1 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = param_3;
  dVar13 = param_4;
  func_0x00010c23d5a0(param_3,param_4);
  _objc_release(uVar1);
  dVar14 = dVar10;
  _CGRectGetMinX(dVar10,dVar12,dVar9,dVar11);
  dVar15 = (dVar14 + -8.0) - dVar8;
  dVar14 = dVar10;
  _CGRectGetMidY(dVar10,dVar12,dVar9,dVar11);
  dVar14 = dVar14 - dVar13 * 0.5;
  func_0x00010b816528(dVar15,dVar14,dVar8,dVar13);
  func_0x00010b8166f8(dVar10,dVar12,dVar9,dVar11,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010b8166f8(dVar15,dVar14,dVar8,dVar13,param_5);
  uVar1 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar15,dVar14,dVar8,dVar13);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_5 + lVar6);
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _CGPathGetBoundingBox();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,dVar15,dVar14,dVar8,dVar13);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(param_1,param_2,param_3,param_4,0x4020000000000000,0x4020000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar1 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c22a660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar1);
    _objc_release(puVar4);
  }
  func_0x00010bdcea20(param_5);
  return;
}



/* Entry: 105bd89d4; end: 105bd8baf; -[SCAddFriendsViewMoreView _applyShadowIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd89d4(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  puVar2 = PTR_PTR_1126c2ee0;
  uVar6 = *(ulong *)(param_3 + _DAT_112731b30);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010c22a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    lVar8 = (long)_DAT_112731b24;
    uVar7 = *(undefined8 *)(param_3 + lVar8);
    uVar3 = uVar1;
    func_0x00010c22a140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1c40();
    uVar6 = uVar1;
    dVar9 = param_1;
    func_0x00010c22a140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ef60();
    uVar4 = uVar1;
    dVar10 = dVar9;
    func_0x00010c22a140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e8ca0();
    func_0x000108fe9e04(param_1,param_2,dVar9,dVar10,uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
    func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar8));
    func_0x00010c19f0e0(param_1 + -10.0,param_2 + 0.0,dVar9 + 20.0,dVar10 + 10.0,puVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar5);
    uVar7 = *(undefined8 *)(param_3 + lVar8);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bd8bb0; end: 105bd8dd3; -[SCAddFriendsViewMoreView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8bb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112731b30;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  uVar5 = param_3;
  if (param_3 == uVar4) {
    _objc_release(uVar4);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105bd8dbc;
    }
    puVar2 = PTR_PTR_1126c2ee0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar4 = uVar5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar3);
    uVar4 = uVar5;
    func_0x00010c087540(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112731b28));
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010bf13d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731b24);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010bf15640();
    if ((int)uVar4 != 0) {
      lVar7 = (long)_DAT_112731b2c;
      lVar6 = *(long *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar3);
      }
    }
    func_0x00010bf15640(uVar5);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731b2c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar5);
LAB_105bd8dbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bd8dd4; end: 105bd8e93; +[SCAddFriendsViewMoreView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105bd8dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c2ee0;
  _objc_opt_class(PTR_PTR_1126c2ee0);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c106e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    param_2 = 0x403e000000000000;
  }
  else {
    uVar3 = uVar1;
    func_0x00010c106e40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 105bd8e94; end: 105bd8f23; -[SCAddFriendsViewMoreView setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00();
  func_0x00010bf199e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731b24);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bd8f24; end: 105bd8f5f; -[SCAddFriendsViewMoreView _onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8f24(long param_1)

{
  param_1 = param_1 + _DAT_112731b34;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29df40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd8f60; end: 105bd8f6f; -[SCAddFriendsViewMoreView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bd8f60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731b30);
}



/* Entry: 105bd8f70; end: 105bd8f7f; -[SCAddFriendsViewMoreView roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bd8f70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731b20);
}



/* Entry: 105bd8f80; end: 105bd8f9f; -[SCAddFriendsViewMoreView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8f80(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112731b34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd8fa0; end: 105bd8fb3; -[SCAddFriendsViewMoreView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112731b34,param_3);
  return;
}



/* Entry: 105bd8fb4; end: 105bd901f; -[SCAddFriendsViewMoreView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd8fb4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731b34);
  _objc_storeStrong(param_1 + _DAT_112731b30,0);
  _objc_storeStrong(param_1 + _DAT_112731b2c,0);
  _objc_storeStrong(param_1 + _DAT_112731b28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731b24,0);
  return;
}



/* Entry: 105bd9020; end: 105bd90b7; -[SCFriendsFeedNewUserAddFriendsSectionHeader initWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bd9020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731b38);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112731b38) = uVar2;
    _objc_release(uVar3);
    func_0x00010c228d40(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd90b8; end: 105bd92b3; -[SCFriendsFeedNewUserAddFriendsSectionHeader setupLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd90b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar8 = (long)_DAT_112731b3c;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar8));
  func_0x00010befbb60(param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  uStack_68 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_105bd92b4;
  puStack_98 = PTR_PTR_1126ec338;
  puStack_a0 = puVar1;
  uStack_90 = uVar2;
  lStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_traitCollectionDidChange__11267bf88);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar6);
  return;
}



/* Entry: 105bd92b4; end: 105bd9327; -[SCFriendsFeedNewUserAddFriendsSectionHeader traitCollectionDidChange:] */

void FUN_105bd92b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105bd9328; end: 105bd9367; -[SCFriendsFeedNewUserAddFriendsSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bd9328(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731b3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731b38,0);
  return;
}



/* Entry: 105bd9368; end: 105bd94a3; -[SCAddFriendsViewMoreViewModel initWithLabelAttributedText:backgroundColor:badged:shadowViewModel:preferredSize:contentInsets:] */

undefined1 *
FUN_105bd9368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ec340;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd94a4; end: 105bd94c7; -[SCAddFriendsViewMoreViewModel copyWithZone:] */

undefined8 FUN_105bd94a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bd94c8; end: 105bd95db; -[SCAddFriendsViewMoreViewModel hash] */

undefined8 * FUN_105bd94c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_50 = uVar3;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_105bd96c8:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105bd96cc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)((long)puVar4 + 8) == param_3[8])) {
      uVar9 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar4 + 0x48) ==
                                           *(double *)(param_3 + 0x48)),
                                  CONCAT24(-(ushort)(*(double *)((long)puVar4 + 0x40) ==
                                                    *(double *)(param_3 + 0x40)),
                                           CONCAT22(-(ushort)(*(double *)((long)puVar4 + 0x38) ==
                                                             *(double *)(param_3 + 0x38)),
                                                    -(ushort)(*(double *)((long)puVar4 + 0x30) ==
                                                             *(double *)(param_3 + 0x30))))),2);
      if ((uVar9 & 1) != 0) {
        lVar6 = *(long *)((long)puVar4 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x18);
          if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x20);
            if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
              if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_105bd96cc;
              }
              goto LAB_105bd96c8;
            }
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_105bd96cc:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 105bd95dc; end: 105bd96e7; -[SCAddFriendsViewMoreViewModel isEqual:] */

long FUN_105bd95dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bd96c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bd96cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x48) ==
                                           *(double *)(param_3 + 0x48)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                    *(double *)(param_3 + 0x40)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x38) ==
                                                             *(double *)(param_3 + 0x38)),
                                                    -(ushort)(*(double *)(param_1 + 0x30) ==
                                                             *(double *)(param_3 + 0x30))))),2);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_105bd96cc;
              }
              goto LAB_105bd96c8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105bd96cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bd96e8; end: 105bd96ef; -[SCAddFriendsViewMoreViewModel labelAttributedText] */

undefined8 FUN_105bd96e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd96f0; end: 105bd96f7; -[SCAddFriendsViewMoreViewModel backgroundColor] */

undefined8 FUN_105bd96f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd96f8; end: 105bd96ff; -[SCAddFriendsViewMoreViewModel badged] */

undefined1 FUN_105bd96f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105bd9700; end: 105bd9707; -[SCAddFriendsViewMoreViewModel shadowViewModel] */

undefined8 FUN_105bd9700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd9708; end: 105bd970f; -[SCAddFriendsViewMoreViewModel preferredSize] */

undefined8 FUN_105bd9708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105bd9710; end: 105bd971b; -[SCAddFriendsViewMoreViewModel contentInsets] */

undefined8 FUN_105bd9710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105bd971c; end: 105bd9763; -[SCAddFriendsViewMoreViewModel .cxx_destruct] */

void FUN_105bd971c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105bd9764; end: 105bd9827; -[SCRemoveConversationAlertScope initWithGroupId:delegate:uiContainer:] */

undefined1 *
FUN_105bd9764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd9828; end: 105bd982f; -[SCRemoveConversationAlertScope groupId] */

undefined8 FUN_105bd9828(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd9830; end: 105bd9847; -[SCRemoveConversationAlertScope delegate] */

void FUN_105bd9830(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd9848; end: 105bd984f; -[SCRemoveConversationAlertScope uiContainer] */

undefined8 FUN_105bd9848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd9850; end: 105bd9887; -[SCRemoveConversationAlertScope .cxx_destruct] */

void FUN_105bd9850(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd9888; end: 105bd98fb; -[SCNewChatButtonLogger initWithUserTrackedLogger:] */

undefined1 * FUN_105bd9888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec350;
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



/* Entry: 105bd98fc; end: 105bd996f; -[SCNewChatButtonLogger didTapNewChatButtonWithSource:] */

void FUN_105bd98fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2f00;
  _objc_opt_new(PTR_PTR_1126c2f00);
  func_0x00010c206c40();
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



/* Entry: 105bd9970; end: 105bd997b; -[SCNewChatButtonLogger .cxx_destruct] */

void FUN_105bd9970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd997c; end: 105bd9a4f; -[SCNFMOnboardingAlertScope initWithSnapchatter:hasUnreadMessage:delegate:uiContainer:] */

undefined1 *
FUN_105bd997c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ec358;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd9a50; end: 105bd9a57; -[SCNFMOnboardingAlertScope snapchatter] */

undefined8 FUN_105bd9a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bd9a58; end: 105bd9a5f; -[SCNFMOnboardingAlertScope hasUnreadMessage] */

undefined1 FUN_105bd9a58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105bd9a60; end: 105bd9a77; -[SCNFMOnboardingAlertScope delegate] */

void FUN_105bd9a60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd9a78; end: 105bd9a7f; -[SCNFMOnboardingAlertScope uiContainer] */

undefined8 FUN_105bd9a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd9a80; end: 105bd9ab7; -[SCNFMOnboardingAlertScope .cxx_destruct] */

void FUN_105bd9a80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105bd9ab8; end: 105bd9b7f; -[SCFriendmojiSettingsScope initWithUiContainer:delegate:] */

undefined8 *
FUN_105bd9ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  puStack_40 = PTR_PTR_1126ec360;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 2,puVar3);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105bd9b80; end: 105bd9b87; -[SCFriendmojiSettingsScope uiContainer] */

undefined8 FUN_105bd9b80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd9b88; end: 105bd9b9f; -[SCFriendmojiSettingsScope delegate] */

void FUN_105bd9b88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd9ba0; end: 105bd9bcb; -[SCFriendmojiSettingsScope .cxx_destruct] */

void FUN_105bd9ba0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd9bcc; end: 105bd9cc7; -[SCCommunitiesNewChatScope initWithUIContainer:delegate:communityId:pageType:] */

undefined1 *
FUN_105bd9bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ec368;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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



/* Entry: 105bd9cc8; end: 105bd9ccf; -[SCCommunitiesNewChatScope uiContainer] */

undefined8 FUN_105bd9cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd9cd0; end: 105bd9cff; -[SCCommunitiesNewChatScope setUiContainer:] */

void FUN_105bd9cd0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105bd9d00; end: 105bd9d17; -[SCCommunitiesNewChatScope delegate] */

void FUN_105bd9d00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bd9d18; end: 105bd9d23; -[SCCommunitiesNewChatScope setDelegate:] */

void FUN_105bd9d18(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105bd9d24; end: 105bd9d2b; -[SCCommunitiesNewChatScope communityId] */

undefined8 FUN_105bd9d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bd9d2c; end: 105bd9d33; -[SCCommunitiesNewChatScope pageType] */

undefined8 FUN_105bd9d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bd9d34; end: 105bd9d77; -[SCCommunitiesNewChatScope .cxx_destruct] */

void FUN_105bd9d34(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd9d78; end: 105bd9deb; -[SCFriendsFeedCTAImpressionTrackingServices initWithImpressionTracker:] */

undefined1 * FUN_105bd9d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec370;
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



/* Entry: 105bd9dec; end: 105bd9df3; -[SCFriendsFeedCTAImpressionTrackingServices impressionTracker] */

undefined8 FUN_105bd9dec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bd9df4; end: 105bd9dff; -[SCFriendsFeedCTAImpressionTrackingServices .cxx_destruct] */

void FUN_105bd9df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd9e00; end: 105bd9f5b; -[SCLensFriendsFeedContextButtonController initWithButtonScope:lensReplyCameraPresenter:lensContentDataFetching:lensPerformerProvider:lensCarouselConfigProvider:] */

undefined1 *
FUN_105bd9e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ec378;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7080(puVar1);
    uVar2 = param_3;
    func_0x00010c075180();
    if ((int)uVar2 != 0) {
      func_0x00010be7c8e0(puVar1);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd9f5c; end: 105bd9f9b; -[SCLensFriendsFeedContextButtonController lensFriendsFeedContextButtonViewDidTap:] */

void FUN_105bd9f5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cf60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentModularCamera_11257cbd8);
  return;
}



/* Entry: 105bd9f9c; end: 105bda087; -[SCLensFriendsFeedContextButtonController lensFriendsFeedContextButtonViewFetchImage:size:] */

void FUN_105bd9f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bda088; end: 105bda35f;  */

void FUN_105bda088(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    func_0x00010bf436e0(param_2);
    puVar9 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c094500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    if ((lVar4 == 0) || (lVar4 = lVar3, func_0x00010c08fa60(), lVar4 == 0)) {
      func_0x00010bf436e0(param_2);
      puVar9 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        func_0x00010bf436e0(param_2);
        puVar9 = PTR_PTR_1126b0418;
        func_0x00010bf54280(PTR_PTR_1126b0418);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = PTR_PTR_1126bbb50;
        _objc_alloc();
        lVar4 = param_1;
        func_0x00010be912e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03a140();
        _objc_release(lVar4);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c15e720();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar5);
        _objc_retain(lVar3);
        _objc_retain(param_2);
        _objc_retain(puVar6);
        func_0x00010c0f7fc0(uVar8);
        _objc_release(uVar8);
        _objc_release(uVar7);
        puVar9 = PTR_PTR_1126b0418;
        func_0x00010bf54280(PTR_PTR_1126b0418);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        _objc_release(puVar6);
        _objc_release(lVar3);
        _objc_release(puVar5);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105bda360; end: 105bda43f;  */

void FUN_105bda360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105bda440;
  puStack_60 = &UNK_1108db798;
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uStack_58 = uVar4;
  func_0x00010bfa7940(uVar5,param_2,uVar1,uVar3,0,&PTR____CFConstantStringClassReference_110f5db38,0
                      ,uVar2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uStack_58);
  return;
}



/* Entry: 105bda440; end: 105bda4d3;  */

void FUN_105bda440(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_3);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar2 = param_3;
  func_0x00010c14e6c0(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),param_1,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bda4d4; end: 105bda5bf; -[SCLensFriendsFeedContextButtonController _subscribeParamsUpdate] */

void FUN_105bda4d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f39a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105bda5c0; end: 105bda633;  */

void FUN_105bda5c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
    }
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_2;
    _objc_release(uVar1);
    func_0x00010beb91e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bda634; end: 105bda737; -[SCLensFriendsFeedContextButtonController _showFeedContextLensButtonWithParams:] */

void FUN_105bda634(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c094500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar4 = PTR_PTR_1126c2f08;
      _objc_alloc();
      func_0x00010c00a2c0();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar4;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c29c060(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ca20();
      _objc_release(uVar5);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bda738; end: 105bda8cb; -[SCLensFriendsFeedContextButtonController _presentModularCamera] */

void FUN_105bda738(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c098240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010be4ba40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010be8f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf6b020(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_48,uVar1);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf16340(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c10b6e0(uVar1);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105bda8cc; end: 105bda8ff;  */

void FUN_105bda8cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c096760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bda900; end: 105bdaaef; -[SCLensFriendsFeedContextButtonController _replyConfigurationWithParams:] */

void FUN_105bda900(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126ae6c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf9a440(param_3);
  func_0x00010c03e6c0(puVar1,param_2,1,0,lVar2,lVar3,0,lVar4 == 1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c074920();
  puVar5 = PTR_PTR_1126ae6c0;
  lVar3 = param_3;
  if ((int)lVar2 == 0) {
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c294300(puVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bfcf5a0(puVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c073b00(uVar7);
  func_0x00010c03e5a0(puVar6,param_2,puVar5,(uint)uVar7 ^ 1,6,1,puVar1);
  puVar8 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar9 = PTR_PTR_1126b1bb0;
  func_0x00010c0967c0(PTR_PTR_1126b1bb0,param_2,puVar6,puVar8,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105bdaaf0; end: 105bdad0f; -[SCLensFriendsFeedContextButtonController _lensReplyCameraLensDataWithParams:] */

void FUN_105bdaaf0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf529e0();
  _objc_release(uVar9);
  puVar6 = (undefined *)0x0;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar9 = param_3;
    func_0x00010c098240(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010bf529e0();
    func_0x00010bffc4a0(puVar2,param_2,uVar1);
    _objc_release(uVar9);
    uVar9 = param_3;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010bf529e0();
    _objc_release(uVar9);
    if (uVar1 != 0) {
      uVar9 = 0;
      do {
        uVar1 = param_3;
        func_0x00010c098240(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = uVar3;
        func_0x00010c094540(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c094500(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010be4b600(param_1,param_2,uVar1,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar1);
        func_0x00010befa120(puVar2,param_2,lVar5);
        _objc_release(lVar5);
        _objc_release(uVar3);
        uVar9 = uVar9 + 1;
        uVar1 = param_3;
        func_0x00010c098240();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
      } while (uVar9 < uVar3);
    }
    uVar9 = *(ulong *)(param_1 + 8);
    func_0x00010c073b00();
    if ((uVar9 & 1) == 0) {
      puVar8 = puVar2;
      func_0x00010bfb1920(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    puVar6 = PTR_PTR_1126c2f10;
    _objc_alloc(PTR_PTR_1126c2f10);
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c025de0(puVar6,param_2,puVar7,puVar8);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105bdad10; end: 105bdad9b; -[SCLensFriendsFeedContextButtonController _requestKeyForURL:] */

void FUN_105bdad10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bdad9c; end: 105bdae63; -[SCLensFriendsFeedContextButtonController _lensMetadataWithLensId:iconUrl:] */

void FUN_105bdad9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0820;
  func_0x00010c08fb40(PTR_PTR_1126b0820);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2880();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbd20(puVar1,param_2,0x16);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c290b20();
  if ((uVar2 & 1) == 0) {
    func_0x00010c2af940(puVar1,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bdae64; end: 105bdaedb; -[SCLensFriendsFeedContextButtonController .cxx_destruct] */

void FUN_105bdae64(long param_1)

{
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



/* Entry: 105bdaedc; end: 105bdb08f; -[SCLensFriendsFeedContextButtonEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdaedc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126c2f18;
  _objc_alloc();
  if (param_1 == 0) {
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112731bb8;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_1 + _DAT_112731bc4;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c096780(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112731bbc;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010c091ce0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112731bc0;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010c095b60(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112731bc8;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010c090800(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa020(puVar1,param_2,lVar7,lVar2,lVar3,lVar4,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731bb4);
  *(undefined **)(param_1 + _DAT_112731bb4) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 105bdb090; end: 105bdb0eb; -[SCLensFriendsFeedContextButtonEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdb090(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731bb4);
  *(undefined8 *)(param_1 + _DAT_112731bb4) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ec380;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bdb0ec; end: 105bdb157; -[SCLensFriendsFeedContextButtonEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdb0ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731bc8);
  _objc_destroyWeak(param_1 + _DAT_112731bc4);
  _objc_destroyWeak(param_1 + _DAT_112731bc0);
  _objc_destroyWeak(param_1 + _DAT_112731bbc);
  _objc_destroyWeak(param_1 + _DAT_112731bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731bb4,0);
  return;
}



/* Entry: 105bdb158; end: 105bdb243; -[SCLensFriendsFeedContextButtonView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bdb158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ec388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112731bcc),param_3);
    func_0x00010c198080(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_112731bd0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1ec5c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(puVar1);
    func_0x00010bee2a80(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bdb244; end: 105bdb27f; -[SCLensFriendsFeedContextButtonView _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdb244(long param_1)

{
  param_1 = param_1 + _DAT_112731bcc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c094040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdb280; end: 105bdb733; -[SCLensFriendsFeedContextButtonView _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdb280(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0648;
  _objc_alloc_init();
  func_0x00010c182220();
  func_0x00010c219b60(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1);
  _objc_release(puVar2);
  lVar3 = param_1 + _DAT_112731bcc;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c094060(0x4040800000000000,0x4040800000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar23 = (long)_DAT_112731bd4;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar21);
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar22 = (long)_DAT_112731bd8;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar2;
  _objc_release(uVar21);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar22));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar22));
  _objc_release(puVar2);
  func_0x00010b0aea2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar22));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010bf493c0(0x4021000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4040800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4040800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(lVar22);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar23);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(uVar21);
  _objc_release(lVar3);
  _objc_release(uVar5);
  func_0x00010c1cbf40(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + _DAT_112731bd8,0);
  _objc_storeStrong(param_1 + _DAT_112731bd4,0);
  _objc_destroyWeak(param_1 + _DAT_112731bcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731bd0,0);
  return;
}



/* Entry: 105bdb734; end: 105bdb78f; -[SCLensFriendsFeedContextButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdb734(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731bd8,0);
  _objc_storeStrong(param_1 + _DAT_112731bd4,0);
  _objc_destroyWeak(param_1 + _DAT_112731bcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731bd0,0);
  return;
}



/* Entry: 105bdb790; end: 105bdb8bf; -[SCLensFriendsFeedContextButtonScope initWithViewContainer:paramsObservable:isImmediateAction:baseViewController:delegate:isFromDTTR:] */

undefined8 *
FUN_105bdb790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_7);
  puStack_60 = PTR_PTR_1126ec390;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_5;
    _objc_storeWeak(puVar1 + 4,param_6);
    puVar3 = auStack_58;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 5,puVar3);
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105bdb8c0; end: 105bdb8c7; -[SCLensFriendsFeedContextButtonScope viewContainer] */

undefined8 FUN_105bdb8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bdb8c8; end: 105bdb8cf; -[SCLensFriendsFeedContextButtonScope paramsObservable] */

undefined8 FUN_105bdb8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bdb8d0; end: 105bdb8d7; -[SCLensFriendsFeedContextButtonScope isImmediateAction] */

undefined1 FUN_105bdb8d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105bdb8d8; end: 105bdb8df; -[SCLensFriendsFeedContextButtonScope setIsImmediateAction:] */

void FUN_105bdb8d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105bdb8e0; end: 105bdb8f7; -[SCLensFriendsFeedContextButtonScope baseViewController] */

void FUN_105bdb8e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bdb8f8; end: 105bdb90f; -[SCLensFriendsFeedContextButtonScope delegate] */

void FUN_105bdb8f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bdb910; end: 105bdb917; -[SCLensFriendsFeedContextButtonScope isFromDTTR] */

undefined1 FUN_105bdb910(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105bdb918; end: 105bdb91f; -[SCLensFriendsFeedContextButtonScope setIsFromDTTR:] */

void FUN_105bdb918(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105bdb920; end: 105bdb95f; -[SCLensFriendsFeedContextButtonScope .cxx_destruct] */

void FUN_105bdb920(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


