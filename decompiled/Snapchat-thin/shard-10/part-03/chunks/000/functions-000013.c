/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d3734c; end: 107d3744b;  */

undefined1 * FUN_107d3734c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar7 * 8);
        func_0x00010c151b40();
        puVar5 = puVar5 + (uVar2 & 0xffffffff);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    func_0x00010c2709c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c2709c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar5 = (undefined1 *)puVar3;
    func_0x00010bf433a0(puVar3);
    _objc_release(uVar4);
    _objc_release(puVar3);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 107d3744c; end: 107d374cf;  */

undefined8 FUN_107d3744c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c2709c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2709c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107d374d0; end: 107d37517;  */

void FUN_107d374d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb98f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb98f8,
                      &PTR____CFConstantStringClassReference_110eb9918,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107d37518; end: 107d37653; -[SCSharedSharedProfileViewMoreStoriesGroupButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d37518(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fab18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276deb8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276deb8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276debc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276debc) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d37654; end: 107d376db; -[SCSharedSharedProfileViewMoreStoriesGroupButton layoutSubviews] */

void FUN_107d37654(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fab18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(param_1);
  return;
}



/* Entry: 107d376dc; end: 107d376f3; -[SCSharedSharedProfileViewMoreStoriesGroupButton intrinsicContentSize] */

undefined1  [16] FUN_107d376dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4040000000000000;
  return auVar1;
}



/* Entry: 107d376f4; end: 107d37737; -[SCSharedSharedProfileViewMoreStoriesGroupButton text] */

void FUN_107d376f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d37738; end: 107d377a3; -[SCSharedSharedProfileViewMoreStoriesGroupButton setText:] */

void FUN_107d37738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c216260(param_1,param_2,param_3,0);
  func_0x00010c216260(param_1,param_2,param_3,4);
  func_0x00010c216260(param_1,param_2,param_3,1);
  func_0x00010c216260(param_1,param_2,param_3,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d377a4; end: 107d3780f; -[SCSharedSharedProfileViewMoreStoriesGroupButton setForegroundColor:] */

void FUN_107d377a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c216380(param_1,param_2,param_3,0);
  func_0x00010c216380(param_1,param_2,param_3,4);
  func_0x00010c216380(param_1,param_2,param_3,1);
  func_0x00010c216380(param_1,param_2,param_3,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d37810; end: 107d37817; -[SCSharedSharedProfileViewMoreStoriesGroupButton foregroundColor] */

void FUN_107d37810(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c271270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_titleColorForState__112679ec0,0);
  return;
}



/* Entry: 107d37818; end: 107d3788f; -[SCSharedSharedProfileViewMoreStoriesGroupButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d37818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276deb8);
  *(undefined8 *)(param_1 + _DAT_11276deb8) = uVar1;
  _objc_release(uVar2);
  puStack_28 = PTR_PTR_1126fab18;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setBackgroundColor__112639330,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107d37890; end: 107d378eb; -[SCSharedSharedProfileViewMoreStoriesGroupButton setHighlighted:] */

void FUN_107d37890(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long alStack_30 [2];
  long alStack_20 [2];
  
  lVar1 = 4;
  plVar2 = alStack_20;
  if (param_3 == 0) {
    lVar1 = 0;
    plVar2 = alStack_30;
  }
  uVar3 = *(undefined8 *)(param_1 + *(int *)(&DAT_11276deb8 + lVar1));
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126fab18;
  _objc_msgSendSuper2(plVar2,PTR_s_setBackgroundColor__112639330,uVar3);
  return;
}



/* Entry: 107d378ec; end: 107d378fb; -[SCSharedSharedProfileViewMoreStoriesGroupButton highlightedColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d378ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276debc);
}



/* Entry: 107d378fc; end: 107d3793b; -[SCSharedSharedProfileViewMoreStoriesGroupButton setHighlightedColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d378fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276debc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3793c; end: 107d3797b; -[SCSharedSharedProfileViewMoreStoriesGroupButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3793c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276debc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276deb8,0);
  return;
}



/* Entry: 107d3797c; end: 107d37a8b; -[SCSharedSharedProfileViewMoreStoriesGroupCell initWithFrame:] */

undefined1 *
FUN_107d3797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR_PTR_1126d7990;
  _objc_alloc(PTR_PTR_1126d7990);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puStack_58 = PTR_PTR_1126fab20;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_underlyingView__1125e2e00,puVar1);
  func_0x00010c1fe760();
  func_0x00010c20eaa0(puVar2);
  func_0x00010c182b80(0xc024000000000000,0,0xc024000000000000,0,puVar2);
  puVar3 = (undefined1 *)puVar2;
  func_0x00010c27f880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(puVar3);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 107d37a8c; end: 107d37d87; -[SCSharedSharedProfileViewMoreStoriesGroupCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d37a8c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11276dec0;
  puVar6 = *(undefined **)(param_1 + lVar7);
  _objc_retain(puVar6);
  _objc_retain(param_3);
  puVar1 = param_3;
  if (puVar6 != param_3) {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    else {
      puVar1 = puVar6;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar6);
      if (((ulong)puVar1 & 1) != 0) goto LAB_107d37d68;
    }
    puVar6 = PTR_PTR_1126d7928;
    _objc_retain(param_3);
    _objc_opt_class(puVar6);
    puVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    puVar6 = param_3;
    if (((ulong)puVar1 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = param_3;
    _objc_release(uVar2);
    puVar1 = puVar6;
    func_0x00010c2716a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar7);
    _objc_release(puVar1);
    puVar3 = puVar6;
    func_0x00010bf61240();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar1 = puVar3;
    }
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010bf615c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar3);
    lVar7 = lRam00000001138466f0;
    puVar3 = puVar1;
    if (lRam00000001138466f0 < 3) {
      func_0x00010bf414e0(0x3fb999999999999a,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar5);
    if (lVar7 < 3) {
      _objc_release(puVar3);
    }
    lVar7 = lRam00000001138466f0;
    puVar3 = puVar1;
    if (lRam00000001138466f0 < 3) {
      func_0x00010bf414e0(0x3fc999999999999a,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a88c0();
    _objc_release(lVar5);
    if (lVar7 < 3) {
      _objc_release(puVar3);
    }
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ea60();
    _objc_release(param_1);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
LAB_107d37d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d37d88; end: 107d37e4f; -[SCSharedSharedProfileViewMoreStoriesGroupCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d37d88(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d7928;
  uVar4 = *(ulong *)(param_1 + _DAT_11276dec0);
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
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276dec4);
    func_0x00010beeecc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d37e50; end: 107d37e57; -[SCSharedSharedProfileViewMoreStoriesGroupCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_107d37e50(void)

{
  return 0;
}



/* Entry: 107d37e58; end: 107d37e63; +[SCSharedSharedProfileViewMoreStoriesGroupCell sizeWithViewModel:constrainedToSize:] */

void FUN_107d37e58(void)

{
  return;
}



/* Entry: 107d37e64; end: 107d37e73; -[SCSharedSharedProfileViewMoreStoriesGroupCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d37e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276dec0);
}



/* Entry: 107d37e74; end: 107d37e83; -[SCSharedSharedProfileViewMoreStoriesGroupCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d37e74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276dec4);
}



/* Entry: 107d37e84; end: 107d37ec3; -[SCSharedSharedProfileViewMoreStoriesGroupCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d37e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276dec4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d37ec4; end: 107d37f03; -[SCSharedSharedProfileViewMoreStoriesGroupCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d37ec4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276dec4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276dec0,0);
  return;
}



/* Entry: 107d37f04; end: 107d3914b; -[SCSharedStoryProfileIdentityView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107d37f04(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  undefined8 *puVar14;
  undefined *unaff_x22;
  undefined *unaff_x23;
  long lVar15;
  undefined *unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_178 = PTR_PTR_1126fab28;
  puVar14 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar14,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar14);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar13 = *(undefined8 *)((long)puVar14 + (long)_DAT_11276dec8);
    *(undefined **)((long)puVar14 + (long)_DAT_11276dec8) = puVar1;
    _objc_release(uVar13);
    puVar2 = PTR__OBJC_CLASS___UIPageControl_1126d2e30;
    _objc_alloc();
    uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    uVar13 = *(undefined8 *)((long)puVar14 + (long)_DAT_11276decc);
    *(undefined **)((long)puVar14 + (long)_DAT_11276decc) = puVar2;
    _objc_release(uVar13);
    _objc_retain(puVar2);
    func_0x00010c1cfe20(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d82a0(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187760(puVar2);
    _objc_release(puVar1);
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010c274200(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493c0(0x4061c00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_1a0 = puVar2;
    puStack_b0 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010bf34860(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar14;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    uVar13 = *(undefined8 *)((long)puStack_188 + (long)_DAT_11276ded0);
    *(undefined **)((long)puStack_188 + (long)_DAT_11276ded0) = puVar3;
    _objc_release(uVar13);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar3);
    func_0x00010bf3ae40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar1);
    func_0x00010c066fa0(puStack_188);
    func_0x00010c219b60(puVar3);
    puStack_1b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar1;
    func_0x00010bf49420(0x4060000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    puStack_1a8 = puVar1;
    puStack_d0 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010bf49420(0x4060000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_c8 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493c0(0xc051c00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_c0 = puVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puStack_188;
    func_0x00010bf34860(puStack_188);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b0);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puStack_1a8);
    _objc_release(puStack_190);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    uVar13 = *(undefined8 *)((long)puStack_188 + (long)_DAT_11276ded4);
    *(undefined **)((long)puStack_188 + (long)_DAT_11276ded4) = puVar2;
    _objc_release(uVar13);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar2);
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar1);
    func_0x00010befbb60(puVar3);
    func_0x00010c219b60(puVar2);
    puStack_1b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar1;
    func_0x00010bf49420(0x405a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_1b0 = puVar1;
    puStack_f0 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf49420(0x405a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    puStack_190 = puVar2;
    puStack_e8 = puVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    puStack_198 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d8 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b8);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    puVar5 = PTR_PTR_1126b0870;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    uVar13 = *(undefined8 *)((long)puStack_188 + (long)_DAT_11276ded8);
    *(undefined **)((long)puStack_188 + (long)_DAT_11276ded8) = puVar5;
    _objc_release(uVar13);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar5);
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5);
    _objc_release(puVar1);
    func_0x00010befbb60(puVar3);
    func_0x00010c219b60(puVar5);
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_190;
    puVar3 = puStack_190;
    puStack_1b0 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    puStack_1c0 = puVar2;
    puStack_110 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    puStack_1a8 = puVar5;
    puStack_108 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar13 = *(undefined8 *)((long)puStack_188 + (long)_DAT_11276dedc);
    *(undefined **)((long)puStack_188 + (long)_DAT_11276dedc) = puVar2;
    puStack_1b0 = puVar2;
    _objc_release(uVar13);
    puVar1 = PTR_PTR_1126b0648;
    _objc_retain(puVar2);
    _objc_alloc();
    func_0x00010c01cb60();
    uVar13 = *(undefined8 *)((long)puStack_188 + (long)_DAT_11276dee0);
    *(undefined **)((long)puStack_188 + (long)_DAT_11276dee0) = puVar1;
    _objc_release(uVar13);
    _objc_retain(puVar1);
    func_0x00010c182220(puVar1);
    func_0x00010c19f0e0(0,0,0x405a000000000000,0x405a000000000000,puVar1);
    puVar2 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x404a000000000000);
    _objc_release(puVar2);
    puVar2 = puStack_190;
    func_0x00010befbb60(puStack_190);
    func_0x00010c219b60(puVar1);
    puStack_1d8 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_1c0 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    puStack_1d0 = puVar5;
    puStack_130 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    puStack_1b8 = puVar1;
    puStack_128 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_118 = puVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1d8);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar10);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1c0);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4058000000000000,0x4058000000000000);
    uVar13 = *(undefined8 *)((long)puStack_188 + (long)_DAT_11276dee4);
    *(undefined **)((long)puStack_188 + (long)_DAT_11276dee4) = puVar2;
    _objc_release(uVar13);
    _objc_retain(puVar2);
    puVar1 = puVar2;
    puStack_1c0 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4048000000000000);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar1);
    puVar5 = PTR_PTR_1126c2eb0;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    uVar13 = *(undefined8 *)((long)puStack_188 + (long)_DAT_11276dee8);
    *(undefined **)((long)puStack_188 + (long)_DAT_11276dee8) = puVar5;
    _objc_release(uVar13);
    _objc_retain(puVar5);
    puVar1 = puStack_198;
    func_0x00010befbb60(puStack_198);
    func_0x00010c219b60(puVar5);
    puStack_1d8 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puVar12;
    func_0x00010bf49420(0x405a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    puStack_150 = puVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010bf49420(0x405a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    puStack_1c8 = puVar5;
    puStack_148 = puVar10;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_138 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1d8);
    puVar14 = puStack_188;
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(puStack_1d0);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    uVar13 = *(undefined8 *)((long)puVar14 + (long)_DAT_11276deec);
    *(undefined **)((long)puVar14 + (long)_DAT_11276deec) = puVar2;
    _objc_release(uVar13);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar2);
    func_0x00010c23ba80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4033000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar1);
    func_0x00010c213040(puVar2);
    func_0x00010c1cfce0(puVar2);
    unaff_x24 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    uVar13 = *(undefined8 *)((long)puVar14 + (long)_DAT_11276def0);
    *(undefined **)((long)puVar14 + (long)_DAT_11276def0) = unaff_x24;
    _objc_release(uVar13);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(unaff_x24);
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(unaff_x24);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(unaff_x24);
    _objc_release(puVar1);
    func_0x00010c213040(unaff_x24);
    puVar1 = unaff_x24;
    func_0x00010c1cfce0();
    func_0x000108f58a5c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(unaff_x24);
    _objc_release(puVar1);
    func_0x00010befbb60(puVar14);
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(puVar2);
    func_0x00010c219b60(unaff_x24);
    puStack_200 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    puStack_1d0 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar4;
    func_0x00010bf493c0(0x4064000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    puStack_1e0 = puVar3;
    puStack_170 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    puStack_1e8 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_1f0 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x24;
    puStack_1f8 = puVar1;
    puStack_168 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar3;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x24;
    puStack_160 = unaff_x22;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_158 = unaff_x23;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x19;
    func_0x00010beef8c0(puStack_200);
    _objc_release(unaff_x24);
    _objc_release(puVar2);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_190);
    _objc_release(puStack_198);
    _objc_release(puStack_1a0);
    _objc_release(unaff_x19);
    _objc_release(unaff_x23);
    _objc_release(unaff_x20);
    _objc_release(puVar1);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(puVar3);
    _objc_release(puStack_1f8);
    _objc_release(puStack_1f0);
    _objc_release(puStack_1e8);
    _objc_release(puStack_1e0);
    _objc_release(puStack_1d8);
    puVar1 = puStack_1d0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_107d3914c;
  puStack_240 = unaff_x24;
  puStack_238 = unaff_x23;
  puStack_230 = unaff_x22;
  puStack_228 = unaff_x21;
  puStack_220 = unaff_x20;
  puStack_218 = unaff_x19;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  lVar15 = (long)_DAT_11276def4;
  puVar14 = *(undefined8 **)(puVar1 + lVar15);
  _objc_retain(puVar14);
  _objc_retain(param_3);
  if (puVar14 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      puVar4 = puVar14;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar14);
      if (((ulong)puVar4 & 1) == 0) {
        _objc_retain(param_3);
        uVar13 = *(undefined8 *)(puVar1 + lVar15);
        *(undefined8 **)(puVar1 + lVar15) = param_3;
        _objc_release(uVar13);
        func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_11276dee0));
        func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_11276ded8));
        _objc_initWeak(auStack_248,puVar1);
        uVar16 = *(undefined8 *)(puVar1 + _DAT_11276def8);
        uVar13 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_250,auStack_248);
        _objc_retain(param_3);
        func_0x00010c11da60(uVar16);
        _objc_release(uVar13);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_250);
        _objc_destroyWeak(auStack_248);
      }
      goto LAB_107d392d4;
    }
    _objc_release(puVar14);
    _objc_retain(0);
    puVar14 = *(undefined8 **)(puVar1 + lVar15);
    *(undefined8 *)(puVar1 + lVar15) = 0;
  }
  _objc_release(puVar14);
LAB_107d392d4:
  _objc_release(param_3);
  return param_3;
}



/* Entry: 107d3914c; end: 107d39317; -[SCSharedStoryProfileIdentityView setThumbnailInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3914c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276def4;
  uVar3 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 != 0) {
      uVar1 = uVar3;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) == 0) {
        _objc_retain(param_3);
        uVar2 = *(undefined8 *)(param_1 + lVar5);
        *(ulong *)(param_1 + lVar5) = param_3;
        _objc_release(uVar2);
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276dee0));
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276ded8));
        _objc_initWeak(auStack_48,param_1);
        uVar4 = *(undefined8 *)(param_1 + _DAT_11276def8);
        uVar2 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_3);
        func_0x00010c11da60(uVar4);
        _objc_release(uVar2);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      goto LAB_107d392d4;
    }
    _objc_release(uVar3);
    _objc_retain(0);
    uVar3 = *(ulong *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
  }
  _objc_release(uVar3);
LAB_107d392d4:
  _objc_release(param_3);
  return;
}



/* Entry: 107d39318; end: 107d39373;  */

void FUN_107d39318(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d39374; end: 107d3945f; -[SCSharedStoryProfileIdentityView _handleFetchedThumbnailInfo:thumbnail:isFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d39374(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = *(undefined **)(param_1 + _DAT_11276def4);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(puVar2);
LAB_107d39404:
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276dedc),param_2,puVar2);
    }
  }
  else if (param_3 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x00010c071ae0(puVar2,param_2,param_3);
    _objc_release(param_3);
    _objc_release(puVar2);
    if ((int)puVar1 == 0) goto LAB_107d39440;
    goto LAB_107d39404;
  }
  _objc_release(puVar2);
LAB_107d39440:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d39460; end: 107d394eb; -[SCSharedStoryProfileIdentityView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d39460(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fab28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  if (*(char *)(param_1 + _DAT_11276defc) == '\x01') {
    func_0x00010c17a6a0(0x404a000000000000,0x404a000000000000,
                        *(undefined8 *)(param_1 + _DAT_11276dee4));
  }
  func_0x00010c1c2ca0(*(undefined8 *)(param_1 + _DAT_11276ded4));
  return;
}



/* Entry: 107d394ec; end: 107d3951b; -[SCSharedStoryProfileIdentityView headlineView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d394ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276deec);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d3951c; end: 107d3954b; -[SCSharedStoryProfileIdentityView circleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3951c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ded0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d3954c; end: 107d3955b; -[SCSharedStoryProfileIdentityView headline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3954c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276deec),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 107d3955c; end: 107d3956b; -[SCSharedStoryProfileIdentityView setHeadline:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3955c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276deec),PTR_s_setAttributedText__1126387e8);
  return;
}



/* Entry: 107d3956c; end: 107d3957b; -[SCSharedStoryProfileIdentityView subHeadline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3956c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276def0),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 107d3957c; end: 107d3958b; -[SCSharedStoryProfileIdentityView setSubHeadline:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3957c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276def0),PTR_s_setAttributedText__1126387e8);
  return;
}



/* Entry: 107d3958c; end: 107d3959b; -[SCSharedStoryProfileIdentityView setRingViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3958c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276dee8),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 107d3959c; end: 107d39613; -[SCSharedStoryProfileIdentityView setGroupAvatarConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3959c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276dee0);
    _objc_retain(param_3);
    func_0x00010c1a7f60(uVar1,param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276ded8),param_2,0);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276dec8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107d39614; end: 107d397f3; -[SCSharedStoryProfileIdentityView setGroupAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107d39614(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11276df00;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = param_3;
  _objc_release(uVar1);
  lVar7 = (long)_DAT_11276ded8;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + lVar7),param_2,0);
  }
  puVar4 = PTR_PTR_1126c2ec0;
  _objc_alloc(PTR_PTR_1126c2ec0);
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e76d78;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004820(puVar4,param_2,puVar5,0x1c,1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c2ec8;
  _objc_alloc(PTR_PTR_1126c2ec8);
  func_0x00010c0383e0(0x405a000000000000,0x405a000000000000);
  puVar6 = PTR_PTR_1126c93b8;
  _objc_alloc(PTR_PTR_1126c93b8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276dec8);
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  lVar3 = param_1 + _DAT_11276df04;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c001fc0(puVar6,param_2,uVar1,0,puVar4,puVar5,uVar8,lVar3);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar9),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_11276df08);
}



/* Entry: 107d397f4; end: 107d39803; -[SCSharedStoryProfileIdentityView ringViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d397f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df08);
}



/* Entry: 107d39804; end: 107d39813; -[SCSharedStoryProfileIdentityView storiesThumbnailCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d39804(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276def8);
}



/* Entry: 107d39814; end: 107d39853; -[SCSharedStoryProfileIdentityView setStoriesThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d39814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276def8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d39854; end: 107d39863; -[SCSharedStoryProfileIdentityView thumbnailInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d39854(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276def4);
}



/* Entry: 107d39864; end: 107d39873; -[SCSharedStoryProfileIdentityView groupAvatarScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d39864(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df00);
}



/* Entry: 107d39874; end: 107d39893; -[SCSharedStoryProfileIdentityView groupAvatarScopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d39874(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276df04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d39894; end: 107d398a7; -[SCSharedStoryProfileIdentityView setGroupAvatarScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d39894(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276df04,param_3);
  return;
}



/* Entry: 107d398a8; end: 107d398b7; -[SCSharedStoryProfileIdentityView shouldShowRing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d398a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276defc);
}



/* Entry: 107d398b8; end: 107d398c7; -[SCSharedStoryProfileIdentityView setShouldShowRing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d398b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276defc) = param_3;
  return;
}



/* Entry: 107d398c8; end: 107d399e3; -[SCSharedStoryProfileIdentityView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d398c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276df04);
  _objc_storeStrong(param_1 + _DAT_11276df00,0);
  _objc_storeStrong(param_1 + _DAT_11276def4,0);
  _objc_storeStrong(param_1 + _DAT_11276def8,0);
  _objc_storeStrong(param_1 + _DAT_11276df08,0);
  _objc_storeStrong(param_1 + _DAT_11276dee4,0);
  _objc_storeStrong(param_1 + _DAT_11276ded4,0);
  _objc_storeStrong(param_1 + _DAT_11276ded0,0);
  _objc_storeStrong(param_1 + _DAT_11276def0,0);
  _objc_storeStrong(param_1 + _DAT_11276deec,0);
  _objc_storeStrong(param_1 + _DAT_11276decc,0);
  _objc_storeStrong(param_1 + _DAT_11276dee8,0);
  _objc_storeStrong(param_1 + _DAT_11276dee0,0);
  _objc_storeStrong(param_1 + _DAT_11276dedc,0);
  _objc_storeStrong(param_1 + _DAT_11276ded8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276dec8,0);
  return;
}



/* Entry: 107d399e4; end: 107d39a93; -[SCSharedStoryProfileSupplementaryViewProvider initWithHeaderViewModel:section:actionHandler:] */

undefined1 *
FUN_107d399e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fab30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d39a94; end: 107d39b6f; -[SCSharedStoryProfileSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_107d39a94(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar5);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d0e30;
  _objc_opt_class(PTR_PTR_1126d0e30);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bedf360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d39b70; end: 107d39d0b; -[SCSharedStoryProfileSupplementaryViewProvider _updateSectionHeaderViewWithViewModel:] */

void FUN_107d39b70(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c1565e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b78f8;
  _objc_opt_class(PTR_PTR_1126b78f8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = param_3;
  _objc_release(uVar5);
  if (param_3 != 0) {
    lVar6 = param_3;
    func_0x00010c156600(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27f7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(uVar2);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c279500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      uVar2 = uVar1;
      func_0x00010c27f7c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c279380(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174760(uVar2);
      _objc_release(puVar3);
      _objc_release(lVar6);
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d39d0c; end: 107d39dc3; -[SCSharedStoryProfileSupplementaryViewProvider _handleButtonAccessoryTap] */

void FUN_107d39d0c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0e30;
  uVar4 = *(ulong *)(param_1 + 8);
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
  func_0x00010c279500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = uVar1;
    func_0x00010c279500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d39dc4; end: 107d39dcb; -[SCSharedStoryProfileSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_107d39dc4(void)

{
  return 2;
}



/* Entry: 107d39dcc; end: 107d39e27; -[SCSharedStoryProfileSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_107d39dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010bfe09e0(PTR_PTR_1126b78f0,param_3,0);
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107d39e28; end: 107d39ef3; -[SCSharedStoryProfileSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_107d39e28(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_30;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar7);
    ppuVar2 = ppuVar7;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar1 + 0x20;
      _objc_loadWeakRetained();
      puVar3 = puVar8;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126b78f8;
      _objc_opt_class(PTR_PTR_1126b78f8);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar8);
      puVar8 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar3);
      puVar3 = puVar8;
      func_0x00010c27f7c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181fe0(0,0x4030000000000000,0,0x4030000000000000);
      uVar5 = *(undefined8 *)(puVar1 + 8);
      func_0x00010c156600(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar3);
      _objc_release(uVar5);
      lVar6 = *(long *)(puVar1 + 8);
      func_0x00010c279500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        puVar4 = puVar8;
        func_0x00010c27f7c0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(puVar1 + 8);
        func_0x00010c279380(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c174760(puVar4);
        _objc_release(puVar1);
        _objc_release(uVar5);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(ppuVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107d39ef4; end: 107d3a0bb; -[SCSharedStoryProfileSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_107d39ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar1 = uVar6;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b78f8;
    _objc_opt_class(PTR_PTR_1126b78f8);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar6 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010c27f7c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181fe0(0,0x4030000000000000,0,0x4030000000000000);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c156600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar1);
    _objc_release(uVar4);
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c279500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar3 = uVar6;
      func_0x00010c27f7c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c279380(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174760(uVar3);
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 107d3a0bc; end: 107d3a0c3; -[SCSharedStoryProfileSupplementaryViewProvider actionHandler] */

undefined8 FUN_107d3a0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3a0c4; end: 107d3a0f3; -[SCSharedStoryProfileSupplementaryViewProvider setActionHandler:] */

void FUN_107d3a0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3a0f4; end: 107d3a10b; -[SCSharedStoryProfileSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_107d3a0f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d3a10c; end: 107d3a117; -[SCSharedStoryProfileSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_107d3a10c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107d3a118; end: 107d3a11f; -[SCSharedStoryProfileSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_107d3a118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d3a120; end: 107d3a163; -[SCSharedStoryProfileSupplementaryViewProvider .cxx_destruct] */

void FUN_107d3a120(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d3a164; end: 107d3a1ef; -[SCStoriesProfileAddToStoryCell initWithFrame:] */

undefined1 * FUN_107d3a164(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fab38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d3a1f0; end: 107d3a29f; -[SCStoriesProfileAddToStoryCell _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3a1f0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0ee0;
  uVar4 = *(ulong *)(param_1 + _DAT_11276df20);
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
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276df24);
    func_0x00010c268c60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3a2a0; end: 107d3a45b; -[SCStoriesProfileAddToStoryCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3a2a0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276df20;
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
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_107d3a444;
    }
    puVar2 = PTR_PTR_1126d0ee0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar1 = uVar5;
    func_0x00010bf51e00();
    _objc_release(uVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar2);
    lVar6 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(lVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    func_0x000108f58d74();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c27f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(lVar6);
    _objc_release(puVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_107d3a444:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d3a45c; end: 107d3a467; +[SCStoriesProfileAddToStoryCell sizeWithViewModel:constrainedToSize:] */

void FUN_107d3a45c(void)

{
  return;
}



/* Entry: 107d3a468; end: 107d3a477; -[SCStoriesProfileAddToStoryCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3a468(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df20);
}



/* Entry: 107d3a478; end: 107d3a487; -[SCStoriesProfileAddToStoryCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3a478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df24);
}



/* Entry: 107d3a488; end: 107d3a4c7; -[SCStoriesProfileAddToStoryCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3a488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276df24;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3a4c8; end: 107d3a507; -[SCStoriesProfileAddToStoryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3a4c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276df24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276df20,0);
  return;
}



/* Entry: 107d3a508; end: 107d3a967; -[SCStoriesProfileStoryCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d3a508(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  puStack_78 = PTR_PTR_1126fab40;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276df2c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276df2c) = puVar2;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(puVar2);
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276df30);
    *(undefined **)((long)puVar1 + (long)_DAT_11276df30) = puVar4;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b52f0;
    _objc_retain(puVar4);
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276df34);
    *(undefined **)((long)puVar1 + (long)_DAT_11276df34) = puVar5;
    _objc_release(uVar3);
    _objc_retain(puVar5);
    func_0x00010befbb60(puVar4);
    puVar6 = puVar5;
    func_0x00010c22a660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(0x4000000000000000);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = puVar5;
    func_0x00010c22a660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c22a660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0x3ff0000000000000,0x3ff0000000000000,0x4042000000000000,0x4042000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    puVar7 = puVar5;
    func_0x00010c22a660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar7 = PTR_PTR_1126b0648;
    _objc_alloc();
    func_0x00010c01cb60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276df38);
    *(undefined **)((long)puVar1 + (long)_DAT_11276df38) = puVar7;
    _objc_release(uVar3);
    _objc_retain(puVar7);
    func_0x00010c182220(puVar7);
    func_0x00010c19f0e0(0x4008000000000000,0x4008000000000000,0x4040000000000000,0x4040000000000000,
                        puVar7);
    puVar6 = puVar7;
    func_0x00010c08c0e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar6);
    func_0x00010c21e900(puVar7);
    func_0x00010befbb60(puVar4);
    puVar8 = (undefined1 *)puVar1;
    func_0x00010c27f880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(puVar8);
    puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2640();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11276df3c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar6;
    _objc_release(uVar3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar6);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar11));
    puVar8 = (undefined1 *)puVar1;
    func_0x00010c27f880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar8);
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010bef9040(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c20eaa0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d3a968; end: 107d3aa7f; -[SCStoriesProfileStoryCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3a968(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276df40;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_107d3aa68;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d0ec8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x00010be828a0(param_1);
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_107d3aa68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d3aa80; end: 107d3acb7; -[SCStoriesProfileStoryCell _processViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3aa80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c072360();
  func_0x00010c20eaa0(param_1);
  func_0x00010bfddf00();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276df34);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b7a0();
  _objc_release(lVar3);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b660();
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276df44);
  uVar4 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c11da60(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107d3acb8; end: 107d3ad13;  */

void FUN_107d3acb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d3ad14; end: 107d3ae63; -[SCStoriesProfileStoryCell _handleFetchedThumbnailInfo:thumbnail:isFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3ad14(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d0ec8;
  puVar3 = *(undefined **)(param_1 + _DAT_11276df40);
  _objc_retain(puVar3);
  _objc_opt_class(puVar1);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(puVar2);
LAB_107d3ae00:
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276df2c));
    }
  }
  else {
    puVar1 = puVar2;
    if (param_3 != (undefined *)0x0) {
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar2);
      if ((int)puVar1 == 0) goto LAB_107d3ae3c;
      goto LAB_107d3ae00;
    }
  }
  _objc_release(puVar1);
LAB_107d3ae3c:
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d3ae64; end: 107d3ae83; -[SCStoriesProfileStoryCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3ae64(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_11276df28)) {
    return;
  }
  *(long *)(param_1 + _DAT_11276df28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107d3ae84; end: 107d3af63; -[SCStoriesProfileStoryCell _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3ae84(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0ec8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276df40);
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
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276df48);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3af64; end: 107d3b04b; -[SCStoriesProfileStoryCell _handleTapImageAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3af64(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0ec8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276df40);
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
  func_0x00010c08e760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276df48);
    uVar3 = uVar1;
    func_0x00010c08e760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3b04c; end: 107d3b12b; -[SCStoriesProfileStoryCell _handleTrailingAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3b04c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0ec8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276df40);
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
  func_0x00010c140bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276df48);
    uVar3 = uVar1;
    func_0x00010c140bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3b12c; end: 107d3b1c7; +[SCStoriesProfileStoryCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107d3b12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d0ec8;
  _objc_opt_class(PTR_PTR_1126d0ec8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c072360();
  _objc_release(uVar1);
  uVar4 = 0x4050800000000000;
  if ((int)uVar3 == 0) {
    uVar4 = 0x4053000000000000;
  }
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107d3b1c8; end: 107d3b1d7; -[SCStoriesProfileStoryCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3b1c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df40);
}



/* Entry: 107d3b1d8; end: 107d3b1e7; -[SCStoriesProfileStoryCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3b1d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df48);
}



/* Entry: 107d3b1e8; end: 107d3b227; -[SCStoriesProfileStoryCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3b1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276df48;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3b228; end: 107d3b237; -[SCStoriesProfileStoryCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3b228(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df28);
}



/* Entry: 107d3b238; end: 107d3b247; -[SCStoriesProfileStoryCell storiesThumbnailCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3b238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df44);
}



/* Entry: 107d3b248; end: 107d3b287; -[SCStoriesProfileStoryCell setStoriesThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3b248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276df44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3b288; end: 107d3b327; -[SCStoriesProfileStoryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3b288(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276df44,0);
  _objc_storeStrong(param_1 + _DAT_11276df48,0);
  _objc_storeStrong(param_1 + _DAT_11276df40,0);
  _objc_storeStrong(param_1 + _DAT_11276df3c,0);
  _objc_storeStrong(param_1 + _DAT_11276df2c,0);
  _objc_storeStrong(param_1 + _DAT_11276df38,0);
  _objc_storeStrong(param_1 + _DAT_11276df34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276df30,0);
  return;
}



/* Entry: 107d3b328; end: 107d3b32f; +[SCStoriesProfileStorySnapCell cellStyle] */

undefined8 FUN_107d3b328(void)

{
  return 1;
}



/* Entry: 107d3b330; end: 107d3b703; -[SCStoriesProfileStorySnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107d3b330(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  undefined8 *puVar10;
  undefined *unaff_x22;
  ulong uVar11;
  undefined *unaff_x23;
  undefined8 *unaff_x24;
  long lVar12;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar13;
  undefined8 *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126fab48;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  puVar5 = (undefined *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276df50);
    *(undefined **)((long)puVar2 + (long)_DAT_11276df50) = puVar3;
    puStack_90 = puVar3;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b0648;
    _objc_retain(puVar3);
    _objc_alloc();
    func_0x00010c01cb60();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276df54);
    *(undefined **)((long)puVar2 + (long)_DAT_11276df54) = puVar5;
    _objc_release(uVar4);
    _objc_retain(puVar5);
    func_0x00010c182220(puVar5);
    func_0x00010c19f0e0(0,0,0x4040000000000000,0x4040000000000000,puVar5);
    puStack_a0 = puVar5;
    func_0x00010c08c0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar5);
    unaff_x22 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010bfb68e0(puVar2);
    func_0x00010c013de0(0,0,0x4059000000000000);
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276df58);
    *(undefined **)((long)puVar2 + (long)_DAT_11276df58) = unaff_x22;
    _objc_release(uVar4);
    _objc_retain(unaff_x22);
    func_0x00010c213040(unaff_x22);
    func_0x00010c21ad00(unaff_x22);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(unaff_x22);
    _objc_release(puVar5);
    func_0x00010c219b60(unaff_x22);
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lStack_98 = (long)_DAT_11276df5c;
    uVar4 = *(undefined8 *)((long)puVar2 + lStack_98);
    *(undefined **)((long)puVar2 + lStack_98) = puVar5;
    _objc_release(uVar4);
    func_0x00010c20eaa0(puVar2);
    puVar6 = puVar2;
    func_0x00010c27f880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c27f880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar6);
    puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x26 = unaff_x22;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar2;
    puStack_a8 = unaff_x26;
    func_0x00010c27f880();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x24;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x22;
    puStack_78 = unaff_x26;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar2;
    func_0x00010c27f880();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x20;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x28;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x23;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b0);
    _objc_release(unaff_x21);
    _objc_release(unaff_x23);
    _objc_release(unaff_x27);
    _objc_release(unaff_x20);
    _objc_release(unaff_x28);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(puStack_a8);
    func_0x00010bef9040(puVar2);
    _objc_release(unaff_x22);
    _objc_release(puStack_a0);
    puVar5 = puStack_90;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_107d3b704;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = PTR_PTR_1126fab48;
  puStack_228 = puVar5;
  puStack_110 = unaff_x28;
  puStack_108 = unaff_x27;
  puStack_100 = unaff_x26;
  puStack_f8 = unaff_x25;
  puStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  puStack_e0 = unaff_x22;
  puStack_d8 = unaff_x21;
  puStack_d0 = unaff_x20;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_228,PTR_s_layoutSubviews_112600e60);
  puVar3 = PTR_PTR_1126d0eb8;
  puVar10 = *(undefined8 **)(puVar5 + _DAT_11276df60);
  _objc_retain(puVar10);
  _objc_opt_class(puVar3);
  puVar6 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar3);
  puVar2 = puVar10;
  if (((ulong)puVar6 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar10);
  puVar6 = puVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010c08fa60();
  _objc_release(puVar10);
  _objc_release(puVar6);
  if (puVar7 == (undefined8 *)0x0) {
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    func_0x00010c27f880();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar6 = &uStack_2e0;
    puVar5 = puVar3;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar12 = *plStack_2d0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_2d0 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          uVar11 = *(ulong *)(lStack_2d8 + (long)puVar13 * 8);
          _CGAffineTransformMakeTranslation(&uStack_310,0,0xc028000000000000);
          puVar8 = PTR_PTR_1126aea58;
          _objc_retain(uVar11);
          _objc_opt_class(puVar8);
          uVar9 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar8);
          uVar1 = uVar11;
          if ((uVar9 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar11);
          uStack_298 = uStack_308;
          uStack_2a0 = uStack_310;
          uStack_288 = uStack_2f8;
          uStack_290 = uStack_300;
          uStack_278 = uStack_2e8;
          uStack_280 = uStack_2f0;
          func_0x00010c219960(uVar1);
          _objc_release(uVar1);
          puVar13 = puVar13 + 1;
        } while (puVar5 != puVar13);
        puVar6 = &uStack_2e0;
        puVar5 = puVar3;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
  }
  else {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    func_0x00010c27f880();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar6 = &uStack_270;
    puVar5 = puVar3;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar12 = *plStack_260;
      uVar18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar17 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar15 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar16 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          puVar8 = PTR_PTR_1126aea58;
          uVar11 = *(ulong *)(lStack_268 + (long)puVar13 * 8);
          _objc_retain(uVar11);
          _objc_opt_class(puVar8);
          uVar9 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar8);
          uVar1 = uVar11;
          if ((uVar9 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar11);
          uStack_2a0 = uVar17;
          uStack_298 = uVar18;
          uStack_290 = uVar4;
          uStack_288 = uVar15;
          uStack_280 = uVar14;
          uStack_278 = uVar16;
          func_0x00010c219960(uVar1);
          _objc_release(uVar1);
          puVar13 = puVar13 + 1;
        } while (puVar5 != puVar13);
        puVar6 = &uStack_270;
        puVar5 = puVar3;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar12 = (long)_DAT_11276df60;
  puVar10 = *(undefined8 **)((long)puVar2 + lVar12);
  _objc_retain(puVar10);
  _objc_retain(puVar6);
  if (puVar10 == puVar6) {
    _objc_release(puVar6);
    _objc_release(puVar10);
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      _objc_release(puVar10);
    }
    else {
      puVar7 = puVar10;
      func_0x00010c071ae0();
      _objc_release(puVar6);
      _objc_release(puVar10);
      if (((ulong)puVar7 & 1) != 0) goto LAB_107d3bb74;
    }
    puVar10 = puVar6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 **)((long)puVar2 + lVar12) = puVar10;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126d0eb8;
    _objc_retain(puVar6);
    _objc_opt_class(puVar5);
    puVar7 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar5);
    puVar10 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    _objc_retain(puVar10);
    _objc_release(puVar6);
    func_0x00010be828a0(puVar2);
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 **)((long)puVar2 + lVar12) = puVar6;
    _objc_release(uVar4);
    _objc_release(puVar10);
    func_0x00010c1cbe20(puVar2);
  }
LAB_107d3bb74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return puVar6;
}



/* Entry: 107d3b704; end: 107d3ba5f; -[SCStoriesProfileStorySnapCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3b704(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  undefined *puStack_170;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = PTR_PTR_1126fab48;
  lStack_178 = param_1;
  _objc_msgSendSuper2(&lStack_178,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR_PTR_1126d0eb8;
  uVar8 = *(ulong *)(param_1 + _DAT_11276df60);
  _objc_retain(uVar8);
  _objc_opt_class(puVar1);
  uVar2 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar1);
  uVar4 = uVar8;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar8);
  uVar2 = uVar4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c08fa60();
  _objc_release(uVar8);
  _objc_release(uVar2);
  if (uVar10 == 0) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    func_0x00010c27f880();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar6 = &uStack_230;
    lVar3 = lVar11;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar12 = *plStack_220;
      do {
        lVar13 = 0;
        do {
          if (*plStack_220 != lVar12) {
            _objc_enumerationMutation(lVar11);
          }
          uVar10 = *(ulong *)(lStack_228 + lVar13 * 8);
          _CGAffineTransformMakeTranslation(&uStack_260,0,0xc028000000000000);
          puVar1 = PTR_PTR_1126aea58;
          _objc_retain(uVar10);
          _objc_opt_class(puVar1);
          uVar8 = uVar10;
          _objc_opt_isKindOfClass(uVar10,puVar1);
          uVar2 = uVar10;
          if ((uVar8 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar10);
          uStack_1e8 = uStack_258;
          uStack_1f0 = uStack_260;
          uStack_1d8 = uStack_248;
          uStack_1e0 = uStack_250;
          uStack_1c8 = uStack_238;
          uStack_1d0 = uStack_240;
          func_0x00010c219960(uVar2);
          _objc_release(uVar2);
          lVar13 = lVar13 + 1;
        } while (lVar3 != lVar13);
        puVar6 = &uStack_230;
        lVar3 = lVar11;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
  }
  else {
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    func_0x00010c27f880();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar6 = &uStack_1c0;
    lVar3 = lVar11;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar12 = *plStack_1b0;
      uVar18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar17 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar15 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar16 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      do {
        lVar13 = 0;
        do {
          if (*plStack_1b0 != lVar12) {
            _objc_enumerationMutation(lVar11);
          }
          puVar1 = PTR_PTR_1126aea58;
          uVar10 = *(ulong *)(lStack_1b8 + lVar13 * 8);
          _objc_retain(uVar10);
          _objc_opt_class(puVar1);
          uVar8 = uVar10;
          _objc_opt_isKindOfClass(uVar10,puVar1);
          uVar2 = uVar10;
          if ((uVar8 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar10);
          uStack_1f0 = uVar17;
          uStack_1e8 = uVar18;
          uStack_1e0 = uVar7;
          uStack_1d8 = uVar15;
          uStack_1d0 = uVar14;
          uStack_1c8 = uVar16;
          func_0x00010c219960(uVar2);
          _objc_release(uVar2);
          lVar13 = lVar13 + 1;
        } while (lVar3 != lVar13);
        puVar6 = &uStack_1c0;
        lVar3 = lVar11;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
  }
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar11 = (long)_DAT_11276df60;
  puVar9 = *(undefined8 **)(uVar4 + lVar11);
  _objc_retain(puVar9);
  _objc_retain(puVar6);
  if (puVar9 == puVar6) {
    _objc_release(puVar6);
    _objc_release(puVar9);
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      _objc_release(puVar9);
    }
    else {
      puVar5 = puVar9;
      func_0x00010c071ae0();
      _objc_release(puVar6);
      _objc_release(puVar9);
      if (((ulong)puVar5 & 1) != 0) goto LAB_107d3bb74;
    }
    puVar9 = puVar6;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(uVar4 + lVar11);
    *(undefined8 **)(uVar4 + lVar11) = puVar9;
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126d0eb8;
    _objc_retain(puVar6);
    _objc_opt_class(puVar1);
    puVar5 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar1);
    puVar9 = puVar6;
    if (((ulong)puVar5 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar6);
    func_0x00010be828a0(uVar4);
    _objc_retain(puVar6);
    uVar7 = *(undefined8 *)(uVar4 + lVar11);
    *(undefined8 **)(uVar4 + lVar11) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar9);
    func_0x00010c1cbe20(uVar4);
  }
LAB_107d3bb74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107d3ba60; end: 107d3bb8b; -[SCStoriesProfileStorySnapCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3ba60(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276df60;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_107d3bb74;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d0eb8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x00010be828a0(param_1);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar3);
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_107d3bb74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d3bb8c; end: 107d3bd8b; -[SCStoriesProfileStorySnapCell _processViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3bb8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c076160();
  func_0x00010c20eaa0(param_1);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b7a0();
  _objc_release(lVar4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b660();
  _objc_release(lVar4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c279480(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276df58;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar1);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
  uVar1 = param_3;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276df64);
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c11da60(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107d3bd8c; end: 107d3bde7;  */

void FUN_107d3bd8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d3bde8; end: 107d3bf37; -[SCStoriesProfileStorySnapCell _handleFetchedThumbnailInfo:thumbnail:isFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3bde8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d0eb8;
  puVar3 = *(undefined **)(param_1 + _DAT_11276df60);
  _objc_retain(puVar3);
  _objc_opt_class(puVar1);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(puVar2);
LAB_107d3bed4:
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276df50));
    }
  }
  else {
    puVar1 = puVar2;
    if (param_3 != (undefined *)0x0) {
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar2);
      if ((int)puVar1 == 0) goto LAB_107d3bf10;
      goto LAB_107d3bed4;
    }
  }
  _objc_release(puVar1);
LAB_107d3bf10:
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d3bf38; end: 107d3bf57; -[SCStoriesProfileStorySnapCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3bf38(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_11276df4c)) {
    return;
  }
  *(long *)(param_1 + _DAT_11276df4c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107d3bf58; end: 107d3c03f; -[SCStoriesProfileStorySnapCell _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3bf58(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0eb8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276df60);
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
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276df68);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d3c040; end: 107d3c0db; +[SCStoriesProfileStorySnapCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107d3c040(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d0eb8;
  _objc_opt_class(PTR_PTR_1126d0eb8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c076160();
  _objc_release(uVar1);
  uVar4 = 0x4050800000000000;
  if ((int)uVar3 == 0) {
    uVar4 = 0x404c000000000000;
  }
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107d3c0dc; end: 107d3c0eb; -[SCStoriesProfileStorySnapCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3c0dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df60);
}



/* Entry: 107d3c0ec; end: 107d3c0fb; -[SCStoriesProfileStorySnapCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d3c0ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276df68);
}



/* Entry: 107d3c0fc; end: 107d3c13b; -[SCStoriesProfileStorySnapCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3c0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276df68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


