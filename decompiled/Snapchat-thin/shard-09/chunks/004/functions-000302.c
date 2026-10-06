/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d72d60; end: 106d72eb7;  */

undefined1 * FUN_106d72d60(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar6 = *plStack_130;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        puVar1 = PTR_PTR_1126b08d8;
        uVar5 = *(undefined8 *)(lStack_138 + (long)puVar7 * 8);
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100b74f58(0x4000000000000000,0x3fc999999999999a,0,0,puVar1,uVar5,puVar3);
        _objc_release(puVar3);
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = param_1;
      func_0x00010bf52a60();
      unaff_x20 = 0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_170;
  pcStack_148 = FUN_106d72eb8;
  puStack_168 = PTR_PTR_1126f6cc0;
  puStack_170 = puVar2;
  uStack_160 = unaff_x20;
  puStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_170,PTR_s_initWithFrame__1125e2948);
  if (ppuVar4 != (undefined1 **)0x0) {
    func_0x00010c182220(ppuVar4);
  }
  return (undefined1 *)ppuVar4;
}



/* Entry: 106d72eb8; end: 106d72f0b; -[SCCommerceIconView initWithFrame:] */

undefined1 * FUN_106d72eb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6cc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c182220(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d72f0c; end: 106d72f83; -[SCCommerceIconView setImage:] */

void FUN_106d72f0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6cc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setImage__1126481e8);
  uVar1 = param_1;
  func_0x00010bfe2e60();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfe6ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(param_1);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106d72f84; end: 106d73043; -[SCCommerceIconView populateWithIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d72f84(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d940);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfe55a0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d73044; end: 106d7308b;  */

void FUN_106d73044(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee48a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d7308c; end: 106d73173; -[SCCommerceIconView _updateWithIconImage:] */

void FUN_106d7308c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106d73140;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106d73174; end: 106d73183; -[SCCommerceIconView hidesWhenEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106d73174(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275d944);
}



/* Entry: 106d73184; end: 106d73193; -[SCCommerceIconView setHidesWhenEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73184(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275d944) = param_3;
  return;
}



/* Entry: 106d73194; end: 106d731a3; -[SCCommerceIconView iconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d73194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d940);
}



/* Entry: 106d731a4; end: 106d731e3; -[SCCommerceIconView setIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d731a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d940;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d731e4; end: 106d731f7; -[SCCommerceIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d731e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d940,0);
  return;
}



/* Entry: 106d731f8; end: 106d73247; -[SCCommerceShimmerLabel initWithFrame:] */

undefined1 * FUN_106d731f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6cc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d73248; end: 106d732a3; -[SCCommerceShimmerLabel setIsShimmering:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *(char *)(param_1 + _DAT_11275d948) = (char)param_3;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275d94c));
  lVar1 = (long)_DAT_11275d950;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1ff530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setShimmering__11265d770,param_3);
  return;
}



/* Entry: 106d732a4; end: 106d73813; -[SCCommerceShimmerLabel _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d732a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
  lVar14 = (long)_DAT_11275d94c;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_b0 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_a8 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_a0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0880;
  _objc_alloc();
  func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
  lVar15 = (long)_DAT_11275d950;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_d0 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_c8 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  uStack_c0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
  func_0x00010c182b00(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf4dce0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar13);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf4dce0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4000000000000000);
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x00010c1b4520(param_1,param_2,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_11275d94c);
}



/* Entry: 106d73814; end: 106d73823; -[SCCommerceShimmerLabel label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d73814(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d94c);
}



/* Entry: 106d73824; end: 106d73863; -[SCCommerceShimmerLabel setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d94c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d73864; end: 106d73873; -[SCCommerceShimmerLabel isShimmering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106d73864(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275d948);
}



/* Entry: 106d73874; end: 106d73883; -[SCCommerceShimmerLabel shimmeringView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d73874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d950);
}



/* Entry: 106d73884; end: 106d738c3; -[SCCommerceShimmerLabel setShimmeringView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d950;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d738c4; end: 106d73903; -[SCCommerceShimmerLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d738c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d950,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d94c,0);
  return;
}



/* Entry: 106d73904; end: 106d73953; -[SCFloatLabeledTextField initWithFrame:] */

undefined1 * FUN_106d73904(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf42980(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d73954; end: 106d73aef; -[SCFloatLabeledTextField commonInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73954(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c16d0a0(param_1,param_2,0);
  func_0x00010c16d0c0(param_1,param_2,1);
  func_0x00010c182ae0(param_1,param_2,0);
  func_0x00010c195580(param_1,param_2,1);
  func_0x00010c1edbe0(param_1,param_2,4);
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar4 = (long)_DAT_11275d95c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,0x17);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11275d960;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  *(undefined1 *)(param_1 + _DAT_11275d964) = 0;
  *(undefined8 *)(param_1 + _DAT_11275d968) = 0x3fd3333340000000;
  *(undefined8 *)(param_1 + _DAT_11275d96c) = 0x3fd3333340000000;
  lVar4 = param_1;
  func_0x00010c0fd720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19de80(param_1,param_2,lVar4);
  _objc_release(lVar4);
  *(undefined1 *)(param_1 + _DAT_11275d970) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_11275d974);
  uVar7 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar3;
  return;
}



/* Entry: 106d73af0; end: 106d73b77; -[SCFloatLabeledTextField intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106d73af0(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f6cd0;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_intrinsicContentSize_1125f8080);
  lVar1 = (long)_DAT_11275d95c;
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar1));
  dVar2 = *(double *)(param_5 + _DAT_11275d978);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  auVar3._8_8_ = param_2 + dVar2 + param_4;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 106d73b78; end: 106d73bbb; -[SCFloatLabeledTextField setPlaceholder:] */

void FUN_106d73b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1843c0(param_1,param_2,param_3);
  func_0x00010c19de80(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d73bbc; end: 106d73c47; -[SCFloatLabeledTextField setAttributedPlaceholder:] */

void FUN_106d73bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setAttributedPlaceholder__1126387c0;
  puStack_38 = PTR_PTR_1126f6cd0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c25cd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c19de80(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 106d73c48; end: 106d73d47; -[SCFloatLabeledTextField textRectForBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73c48(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f6cd0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_textRectForBounds__112678bb8);
  uVar2 = param_5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar3 = param_5;
    func_0x00010c0863c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_106d73cfc;
  }
  else {
    _objc_release(uVar2);
  }
  func_0x00010c0675e0(param_1,param_2,param_3,param_4,param_5);
LAB_106d73cfc:
  pdVar1 = (double *)(param_5 + (long)_DAT_11275d974);
  _CGRectIntegral(param_1 + pdVar1[1],param_2 + *pdVar1,param_3 - (pdVar1[1] + pdVar1[3]),
                  param_4 - (*pdVar1 + pdVar1[2]));
  return;
}



/* Entry: 106d73d48; end: 106d73e47; -[SCFloatLabeledTextField editingRectForBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73d48(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f6cd0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_editingRectForBounds__1125338f8);
  uVar2 = param_5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar3 = param_5;
    func_0x00010c0863c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_106d73dfc;
  }
  else {
    _objc_release(uVar2);
  }
  func_0x00010c0675e0(param_1,param_2,param_3,param_4,param_5);
LAB_106d73dfc:
  pdVar1 = (double *)(param_5 + (long)_DAT_11275d974);
  _CGRectIntegral(param_1 + pdVar1[1],param_2 + *pdVar1,param_3 - (pdVar1[1] + pdVar1[3]),
                  param_4 - (*pdVar1 + pdVar1[2]));
  return;
}



/* Entry: 106d73e48; end: 106d73eff; -[SCFloatLabeledTextField leftViewRectForBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  float fVar1;
  double dVar3;
  long lStack_60;
  undefined *puStack_58;
  double dVar2;
  
  puStack_58 = PTR_PTR_1126f6cd0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_leftViewRectForBounds__112534f68);
  fVar1 = (float)(int)(*(double *)(param_5 + _DAT_11275d97c) + 16.0);
  dVar2 = (double)(ulong)(uint)fVar1;
  dVar3 = (double)fVar1;
  func_0x00010c0c3020(param_5);
  if (dVar2 <= dVar3) {
    dVar3 = dVar2;
  }
  _CGRectOffset(param_1,param_2,param_3,param_4,0,dVar3 * 0.5);
  return;
}



/* Entry: 106d73f00; end: 106d73f83; -[SCFloatLabeledTextField rightViewRectForBounds:] */

void FUN_106d73f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f6cd0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_rightViewRectForBounds__11262ddc0);
  func_0x00010c0c3020(param_5);
  _CGRectOffset(param_1,param_2,param_3,param_4,0xc039000000000000,0);
  return;
}



/* Entry: 106d73f84; end: 106d73fcb; -[SCFloatLabeledTextField setTextAlignment:] */

void FUN_106d73f84(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setTextAlignment__112662638);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 106d73fcc; end: 106d74107; -[SCFloatLabeledTextField clearButtonRectForBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d73fcc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  double dVar7;
  ulong uStack_70;
  undefined *puStack_68;
  double dVar6;
  
  puStack_68 = PTR_PTR_1126f6cd0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_clearButtonRectForBounds__112534f70);
  uVar1 = param_5;
  func_0x00010befdae0();
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_5 + (long)_DAT_11275d95c);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar1 = param_5;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c08fa60();
      if (uVar4 == 0) {
        uVar4 = param_5;
        func_0x00010c0863c0();
        _objc_release(uVar1);
        if ((uVar4 & 1) == 0) goto LAB_106d740d4;
      }
      else {
        _objc_release(uVar1);
      }
      fVar5 = (float)(int)(*(double *)(param_5 + (long)_DAT_11275d97c) + 16.0);
      dVar6 = (double)(ulong)(uint)fVar5;
      dVar7 = (double)fVar5;
      func_0x00010c0c3020(param_5);
      if (dVar6 <= dVar7) {
        dVar7 = dVar6;
      }
      param_2 = param_2 + dVar7 * 0.5;
    }
  }
LAB_106d740d4:
  _CGRectIntegral(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 106d74108; end: 106d7435f; -[SCFloatLabeledTextField layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74108(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x22;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  ulong uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f6cd0;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010c1b7260(param_5);
  lVar6 = (long)_DAT_11275d95c;
  uVar5 = *(ulong *)(param_5 + lVar6);
  uVar2 = uVar5;
  func_0x00010c262ca0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar9 = param_3;
  func_0x00010c23d5a0(param_3,param_4,uVar5);
  uVar8 = param_4;
  _objc_release(uVar2);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  dVar7 = param_3;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010c19f0e0(param_3,uVar8,dVar9 - dVar7,param_4,*(undefined8 *)(param_5 + lVar6));
  uVar5 = param_5;
  func_0x00010c073040();
  if ((int)uVar5 == 0) {
    bVar1 = false;
LAB_106d7425c:
    uVar3 = param_5;
    func_0x00010bfb2d60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + lVar6));
    _objc_release(uVar3);
    if (bVar1) {
      _objc_release(unaff_x22);
      if ((uVar5 & 1) != 0) goto LAB_106d7429c;
    }
    else if ((int)uVar5 != 0) goto LAB_106d7429c;
  }
  else {
    uVar2 = param_5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      bVar1 = false;
      goto LAB_106d7425c;
    }
    unaff_x22 = param_5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x22;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      bVar1 = true;
      goto LAB_106d7425c;
    }
    uVar5 = param_5;
    func_0x00010c087520(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + lVar6));
    _objc_release(uVar5);
    _objc_release(unaff_x22);
LAB_106d7429c:
    _objc_release(uVar2);
  }
  uVar2 = param_5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  if (uVar2 == 0) {
    func_0x00010bf02180();
  }
  else {
    uVar3 = param_5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    if (uVar4 != 0) {
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_106d742f8;
    }
    func_0x00010bf02180();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  if ((uVar5 & 1) == 0) {
    func_0x00010bfe1f00(param_5);
    return;
  }
LAB_106d742f8:
  func_0x00010c2378a0(param_5);
  return;
}



/* Entry: 106d74360; end: 106d743af; -[SCFloatLabeledTextField setPlaceholder:floatingTitle:] */

void FUN_106d74360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c1843c0(param_1,param_2,param_3);
  func_0x00010c19de80(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d743b0; end: 106d74423; -[SCFloatLabeledTextField setAttributedPlaceholder:floatingTitle:] */

void FUN_106d743b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setAttributedPlaceholder__1126387c0;
  puStack_38 = PTR_PTR_1126f6cd0;
  uStack_40 = param_1;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010c19de80(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 106d74424; end: 106d74483; -[SCFloatLabeledTextField setPlaceholderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d980);
  *(undefined8 *)(param_1 + _DAT_11275d980) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c0fd720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1843c0(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d74484; end: 106d74493; -[SCFloatLabeledTextField setAlwaysShowFloatingLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74484(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275d954) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106d74494; end: 106d7455b; -[SCFloatLabeledTextField showFloatingLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74494(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106d7455c;
  puStack_40 = &UNK_110842e18;
  ppuVar1 = &puStack_58;
  lStack_38 = param_1;
  _objc_retainBlock();
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + _DAT_11275d964) != '\x01')) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010bf03440(*(undefined8 *)(param_1 + _DAT_11275d968),0,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20004,ppuVar1,0);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106d7455c; end: 106d745f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d7455c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = (long)_DAT_11275d95c;
  uVar2 = 0x3ff0000000000000;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_11275d978);
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,uVar3,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106d745f4; end: 106d746bf; -[SCFloatLabeledTextField hideFloatingLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d745f4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d746c0;
  puStack_48 = &UNK_110848c48;
  uStack_38 = 0x4030000000000000;
  lStack_40 = param_1;
  _objc_retainBlock();
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + _DAT_11275d964) != '\x01')) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03440(*(undefined8 *)(param_1 + _DAT_11275d96c),0,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x10004,ppuVar1,0);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106d746c0; end: 106d7475f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d746c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = (long)_DAT_11275d95c;
  uVar2 = 0;
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  dVar3 = *(double *)(param_4 + 0x28);
  dVar4 = *(double *)(*(long *)(param_4 + 0x20) + (long)_DAT_11275d97c);
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,dVar3 + dVar4,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106d74760; end: 106d747b3; -[SCFloatLabeledTextField labelActiveColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_11275d984);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d747b4; end: 106d74913; -[SCFloatLabeledTextField setCorrectPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d747b4(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar3 = param_4;
  func_0x00010c0fd7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_6 == 0) || (lVar3 == 0)) {
    puStack_70 = PTR_PTR_1126f6cd0;
    lStack_78 = param_4;
    _objc_msgSendSuper2(&lStack_78,PTR_s_setPlaceholder__112654c98,param_6);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uStack_58 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    lVar3 = param_4;
    func_0x00010c0fd7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = lVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar3);
    puStack_60 = PTR_PTR_1126f6cd0;
    lStack_68 = param_4;
    _objc_msgSendSuper2(&lStack_68,PTR_s_setAttributedPlaceholder__1126387c0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
  func_0x00010c26c640(param_6);
  dVar4 = *(double *)(param_6 + _DAT_11275d988);
  param_1 = param_1 + dVar4;
  lVar3 = (long)_DAT_11275d95c;
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_6 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar4,param_3,*(undefined8 *)(param_6 + lVar3),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106d74914; end: 106d74993; -[SCFloatLabeledTextField setLabelOriginForTextAlignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74914(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  func_0x00010bf20c00();
  func_0x00010c26c640(param_4);
  dVar2 = *(double *)(param_4 + _DAT_11275d988);
  param_1 = param_1 + dVar2;
  lVar1 = (long)_DAT_11275d95c;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar2,param_3,*(undefined8 *)(param_4 + lVar1),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106d74994; end: 106d74a2b; -[SCFloatLabeledTextField insetRectForBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74994(undefined8 param_1,long param_2)

{
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11275d95c));
  func_0x00010c0c3020(param_2);
  return param_1;
}



/* Entry: 106d74a2c; end: 106d74a5b; -[SCFloatLabeledTextField setFloatingLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74a2c(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d95c));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106d74a5c; end: 106d74ac7; -[SCFloatLabeledTextField maxTopInset] */

double FUN_106d74a5c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    undefined8 param_5)

{
  func_0x00010bf20c00();
  func_0x00010bfb3a80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(param_5);
  return (double)(float)(int)((param_4 - param_1) + -4.0);
}



/* Entry: 106d74ac8; end: 106d74ad7; -[SCFloatLabeledTextField floatingLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74ac8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d95c);
}



/* Entry: 106d74ad8; end: 106d74ae7; -[SCFloatLabeledTextField floatingLabelYPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74ad8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d978);
}



/* Entry: 106d74ae8; end: 106d74af7; -[SCFloatLabeledTextField setFloatingLabelYPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74ae8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11275d978) = param_1;
  return;
}



/* Entry: 106d74af8; end: 106d74b07; -[SCFloatLabeledTextField floatingLabelXPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74af8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d988);
}



/* Entry: 106d74b08; end: 106d74b17; -[SCFloatLabeledTextField setFloatingLabelXPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74b08(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11275d988) = param_1;
  return;
}



/* Entry: 106d74b18; end: 106d74b27; -[SCFloatLabeledTextField placeholderYPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74b18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d97c);
}



/* Entry: 106d74b28; end: 106d74b37; -[SCFloatLabeledTextField setPlaceholderYPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74b28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11275d97c) = param_1;
  return;
}



/* Entry: 106d74b38; end: 106d74b47; -[SCFloatLabeledTextField floatingLabelTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74b38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d960);
}



/* Entry: 106d74b48; end: 106d74b87; -[SCFloatLabeledTextField setFloatingLabelTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d960;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d74b88; end: 106d74b97; -[SCFloatLabeledTextField floatingLabelActiveTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74b88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d984);
}



/* Entry: 106d74b98; end: 106d74bd7; -[SCFloatLabeledTextField setFloatingLabelActiveTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d984;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d74bd8; end: 106d74be7; -[SCFloatLabeledTextField animateEvenIfNotFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106d74bd8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275d964);
}



/* Entry: 106d74be8; end: 106d74bf7; -[SCFloatLabeledTextField setAnimateEvenIfNotFirstResponder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74be8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275d964) = param_3;
  return;
}



/* Entry: 106d74bf8; end: 106d74c07; -[SCFloatLabeledTextField floatingLabelShowAnimationDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74bf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d968);
}



/* Entry: 106d74c08; end: 106d74c17; -[SCFloatLabeledTextField setFloatingLabelShowAnimationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74c08(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11275d968) = param_1;
  return;
}



/* Entry: 106d74c18; end: 106d74c27; -[SCFloatLabeledTextField floatingLabelHideAnimationDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74c18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d96c);
}



/* Entry: 106d74c28; end: 106d74c37; -[SCFloatLabeledTextField setFloatingLabelHideAnimationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74c28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11275d96c) = param_1;
  return;
}



/* Entry: 106d74c38; end: 106d74c47; -[SCFloatLabeledTextField adjustsClearButtonRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106d74c38(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275d970);
}



/* Entry: 106d74c48; end: 106d74c57; -[SCFloatLabeledTextField setAdjustsClearButtonRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74c48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275d970) = param_3;
  return;
}



/* Entry: 106d74c58; end: 106d74c67; -[SCFloatLabeledTextField keepBaseline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106d74c58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275d958);
}



/* Entry: 106d74c68; end: 106d74c77; -[SCFloatLabeledTextField setKeepBaseline:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74c68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275d958) = param_3;
  return;
}



/* Entry: 106d74c78; end: 106d74c87; -[SCFloatLabeledTextField alwaysShowFloatingLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106d74c78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275d954);
}



/* Entry: 106d74c88; end: 106d74c97; -[SCFloatLabeledTextField placeholderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74c88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d980);
}



/* Entry: 106d74c98; end: 106d74caf; -[SCFloatLabeledTextField edgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d74c98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d974);
}



/* Entry: 106d74cb0; end: 106d74cc7; -[SCFloatLabeledTextField setEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11275d974);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 106d74cc8; end: 106d74d27; -[SCFloatLabeledTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d74cc8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d980,0);
  _objc_storeStrong(param_1 + _DAT_11275d984,0);
  _objc_storeStrong(param_1 + _DAT_11275d960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d95c,0);
  return;
}



/* Entry: 106d74d28; end: 106d750d3; -[SCProductOptionPickerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106d74d28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  puStack_78 = PTR_PTR_1126f6cd8;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_alloc();
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar4 = uVar10;
    uVar7 = uVar11;
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar5 = (long)_DAT_11275d98c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010bfb68e0(puVar1);
    func_0x00010c1827c0(uVar4,uVar7,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_11275d990;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1c83a0(0x3fe6666660000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_11275d994;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
    _objc_alloc();
    func_0x00010c014e80(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_11275d998;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c16e9a0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c167740(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c013de0(0,0,puVar2);
    func_0x00010c211680(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010beabac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d750d4; end: 106d75823; -[SCProductOptionPickerView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d750d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11275d98c;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_90 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_88 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar12);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(lVar15);
  _objc_release(uVar2);
  lVar12 = (long)_DAT_11275d990;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_b0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_a8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  uStack_a0 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(lVar15);
  _objc_release(uVar2);
  lVar16 = (long)_DAT_11275d994;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_d0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  uStack_c8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  uStack_c0 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010bf49420(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(lVar15);
  _objc_release(uVar2);
  lVar13 = (long)_DAT_11275d998;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_f0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_e8 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_e0 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493c0(0xc030000000000000,uVar11,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(lVar15);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(uVar2);
  puVar10 = puVar1;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  lVar15 = (long)_DAT_11275d99c;
  uVar14 = *(undefined8 *)(puVar1 + lVar15);
  *(undefined **)(puVar1 + lVar15) = puVar10;
  _objc_retain(puVar10);
  _objc_release(uVar14);
  func_0x00010c212f20(*(undefined8 *)(puVar1 + _DAT_11275d990),param_2,
                      *(undefined8 *)(puVar1 + lVar15));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 106d75824; end: 106d75893; -[SCProductOptionPickerView setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275d99c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d990),param_2,
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d75894; end: 106d758f7; -[SCProductOptionPickerView setOptionItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d9a0);
  *(undefined8 *)(param_1 + _DAT_11275d9a0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275d998));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d758f8; end: 106d7598f; -[SCProductOptionPickerView scrollToIndex:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d758f8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11275d9a0);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275d998);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152720(uVar3,param_2,puVar2,2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106d75990; end: 106d75997; -[SCProductOptionPickerView numberOfSectionsInTableView:] */

undefined8 FUN_106d75990(void)

{
  return 1;
}



/* Entry: 106d75998; end: 106d759a7; -[SCProductOptionPickerView tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275d9a0),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106d759a8; end: 106d759b3; -[SCProductOptionPickerView tableView:heightForRowAtIndexPath:] */

undefined8 FUN_106d759a8(void)

{
  return 0x4049000000000000;
}



/* Entry: 106d759b4; end: 106d75aef; -[SCProductOptionPickerView tableView:cellForRowAtIndexPath:] */

void FUN_106d759b4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e85978);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c04ec80();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_3,param_2,puVar1);
    _objc_release(puVar1);
  }
  func_0x00010c161260(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c142240();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e85998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c284320(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  puVar1 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106d75af0; end: 106d75afb; -[SCProductOptionPickerView tableView:heightForFooterInSection:] */

undefined8 FUN_106d75af0(void)

{
  return 0x10000000000000;
}



/* Entry: 106d75afc; end: 106d75b07; -[SCProductOptionPickerView tableView:heightForHeaderInSection:] */

undefined8 FUN_106d75afc(void)

{
  return 0x10000000000000;
}



/* Entry: 106d75b08; end: 106d75ba7; -[SCProductOptionPickerView tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d9a0);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1598c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116080(lVar1,param_2,param_1,uVar3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d75ba8; end: 106d75caf; -[SCProductOptionPickerView updateCell:titleAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75ba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c21e900(param_3,param_2,1);
  uVar4 = *(ulong *)(param_1 + _DAT_11275d9a0);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0ec540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0ec200();
  if ((uVar3 & 1) == 0) {
    func_0x00010c21e900(param_3,param_2,0);
  }
  uVar3 = uVar2;
  func_0x00010c23b9c0(uVar2,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d75cb0; end: 106d75ccf; -[SCProductOptionPickerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75cb0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d9a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d75cd0; end: 106d75ce3; -[SCProductOptionPickerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d9a4,param_3);
  return;
}



/* Entry: 106d75ce4; end: 106d75cf3; -[SCProductOptionPickerView title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d75ce4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d99c);
}



/* Entry: 106d75cf4; end: 106d75d03; -[SCProductOptionPickerView optionItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d75cf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d9a0);
}



/* Entry: 106d75d04; end: 106d75d23; -[SCProductOptionPickerView selectedItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75d04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d9a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d75d24; end: 106d75d37; -[SCProductOptionPickerView setSelectedItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75d24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d9a8,param_3);
  return;
}



/* Entry: 106d75d38; end: 106d75d47; -[SCProductOptionPickerView pickerViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d75d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d98c);
}



/* Entry: 106d75d48; end: 106d75d87; -[SCProductOptionPickerView setPickerViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d98c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d75d88; end: 106d75e1f; -[SCProductOptionPickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75d88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d98c,0);
  _objc_destroyWeak(param_1 + _DAT_11275d9a8);
  _objc_destroyWeak(param_1 + _DAT_11275d9a4);
  _objc_storeStrong(param_1 + _DAT_11275d994,0);
  _objc_storeStrong(param_1 + _DAT_11275d998,0);
  _objc_storeStrong(param_1 + _DAT_11275d990,0);
  _objc_storeStrong(param_1 + _DAT_11275d9a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d99c,0);
  return;
}



/* Entry: 106d75e20; end: 106d75e9b; -[SCSelectorForwardingCollectionView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75e20(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_40;
  _objc_storeWeak(param_1 + _DAT_11275d9ac,param_3);
  if (param_3 == 0) {
    puStack_38 = PTR_PTR_1126f6ce0;
    lVar2 = 0;
    lStack_40 = param_1;
  }
  else {
    puStack_28 = PTR_PTR_1126f6ce0;
    plVar1 = &lStack_30;
    lVar2 = param_1;
    lStack_30 = param_1;
  }
  _objc_msgSendSuper2(plVar1,PTR_s_setDelegate__112640798,lVar2);
  return;
}



/* Entry: 106d75e9c; end: 106d75f17; -[SCSelectorForwardingCollectionView setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75e9c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_40;
  _objc_storeWeak(param_1 + _DAT_11275d9b0,param_3);
  if (param_3 == 0) {
    puStack_38 = PTR_PTR_1126f6ce0;
    lVar2 = 0;
    lStack_40 = param_1;
  }
  else {
    puStack_28 = PTR_PTR_1126f6ce0;
    plVar1 = &lStack_30;
    lVar2 = param_1;
    lStack_30 = param_1;
  }
  _objc_msgSendSuper2(plVar1,PTR_s_setDataSource__112640030,lVar2);
  return;
}



/* Entry: 106d75f18; end: 106d75ff3; -[SCSelectorForwardingCollectionView respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106d75f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  uVar3 = 0;
  lVar4 = (long)_DAT_11275d9ac;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar4 = (long)_DAT_11275d9b0;
    uVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puStack_48 = PTR_PTR_1126f6ce0;
      lStack_50 = param_1;
      _objc_msgSendSuper2(&lStack_50,PTR_s_respondsToSelector__11262c7e0,param_3);
      goto LAB_106d75fd8;
    }
  }
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  _objc_opt_respondsToSelector();
  uVar3 = (uint)lVar4;
  _objc_release(param_1);
LAB_106d75fd8:
  return uVar3 & 1;
}



/* Entry: 106d75ff4; end: 106d760b7; -[SCSelectorForwardingCollectionView forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d75ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar3 = (long)_DAT_11275d9ac;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = (long)_DAT_11275d9b0;
    uVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puStack_48 = PTR_PTR_1126f6ce0;
      lStack_50 = param_1;
      _objc_msgSendSuper2(&lStack_50,PTR_s_forwardingTargetForSelector__1125cb2d0,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d760a0;
    }
  }
  _objc_loadWeakRetained(param_1 + lVar3);
LAB_106d760a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d760b8; end: 106d76123; -[SCSelectorForwardingCollectionView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d760b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275d9b0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf404e0();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106d76124; end: 106d761a7; -[SCSelectorForwardingCollectionView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d76124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275d9b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf40140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


