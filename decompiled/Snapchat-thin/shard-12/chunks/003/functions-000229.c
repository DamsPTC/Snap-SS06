/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fed840; end: 108fed92f; -[SCAvatarBadgeView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fed840(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277f5f8;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_108fed918;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bf152e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb7e20(param_1,param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fed918:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fed930; end: 108feda13; -[SCAvatarBadgeView _showBadgeIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fed930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f5f4;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108feda14; end: 108feda23; -[SCAvatarBadgeView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108feda14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f5f8);
}



/* Entry: 108feda24; end: 108feda63; -[SCAvatarBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feda24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f5f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f5f4,0);
  return;
}



/* Entry: 108feda64; end: 108feda6f; +[SCAvatarCircleBackgroundView announcerIdentifier] */

undefined ** FUN_108feda64(void)

{
  return &PTR____CFConstantStringClassReference_110f169b8;
}



/* Entry: 108feda70; end: 108feda7f; -[SCAvatarCircleBackgroundView addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feda70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5fc),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108feda80; end: 108feda8f; -[SCAvatarCircleBackgroundView removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feda80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5fc),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108feda90; end: 108feda9f; -[SCAvatarCircleBackgroundView didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feda90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5fc),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 108fedaa0; end: 108fedbcb; -[SCAvatarCircleBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fedaa0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffc50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f600);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f600) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f604);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f604) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f608);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f608) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f60c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f60c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f5fc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f5fc) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fedbcc; end: 108fedc3b;  */

void FUN_108fedbcc(void)

{
  _objc_opt_new(PTR_PTR_1126b52f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fedc3c; end: 108fedf67; -[SCAvatarCircleBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fedc3c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ffc50;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + _DAT_11277f600);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2);
  _objc_release(uVar3);
  iVar1 = _DAT_11277f604;
  if ((*(byte *)(param_5 + _DAT_11277f610) >> 1 & 1) != 0) {
    dVar7 = ((double *)(param_5 + _DAT_11277f614))[1];
    param_3 = *(double *)PTR__CGSizeZero_110347620;
    param_4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    bVar2 = false;
    if ((*(double *)(param_5 + _DAT_11277f614) == param_3) &&
       (bVar2 = false, !NAN(dVar7) && !NAN(param_4))) {
      bVar2 = dVar7 == param_4;
    }
    if (!bVar2) {
      uVar4 = *(undefined8 *)(param_5 + _DAT_11277f604);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(uVar3);
      _objc_release(uVar4);
      dVar7 = 0.0;
      goto LAB_108feddc0;
    }
  }
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277f604);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  dVar8 = param_3;
  if (param_4 <= param_3) {
    dVar8 = param_4;
  }
  param_3 = 0.5;
  dVar7 = *(double *)(param_5 + _DAT_11277f618);
  if (*(double *)(param_5 + _DAT_11277f618) <= 0.0) {
    dVar7 = dVar8 * 0.5;
  }
LAB_108feddc0:
  uVar4 = *(undefined8 *)(param_5 + iVar1);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  lVar6 = (long)_DAT_11277f608;
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  if (param_4 <= param_3) {
    param_3 = param_4;
  }
  uVar3 = 0x3fe0000000000000;
  param_3 = param_3 * 0.5;
  dVar7 = *(double *)(param_5 + _DAT_11277f618);
  if (*(double *)(param_5 + _DAT_11277f618) <= 0.0) {
    dVar7 = param_3;
  }
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar7);
  _objc_release(uVar4);
  _objc_release(uVar5);
  func_0x00010bf20c00(param_5);
  uVar4 = *(undefined8 *)(param_5 + iVar1);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar7,param_3,uVar3,param_4);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar7,param_3,uVar3,param_4);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  func_0x00010bea76c0(param_5);
  return;
}



/* Entry: 108fedf68; end: 108fee0ef; -[SCAvatarCircleBackgroundView _setShapeLayerPathRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fedf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277f61c);
  lVar5 = param_5;
  _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
  if (((int)lVar5 == 0) || (lVar5 = (long)_DAT_11277f620, *(long *)(param_5 + lVar5) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    if (*(double *)(param_5 + _DAT_11277f618) <= 0.0) {
      func_0x00010bf199a0(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf19a00();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = (long)_DAT_11277f620;
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    *(undefined **)(param_5 + lVar5) = puVar2;
    _objc_release(uVar4);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x00010bdc1040(*(undefined8 *)(param_5 + lVar5));
  uVar3 = *(undefined8 *)(param_5 + _DAT_11277f600);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bdc1040(*(undefined8 *)(param_5 + lVar5));
  uVar3 = *(undefined8 *)(param_5 + _DAT_11277f60c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22a680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108fee0f0; end: 108fee16f; -[SCAvatarCircleBackgroundView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fee0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f624);
  *(undefined8 *)(param_1 + _DAT_11277f624) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f604);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fee170; end: 108fee1a7; -[SCAvatarCircleBackgroundView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fee170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f628);
  *(undefined8 *)(param_1 + _DAT_11277f628) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fee1a8; end: 108fee32b; -[SCAvatarCircleBackgroundView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fee1a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277f62c;
  uVar3 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108fee310;
    }
    lVar4 = (long)_DAT_11277f630;
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108fee32c;
    puStack_50 = &UNK_110842e18;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108fee3e0;
    puStack_78 = &UNK_11086ddb8;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108fee624;
    puStack_a0 = &UNK_110ad2510;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_108fee89c;
    puStack_c8 = &UNK_110ad2560;
    lStack_c0 = param_1;
    lStack_98 = param_1;
    lStack_70 = param_1;
    lStack_48 = param_1;
    func_0x00010c0bcc40(param_3,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fee310:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fee32c; end: 108fee3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fee32c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb8160(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f600);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f604);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f608);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fee3e0; end: 108fee623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fee3e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bebae20(uVar4);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c279540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c13afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retainAutorelease(uVar4);
  func_0x00010bdc0fe0();
  lVar5 = (long)_DAT_11277f600;
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c13afc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retainAutorelease(uVar4);
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f604);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f608);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f60c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fee624; end: 108fee897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fee624(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010beb7d00(uVar3);
  lVar4 = (long)_DAT_11277f604;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc220();
  _objc_release(param_3);
  _objc_release(uVar3);
  if (param_4 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f600);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010bebae20();
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c279540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c13afc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar5 = (long)_DAT_11277f600;
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010c13afc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lVar4);
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(0);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f60c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fee898; end: 108fee89b;  */

void FUN_108fee898(void)

{
  return;
}



/* Entry: 108fee89c; end: 108feed67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fee89c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beb7ce0(*(undefined8 *)(param_2 + 0x20));
  lVar9 = (long)_DAT_11277f608;
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar9);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar9);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b08b0;
  if (param_3 != 0) {
    lVar9 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    puVar3 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    puVar5 = PTR_PTR_1126b85a0;
    puVar4 = puVar3;
    func_0x00010bf220e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23c900(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _objc_opt_class(uVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126b85a8;
    _objc_alloc(PTR_PTR_1126b85a8);
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c01cf00(puVar6);
    _objc_release(puVar7);
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f62c);
    _objc_retain(uVar10);
    _objc_initWeak(auStack_78,*(undefined8 *)(param_2 + 0x20));
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f628);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar10);
    func_0x00010bfa7900();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f630);
    *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f630) = uVar1;
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f600);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010bebae20();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c279540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010c13afc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar11 = (long)_DAT_11277f600;
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(lVar9);
    lVar9 = param_4;
    func_0x00010c13afc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(lVar9);
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(0);
    _objc_release(uVar8);
    _objc_release(uVar10);
  }
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277f60c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108feed68; end: 108feee27;  */

void FUN_108feed68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108feee28;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108feee28; end: 108feef23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feee28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_108feef08;
  lVar3 = *(long *)(lVar1 + _DAT_11277f62c);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  _objc_retain(lVar4);
  if (lVar3 == lVar4) {
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    if (lVar4 == 0) {
      _objc_release(lVar3);
      goto LAB_108feef08;
    }
    lVar2 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar2 == 0) goto LAB_108feef08;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108feef24;
  puStack_50 = &UNK_1108d4470;
  lStack_48 = lVar1;
  func_0x00010c0c0800(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_68,
                      &PTR___NSConcreteGlobalBlock_110ad2540);
LAB_108feef08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108feef24; end: 108feefa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feef24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f608);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1a9f00(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108feefa8; end: 108feefab;  */

void FUN_108feefa8(void)

{
  return;
}



/* Entry: 108feefac; end: 108fef193; -[SCAvatarCircleBackgroundView setPreferredImageSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feefac(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  ulong uVar7;
  
  pdVar1 = (double *)(param_3 + _DAT_11277f614);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    lVar8 = (long)_DAT_11277f610;
    uVar7 = *(ulong *)(param_3 + lVar8);
    uVar6 = (uint)uVar7;
    if ((uVar7 & 1) != 0) {
      lVar9 = (long)_DAT_11277f604;
      uVar3 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ec940();
      _objc_release(uVar3);
      dVar10 = *pdVar1;
      dVar11 = pdVar1[1];
      uVar3 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0040(dVar10,dVar11);
      _objc_release(uVar3);
      uVar6 = (uint)*(undefined8 *)(param_3 + lVar8);
    }
    if ((uVar6 >> 1 & 1) == 0) {
      lVar8 = (long)_DAT_11277f618;
    }
    else {
      lVar9 = (long)_DAT_11277f604;
      uVar3 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ec940();
      _objc_release(uVar3);
      lVar8 = (long)_DAT_11277f618;
      dVar10 = *pdVar1;
      if (pdVar1[1] <= *pdVar1) {
        dVar10 = pdVar1[1];
      }
      dVar11 = *(double *)(param_3 + lVar8);
      if (*(double *)(param_3 + lVar8) <= 0.0) {
        dVar11 = dVar10 * 0.5;
      }
      uVar3 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar11);
      _objc_release(uVar3);
    }
    dVar10 = *pdVar1;
    if (pdVar1[1] <= *pdVar1) {
      dVar10 = pdVar1[1];
    }
    dVar11 = *(double *)(param_3 + lVar8);
    if (*(double *)(param_3 + lVar8) <= 0.0) {
      dVar11 = dVar10 * 0.5;
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0xffffffffffffffff;
    func_0x00010b691784(dVar11,0xffffffffffffffff,puVar4);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11277f604);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bec20();
    _objc_release(uVar5);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 108fef194; end: 108fef31b; -[SCAvatarCircleBackgroundView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fef194(double param_1,long param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar7 = (long)_DAT_11277f618;
  if (*(double *)(param_2 + lVar7) == param_1) {
    return;
  }
  *(double *)(param_2 + lVar7) = param_1;
  lVar3 = (long)_DAT_11277f614;
  if ((*(byte *)(param_2 + _DAT_11277f610) >> 1 & 1) != 0) {
    pdVar1 = (double *)(param_2 + lVar3);
    dVar8 = *pdVar1;
    dVar10 = pdVar1[1];
    if (dVar10 <= dVar8) {
      dVar8 = dVar10;
    }
    if (param_1 <= 0.0) {
      param_1 = dVar8 * 0.5;
    }
    uVar4 = *(undefined8 *)(param_2 + _DAT_11277f604);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1);
    _objc_release(uVar4);
    param_1 = *(double *)(param_2 + lVar7);
  }
  pdVar1 = (double *)(param_2 + lVar3);
  dVar8 = *pdVar1;
  dVar10 = pdVar1[1];
  if (dVar10 <= dVar8) {
    dVar8 = dVar10;
  }
  if (param_1 <= 0.0) {
    param_1 = dVar8 * 0.5;
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0xffffffffffffffff;
  func_0x00010b691784(param_1,0xffffffffffffffff,puVar5);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11277f604);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bec20();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  puVar2 = (undefined8 *)(param_2 + _DAT_11277f61c);
  uVar4 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar9 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  puVar2[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  *puVar2 = uVar4;
  puVar2[3] = uVar9;
  puVar2[2] = uVar6;
  uVar4 = *(undefined8 *)(param_2 + _DAT_11277f620);
  *(undefined8 *)(param_2 + _DAT_11277f620) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108fef31c; end: 108fef61b; -[SCAvatarCircleBackgroundView _showBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fef31c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f60c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108fef61c; end: 108fef6bf; -[SCAvatarCircleBackgroundView _showShapeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fef61c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f600;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(param_1,param_2,uVar2,0);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108fef6c0; end: 108fef903; -[SCAvatarCircleBackgroundView _showBackgroundNetworkImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fef6c0(long param_1)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar7 = (long)_DAT_11277f604;
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar4);
    pdVar1 = (double *)(param_1 + _DAT_11277f614);
    bVar2 = false;
    if ((*pdVar1 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar2 = false, !NAN(pdVar1[1]) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = pdVar1[1] == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if ((!bVar2) && ((*(byte *)(param_1 + _DAT_11277f610) & 3) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ec940();
      _objc_release(uVar4);
      dVar8 = *pdVar1;
      dVar9 = pdVar1[1];
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0040(dVar8,dVar9);
      _objc_release(uVar4);
      dVar8 = *pdVar1;
      if (pdVar1[1] <= *pdVar1) {
        dVar8 = pdVar1[1];
      }
      dVar9 = *(double *)(param_1 + _DAT_11277f618);
      if (*(double *)(param_1 + _DAT_11277f618) <= 0.0) {
        dVar9 = dVar8 * 0.5;
      }
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar9);
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0xffffffffffffffff;
      func_0x00010b691784(dVar9,0xffffffffffffffff,puVar5);
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bec20();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(puVar5);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108fef904; end: 108fefaf7; -[SCAvatarCircleBackgroundView _showBackgroundImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fef904(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_11277f608;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
    dVar7 = *(double *)(param_1 + _DAT_11277f614);
    dVar8 = ((double *)(param_1 + _DAT_11277f614))[1];
    bVar1 = false;
    if ((dVar7 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(dVar8) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = dVar8 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if ((!bVar1) && ((*(byte *)(param_1 + _DAT_11277f610) & 3) != 0)) {
      if (dVar8 <= dVar7) {
        dVar7 = dVar8;
      }
      dVar8 = *(double *)(param_1 + _DAT_11277f618);
      if (*(double *)(param_1 + _DAT_11277f618) <= 0.0) {
        dVar8 = dVar7 * 0.5;
      }
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar8);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0xffffffffffffffff;
      func_0x00010b691784(dVar8,0xffffffffffffffff,puVar5);
      func_0x00010c1a9f00(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108fefaf8; end: 108fefc2b; -[SCAvatarCircleBackgroundView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fefaf8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ffc50;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  lVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f62c);
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(lVar1);
  func_0x00010c0bcc40(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return;
}



/* Entry: 108fefc2c; end: 108feffc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fefc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c13afc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar4 = (long)_DAT_11277f600;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010c13afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retainAutorelease(uVar2);
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108feffc4; end: 108feffd7; -[SCAvatarCircleBackgroundView preferredImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108feffc4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f614);
}



/* Entry: 108feffd8; end: 108feffe7; -[SCAvatarCircleBackgroundView optimizationOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108feffd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f610);
}



/* Entry: 108feffe8; end: 108fefff7; -[SCAvatarCircleBackgroundView setOptimizationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108feffe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277f610) = param_3;
  return;
}



/* Entry: 108fefff8; end: 108ff0007; -[SCAvatarCircleBackgroundView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fefff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f62c);
}



/* Entry: 108ff0008; end: 108ff0017; -[SCAvatarCircleBackgroundView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff0008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f624);
}



/* Entry: 108ff0018; end: 108ff0027; -[SCAvatarCircleBackgroundView imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff0018(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f628);
}



/* Entry: 108ff0028; end: 108ff0037; -[SCAvatarCircleBackgroundView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff0028(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f618);
}



/* Entry: 108ff0038; end: 108ff00f7; -[SCAvatarCircleBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff0038(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f628,0);
  _objc_storeStrong(param_1 + _DAT_11277f624,0);
  _objc_storeStrong(param_1 + _DAT_11277f62c,0);
  _objc_storeStrong(param_1 + _DAT_11277f620,0);
  _objc_storeStrong(param_1 + _DAT_11277f5fc,0);
  _objc_storeStrong(param_1 + _DAT_11277f630,0);
  _objc_storeStrong(param_1 + _DAT_11277f608,0);
  _objc_storeStrong(param_1 + _DAT_11277f604,0);
  _objc_storeStrong(param_1 + _DAT_11277f600,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f60c,0);
  return;
}



/* Entry: 108ff00f8; end: 108ff0103; +[SCAvatarView announcerIdentifier] */

undefined ** FUN_108ff00f8(void)

{
  return &PTR____CFConstantStringClassReference_110f16a78;
}



/* Entry: 108ff0104; end: 108ff0113; -[SCAvatarView addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff0104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f634),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108ff0114; end: 108ff0123; -[SCAvatarView removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff0114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f634),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108ff0124; end: 108ff0133; -[SCAvatarView didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff0124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f634),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 108ff0134; end: 108ff0447; -[SCAvatarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108ff0134(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffc58;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f638);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f638) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f63c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f63c) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f640);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f640) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f644);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f644) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f648);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f648) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f64c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f64c) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f650);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f650) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f654);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f654) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f658);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f658) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f65c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f65c) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    func_0x00010c1af000(puVar1);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f634);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f634) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return puVar1;
}



/* Entry: 108ff0448; end: 108ff0497;  */

void FUN_108ff0448(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcdf0;
  _objc_opt_new(PTR_PTR_1126dcdf0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff0498; end: 108ff04eb;  */

void FUN_108ff0498(void)

{
  _objc_opt_new(PTR_PTR_1126dcdf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff04ec; end: 108ff058f;  */

void FUN_108ff04ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dce00;
  _objc_opt_new(PTR_PTR_1126dce00);
  func_0x00010c160fc0();
  func_0x00010c1af000(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff0590; end: 108ff061f;  */

void FUN_108ff0590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fd47ae140000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c21e900(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff0620; end: 108ff06cb;  */

void FUN_108ff0620(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  if (lRam0000000113730628 != -1) {
    func_0x000107c27d9c(0x113730628,&PTR___NSConcreteGlobalBlock_110ad2840);
  }
  func_0x00010c01bf60(puVar1);
  func_0x00010c182220();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1);
  _objc_release(puVar2);
  func_0x00010c21e900(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff06cc; end: 108ff0703;  */

void FUN_108ff06cc(void)

{
  _objc_opt_new(PTR_PTR_1126dce08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff0704; end: 108ff07f7; -[SCAvatarView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff0704(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f660);
  *(undefined8 *)(param_1 + _DAT_11277f660) = 0;
  _objc_release(uVar1);
  func_0x00010c1842e0(0,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f650);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f654);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  return;
}



/* Entry: 108ff07f8; end: 108ff0f9b; -[SCAvatarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff07f8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ffc58;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  pdVar1 = (double *)(param_5 + _DAT_11277f664);
  param_1 = param_1 + pdVar1[1];
  param_2 = param_2 + *pdVar1;
  param_3 = param_3 - (pdVar1[1] + pdVar1[3]);
  param_4 = param_4 - (*pdVar1 + pdVar1[2]);
  _CGRectIntegral(param_1,param_2);
  dVar10 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar7 = dVar10;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  dVar9 = dVar7;
  func_0x00010be23220(param_5);
  if (*(char *)(param_5 + _DAT_11277f668) == '\x01') {
    dVar11 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar11 = dVar11 * 1.149999976158142;
    dVar9 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar9 = dVar9 * 1.149999976158142;
    uVar6 = 0;
    uVar8 = 0;
    _CGRectIntegral(0,0,dVar11,dVar9);
    puVar3 = (undefined8 *)(param_5 + _DAT_11277f638);
    uVar2 = *puVar3;
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (dVar9 <= 0.0) {
    puVar3 = (undefined8 *)(param_5 + _DAT_11277f638);
    uVar2 = *puVar3;
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    uVar8 = 0;
    dVar11 = param_3;
    dVar9 = param_4;
  }
  else {
    dVar11 = param_3 - dVar9;
    dVar9 = param_4 - dVar9;
    puVar3 = (undefined8 *)(param_5 + _DAT_11277f638);
    uVar2 = *puVar3;
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    uVar8 = 0;
  }
  func_0x00010c1739e0(uVar6,uVar8,dVar11,dVar9);
  _objc_release(uVar2);
  uVar2 = *puVar3;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277f63c;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,param_3,param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(uVar2);
  dVar9 = param_3;
  dVar11 = param_4;
  _CGRectInset(param_1,param_2,param_3,param_4,-*(double *)(param_5 + _DAT_11277f66c),
               -*(double *)(param_5 + _DAT_11277f66c));
  func_0x00010b816528();
  lVar4 = (long)_DAT_11277f644;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,dVar9,dVar11);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277f648;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,param_3,param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277f64c;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,param_3,param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277f650;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,param_3,param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(uVar2);
  dVar9 = param_3;
  if (param_4 <= param_3) {
    dVar9 = param_4;
  }
  dVar11 = *(double *)(param_5 + _DAT_11277f670);
  if (*(double *)(param_5 + _DAT_11277f670) <= 0.0) {
    dVar11 = dVar9 * 0.5;
  }
  uVar6 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar11);
  _objc_release(uVar2);
  _objc_release(uVar6);
  dVar9 = 0.0;
  _CGRectGetWidth(0,0,param_3,param_4);
  dVar11 = 0.0;
  _CGRectGetHeight(0,0,param_3,param_4);
  if (dVar11 <= dVar9) {
    dVar9 = dVar11;
  }
  dVar11 = 24.0;
  if (dVar9 * 0.6857143044471741 <= 24.0) {
    dVar11 = dVar9 * 0.6857143044471741;
  }
  lVar4 = (long)_DAT_11277f654;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,dVar11,dVar11);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(uVar2);
  dVar10 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar4 = (long)_DAT_11277f658;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 0.0;
  func_0x00010c1739e0(0,0,dVar10 * 0.5,param_1 * 0.5);
  _objc_release(uVar2);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  dVar10 = dVar7 * 0.800000011920929;
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxY();
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar10,dVar7 * 0.800000011920929);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277f65c;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  uVar8 = 0;
  func_0x00010c1739e0(0,0,0x4028000000000000,0x4028000000000000);
  _objc_release(uVar2);
  func_0x00010be1cba0(param_5);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar6,uVar8);
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11277f640;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  uVar8 = 0;
  func_0x00010c1739e0(0,0,0x4039000000000000,0x4039000000000000);
  _objc_release(uVar2);
  func_0x00010be20820(param_5);
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar6,uVar8);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4029000000000000);
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4000000000000000);
  _objc_release(uVar2);
  _objc_release(uVar6);
  lVar4 = param_5;
  func_0x00010bf13d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar6 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(lVar4);
  return;
}



/* Entry: 108ff0f9c; end: 108ff168b; -[SCAvatarView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff0f9c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277f660;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar5);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar2 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar2 & 1) != 0) goto LAB_108ff1644;
    }
    func_0x00010c076be0(*(undefined8 *)(param_1 + lVar6));
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = param_3;
    FUN_108fed1ac();
    if ((int)uVar5 != 0) {
      lVar7 = param_1;
      func_0x00010c160fc0(param_1);
      func_0x00010b0af32c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(param_1);
      _objc_release(lVar7);
    }
    uVar5 = param_3;
    func_0x000108fed1f8();
    if ((int)uVar5 != 0) {
      lVar7 = param_1;
      func_0x00010c160fc0(param_1);
      func_0x00010b0af344();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(param_1);
      _objc_release(lVar7);
    }
    uVar5 = param_3;
    func_0x00010c230aa0();
    if ((int)uVar5 != 0) {
      lVar7 = param_1;
      func_0x00010c160fc0(param_1);
      func_0x00010b0af314();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(param_1);
      _objc_release(lVar7);
    }
    uVar5 = param_3;
    func_0x00010c233ea0();
    if ((int)uVar5 != 0) {
      lVar7 = param_1;
      func_0x00010c160fc0(param_1);
      func_0x00010b0af35c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(param_1);
      _objc_release(lVar7);
    }
    uVar5 = param_3;
    func_0x00010bf14860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(param_1 + _DAT_11277f63c);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      func_0x00010beb7d20(param_1);
      uVar5 = param_3;
      func_0x00010bf14860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f63c);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010bf1ac80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f638);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      *(undefined1 *)(param_1 + _DAT_11277f668) = 0;
    }
    else {
      func_0x00010beb7fa0(param_1);
      *(undefined1 *)(param_1 + _DAT_11277f668) = 0;
      uVar5 = param_3;
      FUN_108fed1ac();
      if ((int)uVar5 != 0) {
        _objc_initWeak(auStack_58,param_1);
        uVar5 = param_3;
        func_0x00010bf1ac80(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010bf1ae20();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        func_0x00010c0be480(uVar2);
        _objc_release(uVar2);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      uVar5 = param_3;
      func_0x00010bf1ac80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_11277f638;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar4);
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x00010bf14860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 == 0) {
        lVar3 = param_1;
        func_0x00010bf13d40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar4);
      }
      else {
        lVar3 = *(long *)(param_1 + lVar7);
        func_0x00010c269d40(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
      }
      _objc_release(lVar3);
    }
    uVar5 = param_3;
    func_0x00010bf12c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(param_1 + _DAT_11277f658);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      func_0x00010beb7ca0(param_1);
      uVar5 = param_3;
      func_0x00010bf12c40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f658);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c233fa0();
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f64c);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f650);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f654);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
    }
    else {
      func_0x00010beba9e0(param_1);
    }
    func_0x00010bebab20(param_1);
    func_0x00010beb9ac0(param_1);
    func_0x00010beb9960(param_1);
    uVar5 = param_3;
    func_0x00010bf12be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(param_1 + _DAT_11277f65c);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      func_0x00010beb7c80(param_1);
      uVar5 = param_3;
      func_0x00010bf12be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f65c);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0ce1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(param_1 + _DAT_11277f640);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      func_0x00010beb9ea0(param_1);
      uVar5 = param_3;
      func_0x00010c0ce1c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277f640);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_108ff1644:
  _objc_release(param_3);
  return;
}



/* Entry: 108ff168c; end: 108ff16b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff168c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11277f668) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108ff16b8; end: 108ff1703; -[SCAvatarView setContentEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff16b8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  ushort uVar2;
  
  pdVar1 = (double *)(param_5 + _DAT_11277f664);
  uVar2 = NEON_uminv(CONCAT26(-(ushort)(pdVar1[3] == param_4),
                              CONCAT24(-(ushort)(pdVar1[2] == param_3),
                                       CONCAT22(-(ushort)(pdVar1[1] == param_2),
                                                -(ushort)(*pdVar1 == param_1)))),2);
  if ((uVar2 & 1) == 0) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108ff1704; end: 108ff17d3; -[SCAvatarView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff1704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f674);
  *(undefined8 *)(param_1 + _DAT_11277f674) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f63c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f640);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff17d4; end: 108ff187b; -[SCAvatarView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff17d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f678);
  *(undefined8 *)(param_1 + _DAT_11277f678) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f63c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa2c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f640);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa2c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff187c; end: 108ff18fb; -[SCAvatarView setComposerRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff187c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f67c);
  *(undefined8 *)(param_1 + _DAT_11277f67c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ff80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff18fc; end: 108ff1a03; -[SCAvatarView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff18fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ffc58;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setBackgroundColor__112639330,param_3);
  func_0x00010bf14860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f63c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f640);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108ff1a04; end: 108ff1ac7; -[SCAvatarView setPreferredImageSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff1a04(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  
  pdVar1 = (double *)(param_3 + _DAT_11277f680);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    uVar3 = *(undefined8 *)(param_3 + _DAT_11277f638);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(param_1,param_2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_3 + _DAT_11277f63c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108ff1ac8; end: 108ff1c67; -[SCAvatarView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff1ac8(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(double *)(param_2 + _DAT_11277f670) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_11277f670) = param_1;
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277f63c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11277f660;
  lVar3 = *(long *)(param_2 + lVar5);
  func_0x00010c141300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c141300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be97560(param_2);
    uVar4 = *(undefined8 *)(param_2 + _DAT_11277f644);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  iVar1 = (int)*(undefined8 *)(param_2 + lVar5);
  func_0x00010c233fa0();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11277f64c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + _DAT_11277f650);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + _DAT_11277f654);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  else {
    func_0x00010beba9e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108ff1c68; end: 108ff1d13; -[SCAvatarView setOptimizationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff1c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_11277f684) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5da0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f63c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5da0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f640);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff1d14; end: 108ff1d63; -[SCAvatarView bitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff1d14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ff1d64; end: 108ff1f13; -[SCAvatarView _showBitmojiContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff1d64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = (long)_DAT_11277f638;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5da0();
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f680);
    uVar5 = ((undefined8 *)(param_1 + _DAT_11277f680))[1];
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(uVar4,uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ff80();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff1f14; end: 108ff211b; -[SCAvatarView _showBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff1f14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = (long)_DAT_11277f63c;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5da0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa2c0();
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f680);
    uVar5 = ((undefined8 *)(param_1 + _DAT_11277f680))[1];
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(uVar4,uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(param_1,param_2,uVar2,0);
    _objc_release(uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277f670);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff211c; end: 108ff22db; -[SCAvatarView _showMiniStoryThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff211c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f640;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa2c0();
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(0x4039000000000000,0x4039000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(param_1,param_2,uVar2,0);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff22dc; end: 108ff24db; -[SCAvatarView _showRingViewIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff22dc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010c141300();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 != 0) {
    uVar2 = param_4;
    func_0x00010c076be0();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      lVar5 = (long)_DAT_11277f644;
      uVar4 = *(ulong *)(param_2 + lVar5);
      func_0x00010c06f880();
      if ((uVar4 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_2 + lVar5));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_2 + lVar5);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_2,param_3,uVar3);
        _objc_release(uVar3);
      }
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      puVar1 = PTR_PTR_1126c2eb0;
      uVar4 = param_4;
      func_0x00010c141300(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067620(puVar1,param_3,uVar4);
      *(undefined8 *)(param_2 + _DAT_11277f66c) = param_1;
      _objc_release(uVar4);
      uVar4 = param_4;
      func_0x00010c141300(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be97560(param_2,param_3,uVar4);
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(param_1);
      _objc_release(uVar3);
      _objc_release(uVar4);
      uVar4 = param_4;
      func_0x00010c141300(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(param_2,param_3,uVar3);
      goto LAB_108ff24b8;
    }
  }
  uVar3 = *(undefined8 *)(param_2 + _DAT_11277f644);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
LAB_108ff24b8:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ff24dc; end: 108ff27eb; -[SCAvatarView _showReplayIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff24dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (0.0 < *(double *)(param_1 + _DAT_11277f670)) {
    lVar4 = (long)_DAT_11277f650;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11277f644;
      lVar1 = *(long *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        func_0x00010befbb60(param_1,param_2,uVar2);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fe0(param_1,param_2,uVar2,uVar3);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    plVar7 = (long *)(param_1 + _DAT_11277f654);
    lVar1 = *plVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*plVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11277f644;
      lVar1 = *(long *)(param_1 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar6 = *plVar7;
      func_0x00010c269d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        func_0x00010befbb60(param_1,param_2,lVar6);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fe0(param_1,param_2,lVar6,uVar2);
        _objc_release(uVar2);
      }
      _objc_release(lVar6);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    piVar5 = (int *)&DAT_11277f64c;
  }
  else {
    lVar4 = (long)_DAT_11277f64c;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11277f644;
      lVar1 = *(long *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        func_0x00010befbb60(param_1,param_2,uVar2);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fe0(param_1,param_2,uVar2,uVar3);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    piVar5 = (int *)&DAT_11277f654;
    plVar7 = (long *)(param_1 + _DAT_11277f650);
  }
  lVar1 = *plVar7;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + *piVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff27ec; end: 108ff282f; -[SCAvatarView _ringCornerRadiusForViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ff27ec(long param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if ((param_3 != 0) && (dVar2 = *(double *)(param_1 + _DAT_11277f670), 0.0 < dVar2)) {
    func_0x00010c067620(0,PTR_PTR_1126c2eb0);
    dVar1 = dVar2 + dVar1;
  }
  return dVar1;
}



/* Entry: 108ff2830; end: 108ff28f7; -[SCAvatarView _showAvatarBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff2830(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f658;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff28f8; end: 108ff29bf; -[SCAvatarView _showAvatarActivityIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff28f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f65c;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff29c0; end: 108ff2a97; -[SCAvatarView _getStrokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff29c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f660);
  func_0x00010bf14860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcc40();
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 108ff2a98; end: 108ff2aa7;  */

void FUN_108ff2a98(undefined8 param_1,long param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1;
  return;
}



/* Entry: 108ff2aa8; end: 108ff2ae3; -[SCAvatarView _getActivityIndicatorCenter] */

void FUN_108ff2aa8(void)

{
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  return;
}



/* Entry: 108ff2ae4; end: 108ff2b33; -[SCAvatarView _getMiniStoryThumbnailCenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108ff2ae4(double param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  auVar1 = NEON_fmov(0x4039000000000000,8);
  auVar2 = NEON_fmov(0xbfe0000000000000,8);
  auVar3._8_8_ = param_1 + (*(double *)(param_2 + _DAT_11277f664 + 0x10) + auVar1._0_8_) *
                           auVar2._0_8_;
  auVar3._0_8_ = param_1 + (*(double *)(param_2 + _DAT_11277f664 + 0x18) + auVar1._8_8_) *
                           auVar2._8_8_;
  return auVar3;
}



/* Entry: 108ff2b34; end: 108ff2bcb; -[SCAvatarView handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff2b34(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_108ffe49c(*(undefined8 *)(param_1 + _DAT_11277f688));
  lVar2 = (long)_DAT_11277f660;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c230aa0();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x000108fed244();
    if (iVar1 == 0) {
      return;
    }
    param_1 = param_1 + _DAT_11277f68c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd2d40();
  }
  else {
    param_1 = param_1 + _DAT_11277f68c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd2dc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ff2bcc; end: 108ff2cbf; -[SCAvatarView _showLoadingViewIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff2bcc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11277f660;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c076be0();
  if (iVar1 != 0) {
    lVar7 = (long)_DAT_11277f648;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c141300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1fb20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277f648);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bef80();
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108ff2cc0; end: 108ff318b; -[SCAvatarView _showLoadingAnimationIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff2cc0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = (long)_DAT_11277f660;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c076be0();
  if ((param_3 & 1) == 0) {
    if ((int)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f644);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f63c);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      uStack_80 = uVar4;
      uStack_78 = uVar6;
      uStack_70 = uVar8;
      uStack_68 = uVar9;
      uStack_60 = uVar5;
      uStack_58 = uVar7;
      func_0x00010c219960();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f640);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar4;
      uStack_78 = uVar6;
      uStack_70 = uVar8;
      uStack_68 = uVar9;
      uStack_60 = uVar5;
      uStack_58 = uVar7;
      func_0x00010c219960();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f638);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar4;
      uStack_78 = uVar6;
      uStack_70 = uVar8;
      uStack_68 = uVar9;
      uStack_60 = uVar5;
      uStack_58 = uVar7;
      func_0x00010c219960();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f64c);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar4;
      uStack_78 = uVar6;
      uStack_70 = uVar8;
      uStack_68 = uVar9;
      uStack_60 = uVar5;
      uStack_58 = uVar7;
      func_0x00010c219960();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f650);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar4;
      uStack_78 = uVar6;
      uStack_70 = uVar8;
      uStack_68 = uVar9;
      uStack_60 = uVar5;
      uStack_58 = uVar7;
      func_0x00010c219960();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f654);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar4;
      uStack_78 = uVar6;
      uStack_70 = uVar8;
      uStack_68 = uVar9;
      uStack_60 = uVar5;
      uStack_58 = uVar7;
      func_0x00010c219960();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277f648);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1399a0();
      _objc_release(uVar2);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108ff318c;
      puStack_90 = &UNK_110842e18;
      lStack_88 = param_1;
      func_0x000107c312d4(0x3dcccccd,"APPSTORE",&puStack_a8);
      func_0x00010bf03460(0x3fe6666660000000,0,0x3fe99999a0000000,0x4051800000000000,
                          PTR__OBJC_CLASS___UIView_1126aec20);
      return;
    }
  }
  else if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f644);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f648);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558e0();
    goto LAB_108ff316c;
  }
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c076be0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f648);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1399a0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f63c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar5;
  uStack_58 = uVar7;
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f640);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar5;
  uStack_58 = uVar7;
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f638);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar5;
  uStack_58 = uVar7;
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f64c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar5;
  uStack_58 = uVar7;
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f650);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar5;
  uStack_58 = uVar7;
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f654);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  uStack_60 = uVar5;
  uStack_58 = uVar7;
  func_0x00010c219960();
LAB_108ff316c:
  _objc_release(uVar2);
  return;
}



/* Entry: 108ff318c; end: 108ff31f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff318c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f660);
  func_0x00010c076be0();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f648);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108ff31f4; end: 108ff33ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff31f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _CGAffineTransformMakeScale(&uStack_70,0x3fe99999a0000000,0x3fe99999a0000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f63c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960();
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(&uStack_d0,0x3fe99999a0000000,0x3fe99999a0000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f640);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960();
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(&uStack_100,0x3fe99999a0000000,0x3fe99999a0000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  func_0x00010c219960();
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(&uStack_130,0x3fe99999a0000000,0x3fe99999a0000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f64c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  func_0x00010c219960();
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(&uStack_160,0x3fe99999a0000000,0x3fe99999a0000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f650);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  func_0x00010c219960();
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(&uStack_190,0x3fe99999a0000000,0x3fe99999a0000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f654);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_188;
  uStack_a0 = uStack_190;
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_78 = uStack_168;
  uStack_80 = uStack_170;
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 108ff3400; end: 108ff3497;  */

void FUN_108ff3400(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108ff3498;
  puStack_20 = &UNK_110842e18;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108ff3644;
  puStack_48 = &UNK_110841f20;
  uStack_18 = uStack_40;
  func_0x00010bf03440(0x3fd3333340000000,0x3fa99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,4,&puStack_38,&puStack_60);
  return;
}



/* Entry: 108ff3498; end: 108ff3643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3498(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f63c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f640);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f638);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f64c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f650);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f654);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 108ff3644; end: 108ff369b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3644(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f644);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108ff369c; end: 108ff36b7; -[SCAvatarView intrinsicContentSize] */

undefined1  [16]
FUN_108ff369c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108ff36b8; end: 108ff36f3; -[SCAvatarView shouldRasterizeAvatar] */

undefined8 FUN_108ff36b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c232320();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ff36f4; end: 108ff376f; -[SCAvatarView bitmojiDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff36f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f68c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1b300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108ff3770; end: 108ff3783; -[SCAvatarView preferredImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108ff3770(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f680);
}



/* Entry: 108ff3784; end: 108ff3793; -[SCAvatarView optimizationOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff3784(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f684);
}



/* Entry: 108ff3794; end: 108ff37a3; -[SCAvatarView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff3794(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f660);
}



/* Entry: 108ff37a4; end: 108ff37b3; -[SCAvatarView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff37a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f674);
}



/* Entry: 108ff37b4; end: 108ff37c3; -[SCAvatarView imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff37b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f678);
}



/* Entry: 108ff37c4; end: 108ff37d3; -[SCAvatarView valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff37c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f67c);
}



/* Entry: 108ff37d4; end: 108ff3813; -[SCAvatarView setValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff37d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f67c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff3814; end: 108ff3833; -[SCAvatarView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3814(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f68c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff3834; end: 108ff3847; -[SCAvatarView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3834(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f68c,param_3);
  return;
}



/* Entry: 108ff3848; end: 108ff385f; -[SCAvatarView contentEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff3848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f664);
}



/* Entry: 108ff3860; end: 108ff386f; -[SCAvatarView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff3860(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f670);
}



/* Entry: 108ff3870; end: 108ff387f; -[SCAvatarView animationScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff3870(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f688);
}



/* Entry: 108ff3880; end: 108ff388f; -[SCAvatarView setAnimationScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3880(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277f688) = param_1;
  return;
}


