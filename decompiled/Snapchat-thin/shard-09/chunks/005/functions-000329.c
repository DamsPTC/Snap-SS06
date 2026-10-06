/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e20084; end: 106e2008f; -[SCMemoriesCollectionViewTableIndexController setDataSource:] */

void FUN_106e20084(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106e20090; end: 106e200a7; -[SCMemoriesCollectionViewTableIndexController delegate] */

void FUN_106e20090(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e200a8; end: 106e200b3; -[SCMemoriesCollectionViewTableIndexController setDelegate:] */

void FUN_106e200a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106e200b4; end: 106e200bb; -[SCMemoriesCollectionViewTableIndexController topOffet] */

undefined8 FUN_106e200b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e200bc; end: 106e200c3; -[SCMemoriesCollectionViewTableIndexController setTopOffet:] */

void FUN_106e200bc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 106e200c4; end: 106e200ff; -[SCMemoriesCollectionViewTableIndexController .cxx_destruct] */

void FUN_106e200c4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e20100; end: 106e20183; -[SCMemoriesTableIndexController initWithTableIndexConfiguration:] */

undefined1 * FUN_106e20100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d2bf8;
    _objc_alloc();
    func_0x00010c050360();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e20184; end: 106e20317; -[SCMemoriesTableIndexController setupTableIndexLayoutContraintsWithParentScrollView:topOffset:bottomOffset:preferredFrame:] */

void FUN_106e20184(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = param_2;
  dVar6 = param_4;
  func_0x00010c1520e0(param_9);
  dVar4 = param_3;
  _CGRectGetMaxY(param_3,param_4,param_5,param_6);
  dVar3 = param_3;
  _CGRectGetMinY(param_3,param_4,param_5,param_6);
  dVar3 = param_1 + dVar3;
  dVar7 = dVar3 + 5.0;
  func_0x00010bfed3a0(PTR_PTR_1126d2bf8);
  _CGRectGetMaxX(param_3,param_4,param_5,param_6);
  lVar1 = param_7;
  func_0x00010c267ec0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0((((param_3 + -7.0) - dVar5) - dVar6) + -1.0 + dVar3 * -0.5,dVar7,dVar3,
                      ((dVar4 - param_2) + -10.0) - dVar7);
  _objc_release(lVar1);
  lVar1 = param_7;
  func_0x00010c267ec0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  dVar4 = *(double *)(param_7 + 8);
  if (dVar4 == 0.0) {
    uVar2 = *(undefined8 *)(param_7 + 0x30);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c267e80();
    *(double *)(param_7 + 8) = dVar4 + 5.0;
    _objc_release(uVar2);
  }
  *(double *)(param_7 + 0x20) = param_1;
  *(double *)(param_7 + 0x28) = param_2;
  return;
}



/* Entry: 106e20318; end: 106e2032f; -[SCMemoriesTableIndexController setupTableIndexLayoutContraintsWithParentScrollView:topOffset:preferredFrame:] */

void FUN_106e20318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_2,param_3,param_4,param_5,param_6,
             PTR_s_setupTableIndexLayoutContraintsW_112667ff0);
  return;
}



/* Entry: 106e20330; end: 106e205ab; -[SCMemoriesTableIndexController updateTableIndexPositionWithParentScrollView:topOffset:bottomOffset:animate:] */

void FUN_106e20330(double param_1,double param_2,undefined8 param_3,double param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  
  dVar4 = param_1;
  dVar6 = param_2;
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c267ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf896e0();
  _objc_release(uVar1);
  dVar5 = dVar6;
  dVar7 = param_4;
  if ((uVar2 & 1) == 0) {
    func_0x00010c1520e0(param_7);
    dVar5 = dVar6;
    dVar7 = param_4;
    if (1.0 < ABS(param_1 - *(double *)(param_5 + 0x20))) {
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_106e205ac;
      puStack_c8 = &UNK_1108e7be0;
      uStack_c0 = param_5;
      _objc_retain(param_7);
      ppuVar3 = &puStack_e0;
      uStack_b8 = param_7;
      dStack_b0 = param_2;
      dStack_a8 = dVar4;
      dStack_a0 = dVar6;
      uStack_98 = param_3;
      dStack_90 = param_4;
      dStack_88 = param_1;
      _objc_retainBlock();
      *(double *)(param_5 + 0x20) = param_1;
      *(double *)(param_5 + 0x28) = param_2;
      _objc_release(uStack_b8);
      if (ppuVar3 != (undefined **)0x0) goto LAB_106e204a4;
    }
    if (1.0 < ABS(param_2 - *(double *)(param_5 + 0x28))) {
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x106e20690;
      puStack_120 = &UNK_11097eac0;
      uStack_118 = param_5;
      _objc_retain(param_7);
      ppuVar3 = &puStack_138;
      uStack_110 = param_7;
      dStack_108 = param_2;
      dStack_100 = dVar4;
      dStack_f8 = dVar6;
      uStack_f0 = param_3;
      dStack_e8 = param_4;
      _objc_retainBlock();
      *(double *)(param_5 + 0x28) = param_2;
      _objc_release(uStack_110);
      goto LAB_106e204a4;
    }
  }
  ppuVar3 = (undefined **)0x0;
LAB_106e204a4:
  func_0x00010bf20c00(param_7);
  func_0x00010bf4d5e0(param_7);
  dVar4 = 0.0;
  if (dVar5 != dVar7) {
    dVar4 = dVar7;
  }
  func_0x00010bf4cdc0(param_7);
  dVar6 = dVar5;
  func_0x00010bf4d5e0(param_7);
  dVar4 = dVar6 - dVar4;
  uVar1 = param_5;
  func_0x00010c267ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2896e0(dVar5 / dVar4);
  _objc_release(uVar1);
  if (ppuVar3 != (undefined **)0x0) {
    if (param_8 == 0) {
      (*(code *)ppuVar3[2])(ppuVar3);
      uVar1 = param_5;
      func_0x00010c267ec0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(uVar1);
    }
    else {
      dVar6 = 0.0;
      func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,4,ppuVar3,
                          0);
    }
  }
  func_0x00010bf4cdc0(param_7);
  func_0x00010bee5540(dVar6,param_5);
  _objc_release(ppuVar3);
  _objc_release(param_7);
  return;
}



/* Entry: 106e205ac; end: 106e2075b;  */

void FUN_106e205ac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x28));
  _CGRectGetMaxY();
  dVar2 = (param_1 - *(double *)(param_5 + 0x30)) + -10.0;
  dVar5 = dVar2 - *(double *)(param_5 + 0x48);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar3 = dVar2;
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x28));
  _CGRectGetMinY();
  dVar4 = dVar3 + *(double *)(param_5 + 0x58) + 5.0;
  dVar3 = dVar2;
  _CGRectGetMinY(dVar2,dVar4,param_3,param_4);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar2,dVar4,param_3,dVar5 - dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e2075c; end: 106e20763; -[SCMemoriesTableIndexController updateTableIndexPositionWithParentScrollView:topOffset:animate:] */

void FUN_106e2075c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_2,PTR_s_updateTableIndexPositionWithPare_112680500);
  return;
}



/* Entry: 106e20764; end: 106e207db; -[SCMemoriesTableIndexController scrollBarOriginRelativeToTableIndex] */

undefined1  [16] FUN_106e20764(undefined8 param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar2 = param_3;
  func_0x00010c267ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151de0();
  dVar4 = param_2;
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c267ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar3 = *(double *)(param_3 + 8);
  _objc_release(lVar2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + (dVar4 - dVar3);
  return auVar1 << 0x40;
}



/* Entry: 106e207dc; end: 106e2080f; -[SCMemoriesTableIndexController tableIndexDidEndScrolling] */

void FUN_106e207dc(undefined8 param_1)

{
  func_0x00010c267ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e20810; end: 106e208b3; -[SCMemoriesTableIndexController updateTableIndexWithHiddenFrame:padding:] */

void FUN_106e20810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_6;
  func_0x00010c267ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2897a0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010c267ec0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289700(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106e208b4; end: 106e209d7; -[SCMemoriesTableIndexController _updatescrollSpeedWithOffset:] */

void FUN_106e208b4(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = param_2;
  dVar3 = param_1;
  func_0x00010c267ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf896e0();
  _objc_release(uVar1);
  if (param_1 < 0.0) {
    return;
  }
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar1 = param_2;
  func_0x00010c267ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf896e0();
  if ((uVar2 & 1) == 0) {
    dVar4 = *(double *)(param_2 + 0x10);
    _objc_release(uVar1);
    if (dVar4 == 0.0) goto LAB_106e2094c;
    dVar4 = dVar3 - *(double *)(param_2 + 0x18);
    if (dVar4 == 0.0) {
      return;
    }
    uVar1 = param_2;
    func_0x00010c267ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c23b240();
    _objc_release(uVar1);
    if (((uVar2 & 1) == 0) && (ABS(param_1 - *(double *)(param_2 + 0x10)) / dVar4 <= 1900.0))
    goto LAB_106e2094c;
    uVar1 = param_2;
    func_0x00010c267ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2376c0();
  }
  _objc_release(uVar1);
LAB_106e2094c:
  *(double *)(param_2 + 0x10) = param_1;
  *(double *)(param_2 + 0x18) = dVar3;
  return;
}



/* Entry: 106e209d8; end: 106e209df; -[SCMemoriesTableIndexController tableIndexView] */

undefined8 FUN_106e209d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e209e0; end: 106e209eb; -[SCMemoriesTableIndexController .cxx_destruct] */

void FUN_106e209e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 106e209ec; end: 106e20af7; -[SCMemoriesTabsTableIndexController initWithTabsCollectionView:] */

undefined1 * FUN_106e209ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    puVar3 = PTR_PTR_1126d2bf0;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000107e8580c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050360();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c267ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c267ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e20af8; end: 106e20bcf; -[SCMemoriesTabsTableIndexController setTabController:] */

void FUN_106e20af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(param_5 + 0x30) = param_7;
  _objc_release(uVar1);
  uVar1 = 0;
  func_0x00010bfe2b00(0,param_5,param_6,0);
  lVar2 = *(long *)(param_5 + 0x30);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010c267e80(param_5);
    uVar4 = uVar1;
    func_0x00010bfb68e0(lVar2);
    func_0x00010c229740(uVar1,uVar4,param_2,param_3,param_4,uVar3,param_6,lVar2);
    func_0x00010bee1b20(param_5,param_6,lVar2,0);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106e20bd0; end: 106e20c9f; -[SCMemoriesTabsTableIndexController setTabController:withPreferredFrame:] */

void FUN_106e20bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  func_0x00010bfe2b00(0,param_1,param_2,0);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c267e80(param_1);
    func_0x00010c229740(uVar1,param_2,lVar2);
    func_0x00010bee1b20(param_1,param_2,lVar2,0);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e20ca0; end: 106e20ca7; -[SCMemoriesTabsTableIndexController tableIndex] */

void FUN_106e20ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_tableIndexView_1126779d8);
  return;
}



/* Entry: 106e20ca8; end: 106e20d1f; -[SCMemoriesTabsTableIndexController showTableIndexAnimated] */

void FUN_106e20ca8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e20d20;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_38,
                      0);
  return;
}



/* Entry: 106e20d20; end: 106e20d5b;  */

void FUN_106e20d20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e20d5c; end: 106e20e2f; -[SCMemoriesTabsTableIndexController hideTableIndexWithDelay:animated:] */

void FUN_106e20d5c(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
  if (param_4 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fe0(param_1);
    _objc_release(param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e20e30; end: 106e20ea7;  */

void FUN_106e20e30(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) == *(long *)(lStack_18 + 0x28)) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106e20ea8;
    puStack_20 = &UNK_110842e18;
    func_0x00010bf03440(0x3fe0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 106e20ea8; end: 106e20ee3;  */

void FUN_106e20ea8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e20ee4; end: 106e20f2b; -[SCMemoriesTabsTableIndexController updateForScrolling] */

void FUN_106e20ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bee1b20(param_1,param_2,lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e20f2c; end: 106e20f67; -[SCMemoriesTabsTableIndexController didEndScrolling] */

void FUN_106e20f2c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x00010c267e40(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bfe2b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff4000000000000,param_1,PTR_s_hideTableIndexWithDelay_animated_1125d6480,1);
  return;
}



/* Entry: 106e20f68; end: 106e21003; -[SCMemoriesTabsTableIndexController scrollToPercent:] */

void FUN_106e20f68(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  
  *(undefined1 *)(param_5 + 0x20) = 1;
  *(long *)(param_5 + 0x28) = *(long *)(param_5 + 0x28) + 1;
  func_0x00010c21e900(*(undefined8 *)(param_5 + 8),param_6,0);
  lVar1 = *(long *)(param_5 + 0x30);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf4d5e0(lVar1);
    func_0x00010bf20c00(lVar1);
    func_0x00010c1f7a20(param_1 * (param_2 - param_4) + 2.0,*(undefined8 *)(param_5 + 0x30));
    func_0x00010bee1b20(param_5,param_6,lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e21004; end: 106e2105f; -[SCMemoriesTabsTableIndexController getLabelTextWithCompletion:] */

void FUN_106e21004(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be46ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e21060; end: 106e210e3; -[SCMemoriesTabsTableIndexController didFinishLongPressingTableIndex] */

void FUN_106e21060(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  func_0x00010c21e900(*(undefined8 *)(param_1 + 8),param_2,1);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bee1b20(param_1);
    func_0x00010bfe2b00(0x3ff4000000000000,param_1);
    uVar2 = *(ulong *)(param_1 + 0x30);
    _objc_opt_respondsToSelector(uVar2,PTR_s_tableIndexControllerDidStopDragg_1126779b0);
    if ((uVar2 & 1) != 0) {
      func_0x00010c267e20(*(undefined8 *)(param_1 + 0x30));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e210e4; end: 106e2110f; -[SCMemoriesTabsTableIndexController tableIndexOffset] */

double FUN_106e210e4(double param_1,long param_2)

{
  func_0x00010c151e20(*(undefined8 *)(param_2 + 0x30));
  return param_1 + *(double *)(param_2 + 0x38);
}



/* Entry: 106e21110; end: 106e2117f; -[SCMemoriesTabsTableIndexController _updateTableIndexPositionWithParentScrollView:animated:] */

void FUN_106e21110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c267e80(param_1);
  func_0x00010c28ab40(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c28abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0,*(undefined8 *)(param_1 + 0x10),
             PTR_s_updateTableIndexWithHiddenFrame__112680510);
  return;
}



/* Entry: 106e21180; end: 106e2127f; -[SCMemoriesTabsTableIndexController _labelTextForTableIndex] */

void FUN_106e21180(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_3 + 0x30);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c267ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c151de0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c267ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2,lVar1,param_4,uVar2);
    _objc_release(uVar2);
    func_0x00010bf20c00(lVar1);
    _CGRectGetWidth();
    ppuVar3 = *(undefined ***)(param_3 + 0x30);
    func_0x00010c0851a0(0,param_2,param_1,0x403e000000000000,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000107e89650();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106e21280; end: 106e21287; -[SCMemoriesTabsTableIndexController tabController] */

undefined8 FUN_106e21280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e21288; end: 106e2128f; -[SCMemoriesTabsTableIndexController topOffset] */

undefined8 FUN_106e21288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e21290; end: 106e212d7; -[SCMemoriesTabsTableIndexController .cxx_destruct] */

void FUN_106e21290(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e212d8; end: 106e21413; -[SCMemoriesActionMenuScope initWithActionMenuDataModel:sourcePageName:sourceView:viewController:type:subType:memoriesTabType:delegate:dataSource:shouldShowSpinner:] */

undefined8 *
FUN_106e212d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f7098;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    _objc_release(uVar2);
    puVar1[10] = param_4;
    _objc_storeWeak(puVar1 + 5,param_5);
    _objc_storeWeak(puVar1 + 4,param_6);
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    _objc_storeWeak(puVar1 + 2,param_10);
    _objc_storeWeak(puVar1 + 3,param_11);
    *(undefined1 *)(puVar1 + 1) = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e21414; end: 106e2142b; -[SCMemoriesActionMenuScope delegate] */

void FUN_106e21414(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e2142c; end: 106e21443; -[SCMemoriesActionMenuScope dataSource] */

void FUN_106e2142c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e21444; end: 106e2145b; -[SCMemoriesActionMenuScope viewController] */

void FUN_106e21444(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e2145c; end: 106e21473; -[SCMemoriesActionMenuScope sourceView] */

void FUN_106e2145c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e21474; end: 106e2147b; -[SCMemoriesActionMenuScope type] */

undefined8 FUN_106e21474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e2147c; end: 106e21483; -[SCMemoriesActionMenuScope subType] */

undefined8 FUN_106e2147c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e21484; end: 106e2148b; -[SCMemoriesActionMenuScope tabType] */

undefined8 FUN_106e21484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e2148c; end: 106e21493; -[SCMemoriesActionMenuScope actionMenuDataModel] */

undefined8 FUN_106e2148c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106e21494; end: 106e2149b; -[SCMemoriesActionMenuScope sourcePageName] */

undefined8 FUN_106e21494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106e2149c; end: 106e214a3; -[SCMemoriesActionMenuScope shouldShowSpinner] */

undefined1 FUN_106e2149c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e214a4; end: 106e214e7; -[SCMemoriesActionMenuScope .cxx_destruct] */

void FUN_106e214a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106e214e8; end: 106e2158b; -[SCMemoriesActionMenuDataModel initWithItem:snap:] */

undefined1 *
FUN_106e214e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f70a0;
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



/* Entry: 106e2158c; end: 106e215af; -[SCMemoriesActionMenuDataModel copyWithZone:] */

undefined8 FUN_106e2158c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e215b0; end: 106e21623; -[SCMemoriesActionMenuDataModel hash] */

undefined8 * FUN_106e215b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e216a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e216b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106e216b0;
        }
        goto LAB_106e216a4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e216b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e21624; end: 106e216cb; -[SCMemoriesActionMenuDataModel isEqual:] */

long FUN_106e21624(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e216a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e216b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e216b0;
        }
        goto LAB_106e216a4;
      }
    }
    lVar3 = 0;
  }
LAB_106e216b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e216cc; end: 106e216d3; -[SCMemoriesActionMenuDataModel item] */

undefined8 FUN_106e216cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e216d4; end: 106e216db; -[SCMemoriesActionMenuDataModel snap] */

undefined8 FUN_106e216d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e216dc; end: 106e2170b; -[SCMemoriesActionMenuDataModel .cxx_destruct] */

void FUN_106e216dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e2170c; end: 106e2188b; -[SCMemoriesPickerScope initWithScopeDelegate:existingSnapsCount:disabledSnapIds:actionHandler:uiContainer:config:s2rFeature:s2rSubFeature:] */

undefined1 *
FUN_106e2170c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f70a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e2188c; end: 106e218a3; -[SCMemoriesPickerScope scopeDelegate] */

void FUN_106e2188c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e218a4; end: 106e218ab; -[SCMemoriesPickerScope actionHandler] */

undefined8 FUN_106e218a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e218ac; end: 106e218b3; -[SCMemoriesPickerScope uiContainer] */

undefined8 FUN_106e218ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e218b4; end: 106e218bb; -[SCMemoriesPickerScope exisitingSnapsCount] */

undefined8 FUN_106e218b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e218bc; end: 106e218c3; -[SCMemoriesPickerScope disabledSnapIds] */

undefined8 FUN_106e218bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e218c4; end: 106e218cb; -[SCMemoriesPickerScope config] */

undefined8 FUN_106e218c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e218cc; end: 106e218d3; -[SCMemoriesPickerScope s2rFeature] */

undefined8 FUN_106e218cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e218d4; end: 106e218db; -[SCMemoriesPickerScope s2rSubFeature] */

undefined8 FUN_106e218d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e218dc; end: 106e21943; -[SCMemoriesPickerScope .cxx_destruct] */

void FUN_106e218dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106e21944; end: 106e21a47; -[SCMemoriesPickerConfig initWithTitle:allowMultiSelect:limitMultiSnapCameraRollItemLength:showSnapsTab:showCameraRollTab:allowVideoEntries:allowPhotoEntries:dismissOnAppBackground:scrollToLastSelected:startWithCameraRollTabSelected:allowCameraOption:allowSnapDoc:] */

undefined8 *
FUN_106e21944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f70b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined1 *)((long)puVar1 + 0xc) = param_8;
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_9._2_1_;
    *(undefined1 *)(puVar1 + 2) = param_9._3_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0x12) = param_10._1_1_;
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e21a48; end: 106e21a6b; -[SCMemoriesPickerConfig copyWithZone:] */

undefined8 FUN_106e21a48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e21a6c; end: 106e21a73; -[SCMemoriesPickerConfig title] */

undefined8 FUN_106e21a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e21a74; end: 106e21a7b; -[SCMemoriesPickerConfig allowMultiSelect] */

undefined1 FUN_106e21a74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e21a7c; end: 106e21a83; -[SCMemoriesPickerConfig limitMultiSnapCameraRollItemLength] */

undefined1 FUN_106e21a7c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e21a84; end: 106e21a8b; -[SCMemoriesPickerConfig showSnapsTab] */

undefined1 FUN_106e21a84(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e21a8c; end: 106e21a93; -[SCMemoriesPickerConfig showCameraRollTab] */

undefined1 FUN_106e21a8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e21a94; end: 106e21a9b; -[SCMemoriesPickerConfig allowVideoEntries] */

undefined1 FUN_106e21a94(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106e21a9c; end: 106e21aa3; -[SCMemoriesPickerConfig allowPhotoEntries] */

undefined1 FUN_106e21a9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106e21aa4; end: 106e21aab; -[SCMemoriesPickerConfig dismissOnAppBackground] */

undefined1 FUN_106e21aa4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 106e21aac; end: 106e21ab3; -[SCMemoriesPickerConfig scrollToLastSelected] */

undefined1 FUN_106e21aac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 106e21ab4; end: 106e21abb; -[SCMemoriesPickerConfig startWithCameraRollTabSelected] */

undefined1 FUN_106e21ab4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106e21abc; end: 106e21ac3; -[SCMemoriesPickerConfig allowCameraOption] */

undefined1 FUN_106e21abc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106e21ac4; end: 106e21acb; -[SCMemoriesPickerConfig allowSnapDoc] */

undefined1 FUN_106e21ac4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 106e21acc; end: 106e21ad7; -[SCMemoriesPickerConfig .cxx_destruct] */

void FUN_106e21acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e21ad8; end: 106e21b4f; -[SCMemoriesCameraRollCellTappedActionModel initWithItem:] */

undefined1 * FUN_106e21ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f70b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e21b50; end: 106e21b73; -[SCMemoriesCameraRollCellTappedActionModel copyWithZone:] */

undefined8 FUN_106e21b50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e21b74; end: 106e21b7b; -[SCMemoriesCameraRollCellTappedActionModel item] */

undefined8 FUN_106e21b74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e21b7c; end: 106e21b87; -[SCMemoriesCameraRollCellTappedActionModel .cxx_destruct] */

void FUN_106e21b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e21b88; end: 106e21c2b; -[SCMemoriesSnapsTabBannerTrayScope initWithUIContainer:viewModel:] */

undefined1 *
FUN_106e21b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f70c0;
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



/* Entry: 106e21c2c; end: 106e21c33; -[SCMemoriesSnapsTabBannerTrayScope uiContainer] */

undefined8 FUN_106e21c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e21c34; end: 106e21c3b; -[SCMemoriesSnapsTabBannerTrayScope viewModel] */

undefined8 FUN_106e21c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e21c3c; end: 106e21c53; -[SCMemoriesSnapsTabBannerTrayScope delegate] */

void FUN_106e21c3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e21c54; end: 106e21c5f; -[SCMemoriesSnapsTabBannerTrayScope setDelegate:] */

void FUN_106e21c54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106e21c60; end: 106e21c67; -[SCMemoriesSnapsTabBannerTrayScope dreamsViewModel] */

undefined8 FUN_106e21c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e21c68; end: 106e21c97; -[SCMemoriesSnapsTabBannerTrayScope setDreamsViewModel:] */

void FUN_106e21c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e21c98; end: 106e21cdb; -[SCMemoriesSnapsTabBannerTrayScope .cxx_destruct] */

void FUN_106e21c98(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e21cdc; end: 106e21d53; -[SCMemoriesBannerPluginUIConfig initWithShouldKeepAfterTappingCTA:hideBannerWhenScrollDown:useBrandColor:expectedHeight:removeOnEmptyPage:] */

void FUN_106e21cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f70c8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
  }
  return;
}



/* Entry: 106e21d54; end: 106e21d77; -[SCMemoriesBannerPluginUIConfig copyWithZone:] */

undefined8 FUN_106e21d54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e21d78; end: 106e21e07; -[SCMemoriesBannerPluginUIConfig hash] */

ulong * FUN_106e21d78(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_28 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = (ulong)*(byte *)(param_1 + 0xb);
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(char *)((long)puVar1 + 8) != param_3[8] ||
            (*(char *)((long)puVar1 + 9) != param_3[9])) ||
           (*(char *)((long)puVar1 + 10) != param_3[10])))) ||
         (*(char *)((long)puVar1 + 0xb) != param_3[0xb])) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 106e21e08; end: 106e21ef3; -[SCMemoriesBannerPluginUIConfig isEqual:] */

bool FUN_106e21e08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((((uVar2 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106e21ef4; end: 106e21efb; -[SCMemoriesBannerPluginUIConfig shouldKeepAfterTappingCTA] */

undefined1 FUN_106e21ef4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e21efc; end: 106e21f03; -[SCMemoriesBannerPluginUIConfig hideBannerWhenScrollDown] */

undefined1 FUN_106e21efc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


