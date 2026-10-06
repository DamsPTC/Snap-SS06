/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bc72b0; end: 105bc7577; -[SCFriendsFeedLargeActionButton _showStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105bc72b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
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
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112731650;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar17));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar3);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf49420(0x4053800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar17);
    uStack_88 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar17);
    uStack_80 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf493a0(uVar10,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar17);
    uStack_78 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010bf348e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar16);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_112731648);
}



/* Entry: 105bc7578; end: 105bc7587; -[SCFriendsFeedLargeActionButton buttonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc7578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731648);
}



/* Entry: 105bc7588; end: 105bc75c7; -[SCFriendsFeedLargeActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc7588(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731650,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273164c,0);
  return;
}



/* Entry: 105bc75c8; end: 105bc7747; -[SCFriendsFeedMainLabelView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bc75c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ec1f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1a00;
    _objc_opt_new();
    lVar5 = (long)_DAT_112731654;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c087500(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e00();
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b0648;
    _objc_opt_new();
    lVar5 = (long)_DAT_112731658;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010bfe8280(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa620(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11273165c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bc7748; end: 105bc7acf; -[SCFriendsFeedMainLabelView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc7748(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_130;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ec1f8;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_112731660;
  if (*(char *)(param_5 + lVar3) == '\x01') {
    func_0x00010be61b40(param_5);
    dVar9 = 5.0;
    if (*(char *)(param_5 + lVar3) == '\0') {
      dVar9 = 0.0;
    }
  }
  else {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar9 = 0.0;
  }
  func_0x00010bf20c00(param_5);
  dVar4 = param_3;
  dVar6 = param_4;
  func_0x00010bece420(param_5);
  func_0x00010bf20c00(param_5);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  dVar8 = ((dVar4 - dVar9) - param_1) - param_3;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105bc7ad0;
  uStack_a0 = 0x105bc7ae0;
  uStack_98 = 0;
  func_0x00010c0bd8e0(*(undefined8 *)(param_5 + _DAT_112731664));
  lVar2 = (long)_DAT_112731654;
  func_0x00010c16b720(*(undefined8 *)(param_5 + lVar2));
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(dVar4,dVar6,uVar1);
  func_0x00010bf20c00(param_5);
  if (dVar8 <= dVar4) {
    dVar4 = dVar8;
  }
  dVar7 = (double)(float)(int)dVar4;
  dStack_130 = *(double *)PTR__CGRectZero_110347608;
  dVar10 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar12 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar8 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  dVar4 = dVar12;
  dVar5 = dStack_130;
  dVar11 = dVar10;
  dVar13 = dVar8;
  if (*(char *)(param_5 + lVar3) == '\x01') {
    dVar5 = 0.0;
    dVar4 = dVar6;
    _CGRectGetMaxX(0,0,dVar7,dVar6);
    func_0x00010bf20c00(param_5);
    dVar5 = dVar9 + dVar5;
    dVar11 = dVar4 * 0.5 + param_2 * -0.5 + -0.5;
    dVar4 = param_1;
    dVar13 = param_2;
  }
  lVar3 = *(long *)(param_5 + _DAT_112731670);
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    dVar10 = 0.0;
    _CGRectGetMaxX(0,0,dVar7,dVar6);
    dVar8 = dVar5;
    dVar12 = dVar13;
    _CGRectGetWidth(dVar5,dVar11,dVar4,dVar13);
    func_0x00010bf20c00(param_5);
    dStack_130 = dVar9 + dVar10 + dVar8;
    dVar10 = (dVar12 * 0.5 - param_4 * 0.5) + 0.5;
    dVar8 = param_4;
    dVar12 = param_3;
  }
  func_0x00010b8166f8(0,0,dVar7,dVar6,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010b8166f8(dVar5,dVar11,dVar4,dVar13,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112731658));
  func_0x00010b8166f8(dStack_130,dVar10,dVar12,dVar8,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11273165c));
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  return;
}



/* Entry: 105bc7ad0; end: 105bc7ae7;  */

void FUN_105bc7ad0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bc7ae8; end: 105bc7b1f;  */

void FUN_105bc7ae8(long param_1,undefined8 param_2)

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



/* Entry: 105bc7b20; end: 105bc7c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc7b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = (long)_DAT_112731668;
  lVar1 = (long)_DAT_11273166c;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1);
  _objc_retain(param_2);
  uVar2 = param_3;
  func_0x000107cf7ddc(param_3,uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x000108ef620c(*(undefined8 *)(param_1 + 0x30),param_2,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  func_0x000107cf8218(uVar5,param_3,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar6;
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bc7c04; end: 105bc7dc7; -[SCFriendsFeedMainLabelView setViewModel:badgeType:isMuted:trailingString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc7c04(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  ulong param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar5 = (long)_DAT_112731664;
  lVar4 = *(long *)(param_1 + lVar5);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  if (lVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar4);
LAB_105bc7ca0:
    lVar4 = *(long *)(param_1 + _DAT_112731654);
    func_0x00010bf15520();
    if ((lVar4 == param_4) && (*(byte *)(param_1 + _DAT_112731660) == param_5)) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11273165c);
      func_0x00010bf0e540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_6;
      func_0x00010c071b80(param_6,param_2,uVar3);
      _objc_release(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_105bc7da4;
    }
  }
  else if (param_3 == 0) {
    _objc_release(lVar4);
  }
  else {
    lVar1 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,param_3);
    _objc_release(param_3);
    _objc_release(lVar4);
    if ((int)lVar1 != 0) goto LAB_105bc7ca0;
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar3);
  func_0x00010c16eda0(*(undefined8 *)(param_1 + _DAT_112731654),param_2,param_4);
  *(char *)(param_1 + _DAT_112731660) = (char)param_5;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112731658),param_2,param_5 ^ 1);
  lVar4 = (long)_DAT_112731670;
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(ulong *)(param_1 + lVar4) = param_6;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010c08fa60(lVar4);
  lVar5 = (long)_DAT_11273165c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,lVar4 == 0);
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5),param_2,param_6);
  func_0x00010c1cbe20(param_1);
  func_0x00010c069fa0(param_1);
LAB_105bc7da4:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc7dc8; end: 105bc7eff; +[SCFriendsFeedMainLabelView lineHeightForViewModel:friendsFeedFontSizeVariant:enableAvenirNextVariable:] */

undefined8
FUN_105bc7dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0bd8e0(param_3);
  uVar1 = puStack_58[3];
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105bc7f00; end: 105bc7f7b;  */

void FUN_105bc7f00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x00010c23d0a0(param_4);
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105bc7f7c; end: 105bc7fef; -[SCFriendsFeedMainLabelView _mutedImageViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105bc7f7c(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c0992a0(PTR_PTR_1126c2e00,param_3,*(undefined8 *)(param_2 + _DAT_112731664),
                      *(undefined8 *)(param_2 + _DAT_112731668),
                      *(undefined8 *)(param_2 + _DAT_11273166c));
  dVar2 = param_1 * 0.62;
  func_0x00010b816218();
  dVar1 = (double)(long)(dVar2 * param_1) / param_1;
  func_0x00010b816218();
  auVar3._8_8_ = (double)(long)(dVar2 * param_1) / param_1;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 105bc7ff0; end: 105bc805f; -[SCFriendsFeedMainLabelView _trailingStringLabelSizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105bc7ff0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_3 + _DAT_112731670);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,*(undefined8 *)(param_3 + _DAT_11273165c),
               PTR_s_sizeThatFits__11266cf90);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 105bc8060; end: 105bc806f; -[SCFriendsFeedMainLabelView friendsFeedFontSizeVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc8060(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731668);
}



/* Entry: 105bc8070; end: 105bc80af; -[SCFriendsFeedMainLabelView setFriendsFeedFontSizeVariant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731668;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc80b0; end: 105bc80bf; -[SCFriendsFeedMainLabelView enableAvenirNextVariable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc80b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273166c);
}



/* Entry: 105bc80c0; end: 105bc80ff; -[SCFriendsFeedMainLabelView setEnableAvenirNextVariable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc80c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273166c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc8100; end: 105bc818f; -[SCFriendsFeedMainLabelView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8100(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273166c,0);
  _objc_storeStrong(param_1 + _DAT_112731668,0);
  _objc_storeStrong(param_1 + _DAT_112731670,0);
  _objc_storeStrong(param_1 + _DAT_112731664,0);
  _objc_storeStrong(param_1 + _DAT_11273165c,0);
  _objc_storeStrong(param_1 + _DAT_112731658,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731654,0);
  return;
}



/* Entry: 105bc8190; end: 105bc828f; -[SCFriendsFeedMerlinButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bc8190(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bc20(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112731674;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c1af000(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bc8290; end: 105bc832b; -[SCFriendsFeedMerlinButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8290(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec200;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  dVar2 = 0.0;
  _CGRectIntegral(0,0,0x4038000000000000,0x4038000000000000);
  lVar1 = (long)_DAT_112731674;
  func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  dVar3 = dVar2 * 0.5;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  func_0x00010c17a6a0(dVar3,dVar2 * 0.5,*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 105bc832c; end: 105bc833f; -[SCFriendsFeedMerlinButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc832c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731674,0);
  return;
}



/* Entry: 105bc8340; end: 105bc840b; -[SCFriendsFeedPeekAPeekView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bc8340(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    if (lRam00000001136c1c48 != -1) {
      func_0x00010002a2fc(0x1136c1c48,&PTR___NSConcreteGlobalBlock_1108db500);
    }
    uVar1 = uRam00000001136c1c40;
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_retain(uRam00000001136c1c40);
    _objc_alloc();
    func_0x00010c01bf60();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112731678);
    *(undefined **)((long)puVar2 + (long)_DAT_112731678) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar2);
    _objc_release(uVar1);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 105bc840c; end: 105bc8463; -[SCFriendsFeedPeekAPeekView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc840c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec208;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112731678));
  return;
}



/* Entry: 105bc8464; end: 105bc8477; -[SCFriendsFeedPeekAPeekView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731678,0);
  return;
}



/* Entry: 105bc8478; end: 105bc855f;  */

void FUN_105bc8478(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc();
  func_0x00010c0469e0(0x4038000000000000,0x4038000000000000);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105bc8560;
  puStack_58 = &UNK_1108db520;
  uStack_40 = 0;
  uStack_38 = 0;
  auVar5 = NEON_fmov(0x4038000000000000,8);
  uStack_28 = auVar5._8_8_;
  uStack_30 = auVar5._0_8_;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dcb4f8;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  puVar4 = puVar3;
  func_0x00010bfe91c0(puVar3,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c1c40;
  puRam00000001136c1c40 = puVar4;
  _objc_release(uVar1);
  _objc_release(puStack_48);
  _objc_release(ppuStack_50);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105bc8560; end: 105bc8607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105bc8560(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf897e0(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_a0;
  puStack_98 = PTR_PTR_1126ec210;
  puStack_a0 = puVar1;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_initWithFrame__1125e2948);
  if (ppuVar2 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_11273167c;
    uVar5 = *(undefined8 *)((long)ppuVar2 + lVar6);
    *(undefined **)((long)ppuVar2 + lVar6) = puVar1;
    _objc_release(uVar5);
    func_0x00010c165e00(*(undefined8 *)((long)ppuVar2 + lVar6));
    ppuVar3 = &PTR____CFConstantStringClassReference_110db3738;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)ppuVar2 + lVar6));
    _objc_release(ppuVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)ppuVar2 + lVar6));
    _objc_release(puVar1);
    func_0x000105bc9bfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)ppuVar2 + lVar6));
    _objc_release(puVar1);
    lVar6 = (long)_DAT_112731680;
    FUN_105bc9c0c();
    *(undefined8 *)((long)ppuVar2 + lVar6) = uVar8;
    ((undefined8 *)((long)ppuVar2 + lVar6))[1] = uVar9;
    func_0x00010befbb60(ppuVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_112731684;
    uVar5 = *(undefined8 *)((long)ppuVar2 + lVar7);
    *(undefined **)((long)ppuVar2 + lVar7) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar2 + lVar7));
    _objc_release(puVar1);
    func_0x00010befbb60(ppuVar2);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = (undefined1 *)ppuVar2;
    func_0x00010be36a60(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_112731688;
    uVar5 = *(undefined8 *)((long)ppuVar2 + lVar6);
    *(undefined **)((long)ppuVar2 + lVar6) = puVar1;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar2 + lVar6));
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)ppuVar2 + lVar7));
  }
  return (undefined *)ppuVar2;
}



/* Entry: 105bc8608; end: 105bc880f; -[SCFriendsFeedRetryButtonView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bc8608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ec210;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_11273167c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c165e00(*(undefined8 *)((long)puVar1 + lVar6));
    ppuVar3 = &PTR____CFConstantStringClassReference_110db3738;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(ppuVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x000105bc9bfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    lVar6 = (long)_DAT_112731680;
    FUN_105bc9c0c();
    *(undefined8 *)((long)puVar1 + lVar6) = param_1;
    ((undefined8 *)((long)puVar1 + lVar6))[1] = param_2;
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_112731684;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be36a60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_112731688;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bc8810; end: 105bc8993; -[SCFriendsFeedRetryButtonView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8810(double param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ec210;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar6 = param_1 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  lVar3 = (long)_DAT_11273167c;
  func_0x00010c17a6a0(dVar6,(param_1 + 30.0 + 4.0) * 0.5,*(undefined8 *)(param_2 + lVar3));
  puVar1 = (undefined8 *)(param_2 + _DAT_112731680);
  dVar4 = 0.0;
  _CGRectIntegral(0,0,*puVar1,puVar1[1]);
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar5 = (double)puVar1[1];
  _CGRectIntegral(0,0,0x4040800000000000,0x4040800000000000);
  lVar3 = (long)_DAT_112731684;
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c17a6a0(dVar6,(dVar4 - dVar5) * 0.5,*(undefined8 *)(param_2 + lVar3));
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = 16.5;
  func_0x00010c1842e0(0x4030800000000000);
  _objc_release(uVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetWidth();
  dVar5 = dVar4 * 0.5;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetHeight();
  lVar3 = (long)_DAT_112731688;
  func_0x00010c17a6a0(dVar5,dVar4 * 0.5,*(undefined8 *)(param_2 + lVar3));
  _CGRectIntegral(0,0,0x4038000000000000,0x4038000000000000);
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 105bc8994; end: 105bc8a2f; -[SCFriendsFeedRetryButtonView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ec210;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11273167c));
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731684));
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731688));
  _objc_release(param_3);
  return;
}



/* Entry: 105bc8a30; end: 105bc8a63; -[SCFriendsFeedRetryButtonView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105bc8a30(long param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar2 = *(double *)(param_1 + _DAT_112731680);
  dVar1 = 33.0;
  if (33.0 <= dVar2) {
    dVar1 = dVar2;
  }
  auVar3._8_8_ = ((double *)(param_1 + _DAT_112731680))[1] + 30.0 + 2.0;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 105bc8a64; end: 105bc8adf; -[SCFriendsFeedRetryButtonView _iconRefreshOutlineImage] */

void FUN_105bc8a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x12,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bc8ae0; end: 105bc8b2f; -[SCFriendsFeedRetryButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8ae0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273167c,0);
  _objc_storeStrong(param_1 + _DAT_112731688,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731684,0);
  return;
}



/* Entry: 105bc8b30; end: 105bc8bc7; -[SCFriendsFeedUnifiedActionButtonView _compactButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8b30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273168c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25ce0(PTR_PTR_1126aec40,param_2,4,&PTR___NSConcreteGlobalBlock_1108db570);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105bc8bc8; end: 105bc8cdf; -[SCFriendsFeedUnifiedActionButtonView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bc8bc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar4 = (long)_DAT_112731690;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar5 = (long)_DAT_112731694;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c165e00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126b0648;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731698);
    *(undefined **)((long)puVar1 + (long)_DAT_112731698) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bc8ce0; end: 105bc9267; -[SCFriendsFeedUnifiedActionButtonView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc8ce0(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11273169c;
  uVar8 = *(ulong *)(param_1 + lVar10);
  _objc_retain(uVar8);
  _objc_retain(param_3);
  if (uVar8 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar8);
    }
    else {
      uVar2 = uVar8;
      func_0x00010c071ae0(uVar8,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar8);
      if ((uVar2 & 1) != 0) goto LAB_105bc9244;
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    *(ulong *)(param_1 + lVar10) = param_3;
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
    func_0x00010c294960();
    if (iVar1 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_11273168c),param_2,1);
      lVar9 = (long)_DAT_112731690;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,0);
      func_0x00010c161020(param_1,param_2,0);
      lVar11 = (long)_DAT_112731694;
      func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
      lVar4 = *(long *)(param_1 + lVar10);
      func_0x00010bf13d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9),param_2,0);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010bf13d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9),param_2,uVar3);
        _objc_release(uVar3);
      }
      lVar4 = *(long *)(param_1 + lVar10);
      func_0x00010bf1fb20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x00010c1733a0(0,uVar3);
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173280();
      }
      else {
        func_0x00010c1733a0(0x3ff0000000000000,uVar3);
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010bf1fb20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        uVar5 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c08c0e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173280();
        _objc_release(uVar5);
      }
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + lVar10);
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11),param_2,0);
        func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar11),param_2,0);
        func_0x00010c213180(*(undefined8 *)(param_1 + lVar11),param_2,0);
      }
      else {
        func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar11),param_2,7);
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c26b700(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11),param_2,uVar3);
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c26b920(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(param_1 + lVar11),param_2,uVar3);
        _objc_release(uVar3);
      }
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11),param_2,lVar4 == 0);
      uVar8 = param_3;
      func_0x00010bfe5b00();
      puVar7 = PTR_PTR_1126ae6b8;
      if (uVar8 == 0) {
        lVar10 = (long)_DAT_112731698;
        func_0x00010c1aa620(*(undefined8 *)(param_1 + lVar10),param_2,0);
        func_0x00010c216160(*(undefined8 *)(param_1 + lVar10),param_2,0);
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,1);
      }
      else {
        puVar6 = PTR_PTR_1126ae790;
        func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_105bc9268;
        puStack_60 = &UNK_110853e70;
        _objc_retain(param_3);
        uStack_58 = param_3;
        func_0x00010bfe8340(puVar7,param_2,puVar6,&puStack_78);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        lVar4 = (long)_DAT_112731698;
        func_0x00010c1aa620(*(undefined8 *)(param_1 + lVar4),param_2,puVar7);
        puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010bfe7120(uVar3);
        func_0x00010c23ba80(puVar6,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216160(*(undefined8 *)(param_1 + lVar4),param_2,puVar6);
        _objc_release(puVar6);
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
        _objc_release(puVar7);
        _objc_release(uStack_58);
      }
      uVar8 = param_3;
      func_0x00010beecea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c08fa60();
      func_0x00010c1af000(param_1,param_2,uVar2 != 0);
      _objc_release(uVar8);
      uVar8 = param_3;
      func_0x00010beecea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(param_1,param_2,uVar8);
      _objc_release(uVar8);
      func_0x00010c069fa0(param_1);
      goto LAB_105bc9244;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_112731690),param_2,1);
    uVar8 = param_1;
    func_0x00010bde26a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    _objc_retain(uVar8);
    func_0x00010c26b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar8,param_2,uVar3,0);
    _objc_release(uVar3);
    func_0x00010c16e480(uVar8,param_2,0xd2,0);
    func_0x00010c216380(uVar8,param_2,0xd5,0);
    func_0x00010c165e00(uVar8,param_2,0);
    _objc_release(uVar8);
    func_0x00010c1af000(param_1,param_2,1);
    uVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(param_1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010beecea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c1aa620(*(undefined8 *)(param_1 + (long)_DAT_112731698),param_2,0);
    func_0x00010c069fa0(param_1);
  }
  _objc_release(uVar8);
LAB_105bc9244:
  _objc_release(param_3);
  return;
}



/* Entry: 105bc9268; end: 105bc92eb;  */

void FUN_105bc9268(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126b0c40;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5b00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe7120(uVar2);
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105bc92ec; end: 105bc965f; -[SCFriendsFeedUnifiedActionButtonView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc92ec(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ec218;
  lStack_80 = param_2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar5 = (long)_DAT_11273169c;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar5);
  func_0x00010c294960();
  if (iVar1 == 0) {
    func_0x00010bfe08a0(PTR_PTR_1126c2e50);
    dVar7 = param_1;
    func_0x00010c0c3220(PTR_PTR_1126c2e50);
    dVar8 = 0.0;
    _CGRectIntegral(0,0,dVar7,param_1);
    lVar6 = (long)_DAT_112731690;
    func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar6));
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar7 = dVar8 * 0.5;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    dVar9 = dVar8 * 0.5;
    func_0x00010b816218();
    dVar7 = (double)(long)(dVar7 * dVar8) / dVar8;
    func_0x00010b816218();
    func_0x00010c17a6a0(dVar7,(double)(long)(dVar9 * dVar8) / dVar8,*(undefined8 *)(param_2 + lVar6)
                       );
    lVar3 = *(long *)(param_2 + lVar5);
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    dVar7 = 0.0;
    if (lVar3 != 0) {
      dVar7 = param_1 * 0.5;
    }
    uVar2 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar7);
    _objc_release(uVar2);
    func_0x00010c2a5160(PTR_PTR_1126c2e50);
    lVar3 = *(long *)(param_2 + lVar5);
    dVar8 = dVar7;
    func_0x00010bfe5b00();
    dVar9 = dVar7;
    if (lVar3 != 0) {
      dVar8 = 12.0;
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
      _CGRectGetHeight();
      dVar10 = dVar8 * 0.5;
      func_0x00010b816218();
      dVar9 = (double)(long)((dVar7 + 12.0) * dVar8) / dVar8;
      func_0x00010b816218();
      _CGRectIntegral(0,0,0x4038000000000000,0x4038000000000000);
      lVar3 = (long)_DAT_112731698;
      func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
      func_0x00010c17a6a0(dVar9,(double)(long)(dVar10 * dVar8) / dVar8,
                          *(undefined8 *)(param_2 + lVar3));
      dVar8 = dVar7 + 24.0;
      dVar9 = dVar8 + 2.0;
    }
    lVar3 = *(long *)(param_2 + lVar5);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar5 != 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
      _CGRectGetWidth();
      dVar7 = (dVar8 - dVar9) - dVar7;
      dVar8 = dVar7 * 0.5;
      dVar9 = dVar9 + dVar8;
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
      _CGRectGetHeight();
      dVar10 = dVar8 * 0.5;
      func_0x00010b816218();
      dVar9 = (double)(long)(dVar9 * dVar8) / dVar8;
      func_0x00010b816218();
      lVar5 = (long)_DAT_112731694;
      func_0x00010c1739e0(0,0,dVar7,0x4038000000000000,*(undefined8 *)(param_2 + lVar5));
      func_0x00010c17a6a0(dVar9,(double)(long)(dVar10 * dVar8) / dVar8,
                          *(undefined8 *)(param_2 + lVar5));
    }
    puVar4 = PTR_PTR_1126c2e38;
    func_0x00010bdc2b00();
    if (puVar4 == (undefined *)0x1) {
      func_0x00010be97c40(param_2);
    }
  }
  else {
    lVar3 = param_2;
    func_0x00010bde26a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_105bc9660();
    _objc_release(uVar2);
    dVar7 = 0.0;
    _CGRectIntegral(0,0,param_1,0x403c000000000000);
    func_0x00010c1739e0(lVar3);
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar8 = dVar7 * 0.5;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    dVar9 = dVar7 * 0.5;
    func_0x00010b816218();
    dVar8 = (double)(long)(dVar8 * dVar7) / dVar7;
    func_0x00010b816218();
    func_0x00010c17a6a0(dVar8,(double)(long)(dVar9 * dVar7) / dVar7,lVar3);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 105bc9660; end: 105bc96f3;  */

undefined8 FUN_105bc9660(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c23b9c0(param_2,param_3,7);
    iVar1 = (int)lVar2;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release();
    func_0x0001007f8afc();
    uVar3 = 0x4069000000000000;
    if (iVar1 == 0) {
      uVar3 = 0x4056000000000000;
    }
    uVar3 = NEON_fminnm(param_1 + 24.0,uVar3);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105bc96f4; end: 105bc9787; -[SCFriendsFeedUnifiedActionButtonView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105bc96f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = (long)_DAT_11273169c;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar3);
  func_0x00010c294960();
  if (iVar1 == 0) {
    func_0x00010c0c3220(PTR_PTR_1126c2e50,param_3,*(undefined8 *)(param_2 + lVar3));
    uVar2 = param_1;
    func_0x00010bfe08a0(PTR_PTR_1126c2e50,param_3,*(undefined8 *)(param_2 + lVar3));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_105bc9660();
    _objc_release(uVar2);
    uVar2 = 0x403c000000000000;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 105bc9788; end: 105bc9873; -[SCFriendsFeedUnifiedActionButtonView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc9788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_1126ec218;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273169c);
    func_0x00010bf1fb20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112731690);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 105bc9874; end: 105bc98cf; -[SCFriendsFeedUnifiedActionButtonView _rtlSubviews] */

/* WARNING: Possible PIC construction at 0x000105bc98a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105bc98ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc9874(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112731698;
  func_0x00010b81694c(*(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + _DAT_112731690));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 105bc98d0; end: 105bc98fb; +[SCFriendsFeedUnifiedActionButtonView heightForViewModel:] */

undefined8 FUN_105bc98d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c294960();
  uVar1 = 0x403c000000000000;
  if (param_3 == 0) {
    uVar1 = 0x4044000000000000;
  }
  return uVar1;
}



/* Entry: 105bc98fc; end: 105bc9a97; +[SCFriendsFeedUnifiedActionButtonView maxWidthForViewModel:] */

double FUN_105bc98fc(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c294960();
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5b00();
    dVar3 = 24.0;
    dVar5 = 0.0;
    dVar4 = 0.0;
    if (uVar1 != 0) {
      dVar4 = 24.0;
    }
    uVar1 = param_4;
    func_0x00010bfe5b00();
    if (uVar1 != 0) {
      uVar1 = param_4;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c08fa60();
      dVar3 = 2.0;
      dVar5 = 0.0;
      if (uVar2 != 0) {
        dVar5 = 2.0;
      }
      _objc_release(uVar1);
    }
    func_0x00010c2a5160(PTR_PTR_1126c2e50,param_3,param_4);
    param_1 = dVar4 + dVar5 + dVar3 * 2.0;
    uVar1 = param_4;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = param_4;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c23b9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      param_1 = param_1 + dVar3;
      _objc_release(uVar2);
      _objc_release();
      func_0x0001007f8afc();
      if (((int)uVar1 == 0) || (dVar3 = 200.0, param_1 <= 200.0)) {
        func_0x0001007f8afc();
        if (((uVar1 & 1) == 0) && (98.0 < param_1)) {
          param_1 = 98.0;
          goto LAB_105bc9a78;
        }
        dVar3 = 60.0;
        if (60.0 <= param_1) goto LAB_105bc9a78;
      }
      param_1 = dVar3;
    }
  }
  else {
    uVar1 = param_4;
    func_0x00010c26b700(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_105bc9660();
    _objc_release(uVar1);
  }
LAB_105bc9a78:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105bc9a98; end: 105bc9b6f; +[SCFriendsFeedUnifiedActionButtonView widthPaddingForViewModel:] */

undefined8 FUN_105bc9a98(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c294960();
  uVar3 = 0;
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_3;
      func_0x00010bfe5b00();
      _objc_release(uVar1);
      uVar3 = 0x4028000000000000;
      if (uVar2 != 0) goto LAB_105bc9b50;
    }
    uVar1 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    uVar3 = 0x4030000000000000;
    if (uVar2 == 0) {
      uVar1 = param_3;
      func_0x00010bfe5b00();
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = 0x4020000000000000;
      }
    }
  }
LAB_105bc9b50:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105bc9b70; end: 105bc9b7f; -[SCFriendsFeedUnifiedActionButtonView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc9b70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273169c);
}



/* Entry: 105bc9b80; end: 105bc9bef; -[SCFriendsFeedUnifiedActionButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc9b80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273169c,0);
  _objc_storeStrong(param_1 + _DAT_11273168c,0);
  _objc_storeStrong(param_1 + _DAT_112731698,0);
  _objc_storeStrong(param_1 + _DAT_112731694,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731690,0);
  return;
}



/* Entry: 105bc9bf0; end: 105bc9c0b;  */

void FUN_105bc9bf0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 105bc9c0c; end: 105bc9c4f;  */

undefined1  [16] FUN_105bc9c0c(void)

{
  if (lRam00000001136c1c60 != -1) {
    func_0x00010002a2fc(0x1136c1c60,&PTR___NSConcreteGlobalBlock_1108db590);
  }
  return auRam00000001136c1c50;
}



/* Entry: 105bc9c50; end: 105bc9ccf;  */

void FUN_105bc9c50(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x7fefffffffffffff;
  uVar4 = 0x7fefffffffffffff;
  func_0x00010c14dd00(ppuVar1);
  uRam00000001136c1c50 = uVar3;
  uRam00000001136c1c58 = uVar4;
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105bc9cd0; end: 105bc9d13;  */

undefined1  [16] FUN_105bc9cd0(void)

{
  if (lRam00000001136c1c78 != -1) {
    func_0x00010002a2fc(0x1136c1c78,&PTR___NSConcreteGlobalBlock_1108db5b0);
  }
  return auRam00000001136c1c68;
}



/* Entry: 105bc9d14; end: 105bc9d93;  */

void FUN_105bc9d14(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e20838;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20838,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x7fefffffffffffff;
  uVar4 = 0x7fefffffffffffff;
  func_0x00010c14dd00(ppuVar1);
  uRam00000001136c1c68 = uVar3;
  uRam00000001136c1c70 = uVar4;
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105bc9d94; end: 105bc9f2b; -[SCFriendsFeedShortcutButton initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bc9d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ec220;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127316a0),param_3);
    puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_opt_new();
    lVar4 = (long)_DAT_1127316a4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(uVar3);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    puVar2 = PTR_PTR_1126c2e30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_1127316a8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010be3b5e0(puVar1);
    func_0x00010be3bce0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bc9f2c; end: 105bca20b; -[SCFriendsFeedShortcutButton _initializeIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc9f2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e209d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010bfe9720(puVar1,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar2,param_2,puVar3);
  lVar12 = (long)_DAT_1127316ac;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar10);
  _objc_release(puVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar12),param_2,1);
  func_0x00010c216140(*(undefined8 *)(param_1 + lVar12),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar12),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127316a8),param_2,
                      *(undefined8 *)(param_1 + lVar12));
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493c0(0x402e000000000000,uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127316b0;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = uVar10;
  _objc_release(uVar11);
  _objc_release(lVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_1127316b4;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = uVar10;
  _objc_release(uVar11);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127316b8;
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = uVar10;
  _objc_release(uVar11);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = *(undefined8 *)(param_1 + lVar14);
  uStack_70 = *(undefined8 *)(param_1 + lVar15);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar13 = (long)_DAT_1127316bc;
  uVar10 = *(undefined8 *)(puVar1 + lVar13);
  *(undefined **)(puVar1 + lVar13) = puVar2;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar13),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar1 + lVar13),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar1 + lVar13),param_2,1);
  func_0x00010c165e20(*(undefined8 *)(puVar1 + lVar13),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar1 + lVar13),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(*(undefined8 *)(puVar1 + lVar13),param_2,0x1a);
  func_0x00010befbb60(*(undefined8 *)(puVar1 + _DAT_1127316a8),param_2,
                      *(undefined8 *)(puVar1 + lVar13));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(puVar1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar1 + _DAT_1127316ac);
  func_0x00010c2793a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bf493c0(0x4018000000000000,lVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + lVar13);
  lStack_118 = lVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar1 + lVar13);
  uStack_110 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar1 + lVar13);
  uStack_108 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_118,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(lVar12);
  _objc_release(uVar6);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = lVar5 + _DAT_1127316a0;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf7d4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105bca20c; end: 105bca49b; -[SCFriendsFeedShortcutButton _initializeText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bca20c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar13 = (long)_DAT_1127316bc;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar13),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar13),param_2,1);
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar13),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar13),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar13),param_2,0x1a);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127316a8),param_2,
                      *(undefined8 *)(param_1 + lVar13));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127316ac);
  func_0x00010c2793a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4018000000000000,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  lStack_88 = lVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar2 + _DAT_1127316a0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf7d4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105bca49c; end: 105bca4cf; -[SCFriendsFeedShortcutButton handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bca49c(long param_1)

{
  param_1 = param_1 + _DAT_1127316a0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bca4d0; end: 105bca5eb; -[SCFriendsFeedShortcutButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bca4d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  double in_d3;
  double dVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ec220;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  dVar5 = in_d3 * 0.5;
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar5);
  _objc_release(lVar4);
  func_0x00010bf20c00(param_1);
  lVar4 = (long)_DAT_1127316a8;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b08d8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4010000000000000,0x3fc999999999999a,0,0x4008000000000000,puVar1,param_1,
                      puVar3);
  _objc_release(puVar3);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 105bca5ec; end: 105bca73f; -[SCFriendsFeedShortcutButton setViewModel:] */

void FUN_105bca5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_b0 [8];
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
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105bca740;
  puStack_68 = &UNK_1108db5d0;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x105bca784;
  puStack_90 = &UNK_1108681f8;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_copyWeak(auStack_b0,auStack_58);
  func_0x00010c0bcac0(param_3);
  func_0x00010c1cbe20(param_1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105bca740; end: 105bca7fb;  */

void FUN_105bca740(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010be041a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bca7fc; end: 105bca867; -[SCFriendsFeedShortcutButton _displayBatchCameraReplyButton:iconSize:] */

void FUN_105bca7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bed4540(param_2,param_3,0x6c);
  func_0x00010bed9800(param_2);
  func_0x00010bea7740(param_2);
  func_0x00010bed9560(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed9530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__updateIcon_size__112593ef0,
             &PTR____CFConstantStringClassReference_110e209d8);
  return;
}



/* Entry: 105bca868; end: 105bca8cb; -[SCFriendsFeedShortcutButton _displayNewGroupButtonWithIconSize:] */

void FUN_105bca868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bed4540(param_2,param_3,0x6c);
  func_0x00010bed9800(param_2);
  func_0x00010bea7740(param_2);
  func_0x00010bed9560(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed9530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__updateIcon_size__112593ef0,
             &PTR____CFConstantStringClassReference_110e209f8);
  return;
}



/* Entry: 105bca8cc; end: 105bca92f; -[SCFriendsFeedShortcutButton _displayNewCallButtonWithIconSize:] */

void FUN_105bca8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bed4540(param_2,param_3,0x62);
  func_0x00010bed9800(param_2);
  func_0x00010bea7740(param_2);
  func_0x00010bed9560(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed9530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__updateIcon_size__112593ef0,
             &PTR____CFConstantStringClassReference_110e20878);
  return;
}



/* Entry: 105bca930; end: 105bca9db; -[SCFriendsFeedShortcutButton _setShortcutRecipientCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bca930(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127316a4);
    _objc_retain(uVar3);
    func_0x00010c0df840(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c25d4c0(uVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127316bc),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bca9dc; end: 105bcaa7b; -[SCFriendsFeedShortcutButton _updateIcon:size:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bca9dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_2 + _DAT_1127316ac),param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c181140(param_1,*(undefined8 *)(param_2 + _DAT_1127316b8));
  func_0x00010c181140(param_1,*(undefined8 *)(param_2 + _DAT_1127316b4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bcaa7c; end: 105bcaa9b; -[SCFriendsFeedShortcutButton _updateIconConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcaa7c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x402e000000000000;
  if (param_3 == 0) {
    uVar1 = 0x4034000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_1127316b0),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 105bcaa9c; end: 105bcaae7; -[SCFriendsFeedShortcutButton _updateButtonBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcaa9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127316a8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bcaae8; end: 105bcab33; -[SCFriendsFeedShortcutButton _updateImageTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcaae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_1127316ac),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bcab34; end: 105bcabcf; -[SCFriendsFeedShortcutButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcab34(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127316a0);
  _objc_storeStrong(param_1 + _DAT_1127316b4,0);
  _objc_storeStrong(param_1 + _DAT_1127316b8,0);
  _objc_storeStrong(param_1 + _DAT_1127316b0,0);
  _objc_storeStrong(param_1 + _DAT_1127316bc,0);
  _objc_storeStrong(param_1 + _DAT_1127316a4,0);
  _objc_storeStrong(param_1 + _DAT_1127316ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127316a8,0);
  return;
}



/* Entry: 105bcabd0; end: 105bcac1f; -[SCFeedTableViewCell initWithStyle:reuseIdentifier:] */

undefined1 * FUN_105bcabd0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010befd8a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bcac20; end: 105bcac77; -[SCFeedTableViewCell prepareForReuse] */

void FUN_105bcac20(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c160fc0(param_1);
  func_0x00010c21e900(param_1);
  return;
}



/* Entry: 105bcac78; end: 105bcac7b; -[SCFeedTableViewCell handleTap:] */

void FUN_105bcac78(void)

{
  return;
}



/* Entry: 105bcac7c; end: 105bcac7f; -[SCFeedTableViewCell handleDoubleTap:] */

void FUN_105bcac7c(void)

{
  return;
}



/* Entry: 105bcac80; end: 105bcac83; -[SCFeedTableViewCell handleDelayedTap:] */

void FUN_105bcac80(void)

{
  return;
}



/* Entry: 105bcac84; end: 105bcac87; -[SCFeedTableViewCell handleLongPress:] */

void FUN_105bcac84(void)

{
  return;
}



/* Entry: 105bcac88; end: 105bcac8f; -[SCFeedTableViewCell tapGestureRecognizerShouldBegin] */

undefined8 FUN_105bcac88(void)

{
  return 0;
}



/* Entry: 105bcac90; end: 105bcac97; -[SCFeedTableViewCell delayedTapGestureRecognizerShouldBegin] */

undefined8 FUN_105bcac90(void)

{
  return 0;
}



/* Entry: 105bcac98; end: 105bcac9f; -[SCFeedTableViewCell doubleTapGestureRecognizerShouldBegin] */

undefined8 FUN_105bcac98(void)

{
  return 0;
}



/* Entry: 105bcaca0; end: 105bcaca7; -[SCFeedTableViewCell longPressGestureRecognizerShouldBegin] */

undefined8 FUN_105bcaca0(void)

{
  return 0;
}



/* Entry: 105bcaca8; end: 105bcace3; -[SCFeedTableViewCell feedCellPanGestureRecognizerShouldBegin] */

uint FUN_105bcaca8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22ee20();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105bcace4; end: 105bcacf3; -[SCFeedTableViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcace4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316c0);
}



/* Entry: 105bcacf4; end: 105bcad33; -[SCFeedTableViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcacf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcad34; end: 105bcad43; -[SCFeedTableViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcad34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316c4);
}



/* Entry: 105bcad44; end: 105bcad83; -[SCFeedTableViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcad44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcad84; end: 105bcad93; -[SCFeedTableViewCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcad84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316c8);
}



/* Entry: 105bcad94; end: 105bcadd3; -[SCFeedTableViewCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcad94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcadd4; end: 105bcadf3; -[SCFeedTableViewCell gestureDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcadd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127316cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bcadf4; end: 105bcae07; -[SCFeedTableViewCell setGestureDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcadf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127316cc,param_3);
  return;
}



/* Entry: 105bcae08; end: 105bcae17; -[SCFeedTableViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcae08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316d0);
}



/* Entry: 105bcae18; end: 105bcae57; -[SCFeedTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcae18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcae58; end: 105bcae67; -[SCFeedTableViewCell animationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcae58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316d4);
}



/* Entry: 105bcae68; end: 105bcaea7; -[SCFeedTableViewCell setAnimationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcae68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcaea8; end: 105bcaeb7; -[SCFeedTableViewCell retryActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcaea8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316d8);
}



/* Entry: 105bcaeb8; end: 105bcaef7; -[SCFeedTableViewCell setRetryActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcaeb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcaef8; end: 105bcaf07; -[SCFeedTableViewCell contextPostSnapFeedScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcaef8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316dc);
}



/* Entry: 105bcaf08; end: 105bcaf47; -[SCFeedTableViewCell setContextPostSnapFeedScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcaf08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcaf48; end: 105bcaf57; -[SCFeedTableViewCell contextPostSnapFeedScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcaf48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316e0);
}



/* Entry: 105bcaf58; end: 105bcaf97; -[SCFeedTableViewCell setContextPostSnapFeedScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcaf58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcaf98; end: 105bcafa7; -[SCFeedTableViewCell lensFriendsFeedContextButtonScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcaf98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316e4);
}



/* Entry: 105bcafa8; end: 105bcafe7; -[SCFeedTableViewCell setLensFriendsFeedContextButtonScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcafa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bcafe8; end: 105bcaff7; -[SCFeedTableViewCell lensFriendsFeedContextButtonScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bcafe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127316e8);
}



/* Entry: 105bcaff8; end: 105bcb037; -[SCFeedTableViewCell setLensFriendsFeedContextButtonScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bcaff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127316e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


