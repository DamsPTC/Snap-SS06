/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10512c57c; end: 10512c6a3; +[SCSendToEducationCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10512c57c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b50f0;
  _objc_opt_class(PTR_PTR_1126b50f0);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bfcf7e0(uVar1);
  puVar2 = PTR_PTR_1126b2780;
  uVar3 = uVar1;
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c260dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = param_1;
  func_0x00010bf45a60(param_1,param_2,0x4038000000000000,0x404a000000000000,puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c234880();
  _objc_release(uVar1);
  dVar6 = dVar5 + -32.0;
  if ((int)uVar3 == 0) {
    dVar6 = dVar5;
  }
  _objc_release(param_5);
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10512c6a4; end: 10512c7d7; -[SCSendToEducationCollectionViewCell _makeButtonWithImage:viewModel:] */

void FUN_10512c6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c14d100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14e680(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10512c7d8;
  puStack_60 = &UNK_110848ba8;
  uStack_58 = uVar3;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(uVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10512c7d8; end: 10512c9c3;  */

void FUN_10512c7d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bdc2640(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c279420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c279420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar1);
    _objc_release(uVar3);
  }
  func_0x00010c219b60(puVar1);
  func_0x00010c160fc0(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar3);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_68 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010bebc380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bef9040(puVar1);
  _objc_release(lVar9);
  puVar10 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10512c9c4;
  lStack_90 = lVar9;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(lVar2);
  if (lVar2 != 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10512ca50;
    puStack_a8 = &UNK_110841f80;
    _objc_retain(lVar2);
    lStack_a0 = lVar2;
    puStack_98 = puVar10;
    func_0x0001000d76cc("APPSTORE",&puStack_c0);
    _objc_release(lStack_a0);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10512c9c4; end: 10512ca4f; -[SCSendToEducationCollectionViewCell _makeLeadingIcon:] */

void FUN_10512c9c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10512ca50;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_30 = param_3;
    uStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_30);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10512ca50; end: 10512cbc7;  */

void FUN_10512ca50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_78 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c1b9fe0();
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar2 = puVar8;
  func_0x00010c279400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar8;
    func_0x00010c279400(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10512cccc;
    puStack_d8 = &UNK_11084a078;
    puStack_d0 = puVar1;
    _objc_retain(puVar8);
    puStack_120 = puVar2;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10512ccdc;
    puStack_108 = &UNK_11086a750;
    puStack_100 = puVar1;
    puStack_c8 = puVar8;
    _objc_retain(puVar8);
    puStack_f8 = puVar8;
    func_0x00010c0c0e40(puVar3,param_2,&puStack_f0,&puStack_120);
    _objc_release(puVar3);
    _objc_release(puStack_f8);
    _objc_release(puStack_c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10512cbc8; end: 10512cccb; -[SCSendToEducationCollectionViewCell _setTrailingIcon:] */

void FUN_10512cbc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c279400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c279400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10512cccc;
    puStack_58 = &UNK_11084a078;
    uStack_50 = param_1;
    _objc_retain(param_3);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10512ccdc;
    puStack_88 = &UNK_11086a750;
    uStack_80 = param_1;
    lStack_48 = param_3;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x00010c0c0e40(lVar2,param_2,&puStack_70,&puStack_a0);
    _objc_release(lVar2);
    _objc_release(lStack_78);
    _objc_release(lStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10512cccc; end: 10512ccdb;  */

void FUN_10512cccc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__makeButtonWithImage_viewModel__112574710,param_2
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10512ccdc; end: 10512ce3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512ccdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271cd60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10512ce40; end: 10512ce93;  */

void FUN_10512ce40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5b5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512ce94; end: 10512d013; -[SCSendToEducationCollectionViewCell _setLeadingIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512ce94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08dea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271cd60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c08dea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar3);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf88c20(uVar2);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10512d014; end: 10512d05b;  */

void FUN_10512d014(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5bd20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512d05c; end: 10512d093; -[SCSendToEducationCollectionViewCell _singleTapGestureRecognizer] */

void FUN_10512d05c(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512d094; end: 10512d13f; -[SCSendToEducationCollectionViewCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d094(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b50f0;
  uVar4 = *(ulong *)(param_1 + _DAT_11271cd58);
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
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271cd64);
  uVar3 = uVar1;
  func_0x00010c279440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10512d140; end: 10512d207; -[SCSendToEducationCollectionViewCell _didTapCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d140(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b50f0;
  uVar4 = *(ulong *)(param_1 + _DAT_11271cd58);
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
  func_0x00010bf34160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271cd64);
    uVar3 = uVar1;
    func_0x00010bf34160(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512d208; end: 10512d217; -[SCSendToEducationCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512d208(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cd58);
}



/* Entry: 10512d218; end: 10512d227; -[SCSendToEducationCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512d218(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cd64);
}



/* Entry: 10512d228; end: 10512d267; -[SCSendToEducationCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cd64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512d268; end: 10512d277; -[SCSendToEducationCollectionViewCell resourceDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512d268(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cd60);
}



/* Entry: 10512d278; end: 10512d2b7; -[SCSendToEducationCollectionViewCell setResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cd60;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512d2b8; end: 10512d2c7; -[SCSendToEducationCollectionViewCell dataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10512d2b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cd5c);
}



/* Entry: 10512d2c8; end: 10512d307; -[SCSendToEducationCollectionViewCell setDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cd5c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512d308; end: 10512d3a7; -[SCSendToEducationCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d308(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271cd5c,0);
  _objc_storeStrong(param_1 + _DAT_11271cd60,0);
  _objc_storeStrong(param_1 + _DAT_11271cd64,0);
  _objc_storeStrong(param_1 + _DAT_11271cd58,0);
  _objc_storeStrong(param_1 + _DAT_11271cd54,0);
  _objc_storeStrong(param_1 + _DAT_11271cd68,0);
  _objc_storeStrong(param_1 + _DAT_11271cd6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cd70,0);
  return;
}



/* Entry: 10512d3a8; end: 10512d547; -[SCSendToEducationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d3a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11271cd74;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf8cc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b50f8;
    _objc_alloc(PTR_PTR_1126b50f8);
    puVar4 = PTR_PTR_1126b5100;
    _objc_opt_new(PTR_PTR_1126b5100);
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar8);
    lVar5 = lVar8;
    func_0x00010bf8cc00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11271cd78;
    _objc_loadWeakRetained(lVar1);
    lVar6 = lVar1;
    func_0x00010bf89340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11271cd7c;
    _objc_loadWeakRetained(lVar2);
    lVar7 = lVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0220(puVar3,param_2,puVar4,lVar5,lVar6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(puVar4);
    param_1 = param_1 + _DAT_11271cd80;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10512d548; end: 10512d597; -[SCSendToEducationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512d548(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cd80);
  _objc_destroyWeak(param_1 + _DAT_11271cd7c);
  _objc_destroyWeak(param_1 + _DAT_11271cd78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271cd74);
  return;
}



/* Entry: 10512d598; end: 10512d693; -[SCSendToEducationExtension initWithActionHandler:configuration:resourceDownloader:sendToExperimentConfiguration:] */

undefined1 *
FUN_10512d598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6570;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512d694; end: 10512d703; -[SCSendToEducationExtension sectionIdentifiers] */

void FUN_10512d694(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12d78;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b5108);
    func_0x00010bff0220();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512d704; end: 10512d737; -[SCSendToEducationExtension sectionCreator] */

void FUN_10512d704(void)

{
  _objc_alloc(PTR_PTR_1126b5108);
  func_0x00010bff0220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512d738; end: 10512d73f; -[SCSendToEducationExtension sectionDescriptor] */

undefined8 FUN_10512d738(void)

{
  return 0;
}



/* Entry: 10512d740; end: 10512d747; -[SCSendToEducationExtension sectionLoggingParser] */

undefined8 FUN_10512d740(void)

{
  return 0;
}



/* Entry: 10512d748; end: 10512d78f; -[SCSendToEducationExtension .cxx_destruct] */

void FUN_10512d748(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512d790; end: 10512d8b3; -[SCSendToEducationSearchSectionCreator initWithSectionIdentifier:configuration:actionHandler:resourceDownloader:sendToExperimentConfiguration:] */

undefined1 *
FUN_10512d790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e6578;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512d8b4; end: 10512db57; -[SCSendToEducationSearchSectionCreator sectionForDescriptor:] */

void FUN_10512d8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar11,param_2,param_3);
  _objc_release(param_3);
  if ((int)uVar11 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c279440(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar2,param_2,uVar11,0);
    _objc_release(uVar11);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc();
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf34160(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar3,param_2,uVar11,0);
    _objc_release(uVar11);
    puVar4 = PTR_PTR_1126b50f0;
    _objc_alloc(PTR_PTR_1126b50f0);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2711a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c260dc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08dea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c279400(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c279420(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c234880();
    func_0x00010c0536c0(puVar4,param_2,uVar11,uVar5,uVar6,uVar7,puVar2,uVar8,puVar3,uVar1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar11);
    puVar9 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    puVar12 = PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    func_0x00010c04f820();
    puVar10 = PTR_PTR_1126b5110;
    _objc_alloc(PTR_PTR_1126b5110);
    func_0x00010c061e80();
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf6b020(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(puVar10,param_2,uVar11);
    _objc_release(uVar11);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,puVar10);
    func_0x00010c1f9240(puVar12,param_2,puVar10);
    func_0x00010c161980(puVar12,param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10512db58; end: 10512dbab; -[SCSendToEducationSearchSectionCreator .cxx_destruct] */

void FUN_10512db58(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512dbac; end: 10512dca7; -[SCSendToEducationSectionCreator initWithActionHandler:configuration:resourceDownloader:sendToExperimentConfiguration:] */

undefined1 *
FUN_10512dbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6580;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512dca8; end: 10512dcf3; -[SCSendToEducationSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_10512dca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c1818e0(*(undefined8 *)(param_1 + 8),param_2,param_5);
  _objc_alloc(PTR_PTR_1126b5118);
  func_0x00010c043100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512dcf4; end: 10512dd3b; -[SCSendToEducationSectionCreator .cxx_destruct] */

void FUN_10512dcf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512dd3c; end: 10512dd47; +[SCSendToEducationSectionDataProvider announcerIdentifier] */

undefined ** FUN_10512dd3c(void)

{
  return &PTR____CFConstantStringClassReference_110dbb4d8;
}



/* Entry: 10512dd48; end: 10512dd4f; -[SCSendToEducationSectionDataProvider addListener:] */

void FUN_10512dd48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10512dd50; end: 10512dd57; -[SCSendToEducationSectionDataProvider removeListener:] */

void FUN_10512dd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10512dd58; end: 10512de17; -[SCSendToEducationSectionDataProvider initWithViewModel:resourceDownloader:] */

undefined1 *
FUN_10512dd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6588;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512de18; end: 10512de27; -[SCSendToEducationSectionDataProvider numberOfItemsInSection:] */

bool FUN_10512de18(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 10512de28; end: 10512de9f; -[SCSendToEducationSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10512de28(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lStack_20 = *(long *)(param_1 + 0x10);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_a8 = *(undefined8 *)(puVar2 + 0x18);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x10512e014;
      puStack_b0 = &UNK_11086a788;
      puStack_a0 = puVar2;
      _objc_retain(uStack_a8);
      ppuVar3 = &puStack_c8;
      _objc_retainBlock();
      ppuStack_98 = &PTR____CFConstantStringClassReference_110dc6d78;
      ppuVar4 = ppuVar3;
      _objc_retainBlock();
      ppuStack_90 = ppuVar4;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        _objc_retain(param_2);
        puVar2 = PTR_PTR_1126b5120;
        _objc_opt_class(PTR_PTR_1126b5120);
        uVar5 = param_2;
        _objc_opt_isKindOfClass(param_2,puVar2);
        uVar1 = param_2;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        func_0x00010c1eccc0(uVar1);
        func_0x00010c189680(uVar1);
        _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_2);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512dea0; end: 10512df1f; -[SCSendToEducationSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10512dea0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_88 = *(undefined8 *)(puVar2 + 0x18);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10512e014;
    puStack_90 = &UNK_11086a788;
    puStack_80 = puVar2;
    _objc_retain(uStack_88);
    ppuVar3 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dc6d78;
    ppuVar4 = ppuVar3;
    _objc_retainBlock();
    ppuStack_70 = ppuVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_retain(param_2);
      puVar2 = PTR_PTR_1126b5120;
      _objc_opt_class(PTR_PTR_1126b5120);
      uVar5 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar2);
      uVar1 = param_2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      func_0x00010c1eccc0(uVar1);
      func_0x00010c189680(uVar1);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512df20; end: 10512e08f; -[SCSendToEducationSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10512df20(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x10512e014;
  puStack_60 = &UNK_11086a788;
  lStack_50 = param_1;
  _objc_retain(uStack_58);
  ppuVar2 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc6d78;
  ppuVar3 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126b5120;
  _objc_opt_class(PTR_PTR_1126b5120);
  uVar5 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar4);
  uVar1 = param_2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  func_0x00010c189680(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10512e090; end: 10512e0e3; -[SCSendToEducationSectionDataProvider setSectionDataModel:] */

void FUN_10512e090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155aa0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10512e0e4; end: 10512e10f; -[SCSendToEducationSectionDataProvider sendToEducationPopupDidDisplay] */

void FUN_10512e0e4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15d180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512e110; end: 10512e167; -[SCSendToEducationSectionDataProvider sendToEducationPopupDidDismiss] */

void FUN_10512e110(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c155aa0();
  _objc_release(lVar2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15d160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512e168; end: 10512e1af; -[SCSendToEducationSectionDataProvider sendToEducationPopupTrailingImageTapped:] */

void FUN_10512e168(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15d1a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512e1b0; end: 10512e1f7; -[SCSendToEducationSectionDataProvider sendToEducationPopupCellTapped:] */

void FUN_10512e1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15d140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512e1f8; end: 10512e20f; -[SCSendToEducationSectionDataProvider dataProviderDelegate] */

void FUN_10512e1f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512e210; end: 10512e21b; -[SCSendToEducationSectionDataProvider setDataProviderDelegate:] */

void FUN_10512e210(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10512e21c; end: 10512e223; -[SCSendToEducationSectionDataProvider sectionDataModel] */

undefined8 FUN_10512e21c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10512e224; end: 10512e22b; -[SCSendToEducationSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10512e224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10512e22c; end: 10512e25b; -[SCSendToEducationSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10512e22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512e25c; end: 10512e273; -[SCSendToEducationSectionDataProvider delegate] */

void FUN_10512e25c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512e274; end: 10512e27f; -[SCSendToEducationSectionDataProvider setDelegate:] */

void FUN_10512e274(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10512e280; end: 10512e2e3; -[SCSendToEducationSectionDataProvider .cxx_destruct] */

void FUN_10512e280(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512e2e4; end: 10512e493; -[SCSendToEducationCellViewModel initWithTitle:subtitle:leadingIcon:trailingIcon:trailingIconTapAction:trailingIconColor:cellTapAction:shouldShrinkCellHeight:groupingStyle:] */

undefined1 *
FUN_10512e2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e6590;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512e494; end: 10512e4b7; -[SCSendToEducationCellViewModel copyWithZone:] */

undefined8 FUN_10512e494(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10512e4b8; end: 10512e573; -[SCSendToEducationCellViewModel hash] */

undefined8 * FUN_10512e4b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10512e68c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10512e698;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071c60(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x40);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10512e698;
                  }
                  goto LAB_10512e68c;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10512e698:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10512e574; end: 10512e6b3; -[SCSendToEducationCellViewModel isEqual:] */

long FUN_10512e574(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10512e68c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10512e698;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071c60(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10512e698;
                  }
                  goto LAB_10512e68c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10512e698:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10512e6b4; end: 10512e6bb; -[SCSendToEducationCellViewModel title] */

undefined8 FUN_10512e6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10512e6bc; end: 10512e6c3; -[SCSendToEducationCellViewModel subtitle] */

undefined8 FUN_10512e6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10512e6c4; end: 10512e6cb; -[SCSendToEducationCellViewModel leadingIcon] */

undefined8 FUN_10512e6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10512e6cc; end: 10512e6d3; -[SCSendToEducationCellViewModel trailingIcon] */

undefined8 FUN_10512e6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10512e6d4; end: 10512e6db; -[SCSendToEducationCellViewModel trailingIconTapAction] */

undefined8 FUN_10512e6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10512e6dc; end: 10512e6e3; -[SCSendToEducationCellViewModel trailingIconColor] */

undefined8 FUN_10512e6dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10512e6e4; end: 10512e6eb; -[SCSendToEducationCellViewModel cellTapAction] */

undefined8 FUN_10512e6e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10512e6ec; end: 10512e6f3; -[SCSendToEducationCellViewModel shouldShrinkCellHeight] */

undefined1 FUN_10512e6ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10512e6f4; end: 10512e6fb; -[SCSendToEducationCellViewModel groupingStyle] */

undefined8 FUN_10512e6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10512e6fc; end: 10512e767; -[SCSendToEducationCellViewModel .cxx_destruct] */

void FUN_10512e6fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10512e768; end: 10512e7db; -[SCGrapheneCreatePostFlowMetric2 init] */

undefined1 * FUN_10512e768(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6598;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10512e7dc; end: 10512e853;  */

void FUN_10512e7dc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11086a7b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10512e854; end: 10512e9c7;  */

undefined8 ***
FUN_10512e854(long param_1,undefined8 ***param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 **param_5,undefined8 **param_6)

{
  char *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar4 = (undefined8 **)&uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ***)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11086a808);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppuVar8 = ppuVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppuVar8 = ppuVar4;
      param_4 = param_3;
    }
  }
  pppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(ppuVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_f8 = PTR_PTR_1126e65a0;
  pppuVar3 = &ppuStack_100;
  ppuStack_100 = pppuVar2;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined8 ***)0x0) {
    _objc_retain(param_4);
    ppuVar4 = pppuVar3[1];
    pppuVar3[1] = param_4;
    _objc_release(ppuVar4);
    _objc_retain(param_5);
    ppuVar4 = pppuVar3[2];
    pppuVar3[2] = param_5;
    _objc_release(ppuVar4);
    _objc_retain(param_6);
    ppuVar4 = pppuVar3[3];
    pppuVar3[3] = param_6;
    _objc_release(ppuVar4);
    ppuVar4 = (undefined8 **)PTR_PTR_1126ae568;
    _objc_opt_new();
    ppuVar9 = pppuVar3[5];
    pppuVar3[5] = ppuVar4;
    _objc_release(ppuVar9);
    *(undefined1 *)(pppuVar3 + 7) = 0;
    func_0x00010bed3700(pppuVar3);
    ppuVar4 = (undefined8 **)PTR_PTR_1126ae810;
    _objc_opt_new();
    ppuVar9 = pppuVar3[4];
    pppuVar3[4] = ppuVar4;
    _objc_release(ppuVar9);
    _objc_initWeak(auStack_108,pppuVar3);
    ppuVar4 = param_4;
    func_0x00010c15ab20(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar4;
    func_0x00010bf6d420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar9;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar9;
    func_0x00010c0e0ea0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_10512ed14;
    puStack_118 = &UNK_1108531d0;
    _objc_copyWeak(auStack_110,auStack_108);
    ppuVar7 = ppuVar6;
    func_0x00010c25ff60(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar9);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar8;
    func_0x00010c269d40(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar4;
    func_0x00010c15aa80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar9;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar9;
    func_0x00010c0e0ec0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_138,auStack_108);
    ppuVar7 = ppuVar6;
    func_0x00010c25ff60(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar9);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar8);
  return pppuVar3;
}



/* Entry: 10512e9c8; end: 10512ed13; -[SCSendToScheduleActionSheetController initWithStoryRepository:sendToTracker:circumstanceEngine:snapProUserProfileIdProvider:] */

undefined8 *
FUN_10512e9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126e65a0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = 0;
    func_0x00010bed3700(puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = param_4;
    func_0x00010c15ab20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf6d420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10512ed14;
    puStack_98 = &UNK_1108531d0;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c15aa80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10512ed14; end: 10512ed87;  */

void FUN_10512ed14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512ed88; end: 10512edb7; -[SCSendToScheduleActionSheetController actionSheetType] */

void FUN_10512ed88(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e2c498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e2c498);
  return;
}



/* Entry: 10512edb8; end: 10512eeb7; -[SCSendToScheduleActionSheetController getNavigationOption] */

void FUN_10512edb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x0001051304e4();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010c0d0f20(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10512eeb8; end: 10512ef23;  */

void FUN_10512eeb8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc1f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d300(param_2);
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512ef24; end: 10512f007; -[SCSendToScheduleActionSheetController getActionSheet] */

void FUN_10512ef24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 0x39) == '\x01') {
    puVar4 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    puVar1 = puVar4;
    FUN_10513049c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c14fd80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be1db80(param_1,param_2,lVar2 != 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1f280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f40(puVar4,param_2,0,puVar1,lVar3,param_1);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10512f008; end: 10512f02f; -[SCSendToScheduleActionSheetController actionSheetAvailabilityObservable] */

void FUN_10512f008(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10512f030; end: 10512f037; -[SCSendToScheduleActionSheetController isActionSheetAvailable] */

undefined1 FUN_10512f030(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 10512f038; end: 10512f23b; -[SCSendToScheduleActionSheetController _updateAvailability] */

void FUN_10512f038(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined2 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10512f23c;
  puStack_70 = &UNK_11086a868;
  lVar2 = lVar3;
  lStack_68 = param_1;
  func_0x0001006372a4(lVar3,&puStack_88);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10512f248;
  puStack_98 = &UNK_11086a868;
  lVar4 = lVar3;
  lStack_90 = param_1;
  func_0x0001006372a4(lVar3,&puStack_b0);
  lVar5 = lVar2;
  func_0x00010bf529e0();
  lVar6 = lVar4;
  func_0x00010bf529e0();
  if ((*(char *)(param_1 + 0x3a) == '\x01') && (lVar5 != 0 && lVar6 != 0)) {
    _objc_initWeak(auStack_b8,param_1);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x10512f2a0;
    puStack_d0 = &UNK_11086a898;
    _objc_copyWeak(auStack_c8,auStack_b8);
    uStack_c0 = 0x101;
    _objc_copyWeak(auStack_f0,auStack_b8);
    _objc_retain(lVar4);
    func_0x00010be7bec0(param_1);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_b8);
  }
  else {
    func_0x00010bed3720(param_1);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 10512f23c; end: 10512f247;  */

void FUN_10512f23c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be43a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__isSelectionItemEligible__11256e828,param_2);
  return;
}



/* Entry: 10512f248; end: 10512f30b;  */

undefined8 FUN_10512f248(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010be43a20();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_2;
    func_0x000108425bb0(param_2);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10512f30c; end: 10512f3b7; -[SCSendToScheduleActionSheetController _updateAvailabilityWithHasEligibleItems:hasIneligibleStoryItems:] */

void FUN_10512f30c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  if (((param_3 == 0) || (param_4 != 0)) || ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    if (*(char *)(param_1 + 0x39) == '\0') {
      return;
    }
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x000108f3dee8();
    if ((uint)*(byte *)(param_1 + 0x39) == (uint)uVar1) {
      return;
    }
    if ((uVar1 & 1) != 0) {
      uVar3 = 1;
      goto LAB_10512f370;
    }
  }
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 0;
    func_0x00010be08340(param_1);
  }
  uVar3 = 0;
LAB_10512f370:
  *(undefined1 *)(param_1 + 0x39) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10512f3b8; end: 10512f58f; -[SCSendToScheduleActionSheetController _updateUserEligibilityWithSelectionStories:] */

void FUN_10512f3b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      param_6 = 0;
      func_0x00010c0bee40(*(undefined8 *)(lVar3 * 8));
      if ((*(byte *)(puStack_110 + 3) & 1) != 0) goto LAB_10512f4f4;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
LAB_10512f4f4:
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(puStack_110 + 3);
  func_0x00010bed3700(param_1);
  __Block_object_dispose(&uStack_118,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_118,8);
  __Unwind_Resume();
  if ((param_6 & 0xfffffffffffffffe) == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 10512f590; end: 10512f5af;  */

void FUN_10512f590(long param_1)

{
  ulong in_x5;
  
  if ((in_x5 & 0xfffffffffffffffe) == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 10512f5b0; end: 10512f84f; -[SCSendToScheduleActionSheetController _getCellsWithDatePickerEnabled:] */

void FUN_10512f5b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x0001051304b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1588e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10512f850;
  puStack_a0 = &UNK_110852cd0;
  _objc_copyWeak(auStack_98,auStack_90);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b10a0;
  puVar4 = puVar3;
  puStack_88 = puVar3;
  func_0x0001051304cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1588e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar8);
  puVar6 = puVar5;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar7;
  if (param_3 == 0) {
    _objc_retain(puVar7);
  }
  else {
    func_0x00010be1e740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  puVar1 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar8);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bed5100();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10512f850; end: 10512f8e7;  */

void FUN_10512f850(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512f8e8; end: 10512fbcb; -[SCSendToScheduleActionSheetController _getDatePickerCell] */

void FUN_10512f8e8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c14fd80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c14fd80();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_88 = puVar2;
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIDatePicker_1126af760;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1dff00(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c189a20(*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4072c00000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8220(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4143c68000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3ac0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b10a0;
  _objc_alloc();
  func_0x00010c04ea80();
  func_0x00010befbb60();
  puStack_90 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf34860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_80 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf348e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  puStack_78 = puVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0720(PTR_PTR_1126b50b8);
  uVar12 = uVar9;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_90);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar5 = puStack_88;
  _objc_release(puStack_88);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_98 = FUN_10512fbcc;
    puStack_c0 = puVar3;
    puStack_b8 = puVar2;
    uStack_b0 = uVar9;
    uStack_a8 = uVar12;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_c8,puVar5);
    puVar3 = PTR_PTR_1126b10a0;
    ppuVar11 = &PTR____CFConstantStringClassReference_110dbb618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_c8);
    puVar2 = puVar3;
    func_0x00010bf1d200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar3);
    _objc_release(ppuVar11);
    _objc_destroyWeak(auStack_c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10512fbcc; end: 10512fcd7; -[SCSendToScheduleActionSheetController _getFooterCell] */

void FUN_10512fbcc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10512fcd8; end: 10512fd1f;  */

void FUN_10512fcd8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00d80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512fd20; end: 10512fdc7; -[SCSendToScheduleActionSheetController _updateCellsWithIsSetToSchedule:sender:] */

void FUN_10512fd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  *(char *)(param_1 + 0x3a) = (char)param_3;
  uVar1 = param_4;
  _objc_retain(param_4);
  FUN_10513049c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be1db80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1f280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(param_4,param_2,0,uVar1,lVar2,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512fdc8; end: 10512fe4b; -[SCSendToScheduleActionSheetController _emitSetScheduleEvent] */

void FUN_10512fdc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf64de0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b50d0;
  func_0x00010c1f67a0(PTR_PTR_1126b50d0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512fe4c; end: 10512fecb; -[SCSendToScheduleActionSheetController _dismissActionSheetWithSender:] */

void FUN_10512fe4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf82fe0(param_3);
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84220();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10512fecc; end: 10512ff0b; -[SCSendToScheduleActionSheetController _didTapDoneWithSender:] */

void FUN_10512fecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be08340(param_1);
  func_0x00010be023e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10512ff0c; end: 10513000b; -[SCSendToScheduleActionSheetController _presentIneligibleStoryAlertDialogWithOnAccept:onCancel:] */

void FUN_10512ff0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001051304fc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000105130514();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010513052c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b100(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513000c; end: 105130067; -[SCSendToScheduleActionSheetController _unselectSelectionItems:] */

void FUN_10513000c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c15ab20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105130068; end: 10513022f; -[SCSendToScheduleActionSheetController _isSelectionItemEligible:] */

long FUN_105130068(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
LAB_1051301a4:
    lVar7 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010c0720c0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f52d38);
    lVar2 = param_3;
    if ((int)lVar1 == 0) {
      func_0x00010c122a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c0720c0();
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar1 == 0) goto LAB_1051301a4;
      func_0x00010c122a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c0720c0(lVar4,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return lVar7;
}


