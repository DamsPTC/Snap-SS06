/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fdbc94; end: 108fdbf33;  */

undefined8 FUN_108fdbc94(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  func_0x00010c0deb60();
  if (param_2 == 0) {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c08c980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c08c980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c08c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bfb68e0(uVar2);
    if ((uVar2 == 0) || (uVar3 == 0)) {
      param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
    }
    else {
      uVar5 = uVar2;
      uVar6 = param_1;
      func_0x00010bfb68e0();
      _CGRectEqualToRect();
      if ((uVar5 & 1) == 0) {
        func_0x00010bfb68e0(uVar2);
        _CGRectUnion();
        param_1 = uVar6;
      }
      uVar5 = uVar3;
      func_0x00010bfb68e0();
      _CGRectEqualToRect();
      if ((uVar5 & 1) == 0) {
        func_0x00010bfb68e0(uVar3);
        _CGRectUnion();
        param_1 = uVar6;
      }
      uVar5 = uVar4;
      func_0x00010bfb68e0();
      _CGRectEqualToRect();
      if ((uVar5 & 1) == 0) {
        func_0x00010bfb68e0(uVar4);
        _CGRectUnion();
        param_1 = uVar6;
      }
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108fdbf34; end: 108fdc0a3; -[SCSectionKitSeeMoreView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fdbf34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126b1740;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277f3b4;
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
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277f3b8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fdc0a4; end: 108fdc1ff; -[SCSectionKitSeeMoreView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffba0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277f3b8));
  lVar5 = (long)_DAT_11277f3b4;
  uVar4 = param_1;
  uVar6 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar5));
  uVar1 = *(ulong *)(param_5 + lVar5);
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _CGPathGetBoundingBox();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar4,uVar6,uVar7,uVar8);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(param_1,param_2,param_3,param_4,0x4020000000000000,0x4020000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 108fdc200; end: 108fdc37b; -[SCSectionKitSeeMoreView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc200(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d0e78;
  _objc_opt_class(PTR_PTR_1126d0e78);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11277f3bc;
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
      if ((uVar3 & 1) != 0) goto LAB_108fdc35c;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c2716a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277f3b8));
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f3b4);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fdc35c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fdc37c; end: 108fdc40f; +[SCSectionKitSeeMoreView sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_108fdc37c(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d0e78;
  _objc_opt_class(PTR_PTR_1126d0e78);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c074100();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    param_1 = param_1 + -16.0;
  }
  _objc_release(param_4);
  auVar4._8_8_ = 0x403e000000000000;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 108fdc410; end: 108fdc49f; -[SCSectionKitSeeMoreView setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00();
  func_0x00010bf199e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f3b4);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fdc4a0; end: 108fdc57b; -[SCSectionKitSeeMoreView setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc4a0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126d0e78;
  uVar5 = *(ulong *)(param_1 + _DAT_11277f3bc);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  if (param_3 == 0) {
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf14040();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277f3b4);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fdc57c; end: 108fdc5b7; -[SCSectionKitSeeMoreView _onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc57c(long param_1)

{
  param_1 = param_1 + _DAT_11277f3c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c156220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fdc5b8; end: 108fdc5c7; -[SCSectionKitSeeMoreView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdc5b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3bc);
}



/* Entry: 108fdc5c8; end: 108fdc5d7; -[SCSectionKitSeeMoreView roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdc5c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3ac);
}



/* Entry: 108fdc5d8; end: 108fdc5e7; -[SCSectionKitSeeMoreView highlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fdc5d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f3b0);
}



/* Entry: 108fdc5e8; end: 108fdc607; -[SCSectionKitSeeMoreView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc5e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f3c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fdc608; end: 108fdc61b; -[SCSectionKitSeeMoreView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc608(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f3c0,param_3);
  return;
}



/* Entry: 108fdc61c; end: 108fdc677; -[SCSectionKitSeeMoreView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdc61c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277f3c0);
  _objc_storeStrong(param_1 + _DAT_11277f3bc,0);
  _objc_storeStrong(param_1 + _DAT_11277f3b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f3b4,0);
  return;
}



/* Entry: 108fdc678; end: 108fdca9b;  */

undefined * FUN_108fdc678(int param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e577d8;
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e577f8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar9 = PTR_PTR_1126d0e78;
  _objc_alloc();
  _objc_retain(ppuVar1);
  if (ppuVar1 == (undefined **)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    if (param_2 - 1U < 2) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
LAB_108fdc824:
      unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(puVar2);
    }
    else {
      if (param_2 == 0) {
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar8;
        func_0x00010bf414e0(0x3fd999999999999a);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        unaff_x23 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bf6d680(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108fdc824;
      }
      unaff_x24 = (undefined *)0x0;
    }
    puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    _objc_release(unaff_x24);
  }
  _objc_release(ppuVar1);
  if (param_2 == 0) {
    unaff_x23 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((param_2 == 1) || (param_2 == 2)) {
    unaff_x23 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_2 == 0) {
    uVar10 = 0x3ff0000000000000;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        unaff_x24 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf415a0(0x3fb999999999999a);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_108fdc960;
    }
    uVar10 = 0x3fb999999999999a;
  }
  unaff_x24 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3feccccccccccccd,uVar10);
  _objc_retainAutoreleasedReturnValue();
LAB_108fdc960:
  func_0x00010c053ac0();
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(puVar8);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain();
    ppuVar3 = ppuVar1;
    func_0x00010c066900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf529e0();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = ppuVar1;
      func_0x00010bf6c000();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf529e0();
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar5 = ppuVar1;
        func_0x00010c286820(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010bf529e0();
        puVar9 = (undefined *)(ulong)(ppuVar6 != (undefined **)0x0);
        _objc_release(ppuVar5);
      }
      else {
        puVar9 = (undefined *)0x1;
      }
      _objc_release(ppuVar4);
    }
    else {
      puVar9 = (undefined *)0x1;
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
    return puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 108fdca9c; end: 108fdcaeb; -[SCScrollableSectionCollectionViewLayout init] */

undefined1 * FUN_108fdca9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffba8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf46aa0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fdcaec; end: 108fdcb3b; -[SCScrollableSectionCollectionViewLayout initWithCoder:] */

undefined1 * FUN_108fdcaec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffba8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf46aa0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fdcb3c; end: 108fdcbe3; -[SCScrollableSectionCollectionViewLayout configure] */

void FUN_108fdcb3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcda8;
  _objc_opt_class(PTR_PTR_1126dcda8);
  func_0x00010c126020(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110f16558);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0be0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c18a4e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126dcdb0;
  _objc_opt_new(PTR_PTR_1126dcdb0);
  func_0x00010c18b1c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fdcbe4; end: 108fdcc1b; -[SCScrollableSectionCollectionViewLayout setShowsHorizontalScrollIndicators:] */

void FUN_108fdcbe4(undefined8 param_1)

{
  func_0x00010bf6a240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fdcc1c; end: 108fdcc27; +[SCScrollableSectionCollectionViewLayout invalidationContextClass] */

void FUN_108fdcc1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126dcd60);
  return;
}



/* Entry: 108fdcc28; end: 108fdcc2f; -[SCScrollableSectionCollectionViewLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_108fdcc28(void)

{
  return 1;
}



/* Entry: 108fdcc30; end: 108fdccc3; -[SCScrollableSectionCollectionViewLayout scrollViewForSection:] */

void FUN_108fdcc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf67680();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108fdccc4; end: 108fdce7f; -[SCScrollableSectionCollectionViewLayout prepareLayout] */

void FUN_108fdccc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ffba8;
  lStack_70 = param_4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_prepareLayout_112620088);
  lVar1 = param_4;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar1 = param_4;
    func_0x00010c0de5c0();
    if (0 < lVar1) {
      lVar7 = 0;
      do {
        puVar3 = PTR_PTR_1126dcdb8;
        _objc_opt_new(PTR_PTR_1126dcdb8);
        func_0x00010c1b9a20();
        func_0x00010c1abfe0(puVar3);
        lVar4 = param_4;
        func_0x00010bf40120(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        func_0x00010c17e7e0(param_3,puVar3);
        _objc_release(lVar4);
        func_0x00010c1cbe40(puVar3);
        lVar4 = param_4;
        func_0x00010bf67680(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0e00e0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ac00(puVar3);
        _objc_release(lVar6);
        _objc_release(puVar5);
        _objc_release(lVar4);
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
    }
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1f9780(param_4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  func_0x00010c08d080(param_4);
  return;
}



/* Entry: 108fdce80; end: 108fdcf6f; -[SCScrollableSectionCollectionViewLayout layoutSectionsIfNeeded] */

void FUN_108fdce80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = param_4;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf40120(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c1827c0(param_3,puStack_48[3],param_4);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 108fdcf70; end: 108fdd26f;  */

void FUN_108fdcf70(double param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  
  _objc_retain(param_4);
  uVar7 = param_4;
  func_0x00010c0d73a0();
  if ((int)uVar7 != 0) {
    func_0x00010c156180(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c1ad980(param_4);
    func_0x00010c068300(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c1adf60(param_4);
    func_0x00010c0ce440(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c1adf80(param_4);
    func_0x00010bfdfee0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c1a79a0(param_4);
    func_0x00010bfb44e0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c19e700(param_4);
    func_0x00010c0ddfc0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c1cfc80(param_4);
    func_0x00010c235300(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c201520(param_4);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c0deea0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        uVar8 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010bfec9e0(param_4);
        func_0x00010bfed020(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084aa0(uVar8);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        uVar8 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010bfec9e0(param_4);
        func_0x00010bfed020(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ed5c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar8);
        _objc_release(puVar3);
        uVar7 = uVar7 + 1;
        uVar4 = param_4;
        func_0x00010c0deea0();
      } while (uVar7 < uVar4);
    }
    fVar9 = SUB84(param_1,0);
    func_0x00010c1b6280(param_4);
    func_0x00010c1d6640(param_4);
    func_0x00010c1099a0(param_4);
    func_0x00010be98860(*(undefined8 *)(param_3 + 0x20));
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0e1c80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfec9e0(param_4);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (double)fVar9;
    func_0x00010c1d0bc0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18),
                        param_4);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010bfb68e0(param_4);
  _CGRectGetHeight();
  lVar6 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  *(double *)(lVar6 + 0x18) = param_1 + *(double *)(lVar6 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fdd270; end: 108fdd3e7; -[SCScrollableSectionCollectionViewLayout _sanitizeOffsetCacheForSection:] */

void FUN_108fdd270(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_6);
  func_0x00010c0843e0(param_6);
  func_0x00010c0682e0(param_6);
  dVar7 = param_1 * 2.0;
  uVar1 = param_4;
  func_0x00010c0e1c80(param_4);
  fVar5 = SUB84(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_6;
  func_0x00010bfec9e0(param_6);
  func_0x00010c0df840(puVar3,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0(uVar1,param_5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar6 = (double)(ulong)(uint)-fVar5;
  dVar8 = (double)-fVar5;
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  func_0x00010bf40a80(param_6);
  dVar6 = (param_3 + dVar7) - dVar6;
  if (dVar6 <= dVar8) {
    dVar8 = dVar6;
  }
  dVar7 = -dVar8;
  if (dVar8 <= 0.0) {
    dVar7 = -0.0;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar7,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c80(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_6;
  func_0x00010bfec9e0(param_6);
  _objc_release(param_6);
  func_0x00010c0df840(puVar3,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_5,puVar4,puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108fdd3e8; end: 108fdd7c7; -[SCScrollableSectionCollectionViewLayout invalidateLayoutWithContext:] */

/* WARNING: Possible PIC construction at 0x000108fdd760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fdd764) */

void FUN_108fdd3e8(float param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_188;
  undefined *puStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puStack_180 = PTR_PTR_1126ffba8;
  lStack_188 = param_4;
  _objc_msgSendSuper2(&lStack_188,PTR_s_invalidateLayoutWithContext__1125f8230,param_6);
  uVar1 = param_6;
  func_0x00010c069ec0();
  if ((int)uVar1 == 0) {
    uVar1 = param_6;
    func_0x00010c069e40();
    if ((int)uVar1 != 0) {
      uVar10 = 0;
      lVar2 = param_4;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      param_1 = (float)uVar10;
      while (lVar3 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010c1cbe40(*(undefined8 *)(lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar2;
        func_0x00010bf52a60();
        param_1 = (float)uVar10;
      }
      _objc_release(lVar2);
    }
    puVar4 = PTR_PTR_1126dcd60;
    _objc_retain(param_6);
    _objc_opt_class(puVar4);
    uVar5 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar4);
    uVar1 = param_6;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    if (uVar1 != 0) {
      uVar1 = param_6;
      func_0x00010c069e00();
      if ((int)uVar1 != 0) {
        param_1 = 0.0;
        lVar2 = param_4;
        func_0x00010c156b00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        lVar7 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar8 = 0;
          do {
            uVar10 = param_3;
            if (lRam0000000000000000 != lVar7) {
              _objc_enumerationMutation(lVar2);
              uVar10 = param_3;
            }
            uVar9 = *(undefined8 *)(lVar8 * 8);
            func_0x00010c1cbe40(uVar9);
            lVar6 = param_4;
            func_0x00010bf40120(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0();
            param_3 = uVar10;
            func_0x00010c17e7e0(uVar10,uVar9);
            param_1 = (float)uVar10;
            _objc_release(lVar6);
            lVar8 = lVar8 + 1;
          } while (lVar3 != lVar8);
          lVar3 = lVar2;
          func_0x00010bf52a60();
        }
        _objc_release(lVar2);
      }
      uVar1 = param_6;
      func_0x00010c06a300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 != 0) {
        uVar1 = param_6;
        func_0x00010c06a300(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e1c40();
        _objc_release(uVar1);
        lVar3 = param_4;
        func_0x00010c0e1c80(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar7 = param_4;
        func_0x00010c156b00(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_6;
        func_0x00010c06a300(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecde0(lVar7);
        func_0x00010c0df840(puVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c0e00e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        _objc_release(lVar2);
        _objc_release(puVar4);
        _objc_release(uVar1);
        _objc_release(lVar7);
        _objc_release(lVar3);
        func_0x00010c06a300(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0bc0((double)param_1,param_2);
        _objc_release(param_6);
      }
      func_0x00010bf40120(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      goto code_r0x00010bf4d5e0;
    }
    _objc_release(0);
  }
  else {
    func_0x00010c1f9780(param_4);
  }
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010bf4d5e0:
                    /* WARNING: Could not recover jumptable at 0x00010bf4d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108fdd7c8; end: 108fdd7cb; -[SCScrollableSectionCollectionViewLayout collectionViewContentSize] */

void FUN_108fdd7c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSize_1125b0f20);
  return;
}



/* Entry: 108fdd7cc; end: 108fdd8b3; -[SCScrollableSectionCollectionViewLayout layoutAttributesForItemAtIndexPath:] */

void FUN_108fdd7cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c29f960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c1554e0();
  uVar2 = param_1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar4 < uVar3) {
    func_0x00010c156b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c1554e0(uVar1);
    uVar2 = param_1;
    func_0x00010c0dfd40(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0840e0(uVar1);
    uVar4 = uVar2;
    func_0x00010c08c960(uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108fdd8b4; end: 108fdd9fb; -[SCScrollableSectionCollectionViewLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

void FUN_108fdd8b4(ulong param_1,undefined8 param_2,undefined **param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c1554e0();
  uVar1 = param_1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    func_0x00010c156b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c1554e0(param_4);
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar3 = uVar1;
    if (param_3 == *(undefined ***)PTR__UICollectionElementKindSectionHeader_110345b00) {
      func_0x00010bfe0200(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == *(undefined ***)PTR__UICollectionElementKindSectionFooter_110345af8) {
      func_0x00010bfb4540(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == &PTR____CFConstantStringClassReference_110f16578) {
      func_0x00010bf14820(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108fdd9fc; end: 108fddac3; -[SCScrollableSectionCollectionViewLayout layoutAttributesForDecorationViewOfKind:atIndexPath:] */

void FUN_108fdd9fc(ulong param_1,undefined8 param_2,undefined **param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c0840e0();
  uVar2 = param_1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  uVar2 = 0;
  if ((param_3 == &PTR____CFConstantStringClassReference_110f16558) && (param_4 < uVar1)) {
    func_0x00010c156b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf67660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108fddac4; end: 108fddc93; -[SCScrollableSectionCollectionViewLayout layoutAttributesForElementsInRect:] */

undefined *
FUN_108fddac4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar12 = param_3;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  dVar11 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar3 = param_5;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    bVar1 = false;
    lVar8 = *plStack_140;
    do {
      lVar10 = 0;
      bVar9 = bVar1;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        lVar7 = *(long *)(lStack_148 + lVar10 * 8);
        lVar5 = lVar7;
        dVar11 = param_1;
        dVar12 = param_3;
        func_0x00010c08ca20(param_1,param_2,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf529e0();
        bVar1 = lVar6 != 0;
        if (lVar6 == 0) {
          if (bVar9) {
            _objc_release(lVar5);
            goto LAB_108fddc44;
          }
        }
        else {
          func_0x00010befa160(puVar2,param_6,lVar5);
          lVar6 = param_5;
          func_0x00010c23b300();
          if ((int)lVar6 != 0) {
            func_0x00010bf14820(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2,param_6,lVar7);
            _objc_release(lVar7);
          }
        }
        _objc_release(lVar5);
        lVar10 = lVar10 + 1;
        bVar9 = bVar1;
      } while (lVar4 != lVar10);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_6,&uStack_150,auStack_110,0x10);
    } while (lVar4 != 0);
  }
LAB_108fddc44:
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010bf4d5e0();
  return (undefined *)(ulong)(dVar12 != dVar11);
}



/* Entry: 108fddc94; end: 108fddcbb; -[SCScrollableSectionCollectionViewLayout shouldInvalidateLayoutForBoundsChange:] */

bool FUN_108fddc94(double param_1,undefined8 param_2,double param_3)

{
  func_0x00010bf4d5e0();
  return param_3 != param_1;
}



/* Entry: 108fddcbc; end: 108fddd0f; -[SCScrollableSectionCollectionViewLayout invalidationContextForBoundsChange:] */

void FUN_108fddcbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffba8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fddd10; end: 108fdde57; -[SCScrollableSectionCollectionViewLayout shouldUseFlowLayoutInSection:] */

ulong FUN_108fddd10(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c318f8(uVar2,PTR_DAT_1126a5bb0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf40460(uVar2);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 108fdde58; end: 108fde117; -[SCScrollableSectionCollectionViewLayout scrollViewDidScroll:] */

void FUN_108fdde58(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c268120();
  uVar2 = param_2;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar1 < uVar3) {
    uVar1 = param_2;
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bfe6860();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar1 & 1) == 0) {
      func_0x00010bf4cdc0(param_4);
      func_0x00010c0df720(-param_1,puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_2;
      func_0x00010c0e1c80(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar1);
      _objc_release(puVar5);
      _objc_release(uVar1);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126dcd60;
      _objc_opt_new(PTR_PTR_1126dcd60);
      uVar1 = param_2;
      func_0x00010c156b00(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae820(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      func_0x00010c06a080(param_2);
      uVar1 = param_2;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar6 = uVar3;
      func_0x000107c318f8(uVar3,PTR_DAT_1126a5bb0);
      uVar1 = uVar3;
      if ((int)uVar6 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      if (uVar1 != 0) {
        uVar1 = param_2;
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        _objc_opt_respondsToSelector();
        _objc_release(uVar6);
        _objc_release(uVar1);
        _objc_release(uVar3);
        if ((uVar7 & 1) != 0) {
          uVar1 = param_2;
          func_0x00010bf40120(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf40120(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4cdc0(param_4);
          func_0x00010bf403a0(uVar3);
          _objc_release(param_2);
          _objc_release(uVar3);
          _objc_release(uVar1);
        }
      }
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fde118; end: 108fde267; -[SCScrollableSectionCollectionViewLayout scrollViewWillBeginDragging:] */

void FUN_108fde118(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c318f8(uVar2,PTR_DAT_1126a5bb0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c268120(param_3);
      func_0x00010bf40420(uVar2);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fde268; end: 108fde3d7; -[SCScrollableSectionCollectionViewLayout scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_108fde268(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c318f8(uVar2,PTR_DAT_1126a5bb0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_2;
      func_0x00010bf40120(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c268120(param_4);
      func_0x00010bf40440(param_1,uVar2);
      _objc_release(param_2);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fde3d8; end: 108fde537; -[SCScrollableSectionCollectionViewLayout scrollViewDidEndDragging:willDecelerate:] */

void FUN_108fde3d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c318f8(uVar2,PTR_DAT_1126a5bb0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c268120(param_3);
      func_0x00010bf403e0(uVar2);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fde538; end: 108fde687; -[SCScrollableSectionCollectionViewLayout scrollViewWillBeginDecelerating:] */

void FUN_108fde538(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c318f8(uVar2,PTR_DAT_1126a5bb0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c268120(param_3);
      func_0x00010bf40400(uVar2);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fde688; end: 108fde7d7; -[SCScrollableSectionCollectionViewLayout scrollViewDidEndDecelerating:] */

void FUN_108fde688(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c318f8(uVar2,PTR_DAT_1126a5bb0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c268120(param_3);
      func_0x00010bf403c0(uVar2);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fde7d8; end: 108fde89b; -[SCScrollableSectionCollectionViewLayout interItemSpacingForSection:] */

undefined8 FUN_108fde7d8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010c0ce460(param_2);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf402c0(uVar2);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fde89c; end: 108fde98b; -[SCScrollableSectionCollectionViewLayout sectionInsetsForSection:] */

undefined8 FUN_108fde89c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010c156120(param_2);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40280(uVar2);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fde98c; end: 108fdea5b; -[SCScrollableSectionCollectionViewLayout headerSizeForSection:] */

undefined1  [16] FUN_108fde98c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010bfdfe00(param_3);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40360(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108fdea5c; end: 108fdeb2b; -[SCScrollableSectionCollectionViewLayout footerSizeForSection:] */

undefined1  [16] FUN_108fdea5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010bfb4480(param_3);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40340(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108fdeb2c; end: 108fdec0f; -[SCScrollableSectionCollectionViewLayout itemSizeForIndexPath:] */

undefined1  [16]
FUN_108fdeb2c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010c084a80(param_3);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40480(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108fdec10; end: 108fded97; -[SCScrollableSectionCollectionViewLayout scrollViewConfigurationForSection:] */

void FUN_108fdec10(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010bf6a240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = uVar3;
  func_0x000107c318f8(uVar3,PTR_DAT_1126a5bb0);
  uVar2 = uVar3;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar4 = uVar1;
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    _objc_opt_respondsToSelector();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if ((uVar6 & 1) != 0) {
      uVar2 = param_1;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf40380();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        uVar4 = uVar5;
      }
      _objc_retain(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar5);
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108fded98; end: 108fdee17; -[SCScrollableSectionCollectionViewLayout delegate] */

void FUN_108fded98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_DAT_1126a59b0;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  func_0x000107c318f8(uVar3,puVar2);
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fdee18; end: 108fdeebf; -[SCScrollableSectionCollectionViewLayout numSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108fdee18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f460;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0df2e0();
  }
  else {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf40540(lVar3,param_2,lVar2,param_1);
    _objc_release(lVar2);
    param_1 = lVar3;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108fdeec0; end: 108fdef73; -[SCScrollableSectionCollectionViewLayout numItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108fdeec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f460;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0deec0();
  }
  else {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf40300(lVar3,param_2,lVar2,param_1,param_3);
    _objc_release(lVar2);
    param_1 = lVar3;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108fdef74; end: 108fdf02b; -[SCScrollableSectionCollectionViewLayout originalIndexPathForItemAtVirtualIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdef74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f460;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  else {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf40320(lVar3,param_2,lVar2,param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fdf02c; end: 108fdf0e3; -[SCScrollableSectionCollectionViewLayout virtualIndexPathForItemAtOriginalIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf02c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f460;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  else {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf404a0(lVar3,param_2,lVar2,param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fdf0e4; end: 108fdf403; -[SCScrollableSectionCollectionViewLayout scrollToItemAtIndexPath:atScrollPosition:] */

void FUN_108fdf0e4(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_7);
  if (param_7 == 0) goto LAB_108fdf3e0;
  uVar1 = param_7;
  func_0x00010c1554e0();
  uVar2 = param_5;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar3 <= uVar1) goto LAB_108fdf3e0;
  uVar1 = param_5;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c1554e0(param_7);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c0840e0();
  uVar2 = uVar3;
  func_0x00010c084400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar1 < uVar4) {
    func_0x00010c0843e0(uVar3);
    dVar7 = param_3;
    func_0x00010bf40a80(uVar3);
    uVar1 = uVar3;
    dVar8 = param_1;
    func_0x00010c084400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_7;
    func_0x00010c0840e0(param_7);
    uVar4 = uVar1;
    func_0x00010c0dfd40(uVar1,param_6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar4);
    _objc_release(uVar1);
    if (param_8 == 0x20) {
      dVar8 = dVar8 + dVar7;
      dVar7 = -dVar8;
      func_0x00010c067640(uVar3);
      func_0x00010bf40a80(uVar3);
      param_1 = dVar8 + (dVar7 - param_4);
LAB_108fdf2b0:
      param_1 = (double)NEON_fminnm(param_1,0);
    }
    else {
      param_1 = param_1 - param_3;
      if (param_8 == 0x10) {
        dVar7 = dVar7 * 0.5;
        dVar8 = dVar8 + dVar7;
        func_0x00010bf40a80(uVar3);
        dVar8 = dVar7 * 0.5 - dVar8;
        if (param_1 <= dVar8) {
          param_1 = dVar8;
        }
        goto LAB_108fdf2b0;
      }
      if (param_8 != 8) goto LAB_108fdf3d8;
      func_0x00010c067640(uVar3);
      if (param_1 <= -(dVar8 + param_2)) {
        param_1 = -(dVar8 + param_2);
      }
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c0e1c80(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = param_7;
    func_0x00010c1554e0(param_7);
    func_0x00010c0df780(puVar6,param_6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_6,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar1);
    _objc_release(puVar5);
    uVar1 = param_5;
    func_0x00010bf67680(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = uVar3;
    func_0x00010bfec9e0(uVar3);
    func_0x00010c0df840(puVar6,param_6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0(uVar1,param_6,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289760(-param_1,0);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126dcd60;
    _objc_opt_new(PTR_PTR_1126dcd60);
    func_0x00010c1ae820();
    func_0x00010c06a080(param_5,param_6,puVar6);
    _objc_release(puVar6);
  }
LAB_108fdf3d8:
  _objc_release(uVar3);
LAB_108fdf3e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108fdf404; end: 108fdf61f; -[SCScrollableSectionCollectionViewLayout indexPathVisiblityRatio:] */

double FUN_108fdf404(double param_1,undefined8 param_2,double param_3,ulong param_4,
                    undefined8 param_5,ulong param_6)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_6);
  dVar9 = 0.0;
  if (param_6 != 0) {
    uVar3 = param_6;
    func_0x00010c1554e0();
    uVar4 = param_4;
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    if (uVar3 < uVar5) {
      uVar3 = param_4;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_6;
      func_0x00010c1554e0(param_6);
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_5,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_6;
      func_0x00010c0840e0();
      uVar4 = uVar5;
      func_0x00010c084400();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      if (uVar3 < uVar6) {
        uVar3 = uVar5;
        func_0x00010c084400(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_6;
        func_0x00010c0840e0(param_6);
        uVar6 = uVar3;
        func_0x00010c0dfd40(uVar3,param_5,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1080();
        dVar10 = param_1;
        _objc_release(uVar6);
        _objc_release(uVar3);
        if (0.0 < param_3) {
          func_0x00010c0e1c80(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar3 = param_6;
          func_0x00010c1554e0(param_6);
          func_0x00010c0df780(puVar7,param_5,uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_4;
          func_0x00010c0e00e0(param_4,param_5,puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar8 = dVar10;
          _objc_release(uVar3);
          _objc_release(puVar7);
          _objc_release(param_4);
          param_1 = param_1 + dVar10;
          dVar10 = param_3 + param_1;
          func_0x00010bf40a80(uVar5);
          bVar1 = false;
          bVar2 = false;
          if (0.0 < dVar10) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(param_1) && !NAN(dVar8)) {
              bVar1 = param_1 < dVar8;
              bVar2 = false;
            }
          }
          if (bVar1 != bVar2) {
            if (param_1 <= 0.0) {
              dVar9 = dVar10 / param_3;
            }
            else {
              dVar9 = 1.0;
              if (dVar8 <= dVar10) {
                dVar9 = (dVar8 - param_1) / param_3;
              }
            }
          }
        }
      }
      _objc_release(uVar5);
    }
  }
  _objc_release(param_6);
  return dVar9;
}



/* Entry: 108fdf620; end: 108fdf86f; -[SCScrollableSectionCollectionViewLayout resetAllSectionOffsets] */

void FUN_108fdf620(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_3;
  func_0x00010c0e1c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf529e0();
  _objc_release(uVar6);
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar7 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar8 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    do {
      uVar1 = param_3;
      func_0x00010c156b00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1c40();
      uVar3 = param_3;
      func_0x00010c156b00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0bc0(0,param_2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010c156b00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9dc0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010bf67680(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0(uVar1,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      param_2 = uVar8;
      func_0x00010c1822e0(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(puVar5);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010c156b00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9dc0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar6 = uVar6 + 1;
      uVar1 = param_3;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar6 < uVar2);
  }
  return;
}



/* Entry: 108fdf870; end: 108fdf87f; -[SCScrollableSectionCollectionViewLayout minimumInteritemSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdf870(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3c4);
}



/* Entry: 108fdf880; end: 108fdf88f; -[SCScrollableSectionCollectionViewLayout setMinimumInteritemSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf880(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277f3c4) = param_1;
  return;
}



/* Entry: 108fdf890; end: 108fdf89f; -[SCScrollableSectionCollectionViewLayout minimumInterSectionSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdf890(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3c8);
}



/* Entry: 108fdf8a0; end: 108fdf8af; -[SCScrollableSectionCollectionViewLayout setMinimumInterSectionSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf8a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277f3c8) = param_1;
  return;
}



/* Entry: 108fdf8b0; end: 108fdf8c3; -[SCScrollableSectionCollectionViewLayout itemSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fdf8b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f3cc);
}



/* Entry: 108fdf8c4; end: 108fdf8d7; -[SCScrollableSectionCollectionViewLayout setItemSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf8c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f3cc;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108fdf8d8; end: 108fdf8eb; -[SCScrollableSectionCollectionViewLayout headerReferenceSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fdf8d8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f3d0);
}



/* Entry: 108fdf8ec; end: 108fdf8ff; -[SCScrollableSectionCollectionViewLayout setHeaderReferenceSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf8ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f3d0;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108fdf900; end: 108fdf913; -[SCScrollableSectionCollectionViewLayout footerReferenceSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fdf900(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f3d4);
}



/* Entry: 108fdf914; end: 108fdf927; -[SCScrollableSectionCollectionViewLayout setFooterReferenceSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf914(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f3d4;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108fdf928; end: 108fdf93b; -[SCScrollableSectionCollectionViewLayout estimatedItemSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fdf928(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f3d8);
}



/* Entry: 108fdf93c; end: 108fdf94f; -[SCScrollableSectionCollectionViewLayout setEstimatedItemSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf93c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f3d8;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108fdf950; end: 108fdf967; -[SCScrollableSectionCollectionViewLayout sectionInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdf950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3dc);
}



/* Entry: 108fdf968; end: 108fdf97f; -[SCScrollableSectionCollectionViewLayout setSectionInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277f3dc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108fdf980; end: 108fdf99f; -[SCScrollableSectionCollectionViewLayout virtualSectionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf980(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fdf9a0; end: 108fdf9b3; -[SCScrollableSectionCollectionViewLayout setVirtualSectionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f460,param_3);
  return;
}



/* Entry: 108fdf9b4; end: 108fdf9c3; -[SCScrollableSectionCollectionViewLayout defaultScrollViewConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdf9b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f464);
}



/* Entry: 108fdf9c4; end: 108fdfa03; -[SCScrollableSectionCollectionViewLayout setDefaultScrollViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdf9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f464;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fdfa04; end: 108fdfa13; -[SCScrollableSectionCollectionViewLayout showsSectionBackgrounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fdfa04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f3e0);
}



/* Entry: 108fdfa14; end: 108fdfa23; -[SCScrollableSectionCollectionViewLayout setShowsSectionBackgrounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdfa14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277f3e0) = param_3;
  return;
}



/* Entry: 108fdfa24; end: 108fdfa37; -[SCScrollableSectionCollectionViewLayout contentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fdfa24(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f3e4);
}



/* Entry: 108fdfa38; end: 108fdfa4b; -[SCScrollableSectionCollectionViewLayout setContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdfa38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f3e4;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108fdfa4c; end: 108fdfa5b; -[SCScrollableSectionCollectionViewLayout sections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdfa4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f468);
}



/* Entry: 108fdfa5c; end: 108fdfa9b; -[SCScrollableSectionCollectionViewLayout setSections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdfa5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f468;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fdfa9c; end: 108fdfaab; -[SCScrollableSectionCollectionViewLayout offsetCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdfa9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f46c);
}



/* Entry: 108fdfaac; end: 108fdfaeb; -[SCScrollableSectionCollectionViewLayout setOffsetCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdfaac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f46c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fdfaec; end: 108fdfafb; -[SCScrollableSectionCollectionViewLayout decorationViewCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdfaec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f470);
}



/* Entry: 108fdfafc; end: 108fdfb3b; -[SCScrollableSectionCollectionViewLayout setDecorationViewCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdfafc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f470;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fdfb3c; end: 108fdfb4f; -[SCScrollableSectionCollectionViewLayout setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdfb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f474,param_3);
  return;
}



/* Entry: 108fdfb50; end: 108fdfbc7; -[SCScrollableSectionCollectionViewLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdfb50(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277f474);
  _objc_storeStrong(param_1 + _DAT_11277f470,0);
  _objc_storeStrong(param_1 + _DAT_11277f46c,0);
  _objc_storeStrong(param_1 + _DAT_11277f468,0);
  _objc_storeStrong(param_1 + _DAT_11277f464,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277f460);
  return;
}



/* Entry: 108fdfbc8; end: 108fdfcb3; -[SCScrollableSectionDecorationView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fdfbc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffbb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dcdc0;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11277f3e8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1738c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c167a20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c167a00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c18e220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fdfcb4; end: 108fdfe13; -[SCScrollableSectionDecorationView updateScrollViewContentViewSizeForSection:contentOffset:] */

void FUN_108fdfcb4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_7);
  func_0x00010c0843e0(param_7);
  dVar3 = param_3;
  func_0x00010c1a9dc0(param_7,param_6,1);
  func_0x00010c0682e0(param_7);
  param_3 = param_3 + dVar4 * 2.0;
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar4 = dVar3 + 1.0;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar1);
  if (param_3 - dVar3 <= param_1) {
    param_1 = param_3 - dVar3;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (dVar4 <= param_3) {
    dVar4 = param_3;
  }
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1827c0(dVar4,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822e0(param_1,param_2);
  _objc_release(param_5);
  func_0x00010c1a9dc0(param_7,param_6,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108fdfe14; end: 108fdffc3; -[SCScrollableSectionDecorationView applyLayoutAttributes:] */

void FUN_108fdfe14(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfecf20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0();
  _objc_release(uVar1);
  puStack_58 = PTR_PTR_1126ffbb0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_applyLayoutAttributes__112527ed0,param_4);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ac00();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf67680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c152980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211780();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0e1c40(uVar2);
  func_0x00010c289760(-param_1,0,param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108fdffc4; end: 108fe019f; -[SCScrollableSectionDecorationView applyScrollViewConfiguration:] */

void FUN_108fdffc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  func_0x00010bf209e0(param_7);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1738c0();
  _objc_release(uVar1);
  func_0x00010bf01fe0(param_7);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167a00();
  _objc_release(uVar1);
  func_0x00010c23b2e0(param_7);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(uVar1);
  func_0x00010c1520e0(param_7);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7ba0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bfed560(param_7);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac160();
  _objc_release(uVar1);
  func_0x00010bf66700(param_7);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a140(param_1);
  _objc_release(uVar1);
  func_0x00010c0798a0(param_7);
  uVar1 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8be0();
  _objc_release(uVar1);
  func_0x00010c07d3e0(param_7);
  _objc_release(param_7);
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fe01a0; end: 108fe03a7; -[SCScrollableSectionDecorationView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe01a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ffbb0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_didMoveToSuperview_1125bb968);
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0(lVar3);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c2306e0();
    if ((int)lVar1 == 0) {
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else {
      _CGAffineTransformMakeScale(&uStack_80,0xbff0000000000000,0x3ff0000000000000);
    }
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11277f3e8));
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 108fe03a8; end: 108fe0437; -[SCScrollableSectionDecorationView willTransitionFromLayout:toLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe03a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277f3e8;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0f36c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0f36c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe0438; end: 108fe043b; -[SCScrollableSectionDecorationView didTransitionFromLayout:toLayout:] */

void FUN_108fe0438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didMoveToSuperview_1125bb968);
  return;
}



/* Entry: 108fe043c; end: 108fe0457; -[SCScrollableSectionDecorationView shouldFlipLayoutDirection] */

bool FUN_108fe043c(long param_1)

{
  func_0x00010bf8d060();
  return param_1 == 1;
}



/* Entry: 108fe0458; end: 108fe0467; -[SCScrollableSectionDecorationView scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe0458(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3e8);
}



/* Entry: 108fe0468; end: 108fe047b; -[SCScrollableSectionDecorationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe0468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f3e8,0);
  return;
}



/* Entry: 108fe047c; end: 108fe050b; -[SCDecorationScrollView gestureRecognizerShouldBegin:] */

bool FUN_108fe047c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  double dVar3;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_5 == lVar1) {
    func_0x00010c297a00(param_5,param_4,param_3);
    dVar3 = -param_2;
    if (0.0 <= param_2) {
      dVar3 = param_2;
    }
    param_1 = ABS(param_1);
    if (param_1 <= 2.0) {
      param_1 = 2.0;
    }
    bVar2 = dVar3 < param_1;
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_5);
  return bVar2;
}



/* Entry: 108fe050c; end: 108fe05df; -[SCDecorationScrollView gestureRecognizer:shouldReceiveTouch:] */

undefined8
FUN_108fe050c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_8);
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar1 = param_5;
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_8,param_6,uVar1);
  _objc_release(param_8);
  _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar2,uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  return param_8;
}



/* Entry: 108fe05e0; end: 108fe064f; -[SCScrollableSectionDecorationViewLayoutAttributes copyWithZone:] */

undefined1 * FUN_108fe05e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffbb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_copyWithZone__1125b2238);
  func_0x00010c1554e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9160(puVar1);
  _objc_release(param_1);
  return (undefined1 *)puVar1;
}



/* Entry: 108fe0650; end: 108fe065f; -[SCScrollableSectionDecorationViewLayoutAttributes section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe0650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3ec);
}



/* Entry: 108fe0660; end: 108fe069f; -[SCScrollableSectionDecorationViewLayoutAttributes setSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe0660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f3ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


