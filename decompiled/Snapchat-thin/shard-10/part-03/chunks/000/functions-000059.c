/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107df3974; end: 107df3a53; +[SCFadeAnimation fadeInViews:animated:duration:] */

void FUN_107df3974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010c220220(param_4,param_3,PTR____kCFBooleanFalse_11034ab60,
                      &PTR____CFConstantStringClassReference_110ebf778);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_5 == 0) {
    func_0x00010c220220(param_4,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851e0,
                        &PTR____CFConstantStringClassReference_110e7a858);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107df3a54;
    puStack_40 = &UNK_110842e18;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010bf03440(param_1,0,puVar1,param_3,6,&puStack_58,0);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107df3a54; end: 107df3a6b;  */

void FUN_107df3a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forKey__112665ab0,
             &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851e0,
             &PTR____CFConstantStringClassReference_110e7a858);
  return;
}



/* Entry: 107df3a6c; end: 107df3b1f; +[SCFadeAnimation fadeOutView:animated:] */

void FUN_107df3a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6be0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f8e0(puVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf9f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,PTR_PTR_1126d6be0,PTR_s_fadeOutViews_animated_duration__1125c57e8);
  return;
}



/* Entry: 107df3b20; end: 107df3b33; +[SCFadeAnimation fadeOutViews:animated:] */

void FUN_107df3b20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,PTR_PTR_1126d6be0,PTR_s_fadeOutViews_animated_duration__1125c57e8);
  return;
}



/* Entry: 107df3b34; end: 107df3c4b; +[SCFadeAnimation fadeOutViews:animated:duration:] */

void FUN_107df3b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_5 == 0) {
    func_0x00010c220220(param_4,param_3,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110ebf778);
    func_0x00010c220220(param_4,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851f0,
                        &PTR____CFConstantStringClassReference_110e7a858);
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107df3c4c;
    puStack_50 = &UNK_110842e18;
    _objc_retain(param_4);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107df3c64;
    puStack_78 = &UNK_110841f20;
    uStack_48 = param_4;
    _objc_retain(param_4);
    uStack_70 = param_4;
    func_0x00010bf03440(param_1,0,puVar2,param_3,6,&puStack_68,&puStack_90);
    _objc_release(uStack_70);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107df3c4c; end: 107df3c63;  */

void FUN_107df3c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forKey__112665ab0,
             &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851f0,
             &PTR____CFConstantStringClassReference_110e7a858);
  return;
}



/* Entry: 107df3c64; end: 107df3cb3;  */

void FUN_107df3c64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107df3cb4; end: 107df3d93; -[SCFrameableContainerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107df3cb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb3c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11276fd40;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107df3d94; end: 107df3dcf; -[SCFrameableContainerView naturalContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107df3d94(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar2 = *(double *)(param_1 + _DAT_11276fd3c);
  dVar4 = ((double *)(param_1 + _DAT_11276fd3c))[1];
  dVar3 = *(double *)PTR__CGSizeZero_110347620;
  dVar1 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  if (dVar2 != *(double *)PTR__CGSizeZero_110347620 ||
      dVar4 != *(double *)(PTR__CGSizeZero_110347620 + 8)) {
    dVar3 = dVar2;
    dVar1 = dVar4;
  }
  auVar5._8_8_ = dVar1;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 107df3dd0; end: 107df3e27; -[SCFrameableContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df3dd0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb3c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf4c5a0(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276fd40));
  return;
}



/* Entry: 107df3e28; end: 107df3efb; -[SCFrameableContainerView setFraming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df3e28(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(byte *)(param_1 + _DAT_11276fd44) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276fd44) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 0) {
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
  }
  else {
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x4018000000000000;
  }
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  lVar3 = (long)_DAT_11276fd40;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar4);
  _objc_release(uVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107df3efc; end: 107df4073; -[SCFrameableContainerView contentFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df3efc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((*(byte *)(param_5 + _DAT_11276fd44) & 1) == 0) {
    func_0x00010bf20c00(param_5);
  }
  else {
    func_0x00010c0d5d00(param_5);
    dVar1 = param_1;
    dVar4 = param_2;
    func_0x00010bf20c00(param_5);
    if ((((param_1 != 0.0) && (param_2 != 0.0)) && (param_1 = param_1 / param_2, param_1 != 0.0)) &&
       (((param_1 != INFINITY && (dVar5 = dVar1, _CGRectGetWidth(), 50.0 < dVar5)) &&
        (dVar2 = dVar1, _CGRectGetHeight(dVar1,dVar4,param_3,param_4), 89.0 < dVar2)))) {
      dVar6 = dVar5 + -50.0;
      dVar7 = dVar6 / param_1;
      dVar8 = (dVar2 + -64.0) - dVar7;
      dVar3 = 25.0;
      if (25.0 <= dVar8) {
        dVar5 = 64.0;
        if (64.0 < dVar8) {
          dVar5 = (dVar2 - dVar7) * 0.5;
        }
      }
      else {
        dVar7 = dVar2 + -64.0 + -25.0;
        dVar6 = param_1 * dVar7;
        dVar3 = (dVar5 - dVar6) * 0.5;
        dVar5 = 64.0;
      }
      func_0x00010b690928(dVar3,dVar5,dVar6,dVar7,dVar1,dVar4);
      _CGRectIntegral();
    }
  }
  return;
}



/* Entry: 107df4074; end: 107df4083; -[SCFrameableContainerView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df4074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fd40);
}



/* Entry: 107df4084; end: 107df4093; -[SCFrameableContainerView framing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107df4084(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276fd44);
}



/* Entry: 107df4094; end: 107df40a7; -[SCFrameableContainerView setNaturalContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4094(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276fd3c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 107df40a8; end: 107df40bb; -[SCFrameableContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df40a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fd40,0);
  return;
}



/* Entry: 107df40bc; end: 107df418f; -[SCOperaCornerOverlayView initWithFrame:] */

undefined1 * FUN_107df40bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb3d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010beb1a60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0x3ff0000000000000);
    _objc_release(puVar3);
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107df4190; end: 107df419b; +[SCOperaCornerOverlayView layerClass] */

void FUN_107df4190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 107df419c; end: 107df4303; -[SCOperaCornerOverlayView updateFrame:cornerOutterBounds:cornerInnerBounds:cornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df419c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  lVar3 = param_9;
  func_0x00010beb1a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  puVar1 = (undefined8 *)(param_9 + _DAT_11276fd48);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1[2] = param_7;
  puVar1[3] = param_8;
  puVar2 = (undefined8 *)(param_9 + _DAT_11276fd4c);
  puVar2[1] = in_stack_00000008;
  *puVar2 = in_stack_00000000;
  puVar2[2] = in_stack_00000010;
  puVar2[3] = in_stack_00000018;
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(*puVar1,puVar1[1],puVar1[2],puVar1[3],PTR__OBJC_CLASS___UIBezierPath_1126aec18
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(*puVar2,puVar2[1],puVar2[2],puVar2[3],in_stack_00000020,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf19940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar4,param_10,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar4;
  _objc_retainAutorelease(puVar4);
  func_0x00010bdc1040();
  func_0x00010c1d9820(lVar3,param_10,puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107df4304; end: 107df4307; -[SCOperaCornerOverlayView _shapeLayer] */

void FUN_107df4304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 107df4308; end: 107df431f; -[SCOperaCornerOverlayView cornerOutterBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df4308(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fd48);
}



/* Entry: 107df4320; end: 107df4337; -[SCOperaCornerOverlayView cornerInnerBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df4320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fd4c);
}



/* Entry: 107df4338; end: 107df4387; -[SCOperaSlider initWithFrame:] */

undefined1 * FUN_107df4338(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb3d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107df4388; end: 107df4873; -[SCOperaSlider layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126fb3d8;
  uStack_d8 = param_5;
  _objc_msgSendSuper2(&uStack_d8,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(param_5 + (long)_DAT_11276fd58);
  uVar9 = param_5;
  func_0x00010bf20c00();
  dVar15 = *pdVar1;
  dVar17 = pdVar1[2];
  dVar18 = pdVar1[3];
  _CGRectEqualToRect(dVar15,pdVar1[1],dVar17,dVar18,param_1,param_2,param_3,param_4);
  dVar16 = dVar15;
  if ((uVar9 & 1) == 0) {
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    lVar8 = (long)_DAT_11276fd5c;
    *(double *)(param_5 + lVar8) = dVar15;
    func_0x00010c167320(*(undefined8 *)(param_5 + (long)_DAT_11276fd60));
    dVar17 = *(double *)(param_5 + lVar8);
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar16 = 0.0;
    func_0x00010c19f0e0(0,0,*(undefined8 *)(param_5 + (long)_DAT_11276fd64));
    dVar18 = dVar15;
  }
  fVar19 = SUB84(dVar16,0);
  func_0x00010c296d80(param_5);
  fVar13 = fVar19;
  func_0x00010c0ce740(param_5);
  fVar19 = fVar19 - fVar13;
  func_0x00010c0c36c0(param_5);
  fVar14 = fVar13;
  func_0x00010c0ce740(param_5);
  fVar19 = fVar19 / (fVar13 - fVar14);
  dVar20 = (double)fVar19;
  lVar11 = (long)_DAT_11276fd5c;
  dVar15 = *(double *)(param_5 + lVar11);
  func_0x00010bfcfe20(param_5);
  fVar13 = fVar19;
  func_0x00010c0ce740(param_5);
  fVar19 = fVar19 - fVar13;
  func_0x00010c0c36c0(param_5);
  fVar14 = fVar13;
  func_0x00010c0ce740(param_5);
  fVar19 = fVar19 / (fVar13 - fVar14);
  uVar6 = (ulong)(uint)fVar19;
  dVar22 = *(double *)(param_5 + lVar11);
  lVar12 = (long)_DAT_11276fd68;
  uVar2 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010c26b700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  uVar9 = uVar6;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  uStack_c8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_b8 = puVar3;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(uVar6,uVar9,uVar2);
  dVar16 = dVar17;
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar8 = (long)_DAT_11276fd6c;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
  dVar21 = 20.0;
  if (0.0 < dVar16) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
    dVar21 = dVar16;
  }
  dVar15 = dVar15 * dVar20;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
  dVar16 = 20.0;
  if (0.0 < dVar18) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
    dVar16 = dVar18;
  }
  func_0x00010c19f0e0(dVar15 - dVar21 * 0.5,28.0 - dVar16 * 0.5,dVar21,dVar16,
                      *(undefined8 *)(param_5 + lVar8));
  lVar8 = (long)_DAT_11276fd70;
  dVar16 = 0.0;
  func_0x00010c19f0e0(0,0x4039800000000000,dVar15,0x4014000000000000,
                      *(undefined8 *)(param_5 + lVar8));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + (long)_DAT_11276fd64));
  _CGRectGetMaxX();
  lVar10 = (long)_DAT_11276fd74;
  func_0x00010c19f0e0(dVar15,0x4039800000000000,dVar16 - dVar15,0x4014000000000000,
                      *(undefined8 *)(param_5 + lVar10));
  dVar16 = 25.5;
  func_0x00010c19f0e0(dVar15,0x4039800000000000,dVar22 * (double)fVar19 - dVar15,0x4014000000000000,
                      *(undefined8 *)(param_5 + (long)_DAT_11276fd78));
  dVar18 = dVar17 * 0.5;
  dVar15 = dVar15 - dVar18;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
  _CGRectGetMinX();
  if (dVar18 <= dVar15) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar10));
    _CGRectGetMaxX();
    if (dVar18 < dVar17 + dVar15) {
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar10));
      _CGRectGetMaxX();
      dVar15 = dVar18 - dVar17;
    }
  }
  else {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
    _CGRectGetMinX();
    dVar15 = dVar18;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar12));
  dVar18 = 18.0;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar12));
  lVar12 = (long)_DAT_11276fd7c;
  lVar8 = *(long *)(param_5 + lVar12);
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    uVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(param_5 + lVar12);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11276fd80;
      uVar6 = *(ulong *)(param_5 + lVar8);
      func_0x00010bf529e0();
      if (uVar9 < uVar6) {
        uVar7 = *(undefined8 *)(param_5 + lVar8);
        func_0x00010c0dfd40(uVar7);
        fVar14 = SUB84(dVar15,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar18 = (double)fVar14;
        _objc_release(uVar7);
        func_0x00010c0ce740(param_5);
        dVar16 = (double)fVar14;
        dVar18 = dVar18 - dVar16;
        func_0x00010c0c36c0(param_5);
        fVar14 = SUB84(dVar16,0);
        func_0x00010c0ce740(param_5);
        dVar15 = *(double *)(param_5 + lVar11) * (dVar18 / (double)(SUB84(dVar16,0) - fVar14));
        dVar17 = 1.0;
        dVar18 = 5.0;
        dVar16 = 25.5;
        func_0x00010c19f0e0(uVar2);
      }
      _objc_release(uVar2);
      uVar9 = uVar9 + 1;
      uVar6 = *(ulong *)(param_5 + lVar12);
      func_0x00010bf529e0();
    } while (uVar9 < uVar6);
  }
  func_0x00010bf20c00(param_5);
  *pdVar1 = dVar15;
  pdVar1[1] = dVar16;
  pdVar1[2] = dVar17;
  pdVar1[3] = dVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107df4874; end: 107df4887; -[SCOperaSlider sizeThatFits:] */

void FUN_107df4874(void)

{
  return;
}



/* Entry: 107df4888; end: 107df499f; -[SCOperaSlider setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4888(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = (long)_DAT_11276fd84;
  fVar4 = *(float *)(param_2 + lVar3);
  if (fVar4 == param_1) {
    return;
  }
  func_0x00010c0c36c0();
  if (param_1 <= fVar4) {
    func_0x00010c0ce740(param_2);
    if (param_1 < fVar4) {
      fVar5 = *(float *)(param_2 + lVar3);
      param_1 = fVar4;
      func_0x00010c0ce740(param_2);
      if (fVar5 == param_1) {
        return;
      }
      func_0x00010c0ce740(param_2);
    }
  }
  else {
    fVar5 = *(float *)(param_2 + lVar3);
    param_1 = fVar4;
    func_0x00010c0c36c0(param_2);
    if (fVar5 == param_1) {
      return;
    }
    func_0x00010c0c36c0(param_2);
  }
  *(float *)(param_2 + lVar3) = param_1;
  lVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23e920((double)*(float *)(param_2 + lVar3),
                      (double)*(float *)(param_2 + _DAT_11276fd88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_11276fd68),param_3,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107df49a0; end: 107df49d3; -[SCOperaSlider _forceLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df49a0(long param_1)

{
  func_0x00010c1cbe20();
  func_0x00010c08cdc0(param_1);
  *(undefined1 *)(param_1 + _DAT_11276fd50) = 0;
  return;
}



/* Entry: 107df49d4; end: 107df4a27; -[SCOperaSlider _maybeLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df49d4(double param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x00010bf01b40();
  if ((0.0 < param_1) && (uVar1 = param_2, func_0x00010c074c20(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be18830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__forceLayout_112563ba8);
    return;
  }
  *(undefined1 *)(param_2 + (long)_DAT_11276fd50) = 1;
  return;
}



/* Entry: 107df4a28; end: 107df4ab3; -[SCOperaSlider setAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4a28(double param_1,ulong param_2)

{
  ulong uVar1;
  double dVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  dVar2 = param_1;
  func_0x00010bf01b40();
  puStack_38 = PTR_PTR_1126fb3d8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(param_1,&uStack_40,PTR_s_setAlpha__112637810);
  if ((((0.0 < param_1) && ((*(byte *)(param_2 + (long)_DAT_11276fd50) & 1) != 0)) && (dVar2 == 0.0)
      ) && (uVar1 = param_2, func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    func_0x00010be18820(param_2);
  }
  return;
}



/* Entry: 107df4ab4; end: 107df4ae7; -[SCOperaSlider setHidden:] */

void FUN_107df4ab4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb3d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 107df4ae8; end: 107df4b37; -[SCOperaSlider setMinimumValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4ae8(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = param_1;
  func_0x00010c296d80();
  if (fVar1 < param_1) {
    *(float *)(param_2 + _DAT_11276fd84) = param_1;
  }
  *(float *)(param_2 + _DAT_11276fd8c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010be5e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__maybeLayout_1125751b0);
  return;
}



/* Entry: 107df4b38; end: 107df4bef; -[SCOperaSlider setMaximumValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4b38(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = param_1;
  func_0x00010c296d80();
  if (param_1 < fVar4) {
    *(float *)(param_2 + _DAT_11276fd84) = param_1;
  }
  lVar3 = (long)_DAT_11276fd88;
  *(float *)(param_2 + lVar3) = param_1;
  lVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23e920((double)*(float *)(param_2 + _DAT_11276fd84),
                      (double)*(float *)(param_2 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_11276fd68));
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be5e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__maybeLayout_1125751b0);
  return;
}



/* Entry: 107df4bf0; end: 107df4c47; -[SCOperaSlider setHalfFillValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4bf0(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1;
  func_0x00010c0c36c0();
  fVar2 = fVar1;
  func_0x00010c0ce740(param_2);
  if (param_1 <= fVar2) {
    param_1 = fVar2;
  }
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + _DAT_11276fd54) = fVar1;
                    /* WARNING: Could not recover jumptable at 0x00010be5e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__maybeLayout_1125751b0);
  return;
}



/* Entry: 107df4c48; end: 107df4c67; -[SCOperaSlider setShowHalfFillRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4c48(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_11276fd90) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fd78),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 107df4c68; end: 107df4f33; -[SCOperaSlider setBreaks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4c68(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
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
  puVar10 = param_3;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11276fd80;
  puVar4 = *(undefined **)(param_1 + lVar7);
  _objc_retain(param_3);
  _objc_retain(puVar4);
  if (param_3 == puVar4) {
    _objc_release(puVar4);
    puVar4 = param_3;
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar1 = param_3;
      puVar10 = puVar4;
      func_0x00010c071ae0();
      _objc_release(puVar4);
      _objc_release(param_3);
      if (((ulong)puVar1 & 1) != 0) goto LAB_107df4ef0;
    }
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = param_3;
    _objc_release(uVar6);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar3 = (long)_DAT_11276fd7c;
    lVar5 = *(long *)(param_1 + lVar3);
    _objc_retain(lVar5);
    lVar7 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar7 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_128 + lVar9 * 8));
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar7 != 0);
    }
    _objc_release(lVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar10 = param_3;
    func_0x00010bf529e0();
    if (puVar10 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
        if (*(long *)(param_1 + _DAT_11276fd94) == 0) {
          puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(puVar1,param_2,puVar2);
          _objc_release(puVar2);
        }
        else {
          func_0x00010c16e440(puVar1);
        }
        puVar2 = puVar1;
        func_0x00010c08c0e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(0x3ff0000000000000);
        _objc_release(puVar2);
        func_0x00010befa120(puVar4,param_2,puVar1);
        func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11276fd64),param_2,puVar1);
        _objc_release(puVar1);
        puVar10 = puVar10 + 1;
        puVar1 = param_3;
        func_0x00010bf529e0();
      } while (puVar10 < puVar1);
    }
    puVar10 = puVar4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar10;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11276fd64;
    func_0x00010bf21300(*(undefined8 *)(param_1 + lVar7),param_2,
                        *(undefined8 *)(param_1 + _DAT_11276fd70));
    puVar10 = *(undefined **)(param_1 + _DAT_11276fd6c);
    func_0x00010bf21300(*(undefined8 *)(param_1 + lVar7));
    func_0x00010be5e040(param_1);
  }
  _objc_release(puVar4);
LAB_107df4ef0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    uVar6 = *(undefined8 *)(param_3 + _DAT_11276fd98);
    *(undefined **)(param_3 + _DAT_11276fd98) = puVar10;
    _objc_retain(puVar10);
    _objc_release(uVar6);
    func_0x00010c173280(*(undefined8 *)(param_3 + _DAT_11276fd6c),param_2,puVar10);
    func_0x00010c16e440(*(undefined8 *)(param_3 + _DAT_11276fd70),param_2,puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar10);
    return;
  }
  return;
}



/* Entry: 107df4f34; end: 107df4fab; -[SCOperaSlider setFillColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fd98);
  *(undefined8 *)(param_1 + _DAT_11276fd98) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c173280(*(undefined8 *)(param_1 + _DAT_11276fd6c),param_2,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276fd70),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df4fac; end: 107df5013; -[SCOperaSlider setUnfilledColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df4fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fd9c);
  *(undefined8 *)(param_1 + _DAT_11276fd9c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276fd74),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df5014; end: 107df507b; -[SCOperaSlider setHalfFillColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fda0);
  *(undefined8 *)(param_1 + _DAT_11276fda0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276fd78),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df507c; end: 107df50e3; -[SCOperaSlider setScrubberColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df507c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fda4);
  *(undefined8 *)(param_1 + _DAT_11276fda4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1f7f40(*(undefined8 *)(param_1 + _DAT_11276fd6c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df50e4; end: 107df513f; -[SCOperaSlider setGestureRecognizerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df50e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276fda8;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + _DAT_11276fd60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df5140; end: 107df51ef; -[SCOperaSlider setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5140(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_storeWeak(param_2 + _DAT_11276fdac,param_4);
  lVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80(param_2);
  dVar3 = (double)param_1;
  func_0x00010c0c36c0(param_2);
  lVar2 = lVar1;
  func_0x00010c23e920(dVar3,(double)param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_11276fd68));
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be5e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__maybeLayout_1125751b0);
  return;
}



/* Entry: 107df51f0; end: 107df526f; -[SCOperaSlider _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df51f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + _DAT_11276fd8c) = 0;
  *(undefined4 *)(param_1 + _DAT_11276fd88) = 0x3f800000;
  *(undefined8 *)(param_1 + _DAT_11276fd5c) = 0;
  *(undefined4 *)(param_1 + _DAT_11276fd84) = 0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276fd64);
  *(undefined **)(param_1 + _DAT_11276fd64) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
  func_0x00010beafc80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beaf8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupScrubber_1125897e0);
  return;
}



/* Entry: 107df5270; end: 107df547b; -[SCOperaSlider _setupSlider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5270(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar4 = (long)_DAT_11276fd70;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4008000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_11276fd74;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4008000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar6 = (long)_DAT_11276fd78;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4008000000000000);
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  lVar3 = (long)_DAT_11276fd64;
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3),param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3),param_2,*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107df547c; end: 107df5733; -[SCOperaSlider _setupScrubber] */

/* WARNING: Possible PIC construction at 0x000107df570c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107df5710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df547c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d6888;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276fd6c);
  *(undefined **)(param_1 + _DAT_11276fd6c) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11276fd60;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c167320(0,*(undefined8 *)(param_1 + lVar3));
  lVar3 = (long)_DAT_11276fd64;
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar4 = (long)_DAT_11276fd68;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e99999a);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x4020000000000000;
  func_0x00010c1fe840(0x4020000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c80();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7620(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107df5734; end: 107df5843; -[SCOperaSlider _longPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5734(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 - 3U < 3) {
    func_0x00010be09d80(param_1);
    func_0x00010c15b4c0(param_1,param_2,0x1000);
    uVar1 = 0x20;
  }
  else {
    if (lVar2 == 2) {
      lVar2 = (long)_DAT_11276fd5c;
      dVar5 = *(double *)(param_1 + lVar2);
      if (0.0 < dVar5) {
        func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + _DAT_11276fd64));
        dVar6 = dVar5 / *(double *)(param_1 + lVar2);
        func_0x00010c0ce740(param_1);
        fVar3 = SUB84(dVar5,0);
        dVar5 = (double)fVar3;
        func_0x00010c0c36c0(param_1);
        fVar4 = fVar3;
        func_0x00010c0ce740(param_1);
        func_0x00010be002a0(dVar5 + (double)(fVar3 - fVar4) * dVar6,param_1);
      }
      goto LAB_107df57c0;
    }
    if (lVar2 != 1) goto LAB_107df57c0;
    func_0x00010be012a0(param_1,param_2,param_3);
    func_0x00010bdd3be0(param_1);
    uVar1 = 0x10;
  }
  func_0x00010c15b4c0(param_1,param_2,uVar1);
LAB_107df57c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df5844; end: 107df5897; -[SCOperaSlider _didSelectNewValue:] */

void FUN_107df5844(double param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = param_1;
  func_0x00010c0c36c0();
  dVar2 = (double)SUB84(dVar2,0);
  if (dVar2 <= param_1) {
    param_1 = dVar2;
  }
  func_0x00010c0ce740(param_2);
  fVar1 = SUB84(dVar2,0);
  if ((double)SUB84(dVar2,0) <= param_1) {
    fVar1 = (float)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c220170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(fVar1,param_2,PTR_s_setValue__112665a80);
  return;
}



/* Entry: 107df5898; end: 107df5927; -[SCOperaSlider _didTapSlider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5898(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010c09ef00(param_4,param_3,*(undefined8 *)(param_2 + _DAT_11276fd64));
  param_1 = param_1 / *(double *)(param_2 + _DAT_11276fd5c);
  dVar3 = param_1;
  if (*(double *)(param_2 + _DAT_11276fd5c) <= 0.0) {
    dVar3 = 0.0;
  }
  func_0x00010c0ce740(param_2);
  fVar1 = SUB84(param_1,0);
  dVar4 = (double)fVar1;
  func_0x00010c0c36c0(param_2);
  fVar2 = fVar1;
  func_0x00010c0ce740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be002b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4 + (double)(fVar1 - fVar2) * dVar3,param_2,PTR_s__didSelectNewValue__11255da48);
  return;
}



/* Entry: 107df5928; end: 107df5997; -[SCOperaSlider _beginSliderGrowAnimation] */

void FUN_107df5928(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107df5998;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_38,
                      0);
  return;
}



/* Entry: 107df5998; end: 107df5a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5998(long param_1,undefined8 param_2)

{
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
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff8000000000000,0x3ff8000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fd6c),param_2,
                      &uStack_80);
  _CGAffineTransformMakeTranslation(&uStack_b0,0,0xc032000000000000);
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fd68),param_2,
                      &uStack_80);
  return;
}



/* Entry: 107df5a2c; end: 107df5a9b; -[SCOperaSlider _endSliderGrowAnimation] */

void FUN_107df5a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107df5a9c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_38,
                      0);
  return;
}



/* Entry: 107df5a9c; end: 107df5b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5a9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fd6c),param_2,
                      &uStack_50);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fd68),param_2,
                      &uStack_50);
  return;
}



/* Entry: 107df5b20; end: 107df5b2f; -[SCOperaSlider value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107df5b20(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276fd84);
}



/* Entry: 107df5b30; end: 107df5b3f; -[SCOperaSlider minimumValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107df5b30(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276fd8c);
}



/* Entry: 107df5b40; end: 107df5b4f; -[SCOperaSlider maximumValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107df5b40(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276fd88);
}



/* Entry: 107df5b50; end: 107df5b5f; -[SCOperaSlider halfFillValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107df5b50(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276fd54);
}



/* Entry: 107df5b60; end: 107df5b6f; -[SCOperaSlider showHalfFillRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107df5b60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276fd90);
}



/* Entry: 107df5b70; end: 107df5b7f; -[SCOperaSlider breaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5b70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fd80);
}



/* Entry: 107df5b80; end: 107df5b8f; -[SCOperaSlider fillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5b80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fd98);
}



/* Entry: 107df5b90; end: 107df5b9f; -[SCOperaSlider unfilledColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fd9c);
}



/* Entry: 107df5ba0; end: 107df5baf; -[SCOperaSlider halfFillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5ba0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fda0);
}



/* Entry: 107df5bb0; end: 107df5bbf; -[SCOperaSlider scrubberColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5bb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fda4);
}



/* Entry: 107df5bc0; end: 107df5bcf; -[SCOperaSlider breakColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fd94);
}



/* Entry: 107df5bd0; end: 107df5c0f; -[SCOperaSlider setBreakColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fd94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df5c10; end: 107df5c2f; -[SCOperaSlider gestureRecognizerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5c10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276fda8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df5c30; end: 107df5c4f; -[SCOperaSlider delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5c30(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276fdac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df5c50; end: 107df5d67; -[SCOperaSlider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5c50(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276fdac);
  _objc_destroyWeak(param_1 + _DAT_11276fda8);
  _objc_storeStrong(param_1 + _DAT_11276fd94,0);
  _objc_storeStrong(param_1 + _DAT_11276fda4,0);
  _objc_storeStrong(param_1 + _DAT_11276fda0,0);
  _objc_storeStrong(param_1 + _DAT_11276fd9c,0);
  _objc_storeStrong(param_1 + _DAT_11276fd98,0);
  _objc_storeStrong(param_1 + _DAT_11276fd80,0);
  _objc_storeStrong(param_1 + _DAT_11276fd60,0);
  _objc_storeStrong(param_1 + _DAT_11276fd7c,0);
  _objc_storeStrong(param_1 + _DAT_11276fd68,0);
  _objc_storeStrong(param_1 + _DAT_11276fd64,0);
  _objc_storeStrong(param_1 + _DAT_11276fd6c,0);
  _objc_storeStrong(param_1 + _DAT_11276fd78,0);
  _objc_storeStrong(param_1 + _DAT_11276fd74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fd70,0);
  return;
}



/* Entry: 107df5d68; end: 107df5ddf; -[SCOperaSliderScrubber initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107df5d68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb3e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276fdb0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276fdb0) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107df5de0; end: 107df5eb3; -[SCOperaSliderScrubber layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5de0(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fb3e0;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar4 = param_1 * 0.125;
  param_1 = param_1 + dVar4 * -2.0;
  lVar1 = (long)_DAT_11276fdb0;
  lVar2 = (long)_DAT_11276fdb4;
  if (param_1 != *(double *)(param_2 + lVar2)) {
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1 * 0.5);
    _objc_release(uVar3);
  }
  func_0x00010c19f0e0(dVar4,dVar4,param_1,param_1,*(undefined8 *)(param_2 + lVar1));
  *(double *)(param_2 + lVar2) = param_1;
  return;
}



/* Entry: 107df5eb4; end: 107df5f23; -[SCOperaSliderScrubber setScrubberColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fdb8);
  *(undefined8 *)(param_1 + _DAT_11276fdb8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276fdb0));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107df5f24; end: 107df5feb; -[SCOperaSliderScrubber setBorderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df5f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fdbc);
  *(undefined8 *)(param_1 + _DAT_11276fdbc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  lVar2 = (long)_DAT_11276fdb0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1733a0(0x4008000000000000,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107df5fec; end: 107df5ffb; -[SCOperaSliderScrubber scrubberColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5fec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdb8);
}



/* Entry: 107df5ffc; end: 107df600b; -[SCOperaSliderScrubber borderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df5ffc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdbc);
}



/* Entry: 107df600c; end: 107df605b; -[SCOperaSliderScrubber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df600c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fdbc,0);
  _objc_storeStrong(param_1 + _DAT_11276fdb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fdb0,0);
  return;
}



/* Entry: 107df605c; end: 107df6067;  */

void FUN_107df605c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2647b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4046800000000000,param_1,PTR_s_swipeDirectionInView_horizontalT_112676c10);
  return;
}



/* Entry: 107df6068; end: 107df609b;  */

void FUN_107df6068(undefined8 param_1)

{
  func_0x00010c297a00();
                    /* WARNING: Could not recover jumptable at 0x00010c264770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_swipeDirectionForVelocity_horizo_112676c00);
  return;
}



/* Entry: 107df609c; end: 107df6137;  */

undefined1 FUN_107df609c(undefined8 param_1,double param_2,double param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  _atan2(param_2,param_1);
  dVar4 = (param_2 * 180.0) / 3.141592653589793;
  bVar2 = false;
  bVar3 = true;
  if (-param_3 <= dVar4) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar4) && !NAN(param_3)) {
      bVar2 = dVar4 == param_3;
      bVar3 = param_3 <= dVar4;
    }
  }
  if (!bVar3 || bVar2) {
    uVar1 = 3;
  }
  else if ((dVar4 <= 45.0) || (135.0 <= dVar4)) {
    uVar1 = dVar4 < -(180.0 - param_3);
    if (180.0 - param_3 <= dVar4) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 107df6138; end: 107df6143;  */

void FUN_107df6138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c264770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,0x4046800000000000,param_3,
             PTR_s_swipeDirectionForVelocity_horizo_112676c00);
  return;
}



/* Entry: 107df6144; end: 107df622b;  */

void FUN_107df6144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c109540(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107df622c; end: 107df62eb;  */

void FUN_107df622c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be36f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107df62ec; end: 107df637b;  */

void FUN_107df62ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_3);
  uVar2 = param_1;
  func_0x00010c14e120(param_3);
  uVar1 = param_3;
  func_0x00010bf673c0(param_1,param_2,uVar2,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36f40(param_3,param_4,uVar1,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df637c; end: 107df6473; -[SCConnectionErrorStateView initWithBackgroundColor:textColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107df637c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb3e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c16e440(puVar1);
    lVar4 = (long)_DAT_11276fdc0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    func_0x00010c228940(puVar1);
    func_0x00010c228920(puVar1);
    func_0x00010c228980(puVar1);
    func_0x00010c228960(puVar1);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107df6474; end: 107df64a3; -[SCConnectionErrorStateView unhideWithActivityIndicatorPresent:] */

void FUN_107df6474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c1a7f60(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010beb77d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showActivityIndicator__11258b798,param_3);
  return;
}



/* Entry: 107df64a4; end: 107df6523; -[SCConnectionErrorStateView _showActivityIndicator:] */

void FUN_107df64a4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c2558c0();
    uVar2 = 0x3ff0000000000000;
  }
  else {
    func_0x00010c24dbc0();
    uVar2 = 0;
  }
  _objc_release(uVar1);
  func_0x00010c13f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107df6524; end: 107df661f; -[SCConnectionErrorStateView showNetworkError] */

void FUN_107df6524(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ebf7b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebf7b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf98c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107df6620; end: 107df671b; -[SCConnectionErrorStateView showGeneralError] */

void FUN_107df6620(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e50bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e50bb8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf98c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107df671c; end: 107df6a8b; -[SCConnectionErrorStateView setupErrorTitleLabel] */

void FUN_107df671c(undefined8 param_1)

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
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c197340(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c26b920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf99080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4043000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf99080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf99080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf99080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf99080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf99080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bf99080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf99080();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf99080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf988a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0xc036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c196f80(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c26b920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf988a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf988a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bf988a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf988a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf988a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf988a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = uVar2;
  func_0x00010bf988a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc060400000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf988a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1970e0(uVar3);
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00010bf98c40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf98c40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar3;
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c197300(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1edaa0(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c13f720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c162d60(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8560();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1edb00(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c26b920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar3);
  ppuVar15 = &PTR____CFConstantStringClassReference_110ebf838;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebf838,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(ppuVar15);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c13f720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = uVar2;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar9;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar19;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = uVar2;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar11);
  uVar3 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf493c0(0x404a800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar19);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107df6a8c; end: 107df6d67; -[SCConnectionErrorStateView setupErrorBodyLabel] */

void FUN_107df6a8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c196f80(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c26b920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf988a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bf988a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0xc060400000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf988a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1970e0(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bf98c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf98c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = uVar2;
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c197300(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1edaa0(uVar3);
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00010bf99000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c13f720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c162d60(uVar3);
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00010bef15e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8560();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bef15e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf99000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef15e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1edb00(uVar3);
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00010c26b920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c13f840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c13f840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00010c13f840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  ppuVar11 = &PTR____CFConstantStringClassReference_110ebf838;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebf838,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c13f840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(ppuVar11);
  uVar2 = uVar3;
  func_0x00010bf99000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c13f840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf99000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c13f720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar3;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf99000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bf99000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c13f840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar3;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar10;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bef15e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar13 = uVar3;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar14);
  _objc_release(uVar13);
  uVar2 = uVar3;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar3;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar3;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010bf493c0(0x404a800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107df6d68; end: 107df6f6b; -[SCConnectionErrorStateView setupErrorImageView] */

void FUN_107df6d68(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1970e0(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf98c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf98c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c197300(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1edaa0(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c13f720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c162d60(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8560();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1edb00(uVar2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c26b920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar3);
  ppuVar10 = &PTR____CFConstantStringClassReference_110ebf838;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebf838,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(ppuVar10);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c13f720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010bf99000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c13f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = uVar2;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar11;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar2;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bef15e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = uVar2;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar3 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010bf493c0(0x404a800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uVar14);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 107df6f6c; end: 107df7997; -[SCConnectionErrorStateView setupErrorTapToRetryView] */

void FUN_107df6f6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c197300(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1edaa0(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf99000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c162d60(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8560();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf99000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1edb00(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c26b920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c13f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebf838;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebf838,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(ppuVar4);
  uVar2 = param_1;
  func_0x00010bf99000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf99000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf99000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf99000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010c13f840();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = param_1;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar11);
  uVar2 = param_1;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = param_1;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010bf99000();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf493c0(0x404a800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107df7998; end: 107df79c7; -[SCConnectionErrorStateView didTapErrorView] */

void FUN_107df7998(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107df79c8; end: 107df79e7; -[SCConnectionErrorStateView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df79c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276fdc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df79e8; end: 107df79fb; -[SCConnectionErrorStateView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df79e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276fdc4,param_3);
  return;
}



/* Entry: 107df79fc; end: 107df7a0b; -[SCConnectionErrorStateView errorBodyLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df79fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdc8);
}



/* Entry: 107df7a0c; end: 107df7a4b; -[SCConnectionErrorStateView setErrorBodyLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fdc8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df7a4c; end: 107df7a5b; -[SCConnectionErrorStateView errorTapToRetryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df7a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdcc);
}



/* Entry: 107df7a5c; end: 107df7a9b; -[SCConnectionErrorStateView setErrorTapToRetryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fdcc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df7a9c; end: 107df7aab; -[SCConnectionErrorStateView errorTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df7a9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdd0);
}



/* Entry: 107df7aac; end: 107df7aeb; -[SCConnectionErrorStateView setErrorTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fdd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df7aec; end: 107df7afb; -[SCConnectionErrorStateView errorImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df7aec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdd4);
}



/* Entry: 107df7afc; end: 107df7b3b; -[SCConnectionErrorStateView setErrorImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fdd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


