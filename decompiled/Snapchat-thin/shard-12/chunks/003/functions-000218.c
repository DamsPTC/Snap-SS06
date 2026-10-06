/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fc01a0; end: 108fc01a7; -[SCCollectionViewSectionWithDescriptor section] */

undefined8 FUN_108fc01a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fc01a8; end: 108fc01af; -[SCCollectionViewSectionWithDescriptor descriptor] */

undefined8 FUN_108fc01a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fc01b0; end: 108fc01df; -[SCCollectionViewSectionWithDescriptor .cxx_destruct] */

void FUN_108fc01b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fc01e0; end: 108fc0253; -[SCCollectionViewSuspendedQueryResultController initWithSectionController:] */

undefined1 * FUN_108fc01e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffb10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fc0254; end: 108fc02df; -[SCCollectionViewSuspendedQueryResultController updateSuspendedQueryResultDataModel:] */

void FUN_108fc0254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c155be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be79420(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108fc02e0; end: 108fc030f; -[SCCollectionViewSuspendedQueryResultController cleanSuspendedQueryResultDataModel] */

void FUN_108fc02e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fc0310; end: 108fc0337; -[SCCollectionViewSuspendedQueryResultController suspenedQueryResultDataModel] */

void FUN_108fc0310(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fc0338; end: 108fc034f; -[SCCollectionViewSuspendedQueryResultController suspendedQueryResultSectionWithConfigurations] */

void FUN_108fc0338(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fc0350; end: 108fc0403; -[SCCollectionViewSuspendedQueryResultController _prepareSuspendedConfiguredSectionsFromSectionDescriptors:] */

void FUN_108fc0350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf6e140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108fc0404;
  puStack_40 = &UNK_110ad1780;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010bd86420(uVar1,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108fc0404; end: 108fc051b;  */

void FUN_108fc0404(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_setUp_112664a70);
  if ((uVar1 & 1) != 0) {
    func_0x00010c21c120(param_2);
  }
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_applyConfiguration__11259fa20);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf081e0(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126b1308;
  _objc_alloc(PTR_PTR_1126b1308);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042ce0(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108fc051c; end: 108fc0557; -[SCCollectionViewSuspendedQueryResultController .cxx_destruct] */

void FUN_108fc051c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fc0558; end: 108fc06db;  */

long FUN_108fc0558(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c1554e0();
  uVar9 = param_2;
  func_0x00010bf529e0();
  if (uVar2 < uVar9) {
    func_0x00010c1554e0(param_1);
    uVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar9 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (uVar9 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        uVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar3 = *(ulong *)(uVar10 * 8);
          if (uVar3 == uVar2) goto LAB_108fc0680;
          func_0x00010c0deb60();
          if (uVar3 != 0) {
            lVar8 = lVar8 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
        uVar9 = param_2;
        func_0x00010bf52a60();
      } while (uVar9 != 0);
    }
LAB_108fc0680:
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  else {
    lVar8 = 0x7fffffffffffffff;
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return lVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf529e0();
  if (uVar6 < uVar2) {
    uVar2 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c0deb60();
    _objc_release(uVar2);
    if (uVar9 != 0) {
      uVar2 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      _objc_opt_respondsToSelector();
      if ((uVar9 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar2;
        func_0x00010c262e40();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar10 = uVar9;
      func_0x00010c155e00();
      if (uVar10 == 1) {
LAB_108fc085c:
        lVar7 = 1;
      }
      else {
        if (uVar10 == 2) {
          lVar7 = 0;
          if (uVar6 == 0) goto LAB_108fc0860;
          uVar10 = 0;
          do {
            uVar3 = param_1;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            _objc_opt_respondsToSelector();
            if ((uVar4 & 1) == 0) {
              _objc_release(uVar3);
LAB_108fc081c:
              uVar3 = param_1;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c0deb60();
              _objc_release(uVar3);
              if (uVar4 != 0) goto LAB_108fc085c;
            }
            else {
              uVar4 = param_1;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c155700();
              _objc_release(uVar4);
              _objc_release(uVar3);
              if (uVar5 != 1) goto LAB_108fc081c;
            }
            uVar10 = uVar10 + 1;
          } while (uVar6 != uVar10);
        }
        lVar7 = 0;
      }
LAB_108fc0860:
      _objc_release(uVar9);
      _objc_release(uVar2);
      goto LAB_108fc0870;
    }
  }
  lVar7 = 0;
LAB_108fc0870:
  _objc_release(param_1);
  return lVar7;
}



/* Entry: 108fc06dc; end: 108fc0897;  */

undefined8 FUN_108fc06dc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (param_2 < uVar1) {
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0deb60();
    _objc_release(uVar1);
    if (uVar6 != 0) {
      uVar1 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      _objc_opt_respondsToSelector();
      if ((uVar6 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar1;
        func_0x00010c262e40();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar7 = uVar6;
      func_0x00010c155e00();
      if (uVar7 == 1) {
LAB_108fc085c:
        uVar5 = 1;
      }
      else {
        if (uVar7 == 2) {
          uVar5 = 0;
          if (param_2 == 0) goto LAB_108fc0860;
          uVar7 = 0;
          do {
            uVar2 = param_1;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            _objc_opt_respondsToSelector();
            if ((uVar3 & 1) == 0) {
              _objc_release(uVar2);
LAB_108fc081c:
              uVar2 = param_1;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c0deb60();
              _objc_release(uVar2);
              if (uVar3 != 0) goto LAB_108fc085c;
            }
            else {
              uVar3 = param_1;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c155700();
              _objc_release(uVar3);
              _objc_release(uVar2);
              if (uVar4 != 1) goto LAB_108fc081c;
            }
            uVar7 = uVar7 + 1;
          } while (param_2 != uVar7);
        }
        uVar5 = 0;
      }
LAB_108fc0860:
      _objc_release(uVar6);
      _objc_release(uVar1);
      goto LAB_108fc0870;
    }
  }
  uVar5 = 0;
LAB_108fc0870:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 108fc0898; end: 108fc0a33;  */

undefined1  [16]
FUN_108fc0898(double param_1,double param_2,ulong param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  dVar5 = param_1;
  _objc_retain();
  uVar3 = param_3;
  func_0x00010bf529e0();
  if (param_4 < uVar3) {
    uVar3 = param_3;
    FUN_108fc06dc(param_3,param_4);
    if ((int)uVar3 != 0) {
      uVar3 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      _objc_opt_respondsToSelector();
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar3;
        func_0x00010c262e40(uVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      dVar6 = param_1;
      func_0x00010c124ea0(uVar4);
      dVar7 = *(double *)PTR__CGSizeZero_110347620;
      dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      dVar5 = dVar6;
      _objc_release(uVar4);
      _objc_release(uVar3);
      bVar1 = false;
      if ((dVar7 == dVar6) && (bVar1 = false, !NAN(dVar8) && !NAN(param_2))) {
        bVar1 = dVar8 == param_2;
      }
      if (!bVar1) goto LAB_108fc0a04;
    }
    uVar3 = param_3;
    func_0x00010bf529e0();
    if (uVar3 != 0) {
      uVar3 = 0;
      do {
        uVar4 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010c0deb60();
        _objc_release(uVar4);
        if (uVar2 != 0) goto LAB_108fc09d0;
        uVar3 = uVar3 + 1;
        uVar4 = param_3;
        func_0x00010bf529e0();
      } while (uVar3 < uVar4);
    }
    uVar3 = 0x7fffffffffffffff;
LAB_108fc09d0:
    if (((param_5 & 1) == 0) && (param_4 == uVar3)) {
      func_0x00010b816218();
      param_2 = (double)(long)(dVar5 * 12.5) / dVar5;
      dVar6 = param_1;
      goto LAB_108fc0a04;
    }
  }
  dVar6 = *(double *)PTR__CGSizeZero_110347620;
  param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_108fc0a04:
  _objc_release(param_3);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = dVar6;
  return auVar9;
}



/* Entry: 108fc0a34; end: 108fc0b53;  */

void FUN_108fc0a34(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010bfdea80();
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 0.0;
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010befa120(puVar2);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if ((param_2 != 0.0) && (dVar7 != 0.0)) {
    _objc_retain(param_6);
    func_0x00010bfed020(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08ca00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010b816528(0,param_4,param_3,param_2);
    func_0x00010c19f0e0(puVar4);
    puVar2 = puVar4;
    func_0x00010bfecf20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_6);
    _objc_release(param_6);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 108fc0b54; end: 108fc0c6b;  */

void FUN_108fc0b54(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if ((param_2 != 0.0) && (param_1 != 0.0)) {
    _objc_retain(param_6);
    func_0x00010bfed020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08ca00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010b816528(0,param_4,param_3,param_2);
    func_0x00010c19f0e0(puVar2);
    puVar1 = puVar2;
    func_0x00010bfecf20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_6);
    _objc_release(param_6);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108fc0c6c; end: 108fc0c9f; -[SCBaseSectionBasedCollectionViewUpdater init] */

void FUN_108fc0c6c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ffb18;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 108fc0ca0; end: 108fc0ca3; -[SCBaseSectionBasedCollectionViewUpdater setSectionWithConfigurations:animated:] */

void FUN_108fc0ca0(void)

{
  return;
}



/* Entry: 108fc0ca4; end: 108fc0ca7; -[SCBaseSectionBasedCollectionViewUpdater setOrUpdateSectionWithConfigurations:animated:] */

void FUN_108fc0ca4(void)

{
  return;
}



/* Entry: 108fc0ca8; end: 108fc0caf; -[SCBaseSectionBasedCollectionViewUpdater indexPathForItemWithQueryKey:] */

undefined8 FUN_108fc0ca8(void)

{
  return 0;
}



/* Entry: 108fc0cb0; end: 108fc0cb7; -[SCBaseSectionBasedCollectionViewUpdater numberOfSectionsInCollectionView:] */

undefined8 FUN_108fc0cb0(void)

{
  return 0;
}



/* Entry: 108fc0cb8; end: 108fc0cbf; -[SCBaseSectionBasedCollectionViewUpdater collectionView:numberOfItemsInSection:] */

undefined8 FUN_108fc0cb8(void)

{
  return 0;
}



/* Entry: 108fc0cc0; end: 108fc0cc7; -[SCBaseSectionBasedCollectionViewUpdater collectionView:cellForItemAtIndexPath:] */

undefined8 FUN_108fc0cc0(void)

{
  return 0;
}



/* Entry: 108fc0cc8; end: 108fc0cdf; -[SCBaseSectionBasedCollectionViewUpdater virtualSectionConfigurableProvidingDelegate] */

void FUN_108fc0cc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fc0ce0; end: 108fc0ceb; -[SCBaseSectionBasedCollectionViewUpdater setVirtualSectionConfigurableProvidingDelegate:] */

void FUN_108fc0ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 108fc0cec; end: 108fc0d03; -[SCBaseSectionBasedCollectionViewUpdater delegate] */

void FUN_108fc0cec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fc0d04; end: 108fc0d0f; -[SCBaseSectionBasedCollectionViewUpdater setDelegate:] */

void FUN_108fc0d04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108fc0d10; end: 108fc0d27; -[SCBaseSectionBasedCollectionViewUpdater collectionViewDelegate] */

void FUN_108fc0d10(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fc0d28; end: 108fc0d33; -[SCBaseSectionBasedCollectionViewUpdater setCollectionViewDelegate:] */

void FUN_108fc0d28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108fc0d34; end: 108fc0d3b; -[SCBaseSectionBasedCollectionViewUpdater pendingSectionDelay] */

undefined8 FUN_108fc0d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fc0d3c; end: 108fc0d43; -[SCBaseSectionBasedCollectionViewUpdater setPendingSectionDelay:] */

void FUN_108fc0d3c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108fc0d44; end: 108fc0d4b; -[SCBaseSectionBasedCollectionViewUpdater forceLayoutUpdateBeforeBatchUpdates] */

undefined1 FUN_108fc0d44(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 108fc0d4c; end: 108fc0d53; -[SCBaseSectionBasedCollectionViewUpdater setForceLayoutUpdateBeforeBatchUpdates:] */

void FUN_108fc0d4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108fc0d54; end: 108fc0d5b; -[SCBaseSectionBasedCollectionViewUpdater enablePerformBatchUpdateCrashRecovery] */

undefined1 FUN_108fc0d54(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 108fc0d5c; end: 108fc0d63; -[SCBaseSectionBasedCollectionViewUpdater setEnablePerformBatchUpdateCrashRecovery:] */

void FUN_108fc0d5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 108fc0d64; end: 108fc0d6b; -[SCBaseSectionBasedCollectionViewUpdater disableFirstSectionNoHeaderPadding] */

undefined1 FUN_108fc0d64(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 108fc0d6c; end: 108fc0d73; -[SCBaseSectionBasedCollectionViewUpdater setDisableFirstSectionNoHeaderPadding:] */

void FUN_108fc0d6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 108fc0d74; end: 108fc0d7b; -[SCBaseSectionBasedCollectionViewUpdater filterDuplicateBatchUpdate] */

undefined1 FUN_108fc0d74(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2b);
}



/* Entry: 108fc0d7c; end: 108fc0d83; -[SCBaseSectionBasedCollectionViewUpdater setFilterDuplicateBatchUpdate:] */

void FUN_108fc0d7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 108fc0d84; end: 108fc0d8b; -[SCBaseSectionBasedCollectionViewUpdater sections] */

undefined8 FUN_108fc0d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fc0d8c; end: 108fc0d93; -[SCBaseSectionBasedCollectionViewUpdater isUpdating] */

undefined1 FUN_108fc0d8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 108fc0d94; end: 108fc0dcf; -[SCBaseSectionBasedCollectionViewUpdater .cxx_destruct] */

void FUN_108fc0d94(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108fc0dd0; end: 108fc0dd7; -[SCLegacySectionBasedCollectionViewUpdater initWithCollectionView:] */

void FUN_108fc0dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfff830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithCollectionView_activatei_1125dd7d0,param_3,0);
  return;
}



/* Entry: 108fc0dd8; end: 108fc0fe3; -[SCLegacySectionBasedCollectionViewUpdater initWithCollectionView:activateiOS18DequeuFix:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108fc0dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ffb20;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11277f14c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11277f15c) = param_4;
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010c189840(*(undefined8 *)((long)puVar2 + lVar7));
    uVar4 = *(ulong *)((long)puVar2 + lVar7);
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c21f0;
    _objc_opt_class(PTR_PTR_1126c21f0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010c1b9b00(uVar1);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
    func_0x00010c126060(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x00010c126000(uVar3);
    puVar2[4] = 0x3fc999999999999a;
    puVar5 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277f160);
    *(undefined **)((long)puVar2 + (long)_DAT_11277f160) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126dcd38;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277f164);
    *(undefined **)((long)puVar2 + (long)_DAT_11277f164) = puVar5;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 108fc0fe4; end: 108fc1013;  */

void FUN_108fc0fe4(void)

{
  _objc_alloc(PTR_PTR_1126dcd30);
  func_0x00010bfff800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fc1014; end: 108fc101b; -[SCLegacySectionBasedCollectionViewUpdater setSectionWithConfigurations:animated:] */

void FUN_108fc1014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__applySectionWithConfigurations__1125513c8,param_3,param_4,0);
  return;
}



/* Entry: 108fc101c; end: 108fc1023; -[SCLegacySectionBasedCollectionViewUpdater setOrUpdateSectionWithConfigurations:animated:] */

void FUN_108fc101c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__applySectionWithConfigurations__1125513c8,param_3,param_4,1);
  return;
}



/* Entry: 108fc1024; end: 108fc127b; -[SCLegacySectionBasedCollectionViewUpdater indexPathForItemWithQueryKey:] */

void FUN_108fc1024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x000107c318f8();
      _objc_release(lVar4);
      if (lVar4 != 0 && (int)lVar7 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x000107c318f8();
        uVar1 = uVar5;
        if ((int)uVar6 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar5);
        uVar6 = uVar1;
        func_0x00010bfecb40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uStack_a8 = 0;
        uStack_98 = 0x2020000000;
        uStack_90 = 0;
        puStack_d0 = &uStack_d8;
        uStack_d8 = 0;
        uStack_c8 = 0x3032000000;
        pcStack_c0 = FUN_108fc127c;
        uStack_b8 = 0x108fc128c;
        uStack_b0 = 0;
        puStack_a0 = &uStack_a8;
        func_0x00010c0be7a0();
        lVar7 = puStack_d0[5];
        if ((lVar7 == 0) && (*(char *)(puStack_a0 + 3) != '\x01')) {
          bVar2 = true;
        }
        else {
          _objc_retain(lVar7);
          bVar2 = false;
          unaff_x22 = lVar7;
        }
        __Block_object_dispose(&uStack_d8,8);
        _objc_release(uStack_b0);
        __Block_object_dispose(&uStack_a8,8);
        _objc_release(uVar6);
        _objc_release(uVar1);
        if (!bVar2) goto LAB_108fc1224;
      }
      lVar3 = lVar3 + 1;
      lVar7 = *(long *)(param_1 + 0x30);
      func_0x00010bf529e0();
    } while (lVar3 != lVar7);
  }
  unaff_x22 = 0;
LAB_108fc1224:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 108fc127c; end: 108fc1293;  */

void FUN_108fc127c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108fc1294; end: 108fc12f3;  */

void FUN_108fc1294(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108fc12f4; end: 108fc130b;  */

void FUN_108fc12f4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108fc130c; end: 108fc13ab; -[SCLegacySectionBasedCollectionViewUpdater forwardingTargetForSelector:] */

void FUN_108fc130c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar3 = &lStack_40;
  puVar1 = &UNK_10f541bda;
  _objc_getProtocol();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _protocol_getMethodDescription();
  if (puVar2 == (undefined *)0x0) {
    puStack_38 = PTR_PTR_1126ffb20;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_forwardingTargetForSelector__1125cb2d0,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar3 = (long *)(param_1 + 0x18);
    _objc_loadWeakRetained(plVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 108fc13ac; end: 108fc1463; -[SCLegacySectionBasedCollectionViewUpdater respondsToSelector:] */

uint FUN_108fc13ac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = 0;
  puStack_38 = PTR_PTR_1126ffb20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_respondsToSelector__11262c7e0);
  if ((uVar1 & 1) == 0) {
    puVar2 = &UNK_10f541bda;
    _objc_getProtocol();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _protocol_getMethodDescription();
    if (puVar3 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      _objc_opt_respondsToSelector();
      uVar5 = (uint)lVar4;
      _objc_release(param_1);
    }
    _objc_release(puVar2);
  }
  else {
    uVar5 = 1;
  }
  return uVar5 & 1;
}



/* Entry: 108fc1464; end: 108fc156f; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSection:supplementaryViewModelsUpdated:] */

void FUN_108fc1464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bfecde0();
  if (lVar1 != 0x7fffffffffffffff) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108fc1570;
    puStack_58 = &UNK_110842a68;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_4);
    uStack_50 = param_4;
    lStack_40 = lVar1;
    func_0x000107c312cc("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc1570; end: 108fc15a7;  */

void FUN_108fc1570(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc15a8; end: 108fc15ab; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSectionUpdateIfNeeded:] */

void FUN_108fc15a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchUpdateCollectionViewIfN_11255e9b8);
  return;
}



/* Entry: 108fc15ac; end: 108fc1653; -[SCLegacySectionBasedCollectionViewUpdater _dispatchUpdateCollectionViewIfNeeded] */

void FUN_108fc15ac(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108fc1654;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108fc1654; end: 108fc167f;  */

void FUN_108fc1654(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed56e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc1680; end: 108fc1a2b; -[SCLegacySectionBasedCollectionViewUpdater collectionViewResultSection:reloadCellsAtIndexesIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc1680(long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_11277f168) == 0) {
    if ((*(long *)(param_1 + 0x30) != 0) && (lVar6 = param_4, func_0x00010bf529e0(), lVar6 != 0)) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar7 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar7);
      lVar6 = lVar7;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar9 = *plStack_130;
        do {
          lVar5 = 0;
          do {
            if (*plStack_130 != lVar9) {
              _objc_enumerationMutation(lVar7);
            }
            uVar8 = *(undefined8 *)(lStack_138 + lVar5 * 8);
            uStack_1a0 = 0;
            uStack_190 = 0x2020000000;
            pcStack_188 = (code *)((ulong)pcStack_188 & 0xffffffffffffff00);
            puStack_198 = &uStack_1a0;
            _objc_initWeak(&uStack_1c0,param_1);
            func_0x00010c156960(uVar8);
            _objc_retainAutoreleasedReturnValue();
            puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_168 = 0xc2000000;
            pcStack_160 = FUN_108fc1a2c;
            puStack_158 = &UNK_110850308;
            _objc_copyWeak(auStack_148,&uStack_1c0);
            puStack_150 = &uStack_1a0;
            func_0x00010c0bf8a0(uVar8);
            _objc_release(uVar8);
            bVar1 = *(byte *)(puStack_198 + 3);
            _objc_destroyWeak(auStack_148);
            _objc_destroyWeak(&uStack_1c0);
            __Block_object_dispose(&uStack_1a0,8);
            if ((bVar1 & 1) != 0) {
              _objc_release(lVar7);
              goto LAB_108fc16f0;
            }
            lVar5 = lVar5 + 1;
          } while (lVar6 != lVar5);
          lVar6 = lVar7;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar7);
      uVar2 = *(ulong *)(param_1 + 0x30);
      func_0x00010bfecde0();
      if (uVar2 != 0x7fffffffffffffff) {
        lVar6 = (long)_DAT_11277f14c;
        uVar3 = *(ulong *)(param_1 + lVar6);
        func_0x00010c0df2e0();
        if (uVar2 < uVar3) {
          lVar7 = *(long *)(param_1 + lVar6);
          func_0x00010c0deec0();
          if (lVar7 != 0) {
            puStack_198 = &uStack_1a0;
            uStack_1a0 = 0;
            uStack_190 = 0x3032000000;
            pcStack_188 = FUN_108fc127c;
            uStack_180 = 0x108fc128c;
            puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            puStack_1b8 = &uStack_1c0;
            uStack_1c0 = 0;
            uStack_1b0 = 0x2020000000;
            uStack_1a8 = 0;
            puStack_178 = puVar4;
            func_0x00010bf97bc0(param_4);
            lVar7 = puStack_198[5];
            func_0x00010bf529e0();
            if (lVar7 != 0) {
              func_0x00010c128de0(*(undefined8 *)(param_1 + lVar6));
            }
            __Block_object_dispose(&uStack_1c0,8);
            __Block_object_dispose(&uStack_1a0,8);
            _objc_release(puStack_178);
          }
        }
      }
    }
  }
  else {
    func_0x00010c1f96e0(param_3);
  }
LAB_108fc16f0:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1c0,8);
    __Block_object_dispose(&uStack_1a0,8);
    __Unwind_Resume();
    lVar6 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar6);
    func_0x00010be04060();
    _objc_release(lVar6);
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 108fc1a2c; end: 108fc1a6f;  */

void FUN_108fc1a2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be04060();
  _objc_release(lVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108fc1a70; end: 108fc1a73;  */

void FUN_108fc1a70(void)

{
  return;
}



/* Entry: 108fc1a74; end: 108fc1aeb;  */

void FUN_108fc1a74(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 < *(ulong *)(param_1 + 0x30)) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,
                        *(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108fc1aec; end: 108fc1b97; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSection:dequeueReusableCellWithReuseIdentifier:forIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc1aec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010bfecde0(uVar2,param_2,param_3);
  func_0x00010bfed020(puVar1,param_2,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f14c);
  func_0x00010bf6e0c0(uVar2,param_2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108fc1b98; end: 108fc1cb3; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSection:didUpdateLayoutWithInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc1b98(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108fc1cb4;
  puStack_50 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_48,auStack_38);
  ppuVar1 = &puStack_68;
  uStack_40 = param_4;
  _objc_retainBlock(ppuVar1);
  if ((*(char *)(param_1 + _DAT_11277f15c) == '\x01') &&
     (*(char *)(param_1 + _DAT_11277f16c) == '\x01')) {
    func_0x000107c312d0("APPSTORE",ppuVar1);
  }
  else {
    func_0x000107c312cc("APPSTORE",ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc1cb4; end: 108fc1d2f;  */

void FUN_108fc1cb4(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010beb6f60();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x28);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    if (cVar1 == '\x01') {
      func_0x00010bede9c0();
    }
    else {
      func_0x00010bede9a0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108fc1d30; end: 108fc1dfb; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSection:dequeueSupplementaryViewOfElementKind:withReuseIdentifier:forIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc1d30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfecde0(uVar2,param_2,param_3);
  func_0x00010bfed020(puVar1,param_2,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f14c);
  func_0x00010bf6e120(uVar2,param_2,param_4,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108fc1dfc; end: 108fc1e0f; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSection:indexPathForCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc1dfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfecfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f14c),PTR_s_indexPathForCell__1125d8db0,param_4);
  return;
}



/* Entry: 108fc1e10; end: 108fc1f23; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSection:cellForItemAtIndexInSection:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc1e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (param_5 == (undefined8 *)0x0) {
LAB_108fc1e78:
      lVar4 = 0;
      goto LAB_108fc1f04;
    }
    uVar3 = 2;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bfecde0(lVar1,param_2,param_3);
    if (lVar1 == 0x7fffffffffffffff) {
      if (param_5 == (undefined8 *)0x0) goto LAB_108fc1e78;
      uVar3 = 1;
    }
    else {
      lVar4 = *(long *)(param_1 + _DAT_11277f14c);
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_4,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33b60(lVar4,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if ((param_5 == (undefined8 *)0x0) || (lVar4 != 0)) goto LAB_108fc1f04;
      uVar3 = 0;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f16358,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  lVar4 = 0;
  *param_5 = puVar2;
LAB_108fc1f04:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108fc1f24; end: 108fc203b; -[SCLegacySectionBasedCollectionViewUpdater sectionInsetsForCollectionViewSection:] */

undefined8 FUN_108fc1f24(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_sectionInsets_112633270);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_4;
    func_0x00010c156140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_4;
      func_0x00010c156140(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2aa0();
      goto LAB_108fc2004;
    }
  }
  uVar1 = param_2 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    param_1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    param_2 = param_2 + 0x10;
    _objc_loadWeakRetained(param_2);
    func_0x00010c1561a0();
    _objc_release(param_2);
  }
LAB_108fc2004:
  _objc_release(uVar1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108fc203c; end: 108fc20d3; -[SCLegacySectionBasedCollectionViewUpdater collectionViewSection:scrollToItemAtIndexInSection:scrollPosition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc203c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bfecde0();
  if (lVar1 == 0x7fffffffffffffff) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277f14c);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(uVar3,param_2,puVar2,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fc20d4; end: 108fc211b; -[SCLegacySectionBasedCollectionViewUpdater presentingViewControllerForCollectionViewSection:] */

void FUN_108fc20d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fc211c; end: 108fc2123; -[SCLegacySectionBasedCollectionViewUpdater numberOfSectionsInCollectionView:] */

void FUN_108fc211c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108fc2124; end: 108fc2167; -[SCLegacySectionBasedCollectionViewUpdater collectionView:numberOfItemsInSection:] */

undefined8 FUN_108fc2124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0deb60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108fc2168; end: 108fc223f; -[SCLegacySectionBasedCollectionViewUpdater collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc2168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11277f16c;
  uVar1 = *(undefined1 *)(param_1 + lVar5);
  *(undefined1 *)(param_1 + lVar5) = 1;
  lVar4 = *(long *)(param_1 + 0x30);
  uVar2 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(lVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c142240(param_4);
  lVar3 = lVar4;
  func_0x00010bf33b40(lVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_11277f14c);
    func_0x00010bf6e0c0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f16338,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  *(undefined1 *)(param_1 + lVar5) = uVar1;
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108fc2240; end: 108fc2433; -[SCLegacySectionBasedCollectionViewUpdater collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc2240(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c0720c0();
  uVar2 = param_3;
  if ((int)uVar1 == 0) {
    func_0x00010bf6e120(param_3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108fc2404;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  func_0x00010c1554e0(param_5);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  _objc_opt_respondsToSelector();
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4;
    func_0x00010c262e40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar5;
  func_0x00010c155e00();
  if (uVar3 == 2) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = param_5;
    func_0x00010c1554e0(param_5);
    FUN_108fc06dc(uVar6,uVar1);
    if ((int)uVar6 == 0) goto LAB_108fc23b0;
LAB_108fc237c:
    func_0x00010c0840e0(param_5);
    uVar2 = uVar5;
    func_0x00010c29cf60();
    _objc_retainAutoreleasedReturnValue();
LAB_108fc23c4:
    if (uVar2 == 0) goto LAB_108fc23cc;
  }
  else {
    if (uVar3 == 1) {
      uVar2 = uVar5;
      _objc_opt_respondsToSelector(uVar5,PTR_s_viewForSupplementaryElementOfKin_112684e00);
      if ((uVar2 & 1) != 0) goto LAB_108fc237c;
      uVar2 = *(ulong *)(param_1 + _DAT_11277f14c);
LAB_108fc23b0:
      func_0x00010bf6e120();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108fc23c4;
    }
    if (uVar3 == 0) goto LAB_108fc23b0;
LAB_108fc23cc:
    uVar2 = param_3;
    func_0x00010bf6e120(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_108fc2404:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108fc2434; end: 108fc2477; -[SCLegacySectionBasedCollectionViewUpdater collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_108fc2434(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  uVar4 = *(ulong *)(param_3 + 0x30);
  func_0x00010bfb68e0(param_5);
  _CGRectGetWidth();
  bVar1 = *(byte *)(param_3 + 0x2a);
  dVar7 = param_1;
  _objc_retain();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  if (param_7 < uVar5) {
    uVar5 = uVar4;
    FUN_108fc06dc(uVar4,param_7);
    if ((int)uVar5 != 0) {
      uVar5 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      _objc_opt_respondsToSelector();
      if ((uVar6 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar5;
        func_0x00010c262e40(uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      dVar8 = param_1;
      func_0x00010c124ea0(uVar6);
      dVar9 = *(double *)PTR__CGSizeZero_110347620;
      dVar10 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      dVar7 = dVar8;
      _objc_release(uVar6);
      _objc_release(uVar5);
      bVar2 = false;
      if ((dVar9 == dVar8) && (bVar2 = false, !NAN(dVar10) && !NAN(param_2))) {
        bVar2 = dVar10 == param_2;
      }
      if (!bVar2) goto LAB_108fc0a04;
    }
    uVar5 = uVar4;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar6 = uVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c0deb60();
        _objc_release(uVar6);
        if (uVar3 != 0) goto LAB_108fc09d0;
        uVar5 = uVar5 + 1;
        uVar6 = uVar4;
        func_0x00010bf529e0();
      } while (uVar5 < uVar6);
    }
    uVar5 = 0x7fffffffffffffff;
LAB_108fc09d0:
    if (((bVar1 & 1) == 0) && (param_7 == uVar5)) {
      func_0x00010b816218();
      param_2 = (double)(long)(dVar7 * 12.5) / dVar7;
      dVar8 = param_1;
      goto LAB_108fc0a04;
    }
  }
  dVar8 = *(double *)PTR__CGSizeZero_110347620;
  param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_108fc0a04:
  _objc_release(uVar4);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = dVar8;
  return auVar11;
}



/* Entry: 108fc2478; end: 108fc25e7; -[SCLegacySectionBasedCollectionViewUpdater collectionView:layout:insetForSectionAtIndex:] */

undefined8
FUN_108fc2478(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_2 + 0x30);
  func_0x00010c0dfd40(lVar1,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0deb60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  uVar3 = *(ulong *)(param_2 + 0x30);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x30);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c156140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar4 != 0) {
      func_0x00010bdc2aa0(uVar4);
      goto LAB_108fc25b8;
    }
  }
  uVar4 = param_2 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = uVar4;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) == 0) {
    param_1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    param_2 = param_2 + 0x10;
    _objc_loadWeakRetained(param_2);
    func_0x00010c1561a0();
    _objc_release(param_2);
  }
LAB_108fc25b8:
  _objc_release(uVar4);
  return param_1;
}



/* Entry: 108fc25e8; end: 108fc26b7; -[SCLegacySectionBasedCollectionViewUpdater collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_108fc25e8(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)(param_5 + 0x30);
  _objc_retain(param_9);
  _objc_retain(param_7);
  uVar1 = param_9;
  func_0x00010c1554e0(param_9);
  func_0x00010c0dfd40(uVar2,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_9;
  func_0x00010c142240(param_9);
  _objc_release(param_9);
  func_0x00010bf20c00(param_7);
  _CGRectGetWidth();
  func_0x00010bf4c7c0(param_7);
  param_1 = param_1 - param_2;
  func_0x00010bf4c7c0(param_7);
  _objc_release(param_7);
  param_1 = param_1 - param_4;
  func_0x00010c23d260(param_1,uVar2,param_6,uVar1);
  _objc_release(uVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108fc26b8; end: 108fc2877; -[SCLegacySectionBasedCollectionViewUpdater collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:] */

void FUN_108fc26b8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = param_4;
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f020();
  _objc_release(uVar3);
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c1554e0(param_6);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c1554e0(param_6);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_6);
    func_0x00010bf40b00(uVar3);
    _objc_release(uVar3);
  }
  uVar1 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf407c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf405e0();
    _objc_release(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc2878; end: 108fc2af7; -[SCLegacySectionBasedCollectionViewUpdater collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108fc2878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_8;
  func_0x00010c08c0e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uVar8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  func_0x00010c20f020();
  _objc_release(uVar1);
  puVar2 = param_9;
  func_0x00010c1554e0();
  puVar3 = *(undefined **)(param_5 + 0x30);
  func_0x00010bf529e0();
  if (puVar2 < puVar3) {
    uVar6 = *(ulong *)(param_5 + 0x30);
    func_0x00010c1554e0(param_9);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    _objc_opt_respondsToSelector();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar6;
      _objc_opt_respondsToSelector(uVar6,PTR_s_collectionView_willDisplayCell_a_1125adb08);
      if ((uVar4 & 1) != 0) {
        func_0x00010c142240(param_9);
        func_0x00010bf40580(uVar6);
      }
    }
    else {
      puVar3 = param_9;
      FUN_108fc0558(param_9,*(undefined8 *)(param_5 + 0x30));
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      if (puVar3 == (undefined *)0x7fffffffffffffff) {
        _objc_retain(param_9);
        puVar2 = param_9;
      }
      else {
        func_0x00010c0840e0(param_9);
        func_0x00010bfed020(puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bf405a0(uVar6);
      _objc_release(puVar2);
    }
    _objc_release(uVar6);
  }
  func_0x00010bf20c00(param_7);
  uVar1 = param_7;
  func_0x00010c070ea0(param_7);
  uVar5 = param_7;
  func_0x00010c070400(param_7);
  FUN_108fd70e0(uVar7,uVar8,param_3,param_4,param_8,uVar1,uVar5);
  uVar4 = param_5;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  _objc_opt_respondsToSelector();
  _objc_release(uVar4);
  if ((uVar6 & 1) != 0) {
    func_0x00010bf407c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf405c0();
    _objc_release(param_5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 108fc2af8; end: 108fc2c5b; -[SCLegacySectionBasedCollectionViewUpdater collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_108fc2af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_7);
  uVar1 = param_9;
  func_0x00010c1554e0();
  uVar2 = *(ulong *)(param_5 + 0x30);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar2 = *(ulong *)(param_5 + 0x30);
    func_0x00010c1554e0(param_9);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010c1554e0(param_9);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240(param_9);
      func_0x00010bf40840(uVar4);
      _objc_release(uVar4);
    }
  }
  func_0x00010bf20c00(param_7);
  uVar4 = param_7;
  func_0x00010c070ea0(param_7);
  uVar3 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd70e0(param_1,param_2,param_3,param_4,param_8,uVar4,uVar3);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 108fc2c5c; end: 108fc2d13; -[SCLegacySectionBasedCollectionViewUpdater collectionView:targetContentOffsetForProposedContentOffset:] */

undefined1  [16]
FUN_108fc2c5c(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar2 = param_1;
  dVar3 = param_2;
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf408e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf407a0();
  func_0x00010bf4c7c0(param_6);
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_6);
  _CGRectGetHeight();
  dVar2 = param_2 + dVar2;
  if (dVar3 + param_3 < dVar2) {
    func_0x00010bf4c7c0(param_6);
    dVar4 = -dVar2;
    func_0x00010bfb68e0(param_6);
    _CGRectGetHeight();
    param_2 = (dVar3 + param_3) - dVar2;
    if (param_2 <= dVar4) {
      param_2 = dVar4;
    }
  }
  _objc_release(param_6);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108fc2d14; end: 108fc337f; -[SCLegacySectionBasedCollectionViewUpdater prepareLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc2d14(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_11277f14c;
  puVar2 = *(undefined **)(param_5 + lVar16);
  func_0x00010bf20c00();
  _CGRectGetWidth();
  if (param_1 != 0.0) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar16));
    _CGRectGetWidth();
    dVar23 = param_1;
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar16));
    param_1 = param_1 - param_2;
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar16));
    param_1 = param_1 - param_4;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar16 = *(long *)(param_5 + 0x30);
    func_0x00010bf529e0();
    puVar13 = PTR_s_supplementaryViewProvider_1126765b8;
    puVar14 = PTR_s_layoutCalculator_112600cb8;
    uVar15 = *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8;
    if (lVar16 == 0) {
      dVar22 = 0.0;
    }
    else {
      uVar18 = 0;
      dVar22 = 0.0;
      do {
        puVar5 = *(undefined **)(param_5 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0deb60();
        if (puVar6 != (undefined *)0x0) {
          _objc_opt_respondsToSelector(puVar5,puVar14);
          func_0x00010c156160(param_5);
          puVar6 = puVar5;
          dVar25 = dVar23;
          dVar20 = param_2;
          _objc_opt_respondsToSelector(puVar5,puVar13);
          if (((ulong)puVar6 & 1) != 0) {
            puVar6 = puVar5;
            func_0x00010c262e40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar6 != (undefined *)0x0) {
              dVar24 = param_1;
              FUN_108fc0898(*(undefined8 *)(param_5 + 0x30),uVar18,*(undefined1 *)(param_5 + 0x2a));
              dVar25 = dVar24;
              func_0x00010b816218();
              dVar24 = (double)(long)(dVar24 * dVar25) / dVar25;
              func_0x00010b816218();
              dVar25 = (double)(long)(dVar20 * dVar25) / dVar25;
              dVar20 = dVar25;
              FUN_108fc0b54(dVar24,dVar25,param_1,dVar22,uVar18,puVar3);
              bVar1 = true;
              if ((dVar24 != 0.0) && (bVar1 = false, !NAN(dVar25))) {
                bVar1 = dVar25 == 0.0;
              }
              if (bVar1) {
                dVar25 = 0.0;
              }
              dVar22 = dVar22 + dVar25;
            }
          }
          dVar22 = dVar23 + dVar22;
          puVar6 = puVar5;
          func_0x00010c08caa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          dVar24 = dVar22;
          dVar21 = param_1;
          if (puVar6 == (undefined *)0x0) {
            func_0x00010c23d260(param_1);
            func_0x00010b816528(param_2,dVar22,param_1,dVar20);
            puVar6 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
            puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08c8e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            func_0x00010c19f0e0(param_2,dVar24,dVar21,dVar20,puVar6);
            puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_b8 = puVar6;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar6 = puVar5;
            func_0x00010c08caa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ce5e0(puVar5);
            func_0x00010c0deb60(puVar5);
            puVar7 = puVar6;
            func_0x00010c08c9a0(param_2,dVar22,param_1,dVar25);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar6);
          dVar23 = 0.0;
          _objc_retain(puVar7);
          puVar6 = puVar7;
          func_0x00010bf52a60();
          lVar16 = lRam0000000000000000;
          while (puVar6 != (undefined *)0x0) {
            puVar19 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar16) {
                _objc_enumerationMutation(puVar7);
              }
              uVar17 = *(undefined8 *)((long)puVar19 * 8);
              func_0x00010bfb68e0(uVar17);
              _CGRectGetMaxY();
              puVar9 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
              if (dVar22 <= dVar23) {
                dVar22 = dVar23;
              }
              uVar8 = uVar17;
              func_0x00010bfecf20(uVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0840e0();
              func_0x00010bfed020(puVar9);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              func_0x00010c1ac020(uVar17);
              func_0x00010c1d0640(puVar2);
              _objc_release(puVar9);
              puVar19 = puVar19 + 1;
            } while (puVar6 != puVar19);
            puVar6 = puVar7;
            func_0x00010bf52a60();
          }
          _objc_release(puVar7);
          dVar22 = param_3 + dVar22;
          puVar6 = puVar5;
          _objc_opt_respondsToSelector(puVar5,puVar13);
          param_2 = dVar24;
          param_3 = dVar21;
          if (((ulong)puVar6 & 1) != 0) {
            puVar6 = puVar5;
            func_0x00010c262e40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            param_2 = dVar24;
            param_3 = dVar21;
            if (puVar6 != (undefined *)0x0) {
              puVar6 = puVar5;
              func_0x00010c262e40(puVar5);
              _objc_retainAutoreleasedReturnValue();
              dVar25 = param_1;
              func_0x00010c124ea0();
              dVar23 = dVar25;
              func_0x00010b816218();
              dVar25 = (double)(long)(dVar25 * dVar23) / dVar23;
              func_0x00010b816218();
              dVar23 = (double)(long)(dVar24 * dVar23) / dVar23;
              _objc_release(puVar6);
              param_2 = dVar23;
              param_3 = param_1;
              FUN_108fc0b54(dVar25,dVar23,param_1,dVar22,uVar18,puVar4);
              bVar1 = true;
              if ((dVar25 != 0.0) && (bVar1 = false, !NAN(dVar23))) {
                bVar1 = dVar23 == 0.0;
              }
              if (bVar1) {
                dVar23 = 0.0;
              }
              dVar22 = dVar22 + dVar23;
            }
          }
          if (uVar18 == 0) {
            uVar12 = param_5 + 0x10;
            _objc_loadWeakRetained();
            uVar10 = uVar12;
            _objc_opt_respondsToSelector();
            _objc_release(uVar12);
            if ((uVar10 & 1) != 0) {
              lVar16 = (long)_DAT_11277f170;
              dVar23 = *(double *)(param_5 + lVar16);
              if (dVar23 != dVar22) {
                lVar11 = param_5 + 0x10;
                _objc_loadWeakRetained(lVar11);
                dVar23 = dVar22 - *(double *)(param_5 + lVar16);
                func_0x00010bfb1ba0();
                _objc_release(lVar11);
                *(double *)(param_5 + lVar16) = dVar22;
              }
            }
          }
          _objc_release(puVar7);
        }
        _objc_release(puVar5);
        uVar18 = uVar18 + 1;
        uVar12 = *(ulong *)(param_5 + 0x30);
        func_0x00010bf529e0();
      } while (uVar18 < uVar12);
    }
    uStack_158 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    puVar14 = puVar3;
    func_0x00010bf51e00();
    puVar13 = puVar4;
    uStack_150 = uVar15;
    puStack_148 = puVar14;
    func_0x00010bf51e00();
    param_8 = &uStack_158;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_140 = puVar13;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_5 + _DAT_11277f174);
    *(undefined **)(param_5 + _DAT_11277f174) = puVar6;
    _objc_release(uVar15);
    _objc_release(puVar13);
    _objc_release(puVar14);
    puVar14 = puVar2;
    func_0x00010bf51e00();
    uVar15 = *(undefined8 *)(param_5 + _DAT_11277f178);
    *(undefined **)(param_5 + _DAT_11277f178) = puVar14;
    _objc_release(uVar15);
    lVar16 = (long)_DAT_11277f17c;
    *(double *)(param_5 + lVar16) = param_1;
    ((double *)(param_5 + lVar16))[1] = dVar22;
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    _objc_retain(param_8);
    puVar14 = *(undefined **)(puVar2 + _DAT_11277f174);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108fc3380; end: 108fc3423; -[SCLegacySectionBasedCollectionViewUpdater layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + _DAT_11277f174);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_2,param_4
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fc3424; end: 108fc3437; -[SCLegacySectionBasedCollectionViewUpdater collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fc3424(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f17c);
}



/* Entry: 108fc3438; end: 108fc35cf; -[SCLegacySectionBasedCollectionViewUpdater layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3438(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f178);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  lVar6 = (long)_DAT_11277f174;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar5 = puVar4;
  func_0x000107c31910();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108fc35d0; end: 108fc36e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108fc35d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfecf20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1554e0();
  lVar6 = (long)_DAT_11277f14c;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0df2e0();
  _objc_release(lVar2);
  if (lVar3 < lVar4) {
    lVar2 = param_2;
    func_0x00010bfecf20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0840e0();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
    lVar4 = param_2;
    func_0x00010bfecf20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0();
    func_0x00010c0deec0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 < lVar6) {
      lVar2 = param_2;
      func_0x00010bfb68e0();
      iVar1 = (int)lVar2;
      _CGRectIntersectsRect();
      if (iVar1 != 0) {
        lVar2 = param_2;
        func_0x00010c074c20(param_2);
        uVar5 = (uint)lVar2 ^ 1;
        goto LAB_108fc36c8;
      }
    }
  }
  uVar5 = 0;
LAB_108fc36c8:
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 108fc36e8; end: 108fc379b; -[SCLegacySectionBasedCollectionViewUpdater layoutAttributesForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc36e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f178;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_2,param_3
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1a7f60(puVar1,param_2,1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + lVar3);
    func_0x00010c0e00e0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fc379c; end: 108fc37ff; -[SCLegacySectionBasedCollectionViewUpdater collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8
FUN_108fc379c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x30);
  func_0x00010c0dfd40(uVar1,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  uVar3 = 0x4024000000000000;
  if ((uVar2 & 1) != 0) {
    func_0x00010c0ce5e0(uVar1);
    uVar3 = param_1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108fc3800; end: 108fc3863; -[SCLegacySectionBasedCollectionViewUpdater collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8
FUN_108fc3800(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x30);
  func_0x00010c0dfd40(uVar1,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  uVar3 = 0x4024000000000000;
  if ((uVar2 & 1) != 0) {
    func_0x00010c0ce600(uVar1);
    uVar3 = param_1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108fc3864; end: 108fc3943; -[SCLegacySectionBasedCollectionViewUpdater scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_7);
  uVar1 = param_5 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c152b20();
    _objc_release(lVar3);
  }
  uVar6 = *(undefined8 *)(param_5 + _DAT_11277f14c);
  func_0x00010bf20c00(uVar6);
  uVar4 = param_7;
  func_0x00010c070ea0(param_7);
  uVar5 = param_7;
  func_0x00010c070400(param_7);
  FUN_108fd717c(param_1,param_2,param_3,param_4,uVar6,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108fc3944; end: 108fc39bb; -[SCLegacySectionBasedCollectionViewUpdater scrollViewWillBeginDragging:] */

void FUN_108fc3944(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ca0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc39bc; end: 108fc3a93; -[SCLegacySectionBasedCollectionViewUpdater scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc39bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277f160);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6360(param_1,param_2);
  _objc_release(uVar1);
  uVar2 = param_3 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_3 = param_3 + 0x18;
    _objc_loadWeakRetained(param_3);
    func_0x00010c152ce0(param_1,param_2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fc3a94; end: 108fc3b7b; -[SCLegacySectionBasedCollectionViewUpdater scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  uVar1 = param_5 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c152aa0();
    _objc_release(lVar3);
  }
  if ((param_8 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_5 + _DAT_11277f14c);
    func_0x00010bf20c00(uVar5);
    uVar4 = param_7;
    func_0x00010c070ea0(param_7);
    FUN_108fd717c(param_1,param_2,param_3,param_4,uVar5,uVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108fc3b7c; end: 108fc3c1f; -[SCLegacySectionBasedCollectionViewUpdater scrollViewWillBeginDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f160);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17f00();
  _objc_release(uVar1);
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152c60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc3c20; end: 108fc3cff; -[SCLegacySectionBasedCollectionViewUpdater scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_7);
  uVar1 = param_5 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c152a80();
    _objc_release(lVar3);
  }
  uVar6 = *(undefined8 *)(param_5 + _DAT_11277f14c);
  func_0x00010bf20c00(uVar6);
  uVar4 = param_7;
  func_0x00010c070ea0(param_7);
  uVar5 = param_7;
  func_0x00010c070400(param_7);
  FUN_108fd717c(param_1,param_2,param_3,param_4,uVar6,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108fc3d00; end: 108fc3d77; -[SCLegacySectionBasedCollectionViewUpdater scrollViewDidEndScrollingAnimation:] */

void FUN_108fc3d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ae0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc3d78; end: 108fc3ee3; -[SCLegacySectionBasedCollectionViewUpdater sectionSupplementaryViewProvider:supplementaryViewOfElementKind:atIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3d78(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar1 = 0;
      do {
        uVar2 = *(ulong *)(param_1 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        _objc_opt_respondsToSelector();
        if ((uVar3 & 1) == 0) {
          _objc_release(uVar2);
        }
        else {
          lVar4 = *(long *)(param_1 + 0x30);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c262e40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          _objc_release(uVar2);
          if (lVar5 == param_3) {
            uVar7 = *(undefined8 *)(param_1 + _DAT_11277f14c);
            puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c262e00(uVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            goto LAB_108fc3e60;
          }
        }
        lVar1 = lVar1 + 1;
        lVar5 = *(long *)(param_1 + 0x30);
        func_0x00010bf529e0();
      } while (lVar1 != lVar5);
    }
  }
  uVar7 = 0;
LAB_108fc3e60:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 108fc3ee4; end: 108fc405f; -[SCLegacySectionBasedCollectionViewUpdater sectionSupplementaryViewProvider:dequeueSupplementaryElementOfKind:withReuseIdentifier:atIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc3ee4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c262e40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(uVar2);
        if (lVar5 == param_3) {
          uVar7 = *(undefined8 *)(param_1 + _DAT_11277f14c);
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6e120(uVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          goto LAB_108fc4028;
        }
      }
      lVar1 = lVar1 + 1;
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010bf529e0();
    } while (lVar1 != lVar5);
  }
  uVar7 = 0;
LAB_108fc4028:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 108fc4060; end: 108fc4087; -[SCLegacySectionBasedCollectionViewUpdater _shouldUpdateLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108fc4060(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(long *)(param_1 + _DAT_11277f168) == 0;
  }
  return false;
}


