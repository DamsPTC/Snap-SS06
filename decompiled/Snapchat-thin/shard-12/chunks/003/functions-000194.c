/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f5f15c; end: 108f5f227; -[SCUnifiedProfileEmptyStateCollectionViewCell _handleButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f15c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126dcb38;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e29c);
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
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e2a0);
  uVar3 = uVar1;
  func_0x00010bf25bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f5f228; end: 108f5f237; -[SCUnifiedProfileEmptyStateCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5f228(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e29c);
}



/* Entry: 108f5f238; end: 108f5f247; -[SCUnifiedProfileEmptyStateCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5f238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2a0);
}



/* Entry: 108f5f248; end: 108f5f287; -[SCUnifiedProfileEmptyStateCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e2a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f5f288; end: 108f5f2e7; -[SCUnifiedProfileEmptyStateCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f288(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e2a0,0);
  _objc_storeStrong(param_1 + _DAT_11277e29c,0);
  _objc_storeStrong(param_1 + _DAT_11277e298,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e294,0);
  return;
}



/* Entry: 108f5f2e8; end: 108f5f423;  */

void FUN_108f5f2e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar1 = param_1;
  _objc_retain();
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3e60();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_58 = uVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  func_0x00010c04e840();
  _objc_release(param_1);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_108f5f2e8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126dcb38;
    _objc_alloc(PTR_PTR_1126dcb38);
    func_0x00010c0512c0();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f5f424; end: 108f5f473;  */

void FUN_108f5f424(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_108f5f2e8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dcb38;
  _objc_alloc(PTR_PTR_1126dcb38);
  func_0x00010c0512c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f5f474; end: 108f5f57f; -[SCUnifiedProfileFooterEngravingViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108f5f474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff5a0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e2a4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e2a4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_11277e2a8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f5f580; end: 108f5f653; -[SCUnifiedProfileFooterEngravingViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f580(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff5a0;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20ca0(param_2);
  param_1 = param_1 * 0.5;
  func_0x00010c17a6a0(param_1,0x404c000000000000,*(undefined8 *)(param_2 + _DAT_11277e2a4));
  func_0x00010bf20ca0(param_2);
  lVar1 = (long)_DAT_11277e2a8;
  dVar2 = 0.0;
  func_0x00010c1739e0(0,0,param_1 + -24.0,0,*(undefined8 *)(param_2 + lVar1));
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20ca0(param_2);
  dVar3 = dVar2 * 0.5;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c17a6a0(dVar3,dVar2 * 0.5 + 77.0,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 108f5f654; end: 108f5f68b; -[SCUnifiedProfileFooterEngravingViewCell setOnFirstFullContentDraw:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e2ac);
  *(undefined8 *)(param_1 + _DAT_11277e2ac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f5f68c; end: 108f5f71b; -[SCUnifiedProfileFooterEngravingViewCell drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f68c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff5a0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_drawRect__1125271c8);
  lVar1 = *(long *)(param_1 + _DAT_11277e2a8);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_11277e2ac;
    lVar3 = *(long *)(param_1 + lVar1);
    _objc_release();
    if (lVar3 != 0) {
      (**(code **)(*(long *)(param_1 + lVar1) + 0x10))();
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0;
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 108f5f71c; end: 108f5f817; -[SCUnifiedProfileFooterEngravingViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f71c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4778;
  _objc_opt_class(PTR_PTR_1126b4778);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11277e2b0;
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
      if ((uVar3 & 1) != 0) goto LAB_108f5f7f8;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    func_0x00010bee2a80(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f5f7f8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f5f818; end: 108f5f823; +[SCUnifiedProfileFooterEngravingViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_108f5f818(void)

{
  return;
}



/* Entry: 108f5f824; end: 108f5f86b; -[SCUnifiedProfileFooterEngravingViewCell traitCollectionDidChange:] */

void FUN_108f5f824(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff5a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bee2a80(param_1);
  return;
}



/* Entry: 108f5f86c; end: 108f5fbc7; -[SCUnifiedProfileFooterEngravingViewCell _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5f86c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined **ppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b4778;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)(param_1 + _DAT_11277e2b0);
  _objc_retain(uVar10);
  _objc_opt_class(puVar1);
  uVar2 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar1);
  uVar9 = uVar10;
  if ((uVar2 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar10);
  uVar2 = uVar9;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277e2a8));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4780;
    func_0x00010bfb4500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c229ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    if (lVar4 == 0) {
      uStack_a8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      uStack_a0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puStack_98 = puVar1;
      puStack_90 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_78 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
      uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      uStack_80 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puStack_70 = puVar1;
      puStack_68 = puVar3;
      lStack_60 = lVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar2 = uVar9;
    func_0x00010c26b700(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar6);
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277e2a8));
    _objc_release(puVar6);
    _objc_release(uVar2);
    uVar2 = uVar9;
    func_0x00010c26b700(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(param_1);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  lVar4 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c292b20();
  _objc_release(lVar4);
  uVar2 = uVar9;
  func_0x00010bf96120();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_b0,param_1);
  uVar8 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108f5fbc8;
  puStack_d0 = &UNK_1108488f8;
  _objc_copyWeak(auStack_c0,auStack_b0);
  uStack_c8 = uVar2;
  uStack_b8 = lVar7 == 2;
  _objc_retain(uVar2);
  func_0x000107c27d8c(uVar8,&puStack_e8);
  _objc_release(uVar8);
  _objc_release(uStack_c8);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  uVar10 = uVar9;
  __Unwind_Resume();
  pcStack_f8 = FUN_108f5fbc8;
  lVar4 = uVar10 + 0x28;
  ppuStack_120 = &puStack_e8;
  uStack_118 = uVar2;
  uStack_110 = uVar8;
  uStack_108 = uVar9;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(uVar10 + 0x20);
    if ((*(byte *)(uVar10 + 0x30) & 1) == 0) {
      _objc_retain(uVar8);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    uStack_140 = 0x108f5fcd0;
    puStack_138 = &UNK_110841fb0;
    _objc_copyWeak(auStack_128,uVar10 + 0x28);
    _objc_retain(uVar8);
    uStack_130 = uVar8;
    func_0x000107c312d0("APPSTORE",&puStack_150);
    _objc_release(uStack_130);
    _objc_destroyWeak(auStack_128);
    _objc_release(uVar8);
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 108f5fbc8; end: 108f5fd23;  */

void FUN_108f5fbc8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      _objc_retain(uVar3);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x108f5fcd0;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108f5fd24; end: 108f5fdc7; -[SCUnifiedProfileFooterEngravingViewCell shadow] */

void FUN_108f5fd24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  if (lVar1 == 2) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSShadow_1126b6158;
    _objc_alloc_init(PTR__OBJC_CLASS___NSShadow_1126b6158);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1fe7a0(0,0x3fe0000000000000,puVar3);
    func_0x00010c1fe720(0,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f5fdc8; end: 108f5fddb; +[SCUnifiedProfileFooterEngravingViewCell footerTextColor] */

void FUN_108f5fdc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithDynamicProvider__1125adf00,
             &PTR___NSConcreteGlobalBlock_110aced20);
  return;
}



/* Entry: 108f5fddc; end: 108f5fe1b;  */

void FUN_108f5fddc(void)

{
  func_0x00010c292b20();
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f5fe1c; end: 108f5fe2b; -[SCUnifiedProfileFooterEngravingViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f5fe1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2b0);
}



/* Entry: 108f5fe2c; end: 108f5fe8b; -[SCUnifiedProfileFooterEngravingViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f5fe2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e2b0,0);
  _objc_storeStrong(param_1 + _DAT_11277e2ac,0);
  _objc_storeStrong(param_1 + _DAT_11277e2a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e2a4,0);
  return;
}



/* Entry: 108f5fe8c; end: 108f600ff; -[SCUnifiedProfileCollectionViewFriendsCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f5fe8c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_1126ff5a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar8 = (long)_DAT_11277e2b4;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11277e2b8;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_68 = puVar3;
    func_0x00010bf41680(0,0x3f9eb851eb851eb8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e2bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e2bc) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126dcb40;
    _objc_opt_new();
    lVar9 = (long)_DAT_11277e2c0;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar7);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar9));
    puVar6 = puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR_PTR_1126b48f0;
  _objc_opt_new(PTR_PTR_1126b48f0);
  func_0x00010c182220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 108f60100; end: 108f60133;  */

void FUN_108f60100(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_opt_new(PTR_PTR_1126b48f0);
  func_0x00010c182220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f60134; end: 108f60363; -[SCUnifiedProfileCollectionViewFriendsCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f60134(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ff5a8;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  lVar4 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar5 = (long)_DAT_11277e2b4;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11277e2c0;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c23d5a0(param_3,param_4,uVar3);
  func_0x00010c202c80(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetHeight();
  func_0x00010c173440(*(undefined8 *)(param_5 + lVar4));
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277e2b8;
  lVar7 = *(long *)(param_5 + lVar6);
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar2 != lVar7) {
    func_0x00010c12c940(*(undefined8 *)(param_5 + lVar6));
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
    _objc_release(uVar3);
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetHeight();
  dVar9 = param_3 * 0.44;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetHeight();
  dVar8 = 0.0;
  func_0x00010c19f0e0(0,param_3 - dVar9,param_1,dVar9,*(undefined8 *)(param_5 + lVar6));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetWidth();
  dVar9 = dVar8 / 4.2;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetHeight();
  dVar10 = dVar8 - dVar9;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetWidth();
  uVar3 = *(undefined8 *)(param_5 + _DAT_11277e2bc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0,dVar10,dVar8,dVar9);
  _objc_release(uVar3);
  return;
}



/* Entry: 108f60364; end: 108f6036b; -[SCUnifiedProfileCollectionViewFriendsCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_108f60364(void)

{
  return 0;
}



/* Entry: 108f6036c; end: 108f603a3; -[SCUnifiedProfileCollectionViewFriendsCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6036c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e2c4);
  *(undefined8 *)(param_1 + _DAT_11277e2c4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f603a4; end: 108f603b3; -[SCUnifiedProfileCollectionViewFriendsCell setBitmojiSelfieServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f603a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1714f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e2c0),PTR_s_setBitmojiSelfieServices__112639f58);
  return;
}



/* Entry: 108f603b4; end: 108f603c3; -[SCUnifiedProfileCollectionViewFriendsCell setOnFirstFullSquadDraw:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f603b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d2550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e2c0),PTR_s_setOnFirstFullSquadDraw__112652378);
  return;
}



/* Entry: 108f603c4; end: 108f605ef; -[SCUnifiedProfileCollectionViewFriendsCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f603c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c72f0;
  _objc_opt_class(PTR_PTR_1126c72f0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010bf1ae80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf51e00();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277e2c0));
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277e2c8);
  *(ulong *)(param_1 + _DAT_11277e2c8) = uVar4;
  _objc_release(uVar6);
  uVar4 = uVar1;
  func_0x00010c239f40();
  if ((int)uVar4 != 0) {
    lVar7 = (long)_DAT_11277e2bc;
    uVar4 = *(ulong *)(param_1 + lVar7);
    func_0x00010c06f880();
    if ((uVar4 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf57500(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0(*(undefined8 *)(param_1 + _DAT_11277e2b4));
      func_0x00010c1aa200(uVar6);
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b4860;
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc200(uVar6);
      _objc_release(puVar2);
      _objc_release(puVar5);
      func_0x00010c1cbe20(param_1);
      _objc_release(uVar6);
    }
  }
  func_0x00010c239f40(uVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277e2bc);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar6);
  func_0x00010bee1220(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f605f0; end: 108f60637; -[SCUnifiedProfileCollectionViewFriendsCell traitCollectionDidChange:] */

void FUN_108f605f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff5a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bee1220(param_1);
  return;
}



/* Entry: 108f60638; end: 108f606b3; -[SCUnifiedProfileCollectionViewFriendsCell _updateStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f60638(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c292b20();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277e2bc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x3fbeb851eb851eb8;
  if (lVar2 != 2) {
    uVar4 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f606b4; end: 108f606c3; +[SCUnifiedProfileCollectionViewFriendsCell sizeWithViewModel:constrainedToSize:] */

void FUN_108f606b4(void)

{
  return;
}



/* Entry: 108f606c4; end: 108f606ef; -[SCUnifiedProfileCollectionViewFriendsCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f606c4(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277e2c8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277e2cc),
               PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
               *(long *)(param_1 + _DAT_11277e2c8),param_1);
    return;
  }
  return;
}



/* Entry: 108f606f0; end: 108f606ff; -[SCUnifiedProfileCollectionViewFriendsCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f606f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2d0);
}



/* Entry: 108f60700; end: 108f6070f; -[SCUnifiedProfileCollectionViewFriendsCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f60700(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2cc);
}



/* Entry: 108f60710; end: 108f6074f; -[SCUnifiedProfileCollectionViewFriendsCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f60710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e2cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f60750; end: 108f607ef; -[SCUnifiedProfileCollectionViewFriendsCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f60750(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e2cc,0);
  _objc_storeStrong(param_1 + _DAT_11277e2d0,0);
  _objc_storeStrong(param_1 + _DAT_11277e2c8,0);
  _objc_storeStrong(param_1 + _DAT_11277e2c4,0);
  _objc_storeStrong(param_1 + _DAT_11277e2c0,0);
  _objc_storeStrong(param_1 + _DAT_11277e2bc,0);
  _objc_storeStrong(param_1 + _DAT_11277e2b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e2b4,0);
  return;
}



/* Entry: 108f607f0; end: 108f6086f; -[SCUnifiedProfileImageListCollectionViewCell initWithFrame:] */

undefined1 * FUN_108f607f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff5b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d7758;
    _objc_alloc(PTR_PTR_1126d7758);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c1ba240(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f60870; end: 108f609eb; -[SCUnifiedProfileListCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f60870(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126ff5b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e2d8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e2d8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d79c8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e2dc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e2dc) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d7760;
    _objc_alloc(PTR_PTR_1126d7760);
    uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
    func_0x00010c1ee160(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d7760;
    _objc_alloc(PTR_PTR_1126d7760);
    func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
    func_0x00010c1fec80(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277e2e0) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f609ec; end: 108f611a3; -[SCUnifiedProfileListCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f609ec(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126ff5b8;
  lStack_b8 = param_5;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126b2c10;
  uVar10 = *(ulong *)(param_5 + _DAT_11277e2e4);
  _objc_retain(uVar10);
  _objc_opt_class(puVar2);
  uVar6 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar2);
  uVar9 = uVar10;
  if ((uVar6 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar10);
  lVar3 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar14 = param_1;
  dVar20 = param_2;
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar13 = dVar14;
  _objc_release(lVar3);
  uVar6 = uVar9;
  func_0x00010c08c8a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e740();
  dVar16 = dVar13;
  _objc_release(uVar6);
  uVar6 = uVar9;
  func_0x00010c08c8a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e720();
  _objc_release(uVar6);
  dVar18 = (dVar14 - dVar20) * 0.5;
  lVar3 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar21 = dVar16;
  func_0x00010b8166f8(dVar16,dVar18,dVar13,dVar20);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277e2e8));
  _objc_release(lVar3);
  func_0x00010c23d300(param_5);
  uVar6 = uVar9;
  dVar20 = dVar21;
  func_0x00010c08c8a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140b80();
  _objc_release(uVar6);
  dVar17 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  lVar3 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166f8((dVar17 - dVar20) - dVar21,(dVar14 - dVar18) * 0.5,dVar21,dVar18);
  lVar12 = (long)_DAT_11277e2ec;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar12));
  _objc_release(lVar3);
  lVar11 = (long)_DAT_11277e2f0;
  lVar3 = *(long *)(param_5 + lVar11);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = 25.0;
  dVar17 = 15.0;
  if (lVar3 != 0) {
    dVar17 = 25.0;
  }
  _objc_release();
  lVar3 = *(long *)(param_5 + lVar11);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar18 = dVar17;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c26b700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar5 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_a0 = uVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d660(uVar4);
    dVar18 = dVar17 + dVar14;
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  lVar3 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  dVar19 = dVar14 - dVar17 * 0.5;
  _objc_release(lVar3);
  if (*(long *)(param_5 + lVar12) == 0) {
    lVar3 = param_5;
    func_0x00010bf31be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMaxX();
    dVar15 = (dVar14 + -16.0) - dVar18;
    _objc_release(lVar3);
  }
  else {
    cVar1 = *(char *)(param_5 + _DAT_11277e2e0);
    lVar3 = param_5;
    func_0x00010bf31be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMaxX();
    _objc_release(lVar3);
    if (cVar1 == '\x01') {
      dVar15 = -80.0;
    }
    else {
      dVar15 = -35.0;
    }
    dVar15 = ((dVar14 + -16.0) - dVar18) + dVar15;
  }
  lVar3 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b8166f8(dVar15,dVar19,dVar18,dVar17);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar11));
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_5 + lVar11);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar17 * 0.5);
  _objc_release(uVar4);
  dVar14 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar17 = 2.0;
  dVar14 = ((dVar14 - dVar16 * 2.0) - dVar13) - dVar20 * 2.0;
  dVar21 = dVar14 - dVar21;
  uVar6 = *(ulong *)(param_5 + lVar11);
  if (uVar6 != 0) {
    func_0x00010c074c20();
    dVar17 = -10.0;
    dVar14 = (dVar21 - dVar18) + -10.0;
    if ((uVar6 & 1) == 0) {
      dVar21 = dVar14;
    }
  }
  uVar6 = uVar9;
  func_0x00010c08c8a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e700();
  dVar20 = dVar14;
  _objc_release(uVar6);
  dVar15 = *(double *)PTR__CGSizeZero_110347620;
  dVar22 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  lVar11 = (long)_DAT_11277e2dc;
  lVar3 = *(long *)(param_5 + lVar11);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  dVar18 = dVar15;
  dVar19 = dVar22;
  if (lVar3 != 0) {
    lVar7 = *(long *)(param_5 + lVar11);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar7;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar12;
    func_0x00010bf529e0();
    _objc_release(lVar12);
    _objc_release(lVar7);
    _objc_release(lVar3);
    if (lVar8 != 0) {
      func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar11));
      dVar18 = dVar20;
      dVar19 = dVar17;
    }
  }
  uVar6 = uVar9;
  func_0x00010c08c8a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2714c0();
  dVar17 = dVar20;
  _objc_release(uVar6);
  if (dVar20 <= 0.0) {
    uVar6 = uVar9;
    func_0x00010c08c8a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099fa0();
    lVar3 = (long)_DAT_11277e2d8;
    func_0x00010c1cfce0(*(undefined8 *)(param_5 + lVar3));
    _objc_release(uVar6);
  }
  else {
    lVar3 = (long)_DAT_11277e2d8;
    func_0x00010c1cfce0(*(undefined8 *)(param_5 + lVar3));
  }
  dVar14 = dVar13 + dVar16 + dVar14;
  lVar12 = *(long *)(param_5 + lVar3);
  func_0x00010c0def20();
  if (lVar12 == 1) {
    func_0x00010c165e20(*(undefined8 *)(param_5 + lVar3));
    uVar6 = uVar9;
    func_0x00010c08c8a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2714c0();
    if (dVar17 <= 0.0) {
      dVar17 = 0.800000011920929;
    }
    else {
      uVar10 = uVar9;
      func_0x00010c08c8a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2714c0();
      _objc_release(uVar10);
    }
    _objc_release(uVar6);
    func_0x00010c1c83a0(dVar17,*(undefined8 *)(param_5 + lVar3));
  }
  else {
    func_0x00010c165e20(*(undefined8 *)(param_5 + lVar3));
    func_0x00010c1c83a0(0,*(undefined8 *)(param_5 + lVar3));
    lVar12 = *(long *)(param_5 + lVar3);
    func_0x00010c099180();
    if (lVar12 != 0) {
      func_0x00010c1bdb00(*(undefined8 *)(param_5 + lVar3));
    }
  }
  func_0x00010c1e0180(dVar21,*(undefined8 *)(param_5 + lVar3));
  dVar16 = 1.79769313486232e+308;
  dVar13 = dVar21;
  func_0x00010c23d5a0(dVar21,0x7fefffffffffffff,*(undefined8 *)(param_5 + lVar3));
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar20 = (param_1 - (dVar19 + dVar16)) * 0.5;
  lVar12 = param_5;
  func_0x00010bf31be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  if (dVar21 <= dVar13) {
    dVar13 = dVar21;
  }
  func_0x00010b8166f8(dVar14,dVar20,dVar13,dVar16);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  _objc_release(lVar12);
  if ((dVar18 == dVar15) && (dVar19 == dVar22)) {
    func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
                        *(undefined8 *)(param_5 + lVar11));
  }
  else {
    lVar3 = param_5;
    func_0x00010bf31be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    if (dVar21 <= dVar18) {
      dVar18 = dVar21;
    }
    func_0x00010b8166f8(dVar14,dVar16 + dVar20,dVar18,dVar19);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar11));
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1ac430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(uVar9 + (long)_DAT_11277e2dc),PTR_s_setInfoFetcher__112648b30);
  return;
}



/* Entry: 108f611a4; end: 108f611b3; -[SCUnifiedProfileListCollectionViewCell setInfoFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f611a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ac430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e2dc),PTR_s_setInfoFetcher__112648b30);
  return;
}



/* Entry: 108f611b4; end: 108f6129b; -[SCUnifiedProfileListCollectionViewCell setLeftIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f611b4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e2e8;
  if (*(long *)(param_1 + lVar6) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = param_1;
    func_0x00010bf31be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126b2c10;
    uVar5 = *(ulong *)(param_1 + _DAT_11277e2e4);
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    func_0x00010beda9a0(param_1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6129c; end: 108f6139f; -[SCUnifiedProfileListCollectionViewCell setRightIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6129c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e2ec;
  if (*(long *)(param_1 + lVar6) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c1a8c60(0xc039000000000000,0xc039000000000000,0xc039000000000000,
                          0xc039000000000000);
      lVar6 = param_1;
      func_0x00010bf31be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar6);
      puVar3 = PTR_PTR_1126b2c10;
      uVar5 = *(ulong *)(param_1 + _DAT_11277e2e4);
      _objc_retain(uVar5);
      _objc_opt_class(puVar3);
      uVar4 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar1 = uVar5;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      func_0x00010bedeae0(param_1);
      _objc_release(uVar1);
    }
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f613a0; end: 108f614af; -[SCUnifiedProfileListCollectionViewCell setShareIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f613a0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e2f4;
  if (*(long *)(param_1 + lVar6) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c1a8c60(0xc039000000000000,0xc039000000000000,0xc039000000000000,
                          0xc039000000000000);
      lVar6 = param_1;
      func_0x00010bf31be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar6);
      puVar3 = PTR_PTR_1126b2c10;
      uVar5 = *(ulong *)(param_1 + _DAT_11277e2e4);
      _objc_retain(uVar5);
      _objc_opt_class(puVar3);
      uVar4 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar1 = uVar5;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      func_0x00010bedeae0(param_1);
      _objc_release(uVar1);
      func_0x00010c1a5660(param_1);
    }
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f614b0; end: 108f614cf; -[SCUnifiedProfileListCollectionViewCell setHas2RightIcons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f614b0(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11277e2e0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277e2e0) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108f614d0; end: 108f61573; -[SCUnifiedProfileListCollectionViewCell sizeForRightIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108f614d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_PTR_1126b2c10;
  uVar4 = *(ulong *)(param_3 + _DAT_11277e2e4);
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
  func_0x00010c08c8a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c140ba0(uVar3);
  _objc_release(uVar3);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108f61574; end: 108f618ff; -[SCUnifiedProfileListCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f61574(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2c10;
  _objc_opt_class(PTR_PTR_1126b2c10);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar10 = (long)_DAT_11277e2e4;
  uVar7 = *(ulong *)(param_1 + lVar10);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  if (uVar7 == uVar1) {
    _objc_release(uVar1);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar3 = uVar7;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar7);
      if ((uVar3 & 1) != 0) goto LAB_108f618dc;
    }
    uVar7 = param_3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    *(ulong *)(param_1 + lVar10) = uVar7;
    _objc_release(uVar6);
    uVar7 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277e2d8));
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c260dc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277e2dc));
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010bf155c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2300(param_1);
    _objc_release(uVar7);
    puVar2 = PTR_DAT_1126a4fe8;
    uVar8 = *(ulong *)(param_1 + _DAT_11277e2e8);
    _objc_retain(uVar8);
    uVar3 = uVar8;
    func_0x000107c318f8(uVar8,puVar2);
    uVar7 = uVar8;
    if ((int)uVar3 == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
    if (uVar7 != 0) {
      uVar3 = uVar1;
      func_0x00010c08e8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar4 = uVar1;
      if (uVar3 == 0) {
        func_0x00010c08e7c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2226c0(uVar8);
      }
      else {
        uVar3 = uVar8;
        _objc_opt_respondsToSelector(uVar8,PTR_s_setSIGIcon__11265ae08);
        if ((uVar3 & 1) == 0) goto LAB_108f61784;
        func_0x00010c08e8c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f4f80(uVar8);
      }
      _objc_release(uVar4);
    }
LAB_108f61784:
    lVar11 = (long)_DAT_11277e2ec;
    lVar9 = *(long *)(param_1 + lVar11);
    lVar10 = lVar9;
    func_0x000107c318f8(lVar9,PTR_DAT_1126a4fe8);
    if ((lVar9 != 0) && ((int)lVar10 != 0)) {
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      uVar3 = uVar1;
      func_0x00010c140c00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar6);
      _objc_release(uVar3);
    }
    func_0x00010beda9a0(param_1);
    func_0x00010bedeae0(param_1);
    uVar3 = uVar1;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      uVar8 = uVar1;
      func_0x00010c0b4d20();
      _objc_retainAutoreleasedReturnValue();
      if (uVar8 == 0) {
        uVar4 = uVar1;
        func_0x00010c08e7c0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          uVar5 = uVar1;
          func_0x00010c140bc0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e900(param_1);
          _objc_release(uVar5);
        }
        else {
          func_0x00010c21e900(param_1);
        }
        _objc_release(uVar4);
      }
      else {
        func_0x00010c21e900(param_1);
      }
      _objc_release(uVar8);
    }
    else {
      func_0x00010c21e900(param_1);
    }
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010beecec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1);
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar7);
LAB_108f618dc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f61900; end: 108f61d03; +[SCUnifiedProfileListCollectionViewCell sizeWithViewModel:constrainedToSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108f61900(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined **param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = param_1;
  dVar14 = param_2;
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126b2c10;
  _objc_opt_class(PTR_PTR_1126b2c10);
  ppuVar4 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar3);
  ppuVar1 = param_7;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 == (undefined **)0x0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    dVar12 = dVar13;
    dVar13 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    ppuVar4 = param_7;
    func_0x00010c08c8a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099fa0();
    dVar15 = *(double *)PTR__UIViewNoIntrinsicMetric_110345e70;
    dVar12 = dVar13;
    _objc_release(ppuVar4);
    ppuVar4 = param_7;
    func_0x00010c08c8a0();
    _objc_retainAutoreleasedReturnValue();
    if (dVar13 == dVar15) {
      func_0x00010c08e720();
      dVar13 = dVar12 * 2.0;
      ppuVar5 = param_7;
      func_0x00010c08c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e740();
      dVar14 = (param_1 - dVar13) - dVar12;
      ppuVar6 = param_7;
      func_0x00010c08c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c140b80();
      dVar13 = dVar12 * 2.0;
      ppuVar7 = param_7;
      func_0x00010c08c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c140ba0();
      dVar13 = (dVar14 - dVar13) - dVar12;
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      ppuVar4 = param_7;
      func_0x00010bf155c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar4 = param_7;
        func_0x00010bf155c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010bf15120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar4);
        if (ppuVar5 == (undefined **)0x0) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110db6758;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6758,0);
          _objc_retainAutoreleasedReturnValue();
          dVar12 = 11.0;
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf1ecc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d660(ppuVar4);
          _objc_release(puVar3);
        }
        else {
          ppuVar4 = param_7;
          func_0x00010bf155c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010bf15120();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0();
        }
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        dVar13 = (dVar13 - dVar12) + -25.0 + -10.0;
      }
      ppuVar4 = param_7;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x7fefffffffffffff;
      func_0x00010bf20bc0(dVar13,0x7fefffffffffffff);
      _objc_release(ppuVar4);
      _CGRectGetHeight(dVar13,uVar11,param_3,param_4);
      ppuVar4 = param_7;
      dVar14 = dVar13;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar5 = param_7;
        func_0x00010c260dc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010bf445c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010bf529e0();
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        puVar3 = PTR_PTR_1126d79c8;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar4 = param_7;
          func_0x00010c260dc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe0a60(puVar3);
          dVar13 = dVar13 + dVar14;
          _objc_release(ppuVar4);
        }
      }
      dVar12 = (double)(float)(int)(dVar13 + 28.0);
      dVar14 = 56.0;
      dVar13 = dVar12;
      if (dVar12 <= 56.0) {
        dVar13 = 56.0;
      }
    }
    else {
      func_0x00010c099fa0();
      _objc_release(ppuVar4);
      dVar13 = dVar12;
      if (param_2 <= dVar12) {
        dVar13 = param_2;
      }
    }
  }
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126b2c10;
    uVar10 = *(ulong *)((long)param_7 + (long)_DAT_11277e2e4);
    _objc_retain(uVar10);
    _objc_opt_class(puVar3);
    uVar8 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar3);
    uVar2 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar10);
    uVar8 = uVar2;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar8 != 0) {
      uVar11 = *(undefined8 *)((long)param_7 + (long)_DAT_11277e2f8);
      uVar8 = uVar2;
      func_0x00010c268c60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf51e00();
      func_0x00010bfd0140(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    auVar17._8_8_ = dVar14;
    auVar17._0_8_ = dVar12;
    return auVar17;
  }
  auVar16._8_8_ = dVar13;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 108f61d04; end: 108f61deb; -[SCUnifiedProfileListCollectionViewCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f61d04(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b2c10;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e2e4);
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
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277e2f8);
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



/* Entry: 108f61dec; end: 108f61e7b; -[SCUnifiedProfileListCollectionViewCell canHandleLongPressAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108f61dec(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b2c10;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e2e4);
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
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar3 != 0;
}



/* Entry: 108f61e7c; end: 108f61f43; -[SCUnifiedProfileListCollectionViewCell handleLongPressAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f61e7c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b2c10;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e2e4);
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
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277e2f8);
    func_0x00010c0b4d20(uVar4);
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



/* Entry: 108f61f44; end: 108f6206b; -[SCUnifiedProfileListCollectionViewCell _updateRightIconTapRecognizerWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f61f44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010c140bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = (long)_DAT_11277e2fc;
  lVar1 = *(long *)(param_1 + lVar6);
  if (param_3 == 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
  }
  lVar1 = (long)_DAT_11277e2ec;
  uVar3 = *(ulong *)(param_1 + lVar1);
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_addGestureRecognizer__11259bdb8,
             *(undefined8 *)(param_1 + lVar6));
  return;
}



/* Entry: 108f6206c; end: 108f62193; -[SCUnifiedProfileListCollectionViewCell _updateLeftIconTapRecognizerWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6206c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010c08e760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = (long)_DAT_11277e300;
  lVar1 = *(long *)(param_1 + lVar6);
  if (param_3 == 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
  }
  lVar1 = (long)_DAT_11277e2e8;
  uVar3 = *(ulong *)(param_1 + lVar1);
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_addGestureRecognizer__11259bdb8,
             *(undefined8 *)(param_1 + lVar6));
  return;
}



/* Entry: 108f62194; end: 108f6225b; -[SCUnifiedProfileListCollectionViewCell _handleLeftIconTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f62194(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b2c10;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e2e4);
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
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e2f8);
  uVar3 = uVar1;
  func_0x00010c08e760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f6225c; end: 108f62323; -[SCUnifiedProfileListCollectionViewCell _handleRightIconTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6225c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b2c10;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e2e4);
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
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e2f8);
  uVar3 = uVar1;
  func_0x00010c140bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f62324; end: 108f624af; -[SCUnifiedProfileListCollectionViewCell _setBadgeViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f62324(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277e2f0;
  lVar1 = *(long *)(param_1 + lVar7);
  if (param_3 == (undefined **)0x0) goto LAB_108f62490;
  if (lVar1 == 0) {
    func_0x00010bdeb280(param_1);
  }
  ppuVar2 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7));
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010bf15120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db6758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6758,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c08fa60();
    if ((undefined **)0x28 < ppuVar4) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      goto LAB_108f6247c;
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    FUN_108f5d5cc(ppuVar2,puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar7));
    _objc_release(ppuVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    ppuVar2 = param_3;
    func_0x00010bf15120(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
LAB_108f6247c:
    func_0x00010c16b720(uVar3);
  }
  _objc_release(ppuVar2);
  lVar1 = *(long *)(param_1 + lVar7);
LAB_108f62490:
  func_0x00010c1a7f60(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f624b0; end: 108f62547; -[SCUnifiedProfileListCollectionViewCell _createBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f624b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar3 = (long)_DAT_11277e2f0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f62548; end: 108f62557; -[SCUnifiedProfileListCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f62548(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2f8);
}



/* Entry: 108f62558; end: 108f62597; -[SCUnifiedProfileListCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f62558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e2f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f62598; end: 108f625a7; -[SCUnifiedProfileListCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f62598(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2e4);
}



/* Entry: 108f625a8; end: 108f625c7; -[SCUnifiedProfileListCollectionViewCell infoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f625a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e304);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f625c8; end: 108f625d7; -[SCUnifiedProfileListCollectionViewCell leftIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f625c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2e8);
}



/* Entry: 108f625d8; end: 108f625e7; -[SCUnifiedProfileListCollectionViewCell rightIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f625d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2ec);
}



/* Entry: 108f625e8; end: 108f625f7; -[SCUnifiedProfileListCollectionViewCell shareIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f625e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2f4);
}



/* Entry: 108f625f8; end: 108f62607; -[SCUnifiedProfileListCollectionViewCell titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f625f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e2d8);
}



/* Entry: 108f62608; end: 108f62617; -[SCUnifiedProfileListCollectionViewCell has2RightIcons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108f62608(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277e2e0);
}



/* Entry: 108f62618; end: 108f626e3; -[SCUnifiedProfileListCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f62618(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e2d8,0);
  _objc_storeStrong(param_1 + _DAT_11277e2f4,0);
  _objc_storeStrong(param_1 + _DAT_11277e2ec,0);
  _objc_storeStrong(param_1 + _DAT_11277e2e8,0);
  _objc_destroyWeak(param_1 + _DAT_11277e304);
  _objc_storeStrong(param_1 + _DAT_11277e2e4,0);
  _objc_storeStrong(param_1 + _DAT_11277e2f8,0);
  _objc_storeStrong(param_1 + _DAT_11277e2fc,0);
  _objc_storeStrong(param_1 + _DAT_11277e300,0);
  _objc_storeStrong(param_1 + _DAT_11277e2f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e2dc,0);
  return;
}



/* Entry: 108f626e4; end: 108f62823; -[SCUnifiedProfileNetworkImageListCollectionViewCell initWithFrame:] */

undefined8 * FUN_108f626e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff5c0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4638;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026760(0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar5 = 0x19;
    func_0x000107c312b8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108f62824;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar2;
    _objc_retain(puVar2);
    func_0x000107c27d8c(uVar5,&puStack_68);
    _objc_release(uVar5);
    func_0x00010c1ba240(puVar1);
    _objc_release(puStack_48);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 108f62824; end: 108f628d3;  */

void FUN_108f62824(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dc3fb8);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108f628d4;
  puStack_38 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_30 = uVar2;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(puStack_28);
  _objc_release(uStack_30);
  _objc_release(puVar1);
  return;
}



/* Entry: 108f628d4; end: 108f628df;  */

void FUN_108f628d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLoadingImageWithMiniThumbnail_11264d538,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108f628e0; end: 108f6298b; -[SCUnifiedProfileNetworkImageListCollectionViewCell setMediaDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f628e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11277e308);
  *(undefined8 *)(param_1 + (long)_DAT_11277e308) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  func_0x00010c08e7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4638;
  _objc_opt_class(PTR_PTR_1126b4638);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c1c4540(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6298c; end: 108f6299b; -[SCUnifiedProfileNetworkImageListCollectionViewCell mediaDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6298c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e308);
}



/* Entry: 108f6299c; end: 108f629af; -[SCUnifiedProfileNetworkImageListCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6299c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e308,0);
  return;
}



/* Entry: 108f629b0; end: 108f62a27; -[SCUnifiedProfileNetworkImageViewListCollectionViewCell initWithFrame:] */

undefined1 * FUN_108f629b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dcb48;
    _objc_alloc(PTR_PTR_1126dcb48);
    func_0x00010c005f00(0x4034000000000000);
    func_0x00010c1ba240(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f62a28; end: 108f62ab3; -[SCUnifiedProfileNetworkImageViewListCollectionViewCell setImageDownloader:] */

void FUN_108f62a28(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c08e7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dcb48;
  _objc_opt_class(PTR_PTR_1126dcb48);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f62ab4; end: 108f62b3f; -[SCUnifiedProfileNetworkImageViewListCollectionViewCell setResourceDownloader:] */

void FUN_108f62ab4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c08e7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dcb48;
  _objc_opt_class(PTR_PTR_1126dcb48);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f62b40; end: 108f62bb7; -[SCUnifiedProfileNetworkImageViewNonTemplatedListCollectionViewCell initWithFrame:] */

undefined1 * FUN_108f62b40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff5d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dcb48;
    _objc_alloc(PTR_PTR_1126dcb48);
    func_0x00010c005f00(0x4034000000000000);
    func_0x00010c1ba240(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f62bb8; end: 108f62c43; -[SCUnifiedProfileNetworkImageViewNonTemplatedListCollectionViewCell setImageDownloader:] */

void FUN_108f62bb8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c08e7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dcb48;
  _objc_opt_class(PTR_PTR_1126dcb48);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f62c44; end: 108f62ccf; -[SCUnifiedProfileNetworkImageViewNonTemplatedListCollectionViewCell setResourceDownloader:] */

void FUN_108f62c44(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c08e7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dcb48;
  _objc_opt_class(PTR_PTR_1126dcb48);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f62cd0; end: 108f62d73;  */

void FUN_108f62cd0(void)

{
  _objc_alloc(PTR_PTR_1126c74d8);
  func_0x00010c0220e0(0x4038000000000000,0x4038000000000000,0x4030000000000000,0x402e000000000000,
                      0x402e000000000000,0x4034000000000000,0x404c000000000000,0x4030000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f62d74; end: 108f62de3;  */

void FUN_108f62d74(double param_1,undefined8 param_2)

{
  double dVar1;
  
  _objc_alloc(PTR_PTR_1126c74d8);
  dVar1 = (64.0 - param_1) * 0.5;
  func_0x00010c0220e0(param_1,param_2,dVar1,0x402e000000000000,0x402e000000000000,0x4034000000000000
                      ,0x404c000000000000,dVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f62de4; end: 108f62e53;  */

void FUN_108f62de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc(PTR_PTR_1126c74d8);
  func_0x00010c0220e0(0x4041000000000000,0x4041000000000000,0x402e000000000000,param_1,param_2,
                      param_3,0x404c000000000000,0x402e000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f62e54; end: 108f62ef7;  */

void FUN_108f62e54(void)

{
  _objc_alloc(PTR_PTR_1126c74d8);
  func_0x00010c0220e0(0x4038000000000000,0x4035000000000000,0x4030000000000000,0x404c000000000000,
                      0x404c000000000000,0x4022000000000000,0x404c000000000000,0x4028000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f62ef8; end: 108f62f67;  */

void FUN_108f62ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc(PTR_PTR_1126c74d8);
  func_0x00010c0220e0(0x4044000000000000,0x4044000000000000,0x4028000000000000,param_1,param_2,
                      param_3,0x404c000000000000,0x4028000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f62f68; end: 108f62feb;  */

void FUN_108f62f68(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_108f62fec(param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108f62fec; end: 108f632a7;  */

void FUN_108f62fec(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar6 = param_1;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c30a88();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb41c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar6 = param_1;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      func_0x000107c30a88();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010bfb3e40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfb41c0(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      func_0x00010c04e840();
      _objc_release(puVar4);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      puVar6 = param_1;
      func_0x00010c08fa60();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_1);
        _objc_retain(puVar1);
        puVar6 = param_1;
        func_0x00010c08fa60();
        if (puVar6 == (undefined *)0x0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf1ecc0(0x402c000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          func_0x00010c04e840();
          _objc_release(puVar2);
        }
        _objc_release(puVar1);
        _objc_release(param_1);
        _objc_release(puVar1);
      }
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_retain();
        _objc_alloc(puVar1);
        puVar6 = puVar1;
        FUN_108f63e6c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar1);
        _objc_release(puVar6);
        puVar6 = param_1;
        FUN_108f793f8(0x4018000000000000,param_1,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        _objc_release(puVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f632a8; end: 108f637bb;  */

void FUN_108f632a8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar4 = param_1;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(puVar1);
    puVar4 = param_1;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      func_0x00010c04e840();
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_retain();
    _objc_alloc(puVar1);
    puVar4 = puVar1;
    FUN_108f63e6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    FUN_108f793f8(0x4018000000000000,param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f637bc; end: 108f637df;  */

void FUN_108f637bc(void)

{
  _objc_alloc(PTR_PTR_1126d7770);
  func_0x00010c055880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f637e0; end: 108f63a43;  */

void FUN_108f637e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126aebd8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c14e320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_108f63a44(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  if (param_5 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b4dc0;
    _objc_alloc(PTR_PTR_1126b4dc0);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6820(puVar8);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126d7770;
  _objc_alloc(PTR_PTR_1126d7770);
  func_0x00010c055880();
  puVar4 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(param_6);
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  _objc_release(param_9);
  _objc_release(param_7);
  puVar7 = PTR_PTR_1126c74d8;
  _objc_alloc();
  func_0x00010c0220e0(param_1,param_1,0x4030000000000000,0x4030000000000000,0x4030000000000000,
                      0x4030000000000000,*(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70,
                      0x4030000000000000);
  func_0x00010c053700(puVar4);
  _objc_release(param_8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f63a44; end: 108f63ca3;  */

void FUN_108f63a44(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc_init();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    puVar6 = puVar5;
    func_0x00010c23ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1);
    lVar2 = param_2;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010bf069e0(puVar1);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    puVar6 = puVar5;
    func_0x00010c23ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(lVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    lVar2 = param_1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar2 = param_1;
      FUN_108f62f68(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf069e0(puVar1);
      lVar8 = lVar9;
      func_0x00010c08fa60();
      if (lVar8 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        func_0x00010c04e820();
        func_0x00010bf069e0(puVar1);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
    lVar2 = lVar9;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e840();
      puVar6 = puVar5;
      func_0x00010c23ba00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf069e0(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar9);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      if (lRam0000000113730438 != -1) {
        func_0x000107c27d9c(0x113730438,&PTR___NSConcreteGlobalBlock_110aced68);
      }
      puVar1 = puRam0000000113730430;
      _objc_retain(puRam0000000113730430);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f63ca4; end: 108f63e6b;  */

void FUN_108f63ca4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_1;
    FUN_108f62f68(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1);
    lVar3 = param_2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010bf069e0(puVar1);
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    puVar7 = puVar6;
    func_0x00010c23ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (lRam0000000113730438 != -1) {
      func_0x000107c27d9c(0x113730438,&PTR___NSConcreteGlobalBlock_110aced68);
    }
    puVar1 = puRam0000000113730430;
    _objc_retain(puRam0000000113730430);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f63e6c; end: 108f63ebf;  */

void FUN_108f63e6c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730438 != -1) {
    func_0x000107c27d9c(0x113730438,&PTR___NSConcreteGlobalBlock_110aced68);
  }
  uVar1 = uRam0000000113730430;
  _objc_retain(uRam0000000113730430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f63ec0; end: 108f640d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f63ec0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bfb3e60();
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_48 = puVar1;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puRam0000000113730430;
  puRam0000000113730430 = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  uStack_68 = 0x108f63fcc;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bfb3e60();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a8 = puVar1;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a0 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puRam0000000113730440;
  puRam0000000113730440 = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_f0;
  pcStack_c8 = FUN_108f640d8;
  puStack_e8 = PTR_PTR_1126ff5d8;
  puStack_f0 = puVar4;
  puStack_e0 = puVar1;
  puStack_d8 = param_1;
  ppuStack_d0 = &puStack_70;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_initWithFrame__1125e2948);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_11277e30c);
    *(undefined **)((long)ppuVar5 + (long)_DAT_11277e30c) = puVar2;
    _objc_release(uVar6);
    func_0x00010befbb60(ppuVar5);
  }
  return (undefined1 *)ppuVar5;
}



/* Entry: 108f640d8; end: 108f6414f; -[SCProfileActionButtonIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f640d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff5d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e30c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e30c) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f64150; end: 108f6422f; -[SCProfileActionButtonIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f64150(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff5d8;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_5 + _DAT_11277e30c));
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11277e310;
  func_0x00010c19f0e0((param_3 + -16.0) * 0.5,(param_4 + -16.0) * 0.5,0x4030000000000000,
                      0x4030000000000000,*(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277e314));
  return;
}



/* Entry: 108f64230; end: 108f644b3; -[SCProfileActionButtonIconView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f64230(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11277e318;
  uVar6 = *(ulong *)(param_1 + lVar8);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  uVar5 = param_3;
  if (param_3 == uVar6) {
    _objc_release(uVar6);
  }
  else {
    if (uVar6 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f6449c;
    }
    puVar2 = PTR_PTR_1126d7770;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar6 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_3);
    if (uVar6 == 0) {
      uVar5 = 0;
    }
    else {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      *(ulong *)(param_1 + lVar8) = param_3;
      _objc_release(uVar3);
      uVar6 = param_3;
      func_0x00010c27dd80();
      puVar2 = PTR_PTR_1126b0c40;
      if ((long)uVar6 < 2) {
        if (uVar6 == 0) {
          func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e310));
          lVar7 = (long)_DAT_11277e314;
          lVar8 = *(long *)(param_1 + lVar7);
          if (lVar8 == 0) {
            puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
            _objc_alloc();
            func_0x00010bff0f20();
            uVar3 = *(undefined8 *)(param_1 + lVar7);
            *(undefined **)(param_1 + lVar7) = puVar2;
            _objc_release(uVar3);
            func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar7));
            func_0x00010befbb60(param_1);
            lVar8 = *(long *)(param_1 + lVar7);
          }
          func_0x00010c24dbc0(lVar8);
        }
        else if (uVar6 == 1) {
          func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bea4680(param_1);
          goto LAB_108f64484;
        }
      }
      else if (uVar6 == 2) {
        func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010bfe77e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea4680(param_1);
        _objc_release(puVar4);
LAB_108f64484:
        _objc_release(puVar2);
      }
      else if (uVar6 == 3) {
        func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010bfe77e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea4680(param_1);
        _objc_release(puVar4);
        _objc_release(puVar2);
        func_0x00010bea46a0(param_1);
      }
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(uVar5);
LAB_108f6449c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f644b4; end: 108f645bf; -[SCProfileActionButtonIconView _setIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f644b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e310;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar3),param_2,1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277e30c),param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
  uVar2 = param_3;
  func_0x00010bfe9720(param_3,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11277e314));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f645c0; end: 108f6463b; -[SCProfileActionButtonIconView _setIconErrorState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f645c0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277e310;
  if (*(long *)(param_1 + lVar3) != 0) {
    uVar1 = 0xd0;
    if (param_3 == 0) {
      uVar1 = 0xce;
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108f6463c; end: 108f6464b; -[SCProfileActionButtonIconView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6463c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e318);
}



/* Entry: 108f6464c; end: 108f646ab; -[SCProfileActionButtonIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6464c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e318,0);
  _objc_storeStrong(param_1 + _DAT_11277e314,0);
  _objc_storeStrong(param_1 + _DAT_11277e310,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e30c,0);
  return;
}


