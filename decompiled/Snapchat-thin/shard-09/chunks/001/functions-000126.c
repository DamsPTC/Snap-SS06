/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a50da0; end: 106a50daf; -[SCContextLabel pointSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a50da0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127565dc);
}



/* Entry: 106a50db0; end: 106a50dbf; -[SCContextLabel attributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a50db0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127565e8);
}



/* Entry: 106a50dc0; end: 106a50dff; -[SCContextLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50dc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127565e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127565e4,0);
  return;
}



/* Entry: 106a50e00; end: 106a50ee7; -[SCContextPassthroughView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50e00(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f46d8;
  puStack_50 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined1 **)(param_3 + _DAT_1127565ec);
  if (puVar2 == (undefined1 *)0x0) {
    if (ppuVar1 == (undefined1 **)0x0 || ppuVar1 == (undefined1 **)param_3) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      _objc_retain(ppuVar1);
      puVar2 = (undefined1 *)ppuVar1;
    }
  }
  else {
    (**(code **)(puVar2 + 0x10))(param_1,param_2,puVar2,param_5,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a50ee8; end: 106a50ef7; -[SCContextPassthroughView hitTestBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a50ee8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127565ec);
}



/* Entry: 106a50ef8; end: 106a50f03; -[SCContextPassthroughView setHitTestBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a50f04; end: 106a50f17; -[SCContextPassthroughView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127565ec,0);
  return;
}



/* Entry: 106a50f18; end: 106a5150f; -[SCContextPlaceholderCardView initWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a50f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126f46e0;
  puVar1 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127565f0) = param_3;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar30 = (long)_DAT_1127565f4;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined **)((long)puVar1 + lVar30) = puVar2;
    _objc_release(uVar27);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar30));
    _objc_release(puVar2);
    uVar27 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08c0e0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar27);
    uVar27 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08c0e0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar27);
    uVar27 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08c0e0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(uVar27);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar27 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08c0e0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar27);
    _objc_release(puVar2);
    uVar27 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08c0e0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3dcccccd);
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar28 = (long)_DAT_1127565f8;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined **)((long)puVar1 + lVar28) = puVar2;
    _objc_release(uVar27);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar29 = (long)_DAT_1127565fc;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar2;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010befbb60(puVar1);
    func_0x00010c181f00(0x443b8000,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = *(undefined8 **)((long)puVar1 + lVar29);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar27;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar16;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar22;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar26);
    _objc_release(uVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(puVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar27);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  return puVar3;
}



/* Entry: 106a51510; end: 106a51527; -[SCContextPlaceholderCardView intrinsicContentSize] */

undefined1  [16] FUN_106a51510(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4058000000000000;
  return auVar1;
}



/* Entry: 106a51528; end: 106a5162f; -[SCContextPlaceholderCardView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51528(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 != *(long *)(param_1 + _DAT_1127565f0)) {
    *(long *)(param_1 + _DAT_1127565f0) = param_3;
    lVar5 = (long)_DAT_1127565f8;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,param_3 != 1);
    lVar4 = (long)_DAT_1127565fc;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c074c20();
    if (iVar1 == 0) {
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
    }
    else {
      func_0x00010c2558c0();
    }
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
        _objc_release(puVar3);
        func_0x00010c23d620(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
        return;
      }
    }
  }
  return;
}



/* Entry: 106a51630; end: 106a51737; -[SCContextPlaceholderCardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f46e0;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar4 = (long)_DAT_1127565f4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  lVar1 = param_5;
  uVar3 = param_1;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106a51738; end: 106a51747; -[SCContextPlaceholderCardView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a51738(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127565f0);
}



/* Entry: 106a51748; end: 106a51797; -[SCContextPlaceholderCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51748(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127565f4,0);
  _objc_storeStrong(param_1 + _DAT_1127565f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127565fc,0);
  return;
}



/* Entry: 106a51798; end: 106a5180b; -[SCContextStyledView initWithOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f46e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112756604) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112756608) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275660c) = 0xc000000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112756610) = 0;
  }
  return;
}



/* Entry: 106a5180c; end: 106a5185b; -[SCContextStyledView setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a5180c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f46e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHidden__1126479f8);
  *(undefined1 *)(param_1 + _DAT_112756600) = param_3;
  return;
}



/* Entry: 106a5185c; end: 106a518a3; -[SCContextStyledView setImplicitlyHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a5185c(long param_1,undefined8 param_2,byte param_3)

{
  long lStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f46e8;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_setHidden__1126479f8,
                      (param_3 | *(byte *)(param_1 + _DAT_112756600)) & 1);
  return;
}



/* Entry: 106a518a4; end: 106a518b3; -[SCContextStyledView setStyleOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a518a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112756604) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bf08930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_applyStyle_11259fbf0);
  return;
}



/* Entry: 106a518b4; end: 106a518f3; -[SCContextStyledView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a518b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112756614);
  *(undefined8 *)(param_1 + _DAT_112756614) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf08930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_applyStyle_11259fbf0);
  return;
}



/* Entry: 106a518f4; end: 106a51d1b; -[SCContextStyledView applyStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a518f4(double param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  double *pdVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  
  uVar2 = param_2;
  func_0x00010c25e180();
  if ((uVar2 & 1) != 0) {
    lVar7 = (long)_DAT_112756614;
    uVar2 = *(ulong *)(param_2 + lVar7);
    func_0x00010bfd9b00();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf68be0(param_2);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c0e8ca0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      _objc_release(uVar3);
    }
    func_0x00010c1677c0(param_1,param_2);
    func_0x00010c1ab000(param_2,param_3,param_1 <= 0.0);
  }
  uVar2 = param_2;
  func_0x00010c25e180();
  if (((uint)uVar2 >> 3 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + (long)_DAT_112756614);
    func_0x00010bf1fc20();
    if ((uint)uVar2 < 3) {
      pdVar6 = (double *)(&UNK_10dde3af0 + (uVar2 & 0xffffffff) * 8);
    }
    else {
      pdVar6 = (double *)(param_2 + (long)_DAT_112756610);
    }
    dVar8 = *pdVar6;
    *(double *)(param_2 + (long)_DAT_11275660c) = dVar8;
    func_0x00010c17d4c0(param_2,param_3,dVar8 == -1.0 || 0.0 < dVar8);
    func_0x00010c1cbe20(param_2);
  }
  uVar2 = param_2;
  func_0x00010c25e180();
  if (((uint)uVar2 >> 4 & 1) != 0) {
    uVar2 = param_2;
    func_0x00010c29cf20(param_2);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_2 + (long)_DAT_112756614);
    func_0x00010bfdbf60();
    if (iVar1 == 0) {
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(uVar5);
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0);
      _objc_release(uVar5);
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0);
      _objc_release(uVar5);
      uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
      uVar9 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(uVar3,uVar9);
      _objc_release(uVar5);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(uVar5);
      _objc_release(puVar4);
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0x4020000000000000);
      _objc_release(uVar5);
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0x3dcccccd);
      _objc_release(uVar5);
      uVar5 = uVar2;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(0,0x4000000000000000);
      _objc_release(uVar5);
      func_0x00010c17d4c0(uVar2,param_3,0);
    }
    _objc_release(uVar2);
  }
  uVar2 = param_2;
  func_0x00010c25e180();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (((uint)uVar2 >> 1 & 1) != 0) {
    lVar7 = (long)_DAT_112756614;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar7);
    func_0x00010bfd4780();
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010bf13d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf40fa0(puVar4,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      uVar2 = param_2;
      func_0x00010bf68da0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf08160(param_2,param_3,uVar2);
      _objc_release(uVar2);
    }
    else {
      func_0x00010bf08160(param_2,param_3,puVar4);
    }
    _objc_release(puVar4);
    if (iVar1 != 0) {
      _objc_release(uVar3);
    }
  }
  uVar2 = param_2;
  func_0x00010c25e180();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (((uint)uVar2 >> 2 & 1) != 0) {
    lVar7 = (long)_DAT_112756614;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar7);
    func_0x00010bfd73a0();
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010bfb5360(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf40fa0(puVar4,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      uVar2 = param_2;
      func_0x00010bf696e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf08540(param_2,param_3,uVar2);
      _objc_release(uVar2);
    }
    else {
      func_0x00010bf08540(param_2,param_3,puVar4);
    }
    _objc_release(puVar4);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 106a51d1c; end: 106a51dc3; -[SCContextStyledView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51d1c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f46e8;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  dVar1 = *(double *)(param_5 + _DAT_11275660c);
  if (dVar1 != -2.0) {
    if (dVar1 == -1.0) {
      func_0x00010bf20c00(param_5);
      if (param_4 <= param_3) {
        param_3 = param_4;
      }
      dVar1 = param_3 * 0.5;
    }
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar1);
    _objc_release(param_5);
  }
  return;
}



/* Entry: 106a51dc4; end: 106a51dc7; -[SCContextStyledView applyBackgroundColor:] */

void FUN_106a51dc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBackgroundColor__112639330);
  return;
}



/* Entry: 106a51dc8; end: 106a51dcb; -[SCContextStyledView applyForegroundColor:] */

void FUN_106a51dc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTintColor__112663280);
  return;
}



/* Entry: 106a51dcc; end: 106a51dcf; -[SCContextStyledView viewForShadow] */

void FUN_106a51dcc(void)

{
  return;
}



/* Entry: 106a51dd0; end: 106a51ddf; -[SCContextStyledView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a51dd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112756614);
}



/* Entry: 106a51de0; end: 106a51def; -[SCContextStyledView styleOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a51de0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112756604);
}



/* Entry: 106a51df0; end: 106a51dff; -[SCContextStyledView defaultAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a51df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112756608);
}



/* Entry: 106a51e00; end: 106a51e0f; -[SCContextStyledView setDefaultAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51e00(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112756608) = param_1;
  return;
}



/* Entry: 106a51e10; end: 106a51e1f; -[SCContextStyledView defaultCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a51e10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112756610);
}



/* Entry: 106a51e20; end: 106a51e2f; -[SCContextStyledView setDefaultCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51e20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112756610) = param_1;
  return;
}



/* Entry: 106a51e30; end: 106a51e3f; -[SCContextStyledView defaultBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a51e30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112756618);
}



/* Entry: 106a51e40; end: 106a51e7f; -[SCContextStyledView setDefaultBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112756618;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a51e80; end: 106a51e8f; -[SCContextStyledView defaultForegroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a51e80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275661c);
}



/* Entry: 106a51e90; end: 106a51ecf; -[SCContextStyledView setDefaultForegroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275661c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a51ed0; end: 106a51f1f; -[SCContextStyledView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a51ed0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275661c,0);
  _objc_storeStrong(param_1 + _DAT_112756618,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112756614,0);
  return;
}



/* Entry: 106a51f20; end: 106a51fc3; -[SCCameraModeEnablingDeepLinkPlugin initWithNavigationServicesLazy:cameraConfigurationServicesLazy:] */

undefined1 *
FUN_106a51f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f46f0;
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



/* Entry: 106a51fc4; end: 106a51fd7; -[SCCameraModeEnablingDeepLinkPlugin identifier] */

void FUN_106a51fc4(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a51fd8; end: 106a51fdf; -[SCCameraModeEnablingDeepLinkPlugin priority] */

undefined8 FUN_106a51fd8(void)

{
  return 1000;
}



/* Entry: 106a51fe0; end: 106a51ff3; -[SCCameraModeEnablingDeepLinkPlugin canProvideProcessorForFeature:] */

void FUN_106a51fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110e63678);
  return;
}



/* Entry: 106a51ff4; end: 106a52073; -[SCCameraModeEnablingDeepLinkPlugin isValidDeepLink:] */

undefined8 FUN_106a51ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf2d2a0(param_1,param_2,uVar1);
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be3e9a0(param_1,param_2,param_3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a52074; end: 106a52207; -[SCCameraModeEnablingDeepLinkPlugin _isCameraModeSupported:] */

ulong FUN_106a52074(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c08fa60();
  _objc_release(uVar7);
  if (uVar1 < 2) {
    uVar7 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 1;
    uVar2 = uVar1;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e63698);
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f83fb8);
      uVar7 = uVar2;
      if ((int)uVar1 == 0) {
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f83fd8);
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010bf7f280();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf7f2a0();
        if ((uVar6 & 1) == 0) {
          func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f83fd8);
        }
        else {
          uVar7 = 1;
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
        _objc_release(uVar3);
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106a52208; end: 106a5220b; -[SCCameraModeEnablingDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_106a52208(void)

{
  return;
}



/* Entry: 106a5220c; end: 106a52213; -[SCCameraModeEnablingDeepLinkPlugin shouldForceNavigation] */

undefined8 FUN_106a5220c(void)

{
  return 1;
}



/* Entry: 106a52214; end: 106a523bf; -[SCCameraModeEnablingDeepLinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a52214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf2d020();
  if ((uVar2 & 1) == 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f83958);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e685b8,
                          &PTR____CFConstantStringClassReference_110dbe118,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5fe0(param_5,param_2,puVar6);
      func_0x00010bf94720(param_5,param_2,puVar6);
      goto LAB_106a52384;
    }
  }
  func_0x00010c0a5fe0(param_5,param_2,0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a523c0;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_5);
  puStack_48 = param_5;
  func_0x00010c10d100(uVar3,param_2,0,param_3,param_4,&puStack_68);
  puVar6 = puStack_48;
LAB_106a52384:
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a523c0; end: 106a523ef;  */

void FUN_106a523c0(long param_1,undefined8 param_2)

{
  func_0x00010c0a6880(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf94730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endDeepLinkProcessingScopeWithEr_1125c2b70,0);
  return;
}



/* Entry: 106a523f0; end: 106a523f3; -[SCCameraModeEnablingDeepLinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a523f0(void)

{
  return;
}



/* Entry: 106a523f4; end: 106a52423; -[SCCameraModeEnablingDeepLinkPlugin .cxx_destruct] */

void FUN_106a523f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a52424; end: 106a52497; -[SCFeatureSelfieSettingsDeepLinkPlugin initWithNavigationServicesLazy:] */

undefined1 * FUN_106a52424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f46f8;
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



/* Entry: 106a52498; end: 106a524ab; -[SCFeatureSelfieSettingsDeepLinkPlugin identifier] */

void FUN_106a52498(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a524ac; end: 106a524b3; -[SCFeatureSelfieSettingsDeepLinkPlugin priority] */

undefined8 FUN_106a524ac(void)

{
  return 1000;
}



/* Entry: 106a524b4; end: 106a524c7; -[SCFeatureSelfieSettingsDeepLinkPlugin canProvideProcessorForFeature:] */

void FUN_106a524b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110e437f8);
  return;
}



/* Entry: 106a524c8; end: 106a52513; -[SCFeatureSelfieSettingsDeepLinkPlugin isValidDeepLink:] */

undefined8 FUN_106a524c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a52514; end: 106a52517; -[SCFeatureSelfieSettingsDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_106a52514(void)

{
  return;
}



/* Entry: 106a52518; end: 106a5251f; -[SCFeatureSelfieSettingsDeepLinkPlugin shouldForceNavigation] */

undefined8 FUN_106a52518(void)

{
  return 1;
}



/* Entry: 106a52520; end: 106a526cb; -[SCFeatureSelfieSettingsDeepLinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a52520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf2d020();
  if ((uVar2 & 1) == 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f83958);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e685d8,
                          &PTR____CFConstantStringClassReference_110dbe118,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5fe0(param_5,param_2,puVar6);
      func_0x00010bf94720(param_5,param_2,puVar6);
      goto LAB_106a52690;
    }
  }
  func_0x00010c0a5fe0(param_5,param_2,0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a526cc;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_5);
  puStack_48 = param_5;
  func_0x00010c10d100(uVar3,param_2,0,param_3,param_4,&puStack_68);
  puVar6 = puStack_48;
LAB_106a52690:
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a526cc; end: 106a526fb;  */

void FUN_106a526cc(long param_1,undefined8 param_2)

{
  func_0x00010c0a6880(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf94730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endDeepLinkProcessingScopeWithEr_1125c2b70,0);
  return;
}



/* Entry: 106a526fc; end: 106a526ff; -[SCFeatureSelfieSettingsDeepLinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a526fc(void)

{
  return;
}



/* Entry: 106a52700; end: 106a5270b; -[SCFeatureSelfieSettingsDeepLinkPlugin .cxx_destruct] */

void FUN_106a52700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a5270c; end: 106a527af; -[SCLockedCameraCaptureDeepLinkPlugin initWithNavigationServicesLazy:cameraHardwareServicesLazy:] */

undefined1 *
FUN_106a5270c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4700;
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



/* Entry: 106a527b0; end: 106a527c3; -[SCLockedCameraCaptureDeepLinkPlugin identifier] */

void FUN_106a527b0(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a527c4; end: 106a527cb; -[SCLockedCameraCaptureDeepLinkPlugin priority] */

undefined8 FUN_106a527c4(void)

{
  return 1000;
}



/* Entry: 106a527cc; end: 106a527df; -[SCLockedCameraCaptureDeepLinkPlugin canProvideProcessorForFeature:] */

void FUN_106a527cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83ff8);
  return;
}



/* Entry: 106a527e0; end: 106a5282b; -[SCLockedCameraCaptureDeepLinkPlugin isValidDeepLink:] */

undefined8 FUN_106a527e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a5282c; end: 106a5282f; -[SCLockedCameraCaptureDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_106a5282c(void)

{
  return;
}



/* Entry: 106a52830; end: 106a52837; -[SCLockedCameraCaptureDeepLinkPlugin shouldForceNavigation] */

undefined8 FUN_106a52830(void)

{
  return 1;
}



/* Entry: 106a52838; end: 106a52a13; -[SCLockedCameraCaptureDeepLinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a52838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf2d020();
  if ((uVar2 & 1) == 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f83958);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e685f8,
                          &PTR____CFConstantStringClassReference_110dbe118,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5fe0(param_5,param_2,puVar6);
      func_0x00010bf94720(param_5,param_2,puVar6);
      goto LAB_106a529d4;
    }
  }
  uVar4 = param_3;
  func_0x00010c11d6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284280(param_1,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c0a5fe0(param_5,param_2,0);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a52a14;
  puStack_60 = &UNK_110842e18;
  _objc_retain(param_5);
  puStack_58 = param_5;
  func_0x00010c10d100(uVar3,param_2,0,param_3,param_4,&puStack_78);
  puVar6 = puStack_58;
LAB_106a529d4:
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a52a14; end: 106a52a43;  */

void FUN_106a52a14(long param_1,undefined8 param_2)

{
  func_0x00010c0a6880(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf94730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endDeepLinkProcessingScopeWithEr_1125c2b70,0);
  return;
}



/* Entry: 106a52a44; end: 106a52a47; -[SCLockedCameraCaptureDeepLinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a52a44(void)

{
  return;
}



/* Entry: 106a52a48; end: 106a52b47; -[SCLockedCameraCaptureDeepLinkPlugin updateCaptureDevicePositionWithQueryParams:] */

void FUN_106a52a48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e68618);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad398);
      if ((int)uVar1 == 0) goto LAB_106a52b30;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afed0;
    func_0x00010c0db140(PTR_PTR_1126afed0);
    func_0x00010c18cd00(uVar4,param_2,uVar6,puVar5,&PTR___NSConcreteGlobalBlock_110958228,0);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
LAB_106a52b30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a52b48; end: 106a52b4b;  */

void FUN_106a52b48(void)

{
  return;
}



/* Entry: 106a52b4c; end: 106a52b7b; -[SCLockedCameraCaptureDeepLinkPlugin .cxx_destruct] */

void FUN_106a52b4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a52b7c; end: 106a52fff; -[SCCameraLockScreenWidgetDataUpdater initWithUserId:bitmojiSelfieFetcher:bitmojiSelfieProvider:bitmojiAvatarProvider:homeScreenWidgetUpdater:] */

undefined8 *
FUN_106a52b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126f4708;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar8 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar8);
    _objc_retain(param_3);
    uVar8 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar8);
    _objc_retain(param_4);
    uVar8 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar8);
    _objc_retain(param_5);
    uVar8 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar8);
    _objc_retain(param_6);
    uVar8 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar8);
    _objc_retain(param_7);
    uVar8 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106a53000;
    puStack_98 = &UNK_110958248;
    _objc_retain(param_3);
    uStack_90 = param_3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar8 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126ae720;
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x106a53038;
    puStack_c0 = &UNK_110958278;
    _objc_retain(puVar3);
    puStack_b8 = puVar3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar8 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar8);
    _objc_initWeak(auStack_e0,puVar1);
    uVar5 = puVar1[6];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c15ae00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x106a5308c;
    puStack_f0 = &UNK_110843540;
    _objc_copyWeak(auStack_e8,auStack_e0);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar5);
    uVar5 = puVar1[7];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x106a530b8;
    puStack_118 = &UNK_110843540;
    _objc_copyWeak(auStack_110,auStack_e0);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar5);
    uVar8 = puVar1[2];
    _objc_copyWeak(auStack_138,auStack_e0);
    func_0x00010c0f7fc0(uVar8);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
    _objc_release(puStack_b8);
    _objc_release(puVar3);
    _objc_release(uStack_90);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a53000; end: 106a5310f;  */

void FUN_106a53000(void)

{
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010bfef8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a53110; end: 106a533cf; -[SCCameraLockScreenWidgetDataUpdater _updateBitmojiSelfie] */

void FUN_106a53110(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126b4bc0;
      _objc_alloc(PTR_PTR_1126b4bc0);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ace0(puVar5);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106a533d0;
      puStack_68 = &UNK_1108aa250;
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010bfaa020(uVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_60);
      _objc_release(puVar5);
      goto LAB_106a53370;
    }
  }
  _objc_initWeak(auStack_88,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010c0f7fc0(uVar8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
LAB_106a53370:
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106a533d0; end: 106a5346b;  */

void FUN_106a533d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd7e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a5346c; end: 106a53543; -[SCCameraLockScreenWidgetDataUpdater _cacheUserBitmojiImage:] */

void FUN_106a5346c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a53544; end: 106a535cb;  */

void FUN_106a53544(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _UIImagePNGRepresentation(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010be652e0(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a535cc; end: 106a536a3; -[SCCameraLockScreenWidgetDataUpdater clearStoredResourcesWhenLogoutWithCompletion:] */

void FUN_106a535cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a536a4; end: 106a536d7;  */

void FUN_106a536a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a536d8; end: 106a53743; -[SCCameraLockScreenWidgetDataUpdater _clearStoredResourcesWhenLogoutAsyncWithCompletion:] */

void FUN_106a536d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a900();
  _objc_release(uVar1);
  func_0x00010be652e0(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a53744; end: 106a5374b; -[SCCameraLockScreenWidgetDataUpdater _notifyWidgetExtensionIfNecessary] */

void FUN_106a53744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_reloadCameraWidget_112627cd0);
  return;
}



/* Entry: 106a5374c; end: 106a537db; -[SCCameraLockScreenWidgetDataUpdater .cxx_destruct] */

void FUN_106a5374c(long param_1)

{
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



/* Entry: 106a537dc; end: 106a53847; -[SCCameraLockScreenWidgetDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_106a537dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a53848; end: 106a53a3b; -[SCCameraLockScreenWidgetDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106a53848(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2d020();
  if ((int)lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5fe0(param_5);
      func_0x00010bf94720(param_5);
      goto LAB_106a539e8;
    }
  }
  else {
    _objc_release(lVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_4 != 0) {
    func_0x00010bef7f60(puVar4);
  }
  func_0x00010c0a5fe0(param_5);
  _objc_initWeak(auStack_58,param_5);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c10d100(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_106a539e8:
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a53a3c; end: 106a53a8b;  */

void FUN_106a53a3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a53a8c; end: 106a53a93; -[SCCameraLockScreenWidgetDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_106a53a8c(void)

{
  return 1;
}



/* Entry: 106a53a94; end: 106a53a97; -[SCCameraLockScreenWidgetDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a53a94(void)

{
  return;
}



/* Entry: 106a53a98; end: 106a53a9f; -[SCCameraLockScreenWidgetDeepLinkProcessor .cxx_destruct] */

void FUN_106a53a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a53aa0; end: 106a53b13; -[SCCameraLockScreenWidgetDeepLinkProcessorPlugin initWithNavigationServicesLazy:] */

undefined1 * FUN_106a53aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4718;
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



/* Entry: 106a53b14; end: 106a53b27; -[SCCameraLockScreenWidgetDeepLinkProcessorPlugin identifier] */

void FUN_106a53b14(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a53b28; end: 106a53b2f; -[SCCameraLockScreenWidgetDeepLinkProcessorPlugin priority] */

undefined8 FUN_106a53b28(void)

{
  return 1000;
}



/* Entry: 106a53b30; end: 106a53b43; -[SCCameraLockScreenWidgetDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

void FUN_106a53b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83f78);
  return;
}



/* Entry: 106a53b44; end: 106a53b8f; -[SCCameraLockScreenWidgetDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_106a53b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a53b90; end: 106a53c23; -[SCCameraLockScreenWidgetDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_106a53b90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cfed8;
  _objc_alloc(PTR_PTR_1126cfed8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e580(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a53c24; end: 106a53c2f; -[SCCameraLockScreenWidgetDeepLinkProcessorPlugin .cxx_destruct] */

void FUN_106a53c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a53c30; end: 106a53e9b; -[SCCameraLockScreenWidgetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a53c30(float param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_1 < 16.0) {
    return;
  }
  uVar3 = param_2;
  FUN_106a53e9c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c07c8c0();
  if ((((uVar3 & 1) != 0) || (uVar3 = uVar4, func_0x00010c073c40(), (uVar3 & 1) != 0)) ||
     (uVar3 = uVar4, func_0x00010c073d80(), (int)uVar3 != 0)) {
    uVar3 = param_2;
    FUN_106a53e9c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126cfee0;
    _objc_alloc();
    lVar15 = (long)_DAT_112756664;
    lVar7 = param_2 + lVar15;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c15ada0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_2 + lVar15;
    _objc_loadWeakRetained(lVar15);
    lVar9 = lVar15;
    func_0x00010c15afc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2 + (long)_DAT_112756668;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_2 + (long)_DAT_11275666c;
    _objc_loadWeakRetained(lVar12);
    lVar13 = lVar12;
    func_0x00010bfe3ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ae00(puVar1,param_3,uVar6,lVar8,lVar9,lVar11,lVar13);
    uVar14 = *(undefined8 *)(param_2 + (long)_DAT_112756670);
    *(undefined **)(param_2 + (long)_DAT_112756670) = puVar1;
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106a53e9c; end: 106a53ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a53e9c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112756678);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a53ec0; end: 106a5403f; -[SCCameraLockScreenWidgetEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a53ec0(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (16.0 <= param_1) {
    puVar1 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112756674;
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_2);
    uVar4 = *(undefined8 *)(param_2 + _DAT_112756670);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf3c1e0(uVar4);
    plVar3 = *(long **)(param_2 + lVar5);
    func_0x00010c117720(plVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puStack_48 = PTR_PTR_1126f4720;
    plVar3 = &lStack_50;
    lStack_50 = param_2;
    _objc_msgSendSuper2(plVar3,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 106a54040; end: 106a5406b;  */

void FUN_106a54040(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a5406c; end: 106a54103; -[SCCameraLockScreenWidgetEntryPoint _finishCleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a5406c(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_1 < 16.0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_112756674),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106a54104; end: 106a5417f; -[SCCameraLockScreenWidgetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a54104(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275666c);
  _objc_destroyWeak(param_1 + _DAT_112756668);
  _objc_destroyWeak(param_1 + _DAT_112756664);
  _objc_destroyWeak(param_1 + _DAT_11275667c);
  _objc_destroyWeak(param_1 + _DAT_112756678);
  _objc_storeStrong(param_1 + _DAT_112756674,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112756670,0);
  return;
}


