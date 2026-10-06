/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050bc790; end: 1050bc973; -[SCProfileCharmsCardViewCellSpacerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050bc790(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e6020;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR_PTR_1126b0648;
    _objc_alloc_init();
    lVar8 = (long)_DAT_11271ba98;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010bfe8340(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa620(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar3);
    func_0x000106625638();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010befbb60();
    func_0x000106625654();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000106625638();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    FUN_1050bc9cc(puVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271ba9c);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11271ba9c) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010befbb60();
    func_0x000106625638();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000106625654();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    FUN_1050bc9cc(puVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271baa0);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11271baa0) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050bc974; end: 1050bc9cb;  */

void FUN_1050bc974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dc4f58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050bc9cc; end: 1050bcb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bc9cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  puVar1 = PTR_PTR_1126b1198;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _objc_release(param_1);
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0,0x3fe0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 1.0;
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puStack_a8 = PTR_PTR_1126e6020;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfe0640(puVar2);
  dVar6 = dVar5;
  func_0x00010bfe0640(puVar2);
  lVar4 = (long)_DAT_11271ba98;
  func_0x00010c202c80(dVar5,dVar6,*(undefined8 *)(puVar2 + lVar4));
  func_0x00010c2a5040(puVar2);
  dVar6 = dVar5 * 0.5;
  func_0x00010bfe0640(puVar2);
  func_0x00010c17a6a0(dVar6,dVar5 * 0.5,*(undefined8 *)(puVar2 + lVar4));
  func_0x00010c2a5040(puVar2);
  dVar5 = dVar6;
  func_0x00010c2a5040(*(undefined8 *)(puVar2 + lVar4));
  dVar6 = (dVar6 - dVar5) * 0.5 + -16.0;
  lVar4 = (long)_DAT_11271ba9c;
  dVar5 = dVar6;
  func_0x00010c202c80(dVar6,0x3ff0000000000000,*(undefined8 *)(puVar2 + lVar4));
  func_0x00010c2a5040(*(undefined8 *)(puVar2 + lVar4));
  dVar7 = dVar5 * 0.5;
  func_0x00010bfe0640(puVar2);
  func_0x00010c17a6a0(dVar7,dVar5 * 0.5,*(undefined8 *)(puVar2 + lVar4));
  lVar4 = (long)_DAT_11271baa0;
  func_0x00010c202c80(dVar6,0x3ff0000000000000,*(undefined8 *)(puVar2 + lVar4));
  func_0x00010c2a5040(puVar2);
  dVar5 = dVar6;
  func_0x00010c2a5040(*(undefined8 *)(puVar2 + lVar4));
  dVar5 = dVar5 * 0.5;
  dVar6 = dVar6 - dVar5;
  func_0x00010bfe0640(puVar2);
  func_0x00010c17a6a0(dVar6,dVar5 * 0.5,*(undefined8 *)(puVar2 + lVar4));
  return;
}



/* Entry: 1050bcb38; end: 1050bcc8b; -[SCProfileCharmsCardViewCellSpacerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bcb38(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e6020;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfe0640(param_2);
  dVar2 = param_1;
  func_0x00010bfe0640(param_2);
  lVar1 = (long)_DAT_11271ba98;
  func_0x00010c202c80(param_1,dVar2,*(undefined8 *)(param_2 + lVar1));
  func_0x00010c2a5040(param_2);
  dVar3 = param_1 * 0.5;
  func_0x00010bfe0640(param_2);
  func_0x00010c17a6a0(dVar3,param_1 * 0.5,*(undefined8 *)(param_2 + lVar1));
  func_0x00010c2a5040(param_2);
  dVar2 = dVar3;
  func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar1));
  dVar3 = (dVar3 - dVar2) * 0.5 + -16.0;
  lVar1 = (long)_DAT_11271ba9c;
  dVar2 = dVar3;
  func_0x00010c202c80(dVar3,0x3ff0000000000000,*(undefined8 *)(param_2 + lVar1));
  func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar1));
  dVar4 = dVar2 * 0.5;
  func_0x00010bfe0640(param_2);
  func_0x00010c17a6a0(dVar4,dVar2 * 0.5,*(undefined8 *)(param_2 + lVar1));
  lVar1 = (long)_DAT_11271baa0;
  func_0x00010c202c80(dVar3,0x3ff0000000000000,*(undefined8 *)(param_2 + lVar1));
  func_0x00010c2a5040(param_2);
  dVar2 = dVar3;
  func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar1));
  dVar2 = dVar2 * 0.5;
  dVar3 = dVar3 - dVar2;
  func_0x00010bfe0640(param_2);
  func_0x00010c17a6a0(dVar3,dVar2 * 0.5,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 1050bcc8c; end: 1050bccdb; -[SCProfileCharmsCardViewCellSpacerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bcc8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271baa0,0);
  _objc_storeStrong(param_1 + _DAT_11271ba9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ba98,0);
  return;
}



/* Entry: 1050bccdc; end: 1050bce5b; -[SCProfileCharmsCardViewCellTitleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050bccdc(undefined8 param_1)

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
  
  puStack_58 = PTR_PTR_1126e6028;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1050bce5c;
    puStack_78 = &UNK_110866490;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271baa4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271baa4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271baa8);
    *(undefined **)((long)puVar1 + (long)_DAT_11271baa8) = puVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 1050bce5c; end: 1050bcedb;  */

void FUN_1050bce5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050bcedc; end: 1050bd173; -[SCProfileCharmsCardViewCellTitleView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bcedc(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126e6028;
  lStack_90 = param_3;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bdf4cc0(param_3);
  func_0x00010c23d0a0(param_3);
  dVar4 = 0.5;
  lVar3 = param_3 + _DAT_11271baac;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c23d0a0();
  dVar4 = dVar4 + -107.0;
  dVar7 = dVar4 * 0.005780346820809248 + 0.0;
  _objc_release(lVar3);
  func_0x00010c088120(*(undefined8 *)(param_3 + _DAT_11271bab0));
  dVar6 = 21.0;
  if ((long)dVar4 != 2) {
    dVar6 = 25.0;
  }
  dVar5 = param_1 / 91.0;
  if (param_2 / 30.0 <= param_1 / 91.0) {
    dVar5 = param_2 / 30.0;
  }
  _CGAffineTransformMakeScale(&uStack_c0,dVar5,dVar5);
  lVar3 = (long)_DAT_11271baa4;
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1 * 0.5,param_2 * 0.5);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)(1.0 - dVar7));
  _objc_release(uVar1);
  _objc_release(uVar2);
  dVar6 = param_2 / (dVar6 * (double)(long)dVar4);
  dVar4 = param_1 / 248.0;
  if (dVar6 <= param_1 / 248.0) {
    dVar4 = dVar6;
  }
  _CGAffineTransformMakeScale(&uStack_120,dVar4,dVar4);
  lVar3 = (long)_DAT_11271baa8;
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uStack_118;
  uStack_f0 = uStack_120;
  uStack_d8 = uStack_108;
  uStack_e0 = uStack_110;
  uStack_c8 = uStack_f8;
  uStack_d0 = uStack_100;
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1 * 0.5,param_2 * 0.5);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)dVar7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1050bd174; end: 1050bd263; -[SCProfileCharmsCardViewCellTitleView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1050bd174(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar2 = (long)_DAT_11271baac;
  lVar1 = param_2 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23d0a0();
  param_1 = param_1 + -107.0;
  dVar5 = param_1 * 0.005780346820809248 + 0.0;
  _objc_release(lVar1);
  func_0x00010c088120(*(undefined8 *)(param_2 + _DAT_11271bab0));
  dVar4 = 21.0;
  if ((long)param_1 != 2) {
    dVar4 = 25.0;
  }
  dVar3 = (double)(long)param_1;
  dVar4 = dVar4 * dVar3;
  param_2 = param_2 + lVar2;
  _objc_loadWeakRetained(param_2);
  func_0x00010c23d0a0();
  _objc_release(param_2);
  auVar6._8_8_ = dVar5 * dVar4 + (1.0 - dVar5) * 30.0;
  auVar6._0_8_ = dVar3 + ((dVar3 + -107.0) * 0.046242774566473986 + 8.0) * -2.0;
  return auVar6;
}



/* Entry: 1050bd264; end: 1050bd2d7; -[SCProfileCharmsCardViewCellTitleView setTitleViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bd264(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271bab0;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bdf4cc0(param_1,param_2,1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050bd2d8; end: 1050bd437; -[SCProfileCharmsCardViewCellTitleView _createTitlesIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bd2d8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = param_2 + _DAT_11271baac;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23d0a0();
  dVar3 = (param_1 + -107.0) * 0.005780346820809248 + 0.0;
  _objc_release(lVar1);
  if (dVar3 == 0.0) {
LAB_1050bd360:
    if (param_4 != 0) {
      lVar1 = *(long *)(param_2 + _DAT_11271baa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) goto LAB_1050bd398;
    }
  }
  else {
    lVar2 = (long)_DAT_11271baa8;
    lVar1 = *(long *)(param_2 + lVar2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_1050bd360;
    func_0x00010bf57500(*(undefined8 *)(param_2 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1050bd398:
    func_0x00010beda2a0(param_2);
  }
  if (dVar3 != 1.0) {
    lVar2 = (long)_DAT_11271baa4;
    lVar1 = *(long *)(param_2 + lVar2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_2 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_1050bd41c;
    }
  }
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_11271baa4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
LAB_1050bd41c:
                    /* WARNING: Could not recover jumptable at 0x00010bedff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateSmallTitle_112595978);
      return;
    }
  }
  return;
}



/* Entry: 1050bd438; end: 1050bd4cb; -[SCProfileCharmsCardViewCellTitleView _buildSmallTitle] */

void FUN_1050bd438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,2);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050bd4cc; end: 1050bd62b; -[SCProfileCharmsCardViewCellTitleView _updateSmallTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bd4cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271baa4;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_11271bab0;
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c26b920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(0,0,0x4056c00000000000,0x403e000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106625718(0x402e000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1050bd62c; end: 1050bd6a7; -[SCProfileCharmsCardViewCellTitleView _buildLargeTitle] */

void FUN_1050bd62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x0001066255d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050bd6a8; end: 1050bd87b; -[SCProfileCharmsCardViewCellTitleView _updateLargeTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bd6a8(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = (long)_DAT_11271baa8;
  lVar1 = *(long *)(param_2 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_11271bab0;
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c088120(*(undefined8 *)(param_2 + lVar1));
    dVar6 = 21.0;
    if ((long)param_1 != 2) {
      dVar6 = 25.0;
    }
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202c80(0x406f000000000000,dVar6 * (double)(long)param_1);
    _objc_release(uVar2);
    func_0x00010c088120(*(undefined8 *)(param_2 + lVar1));
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0880e0(*(undefined8 *)(param_2 + lVar1));
    func_0x00010bf6d680(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c088100(*(undefined8 *)(param_2 + lVar1));
    func_0x000106625718(uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1050bd87c; end: 1050bd89b; -[SCProfileCharmsCardViewCellTitleView cell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bd87c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271baac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050bd89c; end: 1050bd8af; -[SCProfileCharmsCardViewCellTitleView setCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bd89c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271baac,param_3);
  return;
}



/* Entry: 1050bd8b0; end: 1050bd90b; -[SCProfileCharmsCardViewCellTitleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bd8b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271baac);
  _objc_storeStrong(param_1 + _DAT_11271baa8,0);
  _objc_storeStrong(param_1 + _DAT_11271baa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271bab0,0);
  return;
}



/* Entry: 1050bd90c; end: 1050bda5b; -[SCProfileCharmsCollectionBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050bd90c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ca8;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11271bab4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c1842e0(0x4024000000000000,uVar3);
    func_0x000108f7491c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1795e0(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(uVar3);
    func_0x000108f7495c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c1fe7a0(0,0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1fe800(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1fe840(0x4004000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1fe780(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11271bab8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050bda5c; end: 1050bdb4b; -[SCProfileCharmsCollectionBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bda5c(double param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e6030;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  param_1 = param_1 + 16.0;
  lVar2 = (long)_DAT_11271bab4;
  func_0x00010c19f0e0(param_1,param_2 + 0.0,param_3 + -32.0,*(undefined8 *)(param_4 + lVar2));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar2));
  _CGRectGetWidth();
  param_1 = param_1 + -32.0;
  lVar1 = (long)_DAT_11271bab8;
  func_0x00010c2256c0(param_1,*(undefined8 *)(param_4 + lVar1));
  func_0x00010c23d620(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar2));
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar2));
  _CGRectGetMidY();
  dVar3 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  _CGRectGetHeight();
  func_0x00010c2172c0(param_1 + dVar3 * -0.5,*(undefined8 *)(param_4 + lVar1));
  return;
}



/* Entry: 1050bdb4c; end: 1050bdc93; -[SCProfileCharmsCollectionBackgroundView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bdb4c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11271babc;
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
      if ((uVar1 & 1) != 0) goto LAB_1050bdc7c;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
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
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11271bab8));
    uVar1 = uVar4;
    func_0x00010c25cd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c161020(param_1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_1050bdc7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050bdc94; end: 1050bdc9f; +[SCProfileCharmsCollectionBackgroundView sizeWithViewModel:constrainedToSize:] */

void FUN_1050bdc94(void)

{
  return;
}



/* Entry: 1050bdca0; end: 1050bdcaf; -[SCProfileCharmsCollectionBackgroundView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050bdca0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271babc);
}



/* Entry: 1050bdcb0; end: 1050bdcff; -[SCProfileCharmsCollectionBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bdcb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271babc,0);
  _objc_storeStrong(param_1 + _DAT_11271bab8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271bab4,0);
  return;
}



/* Entry: 1050bdd00; end: 1050bdeaf; -[SCProfileCharmsCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050bdd00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126b48f8;
    _objc_opt_new();
    lVar5 = (long)_DAT_11271bac0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1f7ac0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126b4900;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11271bac4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1738c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c167a00(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050bdeb0; end: 1050bdeff; -[SCProfileCharmsCollectionViewCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bdeb0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11271bac4));
  puStack_28 = PTR_PTR_1126e6038;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1050bdf00; end: 1050be10b; -[SCProfileCharmsCollectionViewCell expandToIndexPath:withDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bdf00(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  dVar8 = param_1;
  _objc_retain(param_5);
  if (*(long *)(param_3 + _DAT_11271bac8) == 0) {
    *(undefined8 *)(param_3 + _DAT_11271bac8) = 2;
    func_0x00010c2a6ec0(*(undefined8 *)(param_3 + _DAT_11271bac0));
    lVar6 = (long)_DAT_11271bacc;
    lVar3 = param_3 + lVar6;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11271bac4;
    func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar7));
    lVar5 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(dVar8,param_2,lVar4);
    func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar7));
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c12c960(*(undefined8 *)(param_3 + lVar7));
    lVar6 = param_3 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar3 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    _objc_release(lVar6);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1050be10c;
    puStack_88 = &UNK_110841f80;
    lStack_80 = param_3;
    _objc_retain(param_5);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1050be174;
    puStack_b0 = &UNK_110841f20;
    lStack_a8 = param_3;
    uStack_78 = param_5;
    func_0x00010bf03420(param_1,puVar2);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_1050be188;
    puStack_e0 = &UNK_110841f80;
    lStack_d8 = param_3;
    _objc_retain(param_5);
    uStack_d0 = param_5;
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_f8);
    _objc_release(uStack_d0);
    _objc_release(uStack_78);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1050be10c; end: 1050be173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be10c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = lVar1 + _DAT_11271bacc;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010be491a0(lVar1,param_2,1,uVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1050be174; end: 1050be187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bac0),
             PTR_s_didEndTransitionAnimation_1125bb0d8);
  return;
}



/* Entry: 1050be188; end: 1050be257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be188(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bad0) = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bad4);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bad4) = puVar3;
  _objc_release(uVar6);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bac8) = 1;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar4 = *(ulong *)(lVar2 + _DAT_11271bac4);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b47f0;
  _objc_opt_class(PTR_PTR_1126b47f0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010bddcca0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050be258; end: 1050be423; -[SCProfileCharmsCollectionViewCell shrinkToIndexPath:withDuration:withCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be258(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_2 + _DAT_11271bac8) != 0) {
    *(undefined8 *)(param_2 + _DAT_11271bac8) = 2;
    uVar3 = *(ulong *)(param_2 + _DAT_11271bac4);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b47f0;
    _objc_opt_class(PTR_PTR_1126b47f0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010bf32100(uVar1);
    func_0x00010c2a6ec0(*(undefined8 *)(param_2 + _DAT_11271bac0));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1050be424;
    puStack_78 = &UNK_110841f80;
    lStack_70 = param_2;
    _objc_retain(param_4);
    puStack_c0 = puVar4;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1050be4f4;
    puStack_a8 = &UNK_110858070;
    lStack_a0 = param_2;
    uStack_68 = param_4;
    _objc_retain(param_5);
    uStack_98 = param_5;
    func_0x00010bf03420(param_1,puVar2);
    puStack_f0 = puVar4;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1050be5b0;
    puStack_d8 = &UNK_110841f80;
    lStack_d0 = param_2;
    uStack_c8 = uVar1;
    _objc_retain(uVar1);
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_f0);
    _objc_release(uStack_c8);
    _objc_release(uStack_98);
    _objc_release(uStack_68);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1050be424; end: 1050be4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be424(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  lVar3 = lVar1 + _DAT_11271bacc;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4dce0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_1,param_2,lVar4,param_4,uVar6);
  func_0x00010be491a0(lVar1,param_4,0,uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1050be4f4; end: 1050be5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be4f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  lVar2 = (long)_DAT_11271bac4;
  func_0x00010c17a6a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010bf75cc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bac0));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001050be59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1050be5b0; end: 1050be5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be5b0(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bac8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bddcc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__charmLargeCellDidDisappearOnScr_112554cc0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1050be5cc; end: 1050be623; -[SCProfileCharmsCollectionViewCell resetIndexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be5cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + _DAT_11271bac8) == 1) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_11271bac0);
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11271bac4));
                    /* WARNING: Could not recover jumptable at 0x00010c269df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,*(undefined8 *)PTR__CGPointZero_110347540,
               *(undefined8 *)(PTR__CGPointZero_110347540 + 8),uVar1,
               PTR_s_targetContentOffsetForProposedCo_1126781a0);
    return;
  }
  return;
}



/* Entry: 1050be624; end: 1050be727; -[SCProfileCharmsCollectionViewCell handleTapCollectionViewOrOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be624(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + _DAT_11271bac8) == 1) {
    uVar6 = *(ulong *)(param_1 + _DAT_11271bac4);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271bac0);
    func_0x00010c0e61e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_1050afd7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b47f0;
    _objc_opt_class(PTR_PTR_1126b47f0);
    uVar5 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar1 = uVar6;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    if (uVar1 == 0) {
      param_1 = param_1 + _DAT_11271bacc;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf9fa00();
      _objc_release(param_1);
    }
    else {
      func_0x00010bfd2ce0(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1050be728; end: 1050be7ab; -[SCProfileCharmsCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be728(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010be491a0(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050be7ac; end: 1050be7bb; -[SCProfileCharmsCollectionViewCell parentCollectionViewCellState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050be7ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bac8);
}



/* Entry: 1050be7bc; end: 1050be913; -[SCProfileCharmsCollectionViewCell onScreenItemIndexPathChangeFromIndexPath:toIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be7bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar9 = (long)_DAT_11271bac4;
    uVar2 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b47f0;
    _objc_opt_class(PTR_PTR_1126b47f0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar5 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b47f0;
    _objc_opt_class(PTR_PTR_1126b47f0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    if (uVar1 != 0) {
      func_0x00010bf32100(uVar2);
      func_0x00010bddcc80(param_1);
    }
    func_0x00010bddcca0(param_1);
    if (param_3 == 0) {
      bVar8 = true;
    }
    else {
      lVar9 = param_3;
      func_0x00010c0840e0();
      lVar7 = param_4;
      func_0x00010c0840e0();
      bVar8 = lVar7 < lVar9;
    }
    *(bool *)(param_1 + _DAT_11271bad8) = bVar8;
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050be914; end: 1050bed07; -[SCProfileCharmsCollectionViewCell _layoutForState:withIndexPath:withCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050be914(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined *param_7)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *unaff_x22;
  long lVar6;
  long lVar7;
  long *plVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  
  dVar9 = param_1;
  _objc_retain(param_7);
  if (param_6 == 1) {
    if (param_7 == (undefined *)0x0) {
      unaff_x22 = *(undefined **)(param_4 + _DAT_11271bac0);
      func_0x00010c0e61e0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x22 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
      }
      else {
        bVar1 = false;
        puVar2 = unaff_x22;
      }
    }
    else {
      bVar1 = false;
      puVar2 = param_7;
    }
    plVar8 = (long *)(param_4 + _DAT_11271bac4);
    puVar5 = puVar2;
    FUN_1050afd7c(puVar2,*plVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    if (bVar1) {
      _objc_release(puVar2);
    }
    if (param_7 == (undefined *)0x0) {
      _objc_release(unaff_x22);
    }
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      goto LAB_1050becb8;
    }
    lVar3 = *plVar8;
    func_0x00010c0deec0(lVar3);
    lVar6 = (long)_DAT_11271bacc;
    lVar4 = param_4 + lVar6;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    dVar10 = (dVar9 + -280.0) * 0.5 + -22.0;
    dVar9 = 8.0;
    if (8.0 < dVar10) {
      dVar9 = dVar10;
    }
    dVar12 = dVar9 * (double)(lVar3 + 1) + (double)(lVar3 + 2) * 280.0;
    _objc_release(lVar7);
    _objc_release(lVar4);
    func_0x00010c202c80(dVar12 * 2.0 + -280.0,0x4078700000000000,*plVar8);
    func_0x00010c17a6a0(param_1,param_2,*plVar8);
    dVar9 = *(double *)PTR__UIScrollViewDecelerationRateFast_110345da8;
    func_0x00010c18a140(*plVar8);
    lVar6 = param_4 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    dVar10 = (dVar9 + -280.0) * 0.5 + -22.0;
    dVar9 = 8.0;
    if (8.0 < dVar10) {
      dVar9 = dVar10;
    }
    lVar7 = (long)_DAT_11271bac0;
    func_0x00010c1c8300(dVar9,*(undefined8 *)(param_4 + lVar7));
    _objc_release(lVar4);
    _objc_release(lVar6);
    dVar12 = dVar12 + -280.0;
    func_0x00010c1f93e0(0,dVar12,0,dVar12,*(undefined8 *)(param_4 + lVar7));
    func_0x00010c1b6260(0x4071800000000000,0x4078700000000000,*(undefined8 *)(param_4 + lVar7));
    func_0x00010c1d32e0(*(undefined8 *)(param_4 + lVar7));
    func_0x00010c1525a0(*plVar8);
  }
  else {
    puVar5 = param_7;
    if (param_6 != 0) goto LAB_1050becb8;
    func_0x00010b816218();
    lVar6 = (long)_DAT_11271bac0;
    func_0x00010c1c8300((double)(long)(dVar9 * 8.0) / dVar9,*(undefined8 *)(param_4 + lVar6));
    dVar9 = 107.0;
    uVar11 = 0x405f000000000000;
    func_0x00010c1b6260(0x405ac00000000000,0x405f000000000000,*(undefined8 *)(param_4 + lVar6));
    lVar4 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    plVar8 = (long *)(param_4 + _DAT_11271bac4);
    func_0x00010c202c80(param_3,uVar11,*plVar8);
    _objc_release(puVar2);
    func_0x00010c17a6a0(param_1,param_2,*plVar8);
    dVar10 = *(double *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
    func_0x00010c18a140(dVar10,*plVar8);
    func_0x00010c2a5040(*plVar8);
    dVar10 = dVar10 - dVar9;
    dVar12 = dVar10 * 0.5;
    func_0x00010c2a5040(*plVar8);
    func_0x00010c1f93e0(0,dVar12,0,(dVar10 - dVar9) * 0.5,*(undefined8 *)(param_4 + lVar6));
    lVar4 = *plVar8;
    FUN_1050afd7c(param_7,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1525a0(lVar4);
    _objc_release(param_7);
  }
  func_0x00010c08cdc0(*plVar8);
LAB_1050becb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1050bed08; end: 1050bed0b; -[SCProfileCharmsCollectionViewCell _charmLargeCellDidDisappearOnScreen:] */

void FUN_1050bed08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddcc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__charmCellDetailLogging__112554cb0);
  return;
}



/* Entry: 1050bed0c; end: 1050beec3; -[SCProfileCharmsCollectionViewCell _charmLargeCellDidDisplayOnScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bed0c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + _DAT_11271bac8) == 1)) {
    uVar3 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b4888;
    _objc_opt_class(PTR_PTR_1126b4888);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 != 0) {
      func_0x00010c282d00();
      *(char *)(param_1 + _DAT_11271badc) = (char)uVar3;
      func_0x00010bf31cc0(param_3);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11271bae0);
      *(undefined **)(param_1 + _DAT_11271bae0) = puVar4;
      _objc_release(uVar6);
      lVar1 = *(long *)(param_1 + _DAT_11271bad0) + 1;
      *(long *)(param_1 + _DAT_11271bad0) = lVar1;
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1050beec4;
      puStack_80 = &UNK_110844b80;
      lStack_78 = param_1;
      lStack_68 = lVar1;
      _objc_retain(param_3);
      uStack_70 = param_3;
      func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_98);
      puStack_d0 = puVar4;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x1050bef00;
      puStack_b8 = &UNK_110844b80;
      lStack_b0 = param_1;
      lStack_a0 = lVar1;
      _objc_retain(param_3);
      uStack_a8 = param_3;
      func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_d0);
      _objc_release(uStack_a8);
      _objc_release(uStack_70);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050beec4; end: 1050bef3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050beec4(long param_1)

{
  if ((*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bac8) == 1) &&
     (*(long *)(param_1 + 0x30) == *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271bad0))) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_handleCharmViewed_1125d1ba8);
    return;
  }
  return;
}



/* Entry: 1050bef3c; end: 1050bf28b; -[SCProfileCharmsCollectionViewCell _charmCellDetailLogging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bef3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4888;
  _objc_opt_class(PTR_PTR_1126b4888);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = uVar2;
    func_0x00010bf35cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126b4838;
    if (uVar4 != 0) {
      uVar4 = uVar2;
      func_0x00010bf35cc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010c2b62e0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar10 = (long)_DAT_11271bac4;
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bfecfa0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0();
      func_0x00010c2b5840(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c0deec0(*(undefined8 *)(param_1 + lVar10));
      func_0x00010c2b36a0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      func_0x00010c2bc8a0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010c2b0400(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (*(long *)(param_1 + _DAT_11271bad0) == 1) {
        func_0x00010c2ae8e0(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else if (*(char *)(param_1 + _DAT_11271bad8) == '\x01') {
        func_0x00010c2ae8c0();
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2ae8a0(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar7 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar11 = (long)_DAT_11271bad4;
      uVar9 = *(ulong *)(param_1 + lVar11);
      uVar4 = uVar2;
      func_0x00010bf35be0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35b80();
      func_0x00010c0df840(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar6);
      _objc_release(uVar4);
      lVar10 = (long)_DAT_11271bae8;
      if ((uVar9 & 1) == 0) {
        lVar8 = param_1 + lVar10;
        _objc_loadWeakRetained(lVar8);
        func_0x00010c0a2d20();
        _objc_release(lVar8);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar5 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010bf35be0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf35b80();
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar5);
        _objc_release(puVar6);
        _objc_release(uVar2);
      }
      param_1 = param_1 + lVar10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0a2d40();
      _objc_release(param_1);
      _objc_release(puVar7);
      _objc_release(puVar3);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050bf28c; end: 1050bf29b; -[SCProfileCharmsCollectionViewCell contentCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050bf28c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bac4);
}



/* Entry: 1050bf29c; end: 1050bf2ab; -[SCProfileCharmsCollectionViewCell profileSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050bf29c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bae4);
}



/* Entry: 1050bf2ac; end: 1050bf2b7; -[SCProfileCharmsCollectionViewCell setProfileSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf2ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1050bf2b8; end: 1050bf2c7; -[SCProfileCharmsCollectionViewCell state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050bf2b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bac8);
}



/* Entry: 1050bf2c8; end: 1050bf2d7; -[SCProfileCharmsCollectionViewCell setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11271bac8) = param_3;
  return;
}



/* Entry: 1050bf2d8; end: 1050bf2f7; -[SCProfileCharmsCollectionViewCell pageViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf2d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271bacc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050bf2f8; end: 1050bf30b; -[SCProfileCharmsCollectionViewCell setPageViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271bacc,param_3);
  return;
}



/* Entry: 1050bf30c; end: 1050bf32b; -[SCProfileCharmsCollectionViewCell charmsBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf30c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271bae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050bf32c; end: 1050bf33f; -[SCProfileCharmsCollectionViewCell setCharmsBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf32c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271bae8,param_3);
  return;
}



/* Entry: 1050bf340; end: 1050bf3c7; -[SCProfileCharmsCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf340(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271bae8);
  _objc_destroyWeak(param_1 + _DAT_11271bacc);
  _objc_storeStrong(param_1 + _DAT_11271bae4,0);
  _objc_storeStrong(param_1 + _DAT_11271bac4,0);
  _objc_storeStrong(param_1 + _DAT_11271bae0,0);
  _objc_storeStrong(param_1 + _DAT_11271bad4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271bac0,0);
  return;
}



/* Entry: 1050bf3c8; end: 1050bf60f; -[SCProfileCharmsCollectionViewLayout targetContentOffsetForProposedContentOffset:withScrollingVelocity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1050bf3c8(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  
  lVar11 = (long)_DAT_11271baec;
  lVar12 = param_4 + lVar11;
  dVar15 = param_1;
  _objc_loadWeakRetained();
  lVar2 = lVar12;
  func_0x00010c0f3b20();
  _objc_release(lVar12);
  if (lVar2 == 1) {
    lVar12 = param_4;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf40120(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf404e0(lVar2,param_5,lVar3,0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar12);
    lVar12 = param_4;
    func_0x00010bf40120(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    dVar14 = dVar15;
    func_0x00010c084a80(param_4);
    dVar13 = dVar14;
    func_0x00010c0ce4a0(param_4);
    dVar14 = dVar14 + dVar13;
    dVar15 = dVar15 / dVar14;
    _objc_release(lVar12);
    uVar10 = lVar4 - 1;
    uVar1 = uVar10;
    if ((long)dVar15 <= (long)uVar10) {
      uVar1 = (long)dVar15;
    }
    if ((long)dVar15 <= (long)uVar10) {
      uVar10 = (long)dVar15;
    }
    uVar1 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
    if (0.0 < param_3) {
      uVar1 = uVar10;
    }
    if (param_3 < 0.0) {
      uVar1 = (long)dVar15 & ((long)dVar15 >> 0x3f ^ 0xffffffffffffffffU);
    }
    func_0x00010c084a80(param_4);
    dVar15 = dVar14;
    func_0x00010c0ce4a0(param_4);
    lVar12 = (long)_DAT_11271baf0;
    uVar5 = *(ulong *)(param_4 + lVar12);
    func_0x00010bf51e00();
    puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c292ae0();
    uVar10 = lVar4 + ~uVar1;
    if (puVar7 != (undefined *)0x1) {
      uVar10 = uVar1;
    }
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    uVar8 = *(undefined8 *)(param_4 + lVar12);
    func_0x00010c1554e0(uVar8);
    func_0x00010bfed020(puVar6,param_5,uVar10,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_4 + lVar12);
    *(undefined **)(param_4 + lVar12) = puVar7;
    _objc_release(uVar8);
    if ((uVar5 == 0) || (uVar9 = uVar5, func_0x00010c0840e0(), uVar10 != uVar9)) {
      param_4 = param_4 + lVar11;
      _objc_loadWeakRetained(param_4);
      func_0x00010c0e6200();
      _objc_release(param_4);
    }
    param_1 = (dVar14 + dVar15) * (double)(long)uVar1;
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 1050bf610; end: 1050bf67f; -[SCProfileCharmsCollectionViewLayout willStartTransitionAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf610(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_11271baf4) = 1;
  lVar1 = param_1;
  func_0x00010c08c940(0,0,0x7fefffffffffffff,0x7fefffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271baf8);
  *(long *)(param_1 + _DAT_11271baf8) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271bafc);
  *(undefined8 *)(param_1 + _DAT_11271bafc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050bf680; end: 1050bf6c7; -[SCProfileCharmsCollectionViewLayout didEndTransitionAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf680(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_11271baf4) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271baf8);
  *(undefined8 *)(param_1 + _DAT_11271baf8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271bafc);
  *(undefined8 *)(param_1 + _DAT_11271bafc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050bf6c8; end: 1050bf757; -[SCProfileCharmsCollectionViewLayout prepareLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf6c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6040;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareLayout_112620088);
  if (*(char *)(param_1 + _DAT_11271baf4) == '\x01') {
    lVar1 = param_1;
    func_0x00010c08c940(0,0,0x7fefffffffffffff,0x7fefffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271bafc);
    *(long *)(param_1 + _DAT_11271bafc) = lVar1;
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1050bf758; end: 1050bf813; -[SCProfileCharmsCollectionViewLayout initialLayoutAttributesForAppearingItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf758(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar3 = &lStack_40;
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271baf8;
  uVar1 = *(ulong *)(param_1 + lVar4);
  if (uVar1 != 0) {
    func_0x00010bf529e0();
    uVar2 = param_3;
    func_0x00010c142240();
    if (uVar2 < uVar1) {
      plVar3 = *(long **)(param_1 + lVar4);
      func_0x00010c142240(param_3);
      func_0x00010c0dfd40(plVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1050bf7f0;
    }
  }
  puStack_38 = PTR_PTR_1126e6040;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_initialLayoutAttributesForAppear_112527a18,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_1050bf7f0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 1050bf814; end: 1050bf8cf; -[SCProfileCharmsCollectionViewLayout finalLayoutAttributesForDisappearingItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf814(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar3 = &lStack_40;
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271bafc;
  uVar1 = *(ulong *)(param_1 + lVar4);
  if (uVar1 != 0) {
    func_0x00010bf529e0();
    uVar2 = param_3;
    func_0x00010c142240();
    if (uVar2 < uVar1) {
      plVar3 = *(long **)(param_1 + lVar4);
      func_0x00010c142240(param_3);
      func_0x00010c0dfd40(plVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1050bf8ac;
    }
  }
  puStack_38 = PTR_PTR_1126e6040;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_initialLayoutAttributesForAppear_112527a18,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_1050bf8ac:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 1050bf8d0; end: 1050bf8ef; -[SCProfileCharmsCollectionViewLayout delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf8d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271baec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050bf8f0; end: 1050bf903; -[SCProfileCharmsCollectionViewLayout setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271baec,param_3);
  return;
}



/* Entry: 1050bf904; end: 1050bf913; -[SCProfileCharmsCollectionViewLayout onScreenItemIndexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050bf904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271baf0);
}



/* Entry: 1050bf914; end: 1050bf91f; -[SCProfileCharmsCollectionViewLayout setOnScreenItemIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1050bf920; end: 1050bf97b; -[SCProfileCharmsCollectionViewLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050bf920(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271baf0,0);
  _objc_destroyWeak(param_1 + _DAT_11271baec);
  _objc_storeStrong(param_1 + _DAT_11271bafc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271baf8,0);
  return;
}



/* Entry: 1050bf97c; end: 1050c024f;  */

void FUN_1050bf97c(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_1;
  func_0x00010c247520();
  if (puVar7 != (undefined *)0x4) {
    _objc_retain(param_1);
    puVar7 = param_1;
    goto LAB_1050c01e8;
  }
  puVar2 = PTR_PTR_1126b4908;
  _objc_alloc();
  puVar7 = param_1;
  func_0x00010bf35b80();
  switch((int)puVar7) {
  case 0x2711:
    func_0x0001050c7554();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2712:
    func_0x0001050c747c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2713:
    func_0x0001050c744c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2714:
    func_0x0001050c741c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2715:
    func_0x0001050c7584();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2716:
    func_0x0001050c74dc();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2717:
    func_0x0001050c74ac();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2718:
    if ((param_5 & 1) == 0) {
      func_0x0001050c7524();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001050c750c();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 0x2719:
    func_0x0001050c7644();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271a:
    func_0x0001050c75e4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271b:
    func_0x0001050c75b4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271c:
    func_0x0001050c7614();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271d:
    func_0x0001050c7734();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271e:
    func_0x0001050c7704();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271f:
    func_0x0001050c76a4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2720:
    func_0x0001050c7674();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2721:
    func_0x0001050c76d4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2722:
    func_0x0001050c7764();
    _objc_retainAutoreleasedReturnValue();
    break;
  default:
    puVar7 = (undefined *)0x0;
  }
  puVar9 = param_1;
  func_0x00010bf35b80();
  puVar10 = PTR_PTR_1126b4918;
  switch((int)puVar9) {
  case 0x2711:
  case 0x2712:
  case 0x2713:
  case 0x2714:
  case 0x2715:
  case 0x2716:
  case 0x2717:
  case 0x2719:
  case 0x271a:
  case 0x271b:
  case 0x271c:
  case 0x271d:
  case 0x271e:
  case 0x271f:
  case 0x2720:
  case 0x2721:
    _objc_alloc();
    func_0x00010c060440();
    break;
  case 0x2718:
    _objc_alloc();
    func_0x00010c060440();
    if ((param_5 & 1) != 0) {
      puVar3 = PTR_PTR_1126b4918;
      _objc_alloc();
      goto code_r0x0001050bfdac;
    }
    break;
  case 0x2722:
    _objc_alloc();
    func_0x00010c060440();
    puVar3 = PTR_PTR_1126b4918;
    _objc_alloc();
code_r0x0001050bfdac:
    func_0x00010c060440();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    goto code_r0x0001050bfbe8;
  default:
    puVar9 = (undefined *)0x0;
    goto LAB_1050bfbf0;
  }
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
code_r0x0001050bfbe8:
  _objc_release(puVar10);
LAB_1050bfbf0:
  func_0x00010c00b9c0();
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b4910;
  _objc_alloc();
  puVar9 = param_1;
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35b80();
  func_0x00010c0f0760();
  puVar10 = param_1;
  func_0x00010bf35b80();
  switch((int)puVar10) {
  case 0x2711:
    func_0x0001050c756c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2712:
    func_0x0001050c7494();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2713:
    func_0x0001050c7464();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2714:
    func_0x0001050c7434();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2715:
    func_0x0001050c759c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2716:
    func_0x0001050c74f4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2717:
    func_0x0001050c74c4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2718:
    func_0x0001050c753c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2719:
    func_0x0001050c765c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271a:
    func_0x0001050c75fc();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271b:
    func_0x0001050c75cc();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271c:
    func_0x0001050c762c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271d:
    func_0x0001050c774c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271e:
    func_0x0001050c771c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x271f:
    func_0x0001050c76bc();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2720:
    func_0x0001050c768c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2721:
    func_0x0001050c76ec();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x2722:
    func_0x0001050c777c();
    _objc_retainAutoreleasedReturnValue();
    break;
  default:
    puVar10 = (undefined *)0x0;
  }
  puVar3 = param_1;
  func_0x00010bf35b80();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = PTR_PTR_1126b4920;
  switch((int)puVar3) {
  case 0x2711:
    _objc_alloc();
    uVar4 = 0x2711;
    goto code_r0x0001050c0094;
  case 0x2712:
    _objc_alloc();
    uVar4 = 0x2712;
    goto code_r0x0001050c0094;
  case 0x2713:
    _objc_alloc();
    uVar4 = 0x2713;
    goto code_r0x0001050c0094;
  case 0x2714:
    _objc_alloc();
    uVar4 = 0x2714;
    goto code_r0x0001050c0094;
  case 0x2715:
    _objc_alloc();
    uVar4 = 0x2715;
    puVar5 = param_2;
    FUN_1050c0250(0x2715,param_2);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001050c00c8;
  case 0x2716:
    _objc_alloc();
    uVar4 = 0x2716;
    goto code_r0x0001050c0094;
  case 0x2717:
    _objc_alloc();
    uVar4 = 0x2717;
    goto code_r0x0001050c0094;
  case 0x2718:
    _objc_alloc();
    uVar4 = 0x2718;
code_r0x0001050c0094:
    puVar5 = param_2;
    FUN_1050c0250(uVar4,param_2);
    _objc_retainAutoreleasedReturnValue();
code_r0x0001050c00c8:
    func_0x00010c039c60();
    _objc_release(uVar4);
    goto LAB_1050c0138;
  case 0x2719:
    _objc_alloc();
    break;
  case 0x271a:
    _objc_alloc();
    break;
  case 0x271b:
    _objc_alloc();
    break;
  case 0x271c:
    _objc_alloc();
    break;
  case 0x271d:
    _objc_alloc();
    break;
  case 0x271e:
    _objc_alloc();
    break;
  case 0x271f:
    _objc_alloc();
    break;
  case 0x2720:
    _objc_alloc();
    break;
  case 0x2721:
    _objc_alloc();
    break;
  case 0x2722:
    _objc_alloc();
    break;
  default:
    puVar8 = (undefined *)0x0;
    goto LAB_1050c0138;
  }
  func_0x00010c039c60();
LAB_1050c0138:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010bfe2e20();
  func_0x00010bf861c0();
  func_0x00010c282d00();
  func_0x00010c247520();
  func_0x00010bf6ce80();
  func_0x00010c032ae0(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar2);
LAB_1050c01e8:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  iVar1 = (int)param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    lVar6 = *(long *)(&PTR_PTR_1108664c0)[iVar1 - 0x2711];
    _objc_retain(lVar6);
    if (lVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar5;
      func_0x00010bf8e420(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050c0250; end: 1050c02d7;  */

void FUN_1050c0250(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(&PTR_PTR_1108664c0)[param_1 - 0x2711];
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf8e420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050c02d8; end: 1050c15d3;  */

void FUN_1050c02d8(long param_1,undefined *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_4c0;
  long lStack_468;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [384];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puVar8 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x000100bf119c();
  if ((int)puVar1 != 0) {
    _objc_retain(param_1);
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    FUN_1050cda14(param_1,puVar1,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    FUN_1050cda14(param_1,puVar1,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar10 = lVar12;
    func_0x00010bf529e0();
    if ((lVar10 != 0) || (lVar10 = lVar15, func_0x00010bf529e0(), lVar10 != 0)) {
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      lStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      plStack_330 = (long *)0x0;
      _objc_retain(lVar12);
      lStack_468 = lVar12;
      func_0x00010bf52a60();
      if (lStack_468 != 0) {
        lVar10 = *plStack_330;
        do {
          lVar11 = 0;
          do {
            if (*plStack_330 != lVar10) {
              _objc_enumerationMutation(lVar12);
            }
            uStack_4c0 = *(undefined8 *)(lStack_338 + lVar11 * 8);
            puVar1 = PTR_PTR_1126b4910;
            _objc_alloc();
            uVar14 = uStack_4c0;
            func_0x00010c0f0720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf35b80();
            func_0x00010c0f0760(uStack_4c0);
            uVar2 = uStack_4c0;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uStack_4c0;
            func_0x00010bf6e400();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uStack_4c0;
            func_0x00010bf71d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfce020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe2e20();
            func_0x00010bf861c0();
            func_0x00010c282d00();
            func_0x00010bf6ce80();
            param_6 = uVar2;
            param_7 = uVar3;
            param_8 = uVar4;
            func_0x00010c032ae0(puVar1);
            FUN_1050cd5a0(param_1,puVar1);
            _objc_release(puVar1);
            _objc_release(uStack_4c0);
            _objc_release(uVar4);
            _objc_release(uVar3);
            _objc_release(uVar2);
            _objc_release(uVar14);
            lVar11 = lVar11 + 1;
          } while (lStack_468 != lVar11);
          lStack_468 = lVar12;
          func_0x00010bf52a60();
        } while (lStack_468 != 0);
      }
      _objc_release(lVar12);
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      lStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      plStack_370 = (long *)0x0;
      _objc_retain(lVar15);
      lStack_468 = lVar15;
      func_0x00010bf52a60();
      if (lStack_468 != 0) {
        lVar10 = *plStack_370;
        do {
          lVar11 = 0;
          do {
            if (*plStack_370 != lVar10) {
              _objc_enumerationMutation(lVar15);
            }
            uStack_4c0 = *(undefined8 *)(lStack_378 + lVar11 * 8);
            puVar1 = PTR_PTR_1126b4910;
            _objc_alloc();
            uVar14 = uStack_4c0;
            func_0x00010c0f0720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf35b80();
            func_0x00010c0f0760(uStack_4c0);
            uVar2 = uStack_4c0;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uStack_4c0;
            func_0x00010bf6e400();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uStack_4c0;
            func_0x00010bf71d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfce020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe2e20();
            func_0x00010bf861c0();
            func_0x00010c282d00();
            func_0x00010bf6ce80();
            param_6 = uVar2;
            param_7 = uVar3;
            param_8 = uVar4;
            func_0x00010c032ae0(puVar1);
            FUN_1050cd5a0(param_1,puVar1);
            _objc_release(puVar1);
            _objc_release(uStack_4c0);
            _objc_release(uVar4);
            _objc_release(uVar3);
            _objc_release(uVar2);
            _objc_release(uVar14);
            lVar11 = lVar11 + 1;
          } while (lStack_468 != lVar11);
          lStack_468 = lVar15;
          func_0x00010bf52a60();
        } while (lStack_468 != 0);
      }
      _objc_release(lVar15);
    }
    _objc_release(lVar15);
    _objc_release(lVar12);
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    _objc_retain();
    dVar19 = 0.0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    puVar5 = param_2;
    func_0x00010bfb9b40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar12 = *plStack_170;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_170 != lVar12) {
            _objc_enumerationMutation(puVar5);
          }
          puVar16 = *(undefined **)(lStack_178 + (long)puVar13 * 8);
          puVar17 = puVar16;
          func_0x00010bf33560();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar7 = puVar17;
          func_0x00010c0720c0();
          if (((((((ulong)puVar7 & 1) == 0) &&
                (puVar7 = puVar17, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
               (puVar7 = puVar17, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)) &&
              ((puVar7 = puVar17, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
               (puVar7 = puVar17, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))) &&
             ((puVar7 = puVar17, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
              ((puVar7 = puVar17, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0 &&
               (puVar7 = puVar17, func_0x00010c0720c0(), ((ulong)puVar7 & 1) == 0)))))) {
            _objc_release(puVar17);
LAB_1050c0a28:
            _objc_release(puVar17);
          }
          else {
            _objc_release(puVar17);
            _objc_release(puVar17);
            puVar17 = puVar16;
            func_0x00010bf33560();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar17;
            func_0x00010c0720c0();
            _objc_release(puVar17);
            if ((int)puVar7 == 0) {
LAB_1050c0a00:
              puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              goto LAB_1050c0a28;
            }
            func_0x00010bf9c880(puVar16);
            puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
            if (dVar19 == 0.0) {
              func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bf9c880(puVar16);
              func_0x00010bf655e0(puVar17);
              _objc_retainAutoreleasedReturnValue();
            }
            puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
            puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c070260();
            _objc_release(puVar16);
            _objc_release(puVar17);
            if (((ulong)puVar7 & 1) == 0) goto LAB_1050c0a00;
          }
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar6 = puVar5;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_retain(puVar1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    dVar18 = dVar19;
    if ((param_3 == (undefined8 *)0x0) ||
       (puVar8 = param_3, func_0x00010bfcfda0(), dVar18 = dVar19, ((ulong)puVar8 & 1) == 0)) {
      puVar5 = param_2;
      func_0x00010901e044();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010901e0a4();
      _objc_retainAutoreleasedReturnValue();
      dVar19 = dVar18;
      if (puVar6 != (undefined *)0x0) {
        puVar17 = puVar5;
        func_0x00010c08aee0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar6;
        if (puVar17 != (undefined *)0x0) {
          puVar13 = puVar5;
        }
        _objc_retain(puVar13);
        _objc_release(puVar17);
        puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        _objc_release(puVar13);
        _objc_release(puVar17);
        dVar19 = 259200.0;
        if (dVar18 <= 259200.0) {
          func_0x00010befa120(puVar1);
        }
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_retain(puVar1);
    _objc_retain(param_2);
    puVar5 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010c24fb00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010901cdb0(param_2,puVar13);
    if ((int)puVar6 == 0) {
      puVar6 = param_2;
      func_0x00010901d430();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        puVar17 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
        _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
        func_0x00010c0d0e40(puVar6);
        func_0x00010c1c8fc0(puVar17);
        func_0x00010bf65700(puVar6);
        func_0x00010c189d40(puVar17);
        puVar7 = puVar5;
        func_0x00010c0d9960();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          param_6 = 0;
          puVar16 = puVar5;
          func_0x00010bf44660();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar16 != (undefined *)0x0) &&
             (puVar9 = puVar16, func_0x00010bf65700(), (long)puVar9 < 0x1f)) {
            func_0x00010befa120(puVar1);
          }
          _objc_release(puVar16);
        }
        _objc_release(puVar7);
        _objc_release(puVar17);
        _objc_release(puVar6);
      }
    }
    else {
      func_0x00010befa120(puVar1);
    }
    _objc_release(puVar13);
    _objc_release(puVar5);
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_retain(puVar1);
    puVar5 = param_2;
    func_0x00010901db40();
    _objc_retainAutoreleasedReturnValue();
    if (((puVar5 != (undefined *)0x0) && (func_0x00010c26f3a0(puVar5), 0.0 < dVar19)) &&
       (dVar19 < 21600.0)) {
      func_0x00010befa120(puVar1);
    }
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_retain(puVar1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    if ((param_3 == (undefined8 *)0x0) ||
       (puVar8 = param_3, func_0x00010bfcfda0(), ((ulong)puVar8 & 1) == 0)) {
      puVar5 = param_2;
      func_0x00010901e044();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010901e0a4();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        puVar17 = puVar5;
        func_0x00010c08aee0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar6;
        if (puVar17 != (undefined *)0x0) {
          puVar13 = puVar5;
        }
        _objc_retain(puVar13);
        _objc_release(puVar17);
        puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        _objc_release(puVar13);
        _objc_release(puVar17);
        if (2592000.0 <= dVar19) {
          func_0x00010befa120(puVar1);
        }
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_retain(puVar1);
    _objc_retain(param_3);
    if ((param_3 != (undefined8 *)0x0) &&
       (puVar8 = param_3, func_0x00010bfcfda0(), (int)puVar8 != 0)) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_3;
      func_0x00010c089200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar5);
      func_0x00010befa120(puVar1);
    }
    _objc_release(param_3);
    _objc_release(puVar1);
    puVar6 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(param_2);
    puVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    puVar5 = puVar1;
    FUN_1050cda14(param_1,puVar1,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    _objc_retain(lVar12);
    lVar15 = lVar12;
    func_0x00010bf52a60();
    if (lVar15 != 0) {
      lVar10 = *plStack_3b0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_3b0 != lVar10) {
            _objc_enumerationMutation(lVar12);
          }
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf35b80(*(undefined8 *)(lStack_3b8 + lVar11 * 8));
          func_0x00010c0df760(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar13);
          lVar11 = lVar11 + 1;
        } while (lVar15 != lVar11);
        lVar15 = lVar12;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    _objc_release(lVar12);
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    lStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    plStack_3f0 = (long *)0x0;
    _objc_retain(puVar6);
    puVar13 = puVar6;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar15 = *plStack_3f0;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_3f0 != lVar15) {
            _objc_enumerationMutation(puVar6);
          }
          uVar14 = *(undefined8 *)(lStack_3f8 + (long)puVar17 * 8);
          puVar7 = puVar1;
          func_0x00010bf4b900();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = param_2;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
            _objc_retain(uVar14);
            func_0x00010bf64de0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            _objc_release(puVar5);
            puVar16 = PTR_PTR_1126b4910;
            _objc_alloc();
            func_0x00010c067ec0();
            _objc_release(uVar14);
            uStack_4c0 = 0;
            param_6 = 0;
            param_7 = 0;
            param_8 = 0;
            func_0x00010c032ae0();
            _objc_release(puVar7);
            puVar5 = puVar16;
            FUN_1050cd5a0(param_1);
            _objc_release(puVar16);
          }
          puVar17 = puVar17 + 1;
        } while (puVar13 != puVar17);
        puVar13 = puVar6;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    lStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    plStack_430 = (long *)0x0;
    _objc_retain(puVar1);
    puVar8 = &uStack_440;
    param_4 = auStack_300;
    param_5 = 0x10;
    puVar13 = puVar1;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar15 = *plStack_430;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_430 != lVar15) {
            _objc_enumerationMutation(puVar1);
          }
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar14 = *(undefined8 *)(lStack_438 + (long)puVar17 * 8);
          func_0x00010c067ec0(uVar14);
          func_0x00010c0df760(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar6;
          func_0x00010bf4b900();
          _objc_release(puVar7);
          if (((ulong)puVar16 & 1) == 0) {
            puVar7 = param_2;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0(uVar14);
            puVar5 = puVar7;
            FUN_1050ccc74(param_1,puVar7,uVar14);
            _objc_release(puVar7);
          }
          puVar17 = puVar17 + 1;
        } while (puVar13 != puVar17);
        puVar8 = &uStack_440;
        param_4 = auStack_300;
        param_5 = 0x10;
        puVar13 = puVar1;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(lVar12);
    _objc_release(puVar6);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_4c0);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_4c0);
  _objc_retain(uStack_4c0);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(puVar8);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  func_0x00010c0bcfa0(param_1);
  _objc_release(uStack_4c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(uStack_4c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(uStack_4c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1050c15d4; end: 1050c1903;  */

void FUN_1050c15d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _objc_retain(uVar7);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar6);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(param_2);
  return;
}



/* Entry: 1050c1904; end: 1050c1af3;  */

void FUN_1050c1904(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1050c1af4;
  uStack_60 = 0x1050c1b04;
  uStack_58 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1050c1b0c;
  puStack_90 = &UNK_110842b58;
  puStack_78 = puStack_88;
  func_0x00010c0bdee0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_a8,
                      &PTR___NSConcreteGlobalBlock_1108665a0);
  if (puStack_78[5] == 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar10);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010c2448c0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 1050c1af4; end: 1050c1b0b;  */

void FUN_1050c1af4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050c1b0c; end: 1050c1b43;  */

void FUN_1050c1b0c(long param_1,undefined8 param_2)

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



/* Entry: 1050c1b44; end: 1050c1b47;  */

void FUN_1050c1b44(void)

{
  return;
}



/* Entry: 1050c1b48; end: 1050c1bc3;  */

void FUN_1050c1b48(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
  else {
    FUN_1050c1bc4(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c1bc4; end: 1050c1ddb;  */

void FUN_1050c1bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b01c0;
  uVar1 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  lVar5 = 0;
  func_0x0001000819a8(0x19);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf504e0(param_4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_6 + 0x40);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,0);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_6 + 0x20);
    uVar4 = *(undefined8 *)(param_6 + 0x28);
    _objc_retain(uVar4);
    uVar8 = *(undefined8 *)(param_6 + 0x40);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_6 + 0x30);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(param_6 + 0x38);
    _objc_retain(uVar7);
    func_0x00010bfa5f20(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 1050c1ddc; end: 1050c1fcf;  */

void FUN_1050c1ddc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    func_0x00010bfa5f20(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1050c1fd0; end: 1050c1fdf;  */

void FUN_1050c1fd0(long param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  double dVar20;
  double dVar21;
  undefined8 uStack_4c0;
  long lStack_468;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [384];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_80;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar10 = puVar2;
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar3 = puVar1;
  func_0x000100bf119c();
  if ((int)puVar3 != 0) {
    _objc_retain(param_2);
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_2;
    FUN_1050cda14(param_2,puVar3,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_2;
    FUN_1050cda14(param_2,puVar3,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar12 = lVar14;
    func_0x00010bf529e0();
    if ((lVar12 != 0) || (lVar12 = lVar17, func_0x00010bf529e0(), lVar12 != 0)) {
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      lStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      plStack_330 = (long *)0x0;
      _objc_retain(lVar14);
      lStack_468 = lVar14;
      func_0x00010bf52a60();
      if (lStack_468 != 0) {
        lVar12 = *plStack_330;
        do {
          lVar13 = 0;
          do {
            if (*plStack_330 != lVar12) {
              _objc_enumerationMutation(lVar14);
            }
            uStack_4c0 = *(undefined8 *)(lStack_338 + lVar13 * 8);
            puVar3 = PTR_PTR_1126b4910;
            _objc_alloc();
            uVar16 = uStack_4c0;
            func_0x00010c0f0720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf35b80();
            func_0x00010c0f0760(uStack_4c0);
            uVar4 = uStack_4c0;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uStack_4c0;
            func_0x00010bf6e400();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uStack_4c0;
            func_0x00010bf71d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfce020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe2e20();
            func_0x00010bf861c0();
            func_0x00010c282d00();
            func_0x00010bf6ce80();
            param_6 = uVar4;
            param_7 = uVar5;
            param_8 = uVar6;
            func_0x00010c032ae0(puVar3);
            FUN_1050cd5a0(param_2,puVar3);
            _objc_release(puVar3);
            _objc_release(uStack_4c0);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar16);
            lVar13 = lVar13 + 1;
          } while (lStack_468 != lVar13);
          lStack_468 = lVar14;
          func_0x00010bf52a60();
        } while (lStack_468 != 0);
      }
      _objc_release(lVar14);
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      lStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      plStack_370 = (long *)0x0;
      _objc_retain(lVar17);
      lStack_468 = lVar17;
      func_0x00010bf52a60();
      if (lStack_468 != 0) {
        lVar12 = *plStack_370;
        do {
          lVar13 = 0;
          do {
            if (*plStack_370 != lVar12) {
              _objc_enumerationMutation(lVar17);
            }
            uStack_4c0 = *(undefined8 *)(lStack_378 + lVar13 * 8);
            puVar3 = PTR_PTR_1126b4910;
            _objc_alloc();
            uVar16 = uStack_4c0;
            func_0x00010c0f0720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf35b80();
            func_0x00010c0f0760(uStack_4c0);
            uVar4 = uStack_4c0;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uStack_4c0;
            func_0x00010bf6e400();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uStack_4c0;
            func_0x00010bf71d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfce020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe2e20();
            func_0x00010bf861c0();
            func_0x00010c282d00();
            func_0x00010bf6ce80();
            param_6 = uVar4;
            param_7 = uVar5;
            param_8 = uVar6;
            func_0x00010c032ae0(puVar3);
            FUN_1050cd5a0(param_2,puVar3);
            _objc_release(puVar3);
            _objc_release(uStack_4c0);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar16);
            lVar13 = lVar13 + 1;
          } while (lStack_468 != lVar13);
          lStack_468 = lVar17;
          func_0x00010bf52a60();
        } while (lStack_468 != 0);
      }
      _objc_release(lVar17);
    }
    _objc_release(lVar17);
    _objc_release(lVar14);
    _objc_release(puVar1);
    _objc_release(param_2);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    _objc_retain();
    dVar21 = 0.0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    puVar7 = puVar1;
    func_0x00010bfb9b40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf52a60();
    if (puVar8 != (undefined *)0x0) {
      lVar14 = *plStack_170;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_170 != lVar14) {
            _objc_enumerationMutation(puVar7);
          }
          puVar18 = *(undefined **)(lStack_178 + (long)puVar15 * 8);
          puVar19 = puVar18;
          func_0x00010bf33560();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar9 = puVar19;
          func_0x00010c0720c0();
          if (((((((ulong)puVar9 & 1) == 0) &&
                (puVar9 = puVar19, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0)) &&
               (puVar9 = puVar19, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0)) &&
              ((puVar9 = puVar19, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0 &&
               (puVar9 = puVar19, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0)))) &&
             ((puVar9 = puVar19, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0 &&
              ((puVar9 = puVar19, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0 &&
               (puVar9 = puVar19, func_0x00010c0720c0(), ((ulong)puVar9 & 1) == 0)))))) {
            _objc_release(puVar19);
LAB_1050c0a28:
            _objc_release(puVar19);
          }
          else {
            _objc_release(puVar19);
            _objc_release(puVar19);
            puVar19 = puVar18;
            func_0x00010bf33560();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar19;
            func_0x00010c0720c0();
            _objc_release(puVar19);
            if ((int)puVar9 == 0) {
LAB_1050c0a00:
              puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              goto LAB_1050c0a28;
            }
            func_0x00010bf9c880(puVar18);
            puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
            if (dVar21 == 0.0) {
              func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bf9c880(puVar18);
              func_0x00010bf655e0(puVar19);
              _objc_retainAutoreleasedReturnValue();
            }
            puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
            puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c070260();
            _objc_release(puVar18);
            _objc_release(puVar19);
            if (((ulong)puVar9 & 1) == 0) goto LAB_1050c0a00;
          }
          puVar15 = puVar15 + 1;
        } while (puVar8 != puVar15);
        puVar8 = puVar7;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_retain(puVar3);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    dVar20 = dVar21;
    if ((puVar2 == (undefined8 *)0x0) ||
       (puVar10 = puVar2, func_0x00010bfcfda0(), dVar20 = dVar21, ((ulong)puVar10 & 1) == 0)) {
      puVar7 = puVar1;
      func_0x00010901e044();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010901e0a4();
      _objc_retainAutoreleasedReturnValue();
      dVar21 = dVar20;
      if (puVar8 != (undefined *)0x0) {
        puVar19 = puVar7;
        func_0x00010c08aee0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar8;
        if (puVar19 != (undefined *)0x0) {
          puVar15 = puVar7;
        }
        _objc_retain(puVar15);
        _objc_release(puVar19);
        puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        _objc_release(puVar15);
        _objc_release(puVar19);
        dVar21 = 259200.0;
        if (dVar20 <= 259200.0) {
          func_0x00010befa120(puVar3);
        }
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_retain(puVar3);
    _objc_retain(puVar1);
    puVar7 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar7;
    func_0x00010c24fb00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar1;
    func_0x00010901cdb0(puVar1,puVar15);
    if ((int)puVar8 == 0) {
      puVar8 = puVar1;
      func_0x00010901d430();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined *)0x0) {
        puVar19 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
        _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
        func_0x00010c0d0e40(puVar8);
        func_0x00010c1c8fc0(puVar19);
        func_0x00010bf65700(puVar8);
        func_0x00010c189d40(puVar19);
        puVar9 = puVar7;
        func_0x00010c0d9960();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 != (undefined *)0x0) {
          param_6 = 0;
          puVar18 = puVar7;
          func_0x00010bf44660();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar18 != (undefined *)0x0) &&
             (puVar11 = puVar18, func_0x00010bf65700(), (long)puVar11 < 0x1f)) {
            func_0x00010befa120(puVar3);
          }
          _objc_release(puVar18);
        }
        _objc_release(puVar9);
        _objc_release(puVar19);
        _objc_release(puVar8);
      }
    }
    else {
      func_0x00010befa120(puVar3);
    }
    _objc_release(puVar15);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_retain(puVar3);
    puVar7 = puVar1;
    func_0x00010901db40();
    _objc_retainAutoreleasedReturnValue();
    if (((puVar7 != (undefined *)0x0) && (func_0x00010c26f3a0(puVar7), 0.0 < dVar21)) &&
       (dVar21 < 21600.0)) {
      func_0x00010befa120(puVar3);
    }
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_retain(puVar3);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    if ((puVar2 == (undefined8 *)0x0) ||
       (puVar10 = puVar2, func_0x00010bfcfda0(), ((ulong)puVar10 & 1) == 0)) {
      puVar7 = puVar1;
      func_0x00010901e044();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010901e0a4();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined *)0x0) {
        puVar19 = puVar7;
        func_0x00010c08aee0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar8;
        if (puVar19 != (undefined *)0x0) {
          puVar15 = puVar7;
        }
        _objc_retain(puVar15);
        _objc_release(puVar19);
        puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        _objc_release(puVar15);
        _objc_release(puVar19);
        if (2592000.0 <= dVar21) {
          func_0x00010befa120(puVar3);
        }
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    if ((puVar2 != (undefined8 *)0x0) &&
       (puVar10 = puVar2, func_0x00010bfcfda0(), (int)puVar10 != 0)) {
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c089200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar7);
      _objc_release(puVar10);
      _objc_release(puVar7);
      func_0x00010befa120(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar8 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar3 = puVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_2;
    puVar7 = puVar3;
    FUN_1050cda14(param_2,puVar3,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    _objc_retain(lVar14);
    lVar17 = lVar14;
    func_0x00010bf52a60();
    if (lVar17 != 0) {
      lVar12 = *plStack_3b0;
      do {
        lVar13 = 0;
        do {
          if (*plStack_3b0 != lVar12) {
            _objc_enumerationMutation(lVar14);
          }
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf35b80(*(undefined8 *)(lStack_3b8 + lVar13 * 8));
          func_0x00010c0df760(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar15);
          lVar13 = lVar13 + 1;
        } while (lVar17 != lVar13);
        lVar17 = lVar14;
        func_0x00010bf52a60();
      } while (lVar17 != 0);
    }
    _objc_release(lVar14);
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    lStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    plStack_3f0 = (long *)0x0;
    _objc_retain(puVar8);
    puVar15 = puVar8;
    func_0x00010bf52a60();
    if (puVar15 != (undefined *)0x0) {
      lVar17 = *plStack_3f0;
      do {
        puVar19 = (undefined *)0x0;
        do {
          if (*plStack_3f0 != lVar17) {
            _objc_enumerationMutation(puVar8);
          }
          uVar16 = *(undefined8 *)(lStack_3f8 + (long)puVar19 * 8);
          puVar9 = puVar3;
          func_0x00010bf4b900();
          if (((ulong)puVar9 & 1) == 0) {
            puVar9 = puVar1;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
            _objc_retain(uVar16);
            func_0x00010bf64de0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            _objc_release(puVar7);
            puVar18 = PTR_PTR_1126b4910;
            _objc_alloc();
            func_0x00010c067ec0();
            _objc_release(uVar16);
            uStack_4c0 = 0;
            param_6 = 0;
            param_7 = 0;
            param_8 = 0;
            func_0x00010c032ae0();
            _objc_release(puVar9);
            puVar7 = puVar18;
            FUN_1050cd5a0(param_2);
            _objc_release(puVar18);
          }
          puVar19 = puVar19 + 1;
        } while (puVar15 != puVar19);
        puVar15 = puVar8;
        func_0x00010bf52a60();
      } while (puVar15 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    lStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    plStack_430 = (long *)0x0;
    _objc_retain(puVar3);
    puVar10 = &uStack_440;
    param_4 = auStack_300;
    param_5 = 0x10;
    puVar15 = puVar3;
    func_0x00010bf52a60();
    if (puVar15 != (undefined *)0x0) {
      lVar17 = *plStack_430;
      do {
        puVar19 = (undefined *)0x0;
        do {
          if (*plStack_430 != lVar17) {
            _objc_enumerationMutation(puVar3);
          }
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar16 = *(undefined8 *)(lStack_438 + (long)puVar19 * 8);
          func_0x00010c067ec0(uVar16);
          func_0x00010c0df760(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar8;
          func_0x00010bf4b900();
          _objc_release(puVar9);
          if (((ulong)puVar18 & 1) == 0) {
            puVar9 = puVar1;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0(uVar16);
            puVar7 = puVar9;
            FUN_1050ccc74(param_2,puVar9,uVar16);
            _objc_release(puVar9);
          }
          puVar19 = puVar19 + 1;
        } while (puVar15 != puVar19);
        puVar10 = &uStack_440;
        param_4 = auStack_300;
        param_5 = 0x10;
        puVar15 = puVar3;
        func_0x00010bf52a60();
      } while (puVar15 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(lVar14);
    _objc_release(puVar8);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_4c0);
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_4c0);
  _objc_retain(uStack_4c0);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  func_0x00010c0bcfa0(param_2);
  _objc_release(uStack_4c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(uStack_4c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(uStack_4c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar10);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1050c1fe0; end: 1050c211b;  */

void FUN_1050c1fe0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1050c211c;
  puStack_80 = &UNK_1108665c0;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uStack_78 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar5;
  _objc_retain(uVar4);
  uStack_50 = uVar4;
  func_0x00010c244960(uVar1,param_2,uVar2,uVar3,&puStack_98);
  _objc_release(uVar3);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_78);
  return;
}



/* Entry: 1050c211c; end: 1050c2197;  */

void FUN_1050c211c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
  else {
    FUN_1050c1bc4(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c2198; end: 1050c22eb;  */

void FUN_1050c2198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_2);
  _objc_retain(param_7);
  _objc_retain(param_1);
  func_0x00010c0f7fc0(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_1);
  return;
}



/* Entry: 1050c22ec; end: 1050c2647;  */

void FUN_1050c22ec(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1050c2648;
  uStack_70 = 0x1050c2658;
  uStack_68 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1050c2648;
  uStack_a0 = 0x1050c2658;
  uStack_98 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1050c2660;
  puStack_d0 = &UNK_110866680;
  puStack_b8 = &uStack_c0;
  puStack_88 = &uStack_90;
  _objc_retain(uVar9);
  puStack_118 = puVar2;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1050c2664;
  puStack_100 = &UNK_1108666b0;
  puStack_f8 = &uStack_90;
  puStack_f0 = &uStack_c0;
  uStack_c8 = uVar9;
  func_0x00010c0bde60(uVar9);
  if (puStack_88[5] != 0) {
    lVar3 = puStack_b8[5];
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b4928;
      _objc_opt_new();
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      puStack_158 = puVar2;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_1050c26d8;
      puStack_140 = &UNK_1108666e0;
      puStack_128 = &uStack_90;
      puStack_120 = &uStack_c0;
      _objc_retain(uVar9);
      uStack_138 = uVar9;
      _objc_retain(puVar4);
      puStack_130 = puVar4;
      func_0x00010bfab6c0(uVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf35bc0();
      if (puVar5 == (undefined *)0x0) {
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3,0);
        }
      }
      else {
        uVar9 = puStack_88[5];
        FUN_1050c7264(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7bc0(puVar4);
        _objc_release(uVar9);
        puVar5 = puVar4;
        func_0x00010c1ebee0(puVar4);
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x000109189494();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ebd20(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c1ec200(puVar4);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126b4930;
        _objc_opt_class(PTR_PTR_1126b4930);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c11de00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_188 = puVar2;
        uStack_180 = 0xc2000000;
        uStack_178 = 0x1050c2870;
        puStack_170 = &UNK_110866710;
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar8);
        uStack_160 = uVar8;
        _objc_retain(puVar4);
        puStack_168 = puVar4;
        FUN_1050c3638(2,puVar4,puVar5,uVar9,uVar1,uVar7,&puStack_188);
        _objc_release(uVar7);
        _objc_release(puStack_168);
        _objc_release(uStack_160);
      }
      _objc_release(puStack_130);
      _objc_release(uStack_138);
      _objc_release(puVar4);
      goto LAB_1050c25d0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
LAB_1050c25d0:
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1050c2648; end: 1050c2663;  */

void FUN_1050c2648(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050c2664; end: 1050c26d7;  */

void FUN_1050c2664(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050c26d8; end: 1050c2a2f;  */

ulong FUN_1050c26d8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  FUN_1050c70f8();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar15 * 8);
        lVar12 = *(long *)(param_1 + 0x20);
        func_0x00010c067ec0(uVar2);
        param_2 = uVar1;
        FUN_1050ce078(lVar12,uVar1,uVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar12;
        func_0x00010c247520();
        if (lVar3 == 1) {
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf35ba0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf35b80(lVar12);
          func_0x00010befc800(uVar2);
          _objc_release(uVar2);
        }
        _objc_release(lVar12);
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      lVar4 = lVar11;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return 0;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar9);
  if (puVar9 != (undefined8 *)0x0) {
    lVar4 = *(long *)(uVar1 + 0x28);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0);
    }
    goto LAB_1050c2a08;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar13 = param_2;
  func_0x00010c29eb40();
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar8 = param_2;
      func_0x00010c29eb20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296de0();
      func_0x00010c0df760(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar6);
      _objc_release(uVar8);
      uVar13 = uVar13 + 1;
      uVar8 = param_2;
      func_0x00010c29eb40();
    } while (uVar13 < uVar8);
  }
  lVar4 = *(long *)(uVar1 + 0x20);
  func_0x00010bf35bc0();
  if (lVar4 == 0) {
LAB_1050c29d8:
    lVar4 = *(long *)(uVar1 + 0x28);
    if (lVar4 != 0) {
      pcVar10 = *(code **)(lVar4 + 0x10);
      uVar2 = 1;
LAB_1050c29fc:
      (*pcVar10)(lVar4,uVar2);
    }
  }
  else {
    uVar13 = 0;
    uVar16 = 1;
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = *(undefined8 *)(uVar1 + 0x20);
      func_0x00010bf35ba0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296de0();
      func_0x00010c0df760(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf4b900();
      _objc_release(puVar6);
      _objc_release(uVar2);
      uVar16 = (uint)puVar7 & uVar16;
      uVar13 = uVar13 + 1;
      uVar8 = *(ulong *)(uVar1 + 0x20);
      func_0x00010bf35bc0();
    } while (uVar13 < uVar8);
    if (uVar16 != 0) goto LAB_1050c29d8;
    lVar4 = *(long *)(uVar1 + 0x28);
    if (lVar4 != 0) {
      pcVar10 = *(code **)(lVar4 + 0x10);
      uVar2 = 0;
      goto LAB_1050c29fc;
    }
  }
  _objc_release(puVar5);
LAB_1050c2a08:
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 1050c2a30; end: 1050c2bcb;  */

void FUN_1050c2a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1050c2bcc; end: 1050c2e47;  */

void FUN_1050c2bcc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
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
  undefined8 uVar14;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1050c2e48;
  uStack_60 = 0x1050c2e58;
  uStack_58 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  func_0x00010bfab6c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = puStack_78[5];
  if ((uVar2 != 0) && (func_0x00010bfe2e20(), (uVar2 & 1) != 0)) {
    lVar3 = puStack_78[5];
    func_0x00010c247520();
    if (lVar3 == 1) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar11);
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar12);
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar13);
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar14);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain(uVar5);
      func_0x00010c0f8500(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      goto LAB_1050c2df0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
LAB_1050c2df0:
  _objc_release(uVar7);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 1050c2e48; end: 1050c2e5f;  */

void FUN_1050c2e48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050c2e60; end: 1050c2ef3;  */

undefined8 FUN_1050c2e60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf35ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1050c70f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf35b80(uVar1);
  FUN_1050ce078(uVar3,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
  return 0;
}



/* Entry: 1050c2ef4; end: 1050c3063;  */

void FUN_1050c2ef4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f0720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bf35b80(uVar1);
  FUN_1050cc7b8(param_2,uVar4,uVar1);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b4938;
  _objc_alloc(PTR_PTR_1126b4938);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c0f0720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35b80(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010c0f0760(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c032b00(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  FUN_1050d1834(param_2,puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050c3064; end: 1050c330f;  */

void FUN_1050c3064(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_1 + 0x58);
  if ((param_2 & 1) != 0) {
    (**(code **)(lVar7 + 0x10))(lVar7,1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    _objc_retain(uVar6);
    puVar8 = PTR_PTR_1126b4940;
    _objc_retain(uVar5);
    _objc_retain(uVar3);
    _objc_opt_new(puVar8);
    uVar9 = uVar1;
    func_0x00010bf35ce0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    FUN_1050c7264();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(puVar8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    puVar11 = puVar8;
    func_0x00010bf35ba0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35b80(uVar1);
    func_0x00010befc800(puVar11);
    _objc_release(puVar11);
    puVar11 = puVar8;
    func_0x00010c1ebee0(puVar8);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x000109189494();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar8);
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1ec200(puVar8);
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126b4948;
    _objc_opt_class(PTR_PTR_1126b4948);
    uVar9 = uVar2;
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1050c3310;
    puStack_88 = &UNK_110866800;
    uStack_80 = uVar6;
    uStack_78 = uVar1;
    uStack_70 = uVar4;
    uStack_68 = uVar2;
    _objc_retain(uVar6);
    _objc_retain(uVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    FUN_1050c3638(3,puVar8,puVar11,uVar3,uVar5,uVar9,&puStack_a0);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001050c330c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x10))(lVar7,0);
  return;
}



/* Entry: 1050c3310; end: 1050c351f;  */

void FUN_1050c3310(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  if ((param_3 == 0) && (uVar11 = param_2, func_0x00010bfe1380(), uVar11 != 0)) {
    uVar11 = 0;
    bVar1 = false;
    do {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010bf35b80();
      uVar6 = param_2;
      func_0x00010bfe1360();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c296de0();
      _objc_release(uVar6);
      bVar1 = (bool)(iVar2 == (int)uVar7 | bVar1);
      uVar11 = uVar11 + 1;
      uVar6 = param_2;
      func_0x00010bfe1380();
    } while (uVar11 < uVar6);
    if (bVar1) {
      puVar5 = *(undefined **)(param_1 + 0x28);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(puVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar12);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar9);
      func_0x00010c0f8500(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar12);
      goto LAB_1050c33d0;
    }
  }
  puVar5 = PTR_PTR_1126afca8;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c580(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238740(0x4000000000000000,puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = PTR_PTR_1126b4950;
  _objc_alloc(PTR_PTR_1126b4950);
  func_0x00010c01a6a0();
  func_0x00010bfd0a00(uVar10);
LAB_1050c33d0:
  _objc_release(puVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 1050c3520; end: 1050c3637;  */

void FUN_1050c3520(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf35ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1050c70f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf35b80(uVar2);
  FUN_1050ccc74(param_2,uVar1,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050c3638; end: 1050c3c0f;  */

void FUN_1050c3638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_7;
  _objc_retain();
  if (param_1 - 1U < 4) {
    puVar3 = (&PTR_PTR_1108668c0)[param_1 - 1U];
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_7);
    _objc_retain(uVar1);
    func_0x00010bfa48e0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1050c3c10; end: 1050c3cf3;  */

void FUN_1050c3c10(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c08fa60();
  uVar2 = param_4;
  if (uVar1 < 5) {
    _objc_retain(param_4);
  }
  else {
    func_0x00010c08fa60(param_4);
    func_0x00010c25eac0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_alloc(uVar3);
  func_0x00010c008360();
  _objc_retain(0);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,uVar3,0);
  }
  _objc_release(uVar3);
  _objc_release(0);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1050c3cf4; end: 1050c3d2b;  */

void FUN_1050c3cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001050c3d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_4);
    return;
  }
  return;
}



/* Entry: 1050c3d2c; end: 1050c3ea7;  */

void FUN_1050c3d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0f7fc0(param_3);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1050c3ea8; end: 1050c4227;  */

void FUN_1050c3ea8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf35ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1050c70f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1050c4228;
  uStack_80 = 0x1050c4238;
  uStack_78 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1050c4240;
  puStack_c8 = &UNK_1108668e0;
  puStack_98 = puStack_a8;
  _objc_retain(uVar2);
  uStack_c0 = uVar2;
  _objc_retain(uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uStack_b8 = uVar3;
  _objc_retain(uVar9);
  uStack_b0 = uVar9;
  func_0x00010bfab6c0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puStack_98[5] == 0) {
    lVar8 = *(long *)(param_1 + 0x50);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8,0);
    }
  }
  else {
    puVar4 = PTR_PTR_1126b4970;
    _objc_opt_new(PTR_PTR_1126b4970);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf35ce0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    FUN_1050c7264();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar9);
    puVar5 = puVar4;
    func_0x00010bf35ba0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35b80(*(undefined8 *)(param_1 + 0x20));
    func_0x00010befc800(puVar5);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c1ebee0(puVar4);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000109189494();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1ec200(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4978;
    _objc_opt_class(PTR_PTR_1126b4978);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1050c42a4;
    puStack_118 = &UNK_110866940;
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uStack_e8 = uVar10;
    _objc_retain(uVar11);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uStack_110 = uVar11;
    _objc_retain(uVar10);
    uStack_108 = uVar10;
    _objc_retain(uVar3);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    uStack_100 = uVar3;
    _objc_retain(uVar11);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    uStack_f8 = uVar11;
    _objc_retain(uVar10);
    uStack_f0 = uVar10;
    FUN_1050c3638(4,puVar4,puVar5,uVar2,uVar9,uVar7,&puStack_130);
    _objc_release(uVar7);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_e8);
    _objc_release(puVar4);
  }
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar3);
  return;
}



/* Entry: 1050c4228; end: 1050c423f;  */

void FUN_1050c4228(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050c4240; end: 1050c42a3;  */

undefined8 FUN_1050c4240(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf35b80(uVar1);
  FUN_1050d1428(uVar2,uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  return 0;
}



/* Entry: 1050c42a4; end: 1050c4527;  */

void FUN_1050c42a4(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126afca8;
  if (param_3 != 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110db1398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c580(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238740(0x4000000000000000,puVar3);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
    goto LAB_1050c4504;
  }
  uVar11 = param_2;
  func_0x00010c13c8c0();
  if (uVar11 == 0) {
LAB_1050c44a4:
    puVar3 = PTR_PTR_1126afca8;
    ppuVar8 = &PTR____CFConstantStringClassReference_110db1398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c580(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238740(0x4000000000000000,puVar3);
    _objc_release(puVar9);
  }
  else {
    uVar11 = 0;
    bVar2 = false;
    do {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bf35b80();
      uVar5 = param_2;
      func_0x00010c13c8a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c296de0();
      _objc_release(uVar5);
      bVar2 = (bool)(iVar4 == (int)uVar6 | bVar2);
      uVar11 = uVar11 + 1;
      uVar5 = param_2;
      func_0x00010c13c8c0();
    } while (uVar11 < uVar5);
    if (!bVar2) goto LAB_1050c44a4;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    ppuVar8 = *(undefined ***)(param_1 + 0x30);
    _objc_retain(ppuVar8);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar12);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar14);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    func_0x00010c0f8500(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
  }
  _objc_release(ppuVar8);
LAB_1050c4504:
  _objc_release(param_2);
  return;
}


