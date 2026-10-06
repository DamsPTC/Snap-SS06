/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051741f0; end: 10517437b; -[SCAddFriendsSectionHeaderSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_1051741f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar1 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b56b8;
    _objc_opt_class(PTR_PTR_1126b56b8);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar5 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar1);
    func_0x00010c2226c0(uVar5);
    func_0x00010c161980(uVar5);
    _objc_storeWeak(param_1 + 0x20,uVar5);
    _objc_initWeak(auStack_48,param_1);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c283b40(uVar4);
      _objc_destroyWeak(auStack_50);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10517437c; end: 105174423;  */

void FUN_10517437c(long param_1,long param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1051743f8;
    puStack_30 = &UNK_1108434b0;
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105174424; end: 105174497; -[SCAddFriendsSectionHeaderSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined8 FUN_105174424(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  else {
    func_0x00010c23d6e0(param_1,0x7fefffffffffffff,PTR_PTR_1126b56b8,param_3,
                        *(undefined8 *)(param_2 + 8));
  }
  return param_1;
}



/* Entry: 105174498; end: 1051744cf; -[SCAddFriendsSectionHeaderSupplementaryViewProvider _updateViewModel] */

void FUN_105174498(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2226c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051744d0; end: 1051744d7; -[SCAddFriendsSectionHeaderSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_1051744d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1051744d8; end: 1051744df; -[SCAddFriendsSectionHeaderSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_1051744d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1051744e0; end: 1051744f7; -[SCAddFriendsSectionHeaderSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_1051744e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051744f8; end: 105174503; -[SCAddFriendsSectionHeaderSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_1051744f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105174504; end: 10517450b; -[SCAddFriendsSectionHeaderSupplementaryViewProvider actionHandler] */

undefined8 FUN_105174504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10517450c; end: 10517453b; -[SCAddFriendsSectionHeaderSupplementaryViewProvider setActionHandler:] */

void FUN_10517450c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10517453c; end: 10517459f; -[SCAddFriendsSectionHeaderSupplementaryViewProvider .cxx_destruct] */

void FUN_10517453c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051745a0; end: 105174983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1051745a0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined *puStack_f8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar9 = 0;
  if ((param_4 & 1) == 0) {
    lVar1 = param_2;
    func_0x00010c08fa60();
    uVar9 = 0x4044000000000000;
    if (lVar1 != 0) {
      uVar9 = 0x4051800000000000;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_retain(param_1);
  _objc_alloc();
  puVar10 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  if (param_2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    _objc_release(param_2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x7fefffffffffffff,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b56c0;
  _objc_alloc(PTR_PTR_1126b56c0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031060(0,0x3ff0000000000000,0x4018000000000000,puVar6);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b56c8;
  _objc_retain(param_3);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c271840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined8 *)PTR_PTR_1126b56d0;
  _objc_alloc(PTR_PTR_1126b56d0);
  func_0x00010c038420();
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  puStack_f8 = PTR_PTR_1126e68b0;
  puVar7 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_initWithFrame__1125e2948);
  if (puVar7 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_108,puVar7);
    puVar2 = PTR_PTR_1126ae720;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105174ba0;
    puStack_118 = &UNK_11086cdd8;
    _objc_copyWeak(auStack_110,auStack_108);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar7 + (long)_DAT_11271e014);
    *(undefined **)((long)puVar7 + (long)_DAT_11271e014) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar7 + (long)_DAT_11271e018);
    *(undefined **)((long)puVar7 + (long)_DAT_11271e018) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar7 + (long)_DAT_11271e01c);
    *(undefined **)((long)puVar7 + (long)_DAT_11271e01c) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar7 + (long)_DAT_11271e020);
    *(undefined **)((long)puVar7 + (long)_DAT_11271e020) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_138,auStack_108);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar7 + (long)_DAT_11271e024);
    *(undefined **)((long)puVar7 + (long)_DAT_11271e024) = puVar2;
    _objc_release(uVar9);
    func_0x00010c160fc0(puVar7);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  return puVar7;
}



/* Entry: 105174984; end: 105174b9f; -[SCAddFriendsSectionHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105174984(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e68b0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105174ba0;
    puStack_78 = &UNK_11086cdd8;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e014);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e014) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e018);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e018) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e01c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e01c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e020);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e020) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e024);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e024) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(puVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 105174ba0; end: 105174bef;  */

void FUN_105174ba0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be62c60();
  _objc_release(param_1);
  func_0x00010c160fc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dc88d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105174bf0; end: 105174c27;  */

void FUN_105174bf0(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105174c28; end: 105174c9f;  */

void FUN_105174c28(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b56e8;
  _objc_opt_new(PTR_PTR_1126b56e8);
  func_0x00010c160fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105174ca0; end: 105174f43; -[SCAddFriendsSectionHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105174ca0(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126e68b0;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126b56d0;
  uVar6 = *(ulong *)(param_5 + _DAT_11271e028);
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
  func_0x00010bf20c00(param_5);
  uVar3 = uVar1;
  dVar12 = param_4;
  func_0x00010c1131c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c0bcce0(uVar3);
  _objc_release(uVar3);
  lVar4 = *(long *)(param_5 + _DAT_11271e024);
  if (lVar4 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    dVar8 = param_3;
    dVar11 = param_4;
    func_0x00010c23d5a0(param_3,param_4);
    _objc_release(lVar4);
    lVar7 = (long)_DAT_11271e01c;
    lVar4 = *(long *)(param_5 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      dVar12 = 0.0;
    }
    else {
      uVar5 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(uVar5);
    }
    dVar9 = param_1;
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    dVar10 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    func_0x00010beee100(uVar1);
    func_0x00010b816528((param_1 - param_4) - dVar8,
                        (dVar9 - dVar12) + (dVar11 + (dVar10 - dVar12)) * -0.5,dVar8,dVar11);
    func_0x00010b8166f8(param_5);
    lVar4 = (long)_DAT_11271e034;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
    func_0x00010c1a8c20(0,0,0,0xc034000000000000,*(undefined8 *)(param_5 + lVar4));
  }
  _objc_release(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 105174f44; end: 10517502f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105174f44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  lVar3 = (long)_DAT_11271e02c;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  dVar4 = *(double *)(param_1 + 0x30);
  dVar5 = *(double *)(param_1 + 0x38);
  _CGRectGetWidth(dVar4,dVar5,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1131a0(*(undefined8 *)(param_1 + 0x28));
  dVar4 = dVar4 - dVar5;
  uVar6 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(uVar2);
  dVar5 = dVar4;
  uVar2 = uVar6;
  func_0x00010c1131a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1131a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010b816528();
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271e030);
  *puVar1 = uVar2;
  puVar1[1] = dVar5;
  puVar1[2] = dVar4;
  puVar1[3] = uVar6;
  func_0x00010b8166f8(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x00010c1131a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1a8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,-dVar5,0,0xc034000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),
             PTR_s_setHitTestEdgeInsets__112647d28);
  return;
}



/* Entry: 105175030; end: 10517509f;  */

void FUN_105175030(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010beddde0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bedde40();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051750a0; end: 1051750f7; -[SCAddFriendsSectionHeaderView willMoveToSuperview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051750a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = (long)_DAT_11271e038;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c069d00();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051750f8; end: 10517536b; -[SCAddFriendsSectionHeaderView applyLayoutAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051750f8(double param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e68b0;
  lStack_70 = param_3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_applyLayoutAttributes__112527ed0,param_5);
  puVar2 = PTR_PTR_1126b56d0;
  uVar6 = *(ulong *)(param_3 + _DAT_11271e028);
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
  func_0x00010c152220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010c152220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126b56f0;
    if (uVar3 != 0) {
      _objc_retain(param_5);
      _objc_opt_class(puVar2);
      uVar6 = param_5;
      _objc_opt_isKindOfClass(param_5,puVar2);
      uVar3 = param_5;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_5);
      uVar6 = uVar1;
      func_0x00010c152220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c229f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      lVar5 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar6);
      uVar6 = uVar1;
      func_0x00010c152220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1c40();
      lVar5 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(param_1,param_2);
      _objc_release(lVar5);
      _objc_release(uVar6);
      uVar6 = uVar1;
      func_0x00010c152220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ef60();
      lVar5 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(param_1);
      _objc_release(lVar5);
      _objc_release(uVar6);
      func_0x00010bfdfea0(uVar3);
      _objc_release(uVar3);
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800((float)param_1);
      _objc_release(param_3);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10517536c; end: 10517551b; -[SCAddFriendsSectionHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517536c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11271e028;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uVar4 = param_3;
  if (param_3 == uVar5) {
LAB_1051754f4:
    _objc_release(uVar5);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105175504;
    }
    puVar2 = PTR_PTR_1126b56d0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar5 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar3);
    uVar5 = uVar4;
    func_0x00010c1131c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedde60(param_1);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010beee1c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed26e0(param_1);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010bf155c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed3da0(param_1);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 != 0) {
      uVar5 = uVar4;
      func_0x00010bf13d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(param_1);
      goto LAB_1051754f4;
    }
  }
  _objc_release(uVar4);
LAB_105175504:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10517551c; end: 1051756c7; +[SCAddFriendsSectionHeaderView sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_10517551c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b56d0;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3010000000;
  pcStack_78 = "";
  uStack_68 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_70 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar4 = uVar1;
  func_0x00010c1131c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  func_0x00010c0bcce0(uVar4);
  _objc_release(uVar4);
  auVar2 = *(undefined1 (*) [16])(puStack_88 + 4);
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return auVar2;
}



/* Entry: 1051756c8; end: 10517572b;  */

void FUN_1051756c8(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  
  dVar2 = *(double *)(param_4 + 0x30);
  dVar3 = *(double *)(param_4 + 0x38);
  func_0x00010c23d6e0(PTR_PTR_1126b56f8,param_5,param_5);
  uVar4 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010c1131a0(*(undefined8 *)(param_4 + 0x20));
  func_0x00010c1131a0(*(undefined8 *)(param_4 + 0x20));
  lVar1 = *(long *)(*(long *)(param_4 + 0x28) + 8);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  *(double *)(lVar1 + 0x28) = dVar3 + dVar2 + param_3;
  return;
}



/* Entry: 10517572c; end: 1051757c3;  */

void FUN_10517572c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c106e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = uVar4;
    func_0x00010c106e40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    *(undefined8 *)(lVar1 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  auVar3 = NEON_fmov(0x403e000000000000,8);
  *(long *)(lVar1 + 0x28) = auVar3._8_8_;
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  return;
}



/* Entry: 1051757c4; end: 1051758cf; -[SCAddFriendsSectionHeaderView _updatePrimaryViewWithViewModel:] */

void FUN_1051757c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1051758d0;
    puStack_58 = &UNK_11086cf48;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0bcce0(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051758d0; end: 105175917;  */

void FUN_1051758d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedddc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105175918; end: 105175997;  */

void FUN_105175918(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_3;
  func_0x00010c08fa60();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010beddde0();
  }
  else {
    func_0x00010bedde40();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105175998; end: 105175ab3; -[SCAddFriendsSectionHeaderView _updatePrimaryButtonWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105175998(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271e014;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar2 = 0;
  }
  else {
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e02c);
  *(undefined8 *)(param_1 + _DAT_11271e02c) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105175ab4; end: 105175c77; -[SCAddFriendsSectionHeaderView _updatePrimaryTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105175ab4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271e018;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271e03c);
    *(undefined8 *)(param_1 + _DAT_11271e03c) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar2);
  }
  else {
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271e03c);
    *(undefined8 *)(param_1 + _DAT_11271e03c) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar2);
    func_0x00010bedde00(param_1);
  }
  lVar4 = (long)_DAT_11271e01c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105175c78; end: 105175d8b; -[SCAddFriendsSectionHeaderView _updatePrimaryTitleFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105175c78(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x00010bf20c00();
  lVar3 = (long)_DAT_11271e03c;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  dVar4 = param_1;
  _CGRectGetWidth();
  dVar4 = dVar4 + -17.5;
  dVar6 = 1.79769313486232e+308;
  func_0x00010c23d5a0(uVar2);
  dVar7 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar7 = dVar7 + 17.5;
  dVar5 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  param_1 = param_1 + (dVar5 - dVar6) * 0.5;
  func_0x00010b816528();
  pdVar1 = (double *)(param_5 + _DAT_11271e030);
  *pdVar1 = dVar7;
  pdVar1[1] = param_1;
  pdVar1[2] = dVar4;
  pdVar1[3] = dVar6;
  func_0x00010b8166f8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_5 + lVar3),PTR_s_setFrame__112645658)
  ;
  return;
}



/* Entry: 105175d8c; end: 105175f0b; -[SCAddFriendsSectionHeaderView _updatePrimaryTitleWithSubtitle:subtitleAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105175d8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11271e018;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271e03c);
    *(undefined8 *)(param_1 + _DAT_11271e03c) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar2);
  }
  else {
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271e03c);
    *(undefined8 *)(param_1 + _DAT_11271e03c) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar2);
    func_0x00010bee14c0(param_1,param_2,param_4);
    func_0x00010bedde20(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105175f0c; end: 105176127; -[SCAddFriendsSectionHeaderView _updatePrimaryTitleFrameWithSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105175f0c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  func_0x00010bf20c00();
  lVar4 = (long)_DAT_11271e03c;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  dVar5 = param_1;
  _CGRectGetWidth();
  dVar5 = dVar5 + -17.5;
  dVar9 = 1.79769313486232e+308;
  func_0x00010c23d5a0(uVar2);
  lVar3 = (long)_DAT_11271e01c;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar6 = dVar6 + -35.0;
  dVar8 = 1.79769313486232e+308;
  func_0x00010c23d5a0(uVar2);
  _objc_release(uVar2);
  dVar11 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar11 = dVar11 + 17.5;
  dVar7 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar12 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar12 = dVar12 + ((dVar7 - dVar9) - dVar8) * 0.5;
  dVar7 = dVar12;
  dVar10 = dVar9;
  func_0x00010b816528();
  pdVar1 = (double *)(param_5 + _DAT_11271e030);
  *pdVar1 = dVar11;
  pdVar1[1] = dVar7;
  pdVar1[2] = dVar5;
  pdVar1[3] = dVar10;
  func_0x00010b8166f8(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  param_1 = param_1 + 17.5;
  dVar9 = dVar9 + dVar12;
  func_0x00010b816528(param_1,dVar9,dVar6,dVar8);
  func_0x00010b8166f8(param_5);
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,dVar9,dVar6,dVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105176128; end: 10517620b; -[SCAddFriendsSectionHeaderView _updateSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105176128(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271e01c;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
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
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10517620c; end: 1051763fb; -[SCAddFriendsSectionHeaderView _updateBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517620c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11271e020;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271e040);
    *(undefined8 *)(param_1 + _DAT_11271e040) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar2);
  }
  else {
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271e040);
    *(undefined8 *)(param_1 + _DAT_11271e040) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar2);
    func_0x00010bed3ce0(param_1);
    lVar1 = (long)_DAT_11271e038;
    if (*(long *)(param_1 + lVar1) == 0) {
      _objc_initWeak(auStack_48,param_1);
      puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      _objc_retain();
      func_0x00010c1503c0(0x4000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar3;
      _objc_release(uVar2);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051763fc; end: 10517654b; -[SCAddFriendsSectionHeaderView _updateBadgeFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051763fc(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x00010bf20c00();
  lVar3 = (long)_DAT_11271e040;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  dVar5 = param_1;
  dVar8 = param_4;
  _CGRectGetWidth();
  dVar5 = dVar5 + -17.5;
  dVar7 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar5,0x7fefffffffffffff,uVar2);
  lVar4 = (long)_DAT_11271e01c;
  lVar1 = *(long *)(param_5 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    dVar8 = 0.0;
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(uVar2);
  }
  dVar6 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  func_0x00010b816528(*(double *)(param_5 + _DAT_11271e030) +
                      ((double *)(param_5 + _DAT_11271e030))[2] + 9.0,
                      param_1 + ((dVar6 - dVar8) - dVar7) * 0.5,dVar5,dVar7);
  func_0x00010b8166f8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_5 + lVar3),PTR_s_setFrame__112645658)
  ;
  return;
}



/* Entry: 10517654c; end: 105176667; -[SCAddFriendsSectionHeaderView _updateActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517654c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271e024;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar2 = 0;
  }
  else {
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e034);
  *(undefined8 *)(param_1 + _DAT_11271e034) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105176668; end: 1051766c3; -[SCAddFriendsSectionHeaderView _newActionButtonWithAction:] */

undefined * FUN_105176668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b56f8;
  _objc_opt_new(PTR_PTR_1126b56f8);
  func_0x00010c160fc0();
  func_0x00010befbd60(puVar1,param_2,param_1,param_3,0x40);
  return puVar1;
}



/* Entry: 1051766c4; end: 1051767ab; -[SCAddFriendsSectionHeaderView _didTapActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051766c4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b56d0;
  uVar4 = *(ulong *)(param_1 + _DAT_11271e028);
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
  func_0x00010beee1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271e044);
    uVar3 = uVar1;
    func_0x00010beee1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051767ac; end: 1051768db; -[SCAddFriendsSectionHeaderView _didTapPrimaryActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051767ac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b56d0;
  uVar4 = *(ulong *)(param_1 + _DAT_11271e028);
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
  func_0x00010c1131c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcce0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051768dc; end: 1051768df;  */

void FUN_1051768dc(void)

{
  return;
}



/* Entry: 1051768e0; end: 1051768ef; -[SCAddFriendsSectionHeaderView _hideBadgeWithAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051768e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271e040),PTR_s_hideBadgeWithAnimation_1125d6030);
  return;
}



/* Entry: 1051768f0; end: 1051768ff; -[SCAddFriendsSectionHeaderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051768f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e028);
}



/* Entry: 105176900; end: 10517690f; -[SCAddFriendsSectionHeaderView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105176900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e044);
}



/* Entry: 105176910; end: 10517694f; -[SCAddFriendsSectionHeaderView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105176910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e044;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105176950; end: 105176a2f; -[SCAddFriendsSectionHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105176950(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e044,0);
  _objc_storeStrong(param_1 + _DAT_11271e028,0);
  _objc_storeStrong(param_1 + _DAT_11271e038,0);
  _objc_storeStrong(param_1 + _DAT_11271e040,0);
  _objc_storeStrong(param_1 + _DAT_11271e034,0);
  _objc_storeStrong(param_1 + _DAT_11271e02c,0);
  _objc_storeStrong(param_1 + _DAT_11271e03c,0);
  _objc_storeStrong(param_1 + _DAT_11271e020,0);
  _objc_storeStrong(param_1 + _DAT_11271e024,0);
  _objc_storeStrong(param_1 + _DAT_11271e014,0);
  _objc_storeStrong(param_1 + _DAT_11271e01c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e018,0);
  return;
}



/* Entry: 105176a30; end: 105176b4f; -[SCAddFriendsExpandableBadgeView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105176a30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e68b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e048);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e048) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11271e04c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar4 = (long)_DAT_11271e050;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271e054) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105176b50; end: 105176c27; -[SCAddFriendsExpandableBadgeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105176b50(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e68b8;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(param_1,param_2,param_3 + -1.0,*(undefined8 *)(param_4 + _DAT_11271e050));
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + _DAT_11271e04c));
  func_0x00010bf20c00(param_4);
  lVar1 = (long)_DAT_11271e048;
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bed3bc0(param_4);
  return;
}



/* Entry: 105176c28; end: 105176c6b; -[SCAddFriendsExpandableBadgeView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105176c28(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2);
  return;
}



/* Entry: 105176c6c; end: 105176e67; -[SCAddFriendsExpandableBadgeView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105176c6c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11271e058;
  uVar4 = *(ulong *)(param_2 + lVar5);
  _objc_retain(param_4);
  _objc_retain(uVar4);
  if (param_4 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_4);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_4;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_4);
      if ((uVar1 & 1) != 0) goto LAB_105176e4c;
    }
    puVar2 = PTR_PTR_1126b5700;
    if ((*(byte *)(param_2 + _DAT_11271e054) & 1) == 0) {
      _objc_retain(param_4);
      _objc_opt_class(puVar2);
      uVar1 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar2);
      uVar4 = param_4;
      if ((uVar1 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(param_4);
      uVar1 = uVar4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      *(ulong *)(param_2 + lVar5) = uVar1;
      _objc_release(uVar3);
      uVar1 = uVar4;
      func_0x00010bf0df80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11271e04c));
      _objc_release(uVar1);
      uVar1 = uVar4;
      func_0x00010bf15140(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar3 = *(undefined8 *)(param_2 + _DAT_11271e048);
      func_0x00010c22a660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar3);
      _objc_release(uVar1);
      uVar1 = uVar4;
      func_0x00010c22a140(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedfc60(param_2);
      _objc_release(uVar1);
      func_0x00010c0e8ca0(uVar4);
      _objc_release(uVar4);
      lVar5 = param_2;
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4bc0(param_1);
      _objc_release(lVar5);
      func_0x00010c1cbe20(param_2);
    }
  }
LAB_105176e4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105176e68; end: 105176f9f; +[SCAddFriendsExpandableBadgeView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105176e68(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b5700;
  _objc_opt_class(PTR_PTR_1126b5700);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf0df80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    dVar6 = 17.0;
    dVar7 = 17.0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf0df80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20bc0(param_1);
    dVar5 = param_3;
    dVar4 = param_4;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf02060();
    dVar6 = 17.0;
    dVar7 = 17.0;
    if ((uVar3 & 1) == 0) {
      func_0x00010bf4c7e0(uVar1);
      func_0x00010bf4c7e0(uVar1);
      dVar4 = param_3 + param_2 + dVar4;
      dVar6 = param_4;
      if (param_4 <= dVar4) {
        dVar6 = dVar4;
      }
      func_0x00010bf4c7e0(uVar1);
      func_0x00010bf4c7e0(uVar1);
      dVar5 = param_4 + dVar4 + dVar5;
      dVar7 = param_4;
      if (param_4 <= dVar5) {
        dVar7 = dVar5;
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  auVar8._8_8_ = dVar7;
  auVar8._0_8_ = dVar6;
  return auVar8;
}



/* Entry: 105176fa0; end: 10517726b; -[SCAddFriendsExpandableBadgeView hideBadgeWithAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105176fa0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long in_x4;
  long lVar16;
  ulong uVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar23 = param_3;
  dVar22 = param_4;
  _objc_release(uVar10);
  uVar10 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d20(0,0x3fe0000000000000);
  _objc_release(uVar10);
  param_2 = param_2 + param_4 * 0.5;
  uVar10 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(param_1 + param_3 * 0.0,param_2);
  _objc_release(uVar10);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3);
  _objc_release(puVar4);
  uVar10 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar10);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(0x3c23d70a,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_alloc_init();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar5);
  _objc_release(puVar6);
  dVar19 = 0.26;
  func_0x00010c192d40(0x3fd0a3d70a3d70a4,puVar5);
  func_0x00010c19bc40(puVar5);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  iVar15 = 0x10dc8958;
  puVar6 = puVar5;
  func_0x00010bef6c20();
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  puVar4 = PTR_PTR_1126b5700;
  uVar17 = *(ulong *)(puVar3 + _DAT_11271e058);
  _objc_retain(uVar17);
  _objc_opt_class(puVar4);
  uVar7 = uVar17;
  _objc_opt_isKindOfClass(uVar17,puVar4);
  uVar2 = uVar17;
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar17);
  uVar7 = uVar2;
  func_0x00010bf02060();
  if ((uVar7 & 1) == 0) {
    puVar4 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(0x3ff0000000000000,0x3fe0000000000000);
    _objc_release(puVar4);
    dVar23 = dVar23 + dVar19;
    param_2 = param_2 + dVar22 * 0.5;
    puVar4 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(dVar23,param_2);
    _objc_release(puVar4);
    _CACurrentMediaTime();
    puVar3[_DAT_11271e054] = 1;
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar4 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    _objc_retain(in_x4);
    func_0x00010c17fb40(puVar4);
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fd0000000000000);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0x3f4ccccd,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar5);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar5);
    _objc_release(puVar8);
    func_0x00010c20be40(0x4077c00000000000,puVar5);
    func_0x00010c1893a0(0x4034000000000000,puVar5);
    func_0x00010c2283a0(puVar5);
    func_0x00010c192d40(puVar5);
    puVar8 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    _objc_alloc_init();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar8);
    _objc_release(puVar9);
    dVar22 = dVar23;
    func_0x00010c16fd40(dVar23,puVar8);
    func_0x00010c19bc40(puVar8);
    puVar9 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(puVar9);
    uVar10 = *(undefined8 *)(puVar3 + _DAT_11271e050);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104260();
    _objc_release(uVar10);
    pdVar1 = (double *)(puVar3 + _DAT_11271e05c);
    dVar19 = *pdVar1;
    _CGRectGetWidth(dVar19,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar20 = *pdVar1;
    _CGRectGetHeight(dVar20,pdVar1[1],pdVar1[2],pdVar1[3]);
    if (iVar15 == 0) {
      dVar24 = -8.5;
      dVar21 = -8.5;
      if (puVar6 < (undefined *)0xa) {
        dVar21 = 5.0;
      }
      func_0x00010bf4c7e0(uVar2);
      dVar21 = dVar21 + ((dVar22 + (dVar19 - dVar20)) - dVar24);
    }
    else {
      dVar21 = *pdVar1;
      _CGRectGetWidth(dVar21,pdVar1[1],pdVar1[2],pdVar1[3]);
      dVar21 = dVar22 + dVar21;
    }
    puVar9 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fd0000000000000);
    puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(dVar22,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar9);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(dVar21,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar9);
    _objc_release(puVar11);
    lVar18 = (long)_DAT_11271e04c;
    uVar10 = *(undefined8 *)(puVar3 + lVar18);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(dVar21,param_2);
    _objc_release(uVar10);
    puVar11 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    _objc_alloc_init();
    if (puVar6 < (undefined *)0xa) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168400(puVar11);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40(0x3fd0000000000000);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(puVar6);
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0x3f4ccccd,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar6);
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168400(puVar11);
      _objc_release(puVar12);
    }
    _objc_release(puVar6);
    dVar23 = dVar23 + 1.8;
    func_0x00010c16fd40(dVar23,puVar11);
    func_0x00010c19bc40(puVar11);
    uVar10 = *(undefined8 *)(puVar3 + lVar18);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar10);
    dVar22 = *pdVar1;
    _CGRectGetHeight(dVar22,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar21 = dVar22 * 0.5;
    func_0x00010b816218();
    dVar22 = (double)(long)(dVar21 * dVar22) / dVar22;
    puVar12 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],dVar22,dVar22,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    dVar21 = *pdVar1;
    dVar24 = pdVar1[1];
    dVar20 = (dVar19 - dVar20) + dVar21;
    _CGRectGetHeight(dVar21,dVar24,pdVar1[2],pdVar1[3]);
    dVar19 = *pdVar1;
    _CGRectGetHeight(dVar19,pdVar1[1],pdVar1[2],pdVar1[3]);
    func_0x00010bf199e0(dVar20,dVar24,dVar21,dVar19,dVar22,dVar22,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fd40(dVar23);
    func_0x00010c192d40(0x3fd0000000000000,puVar13);
    _objc_retainAutorelease(puVar12);
    func_0x00010bdc1040();
    func_0x00010c1a1180(puVar13);
    _objc_retainAutorelease(puVar6);
    func_0x00010bdc1040();
    func_0x00010c216920(puVar13);
    func_0x00010c19bc40(puVar13);
    _objc_retainAutorelease(puVar6);
    func_0x00010bdc1040();
    lVar18 = (long)_DAT_11271e048;
    uVar10 = *(undefined8 *)(puVar3 + lVar18);
    func_0x00010c22a660(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(puVar3 + lVar18);
    func_0x00010c22a660(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar10);
    puVar14 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fd40(dVar23);
    func_0x00010c192d40(0x3fd0000000000000,puVar14);
    _objc_retainAutorelease(puVar12);
    func_0x00010bdc1040();
    func_0x00010c1a1180(puVar14);
    _objc_retainAutorelease(puVar6);
    func_0x00010bdc1040();
    func_0x00010c216920(puVar14);
    func_0x00010c19bc40(puVar14);
    _objc_retainAutorelease(puVar6);
    func_0x00010bdc1040();
    uVar10 = *(undefined8 *)(puVar3 + lVar18);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(puVar3 + lVar18);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar10);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(in_x4);
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(in_x4 + 0x20) + (long)_DAT_11271e054) = 0;
                    /* WARNING: Could not recover jumptable at 0x000105177be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x4 + 0x28) + 0x10))();
  return;
}



/* Entry: 10517726c; end: 105177bcf; -[SCAddFriendsExpandableBadgeView showTipAnimationWithNumber:toBlankBadge:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517726c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7,int param_8,long param_9)

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  puVar3 = PTR_PTR_1126b5700;
  uVar15 = *(ulong *)(param_5 + _DAT_11271e058);
  _objc_retain(uVar15);
  _objc_opt_class(puVar3);
  uVar4 = uVar15;
  _objc_opt_isKindOfClass(uVar15,puVar3);
  uVar2 = uVar15;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar15);
  uVar4 = uVar2;
  func_0x00010bf02060();
  if ((uVar4 & 1) == 0) {
    lVar16 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar16);
    lVar16 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(0x3ff0000000000000,0x3fe0000000000000);
    _objc_release(lVar16);
    param_3 = param_3 + param_1;
    param_2 = param_2 + param_4 * 0.5;
    lVar16 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(param_3,param_2);
    _objc_release(lVar16);
    _CACurrentMediaTime();
    *(undefined1 *)(param_5 + _DAT_11271e054) = 1;
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar3 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    _objc_retain(param_9);
    func_0x00010c17fb40(puVar3);
    puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fd0000000000000);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar3);
    _objc_release(puVar5);
    lVar16 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
    _objc_release(lVar16);
    puVar5 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0x3f4ccccd,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar5);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar5);
    _objc_release(puVar6);
    func_0x00010c20be40(0x4077c00000000000,puVar5);
    func_0x00010c1893a0(0x4034000000000000,puVar5);
    func_0x00010c2283a0(puVar5);
    func_0x00010c192d40(puVar5);
    puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    _objc_alloc_init();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar6);
    _objc_release(puVar7);
    dVar20 = param_3;
    func_0x00010c16fd40(param_3,puVar6);
    func_0x00010c19bc40(puVar6);
    lVar16 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(lVar16);
    uVar8 = *(undefined8 *)(param_5 + _DAT_11271e050);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104260();
    _objc_release(uVar8);
    pdVar1 = (double *)(param_5 + _DAT_11271e05c);
    dVar17 = *pdVar1;
    _CGRectGetWidth(dVar17,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar18 = *pdVar1;
    _CGRectGetHeight(dVar18,pdVar1[1],pdVar1[2],pdVar1[3]);
    if (param_8 == 0) {
      dVar21 = -8.5;
      dVar19 = -8.5;
      if (param_7 < 10) {
        dVar19 = 5.0;
      }
      func_0x00010bf4c7e0(uVar2);
      dVar19 = dVar19 + ((dVar20 + (dVar17 - dVar18)) - dVar21);
    }
    else {
      dVar19 = *pdVar1;
      _CGRectGetWidth(dVar19,pdVar1[1],pdVar1[2],pdVar1[3]);
      dVar19 = dVar20 + dVar19;
    }
    puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fd0000000000000);
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(dVar20,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar7);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(dVar19,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar7);
    _objc_release(puVar9);
    lVar16 = (long)_DAT_11271e04c;
    uVar8 = *(undefined8 *)(param_5 + lVar16);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(dVar19,param_2);
    _objc_release(uVar8);
    puVar9 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    _objc_alloc_init();
    if (param_7 < 10) {
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168400(puVar9);
    }
    else {
      puVar11 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40(0x3fd0000000000000);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(puVar11);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0x3f4ccccd,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar11);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168400(puVar9);
      _objc_release(puVar10);
    }
    _objc_release(puVar11);
    param_3 = param_3 + 1.8;
    func_0x00010c16fd40(param_3,puVar9);
    func_0x00010c19bc40(puVar9);
    uVar8 = *(undefined8 *)(param_5 + lVar16);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar8);
    dVar20 = *pdVar1;
    _CGRectGetHeight(dVar20,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar19 = dVar20 * 0.5;
    func_0x00010b816218();
    dVar20 = (double)(long)(dVar19 * dVar20) / dVar20;
    puVar10 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],dVar20,dVar20,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    dVar19 = *pdVar1;
    dVar21 = pdVar1[1];
    dVar18 = (dVar17 - dVar18) + dVar19;
    _CGRectGetHeight(dVar19,dVar21,pdVar1[2],pdVar1[3]);
    dVar17 = *pdVar1;
    _CGRectGetHeight(dVar17,pdVar1[1],pdVar1[2],pdVar1[3]);
    func_0x00010bf199e0(dVar18,dVar21,dVar19,dVar17,dVar20,dVar20,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fd40(param_3);
    func_0x00010c192d40(0x3fd0000000000000,puVar12);
    _objc_retainAutorelease(puVar10);
    func_0x00010bdc1040();
    func_0x00010c1a1180(puVar12);
    _objc_retainAutorelease(puVar11);
    func_0x00010bdc1040();
    func_0x00010c216920(puVar12);
    func_0x00010c19bc40(puVar12);
    _objc_retainAutorelease(puVar11);
    func_0x00010bdc1040();
    lVar16 = (long)_DAT_11271e048;
    uVar8 = *(undefined8 *)(param_5 + lVar16);
    func_0x00010c22a660(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_5 + lVar16);
    func_0x00010c22a660(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar8);
    puVar13 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fd40(param_3);
    func_0x00010c192d40(0x3fd0000000000000,puVar13);
    _objc_retainAutorelease(puVar10);
    func_0x00010bdc1040();
    func_0x00010c1a1180(puVar13);
    _objc_retainAutorelease(puVar11);
    func_0x00010bdc1040();
    func_0x00010c216920(puVar13);
    func_0x00010c19bc40(puVar13);
    _objc_retainAutorelease(puVar11);
    func_0x00010bdc1040();
    uVar8 = *(undefined8 *)(param_5 + lVar16);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_5 + lVar16);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar8);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(param_9);
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(param_9 + 0x20) + (long)_DAT_11271e054) = 0;
                    /* WARNING: Could not recover jumptable at 0x000105177be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_9 + 0x28) + 0x10))();
  return;
}



/* Entry: 105177bd0; end: 105177beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105177bd0(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271e054) = 0;
                    /* WARNING: Could not recover jumptable at 0x000105177be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105177bec; end: 105177d1f; -[SCAddFriendsExpandableBadgeView _updateShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105177bec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010c0e1c40(param_5);
    lVar3 = (long)_DAT_11271e048;
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(param_1,param_2);
    _objc_release(uVar1);
    func_0x00010c11ef60(param_5);
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(param_1);
    _objc_release(uVar1);
    func_0x00010c0e8ca0(param_5);
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(param_1);
    _objc_release(uVar1);
    lVar2 = param_5;
    func_0x00010bf40c40(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_retainAutorelease(lVar2);
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105177d20; end: 105177e93; -[SCAddFriendsExpandableBadgeView _updateBackgroundShapeViewPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105177d20(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  pdVar1 = (double *)(param_5 + (long)_DAT_11271e05c);
  uVar2 = param_5;
  _CGRectEqualToRect(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar7 = param_1 * 0.5;
  func_0x00010b816218();
  param_1 = (double)(long)(dVar7 * param_1) / param_1;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],param_1,param_1,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_6,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  lVar6 = (long)_DAT_11271e048;
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5800();
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105177e94; end: 105177ea3; -[SCAddFriendsExpandableBadgeView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105177e94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e058);
}



/* Entry: 105177ea4; end: 105177f03; -[SCAddFriendsExpandableBadgeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105177ea4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e058,0);
  _objc_storeStrong(param_1 + _DAT_11271e050,0);
  _objc_storeStrong(param_1 + _DAT_11271e048,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e04c,0);
  return;
}



/* Entry: 105177f04; end: 105177fe7; -[SCAddFriendsContactSyncCTAViewModel initWithDescriptionString:contentInsets:preferredContentHeight:findFriendsButtonViewModel:] */

undefined1 *
FUN_105177f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e68c0;
  uStack_70 = param_6;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 105177fe8; end: 10517800b; -[SCAddFriendsContactSyncCTAViewModel copyWithZone:] */

undefined8 FUN_105177fe8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10517800c; end: 10517811f; -[SCAddFriendsContactSyncCTAViewModel hash] */

undefined8 * FUN_10517800c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  double dVar12;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_58 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uStack_30 = uVar5;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == (undefined8 *)param_3) {
LAB_1051781f8:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    puVar10 = (undefined1 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105178204;
    puVar10 = (undefined1 *)puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if ((((ulong)puVar7 & 1) != 0) &&
       (uVar11 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar6 + 0x38) ==
                                              *(double *)(param_3 + 0x38)),
                                     CONCAT24(-(ushort)(*(double *)((long)puVar6 + 0x30) ==
                                                       *(double *)(param_3 + 0x30)),
                                              CONCAT22(-(ushort)(*(double *)((long)puVar6 + 0x28) ==
                                                                *(double *)(param_3 + 0x28)),
                                                       -(ushort)(*(double *)((long)puVar6 + 0x20) ==
                                                                *(double *)(param_3 + 0x20))))),2),
       (uVar11 & 1) != 0)) {
      dVar12 = ABS(*(double *)((long)puVar6 + 0x10) - *(double *)(param_3 + 0x10));
      dVar2 = ABS(*(double *)((long)puVar6 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
        bVar3 = dVar12 < dVar2;
      }
      if ((bVar3) &&
         ((lVar8 = *(long *)((long)puVar6 + 8), lVar8 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
        puVar10 = *(undefined1 **)((long)puVar6 + 0x18);
        if (puVar10 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105178204;
        }
        goto LAB_1051781f8;
      }
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_105178204:
  _objc_release(param_3);
  return (undefined8 *)puVar10;
}



/* Entry: 105178120; end: 10517821f; -[SCAddFriendsContactSyncCTAViewModel isEqual:] */

long FUN_105178120(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1051781f8:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105178204;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) &&
       (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x38) ==
                                             *(double *)(param_3 + 0x38)),
                                    CONCAT24(-(ushort)(*(double *)(param_1 + 0x30) ==
                                                      *(double *)(param_3 + 0x30)),
                                             CONCAT22(-(ushort)(*(double *)(param_1 + 0x28) ==
                                                               *(double *)(param_3 + 0x28)),
                                                      -(ushort)(*(double *)(param_1 + 0x20) ==
                                                               *(double *)(param_3 + 0x20))))),2),
       (uVar6 & 1) != 0)) {
      dVar7 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar1 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if ((bVar2) &&
         ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105178204;
        }
        goto LAB_1051781f8;
      }
    }
    lVar5 = 0;
  }
LAB_105178204:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 105178220; end: 105178227; -[SCAddFriendsContactSyncCTAViewModel descriptionString] */

undefined8 FUN_105178220(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105178228; end: 105178233; -[SCAddFriendsContactSyncCTAViewModel contentInsets] */

undefined8 FUN_105178228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105178234; end: 10517823b; -[SCAddFriendsContactSyncCTAViewModel preferredContentHeight] */

undefined8 FUN_105178234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10517823c; end: 105178243; -[SCAddFriendsContactSyncCTAViewModel findFriendsButtonViewModel] */

undefined8 FUN_10517823c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105178244; end: 105178273; -[SCAddFriendsContactSyncCTAViewModel .cxx_destruct] */

void FUN_105178244(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105178274; end: 1051782d7; +[SCAddFriendsSectionHeaderPrimaryViewModel buttonWithActionButtonViewModel:] */

void FUN_105178274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b56c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051782d8; end: 10517836f; +[SCAddFriendsSectionHeaderPrimaryViewModel titleWithTitleAttributedText:subtitleAttributedText:] */

void FUN_1051782d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b56c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105178370; end: 105178393; -[SCAddFriendsSectionHeaderPrimaryViewModel copyWithZone:] */

undefined8 FUN_105178370(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105178394; end: 105178417; -[SCAddFriendsSectionHeaderPrimaryViewModel hash] */

void FUN_105178394(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e68c8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105178418; end: 10517845b; -[SCAddFriendsSectionHeaderPrimaryViewModel internalInit] */

void FUN_105178418(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e68c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10517845c; end: 10517852b; -[SCAddFriendsSectionHeaderPrimaryViewModel isEqual:] */

long FUN_10517845c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105178504:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105178510;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105178510;
          }
          goto LAB_105178504;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105178510:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10517852c; end: 1051785b3; -[SCAddFriendsSectionHeaderPrimaryViewModel matchButton:title:] */

void FUN_10517852c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051785b4; end: 1051785ef; -[SCAddFriendsSectionHeaderPrimaryViewModel .cxx_destruct] */

void FUN_1051785b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1051785f0; end: 10517870f; -[SCAddFriendsExpandableBadgeViewModel initWithAttributedBadgeText:contentInsets:badgeColor:alwaysCircular:shadowViewModel:opacity:] */

undefined1 *
FUN_1051785f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126e68d0;
  uStack_80 = param_6;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 105178710; end: 105178733; -[SCAddFriendsExpandableBadgeViewModel copyWithZone:] */

undefined8 FUN_105178710(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105178734; end: 105178863; -[SCAddFriendsExpandableBadgeViewModel hash] */

undefined8 * FUN_105178734(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  float fVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  float fVar12;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar6 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_68 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_60 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_58 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar4;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar5;
  func_0x00010bfde980();
  uVar9 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar9 = (uVar9 ^ uVar9 >> 0x18) * 0x109;
  uVar9 = (uVar9 ^ uVar9 >> 0xe) * 0x15;
  lStack_30 = (uVar9 ^ uVar9 >> 0x1c) * 0x80000001;
  uStack_38 = uVar4;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == (undefined8 *)param_3) {
LAB_105178968:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    puVar10 = (undefined1 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105178974;
    puVar10 = (undefined1 *)puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if ((((ulong)puVar7 & 1) != 0) &&
       ((*(char *)((long)puVar6 + 8) == param_3[8] &&
        (uVar11 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar6 + 0x40) ==
                                               *(double *)(param_3 + 0x40)),
                                      CONCAT24(-(ushort)(*(double *)((long)puVar6 + 0x38) ==
                                                        *(double *)(param_3 + 0x38)),
                                               CONCAT22(-(ushort)(*(double *)((long)puVar6 + 0x30)
                                                                 == *(double *)(param_3 + 0x30)),
                                                        -(ushort)(*(double *)((long)puVar6 + 0x28)
                                                                 == *(double *)(param_3 + 0x28))))),
                             2), (uVar11 & 1) != 0)))) {
      fVar12 = ABS(*(float *)((long)puVar6 + 0xc) - *(float *)(param_3 + 0xc));
      fVar2 = ABS(*(float *)((long)puVar6 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar3 = true;
      if ((1.1754944e-38 <= fVar12) && (bVar3 = false, !NAN(fVar12) && !NAN(fVar2))) {
        bVar3 = fVar12 < fVar2;
      }
      if (((bVar3) &&
          ((lVar8 = *(long *)((long)puVar6 + 0x10), lVar8 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
         ((lVar8 = *(long *)((long)puVar6 + 0x18), lVar8 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071c60(), (int)lVar8 != 0)))) {
        puVar10 = *(undefined1 **)((long)puVar6 + 0x20);
        if (puVar10 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_105178974;
        }
        goto LAB_105178968;
      }
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_105178974:
  _objc_release(param_3);
  return (undefined8 *)puVar10;
}



/* Entry: 105178864; end: 10517898f; -[SCAddFriendsExpandableBadgeViewModel isEqual:] */

long FUN_105178864(ulong param_1,undefined8 param_2,ulong param_3)

{
  float fVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  float fVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105178968:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105178974;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x40) ==
                                              *(double *)(param_3 + 0x40)),
                                     CONCAT24(-(ushort)(*(double *)(param_1 + 0x38) ==
                                                       *(double *)(param_3 + 0x38)),
                                              CONCAT22(-(ushort)(*(double *)(param_1 + 0x30) ==
                                                                *(double *)(param_3 + 0x30)),
                                                       -(ushort)(*(double *)(param_1 + 0x28) ==
                                                                *(double *)(param_3 + 0x28))))),2),
        (uVar6 & 1) != 0)))) {
      fVar7 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar1 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar2 = true;
      if ((1.1754944e-38 <= fVar7) && (bVar2 = false, !NAN(fVar7) && !NAN(fVar1))) {
        bVar2 = fVar7 < fVar1;
      }
      if (((bVar2) &&
          ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
         ((lVar5 = *(long *)(param_1 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071c60(), (int)lVar5 != 0)))) {
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_105178974;
        }
        goto LAB_105178968;
      }
    }
    lVar5 = 0;
  }
LAB_105178974:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 105178990; end: 105178997; -[SCAddFriendsExpandableBadgeViewModel attributedBadgeText] */

undefined8 FUN_105178990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105178998; end: 1051789a3; -[SCAddFriendsExpandableBadgeViewModel contentInsets] */

undefined8 FUN_105178998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051789a4; end: 1051789ab; -[SCAddFriendsExpandableBadgeViewModel badgeColor] */

undefined8 FUN_1051789a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051789ac; end: 1051789b3; -[SCAddFriendsExpandableBadgeViewModel alwaysCircular] */

undefined1 FUN_1051789ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1051789b4; end: 1051789bb; -[SCAddFriendsExpandableBadgeViewModel shadowViewModel] */

undefined8 FUN_1051789b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1051789bc; end: 1051789c3; -[SCAddFriendsExpandableBadgeViewModel opacity] */

undefined4 FUN_1051789bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1051789c4; end: 1051789ff; -[SCAddFriendsExpandableBadgeViewModel .cxx_destruct] */

void FUN_1051789c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105178a00; end: 105178a9b; -[SCAddFriendsHeaderScrollShadowViewModel initWithOffset:radius:shadowColor:] */

undefined1 *
FUN_105178a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e68d8;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 105178a9c; end: 105178abf; -[SCAddFriendsHeaderScrollShadowViewModel copyWithZone:] */

undefined8 FUN_105178a9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105178ac0; end: 105178b7f; -[SCAddFriendsHeaderScrollShadowViewModel hash] */

ulong * FUN_105178ac0(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  puVar4 = &uStack_38;
  uStack_20 = uVar3;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_105178c30:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_105178c3c;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((ulong)puVar5 & 1) != 0) {
      bVar2 = false;
      if (((double)puVar4[3] == (double)param_3[3]) &&
         (bVar2 = false, !NAN((double)puVar4[4]) && !NAN((double)param_3[4]))) {
        bVar2 = (double)puVar4[4] == (double)param_3[4];
      }
      if (bVar2) {
        dVar9 = ABS((double)puVar4[1] - (double)param_3[1]);
        dVar8 = ABS((double)puVar4[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          puVar7 = (ulong *)puVar4[2];
          if (puVar7 != (ulong *)param_3[2]) {
            func_0x00010c071c60();
            goto LAB_105178c3c;
          }
          goto LAB_105178c30;
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_105178c3c:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 105178b80; end: 105178c57; -[SCAddFriendsHeaderScrollShadowViewModel isEqual:] */

long FUN_105178b80(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105178c30:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105178c3c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 0x10);
          if (lVar4 != *(long *)(param_3 + 0x10)) {
            func_0x00010c071c60();
            goto LAB_105178c3c;
          }
          goto LAB_105178c30;
        }
      }
    }
    lVar4 = 0;
  }
LAB_105178c3c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105178c58; end: 105178c5f; -[SCAddFriendsHeaderScrollShadowViewModel offset] */

undefined1  [16] FUN_105178c58(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 105178c60; end: 105178c67; -[SCAddFriendsHeaderScrollShadowViewModel radius] */

undefined8 FUN_105178c60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105178c68; end: 105178c6f; -[SCAddFriendsHeaderScrollShadowViewModel shadowColor] */

undefined8 FUN_105178c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105178c70; end: 105178c7b; -[SCAddFriendsHeaderScrollShadowViewModel .cxx_destruct] */

void FUN_105178c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105178c7c; end: 105178e37; -[SCAddFriendsSectionHeaderViewModel initWithPreferredSize:primaryViewContentInsets:primaryViewModel:actionButtonContentInsets:actionButtonViewModel:backgroundColor:scrollShadowViewModel:badgeViewModel:] */

undefined1 *
FUN_105178c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_98 = PTR_PTR_1126e68e0;
  uStack_a0 = param_9;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return (undefined1 *)puVar1;
}



/* Entry: 105178e38; end: 105178e5b; -[SCAddFriendsSectionHeaderViewModel copyWithZone:] */

undefined8 FUN_105178e38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105178e5c; end: 105179003; -[SCAddFriendsSectionHeaderViewModel hash] */

undefined8 * FUN_105178e5c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_98;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_105179144:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105179148;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (uVar9 = NEON_uminv(CONCAT26(-(ushort)((double)puVar4[10] == (double)param_3[10]),
                                    CONCAT24(-(ushort)((double)puVar4[9] == (double)param_3[9]),
                                             CONCAT22(-(ushort)((double)puVar4[8] ==
                                                               (double)param_3[8]),
                                                      -(ushort)((double)puVar4[7] ==
                                                               (double)param_3[7])))),2),
       (uVar9 & 1) != 0)) {
      uVar9 = NEON_uminv(CONCAT26(-(ushort)((double)puVar4[0xe] == (double)param_3[0xe]),
                                  CONCAT24(-(ushort)((double)puVar4[0xd] == (double)param_3[0xd]),
                                           CONCAT22(-(ushort)((double)puVar4[0xc] ==
                                                             (double)param_3[0xc]),
                                                    -(ushort)((double)puVar4[0xb] ==
                                                             (double)param_3[0xb])))),2);
      if ((uVar9 & 1) != 0) {
        lVar6 = puVar4[1];
        if ((lVar6 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[2];
          if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[3];
            if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[4];
              if ((lVar6 == param_3[4]) || (func_0x00010c071c60(), (int)lVar6 != 0)) {
                lVar6 = puVar4[5];
                if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  puVar8 = (undefined8 *)puVar4[6];
                  if (puVar8 != (undefined8 *)param_3[6]) {
                    func_0x00010c071ae0();
                    goto LAB_105179148;
                  }
                  goto LAB_105179144;
                }
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_105179148:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 105179004; end: 105179163; -[SCAddFriendsSectionHeaderViewModel isEqual:] */

long FUN_105179004(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105179144:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105179148;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x50) ==
                                             *(double *)(param_3 + 0x50)),
                                    CONCAT24(-(ushort)(*(double *)(param_1 + 0x48) ==
                                                      *(double *)(param_3 + 0x48)),
                                             CONCAT22(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                               *(double *)(param_3 + 0x40)),
                                                      -(ushort)(*(double *)(param_1 + 0x38) ==
                                                               *(double *)(param_3 + 0x38))))),2),
       (uVar4 & 1) != 0)) {
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x70) ==
                                           *(double *)(param_3 + 0x70)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x68) ==
                                                    *(double *)(param_3 + 0x68)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x60) ==
                                                             *(double *)(param_3 + 0x60)),
                                                    -(ushort)(*(double *)(param_1 + 0x58) ==
                                                             *(double *)(param_3 + 0x58))))),2);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 8);
        if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x10);
          if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x18);
            if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x20);
              if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071c60(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x28);
                if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x30);
                  if (lVar3 != *(long *)(param_3 + 0x30)) {
                    func_0x00010c071ae0();
                    goto LAB_105179148;
                  }
                  goto LAB_105179144;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105179148:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105179164; end: 10517916b; -[SCAddFriendsSectionHeaderViewModel preferredSize] */

undefined8 FUN_105179164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10517916c; end: 105179177; -[SCAddFriendsSectionHeaderViewModel primaryViewContentInsets] */

undefined8 FUN_10517916c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


