/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cfcc54; end: 105cfcdd7; -[SCSearchAttachmentsWebView _updateRoundedCornerMaskIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfcc54(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = (long)_DAT_11273460c;
  puVar1 = (undefined8 *)(param_1 + _DAT_112734610);
  uVar3 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf20c00();
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar3 & 1) != 0) {
    return;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar2));
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  puVar6 = puVar4;
  _objc_retainAutorelease(puVar4);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar5,param_2,puVar6);
  uVar8 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  puVar7 = puVar4;
  _objc_retainAutorelease(puVar4);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar6,param_2,puVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273461c);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105cfcdd8; end: 105cfce13; -[SCSearchAttachmentsWebView _didTapBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfcdd8(long param_1)

{
  param_1 = param_1 + _DAT_112734638;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0d760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfce14; end: 105cfce23; -[SCSearchAttachmentsWebView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfce14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273463c);
}



/* Entry: 105cfce24; end: 105cfce43; -[SCSearchAttachmentsWebView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfce24(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112734638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cfce44; end: 105cfce57; -[SCSearchAttachmentsWebView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfce44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112734638,param_3);
  return;
}



/* Entry: 105cfce58; end: 105cfce67; -[SCSearchAttachmentsWebView webView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfce58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273460c);
}



/* Entry: 105cfce68; end: 105cfce77; -[SCSearchAttachmentsWebView progressView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfce68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734620);
}



/* Entry: 105cfce78; end: 105cfce87; -[SCSearchAttachmentsWebView attachButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfce78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734614);
}



/* Entry: 105cfce88; end: 105cfce9f; -[SCSearchAttachmentsWebView layoutInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfce88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734628);
}



/* Entry: 105cfcea0; end: 105cfceaf; -[SCSearchAttachmentsWebView progressViewOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfcea0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273462c);
}



/* Entry: 105cfceb0; end: 105cfcebf; -[SCSearchAttachmentsWebView setProgressViewOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfceb0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273462c) = param_1;
  return;
}



/* Entry: 105cfcec0; end: 105cfcecf; -[SCSearchAttachmentsWebView isSafeBrowsingViewHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cfcec0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112734608);
}



/* Entry: 105cfced0; end: 105cfcedf; -[SCSearchAttachmentsWebView setSafeBrowsingViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfced0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112734608) = param_3;
  return;
}



/* Entry: 105cfcee0; end: 105cfcef3; -[SCSearchAttachmentsWebView attachButtonOriginOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105cfcee0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112734634);
}



/* Entry: 105cfcef4; end: 105cfcf03; -[SCSearchAttachmentsWebView safeBrowsingUrlType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfcef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734624);
}



/* Entry: 105cfcf04; end: 105cfcf8f; -[SCSearchAttachmentsWebView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfcf04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734614,0);
  _objc_storeStrong(param_1 + _DAT_11273460c,0);
  _objc_destroyWeak(param_1 + _DAT_112734638);
  _objc_storeStrong(param_1 + _DAT_11273463c,0);
  _objc_storeStrong(param_1 + _DAT_11273461c,0);
  _objc_storeStrong(param_1 + _DAT_112734618,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734620,0);
  return;
}



/* Entry: 105cfcf90; end: 105cfd223; -[SCSearchConfirmationView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105cfcf90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  puStack_68 = PTR_PTR_1126ecdc8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112734640);
    *(undefined **)((long)puVar2 + (long)_DAT_112734640) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar3);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112734644);
    *(undefined **)((long)puVar2 + (long)_DAT_112734644) = puVar3;
    _objc_release(uVar5);
    uVar5 = 1;
    FUN_105cfd224();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112734648;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = uVar5;
    _objc_release(uVar7);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar8));
    uVar5 = 0;
    FUN_105cfd224();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11273464c;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = uVar5;
    _objc_release(uVar7);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar8));
    puVar3 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar3;
    func_0x00010c22a660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c22a660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3da3d70a);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112734650);
    *(undefined **)((long)puVar2 + (long)_DAT_112734650) = puVar3;
    _objc_release(uVar5);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112734654);
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar5;
    puVar1[3] = uVar9;
    puVar1[2] = uVar7;
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 105cfd224; end: 105cfd32f;  */

void FUN_105cfd224(int param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e286f8;
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dace78;
  }
  uVar3 = 0x88;
  if (param_1 == 0) {
    uVar3 = 0x82;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010900fd90(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053140(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126b56f8;
  _objc_opt_new(PTR_PTR_1126b56f8);
  func_0x00010c2226c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105cfd330; end: 105cfd5d7; -[SCSearchConfirmationView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfd330(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ecdc8;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010be48dc0(param_5);
  func_0x00010bf20c00(param_5);
  param_1 = param_1 + 4.0;
  param_2 = param_2 + 12.0;
  param_3 = param_3 + -8.0;
  param_4 = param_4 + -24.0;
  lVar1 = (long)_DAT_112734640;
  dVar5 = param_3;
  dVar8 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar1));
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar3 = dVar3 - dVar5;
  dVar6 = dVar3 * 0.5;
  func_0x00010b816218(dVar3);
  dVar7 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar4 = dVar7;
  func_0x00010b816218();
  dVar5 = (double)(long)(dVar5 * dVar4) / dVar4;
  func_0x00010b816218();
  func_0x00010c19f0e0((double)(long)(dVar3 * dVar6) / dVar3,dVar7,dVar5,
                      (double)(long)(dVar8 * dVar4) / dVar4,*(undefined8 *)(param_5 + lVar1));
  lVar2 = (long)_DAT_112734644;
  dVar5 = param_3;
  dVar4 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar2));
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar3 = dVar3 - dVar5;
  dVar7 = dVar3 * 0.5;
  func_0x00010b816218();
  dVar8 = (double)(long)(dVar3 * dVar7) / dVar3;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMaxY();
  dVar7 = dVar3;
  func_0x00010b816218();
  dVar5 = (double)(long)(dVar5 * dVar7) / dVar7;
  func_0x00010b816218();
  func_0x00010c19f0e0(dVar8,dVar3,dVar5,(double)(long)(dVar4 * dVar7) / dVar7,
                      *(undefined8 *)(param_5 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetMaxY();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  param_1 = param_1 + -273.0;
  dVar5 = param_1 * 0.5;
  func_0x00010b816218();
  dVar5 = (double)(long)(param_1 * dVar5) / param_1;
  func_0x00010b816218();
  dVar3 = (double)(long)(param_1 * 115.0) / param_1;
  func_0x00010b816218();
  lVar1 = (long)_DAT_11273464c;
  func_0x00010c19f0e0(dVar5,dVar8 + 10.0,dVar3,(double)(long)(param_1 * 30.0) / param_1,
                      *(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMaxX();
  dVar3 = dVar5 + 43.0;
  func_0x00010b816218();
  dVar7 = (double)(long)(dVar5 * 115.0) / dVar5;
  func_0x00010b816218();
  func_0x00010c19f0e0(dVar3,dVar8 + 10.0,dVar7,(double)(long)(dVar5 * 30.0) / dVar5,
                      *(undefined8 *)(param_5 + _DAT_112734648));
  return;
}



/* Entry: 105cfd5d8; end: 105cfd61b; -[SCSearchConfirmationView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfd5d8(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2);
  return;
}



/* Entry: 105cfd61c; end: 105cfd7a3; -[SCSearchConfirmationView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfd61c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c3f00;
  _objc_opt_class(PTR_PTR_1126c3f00);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_112734658;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_105cfd784;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c2716a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    FUN_105cfd7a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112734640));
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c2610e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    FUN_105cfd7a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112734644));
    _objc_release(uVar3);
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_105cfd784:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfd7a4; end: 105cfd897;  */

undefined1  [16]
FUN_105cfd7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  dVar10 = 12.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c04e840();
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = dVar10;
    return auVar18;
  }
  ___stack_chk_fail();
  _objc_retain(uVar8);
  puVar2 = PTR_PTR_1126c3f00;
  _objc_opt_class(PTR_PTR_1126c3f00);
  uVar5 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar1 = uVar8;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    dVar10 = *(double *)PTR__CGSizeZero_110347620;
    dVar16 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    dVar15 = dVar10 + -4.0 + -4.0;
    uVar5 = uVar8;
    func_0x00010c2716a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_105cfd7a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar11 = 0x7fefffffffffffff;
    dVar16 = dVar15;
    func_0x00010bf20bc0(dVar15,uVar6);
    uVar5 = uVar8;
    uVar13 = param_3;
    uVar14 = param_4;
    func_0x00010c2610e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    FUN_105cfd7a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar12 = 0x7fefffffffffffff;
    func_0x00010bf20bc0(dVar15,0x7fefffffffffffff,uVar7);
    _CGRectGetHeight(dVar16,uVar11,param_3,param_4);
    _CGRectGetHeight(dVar15,uVar12,uVar13,uVar14);
    dVar16 = dVar16 + dVar15 + 10.0 + 30.0 + 12.0 + 12.0;
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
  _objc_release(uVar8);
  auVar17._8_8_ = dVar16;
  auVar17._0_8_ = dVar10;
  return auVar17;
}



/* Entry: 105cfd898; end: 105cfda63; +[SCSearchConfirmationView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105cfd898(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126c3f00;
  _objc_opt_class(PTR_PTR_1126c3f00);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    dVar11 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    dVar10 = param_1 + -4.0 + -4.0;
    uVar3 = param_7;
    func_0x00010c2716a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_105cfd7a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar6 = 0x7fefffffffffffff;
    dVar11 = dVar10;
    func_0x00010bf20bc0(dVar10,uVar4);
    uVar3 = param_7;
    uVar8 = param_3;
    uVar9 = param_4;
    func_0x00010c2610e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_105cfd7a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar7 = 0x7fefffffffffffff;
    func_0x00010bf20bc0(dVar10,0x7fefffffffffffff,uVar5);
    _CGRectGetHeight(dVar11,uVar6,param_3,param_4);
    _CGRectGetHeight(dVar10,uVar7,uVar8,uVar9);
    dVar11 = dVar11 + dVar10 + 10.0 + 30.0 + 12.0 + 12.0;
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  auVar12._8_8_ = dVar11;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 105cfda64; end: 105cfdb3f; -[SCSearchConfirmationView _layoutBackgroundViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfda64(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(param_1 + (long)_DAT_112734654);
  uVar2 = param_1;
  func_0x00010bf20c00();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  _CGRectEqualToRect();
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010bf20c00(param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar4 = (long)_DAT_112734650;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(*puVar1,puVar1[1],puVar1[2],puVar1[3],0x4020000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c22a660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105cfdb40; end: 105cfdc03; -[SCSearchConfirmationView _handleButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfdb40(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b56f8;
  _objc_opt_class(PTR_PTR_1126b56f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 == *(ulong *)(param_1 + _DAT_112734648)) ||
     (uVar1 == *(ulong *)(param_1 + _DAT_11273464c))) {
    param_1 = param_1 + _DAT_11273465c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf48120();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfdc04; end: 105cfdc13; -[SCSearchConfirmationView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfdc04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734658);
}



/* Entry: 105cfdc14; end: 105cfdc33; -[SCSearchConfirmationView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfdc14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273465c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cfdc34; end: 105cfdc47; -[SCSearchConfirmationView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfdc34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273465c,param_3);
  return;
}



/* Entry: 105cfdc48; end: 105cfdcd3; -[SCSearchConfirmationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfdc48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273465c);
  _objc_storeStrong(param_1 + _DAT_112734658,0);
  _objc_storeStrong(param_1 + _DAT_112734650,0);
  _objc_storeStrong(param_1 + _DAT_11273464c,0);
  _objc_storeStrong(param_1 + _DAT_112734648,0);
  _objc_storeStrong(param_1 + _DAT_112734644,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734640,0);
  return;
}



/* Entry: 105cfdcd4; end: 105cfdea7; -[SCSearchMultiStateView initWithViewsForStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105cfdcd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  long unaff_x24;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_438;
  undefined8 uStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined8 *puStack_418;
  undefined1 auStack_410 [8];
  undefined1 auStack_408 [8];
  long lStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_378 [128];
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_248;
  undefined *puStack_240;
  long lStack_1b8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f0 = PTR_PTR_1126ecdd0;
  dVar12 = *(double *)PTR__CGRectZero_110347608;
  dVar15 = *(double *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar8 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar8,PTR_s_initWithFrame__1125e2948);
  if (puVar8 != (undefined8 *)0x0) {
    lVar9 = param_3;
    func_0x00010bf51e00();
    unaff_x24 = (long)_DAT_112734660;
    uVar7 = *(undefined8 *)((long)puVar8 + unaff_x24);
    *(long *)((long)puVar8 + unaff_x24) = lVar9;
    _objc_release(uVar7);
    dVar12 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar1 = *(long *)((long)puVar8 + unaff_x24);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar11 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          unaff_x23 = *(undefined8 **)(lStack_138 + lVar11 * 8);
          func_0x00010befbb60(puVar8);
          func_0x00010c23d620(unaff_x23);
          dVar12 = 0.0;
          func_0x00010c1677c0(unaff_x23);
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
        lVar9 = lVar1;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar1);
    unaff_x21 = *(undefined8 **)((long)puVar8 + unaff_x24);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209fe0(puVar8);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105cfdea8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_240 = PTR_PTR_1126ecdd0;
  lStack_248 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_248,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_3);
  dVar13 = 0.0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puVar2 = *(undefined8 **)(param_3 + _DAT_112734660);
  dVar14 = dVar15;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    unaff_x22 = (undefined8 *)*plStack_280;
    do {
      unaff_x23 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*plStack_280 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x21 = *(undefined8 **)(lStack_288 + (long)unaff_x23 * 8);
        dVar13 = dVar12;
        _CGRectGetMidX(dVar12,dVar15,uVar16,uVar17);
        dVar14 = dVar12;
        _CGRectGetMidY(dVar12,dVar15,uVar16,uVar17);
        func_0x00010c17a6a0(unaff_x21);
        unaff_x23 = (undefined8 *)((long)unaff_x23 + 1);
      } while (puVar3 != unaff_x23);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar8 = (undefined8 *)0x0;
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_3c0;
  pcStack_298 = FUN_105cfe02c;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar18 = *(double *)PTR__CGSizeZero_110347620;
  dVar19 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  puVar2 = *(undefined8 **)((long)puVar2 + (long)_DAT_112734660);
  uStack_2f0 = uVar17;
  uStack_2e8 = uVar16;
  dStack_2e0 = dVar15;
  dStack_2d8 = dVar12;
  ppuStack_2a0 = &puStack_150;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  iVar6 = (int)auStack_378;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    unaff_x21 = (undefined8 *)*plStack_3b0;
    do {
      unaff_x22 = (undefined8 *)0x0;
      dVar12 = dVar18;
      dVar15 = dVar19;
      do {
        if ((undefined8 *)*plStack_3b0 != unaff_x21) {
          _objc_enumerationMutation(puVar2);
        }
        dVar18 = dVar13;
        dVar19 = dVar14;
        func_0x00010c23d5a0(*(undefined8 *)(lStack_3b8 + (long)unaff_x22 * 8));
        if (dVar18 <= dVar12) {
          dVar18 = dVar12;
        }
        if (dVar19 <= dVar15) {
          dVar19 = dVar15;
        }
        unaff_x22 = (undefined8 *)((long)unaff_x22 + 1);
        dVar12 = dVar18;
        dVar15 = dVar19;
      } while (puVar3 != unaff_x22);
      iVar6 = (int)auStack_378;
      puVar3 = puVar2;
      puVar5 = &uStack_3c0;
      func_0x00010bf52a60();
      puVar8 = (undefined8 *)0x0;
    } while (puVar3 != (undefined8 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_3c8 = FUN_105cfe16c;
  lStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = unaff_x22;
  puStack_3e8 = unaff_x21;
  puStack_3e0 = puVar8;
  puStack_3d8 = puVar2;
  pppuStack_3d0 = &ppuStack_2a0;
  _objc_retain(puVar5);
  lVar9 = (long)_DAT_112734664;
  puVar8 = *(undefined8 **)((long)puVar3 + lVar9);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  if (puVar5 == puVar8) {
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      _objc_release();
    }
    else {
      puVar2 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar8);
      _objc_release(puVar5);
      if (((ulong)puVar2 & 1) != 0) goto LAB_105cfe2cc;
    }
    puVar8 = puVar5;
    func_0x00010bf51e00();
    uVar16 = *(undefined8 *)((long)puVar3 + lVar9);
    *(undefined8 **)((long)puVar3 + lVar9) = puVar8;
    _objc_release(uVar16);
    _objc_initWeak(auStack_408,puVar3);
    puStack_438 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_430 = 0xc2000000;
    pcStack_428 = FUN_105cfe308;
    puStack_420 = &UNK_110841fb0;
    _objc_copyWeak(auStack_410,auStack_408);
    _objc_retain(puVar5);
    ppuVar4 = &puStack_438;
    puStack_418 = puVar5;
    _objc_retainBlock();
    if (iVar6 == 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    else {
      func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(ppuVar4);
    _objc_release(puStack_418);
    _objc_destroyWeak(auStack_410);
    _objc_destroyWeak(auStack_408);
  }
LAB_105cfe2cc:
  _objc_release(puVar5);
  return puVar5;
}



/* Entry: 105cfdea8; end: 105cfe02b; -[SCSearchMultiStateView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105cfdea8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [128];
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  double dStack_198;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126ecdd0;
  lStack_108 = param_5;
  _objc_msgSendSuper2(&lStack_108,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar11 = 0.0;
  lVar1 = *(long *)(param_5 + _DAT_112734660);
  dVar12 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar1);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      dVar11 = param_1;
      _CGRectGetMidX(param_1,param_2,param_3,param_4);
      dVar12 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      func_0x00010c17a6a0(uVar7);
      lVar9 = lVar9 + 1;
    } while (lVar10 != lVar9);
    lVar10 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar19._8_8_ = dVar12;
    auVar19._0_8_ = dVar11;
    return auVar19;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_280;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = *(double *)PTR__CGSizeZero_110347620;
  dVar17 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar13 = 0.0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar2 = *(long *)(lVar1 + _DAT_112734660);
  dVar14 = dVar12;
  uStack_1b0 = param_4;
  uStack_1a8 = param_3;
  dStack_1a0 = param_2;
  dStack_198 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  iVar6 = (int)auStack_238;
  lVar10 = lVar2;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar1 = *plStack_270;
    do {
      lVar9 = 0;
      dVar16 = dVar15;
      dVar18 = dVar17;
      do {
        if (*plStack_270 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        dVar13 = dVar11;
        dVar14 = dVar12;
        func_0x00010c23d5a0(*(undefined8 *)(lStack_278 + lVar9 * 8));
        dVar15 = dVar13;
        if (dVar13 <= dVar16) {
          dVar15 = dVar16;
        }
        dVar17 = dVar14;
        if (dVar14 <= dVar18) {
          dVar17 = dVar18;
        }
        lVar9 = lVar9 + 1;
        dVar16 = dVar15;
        dVar18 = dVar17;
      } while (lVar10 != lVar9);
      iVar6 = (int)auStack_238;
      lVar10 = lVar2;
      puVar5 = &uStack_280;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    auVar20._8_8_ = dVar17;
    auVar20._0_8_ = dVar15;
    return auVar20;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  lVar10 = (long)_DAT_112734664;
  puVar8 = *(undefined1 **)(lVar2 + lVar10);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  if (puVar5 == (undefined8 *)puVar8) {
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  else {
    if (puVar8 == (undefined1 *)0x0) {
      _objc_release();
    }
    else {
      puVar3 = (undefined1 *)puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar8);
      _objc_release(puVar5);
      if (((ulong)puVar3 & 1) != 0) goto LAB_105cfe2cc;
    }
    puVar8 = (undefined1 *)puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(lVar2 + lVar10);
    *(undefined1 **)(lVar2 + lVar10) = puVar8;
    _objc_release(uVar7);
    _objc_initWeak(auStack_2c8,lVar2);
    puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
    dVar13 = 1.60807493534087e-314;
    uStack_2f0 = 0xc2000000;
    pcStack_2e8 = FUN_105cfe308;
    puStack_2e0 = &UNK_110841fb0;
    _objc_copyWeak(auStack_2d0,auStack_2c8);
    _objc_retain(puVar5);
    ppuVar4 = &puStack_2f8;
    puStack_2d8 = (undefined1 *)puVar5;
    _objc_retainBlock();
    if (iVar6 == 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    else {
      dVar13 = 0.25;
      dVar14 = 0.0;
      func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(ppuVar4);
    _objc_release(puStack_2d8);
    _objc_destroyWeak(auStack_2d0);
    _objc_destroyWeak(auStack_2c8);
  }
LAB_105cfe2cc:
  _objc_release(puVar5);
  auVar21._8_8_ = dVar14;
  auVar21._0_8_ = dVar13;
  return auVar21;
}



/* Entry: 105cfe02c; end: 105cfe16b; -[SCSearchMultiStateView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105cfe02c(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = *(double *)PTR__CGSizeZero_110347620;
  dVar15 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar11 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_3 + _DAT_112734660);
  dVar12 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  iVar5 = (int)auStack_e8;
  lVar10 = lVar1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      dVar14 = dVar13;
      dVar16 = dVar15;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        dVar11 = param_1;
        dVar12 = param_2;
        func_0x00010c23d5a0(*(undefined8 *)(lStack_128 + lVar8 * 8));
        dVar13 = dVar11;
        if (dVar11 <= dVar14) {
          dVar13 = dVar14;
        }
        dVar15 = dVar12;
        if (dVar12 <= dVar16) {
          dVar15 = dVar16;
        }
        lVar8 = lVar8 + 1;
        dVar14 = dVar13;
        dVar16 = dVar15;
      } while (lVar10 != lVar8);
      iVar5 = (int)auStack_e8;
      lVar10 = lVar1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = dVar15;
    auVar17._0_8_ = dVar13;
    return auVar17;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar10 = (long)_DAT_112734664;
  puVar9 = *(undefined1 **)(lVar1 + lVar10);
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar4 == (undefined8 *)puVar9) {
    _objc_release(puVar9);
    _objc_release(puVar4);
  }
  else {
    if (puVar9 == (undefined1 *)0x0) {
      _objc_release();
    }
    else {
      puVar2 = (undefined1 *)puVar4;
      func_0x00010c071ae0();
      _objc_release(puVar9);
      _objc_release(puVar4);
      if (((ulong)puVar2 & 1) != 0) goto LAB_105cfe2cc;
    }
    puVar9 = (undefined1 *)puVar4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(lVar1 + lVar10);
    *(undefined1 **)(lVar1 + lVar10) = puVar9;
    _objc_release(uVar6);
    _objc_initWeak(auStack_178,lVar1);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    dVar11 = 1.60807493534087e-314;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_105cfe308;
    puStack_190 = &UNK_110841fb0;
    _objc_copyWeak(auStack_180,auStack_178);
    _objc_retain(puVar4);
    ppuVar3 = &puStack_1a8;
    puStack_188 = (undefined1 *)puVar4;
    _objc_retainBlock();
    if (iVar5 == 0) {
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    else {
      dVar11 = 0.25;
      dVar12 = 0.0;
      func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(ppuVar3);
    _objc_release(puStack_188);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
LAB_105cfe2cc:
  _objc_release(puVar4);
  auVar18._8_8_ = dVar12;
  auVar18._0_8_ = dVar11;
  return auVar18;
}



/* Entry: 105cfe16c; end: 105cfe307; -[SCSearchMultiStateView setState:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfe16c(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112734664;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_105cfe2cc;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105cfe308;
    puStack_60 = &UNK_110841fb0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    ppuVar2 = &puStack_78;
    uStack_58 = param_3;
    _objc_retainBlock();
    if (param_4 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(ppuVar2);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
LAB_105cfe2cc:
  _objc_release(param_3);
  return;
}



/* Entry: 105cfe308; end: 105cfe33b;  */

void FUN_105cfe308(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cfe33c; end: 105cfe49b; -[SCSearchMultiStateView _updateViewWithState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cfe33c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar6 = (long)_DAT_112734660;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(ulong *)(lStack_138 + lVar8 * 8);
        uVar3 = uVar5;
        func_0x00010c0720c0(uVar5,param_2,param_3);
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c0e00e0(uVar4,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1677c0((double)(uVar3 & 0xffffffff));
        _objc_release(uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_112734660);
}



/* Entry: 105cfe49c; end: 105cfe4ab; -[SCSearchMultiStateView viewsForStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cfe49c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734660);
}



/* Entry: 105cfe4ac; end: 105cfe4eb; -[SCSearchMultiStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfe4ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734660,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734664,0);
  return;
}



/* Entry: 105cfe4ec; end: 105cfe843; -[SCSearchWebAttachmentCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105cfe4ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ecdd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e8e0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fef0a3d70a3d70a,0x3fef0a3d70a3d70a,0x3fef0a3d70a3d70a,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c3f48;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005ee0(0x4010000000000000);
    lVar6 = (long)_DAT_112734668;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_11273466c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_112734670;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_112734674;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105cfe844; end: 105cfec1b; -[SCSearchWebAttachmentCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfe844(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126ecdd8;
  lStack_a0 = param_5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_1 = param_1 + 16.0;
  param_2 = param_2 + 6.0;
  param_3 = param_3 + -32.0;
  param_4 = param_4 + -12.0;
  _objc_release(lVar1);
  dVar6 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar10 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar17 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar10 = dVar10 + (dVar17 + -20.0) * 0.5;
  uVar14 = 0x4034000000000000;
  uVar16 = 0x4034000000000000;
  func_0x00010b816528();
  lVar3 = (long)_DAT_112734670;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  dVar17 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar7 = dVar6;
  _CGRectGetWidth(dVar6,dVar10,uVar14,uVar16);
  dVar8 = (dVar17 - dVar7) + -16.0;
  dVar11 = 1.79769313486232e+308;
  func_0x00010c23d5a0(uVar2);
  lVar4 = (long)_DAT_112734674;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  dVar17 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar7 = dVar6;
  _CGRectGetWidth(dVar6,dVar10,uVar14,uVar16);
  dVar12 = 1.79769313486232e+308;
  func_0x00010c23d5a0((dVar17 - dVar7) + -16.0,uVar2);
  dVar17 = dVar6;
  _CGRectGetMaxX(dVar6,dVar10,uVar14,uVar16);
  dVar17 = dVar17 + 16.0;
  dVar7 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar9 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar13 = (((dVar7 + dVar9) - dVar11) - dVar12) * 0.5;
  func_0x00010b8162e0();
  dVar7 = dVar17;
  _CGRectGetMinX();
  dVar9 = dVar17;
  _CGRectGetMaxY(dVar17,dVar13,dVar8,dVar11);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar15 = dVar6;
  _CGRectGetWidth(dVar6,dVar10,uVar14,uVar16);
  dVar15 = (param_1 - dVar15) + -16.0;
  func_0x00010b8162e0();
  lVar1 = param_5;
  func_0x00010bf31be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166f8(dVar6,dVar10,uVar14,uVar16);
  lVar5 = (long)_DAT_112734668;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11273466c));
  lVar1 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166f8(dVar17,dVar13,dVar8,dVar11);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf31be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166f8(dVar7,dVar9,dVar15,dVar12);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  _objc_release(lVar1);
  return;
}



/* Entry: 105cfec1c; end: 105cfed0f; -[SCSearchWebAttachmentCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfec1c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c3ea0;
  _objc_opt_class(PTR_PTR_1126c3ea0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_112734678;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  if (uVar1 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_105cfecf0;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee4fe0(param_1);
  }
LAB_105cfecf0:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cfed10; end: 105cfedbf; +[SCSearchWebAttachmentCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_105cfed10(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c3ea0;
  _objc_opt_class(PTR_PTR_1126c3ea0);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    dVar4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar3 = param_4;
    func_0x00010c2342a0();
    if ((int)uVar3 == 0) {
      dVar4 = 66.0;
    }
    else {
      func_0x00010b816670();
      dVar4 = dVar4 + 66.0;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 105cfedc0; end: 105cfedc7; -[SCSearchWebAttachmentCell hasOverridedTapAction] */

undefined8 FUN_105cfedc0(void)

{
  return 1;
}



/* Entry: 105cfedc8; end: 105cfeedb; -[SCSearchWebAttachmentCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfedc8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR_PTR_1126c3ea0;
  uVar6 = *(ulong *)(param_1 + _DAT_112734678);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (uVar1 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c01b460(puVar3);
  _objc_release(puVar5);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273467c));
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105cfeedc; end: 105cfeee3; -[SCSearchWebAttachmentCell hasOverridedLongPressAction] */

undefined8 FUN_105cfeedc(void)

{
  return 1;
}



/* Entry: 105cfeee4; end: 105cff05b; -[SCSearchWebAttachmentCell handleLongPressAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cfeee4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_1126c3ea0;
  uVar9 = *(ulong *)(param_1 + _DAT_112734678);
  _objc_retain(uVar9);
  _objc_opt_class(puVar2);
  uVar3 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar2);
  uVar1 = uVar9;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (uVar1 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  lVar10 = (long)_DAT_112734670;
  lVar4 = *(long *)(param_1 + lVar10);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c26b700(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar6);
  }
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar8 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c01b460(puVar7);
  _objc_release(puVar8);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273467c));
  _objc_release(puVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cff05c; end: 105cff117; -[SCSearchWebAttachmentCell setHighlighted:] */

void FUN_105cff05c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ecdd8;
  puStack_40 = param_1;
  _objc_msgSendSuper2(&puStack_40,PTR_s_setHighlighted__112647c38);
  puVar1 = param_1;
  func_0x00010c074da0();
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e8e0(param_1);
  }
  else {
    puVar1 = param_1;
    func_0x00010bf144a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf635e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e8e0(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 105cff118; end: 105cff1fb; -[SCSearchWebAttachmentCell _updateWithViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cff118(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c3ea0;
  uVar4 = *(ulong *)(param_1 + _DAT_112734678);
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
  uVar3 = uVar1;
  func_0x00010c2716a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112734670));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c28f9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112734674));
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010bed4f40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105cff1fc; end: 105cff2db; -[SCSearchWebAttachmentCell _updateCellImage:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cff1fc(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_3;
  _objc_retain();
  if (param_3 == 0) {
    func_0x000108fe4e6c();
    param_3 = lVar1;
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112734668),param_2,param_3);
  uVar2 = 0x3ff0000000000000;
  if (param_3 != 0) {
    uVar2 = 0;
  }
  if (param_4 == 0) {
    func_0x00010c1677c0(*(undefined8 *)(param_1 + _DAT_11273466c));
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105cff2dc;
    puStack_48 = &UNK_110848c48;
    lStack_40 = param_1;
    uStack_38 = uVar2;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_60);
  }
  func_0x00010c1cbe20(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 105cff2dc; end: 105cff2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cff2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273466c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105cff2f4; end: 105cff303; -[SCSearchWebAttachmentCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cff2f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734678);
}



/* Entry: 105cff304; end: 105cff313; -[SCSearchWebAttachmentCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cff304(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273467c);
}



/* Entry: 105cff314; end: 105cff353; -[SCSearchWebAttachmentCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cff314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273467c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cff354; end: 105cff363; -[SCSearchWebAttachmentCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cff354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734680);
}



/* Entry: 105cff364; end: 105cff3a3; -[SCSearchWebAttachmentCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cff364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112734680;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cff3a4; end: 105cff433; -[SCSearchWebAttachmentCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cff3a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734680,0);
  _objc_storeStrong(param_1 + _DAT_11273467c,0);
  _objc_storeStrong(param_1 + _DAT_112734678,0);
  _objc_storeStrong(param_1 + _DAT_11273466c,0);
  _objc_storeStrong(param_1 + _DAT_112734674,0);
  _objc_storeStrong(param_1 + _DAT_112734670,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734668,0);
  return;
}



/* Entry: 105cff434; end: 105cff58b;  */

/* WARNING: Possible PIC construction at 0x000105cff65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cff660) */
/* WARNING: Removing unreachable block (ram,0x000105cff6a4) */
/* WARNING: Removing unreachable block (ram,0x000105cff66c) */
/* WARNING: Removing unreachable block (ram,0x000105cff678) */
/* WARNING: Removing unreachable block (ram,0x000105cff648) */

void FUN_105cff434(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        puVar6 = *(undefined1 **)(lStack_118 + (long)puVar8 * 8);
        puVar3 = puVar6;
        func_0x00010c074c20();
        if (((ulong)puVar3 & 1) == 0) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110e28718;
          _NSClassFromString(&PTR____CFConstantStringClassReference_110e28718);
          puVar3 = puVar6;
          _objc_opt_isKindOfClass(puVar6,ppuVar4);
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar6);
            goto LAB_105cff548;
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar1 = puVar2;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  puVar6 = (undefined1 *)0x0;
LAB_105cff548:
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e28738;
    _NSClassFromString(&PTR____CFConstantStringClassReference_110e28738);
    puVar3 = (undefined1 *)puVar5;
    _objc_opt_isKindOfClass(puVar5,ppuVar4);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = (undefined1 *)puVar5;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf52a60();
      if (puVar6 != (undefined1 *)0x0) goto code_r0x00010bf1e800;
      _objc_release(puVar3);
      puVar6 = (undefined1 *)0x0;
    }
    else {
      _objc_retain(puVar5);
      puVar6 = (undefined1 *)puVar5;
    }
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
code_r0x00010bf1e800:
                    /* WARNING: Could not recover jumptable at 0x00010bf1e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105cff58c; end: 105cff6f3;  */

/* WARNING: Possible PIC construction at 0x000105cff65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cff660) */
/* WARNING: Removing unreachable block (ram,0x000105cff6a4) */
/* WARNING: Removing unreachable block (ram,0x000105cff66c) */
/* WARNING: Removing unreachable block (ram,0x000105cff678) */
/* WARNING: Removing unreachable block (ram,0x000105cff648) */

void FUN_105cff58c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e28738;
  _NSClassFromString(&PTR____CFConstantStringClassReference_110e28738);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,ppuVar1);
  if ((uVar4 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf52a60();
    if (uVar2 != 0) goto code_r0x00010bf1e800;
    _objc_release(uVar4);
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_3;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
code_r0x00010bf1e800:
                    /* WARNING: Could not recover jumptable at 0x00010bf1e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105cff6f4; end: 105cff6fb;  */

void FUN_105cff6f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_blurViewInView__1125a53a8,param_1);
  return;
}



/* Entry: 105cff6fc; end: 105cff7f3;  */

void FUN_105cff6fc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c0d6ca0();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c134680(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    (**(code **)(param_3 + 0x10))(param_3,0);
    puVar3 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
    func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cff7f4; end: 105cff8cb;  */

void FUN_105cff7f4(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain();
  func_0x00010c1e4680(0,param_1);
  func_0x00010c1a7f60(param_1);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1e4700(0x3f847ae140000000,0x3fb99999a0000000,param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_1);
  return;
}



/* Entry: 105cff8cc; end: 105cff94b;  */

void FUN_105cff8cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e4700(0x3fe8000000000000,0x401c000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cff94c; end: 105cffa4b;  */

void FUN_105cff94c(double param_1,undefined8 param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain();
  dVar2 = ABS(param_1 + -1.0);
  dVar3 = ABS(param_1 + 1.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar2) && (bVar1 = false, !NAN(dVar2) && !NAN(dVar3))) {
    bVar1 = dVar2 < dVar3;
  }
  if (bVar1) {
    func_0x00010c1e4680(0x3ff0000000000000,param_2);
    _objc_initWeak(auStack_38,param_2);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105cffa4c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100c749e0(0x3dcccccd,&UNK_10f33d2bf,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010c1e4680(param_1,param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105cffa4c; end: 105cffa7b;  */

void FUN_105cffa4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e4680(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cffa7c; end: 105cffd47;  */

undefined8 FUN_105cffa7c(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **ppuStack_78;
  uint uStack_6c;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 != (undefined **)0x0) && (param_2 != (undefined **)0x0)) {
    ppuVar1 = param_1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_2;
    func_0x00010bfe4420(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010c0720c0();
    if ((int)ppuVar3 != 0) {
      ppuVar3 = param_1;
      func_0x00010c104060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_2;
      func_0x00010c104060();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == ppuVar4) {
        ppuVar5 = param_1;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010c08fa60();
        if (ppuVar6 == (undefined **)0x0) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110dacf38;
        }
        else {
          ppuVar7 = param_1;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar8 = param_2;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c08fa60();
        if (ppuVar9 == (undefined **)0x0) {
          ppuVar10 = ppuVar7;
          func_0x00010c0720c0();
          if (((ulong)ppuVar10 & 1) != 0) goto LAB_105cffc18;
          uStack_6c = 0;
LAB_105cffcfc:
          _objc_release(ppuVar8);
        }
        else {
          ppuStack_78 = param_2;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar7;
          func_0x00010c0720c0();
          if ((int)ppuVar10 == 0) {
            uStack_6c = 0;
LAB_105cffcf4:
            _objc_release(ppuStack_78);
            goto LAB_105cffcfc;
          }
LAB_105cffc18:
          ppuVar10 = param_1;
          func_0x00010c11d080();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar11 = param_2;
            func_0x00010c11d080();
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar11 != (undefined **)0x0) goto LAB_105cffc4c;
            uStack_6c = 1;
LAB_105cffcec:
            _objc_release();
            if (ppuVar9 == (undefined **)0x0) goto LAB_105cffcfc;
            goto LAB_105cffcf4;
          }
LAB_105cffc4c:
          ppuVar11 = param_1;
          func_0x00010c11d080();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_2;
          func_0x00010c11d080(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar11;
          func_0x00010c0720c0();
          uStack_6c = (uint)ppuVar13;
          _objc_release(ppuVar12);
          _objc_release(ppuVar11);
          if (ppuVar10 == (undefined **)0x0) goto LAB_105cffcec;
          _objc_release(ppuVar10);
          if (ppuVar9 != (undefined **)0x0) {
            _objc_release(ppuStack_78);
          }
          _objc_release(ppuVar8);
        }
        if (ppuVar6 != (undefined **)0x0) {
          _objc_release(ppuVar7);
        }
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        if ((uStack_6c & 1) != 0) {
          uVar14 = 1;
          goto LAB_105cffb44;
        }
        goto LAB_105cffb40;
      }
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
LAB_105cffb40:
  uVar14 = 0;
LAB_105cffb44:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar14;
}



/* Entry: 105cffd48; end: 105cffebf;  */

void FUN_105cffd48(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0d3c80();
  _objc_release(ppuVar1);
  if ((ppuVar2 == (undefined **)0x0) ||
     (ppuVar1 = ppuVar2, func_0x00010bf529e0(), ppuVar1 == (undefined **)0x0)) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_105cffe98;
  }
  ppuVar1 = ppuVar2;
  func_0x00010c0dfd40(ppuVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010bf32ee0();
  if (ppuVar3 == (undefined **)0x0) {
LAB_105cffe50:
    _objc_release(ppuVar1);
LAB_105cffe58:
    func_0x00010c12d3c0(ppuVar2,param_2,0);
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x00010c0dfd40(ppuVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf32ee0();
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(ppuVar3);
      goto LAB_105cffe50;
    }
    ppuVar4 = ppuVar2;
    func_0x00010c0dfd40(ppuVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf32ee0();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
    if (ppuVar5 == (undefined **)0x0) goto LAB_105cffe58;
  }
  ppuVar3 = ppuVar2;
  func_0x00010bf446e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
LAB_105cffe98:
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105cffec0; end: 105d0000b;  */

bool FUN_105cffec0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c1504a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc8d78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc8d78,param_2,uVar2);
  if (ppuVar3 == (undefined **)0x0) {
    bVar1 = true;
  }
  else {
    uVar4 = param_1;
    func_0x00010c1504a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc8d58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc8d58,param_2,uVar4);
    bVar1 = ppuVar3 == (undefined **)0x0;
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105d0000c; end: 105d00377;  */

ulong FUN_105d0000c(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong unaff_x22;
  ulong uVar7;
  ulong unaff_x24;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar3 == 0) {
LAB_105d001a0:
    uVar7 = 0;
    goto LAB_105d002ac;
  }
  uVar2 = param_1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0720c0();
    if ((uVar7 & 1) != 0) {
      bVar1 = false;
LAB_105d000e8:
      uVar4 = param_1;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08fa60();
      _objc_release(uVar4);
      if (bVar1) {
        _objc_release(unaff_x24);
      }
      if ((uVar7 & 1) == 0) {
        _objc_release(unaff_x22);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (uVar5 == 0) goto LAB_105d001a0;
      goto LAB_105d00138;
    }
    unaff_x22 = param_1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x22;
    func_0x00010c0720c0();
    if ((uVar4 & 1) != 0) {
      bVar1 = false;
      goto LAB_105d000e8;
    }
    unaff_x24 = param_1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x24;
    func_0x00010c0720c0();
    if ((uVar4 & 1) != 0) {
      bVar1 = true;
      goto LAB_105d000e8;
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
    uVar7 = 0;
  }
  else {
    _objc_release(uVar2);
LAB_105d00138:
    _objc_retain(param_1);
    uVar2 = param_1;
    FUN_105cffec0();
    uVar7 = param_1;
    if ((int)uVar2 == 0) {
LAB_105d001a8:
      uVar2 = param_1;
      func_0x00010c1504a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110dd3c78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd3c78,param_2,uVar2);
      _objc_release(uVar2);
      if (ppuVar6 != (undefined **)0x0) {
LAB_105d001dc:
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105d001fc;
      }
      uVar2 = param_1;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fa60();
      _objc_release(uVar2);
      if (uVar3 == 0) goto LAB_105d001dc;
      uVar3 = param_1;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = param_1;
      func_0x00010c0f5860();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      if (uVar3 < 2) goto LAB_105d001a8;
      func_0x00010c0f5860();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
LAB_105d001fc:
      _objc_release(uVar7);
    }
    uVar2 = uVar3;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      uVar7 = 0;
      uVar2 = param_1;
    }
    else {
      uVar2 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110db3b58);
      if (((((uVar2 & 1) == 0) &&
           (uVar2 = uVar3,
           func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f83878),
           (uVar2 & 1) == 0)) &&
          (uVar2 = uVar3,
          func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e2c118),
          (uVar2 & 1) == 0)) &&
         ((uVar2 = uVar3,
          func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f83bf8),
          (uVar2 & 1) == 0 &&
          (uVar2 = uVar3,
          func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110dc7978),
          (uVar2 & 1) == 0)))) {
        uVar7 = uVar3;
        func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e09c38);
        uVar2 = param_1;
      }
      else {
        uVar7 = 1;
        uVar2 = param_1;
      }
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_105d002ac:
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 105d00378; end: 105d00493; -[SCSearchWebViewNavigationTracker initWithWebView:safeBrowsingChecker:circumstanceEngine:] */

undefined1 *
FUN_105d00378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126ecde0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c1cb840(*(undefined8 *)((long)puVar1 + 8));
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x00010be3aa80(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d00494; end: 105d004f7; -[SCSearchWebViewNavigationTracker dealloc] */

void FUN_105d00494(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x18));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x28));
  }
  puStack_28 = PTR_PTR_1126ecde0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105d004f8; end: 105d00507;  */

void FUN_105d004f8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105d00504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,0);
  return;
}



/* Entry: 105d00508; end: 105d00527; -[SCSearchWebViewNavigationTracker back] */

void FUN_105d00508(long param_1)

{
  func_0x00010bfcd2c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105d00528; end: 105d0056b; -[SCSearchWebViewNavigationTracker currentUrl] */

void FUN_105d00528(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bdc2b80(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d0056c; end: 105d008b3; -[SCSearchWebViewNavigationTracker webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_105d0056c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = uVar1;
    FUN_105d008b4();
    if ((int)uVar2 != 0) {
      uVar2 = uVar1;
      func_0x00010beec820(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d6ca0(param_4);
      func_0x00010bedc0e0(param_1);
      _objc_release(uVar2);
      FUN_105cff6fc(param_3,param_4,param_5);
      goto LAB_105d00864;
    }
    uVar3 = uVar1;
    FUN_105d0000c();
    uVar4 = uVar1;
    func_0x000105cfff60(uVar1,*(undefined8 *)(param_1 + 0x38));
    uVar2 = uVar1;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = uVar2;
    _objc_release(uVar5);
    if (((uVar4 & 1) == 0) && ((int)uVar3 == 0)) {
      lVar6 = param_1;
      func_0x00010be624a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar5);
        _objc_sync_enter(uVar5);
        lVar9 = *(long *)(param_1 + 0x28);
        uVar2 = uVar1;
        func_0x00010beec820(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar2);
        if (lVar9 == 0) {
          lVar9 = param_5;
          func_0x00010bf51e00();
          lVar7 = lVar9;
          _objc_retainBlock(lVar9);
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          uVar2 = uVar1;
          func_0x00010beec820(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar8);
          _objc_release(uVar2);
          _objc_release(lVar7);
          _objc_release(lVar9);
          _objc_sync_exit(uVar5);
          _objc_release(uVar5);
          func_0x00010bdde0c0(param_1);
        }
        else {
          (**(code **)(param_5 + 0x10))(param_5,0);
          _objc_sync_exit(uVar5);
          _objc_release(uVar5);
        }
      }
      else {
        lVar9 = param_1 + 0x48;
        _objc_loadWeakRetained(lVar9);
        func_0x00010c28fa80(lVar6);
        func_0x00010c2a4220(lVar9);
        _objc_release(lVar9);
        lVar9 = lVar6;
        func_0x00010c28fa80();
        if (lVar9 == 0) {
          uVar2 = uVar1;
          func_0x00010beec820(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d6ca0(param_4);
          func_0x00010bedc0e0(param_1);
          _objc_release(uVar2);
          FUN_105cff6fc(param_3,param_4,param_5);
        }
        else {
          (**(code **)(param_5 + 0x10))(param_5,0);
        }
      }
      _objc_release(lVar6);
      goto LAB_105d00864;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4260();
    _objc_release(param_1);
  }
  (**(code **)(param_5 + 0x10))(param_5,0);
LAB_105d00864:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d008b4; end: 105d00913;  */

undefined ** FUN_105d008b4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == &PTR____CFConstantStringClassReference_110de02d8) {
    ppuVar1 = (undefined **)0x1;
  }
  else {
    ppuVar1 = param_1;
    func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110de02d8);
  }
  _objc_release(param_1);
  return ppuVar1;
}



/* Entry: 105d00914; end: 105d00917; -[SCSearchWebViewNavigationTracker webView:didStartProvisionalNavigation:] */

void FUN_105d00914(void)

{
  return;
}



/* Entry: 105d00918; end: 105d0091b; -[SCSearchWebViewNavigationTracker webView:didReceiveServerRedirectForProvisionalNavigation:] */

void FUN_105d00918(void)

{
  return;
}



/* Entry: 105d0091c; end: 105d00957; -[SCSearchWebViewNavigationTracker webView:didFailProvisionalNavigation:withError:] */

void FUN_105d0091c(long param_1,undefined8 param_2)

{
  func_0x00010bed9080(param_1,param_2,0);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a4280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d00958; end: 105d009e3; -[SCSearchWebViewNavigationTracker webView:didCommitNavigation:] */

void FUN_105d00958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_105d008b4();
  func_0x00010bed9080(param_1,param_2,(uint)uVar2 ^ 1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf2cac0();
  _objc_release(param_3);
  *(char *)(param_1 + 0x40) = (char)uVar1;
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a4280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d009e4; end: 105d00a63; -[SCSearchWebViewNavigationTracker webView:didFailNavigation:withError:] */

void FUN_105d009e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_105d008b4();
  func_0x00010bed9080(param_1,param_2,(uint)uVar1 ^ 1);
  _objc_release(param_3);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2a4240(0);
  _objc_release(lVar2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a4280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d00a64; end: 105d00a77; -[SCSearchWebViewNavigationTracker _updateHasCommittedNavigation:] */

void FUN_105d00a64(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x30) != param_3) {
    *(char *)(param_1 + 0x30) = (char)param_3;
  }
  return;
}



/* Entry: 105d00a78; end: 105d00b53; -[SCSearchWebViewNavigationTracker _navigationItemForURL:] */

void FUN_105d00a78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_sync_enter(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105d00b54; end: 105d00c4f; -[SCSearchWebViewNavigationTracker _updateNavigationItem:] */

void FUN_105d00b54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_sync_enter(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,param_3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d00c50; end: 105d00e07; -[SCSearchWebViewNavigationTracker _checkSafeBrowsingForURL:webView:navigationAction:] */

void FUN_105d00c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105d00e08;
  puStack_80 = &UNK_1108e5518;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_copyWeak(auStack_a0,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf386c0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d00e08; end: 105d00e4f;  */

void FUN_105d00e08(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d00e50; end: 105d00e8b;  */

void FUN_105d00e50(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d00e8c; end: 105d010c7; -[SCSearchWebViewNavigationTracker _handleCheckResultForURL:webView:navigationAction:urlType:] */

void FUN_105d00e8c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010be624a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c3f50;
    _objc_alloc(PTR_PTR_1126c3f50);
    func_0x00010c05a320();
    func_0x00010bedc0c0(param_1);
  }
  else {
    puVar3 = puVar1;
    func_0x00010c28fa80();
    if (puVar3 == param_6) goto LAB_105d00fa0;
    puVar2 = PTR_PTR_1126c3f50;
    _objc_alloc(PTR_PTR_1126c3f50);
    puVar3 = puVar1;
    func_0x00010c28f340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a320(puVar2);
    func_0x00010bedc0c0(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  puVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(puVar3);
  func_0x00010c2a4220();
  _objc_release(puVar3);
LAB_105d00fa0:
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  _objc_sync_enter(uVar5);
  lVar7 = *(long *)(param_1 + 0x28);
  uVar4 = param_3;
  if (param_6 == (undefined *)0x0) {
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_105cff6fc(param_4,param_5,lVar7);
  }
  else {
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))();
  }
  _objc_release(lVar7);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar6);
  _objc_release(uVar4);
  _objc_sync_exit(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d010c8; end: 105d0121f; -[SCSearchWebViewNavigationTracker _initWebViewKVO] */

void FUN_105d010c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126b44c8;
  _objc_alloc();
  func_0x00010c030dc0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d01220;
  puStack_68 = &UNK_11086ffc8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0e0780(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0e0780(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105d01220; end: 105d0124b;  */

void FUN_105d01220(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beddfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d0124c; end: 105d012b7;  */

void FUN_105d0124c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a4280(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d012b8; end: 105d012f7; -[SCSearchWebViewNavigationTracker _updateProgress] */

void FUN_105d012b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf997e0(*(undefined8 *)(param_1 + 8));
  func_0x00010c2a4240(lVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d012f8; end: 105d01383; -[SCSearchWebViewNavigationTracker _updateNavigationTypesWithURLString:navigationType:] */

void FUN_105d012f8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if ((uVar1 != 0) &&
     (uVar1 = param_3, func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x58)),
     (uVar1 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x60) = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d01384; end: 105d0139b; -[SCSearchWebViewNavigationTracker delegate] */

void FUN_105d01384(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d0139c; end: 105d013a7; -[SCSearchWebViewNavigationTracker setDelegate:] */

void FUN_105d0139c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105d013a8; end: 105d013af; -[SCSearchWebViewNavigationTracker webView] */

undefined8 FUN_105d013a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d013b0; end: 105d013b7; -[SCSearchWebViewNavigationTracker hasCommittedNavigation] */

undefined1 FUN_105d013b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 105d013b8; end: 105d013bf; -[SCSearchWebViewNavigationTracker canGoBack] */

undefined1 FUN_105d013b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 105d013c0; end: 105d013c7; -[SCSearchWebViewNavigationTracker externalLink] */

undefined8 FUN_105d013c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105d013c8; end: 105d013f7; -[SCSearchWebViewNavigationTracker currentNavigationType] */

undefined1  [16] FUN_105d013c8(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  auVar2._8_8_ = *(undefined8 *)(param_1 + 0x60);
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 105d013f8; end: 105d01427; -[SCSearchWebViewNavigationTracker previousNavigationType] */

undefined1  [16] FUN_105d013f8(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
  auVar2._8_8_ = *(undefined8 *)(param_1 + 0x70);
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 105d01428; end: 105d014ab; -[SCSearchWebViewNavigationTracker .cxx_destruct] */

void FUN_105d01428(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


