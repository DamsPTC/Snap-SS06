/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fb183c; end: 108fb184f; -[SCSnapchatterBasicInfoView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb183c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ee4c,param_3);
  return;
}



/* Entry: 108fb1850; end: 108fb18bb; -[SCSnapchatterBasicInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1850(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ee4c);
  _objc_storeStrong(param_1 + _DAT_11277ee40,0);
  _objc_storeStrong(param_1 + _DAT_11277ee3c,0);
  _objc_storeStrong(param_1 + _DAT_11277ee38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee34,0);
  return;
}



/* Entry: 108fb18bc; end: 108fb1987; -[SCSnapchatterButtonAccessoryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb18bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff9f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b56f8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11277ee50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be62c80();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee54);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277ee54) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb1988; end: 108fb1c57; -[SCSnapchatterButtonAccessoryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1988(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ff9f8;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d5b90;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ee58);
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
  lVar7 = (long)_DAT_11277ee50;
  uVar5 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar5);
  dVar12 = param_3;
  dVar11 = param_4;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetMinY();
  dVar8 = dVar12;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar12 = dVar12 + (dVar8 - param_4) * 0.5;
  dVar8 = dVar11;
  dVar15 = param_3;
  func_0x00010b816528(dVar11,dVar12,param_3,param_4);
  lVar6 = (long)_DAT_11277ee54;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  dVar9 = dVar15;
  dVar13 = param_4;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(dVar9,dVar13,uVar5);
  dVar10 = dVar9;
  _objc_release(uVar5);
  func_0x00010beee140(uVar1);
  dVar16 = param_3 + dVar11 + dVar10;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar14 = (dVar10 - dVar13) * 0.5;
  func_0x00010b816528(dVar16,dVar14,dVar9,dVar13);
  func_0x00010b8166f8(dVar8,dVar12,dVar15,param_4,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  dVar12 = dVar16;
  dVar8 = dVar14;
  dVar10 = dVar9;
  dVar11 = dVar13;
  func_0x00010b8166f8(dVar16,dVar14,dVar9,dVar13,param_5);
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar12,dVar8,dVar10,dVar11);
  _objc_release(uVar5);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxY();
  dVar8 = dVar16;
  _CGRectGetMaxY(dVar16,dVar14,dVar9,dVar13);
  dVar12 = dVar12 - dVar8;
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  _CGRectGetMaxX(dVar16,dVar14,dVar9,dVar13);
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a8c20(-dVar12,0,-dVar12,-(dVar8 - dVar16),uVar5);
  _objc_release(uVar5);
  return;
}



/* Entry: 108fb1c58; end: 108fb1d6b; -[SCSnapchatterButtonAccessoryView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108fb1c58(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  puVar2 = PTR_PTR_1126d5b90;
  uVar5 = *(ulong *)(param_5 + _DAT_11277ee58);
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
  dVar6 = param_1;
  func_0x00010c23d5a0(param_1,param_2,*(undefined8 *)(param_5 + _DAT_11277ee50));
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277ee54);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = param_2;
  func_0x00010c23d5a0(param_1,param_2);
  dVar7 = param_1;
  _objc_release(uVar4);
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf4c7e0(uVar1);
  func_0x00010beee140(uVar1);
  _objc_release(uVar1);
  auVar9._0_8_ = param_1 + dVar6 + dVar7 + dVar8 + param_4;
  auVar9._8_8_ = param_2;
  return auVar9;
}



/* Entry: 108fb1d6c; end: 108fb1f9b; -[SCSnapchatterButtonAccessoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1d6c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ee58;
  uVar3 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  uVar4 = param_3;
  if (uVar3 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar4 = uVar3;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_108fb1f84;
    }
    puVar1 = PTR_PTR_1126d5b90;
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar2);
    uVar4 = uVar3;
    func_0x00010beee1c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277ee50));
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c23b620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = (long)_DAT_11277ee54;
    lVar5 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      func_0x00010c12c960();
      _objc_release(lVar5);
      lVar5 = param_1;
      func_0x00010be62c80();
      uVar4 = *(ulong *)(param_1 + lVar6);
      *(long *)(param_1 + lVar6) = lVar5;
    }
    else {
      _objc_release();
      if (lVar5 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbd60();
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar2);
      }
      uVar4 = uVar3;
      func_0x00010c23b620(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_108fb1f84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb1f9c; end: 108fb2047; -[SCSnapchatterButtonAccessoryView _handleButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1f9c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b56f8;
  _objc_opt_class(PTR_PTR_1126b56f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  param_1 = param_1 + _DAT_11277ee5c;
  _objc_loadWeakRetained(param_1);
  uVar3 = uVar1;
  func_0x00010beeecc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd00e0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb2048; end: 108fb20a3; -[SCSnapchatterButtonAccessoryView _newActionSideButton] */

void FUN_108fb2048(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0b8440(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ad13a0);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 108fb20a4; end: 108fb20b3; -[SCSnapchatterButtonAccessoryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb20a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee58);
}



/* Entry: 108fb20b4; end: 108fb20d3; -[SCSnapchatterButtonAccessoryView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb20b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ee5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb20d4; end: 108fb20e7; -[SCSnapchatterButtonAccessoryView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb20d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ee5c,param_3);
  return;
}



/* Entry: 108fb20e8; end: 108fb2143; -[SCSnapchatterButtonAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb20e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ee5c);
  _objc_storeStrong(param_1 + _DAT_11277ee58,0);
  _objc_storeStrong(param_1 + _DAT_11277ee54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee50,0);
  return;
}



/* Entry: 108fb2144; end: 108fb221f; -[SCSnapchatterChatInfoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb2144(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffa00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee60);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee60) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee64);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee64) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee68);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee68) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb2220; end: 108fb2253;  */

void FUN_108fb2220(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c182220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fb2254; end: 108fb24c3; -[SCSnapchatterChatInfoView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb2254(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ffa00;
  lStack_90 = param_2;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126dccd8;
  uVar5 = *(ulong *)(param_2 + _DAT_11277ee6c);
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
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar6 = (long)_DAT_11277ee60;
  dVar10 = 1.79769313486232e+308;
  func_0x00010c23d5a0(*(undefined8 *)(param_2 + lVar6));
  lVar7 = (long)_DAT_11277ee64;
  dVar11 = 1.79769313486232e+308;
  dVar12 = param_1;
  func_0x00010c23d5a0(param_1,*(undefined8 *)(param_2 + lVar7));
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  dVar17 = dVar12;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar12 = dVar12 + ((dVar17 - dVar10) - dVar11) * 0.5;
  dVar8 = 0.0;
  dVar14 = param_1;
  func_0x00010b8162e0(0,dVar12,param_1,dVar10);
  dVar17 = dVar8;
  _CGRectGetMaxY();
  dVar17 = dVar17 + 1.0;
  dVar9 = dVar8;
  _CGRectGetMinX(dVar8,dVar12,dVar14,dVar10);
  dVar13 = dVar17;
  dVar15 = dVar11;
  dVar16 = dVar11;
  func_0x00010b8162e0();
  uVar3 = uVar1;
  func_0x00010c15e3e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    dVar18 = dVar8;
    _CGRectGetMinX(dVar8,dVar12,dVar14,dVar10);
  }
  else {
    dVar18 = dVar9;
    _CGRectGetMaxX(dVar9,dVar13,dVar15,dVar16);
    dVar18 = dVar18 + 2.0;
  }
  _objc_release(uVar3);
  func_0x00010b8162e0(dVar18,dVar17,param_1,dVar11);
  func_0x00010c19f0e0(dVar8,dVar12,dVar14,dVar10,*(undefined8 *)(param_2 + lVar6));
  func_0x00010c19f0e0(dVar18,dVar17,param_1,dVar11,*(undefined8 *)(param_2 + lVar7));
  uVar4 = *(undefined8 *)(param_2 + _DAT_11277ee68);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar9,dVar13,dVar15,dVar16);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 108fb24c4; end: 108fb270b; -[SCSnapchatterChatInfoView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb24c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277ee6c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_108fb26f4;
    }
    puVar2 = PTR_PTR_1126dccd8;
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
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar1 = uVar5;
    func_0x00010c112ee0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277ee60));
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c154fc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277ee64));
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c15e3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = (long)_DAT_11277ee68;
    uVar3 = *(ulong *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      func_0x00010c1a7f60();
    }
    else {
      _objc_release();
      if (uVar3 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar4);
      }
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      uVar3 = uVar5;
      func_0x00010c15e3e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar5);
LAB_108fb26f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb270c; end: 108fb271b; -[SCSnapchatterChatInfoView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb270c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee6c);
}



/* Entry: 108fb271c; end: 108fb277b; -[SCSnapchatterChatInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb271c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ee6c,0);
  _objc_storeStrong(param_1 + _DAT_11277ee68,0);
  _objc_storeStrong(param_1 + _DAT_11277ee64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee60,0);
  return;
}



/* Entry: 108fb277c; end: 108fb27cb; -[SCSnapchatterCheckboxAccessoryView initWithFrame:] */

undefined1 * FUN_108fb277c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffa08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be397a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb27cc; end: 108fb2a5b; -[SCSnapchatterCheckboxAccessoryView _initCheckMark] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb27cc(long param_1)

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
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar17 = (long)_DAT_11277ee70;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bf493c0(0xc036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(uVar2);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4026000000000000);
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(param_1);
  ppuVar13 = &PTR____CFConstantStringClassReference_110f15b38;
  func_0x00010c160fc0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar13);
  lVar18 = (long)_DAT_11277ee74;
  ppuVar16 = *(undefined ***)(puVar1 + lVar18);
  _objc_retain(ppuVar16);
  _objc_retain(ppuVar13);
  if (ppuVar16 == ppuVar13) {
    _objc_release(ppuVar13);
  }
  else {
    if (ppuVar13 == (undefined **)0x0) {
      _objc_release(ppuVar16);
    }
    else {
      ppuVar11 = ppuVar16;
      func_0x00010c071ae0();
      _objc_release(ppuVar13);
      _objc_release(ppuVar16);
      if (((ulong)ppuVar11 & 1) != 0) goto LAB_108fb2c20;
    }
    puVar10 = PTR_PTR_1126d77d8;
    _objc_retain(ppuVar13);
    _objc_opt_class(puVar10);
    ppuVar16 = ppuVar13;
    _objc_opt_isKindOfClass(ppuVar13,puVar10);
    ppuVar11 = ppuVar13;
    if (((ulong)ppuVar16 & 1) == 0) {
      ppuVar11 = (undefined **)0x0;
    }
    _objc_retain(ppuVar11);
    _objc_release(ppuVar13);
    ppuVar16 = ppuVar11;
    func_0x00010bf51e00();
    uVar15 = *(undefined8 *)(puVar1 + lVar18);
    *(undefined ***)(puVar1 + lVar18) = ppuVar16;
    _objc_release(uVar15);
    ppuVar16 = ppuVar11;
    func_0x00010c07d660();
    _objc_release(ppuVar11);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)ppuVar16 == 0) {
      ppuVar12 = ppuVar11;
      func_0x00010bf338a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar12;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = (long)_DAT_11277ee70;
      func_0x00010c216160(*(undefined8 *)(puVar1 + lVar18));
      _objc_release(puVar10);
      uVar15 = *(undefined8 *)(puVar1 + lVar18);
    }
    else {
      ppuVar16 = ppuVar11;
      func_0x00010bf338e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      lVar18 = (long)_DAT_11277ee70;
      uVar15 = *(undefined8 *)(puVar1 + lVar18);
    }
    func_0x00010c160fc0(uVar15);
    func_0x00010c1a9f00(*(undefined8 *)(puVar1 + lVar18));
  }
  _objc_release(ppuVar16);
LAB_108fb2c20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
  return;
}



/* Entry: 108fb2a5c; end: 108fb2c37; -[SCSnapchatterCheckboxAccessoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb2a5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277ee74;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_108fb2c20;
    }
    puVar2 = PTR_PTR_1126d77d8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c07d660();
    _objc_release(uVar1);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar5 == 0) {
      uVar3 = uVar1;
      func_0x00010bf338a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11277ee70;
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar6));
      _objc_release(puVar2);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
    }
    else {
      uVar5 = uVar1;
      func_0x00010bf338e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      lVar6 = (long)_DAT_11277ee70;
      uVar4 = *(undefined8 *)(param_1 + lVar6);
    }
    func_0x00010c160fc0(uVar4);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6));
  }
  _objc_release(uVar5);
LAB_108fb2c20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb2c38; end: 108fb2c43; -[SCSnapchatterCheckboxAccessoryView sizeThatFits:] */

undefined8 FUN_108fb2c38(void)

{
  return 0x4052c00000000000;
}



/* Entry: 108fb2c44; end: 108fb2d17; -[SCSnapchatterCheckboxAccessoryView _handleButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb2c44(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d77d8;
  uVar4 = *(ulong *)(param_1 + _DAT_11277ee74);
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
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    param_1 = param_1 + _DAT_11277ee78;
    _objc_loadWeakRetained(param_1);
    uVar3 = uVar1;
    func_0x00010beeecc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd00e0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb2d18; end: 108fb2d27; -[SCSnapchatterCheckboxAccessoryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb2d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee74);
}



/* Entry: 108fb2d28; end: 108fb2d47; -[SCSnapchatterCheckboxAccessoryView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb2d28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ee78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb2d48; end: 108fb2d5b; -[SCSnapchatterCheckboxAccessoryView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb2d48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ee78,param_3);
  return;
}



/* Entry: 108fb2d5c; end: 108fb2da7; -[SCSnapchatterCheckboxAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb2d5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ee78);
  _objc_storeStrong(param_1 + _DAT_11277ee74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee70,0);
  return;
}



/* Entry: 108fb2da8; end: 108fb315f; -[SCSnapchatterDoubleButtonAccessoryView initWithFrame:] */

/* WARNING: Possible PIC construction at 0x000108fb2ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108fb2f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108fb347c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fb2f84) */
/* WARNING: Removing unreachable block (ram,0x000108fb2ec4) */
/* WARNING: Removing unreachable block (ram,0x000108fb3480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108fb2da8(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126ffa10;
  puVar2 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return 0;
    }
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = (long)_DAT_11277ee84;
    if (*(long *)((long)puVar2 + lVar13) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    lVar11 = (long)_DAT_11277ee88;
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar11);
    func_0x00010c290a20();
    uVar9 = 0x4049000000000000;
    if (iVar1 == 0) {
      uVar9 = 0x404e000000000000;
    }
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar11);
    func_0x00010c290a20();
    uVar14 = 0x4044000000000000;
    if (iVar1 == 0) {
      uVar14 = 0x4024000000000000;
    }
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar11);
    func_0x00010c290a20();
    lVar12 = (long)_DAT_11277ee7c;
    lVar4 = *(long *)((long)puVar2 + lVar12);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010bf49420(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar12);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar5);
    lVar4 = (long)_DAT_11277ee80;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar4);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010bf49420(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar9 = *(undefined8 *)((long)puVar2 + lVar4);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c2793a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x8000000000000000;
    if (iVar1 == 0) {
      uVar5 = 0xc024000000000000;
    }
    uVar8 = uVar9;
    func_0x00010bf493c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar9);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined **)((long)puVar2 + lVar13) = puVar3;
    _objc_release(uVar9);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release(uVar8);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return lVar11;
    }
    ___stack_chk_fail();
    lVar4 = (long)_DAT_11277ee7c;
    uVar9 = *(undefined8 *)(lVar11 + lVar4);
    lVar13 = (long)_DAT_11277ee88;
    func_0x00010bf25400(*(undefined8 *)(lVar11 + lVar13));
    func_0x00010c16e480(uVar9);
    uVar9 = *(undefined8 *)(lVar11 + lVar4);
    func_0x00010bf25400(*(undefined8 *)(lVar11 + lVar13));
    func_0x00010c16e480(uVar9);
    lVar10 = (long)_DAT_11277ee80;
    uVar9 = *(undefined8 *)(lVar11 + lVar10);
    func_0x00010bf25400(*(undefined8 *)(lVar11 + lVar13));
    func_0x00010c16e480(uVar9);
    uVar9 = *(undefined8 *)(lVar11 + lVar10);
    func_0x00010bf25400(*(undefined8 *)(lVar11 + lVar13));
    func_0x00010c16e480(uVar9);
    lVar10 = *(long *)(lVar11 + lVar4);
    uVar9 = *(undefined8 *)(lVar11 + lVar13);
    func_0x00010bf256a0(uVar9);
  }
  else {
    puVar3 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11277ee7c;
    uVar9 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined **)((long)puVar2 + lVar10) = puVar3;
    _objc_release(uVar9);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010c198080(*(undefined8 *)((long)puVar2 + lVar10));
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1a9fc0(*(undefined8 *)((long)puVar2 + lVar10));
    lVar10 = *(long *)((long)puVar2 + lVar10);
    uVar9 = 0x87;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1aab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar10,PTR_s_setImageTintColor_forState__1126484f8,uVar9,0)
  ;
  return lVar10;
}



/* Entry: 108fb3160; end: 108fb33c7; -[SCSnapchatterDoubleButtonAccessoryView _setupConstraints] */

/* WARNING: Possible PIC construction at 0x000108fb347c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fb3480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb3160(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11277ee84;
  if (*(long *)(param_1 + lVar10) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar8 = (long)_DAT_11277ee88;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c290a20();
  uVar11 = 0x4049000000000000;
  if (iVar1 == 0) {
    uVar11 = 0x404e000000000000;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c290a20();
  uVar12 = 0x4044000000000000;
  if (iVar1 == 0) {
    uVar12 = 0x4024000000000000;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c290a20();
  lVar9 = (long)_DAT_11277ee7c;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf49420(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar2 = (long)_DAT_11277ee80;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bf49420(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar11 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x8000000000000000;
  if (iVar1 == 0) {
    uVar3 = 0xc024000000000000;
  }
  uVar5 = uVar11;
  func_0x00010bf493c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar11);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar6;
  _objc_release(uVar11);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = (long)_DAT_11277ee7c;
  uVar11 = *(undefined8 *)(lVar8 + lVar2);
  lVar7 = (long)_DAT_11277ee88;
  func_0x00010bf25400(*(undefined8 *)(lVar8 + lVar7));
  func_0x00010c16e480(uVar11);
  uVar11 = *(undefined8 *)(lVar8 + lVar2);
  func_0x00010bf25400(*(undefined8 *)(lVar8 + lVar7));
  func_0x00010c16e480(uVar11);
  lVar10 = (long)_DAT_11277ee80;
  uVar11 = *(undefined8 *)(lVar8 + lVar10);
  func_0x00010bf25400(*(undefined8 *)(lVar8 + lVar7));
  func_0x00010c16e480(uVar11);
  uVar11 = *(undefined8 *)(lVar8 + lVar10);
  func_0x00010bf25400(*(undefined8 *)(lVar8 + lVar7));
  func_0x00010c16e480(uVar11);
  uVar12 = *(undefined8 *)(lVar8 + lVar2);
  uVar11 = *(undefined8 *)(lVar8 + lVar7);
  func_0x00010bf256a0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010c1aab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar12,PTR_s_setImageTintColor_forState__1126484f8,uVar11,0);
  return;
}



/* Entry: 108fb33c8; end: 108fb34ab; -[SCSnapchatterDoubleButtonAccessoryView _setupButtonAppearance] */

/* WARNING: Possible PIC construction at 0x000108fb347c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fb3480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb33c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277ee7c;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  lVar3 = (long)_DAT_11277ee88;
  func_0x00010bf25400(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e480(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf25400(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e480(uVar1);
  lVar4 = (long)_DAT_11277ee80;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf25400(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e480(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf25400(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e480(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf256a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1aab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setImageTintColor_forState__1126484f8,uVar1,0);
  return;
}



/* Entry: 108fb34ac; end: 108fb34bf; -[SCSnapchatterDoubleButtonAccessoryView sizeThatFits:] */

undefined1  [16] FUN_108fb34ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4050800000000000;
  auVar1._0_8_ = 0x4062800000000000;
  return auVar1;
}



/* Entry: 108fb34c0; end: 108fb360b; -[SCSnapchatterDoubleButtonAccessoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb34c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277ee88;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_108fb35f4;
    }
    puVar2 = PTR_PTR_1126d77d0;
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
    lVar3 = *(long *)(param_1 + lVar6);
    if (lVar3 == 0) {
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = param_3;
      _objc_release(uVar4);
      func_0x00010beab2e0(param_1);
    }
    else {
      func_0x00010c290a20();
      uVar1 = uVar5;
      func_0x00010c290a20();
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = param_3;
      _objc_release(uVar4);
      func_0x00010beab2e0(param_1);
      if ((int)lVar3 == (int)uVar1) goto LAB_108fb35ec;
    }
    func_0x00010beabac0(param_1);
  }
LAB_108fb35ec:
  _objc_release(uVar5);
LAB_108fb35f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb360c; end: 108fb367b; -[SCSnapchatterDoubleButtonAccessoryView _handlePrimaryButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb360c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11277ee8c;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277ee88);
  func_0x00010c112c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd00e0(lVar1,param_2,uVar2,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fb367c; end: 108fb36eb; -[SCSnapchatterDoubleButtonAccessoryView _handleSecondaryButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb367c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11277ee8c;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277ee88);
  func_0x00010c154d60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd00e0(lVar1,param_2,uVar2,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fb36ec; end: 108fb36fb; -[SCSnapchatterDoubleButtonAccessoryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb36ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee88);
}



/* Entry: 108fb36fc; end: 108fb371b; -[SCSnapchatterDoubleButtonAccessoryView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb36fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ee8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb371c; end: 108fb372f; -[SCSnapchatterDoubleButtonAccessoryView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb371c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ee8c,param_3);
  return;
}



/* Entry: 108fb3730; end: 108fb37bb; -[SCSnapchatterDoubleButtonAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb3730(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ee8c);
  _objc_storeStrong(param_1 + _DAT_11277ee88,0);
  _objc_storeStrong(param_1 + _DAT_11277ee84,0);
  _objc_storeStrong(param_1 + _DAT_11277ee90,0);
  _objc_storeStrong(param_1 + _DAT_11277ee94,0);
  _objc_storeStrong(param_1 + _DAT_11277ee80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee7c,0);
  return;
}



/* Entry: 108fb37bc; end: 108fb3833; -[SCSnapchatterFriendmojiAccessoryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb37bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffa18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee98);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee98) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb3834; end: 108fb3943; -[SCSnapchatterFriendmojiAccessoryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb3834(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffa18;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126b4738;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ee9c);
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
  lVar5 = (long)_DAT_11277ee98;
  func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar5));
  dVar6 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  func_0x00010bf4c7e0(uVar1);
  dVar6 = dVar6 - param_4;
  dVar7 = dVar6 - param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010b816528(dVar7,dVar6 + param_2 * -0.5,param_1,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  _objc_release(uVar1);
  return;
}



/* Entry: 108fb3944; end: 108fb3a03; -[SCSnapchatterFriendmojiAccessoryView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108fb3944(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  puVar2 = PTR_PTR_1126b4738;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ee9c);
  dVar5 = param_2;
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
  func_0x00010c0699c0(*(undefined8 *)(param_5 + _DAT_11277ee98));
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf4c7e0(uVar1);
  _objc_release(uVar1);
  auVar6._0_8_ = param_1 + dVar5 + param_4;
  auVar6._8_8_ = param_2;
  return auVar6;
}



/* Entry: 108fb3a04; end: 108fb3b3f; -[SCSnapchatterFriendmojiAccessoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb3a04(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ee9c;
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
      if ((uVar1 & 1) != 0) goto LAB_108fb3b28;
    }
    puVar2 = PTR_PTR_1126b4738;
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
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010bfb9780(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277ee98));
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fb3b28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb3b40; end: 108fb3b4f; -[SCSnapchatterFriendmojiAccessoryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb3b40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee9c);
}



/* Entry: 108fb3b50; end: 108fb3b8f; -[SCSnapchatterFriendmojiAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb3b50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ee9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee98,0);
  return;
}



/* Entry: 108fb3b90; end: 108fb3c63; -[SCSnapchatterGroupProfileAddButtonAccessoryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb3b90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffa20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b56f8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277eea0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277eea0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11277eea4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb3c64; end: 108fb3d8f; -[SCSnapchatterGroupProfileAddButtonAccessoryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb3c64(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffa20;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d5b90;
  uVar4 = *(ulong *)(param_5 + _DAT_11277eea8);
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
  lVar6 = (long)_DAT_11277eea4;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar5);
  dVar7 = param_3;
  dVar9 = param_4;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetMinY();
  dVar8 = dVar7;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  func_0x00010b816528(dVar9,dVar7 + (dVar8 - param_4) * 0.5,param_3,param_4);
  func_0x00010b8166f8(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(uVar1);
  return;
}



/* Entry: 108fb3d90; end: 108fb3e67; -[SCSnapchatterGroupProfileAddButtonAccessoryView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108fb3d90(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_PTR_1126d5b90;
  uVar4 = *(ulong *)(param_5 + _DAT_11277eea8);
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
  dVar6 = param_2;
  func_0x00010c23d5a0(param_1,param_2,*(undefined8 *)(param_5 + _DAT_11277eea0));
  dVar5 = param_1;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf4c7e0(uVar1);
  func_0x00010beee140(uVar1);
  _objc_release(uVar1);
  auVar7._0_8_ = param_1 + dVar5 + dVar6 + param_4;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 108fb3e68; end: 108fb40bf; -[SCSnapchatterGroupProfileAddButtonAccessoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb3e68(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277eea8;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar5 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108fb40a4;
    }
    puVar2 = PTR_PTR_1126d5b90;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010beee1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277eea0));
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11277eea4;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    uVar5 = uVar1;
    func_0x00010beee1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    uVar5 = uVar1;
    func_0x00010beee1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
    uVar5 = uVar1;
    func_0x00010beee1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076be0();
    func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar5);
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar6));
    uVar5 = uVar1;
    func_0x00010beee1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c2711a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174800(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
LAB_108fb40a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb40c0; end: 108fb41df; -[SCSnapchatterGroupProfileAddButtonAccessoryView _handleButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb40c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aec40;
  _objc_opt_class(PTR_PTR_1126aec40);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126d5b90;
  uVar5 = *(ulong *)(param_1 + _DAT_11277eea8);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  param_1 = param_1 + _DAT_11277eeac;
  _objc_loadWeakRetained(param_1);
  uVar4 = uVar3;
  func_0x00010beee1c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c0cfdc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd00e0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb41e0; end: 108fb4497; -[SCSnapchatterGroupProfileAddButtonAccessoryView setButtonColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb41e0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb7f38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7f38,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e04f78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e04f78,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      _objc_release(ppuVar3);
      goto LAB_108fb4264;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110db8ab8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8ab8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
    if ((uVar2 & 1) != 0) goto LAB_108fb426c;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e51198;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e51198,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((uVar2 & 1) != 0) {
LAB_108fb4350:
      _objc_release(ppuVar1);
LAB_108fb4358:
      lVar6 = (long)_DAT_11277eea4;
      func_0x00010c16e480(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c216380(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c1bec80(*(undefined8 *)(param_1 + lVar6));
      goto LAB_108fb4290;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb7f58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7f58,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      _objc_release(ppuVar3);
      goto LAB_108fb4350;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110eb7f98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7f98,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
    if ((uVar2 & 1) != 0) goto LAB_108fb4358;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc4998;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4998,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110eb7fb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7fb8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(ppuVar3);
      _objc_release(ppuVar1);
      if ((int)uVar2 == 0) goto LAB_108fb426c;
    }
    else {
      _objc_release(ppuVar1);
    }
    lVar6 = (long)_DAT_11277eea4;
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c1bec80(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
  }
  else {
LAB_108fb4264:
    _objc_release(ppuVar1);
LAB_108fb426c:
    lVar6 = (long)_DAT_11277eea4;
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
  }
  func_0x00010c1aab40(uVar4);
LAB_108fb4290:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb4498; end: 108fb44a7; -[SCSnapchatterGroupProfileAddButtonAccessoryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb4498(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eea8);
}



/* Entry: 108fb44a8; end: 108fb44c7; -[SCSnapchatterGroupProfileAddButtonAccessoryView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb44a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277eeac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb44c8; end: 108fb44db; -[SCSnapchatterGroupProfileAddButtonAccessoryView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb44c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277eeac,param_3);
  return;
}



/* Entry: 108fb44dc; end: 108fb4537; -[SCSnapchatterGroupProfileAddButtonAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb44dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277eeac);
  _objc_storeStrong(param_1 + _DAT_11277eea8,0);
  _objc_storeStrong(param_1 + _DAT_11277eea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277eea0,0);
  return;
}



/* Entry: 108fb4538; end: 108fb4643; -[SCSnapchatterView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb4538(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffa28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277eeb0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277eeb0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277eeb4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277eeb4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277eeb8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277eeb8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277eebc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277eebc) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb4644; end: 108fb46ef;  */

void FUN_108fb4644(void)

{
  _objc_alloc(PTR_PTR_1126dcce0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb46f0; end: 108fb4963; -[SCSnapchatterView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb46f0(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ffa28;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11277eec0;
  dVar3 = param_3;
  uVar12 = param_4;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar1));
  dVar4 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  func_0x00010b816528();
  lVar2 = (long)_DAT_11277eec4;
  dVar6 = param_3;
  uVar13 = param_4;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar2));
  dVar14 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar14 = dVar14 - dVar6;
  dVar7 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  func_0x00010b816528();
  dVar11 = dVar14;
  _CGRectGetMinX();
  if (dVar11 == 0.0) {
    func_0x00010bf20c00(param_5);
    _CGRectGetMaxX();
  }
  dVar8 = dVar4;
  _CGRectGetMaxX(dVar4,dVar5,dVar3,uVar12);
  dVar9 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar10 = dVar4;
  _CGRectGetMaxX(dVar4,dVar5,dVar3,uVar12);
  dVar11 = dVar11 - dVar10;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010b816528(dVar8,dVar9,dVar11,param_1);
  func_0x00010b8166f8(dVar4,dVar5,dVar3,uVar12,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010b8166f8(dVar14,dVar7,dVar6,uVar13,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010b8166f8(dVar8,dVar9,dVar11,param_1,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277eec8));
  return;
}



/* Entry: 108fb4964; end: 108fb4ae7; -[SCSnapchatterView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb4964(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277eecc;
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
      if ((uVar1 & 1) != 0) goto LAB_108fb4ad0;
    }
    puVar2 = PTR_PTR_1126cb050;
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
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010bfee120(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed9ac0(param_1);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c26e5c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee1fe0(param_1);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010beed3c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010bed2600(param_1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fb4ad0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb4ae8; end: 108fb4c13; -[SCSnapchatterView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb4ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + _DAT_11277eed0,param_3);
  puVar1 = PTR_DAT_1126a5b70;
  lVar4 = (long)_DAT_11277eec0;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  }
  puVar1 = PTR_DAT_1126a5b70;
  lVar4 = (long)_DAT_11277eec8;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  }
  puVar1 = PTR_DAT_1126a5b70;
  lVar4 = (long)_DAT_11277eec4;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb4c14; end: 108fb4c8b; -[SCSnapchatterView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb4c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277eed4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11277eec0;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar2,PTR_s_setImageDownloader__1126482a8);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb4c8c; end: 108fb4d4b; -[SCSnapchatterView setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb4c8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277eed8;
  if (*(long *)(param_1 + lVar4) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    lVar4 = (long)_DAT_11277eeb8;
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d9c0();
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb4d4c; end: 108fb4e57; -[SCSnapchatterView _updateInfoViewWithInfoViewModel:] */

void FUN_108fb4d4c(undefined8 param_1,undefined8 param_2,long param_3)

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
    pcStack_60 = FUN_108fb4e58;
    puStack_58 = &UNK_110ad14e0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0bca80(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108fb4e58; end: 108fb4ee7;  */

void FUN_108fb4e58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fb4ee8; end: 108fb50ab; -[SCSnapchatterView _updateAccessoryViewWithAccessoryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb4ee8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277eebc;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar4 = 0;
  }
  else {
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa200();
        _objc_release(uVar4);
      }
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + _DAT_11277eed0;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c1619c0(uVar4);
      _objc_release(lVar1);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277eec4);
  *(undefined8 *)(param_1 + _DAT_11277eec4) = uVar4;
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb50ac; end: 108fb5297; -[SCSnapchatterView _updateThumbanilViewWithThumbanilViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb50ac(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 != 0) {
    lVar6 = (long)_DAT_11277eeb8;
    lVar5 = *(long *)(param_1 + lVar6);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar1 = *(ulong *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa200();
        _objc_release(uVar3);
      }
      uVar1 = *(ulong *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16d9c0();
        _objc_release(uVar3);
      }
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + _DAT_11277eed0;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c1619c0(uVar3);
      _objc_release(lVar5);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277eec0);
    *(undefined8 *)(param_1 + _DAT_11277eec0) = uVar3;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108fb5298; end: 108fb5377; -[SCSnapchatterView _updateInfoViewWithBasicInfoViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277eeb0;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea4a80(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb5378; end: 108fb5457; -[SCSnapchatterView _updateChatViewWithChatInfoViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277eeb4;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea4a80(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb5458; end: 108fb54c7; -[SCSnapchatterView _setInfoView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5458(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277eec8;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c1a7f60(*(long *)(param_1 + lVar2),param_2,1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb54c8; end: 108fb54d7; -[SCSnapchatterView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb54c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eecc);
}



/* Entry: 108fb54d8; end: 108fb54f7; -[SCSnapchatterView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb54d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277eed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb54f8; end: 108fb55c3; -[SCSnapchatterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb54f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277eed0);
  _objc_storeStrong(param_1 + _DAT_11277eecc,0);
  _objc_storeStrong(param_1 + _DAT_11277eed8,0);
  _objc_storeStrong(param_1 + _DAT_11277eed4,0);
  _objc_storeStrong(param_1 + _DAT_11277eec0,0);
  _objc_storeStrong(param_1 + _DAT_11277eec4,0);
  _objc_storeStrong(param_1 + _DAT_11277eec8,0);
  _objc_storeStrong(param_1 + _DAT_11277eebc,0);
  _objc_storeStrong(param_1 + _DAT_11277eeb8,0);
  _objc_storeStrong(param_1 + _DAT_11277eeb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277eeb0,0);
  return;
}



/* Entry: 108fb55c4; end: 108fb56ef; -[SCSnapchatterAvatarContainerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108fb55c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffa30;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277eedc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277eedc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277eee0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277eee0) = puVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return puVar1;
}



/* Entry: 108fb56f0; end: 108fb5727;  */

void FUN_108fb56f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be62cc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fb5728; end: 108fb5743;  */

void FUN_108fb5728(void)

{
  _objc_opt_new(PTR_PTR_1126b52f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb5744; end: 108fb593f; -[SCSnapchatterAvatarContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5744(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ffa30;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  puVar2 = PTR_PTR_1126cc220;
  lVar6 = (long)_DAT_11277eee4;
  uVar5 = *(ulong *)(param_5 + lVar6);
  dVar8 = param_1;
  dVar9 = param_2;
  dVar10 = param_3;
  dVar11 = param_4;
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
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126cc220;
  if (uVar3 != 0) {
    uVar7 = *(ulong *)(param_5 + lVar6);
    _objc_retain(uVar7);
    _objc_opt_class(puVar2);
    uVar5 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar3 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar7);
    func_0x00010bf20c00(param_5);
    _CGRectGetMinX();
    param_2 = dVar8;
    func_0x00010bf4c7e0(uVar3);
    param_1 = dVar8 + dVar9;
    func_0x00010bf20c00(param_5);
    _CGRectGetMinY();
    param_3 = param_2;
    func_0x00010bf4c7e0(uVar3);
    param_2 = param_2 + param_3;
    func_0x00010c26e2a0(uVar3);
    dVar8 = param_3;
    func_0x00010bf4c7e0(uVar3);
    param_3 = param_3 - dVar9;
    func_0x00010bf4c7e0(uVar3);
    param_3 = param_3 - dVar11;
    func_0x00010c26e2a0(uVar3);
    func_0x00010bf4c7e0(uVar3);
    func_0x00010bf4c7e0(uVar3);
    _objc_release(uVar3);
    param_4 = (dVar9 - dVar8) - dVar10;
  }
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277eedc);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  func_0x00010bed3800(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 108fb5940; end: 108fb59c7; -[SCSnapchatterAvatarContainerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fb5940(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_PTR_1126cc220;
  uVar4 = *(ulong *)(param_3 + _DAT_11277eee4);
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
  func_0x00010c26e2a0(uVar1);
  _objc_release(uVar1);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108fb59c8; end: 108fb5c83; -[SCSnapchatterAvatarContainerView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb59c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_5);
  lVar6 = (long)_DAT_11277eee4;
  uVar4 = *(ulong *)(param_3 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_5);
  if (uVar4 == param_5) {
    _objc_release(param_5);
  }
  else {
    if (param_5 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_5);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fb5c64;
    }
    puVar2 = PTR_PTR_1126cc220;
    _objc_retain(param_5);
    _objc_opt_class(puVar2);
    uVar1 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar4 = param_5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_5);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    *(ulong *)(param_3 + lVar6) = uVar1;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11277eedc;
    lVar6 = *(long *)(param_3 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_3 + _DAT_11277eee8);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2284c0(uVar5);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa200();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa2c0();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d5da0();
      _objc_release(uVar3);
      func_0x00010c26e2a0(uVar4);
      func_0x00010c26e2a0(uVar4);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0040(param_1,param_2);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_3);
      _objc_release(uVar3);
    }
    uVar1 = uVar4;
    func_0x00010bf13300(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010bed3820(param_3);
    func_0x00010c0e8ca0(uVar4);
    func_0x00010c1677c0(param_3);
    func_0x00010c1cbe20(param_3);
  }
  _objc_release(uVar4);
LAB_108fb5c64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fb5c84; end: 108fb5d03; -[SCSnapchatterAvatarContainerView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277eeec);
  *(undefined8 *)(param_1 + _DAT_11277eeec) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277eedc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb5d04; end: 108fb5d83; -[SCSnapchatterAvatarContainerView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277eef0);
  *(undefined8 *)(param_1 + _DAT_11277eef0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277eedc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa2c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb5d84; end: 108fb5e37; -[SCSnapchatterAvatarContainerView setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5d84(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277eee8;
  if (*(long *)(param_1 + lVar4) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    lVar5 = (long)_DAT_11277eedc;
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2284c0(uVar3,param_2,uVar1);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb5e38; end: 108fb5e7f; -[SCSnapchatterAvatarContainerView traitCollectionDidChange:] */

void FUN_108fb5e38(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffa30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed3820(param_1);
  return;
}



/* Entry: 108fb5e80; end: 108fb5ff7; -[SCSnapchatterAvatarContainerView _updateAvatarBackgroundShapeColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5e80(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126cc220;
  uVar6 = *(ulong *)(param_1 + _DAT_11277eee4);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar5 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (uVar1 != 0) {
    uVar5 = uVar6;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar7 = (long)_DAT_11277eee0;
    uVar3 = *(ulong *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uVar5 = uVar3;
      func_0x00010c22a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
    }
    else {
      _objc_release();
      if (uVar3 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fa0(param_1);
        _objc_release(uVar4);
      }
      func_0x00010bf13d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar5 = *(ulong *)(param_1 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c22a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar3);
      uVar3 = uVar6;
    }
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb5ff8; end: 108fb610b; -[SCSnapchatterAvatarContainerView _updateAvatarBackgroundPathRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb5ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277eef4);
  uVar2 = param_5;
  _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,param_4 * 0.5,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar4 = *(undefined8 *)(param_5 + (long)_DAT_11277eee0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108fb610c; end: 108fb6143; -[SCSnapchatterAvatarContainerView _newAvatarView] */

undefined * FUN_108fb610c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1a08;
  _objc_opt_new(PTR_PTR_1126b1a08);
  func_0x00010c18b5e0();
  return puVar1;
}



/* Entry: 108fb6144; end: 108fb6217; -[SCSnapchatterAvatarContainerView handleTapOnBitmojiFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6144(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126cc220;
  uVar4 = *(ulong *)(param_1 + _DAT_11277eee4);
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
  func_0x00010bf131e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    param_1 = param_1 + _DAT_11277eef8;
    _objc_loadWeakRetained(param_1);
    uVar3 = uVar1;
    func_0x00010bf131e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd00e0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb6218; end: 108fb62eb; -[SCSnapchatterAvatarContainerView handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6218(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126cc220;
  uVar4 = *(ulong *)(param_1 + _DAT_11277eee4);
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
  func_0x00010bf131e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    param_1 = param_1 + _DAT_11277eef8;
    _objc_loadWeakRetained(param_1);
    uVar3 = uVar1;
    func_0x00010bf131e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd00e0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb62ec; end: 108fb62ef; -[SCSnapchatterAvatarContainerView handleLongPressOnStoryIconFromAvatarView:] */

void FUN_108fb62ec(void)

{
  return;
}



/* Entry: 108fb62f0; end: 108fb62ff; -[SCSnapchatterAvatarContainerView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb62f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eee4);
}



/* Entry: 108fb6300; end: 108fb631f; -[SCSnapchatterAvatarContainerView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6300(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277eef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb6320; end: 108fb6333; -[SCSnapchatterAvatarContainerView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6320(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277eef8,param_3);
  return;
}



/* Entry: 108fb6334; end: 108fb63bf; -[SCSnapchatterAvatarContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6334(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277eef8);
  _objc_storeStrong(param_1 + _DAT_11277eee4,0);
  _objc_storeStrong(param_1 + _DAT_11277eee0,0);
  _objc_storeStrong(param_1 + _DAT_11277eee8,0);
  _objc_storeStrong(param_1 + _DAT_11277eef0,0);
  _objc_storeStrong(param_1 + _DAT_11277eeec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277eedc,0);
  return;
}



/* Entry: 108fb63c0; end: 108fb6497; -[SCSnapchatterVerticalAvatarThumbnailView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb63c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffa38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4730;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277eefc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ef00);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ef00) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb6498; end: 108fb64c7;  */

void FUN_108fb6498(void)

{
  _objc_alloc(PTR_PTR_1126b56f8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb64c8; end: 108fb66ef; -[SCSnapchatterVerticalAvatarThumbnailView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb64c8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ffa38;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126cb048;
  uVar5 = *(ulong *)(param_5 + _DAT_11277ef04);
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
  lVar7 = (long)_DAT_11277eefc;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar6);
  dVar9 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar9 = dVar9 - param_3;
  dVar13 = dVar9 * 0.5;
  func_0x00010bf4c7e0(uVar1);
  dVar12 = param_3;
  func_0x00010b8162e0(dVar13,dVar9,param_3,param_4);
  lVar8 = (long)_DAT_11277ef00;
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  dVar10 = dVar12;
  uVar6 = param_4;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(dVar10,uVar6,uVar4);
  dVar11 = dVar10;
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  dVar14 = dVar11 - dVar10;
  func_0x00010bf20c00(param_5);
  _CGRectGetMinY();
  func_0x00010b816528(dVar14,dVar11,dVar10,uVar6);
  func_0x00010c19f0e0(dVar13,dVar9,dVar12,param_4,*(undefined8 *)(param_5 + lVar7));
  uVar4 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_3 * 0.5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c19f0e0(dVar14,dVar11,dVar10,uVar6,uVar4);
  _objc_release(uVar4);
  return;
}



/* Entry: 108fb66f0; end: 108fb67c3; -[SCSnapchatterVerticalAvatarThumbnailView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108fb66f0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_PTR_1126cb048;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ef04);
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
  uVar5 = *(undefined8 *)(param_5 + _DAT_11277eefc);
  func_0x00010bf20c00(param_5);
  dVar6 = param_3;
  func_0x00010c23d5a0(param_3,param_4,uVar5);
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf4c7e0(uVar1);
  _objc_release(uVar1);
  auVar7._8_8_ = param_4 + param_3 + dVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 108fb67c4; end: 108fb6a2f; -[SCSnapchatterVerticalAvatarThumbnailView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb67c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ef04;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar4 == param_3) {
LAB_108fb6a08:
    _objc_release(uVar1);
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
      if ((uVar1 & 1) != 0) goto LAB_108fb6a18;
    }
    puVar2 = PTR_PTR_1126cb048;
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
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010bf12da0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277eefc;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar1);
    lVar5 = param_1 + _DAT_11277ef08;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar5);
    uVar1 = uVar4;
    func_0x00010c23b620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      lVar6 = (long)_DAT_11277ef00;
      lVar5 = *(long *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc();
        func_0x00010c050900();
        lVar5 = (long)_DAT_11277ef0c;
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        *(undefined **)(param_1 + lVar5) = puVar2;
        _objc_release(uVar3);
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040();
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar3);
      }
      uVar1 = uVar4;
      func_0x00010c23b620(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar3);
      goto LAB_108fb6a08;
    }
  }
  _objc_release(uVar4);
LAB_108fb6a18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb6a30; end: 108fb6a97; -[SCSnapchatterVerticalAvatarThumbnailView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ef10);
  *(undefined8 *)(param_1 + _DAT_11277ef10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11277eefc),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb6a98; end: 108fb6aeb; -[SCSnapchatterVerticalAvatarThumbnailView gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108fb6a98(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b56f8;
  _objc_opt_class(PTR_PTR_1126b56f8);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 108fb6aec; end: 108fb6b97; -[SCSnapchatterVerticalAvatarThumbnailView _handleButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6aec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_11277ef08;
  _objc_loadWeakRetained(lVar1);
  lVar5 = (long)_DAT_11277ef00;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd00e0(lVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fb6b98; end: 108fb6ba7; -[SCSnapchatterVerticalAvatarThumbnailView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb6b98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ef04);
}


