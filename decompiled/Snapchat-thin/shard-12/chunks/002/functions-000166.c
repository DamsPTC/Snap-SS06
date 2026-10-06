/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ee8538; end: 108ee872f; -[SCSendConfirmationView _scrollToLastItem:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee8538(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a0 [8];
  double dStack_98;
  double dStack_90;
  undefined1 auStack_88 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar2 = (long)_DAT_11277d810;
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar2));
  dVar6 = param_2;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar2));
  dVar7 = dVar6;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  dVar3 = param_1;
  dVar8 = dVar7;
  dVar4 = param_3;
  dVar9 = param_4;
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar2));
  param_1 = param_1 + dVar8;
  dVar4 = dVar3 + dVar4;
  param_4 = param_4 - dVar4;
  uVar5 = param_7;
  func_0x00010c089820(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0();
  _CGRectGetWidth(param_1,dVar7 + dVar3,param_3 - (dVar8 + dVar9),param_4);
  _objc_release(uVar5);
  dVar3 = 0.0;
  if (0.0 <= dVar4 - param_1) {
    dVar3 = dVar4 - param_1;
  }
  _objc_initWeak(auStack_88,param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar5 = 0x3fc999999999999a;
  if (param_8 == 0) {
    uVar5 = 0;
  }
  _objc_copyWeak(auStack_a0,auStack_88);
  dStack_98 = dVar3 - param_2;
  dStack_90 = dVar6;
  _objc_retain(param_9);
  func_0x00010bf03420(uVar5,puVar1);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_9);
  _objc_release(param_7);
  return;
}



/* Entry: 108ee8730; end: 108ee8773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee8730(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1822e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(lVar1 + _DAT_11277d810));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ee8774; end: 108ee8787;  */

void FUN_108ee8774(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ee8780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108ee8788; end: 108ee8873; -[SCSendConfirmationView _truncatedRecipientsListWithCount:] */

void FUN_108ee8788(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be9e040();
  if (param_1 < 2) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar1 = param_3;
    func_0x00010c08fa60();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar1 < (undefined *)0xb) {
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f02f78);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_3;
      func_0x00010c260c20(param_3,param_2,10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f02f78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ee8874; end: 108ee8a2f; -[SCSendConfirmationView _appendViewModels:labelInfos:labelInfoMaps:type:start:] */

double FUN_108ee8874(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                    long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar5 = &uStack_140;
  puVar6 = auStack_100;
  lVar7 = 0x10;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_3,puVar5);
  if (lVar1 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        lVar9 = *(long *)(lStack_138 + lVar7 * 8);
        lVar2 = lVar9;
        func_0x00010c0842e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x00010c0842e0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084700();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_7;
        param_8 = lVar3;
        param_9 = lVar9;
        func_0x00010bdc6980(param_2,param_3,lVar2,param_5,param_6,param_7,lVar3);
        dVar13 = param_1;
        _objc_release(lVar9);
        _objc_release(lVar3);
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar5 = &uStack_140;
      puVar6 = auStack_100;
      lVar7 = 0x10;
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_3,puVar5);
    } while (lVar1 != 0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar11 = dVar13;
  _objc_retain(puVar6);
  _objc_retain(lVar7);
  _objc_retain(param_9);
  puVar4 = PTR_PTR_1126dc710;
  _objc_retain(param_8);
  _objc_retain(puVar5);
  func_0x00010bf34440(puVar4,param_3,puVar5,uVar8);
  puVar4 = PTR_PTR_1126dc728;
  _objc_alloc();
  dVar12 = dVar13;
  func_0x00010c056080(dVar13,dVar13 + dVar11);
  _objc_release(param_8);
  _objc_release(puVar5);
  if ((puVar6 != (undefined1 *)0x0) && (puVar4 != (undefined *)0x0)) {
    func_0x00010befa120(puVar6,param_3,puVar4);
    func_0x00010c29e6e0(PTR_PTR_1126dc718);
    dVar13 = dVar13 + dVar11 + dVar12;
    if ((lVar7 != 0) && (param_9 != 0)) {
      func_0x00010c1d0560(lVar7,param_3,puVar4,param_9);
    }
  }
  _objc_release(puVar4);
  _objc_release(param_9);
  _objc_release(lVar7);
  _objc_release(puVar6);
  return dVar13;
}



/* Entry: 108ee8a30; end: 108ee8b5f; -[SCSendConfirmationView _addDisplayname:labelInfos:labelInfoMaps:type:searchKey:start:itemId:] */

double FUN_108ee8a30(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126dc710;
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010bf34440(puVar1,param_3,param_4,param_7);
  puVar1 = PTR_PTR_1126dc728;
  _objc_alloc();
  dVar3 = param_1;
  func_0x00010c056080(param_1,param_1 + dVar2);
  _objc_release(param_8);
  _objc_release(param_4);
  if ((param_5 != 0) && (puVar1 != (undefined *)0x0)) {
    func_0x00010befa120(param_5,param_3,puVar1);
    func_0x00010c29e6e0(PTR_PTR_1126dc718);
    param_1 = param_1 + dVar2 + dVar3;
    if ((param_6 != 0) && (param_9 != 0)) {
      func_0x00010c1d0560(param_6,param_3,puVar1,param_9);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 108ee8b60; end: 108ee8c53; -[SCSendConfirmationView _selectedRecipientsCount] */

long FUN_108ee8b60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = param_1;
  func_0x00010c22c040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_1;
  func_0x00010bf25220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar5 = param_1;
  func_0x00010bfcf340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  uVar7 = param_1;
  func_0x00010c0ce9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf529e0();
  uVar9 = param_1;
  func_0x00010bf00680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf529e0();
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010befc200(param_1);
  return uVar4 + uVar2 + uVar6 + uVar8 + uVar10 + (param_1 & 0xffffffff);
}



/* Entry: 108ee8c54; end: 108ee8df7; -[SCSendConfirmationView _displayedLabelInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ee8c54(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_11277d830;
  puVar6 = *(undefined **)(param_2 + lVar7);
  if (*(char *)(param_2 + _DAT_11277d7f0) == '\x01') {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed0260(param_2,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126dc728;
    _objc_alloc();
    puVar3 = puVar6;
    func_0x00010c27dd80(puVar6);
    func_0x00010c24d960(puVar6);
    dVar8 = param_1;
    func_0x00010bf940a0(puVar6);
    puVar4 = puVar6;
    func_0x00010c153ba0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056080(param_1,dVar8,puVar5,param_3,puVar3,param_2,puVar4);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_2);
    _objc_release();
    puVar5 = puVar6;
    puVar6 = puVar3;
  }
  else {
    puVar5 = puVar6;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return param_1;
  }
  ___stack_chk_fail();
  if (puVar5[_DAT_11277d7f0] == '\x01') {
    func_0x00010bfb68e0(*(undefined8 *)(puVar5 + _DAT_11277d828));
  }
  else {
    dVar8 = 0.0;
    if (puVar5[_DAT_11277d7f4] != '\x01') goto LAB_108ee8e5c;
    func_0x00010bdc4220(puVar5);
  }
  _CGRectGetMaxX();
  dVar8 = param_1;
LAB_108ee8e5c:
  lVar7 = (long)_DAT_11277d808;
  func_0x00010bf20c00(*(undefined8 *)(puVar5 + lVar7));
  _CGRectGetWidth();
  func_0x00010be9ea20(puVar5);
  _CGRectGetMinX();
  func_0x00010bf20c00(*(undefined8 *)(puVar5 + lVar7));
  return dVar8 + param_1;
}



/* Entry: 108ee8df8; end: 108ee8eaf; -[SCSendConfirmationView _recipientsCollectionViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ee8df8(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  if (*(char *)(param_2 + _DAT_11277d7f0) == '\x01') {
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11277d828));
  }
  else {
    dVar2 = 0.0;
    if (*(char *)(param_2 + _DAT_11277d7f4) != '\x01') goto LAB_108ee8e5c;
    func_0x00010bdc4220(param_2);
  }
  _CGRectGetMaxX();
  dVar2 = param_1;
LAB_108ee8e5c:
  lVar1 = (long)_DAT_11277d808;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  func_0x00010be9ea20(param_2);
  _CGRectGetMinX();
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  return dVar2 + param_1;
}



/* Entry: 108ee8eb0; end: 108ee8eeb; -[SCSendConfirmationView numberOfSectionsInCollectionView:] */

undefined8 FUN_108ee8eb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be05120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ee8eec; end: 108ee8ef3; -[SCSendConfirmationView collectionView:numberOfItemsInSection:] */

undefined8 FUN_108ee8eec(void)

{
  return 1;
}



/* Entry: 108ee8ef4; end: 108ee8fe7; -[SCSendConfirmationView collectionView:cellForItemAtIndexPath:] */

void FUN_108ee8ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc710;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010be05120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_release(param_4);
  uVar4 = param_1;
  func_0x00010c0dfd40(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7220(uVar2,param_2,uVar4,2);
  _objc_release(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ee8fe8; end: 108ee9157; -[SCSendConfirmationView collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108ee8fe8(double param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_9);
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010be05120(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_9;
  func_0x00010c1554e0(param_9);
  _objc_release(param_9);
  lVar3 = lVar1;
  func_0x00010c0dfd40(lVar1,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bfb68e0(param_7);
  dVar4 = param_1;
  dVar5 = param_2;
  dVar6 = param_3;
  dVar7 = param_4;
  func_0x00010bf4c7c0(param_7);
  _objc_release(param_7);
  param_1 = param_1 + dVar5;
  param_3 = param_3 - (dVar5 + dVar7);
  param_4 = param_4 - (dVar4 + dVar6);
  dVar5 = param_1;
  _CGRectGetHeight(param_1,param_2 + dVar4,param_3,param_4);
  if (*(char *)(param_5 + _DAT_11277d7f0) == '\x01') {
    _CGRectGetWidth(param_1,param_2 + dVar4,param_3,param_4);
  }
  else {
    param_1 = dVar5;
    func_0x00010bf34460(PTR_PTR_1126dc710,param_6,lVar3);
  }
  _objc_release(lVar3);
  auVar8._8_8_ = dVar5;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 108ee9158; end: 108ee9223; -[SCSendConfirmationView collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_108ee9158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar1,param_2,param_4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dc718;
    _objc_opt_class(PTR_PTR_1126dc718);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf6e120(param_3,param_2,param_4,puVar2,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ee9224; end: 108ee92ef; -[SCSendConfirmationView collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108ee9224(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_PTR_1126dc718;
  if (param_9 == 0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_3 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    _objc_retain(param_7);
    func_0x00010c29e6e0(puVar1);
    dVar3 = param_1;
    func_0x00010bfb68e0(param_7);
    _objc_release(param_7);
    _CGRectGetHeight(dVar3,param_2,param_3,param_4);
    lVar2 = (long)_DAT_11277d810;
    dVar4 = dVar3;
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar2));
    param_3 = (dVar3 - dVar4) - param_3;
  }
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108ee92f0; end: 108ee9323; -[SCSendConfirmationView collectionView:didSelectItemAtIndexPath:] */

void FUN_108ee92f0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ee9324; end: 108ee9413; -[SCSendConfirmationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee9324(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d82c,0);
  _objc_storeStrong(param_1 + _DAT_11277d80c,0);
  _objc_storeStrong(param_1 + _DAT_11277d810,0);
  _objc_storeStrong(param_1 + _DAT_11277d800,0);
  _objc_storeStrong(param_1 + _DAT_11277d804,0);
  _objc_storeStrong(param_1 + _DAT_11277d7fc,0);
  _objc_storeStrong(param_1 + _DAT_11277d828,0);
  _objc_storeStrong(param_1 + _DAT_11277d814,0);
  _objc_storeStrong(param_1 + _DAT_11277d830,0);
  _objc_storeStrong(param_1 + _DAT_11277d824,0);
  _objc_storeStrong(param_1 + _DAT_11277d81c,0);
  _objc_storeStrong(param_1 + _DAT_11277d820,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d808,0);
  return;
}



/* Entry: 108ee9414; end: 108ee94db; -[SCSendConfirmationViewProvider initWithCircumstanceEngine:delegate:] */

undefined8 *
FUN_108ee9414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  puStack_40 = PTR_PTR_1126ff238;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 3,puVar3);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ee94dc; end: 108ee9553; -[SCSendConfirmationViewProvider _shouldShowSaveButtonInActionBarForMode:] */

long FUN_108ee94dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 1) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
      func_0x00010c14a5a0(PTR_PTR_1126dc730,param_2,*(undefined8 *)(param_1 + 8));
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
    return lVar1;
  }
  return 0;
}



/* Entry: 108ee9554; end: 108ee9557; -[SCSendConfirmationViewProvider willProvideSaveButtonForMode:] */

void FUN_108ee9554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb65b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldShowSaveButtonInActionBar_11258b310);
  return;
}



/* Entry: 108ee9558; end: 108ee9647; -[SCSendConfirmationViewProvider createConfirmationViewWithFrame:showHintLabel:sendToCTAButtonEnabled:saveButtonEnabled:saveButtonPromise:mode:] */

void FUN_108ee9558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010beb65a0(param_5,param_6,param_11);
  puVar1 = PTR_PTR_1126b5158;
  _objc_alloc(PTR_PTR_1126b5158);
  func_0x00010c014d20(param_1,param_2,param_3,param_4);
  _objc_release(param_10);
  _objc_release(param_9);
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010c18b5e0(puVar1,param_6,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ee9648; end: 108ee965f; -[SCSendConfirmationViewProvider delegate] */

void FUN_108ee9648(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee9660; end: 108ee9697; -[SCSendConfirmationViewProvider .cxx_destruct] */

void FUN_108ee9660(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ee9698; end: 108ee96f7;  */

void FUN_108ee9698(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2298;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2298,
                      &PTR____CFConstantStringClassReference_110f02f98,0);
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



/* Entry: 108ee96f8; end: 108ee97bf; -[SCSendConfirmationLabelInfo initWithType:start:end:displayName:searchKey:] */

undefined1 *
FUN_108ee96f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ff240;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108ee97c0; end: 108ee97e3; -[SCSendConfirmationLabelInfo copyWithZone:] */

undefined8 FUN_108ee97c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ee97e4; end: 108ee98a7; -[SCSendConfirmationLabelInfo hash] */

long * FUN_108ee97e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar4 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 8);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == (long *)param_3) {
LAB_108ee99a0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ee99ac;
    puVar8 = (undefined1 *)plVar4;
    _objc_opt_class(plVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)plVar4 + 8) == *(long *)(param_3 + 8))) {
      dVar10 = ABS(*(double *)((long)plVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar9 = ABS(*(double *)((long)plVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)plVar4 + 0x18) - *(double *)(param_3 + 0x18));
        dVar9 = ABS(*(double *)((long)plVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if ((bVar1) &&
           ((lVar6 = *(long *)((long)plVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined1 **)((long)plVar4 + 0x28);
          if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_108ee99ac;
          }
          goto LAB_108ee99a0;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_108ee99ac:
  _objc_release(param_3);
  return (long *)puVar8;
}



/* Entry: 108ee98a8; end: 108ee99c7; -[SCSendConfirmationLabelInfo isEqual:] */

long FUN_108ee98a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ee99a0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ee99ac;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_108ee99ac;
          }
          goto LAB_108ee99a0;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108ee99ac:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108ee99c8; end: 108ee99cf; -[SCSendConfirmationLabelInfo type] */

undefined8 FUN_108ee99c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ee99d0; end: 108ee99d7; -[SCSendConfirmationLabelInfo start] */

undefined8 FUN_108ee99d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ee99d8; end: 108ee99df; -[SCSendConfirmationLabelInfo end] */

undefined8 FUN_108ee99d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ee99e0; end: 108ee99e7; -[SCSendConfirmationLabelInfo displayName] */

undefined8 FUN_108ee99e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ee99e8; end: 108ee99ef; -[SCSendConfirmationLabelInfo searchKey] */

undefined8 FUN_108ee99e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ee99f0; end: 108ee9a1f; -[SCSendConfirmationLabelInfo .cxx_destruct] */

void FUN_108ee99f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108ee9a20; end: 108ee9a93; -[SCSendToPreviewActionBarConfigurationServices initWithConfiguration:] */

undefined1 * FUN_108ee9a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff248;
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



/* Entry: 108ee9a94; end: 108ee9a9b; -[SCSendToPreviewActionBarConfigurationServices configuration] */

undefined8 FUN_108ee9a94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ee9a9c; end: 108ee9aa7; -[SCSendToPreviewActionBarConfigurationServices .cxx_destruct] */

void FUN_108ee9a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ee9aa8; end: 108ee9b4b; -[SCMatchaSendToConfigurationAdaptor initWithLegacySendToScope:mapStoryPostingComplianceChecker:] */

undefined1 *
FUN_108ee9aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff250;
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



/* Entry: 108ee9b4c; end: 108ee9b93; -[SCMatchaSendToConfigurationAdaptor previewConfiguration] */

void FUN_108ee9b4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c112440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108eed9fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ee9b94; end: 108ee9c17; -[SCMatchaSendToConfigurationAdaptor recipientConfigurationWithFriendsInThisSnapUserIdsObservable:] */

void FUN_108ee9b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0810;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfebbc0();
  func_0x00010c046120(puVar1,param_2,uVar3,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ee9c18; end: 108ee9fcb; -[SCMatchaSendToConfigurationAdaptor storyConfiguration] */

void FUN_108ee9c18(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfebc00();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c275800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar27 = PTR_PTR_1126c33f0;
    _objc_alloc();
    uVar1 = uVar2;
    func_0x00010c0ee480();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0ee460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c249880();
    uVar6 = param_1;
    func_0x00010bdca260();
    uVar7 = *(ulong *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c078100();
    uVar9 = *(ulong *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0782e0();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075080();
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07de40();
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c06d080();
    uVar15 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071620();
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07c2a0();
    uVar17 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06dce0();
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c081ae0();
    uVar20 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b5a0();
    uVar21 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a240();
    uVar22 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010c23f6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292dc0();
    uVar25 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0326a0(puVar27,param_2,uVar1,uVar3,uVar5 & 0xffffffff,uVar6 & 0xffffffff,
                        uVar8 & 0xffffffff,uVar10 & 0xffffffff,0x101,(char)uVar14,(char)uVar19);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 108ee9fcc; end: 108ee9fd3; -[SCMatchaSendToConfigurationAdaptor shareSheetConfiguration] */

void FUN_108ee9fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_shareSheetConfiguration_1126685d8);
  return;
}



/* Entry: 108ee9fd4; end: 108eea16f; -[SCMatchaSendToConfigurationAdaptor attribution] */

void FUN_108ee9fd4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0767e0();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0cba00();
    if (uVar2 == 0x17) {
      uVar2 = uVar1;
      func_0x00010c075080();
      uVar12 = 6;
      if ((int)uVar2 == 0) {
        uVar12 = 7;
      }
    }
    else {
      uVar12 = 0xffffffffffffffff;
    }
  }
  else {
    uVar12 = 1;
  }
  puVar3 = PTR_PTR_1126b0818;
  _objc_alloc(PTR_PTR_1126b0818);
  uVar2 = uVar1;
  func_0x00010c15d5c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c243400(uVar1);
  uVar5 = uVar1;
  func_0x00010c0cba00(uVar1);
  uVar6 = uVar1;
  func_0x00010c247980(uVar1);
  uVar7 = uVar1;
  func_0x00010bf31200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c22f9a0();
  func_0x00010c044540(puVar3,param_2,uVar2,uVar4,uVar5,uVar12,uVar6,uVar7,uVar8,0,uVar9,uVar10,
                      (char)uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108eea170; end: 108eea177; -[SCMatchaSendToConfigurationAdaptor contentConfiguration] */

void FUN_108eea170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_contentConfiguration_1125b09e8);
  return;
}



/* Entry: 108eea178; end: 108eea17f; -[SCMatchaSendToConfigurationAdaptor showSendToTray] */

void FUN_108eea178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showSendToTray_11266c158);
  return;
}



/* Entry: 108eea180; end: 108eea37b; -[SCMatchaSendToConfigurationAdaptor _allowPostingToMapStories] */

void FUN_108eea180(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bf2d120();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07b5a0();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06dce0();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c243400();
  if (lVar5 == 0x1d) {
LAB_108eea214:
    _objc_release(lVar4);
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c243400();
    _objc_release(lVar6);
    _objc_release(lVar4);
    if (lVar5 == 0x1a) {
      return;
    }
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c243400();
    if (lVar5 == 6) {
      _objc_release(lVar4);
    }
    else {
      lVar6 = *(long *)(param_1 + 8);
      func_0x00010bf0e960();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c243400();
      _objc_release(lVar6);
      _objc_release(lVar4);
      if (lVar5 != 7) {
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c23f6e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 8);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c23f6e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51c80();
          _CLLocationCoordinate2DIsValid();
          _objc_release(uVar7);
          _objc_release(uVar8);
          _objc_release(lVar5);
          _objc_release(lVar4);
          return;
        }
        goto LAB_108eea214;
      }
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0e960(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c249880();
    _objc_release(uVar7);
  }
  return;
}



/* Entry: 108eea37c; end: 108eea3ab; -[SCMatchaSendToConfigurationAdaptor .cxx_destruct] */

void FUN_108eea37c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eea3ac; end: 108eea4bf;  */

void FUN_108eea3ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b3568;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  puVar3 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  uVar4 = param_1;
  func_0x00010c084700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d4e0(puVar3);
  _objc_release(param_2);
  uVar5 = param_1;
  func_0x00010c0842e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c01bce0(puVar2);
  func_0x00010c03d400(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eea4c0; end: 108eea87b;  */

void FUN_108eea4c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bfb8920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010c11e2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bf4a3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010c294720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010c0ce9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010c22c040(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bfcf340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bf25220();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar15;
  func_0x000107c31908();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010befc200();
  if ((int)lVar15 != 0) {
    lVar10 = param_1;
    func_0x00010c0d4bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c067fc0();
    lVar15 = lVar11 + -1;
    if (6 < lVar11 - 2U) {
      lVar15 = 0;
    }
    _objc_release(lVar10);
    puVar12 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    func_0x00010c03d4e0();
    puVar13 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    puVar14 = puVar13;
    func_0x000108f57dfc();
    _objc_retainAutoreleasedReturnValue();
    FUN_108f42d24(lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0(puVar13);
    _objc_release(lVar15);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    func_0x00010befa120(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  puVar12 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108eea87c; end: 108eeb0bb;  */

void FUN_108eea87c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c084700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    puVar4 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    lVar1 = param_2;
    func_0x00010c084700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d4e0(puVar4);
    lVar2 = param_2;
    func_0x00010c0842e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108eeb0bc; end: 108eebc47;  */

undefined * FUN_108eeb0bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined *puStack_170;
  long lStack_140;
  undefined *puStack_138;
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
  _objc_retain();
  lVar19 = param_1;
  func_0x00010bf529e0();
  if (lVar19 == 0) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    lStack_140 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
    if (lStack_140 == 0) {
      puStack_170 = (undefined *)0x0;
    }
    else {
      puStack_170 = (undefined *)0x0;
      lVar19 = *plStack_120;
      do {
        lVar20 = 0;
        do {
          if (*plStack_120 != lVar19) {
            _objc_enumerationMutation(param_1);
          }
          uVar21 = *(ulong *)(lStack_128 + lVar20 * 8);
          puVar9 = PTR_PTR_1126b5170;
          _objc_alloc(PTR_PTR_1126b5170);
          uVar10 = uVar21;
          func_0x00010c122a80(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar21;
          func_0x00010c122a80(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar13;
          func_0x00010c0d5140();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar21;
          func_0x00010c122a80(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c020280(puVar9,param_2,uVar12,uVar14,uVar17);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          uVar10 = uVar21;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c0720c0();
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          puVar18 = puVar1;
          if ((int)uVar13 == 0) {
            uVar10 = uVar21;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010c0720c0();
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
            puVar18 = puVar5;
            if ((int)uVar13 != 0) goto LAB_108eeb438;
            uVar10 = uVar21;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010c0720c0();
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)uVar13 == 0) {
              uVar10 = uVar21;
              func_0x00010c122a80();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar10;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010c15ab60();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar12;
              func_0x00010c0720c0();
              _objc_release(uVar12);
              _objc_release(uVar11);
              _objc_release(uVar10);
              puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if ((int)uVar13 == 0) {
                uVar10 = uVar21;
                func_0x00010c122a80();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar10;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar12;
                func_0x00010c0720c0();
                _objc_release(uVar12);
                _objc_release(uVar11);
                _objc_release(uVar10);
                puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if ((int)uVar13 == 0) {
                  uVar10 = uVar21;
                  func_0x00010c122a80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar10;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar11;
                  func_0x00010c15ab60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar12;
                  func_0x00010c0720c0();
                  _objc_release(uVar12);
                  _objc_release(uVar11);
                  _objc_release(uVar10);
                  puVar18 = puVar8;
                  if ((int)uVar13 == 0) {
                    uVar10 = uVar21;
                    func_0x00010c122a80();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar10;
                    func_0x00010bfe5ec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = uVar11;
                    func_0x00010c15ab60();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = uVar12;
                    func_0x00010c0720c0();
                    _objc_release(uVar12);
                    _objc_release(uVar11);
                    _objc_release(uVar10);
                    puVar18 = puVar6;
                    if ((int)uVar13 == 0) {
                      uVar10 = uVar21;
                      func_0x00010c122a80();
                      _objc_retainAutoreleasedReturnValue();
                      uVar11 = uVar10;
                      func_0x00010bfe5ec0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar12 = uVar11;
                      func_0x00010c15ab60();
                      _objc_retainAutoreleasedReturnValue();
                      uVar13 = uVar12;
                      func_0x00010c0720c0();
                      _objc_release(uVar12);
                      _objc_release(uVar11);
                      _objc_release(uVar10);
                      puVar18 = puVar7;
                      if ((int)uVar13 == 0) {
                        uVar10 = uVar21;
                        func_0x00010c122a80();
                        _objc_retainAutoreleasedReturnValue();
                        uVar11 = uVar10;
                        func_0x00010bfe5ec0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar12 = uVar11;
                        func_0x00010c15ab60();
                        _objc_retainAutoreleasedReturnValue();
                        uVar13 = uVar12;
                        func_0x00010c0720c0();
                        _objc_release(uVar12);
                        _objc_release(uVar11);
                        _objc_release(uVar10);
                        if ((int)uVar13 == 0) {
                          uVar10 = uVar21;
                          func_0x00010c122a80();
                          _objc_retainAutoreleasedReturnValue();
                          uVar11 = uVar10;
                          func_0x00010bfe5ec0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar12 = uVar11;
                          func_0x00010c15ab60();
                          _objc_retainAutoreleasedReturnValue();
                          uVar13 = uVar12;
                          func_0x00010c0720c0();
                          _objc_release(uVar12);
                          _objc_release(uVar11);
                          _objc_release(uVar10);
                          if ((int)uVar13 == 0) {
                            uVar10 = uVar21;
                            func_0x00010c122a80();
                            _objc_retainAutoreleasedReturnValue();
                            uVar11 = uVar10;
                            func_0x00010bfe5ec0();
                            _objc_retainAutoreleasedReturnValue();
                            uVar12 = uVar11;
                            func_0x00010c15ab60();
                            _objc_retainAutoreleasedReturnValue();
                            uVar13 = uVar12;
                            func_0x00010c0720c0();
                            _objc_release(uVar12);
                            _objc_release(uVar11);
                            _objc_release(uVar10);
                            if ((int)uVar13 == 0) {
                              uVar10 = uVar21;
                              func_0x00010c122a80();
                              _objc_retainAutoreleasedReturnValue();
                              uVar11 = uVar10;
                              func_0x00010bfe5ec0();
                              _objc_retainAutoreleasedReturnValue();
                              uVar12 = uVar11;
                              func_0x00010c15ab60();
                              _objc_retainAutoreleasedReturnValue();
                              uVar13 = uVar12;
                              func_0x00010c0720c0();
                              _objc_release(uVar12);
                              _objc_release(uVar11);
                              _objc_release(uVar10);
                              if ((int)uVar13 == 0) {
                                uVar10 = uVar21;
                                func_0x00010c122a80();
                                _objc_retainAutoreleasedReturnValue();
                                uVar11 = uVar10;
                                func_0x00010bfe5ec0();
                                _objc_retainAutoreleasedReturnValue();
                                uVar12 = uVar11;
                                func_0x00010c15ab60();
                                _objc_retainAutoreleasedReturnValue();
                                uVar13 = uVar12;
                                func_0x00010c0720c0();
                                _objc_release(uVar12);
                                _objc_release(uVar11);
                                _objc_release(uVar10);
                                if ((int)uVar13 == 0) {
                                  uVar10 = uVar21;
                                  func_0x00010c122a80();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar11 = uVar10;
                                  func_0x00010bfe5ec0();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar12 = uVar11;
                                  func_0x00010c15ab60();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar13 = uVar12;
                                  func_0x00010c0720c0();
                                  _objc_release(uVar12);
                                  _objc_release(uVar11);
                                  _objc_release(uVar10);
                                  if ((uVar13 & 1) != 0) goto LAB_108eeb440;
                                  uVar10 = uVar21;
                                  func_0x00010c122a80();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar11 = uVar10;
                                  func_0x00010bfe5ec0();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar12 = uVar11;
                                  func_0x00010c15ab60();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar13 = uVar12;
                                  func_0x00010c0720c0();
                                  _objc_release(uVar12);
                                  _objc_release(uVar11);
                                  _objc_release(uVar10);
                                  puVar18 = puVar2;
                                  if ((int)uVar13 == 0) {
                                    uVar10 = uVar21;
                                    func_0x00010c122a80();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar11 = uVar10;
                                    func_0x00010bfe5ec0();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar12 = uVar11;
                                    func_0x00010c15ab60();
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar13 = uVar12;
                                    func_0x00010c0720c0();
                                    _objc_release(uVar12);
                                    _objc_release(uVar11);
                                    _objc_release(uVar10);
                                    puVar18 = puVar6;
                                    if ((int)uVar13 == 0) {
                                      uVar10 = uVar21;
                                      func_0x00010c122a80();
                                      _objc_retainAutoreleasedReturnValue();
                                      uVar11 = uVar10;
                                      func_0x00010bfe5ec0();
                                      _objc_retainAutoreleasedReturnValue();
                                      uVar12 = uVar11;
                                      func_0x00010c15ab60();
                                      _objc_retainAutoreleasedReturnValue();
                                      uVar13 = uVar12;
                                      func_0x00010c0720c0();
                                      _objc_release(uVar12);
                                      _objc_release(uVar11);
                                      _objc_release(uVar10);
                                      if ((uVar13 & 1) == 0) {
                                        func_0x00010c122a80();
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar10 = uVar21;
                                        func_0x00010bfe5ec0();
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar11 = uVar10;
                                        func_0x00010c15ab60();
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar12 = uVar11;
                                        func_0x00010c0720c0();
                                        _objc_release(uVar11);
                                        _objc_release(uVar10);
                                        _objc_release(uVar21);
                                        puVar18 = puVar8;
                                        if ((int)uVar12 != 0) goto LAB_108eeb438;
                                      }
                                      goto LAB_108eeb440;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_108eeb438;
                }
                FUN_108f43540(uVar21);
                FUN_108eebc48();
                func_0x00010c0df7c0(puVar18,param_2,uVar21);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puStack_170);
                puStack_170 = puVar18;
              }
              else {
                FUN_108f43540(uVar21);
                FUN_108eebc48();
                func_0x00010c0df7c0(puVar18,param_2,uVar21);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puStack_170);
                puStack_170 = puVar18;
              }
            }
            else {
              FUN_108f43540(uVar21);
              FUN_108eebc48();
              func_0x00010c0df7c0(puVar18,param_2,uVar21);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puStack_170);
              puStack_170 = puVar18;
            }
          }
          else {
LAB_108eeb438:
            func_0x00010befa120(puVar18,param_2,puVar9);
          }
LAB_108eeb440:
          _objc_release(puVar9);
          lVar20 = lVar20 + 1;
        } while (lStack_140 != lVar20);
        lStack_140 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lStack_140 != 0);
    }
    _objc_release(param_1);
    puStack_138 = PTR_PTR_1126d4c80;
    _objc_alloc();
    func_0x00010bff2440();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puStack_170);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = (undefined *)0x0;
    if (param_1 - 1U < 7) {
      puVar1 = (undefined *)(param_1 + 1);
    }
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
  return puStack_138;
}



/* Entry: 108eebc48; end: 108eebc57;  */

long FUN_108eebc48(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 - 1U < 7) {
    lVar1 = param_1 + 1;
  }
  return lVar1;
}



/* Entry: 108eebc58; end: 108eebf8b; -[SCMatchaSendToWorkflow initWithGroupsDataFetcher:legacySendToScope:sendToScopeExposer:sendToScopeServices:snapchattersDataFetcher:snapchattersDataSearcher:snapchattersSynchronousFetcher:userInfoProvider:snapchatterPublicInfoFetcher:customStoriesDataFetcher:customStoriesDataMutator:myStoriesDataCoordinator:publicStoriesDataCoordinator:circumstanceEngine:selectionStoriesLastPostTimeRepository:mapStoryPostingComplianceChecker:snapProProfilesProvider:storyRankingConfigurationService:] */

undefined8 *
FUN_108eebc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126ff258;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    func_0x000108f3dfec();
    puVar3 = PTR_PTR_1126c33b8;
    _objc_alloc();
    func_0x00010c019420();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dc738;
    _objc_alloc();
    func_0x00010c022420();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108eebf8c; end: 108eec237; -[SCMatchaSendToWorkflow begin] */

void FUN_108eebf8c(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c259540(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15a7e0(uVar4,param_2,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c105f80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bfba4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122b00(uVar10,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1109c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4c100(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c259540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239cc0();
  func_0x00010bf23ee0(uVar11,param_2,uVar2,puVar1,uVar4,uVar5,uVar10,uVar6,uVar7,uVar8,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar11);
  puVar9 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108eec238; end: 108eec5b3; -[SCMatchaSendToWorkflow didSendWithSelectionState:] */

void FUN_108eec238(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = param_3;
  func_0x00010c272d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_70,param_1);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c159d20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0d9720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c15a280();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c24b0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c24b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22eae0();
  uVar11 = param_3;
  func_0x00010c22a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c15a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bfcd340();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c1595c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c08f580(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
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
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 108eec5b4; end: 108eec5fb;  */

void FUN_108eec5b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4a120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108eec5fc; end: 108eec753; -[SCMatchaSendToWorkflow didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_108eec5fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010c2bd480();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      _objc_opt_respondsToSelector();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010c2bd480(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08f540();
        _objc_release(uVar5);
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2bd480(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08f4c0();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c27ece0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b3800();
      _objc_release(uVar5);
    }
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eec754; end: 108eec7db; -[SCMatchaSendToWorkflow trayDidChangeExpansion:] */

void FUN_108eec754(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2bd480(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08f520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108eec7dc; end: 108eec897; -[SCMatchaSendToWorkflow _legacySendToScopeWillSendSelection:] */

void FUN_108eec7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2bd480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08f560();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eec898; end: 108eec8eb; -[SCMatchaSendToWorkflow .cxx_destruct] */

void FUN_108eec898(long param_1)

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



/* Entry: 108eec8ec; end: 108eec9c3; -[SCSendToConfirmationItemViewModel initWithItemKey:itemDisplayName:selectionTypeIdentifier:] */

undefined1 *
FUN_108eec8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ff260;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eec9c4; end: 108eec9e7; -[SCSendToConfirmationItemViewModel copyWithZone:] */

undefined8 FUN_108eec9c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108eec9e8; end: 108eeca67; -[SCSendToConfirmationItemViewModel hash] */

undefined8 * FUN_108eec9e8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108eecb00:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108eecb0c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108eecb0c;
          }
          goto LAB_108eecb00;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108eecb0c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108eeca68; end: 108eecb27; -[SCSendToConfirmationItemViewModel isEqual:] */

long FUN_108eeca68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108eecb00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108eecb0c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108eecb0c;
          }
          goto LAB_108eecb00;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108eecb0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108eecb28; end: 108eecb2f; -[SCSendToConfirmationItemViewModel itemKey] */

undefined8 FUN_108eecb28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108eecb30; end: 108eecb37; -[SCSendToConfirmationItemViewModel itemDisplayName] */

undefined8 FUN_108eecb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108eecb38; end: 108eecb3f; -[SCSendToConfirmationItemViewModel selectionTypeIdentifier] */

undefined8 FUN_108eecb38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108eecb40; end: 108eecb7b; -[SCSendToConfirmationItemViewModel .cxx_destruct] */

void FUN_108eecb40(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eecb7c; end: 108eecdaf; -[SCSendToConfirmationViewModel initWithAddToMyStory:myStoryPrivacyOverride:myStoryCustomTTL:friendRecipients:quickAddRecipients:contactSnapchatterRecipients:usernameSearchedRecipients:mischiefsSelected:sharedStoriesSelected:groupStoriesSelected:businessProfilesSelected:] */

undefined8 *
FUN_108eecb7c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ff268;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108eecdb0; end: 108eecdd3; -[SCSendToConfirmationViewModel copyWithZone:] */

undefined8 FUN_108eecdb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108eecdd4; end: 108eeceaf; -[SCSendToConfirmationViewModel hash] */

ulong * FUN_108eecdd4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_80;
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
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_108eed000:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108eed00c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
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
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                        if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_108eed00c;
                        }
                        goto LAB_108eed000;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108eed00c:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 108eeceb0; end: 108eed027; -[SCSendToConfirmationViewModel isEqual:] */

long FUN_108eeceb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108eed000:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108eed00c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
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
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_108eed00c;
                        }
                        goto LAB_108eed000;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108eed00c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108eed028; end: 108eed02f; -[SCSendToConfirmationViewModel addToMyStory] */

undefined1 FUN_108eed028(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108eed030; end: 108eed037; -[SCSendToConfirmationViewModel myStoryPrivacyOverride] */

undefined8 FUN_108eed030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108eed038; end: 108eed03f; -[SCSendToConfirmationViewModel myStoryCustomTTL] */

undefined8 FUN_108eed038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108eed040; end: 108eed047; -[SCSendToConfirmationViewModel friendRecipients] */

undefined8 FUN_108eed040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108eed048; end: 108eed04f; -[SCSendToConfirmationViewModel quickAddRecipients] */

undefined8 FUN_108eed048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108eed050; end: 108eed057; -[SCSendToConfirmationViewModel contactSnapchatterRecipients] */

undefined8 FUN_108eed050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108eed058; end: 108eed05f; -[SCSendToConfirmationViewModel usernameSearchedRecipients] */

undefined8 FUN_108eed058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108eed060; end: 108eed067; -[SCSendToConfirmationViewModel mischiefsSelected] */

undefined8 FUN_108eed060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108eed068; end: 108eed06f; -[SCSendToConfirmationViewModel sharedStoriesSelected] */

undefined8 FUN_108eed068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108eed070; end: 108eed077; -[SCSendToConfirmationViewModel groupStoriesSelected] */

undefined8 FUN_108eed070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108eed078; end: 108eed07f; -[SCSendToConfirmationViewModel businessProfilesSelected] */

undefined8 FUN_108eed078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108eed080; end: 108eed10f; -[SCSendToConfirmationViewModel .cxx_destruct] */

void FUN_108eed080(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108eed110; end: 108eed12b; +[SCSendToConfirmationViewModelBuilder sendToConfirmationViewModel] */

void FUN_108eed110(void)

{
  _objc_alloc_init(PTR_PTR_1126b5178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eed12c; end: 108eed43b; +[SCSendToConfirmationViewModelBuilder sendToConfirmationViewModelFromExistingSendToConfirmationViewModel:] */

void FUN_108eed12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  
  puVar1 = PTR_PTR_1126b5178;
  _objc_retain(param_3);
  func_0x00010c15d0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befc200(param_3);
  puVar3 = puVar1;
  func_0x00010c2a7f20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d4ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2b4460(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0d4bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2b4420(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bfb8920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2ae700(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c11e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2b6660(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf4a3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2aace0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c294720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2bc460(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0ce9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2b4080(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c22c040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2b8640(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bfcf340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2aefa0(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010bf25220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar22 = puVar20;
  func_0x00010c2a9b00(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 108eed43c; end: 108eed493; -[SCSendToConfirmationViewModelBuilder build] */

void FUN_108eed43c(void)

{
  _objc_alloc(PTR_PTR_1126d4c80);
  func_0x00010bff2440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eed494; end: 108eed49b; -[SCSendToConfirmationViewModelBuilder withAddToMyStory:] */

void FUN_108eed494(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108eed49c; end: 108eed4d3; -[SCSendToConfirmationViewModelBuilder withMyStoryPrivacyOverride:] */

long FUN_108eed49c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed4d4; end: 108eed50b; -[SCSendToConfirmationViewModelBuilder withMyStoryCustomTTL:] */

long FUN_108eed4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed50c; end: 108eed543; -[SCSendToConfirmationViewModelBuilder withFriendRecipients:] */

long FUN_108eed50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed544; end: 108eed57b; -[SCSendToConfirmationViewModelBuilder withQuickAddRecipients:] */

long FUN_108eed544(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed57c; end: 108eed5b3; -[SCSendToConfirmationViewModelBuilder withContactSnapchatterRecipients:] */

long FUN_108eed57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed5b4; end: 108eed5eb; -[SCSendToConfirmationViewModelBuilder withUsernameSearchedRecipients:] */

long FUN_108eed5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed5ec; end: 108eed623; -[SCSendToConfirmationViewModelBuilder withMischiefsSelected:] */

long FUN_108eed5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed624; end: 108eed65b; -[SCSendToConfirmationViewModelBuilder withSharedStoriesSelected:] */

long FUN_108eed624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed65c; end: 108eed693; -[SCSendToConfirmationViewModelBuilder withGroupStoriesSelected:] */

long FUN_108eed65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed694; end: 108eed6cb; -[SCSendToConfirmationViewModelBuilder withBusinessProfilesSelected:] */

long FUN_108eed694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eed6cc; end: 108eed75b; -[SCSendToConfirmationViewModelBuilder .cxx_destruct] */

void FUN_108eed6cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108eed75c; end: 108eed7c7; -[SCLegacyPreviewViewControllerShim initWithLegacyMediaView:] */

undefined1 * FUN_108eed75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


