/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e2d64c; end: 105e2d697; -[SCSendToViewController _headerCancelTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d64c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737884);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c268e80(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e2d698; end: 105e2d83b; -[SCSendToViewController _setupNewGroupHeaderWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d698(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_4;
  _objc_retain();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bfcf6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126c2d70;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126c2d78;
  _objc_alloc();
  func_0x00010c01ae60();
  func_0x00010c160fc0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5fe0(puVar2);
  _objc_release(puVar4);
  func_0x00010c20eaa0(puVar2);
  func_0x00010c213a60(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188e60(puVar2);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c5140;
  _objc_alloc(PTR_PTR_1126c5140);
  func_0x00010c01fc40();
  puVar6 = puVar4;
  func_0x00010c2194c0(param_4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar8 = lVar1;
  func_0x00010c25fc80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfdef80(param_1);
  _objc_release(puVar6);
  _objc_release(lVar8);
  if (*(char *)(lVar1 + _DAT_1127378f8) == '\x01') {
    lVar8 = (long)_DAT_112737910;
    *(undefined8 *)(lVar1 + lVar8) = param_1;
    if (2 < lRam00000001138466f0) {
      puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
      func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c29bf00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      func_0x00010c19f0e0(0,0,uVar5,*(double *)(lVar1 + lVar8) + 5.0 + 5.0 + 24.0,puVar2);
      _objc_release(lVar7);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(puVar2);
      _objc_release(puVar3);
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112737964);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bedcc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__updatePassThroughTouchEventsIfE_112594cb0);
    return;
  }
  return;
}



/* Entry: 105e2d83c; end: 105e2d9bf; -[SCSendToViewController header:didChangeHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d83c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = param_2;
  func_0x00010c25fc80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfdef80(param_1);
  _objc_release(param_4);
  _objc_release(lVar5);
  if (*(char *)(param_2 + _DAT_1127378f8) == '\x01') {
    lVar5 = (long)_DAT_112737910;
    *(undefined8 *)(param_2 + lVar5) = param_1;
    if (2 < lRam00000001138466f0) {
      puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
      func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      func_0x00010c19f0e0(0,0,uVar4,*(double *)(param_2 + lVar5) + 5.0 + 5.0 + 24.0,puVar1);
      _objc_release(lVar2);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(puVar1);
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_2 + _DAT_112737964);
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar4);
      _objc_release(puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bedcc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updatePassThroughTouchEventsIfE_112594cb0)
    ;
    return;
  }
  return;
}



/* Entry: 105e2d9c0; end: 105e2d9fb; -[SCSendToViewController scrollViewShouldScrollToTop:] */

undefined8 FUN_105e2d9c0(undefined8 param_1)

{
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7d60();
  _objc_release(param_1);
  return 1;
}



/* Entry: 105e2d9fc; end: 105e2da67; -[SCSendToViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2d9fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7d60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c152b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737878),PTR_s_scrollViewDidScroll_1126324e0);
  return;
}



/* Entry: 105e2da68; end: 105e2da6b; -[SCSendToViewController scrollViewDidEndDecelerating:] */

void FUN_105e2da68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedcc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePassThroughTouchEventsIfE_112594cb0);
  return;
}



/* Entry: 105e2da6c; end: 105e2da6f; -[SCSendToViewController scrollViewDidEndDragging:willDecelerate:] */

void FUN_105e2da6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedcc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePassThroughTouchEventsIfE_112594cb0);
  return;
}



/* Entry: 105e2da70; end: 105e2df27; -[SCSendToViewController _updatePassThroughTouchEventsIfEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2da70(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uStack_b8;
  ulong uStack_b0;
  
  if (*(char *)(param_5 + (long)_DAT_1127378f4) != '\x01') {
    return;
  }
  lVar12 = (long)_DAT_112737938;
  uVar1 = *(ulong *)(param_5 + lVar12);
  func_0x00010c2a00c0(uVar1,param_6,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_5 + lVar12);
  func_0x00010bfed1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010bf529e0();
  if ((uVar13 == 0) || (uVar13 = uVar2, func_0x00010bf529e0(), uVar13 == 0)) goto LAB_105e2deec;
  uVar13 = uVar1;
  func_0x00010bf529e0();
  if (uVar13 == 0) {
    uStack_b8 = 0;
  }
  else {
    uVar13 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0x7fffffffffffffff;
    do {
      uVar3 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b78f8;
      _objc_opt_class(PTR_PTR_1126b78f8);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar10 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010bf529e0();
      if (uVar3 <= uVar13) {
        _objc_release(uVar10);
        break;
      }
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_5;
      func_0x00010bfdef60(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_5;
      func_0x00010bfdef60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      uVar7 = param_5;
      func_0x00010c25fc80(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar5);
      uVar14 = param_1;
      dVar15 = param_2;
      uVar16 = param_3;
      uVar17 = param_4;
      func_0x00010bf20c00(uVar10);
      uVar8 = param_5;
      func_0x00010c25fc80(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x00010bf51460(uVar14,dVar15,uVar16,uVar17);
      _CGRectContainsRect();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if (((uVar9 & 1) == 0) &&
         (uVar5 = uVar3, func_0x00010c1554e0(), (long)uVar5 < (long)uStack_b0)) {
        _objc_retain(uVar10);
        _objc_release(uStack_b8);
        uStack_b0 = uVar3;
        func_0x00010c1554e0();
        uStack_b8 = uVar10;
      }
      _objc_release(uVar3);
      _objc_release(uVar10);
      uVar13 = uVar13 + 1;
      uVar10 = uVar1;
      func_0x00010bf529e0();
    } while (uVar13 < uVar10);
  }
  lVar12 = (long)_DAT_1127378f8;
  if (*(char *)(param_5 + lVar12) == '\x01') {
    uVar13 = param_5;
    func_0x00010bfdf5e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d94a0();
  }
  else {
    uVar13 = uStack_b8;
    func_0x00010c27f7c0(uStack_b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2792e0();
    uVar10 = param_5;
    func_0x00010bfdf5e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d94a0();
    _objc_release(uVar10);
  }
  _objc_release(uVar13);
  if (*(char *)(param_5 + lVar12) == '\x01') {
    uVar13 = uStack_b8;
    func_0x00010c27f7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar13;
    func_0x00010c2792e0();
    _objc_release(uVar13);
    func_0x00010bf20c00(uStack_b8);
    uVar13 = param_5;
    func_0x00010c25fc80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(param_1,uStack_b8);
    _objc_release(uVar13);
    lVar12 = (long)_DAT_112737910;
    dVar15 = *(double *)(param_5 + lVar12) + 5.0;
    if (param_2 <= dVar15) {
      lVar11 = (long)_DAT_112737914;
      if ((int)uVar10 != 0) goto LAB_105e2de70;
LAB_105e2deb8:
      *(undefined8 *)(param_5 + lVar11) = 0x4038000000000000;
      dVar15 = 24.0;
    }
    else {
      func_0x00010bf01b40(*(undefined8 *)(param_5 + (long)_DAT_112737944));
      if (0.5 <= dVar15) {
        if ((int)uVar10 == 0) {
          lVar11 = (long)_DAT_112737914;
          goto LAB_105e2deb8;
        }
        param_2 = param_2 - (*(double *)(param_5 + lVar12) + 5.0);
        if (param_2 <= 0.0) {
          param_2 = 0.0;
        }
        dVar15 = (double)NEON_fminnm(param_2,0x4038000000000000);
        *(double *)(param_5 + (long)_DAT_112737914) = dVar15;
      }
      else {
        lVar11 = (long)_DAT_112737914;
LAB_105e2de70:
        *(undefined8 *)(param_5 + lVar11) = 0;
        dVar15 = 0.0;
      }
    }
    func_0x00010c181140(dVar15 + *(double *)(param_5 + lVar12) + 5.0,
                        *(undefined8 *)(param_5 + (long)_DAT_11273795c));
  }
  _objc_release(uStack_b8);
LAB_105e2deec:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2df28; end: 105e2e077; -[SCSendToViewController searchQueryResultControllerDidUpdateQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2df28(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11273797c;
  if (((*(byte *)(param_2 + lVar3) & 1) == 0) &&
     (lVar1 = param_4, func_0x00010bf5fcc0(), lVar1 != 1)) {
    *(undefined1 *)(param_2 + lVar3) = 1;
  }
  if (*(long *)(param_2 + _DAT_1127378d4) != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112737884);
    puVar2 = PTR_PTR_1126b50d0;
    func_0x00010bf00860(PTR_PTR_1126b50d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de60(uVar4);
    _objc_release(puVar2);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_48,param_2);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_1;
    func_0x00010bec6440(param_2);
    func_0x00010bedcc20(param_2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105e2e078; end: 105e2e0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e078(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    func_0x00010c156b60(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + _DAT_112737878));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e2e0cc; end: 105e2e247; -[SCSendToViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **unaff_x23;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  bVar1 = *(byte *)(param_1 + _DAT_112737908);
  if ((bVar1 & 1) == 0) {
    unaff_x23 = param_4;
    func_0x00010c11da20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737980);
  func_0x00010c262760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  if ((bVar1 & 1) == 0) {
    _objc_release(unaff_x23);
  }
  ppuVar3 = param_4;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == &PTR____CFConstantStringClassReference_110e2be98) {
    _objc_release(&PTR____CFConstantStringClassReference_110e2be98);
  }
  else {
    ppuVar4 = param_4;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar3);
    if (ppuVar4 != &PTR____CFConstantStringClassReference_110e2be78) {
      *(undefined1 *)(param_1 + _DAT_112737984) = 0;
      goto LAB_105e2e21c;
    }
  }
  ppuVar3 = param_4;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c08fa60();
  *(bool *)(param_1 + _DAT_112737984) = ppuVar4 != (undefined **)0x0;
  _objc_release(ppuVar3);
LAB_105e2e21c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e2e248; end: 105e2e24b; -[SCSendToViewController presentingViewControllerForSearchQueryResultController:] */

void FUN_105e2e248(void)

{
  return;
}



/* Entry: 105e2e24c; end: 105e2e25b; -[SCSendToViewController searchQueryResultControllerShouldReloadFreshResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105e2e24c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273796c);
}



/* Entry: 105e2e25c; end: 105e2e277; -[SCSendToViewController searchQueryResultControllerDidSuspendQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e25c(long param_1)

{
  if (*(char *)(param_1 + _DAT_11273796c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be5b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__makeContentVisibleIfNotLoaded_112574790);
    return;
  }
  return;
}



/* Entry: 105e2e278; end: 105e2e3f7; -[SCSendToViewController selectBarDidPressSendTo:withSendMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e278(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_112737884;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c15ab20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_4 == 0) {
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c111ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    lVar3 = param_4;
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c25d0a0(lVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(puVar4);
  if (lVar6 != 0) {
    func_0x00010c1650a0(*(undefined8 *)(param_1 + _DAT_112737878));
  }
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  puVar4 = PTR_PTR_1126b50d0;
  func_0x00010c15da20(PTR_PTR_1126b50d0,param_2,uVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010bf78b20(*(undefined8 *)(param_1 + _DAT_112737878),param_2,uVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127378d0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af280();
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e2e3f8; end: 105e2e3fb; -[SCSendToViewController selectBarDidTapSelectBar:] */

void FUN_105e2e3f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectBarTapped_112584f98);
  return;
}



/* Entry: 105e2e3fc; end: 105e2e3ff; -[SCSendToViewController selectBar:userDidTapPillForItem:] */

void FUN_105e2e3fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectBarTapped_112584f98);
  return;
}



/* Entry: 105e2e400; end: 105e2e49f; -[SCSendToViewController selectBar:userDidTapDismissForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e400(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b3568;
  _objc_opt_class(PTR_PTR_1126b3568);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112737884);
    func_0x00010c15ab20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb940();
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e2e4a0; end: 105e2e4eb; -[SCSendToViewController selectBarDidPressMoreButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e4a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737884);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c2691e0(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e2e4ec; end: 105e2e6ff; -[SCSendToViewController selectBarDidPressNewGroupButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112737884;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c15ab20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  puVar5 = PTR_PTR_1126b50d0;
  func_0x00010c24f600(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar1);
  _objc_release(puVar5);
  lVar7 = (long)_DAT_112737954;
  puVar5 = *(undefined **)(param_1 + lVar7);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar5);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf9a080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105e2e700; end: 105e2e747;  */

void FUN_105e2e700(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2e748; end: 105e2e783; -[SCSendToViewController selectBarDidOnboardNewGroupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e748(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112737890);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2e784; end: 105e2e793; -[SCSendToViewController selectBarDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7c350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737878),PTR_s_didSwipeSelectBar_1125bca78);
  return;
}



/* Entry: 105e2e794; end: 105e2e7e3; -[SCSendToViewController showLoadingOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e794(long param_1)

{
  func_0x00010bdc7480();
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_112737988));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2e7e4; end: 105e2e82f; -[SCSendToViewController removeLoadingOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e7e4(long param_1)

{
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112737988));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2e830; end: 105e2e99f; -[SCSendToViewController _addFloatingShareButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e830(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  if (*(char *)(param_5 + _DAT_112737918) == '\x01') {
    lVar3 = (long)_DAT_11273793c;
    if (*(long *)(param_5 + lVar3) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar4 = param_3;
      _objc_release(puVar1);
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      puVar1 = PTR_PTR_1126c5148;
      _objc_alloc();
      func_0x00010c013de0(param_3 + -52.0 + -20.0,((param_4 + -52.0) - dVar4) + -20.0,
                          0x404a000000000000,0x404a000000000000);
      uVar2 = *(undefined8 *)(param_5 + lVar3);
      *(undefined **)(param_5 + lVar3) = puVar1;
      _objc_release(uVar2);
      func_0x00010c161940(*(undefined8 *)(param_5 + lVar3));
      lVar3 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + _DAT_112737948);
      func_0x00010c158760(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(lVar3);
      _objc_release(uVar2);
      _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d5bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_5 + _DAT_112737878),PTR_s_setOpsFabShown_112653110);
      return;
    }
  }
  return;
}



/* Entry: 105e2e9a0; end: 105e2e9ff; -[SCSendToViewController externalFloatingShareButtonDidTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2e9a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c1d5be0(*(undefined8 *)(param_1 + _DAT_112737878));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737884);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c268f80(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e2ea00; end: 105e2ebeb; -[SCSendToViewController _didTapExternalShareDestination:isSelected:isQueued:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ea00(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + _DAT_112737884);
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    uStack_138 = (uint)param_4;
    uStack_134 = (uint)param_5;
    lVar7 = *plStack_120;
    lStack_140 = param_1;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar6);
        _objc_release(uVar3);
        if ((int)uVar5 == 0) goto LAB_105e2eb70;
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
LAB_105e2eb70:
    param_4 = (ulong)uStack_138;
    param_5 = (ulong)uStack_134;
    param_1 = lStack_140;
  }
  _objc_release(lVar2);
  lVar1 = param_3;
  func_0x00010bf7cb00(*(undefined8 *)(param_1 + _DAT_112737878));
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_105e2ebec;
    lStack_170 = param_1;
    uStack_168 = param_4;
    uStack_160 = param_5;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(lVar1);
    lVar7 = (long)_DAT_112737968;
    if (*(long *)(lVar2 + lVar7) != 0) {
      _objc_initWeak(auStack_178,lVar2);
      uVar6 = *(undefined8 *)(lVar2 + lVar7);
      _objc_copyWeak(auStack_180,auStack_178);
      _objc_retain(lVar1);
      func_0x00010c1d3960(uVar6);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_180);
      _objc_destroyWeak(auStack_178);
    }
    _objc_release(lVar1);
    return;
  }
  return;
}



/* Entry: 105e2ebec; end: 105e2ecd3; -[SCSendToViewController _attachRecentsDebugButtonTapListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ebec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112737968;
  if (*(long *)(param_1 + lVar2) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c1d3960(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e2ecd4; end: 105e2ee17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ecd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126c5150;
    _objc_alloc(PTR_PTR_1126c5150);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c002600(puVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127378c8));
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105e2ee18; end: 105e2ee6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ee18(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,0);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127378c8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2ee6c; end: 105e2ee7b; -[SCSendToViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ee6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737898),
             PTR_s_gestureRecognizer_shouldRecogniz_1125ce060);
  return;
}



/* Entry: 105e2ee7c; end: 105e2ee7f; -[SCSendToViewController didLongPress:] */

void FUN_105e2ee7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callActionHandler__112553c50);
  return;
}



/* Entry: 105e2ee80; end: 105e2ee83; -[SCSendToViewController didPan:] */

void FUN_105e2ee80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callActionHandler__112553c50);
  return;
}



/* Entry: 105e2ee84; end: 105e2ef4f; -[SCSendToViewController _callActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ee84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c5158;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017a00();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  lVar4 = (long)_DAT_112737938;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010beecec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar2,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112737898),param_2,param_1,puVar2,
                      *(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e2ef50; end: 105e2f047; -[SCSendToViewController _submitRenderingMetricsAndCompleteRenderWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ef50(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112737930);
    _objc_retain(param_3);
    func_0x00010bf40a20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112737934);
    func_0x00010c1560c0(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127378d4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112737938);
    func_0x00010bfed1a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f860(uVar4,param_2,uVar2,uVar3,param_3);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105e2f048; end: 105e2f0ab; -[SCSendToViewController _textFieldDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2f048(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273794c);
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26bd00(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2f0ac; end: 105e2f447; -[SCSendToViewController _setupSuggestionsBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2f0ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + _DAT_112737888);
  func_0x000108f3e0c8();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127378bc);
    func_0x00010beff660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c5160;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127378a0);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112737884);
    func_0x00010c15ab20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060120(puVar4,param_2,uVar3,uVar5,*(undefined8 *)(param_1 + _DAT_1127378a8),
                        *(undefined8 *)(param_1 + _DAT_1127378ac),
                        *(undefined8 *)(param_1 + _DAT_1127378b0),
                        *(undefined8 *)(param_1 + _DAT_11273789c),uVar16,
                        *(undefined8 *)(param_1 + _DAT_1127378a4),
                        *(undefined8 *)(param_1 + _DAT_1127378b4),
                        *(undefined8 *)(param_1 + _DAT_1127378b8));
    lVar17 = (long)_DAT_112737980;
    uVar3 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar4;
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112737948);
    func_0x00010c158760();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c262760();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar17);
    func_0x00010c219b60(uVar7,param_2,0);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = uVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    uStack_80 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    uStack_78 = uVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar6;
    func_0x00010c274200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0(uVar12,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4,param_2,puVar15);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar17);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(puVar2);
    uVar1 = uVar1 & 0xffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_112737884;
  uVar16 = *(undefined8 *)(uVar1 + lVar17);
  func_0x00010c15ab20(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(uVar1 + lVar17);
  puVar4 = PTR_PTR_1126b50d0;
  func_0x00010c24f600(PTR_PTR_1126b50d0,param_2,uVar5,1,
                      &PTR____CFConstantStringClassReference_110ed7ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar16,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105e2f448; end: 105e2f4e7; -[SCSendToViewController _newGroupButtonHeaderTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2f448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112737884;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c15ab20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar3 = PTR_PTR_1126b50d0;
  func_0x00010c24f600(PTR_PTR_1126b50d0,param_2,uVar2,1,
                      &PTR____CFConstantStringClassReference_110ed7ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e2f4e8; end: 105e2f58f; -[SCSendToViewController _selectBarTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2f4e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112737884;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c15ab20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar3 = PTR_PTR_1126b50d0;
  func_0x00010c268ea0(PTR_PTR_1126b50d0,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bf7d420(*(undefined8 *)(param_1 + _DAT_112737878));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e2f590; end: 105e2f797; -[SCSendToViewController _addLoadingIndicatorIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2f590(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112737988;
  lVar2 = param_1;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar9),param_2,1);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf493a0(lVar2,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    lStack_78 = lVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar8);
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar2 + _DAT_11273797c) & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar2 + _DAT_112737930);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_11273787c);
  func_0x00010c0daf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128620(uVar6,param_2,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105e2f798; end: 105e2f7fb; -[SCSendToViewController _makeContentVisibleIfNotLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2f798(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_11273797c) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737930);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273787c);
  func_0x00010c0daf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128620(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2f7fc; end: 105e2f893; -[SCSendToViewController _isUserOlderThan18] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105e2f7fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11273788c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar1 = lVar2;
    func_0x00010befe800(lVar2,param_2,puVar3);
    bVar4 = 0x11 < lVar1;
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return bVar4;
}



/* Entry: 105e2f894; end: 105e2fb33; -[SCSendToViewController _onNextSendToEvent:] */

void FUN_105e2f894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105e2fb34;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105e2fb60;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,auStack_78);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105e2fb94;
  puStack_d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d0,auStack_78);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x105e2fbc8;
  puStack_100 = &UNK_1108434b0;
  _objc_copyWeak(auStack_f8,auStack_78);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105e2fbfc;
  puStack_128 = &UNK_1108434b0;
  _objc_copyWeak(auStack_120,auStack_78);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x105e2fc28;
  puStack_150 = &UNK_1108434b0;
  _objc_copyWeak(auStack_148,auStack_78);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x105e2fc5c;
  puStack_178 = &UNK_110849200;
  _objc_copyWeak(auStack_170,auStack_78);
  _objc_copyWeak(auStack_198,auStack_78);
  func_0x00010c0c1600(param_3);
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 105e2fb34; end: 105e2fc8f;  */

void FUN_105e2fb34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2fc90; end: 105e2fcef;  */

void FUN_105e2fc90(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e2fcf0; end: 105e2fcff; -[SCSendToViewController _setTrayExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2fcf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127378e8) = param_3;
  return;
}



/* Entry: 105e2fd00; end: 105e2fd3f; -[SCSendToViewController _hideNewGroupButtonIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2fd00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112737948);
  func_0x00010c158760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e2fd40; end: 105e2fd9b; -[SCSendToViewController _onClearSearchTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2fd40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127378c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153ce0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSearchMode_isFromSearchDismi_1125875b8,uVar2,0);
  return;
}



/* Entry: 105e2fd9c; end: 105e2fe4b; -[SCSendToViewController _setSearchMode:isFromSearchDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2fd9c(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127378c0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153e00();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    if ((param_4 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c154280();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        return;
      }
    }
  }
  else {
    param_3 = param_3 | param_4;
    func_0x00010beacf80(param_1,param_2,param_3);
  }
  *(char *)(param_1 + _DAT_112737924) = (char)param_3;
  return;
}



/* Entry: 105e2fe4c; end: 105e2ff4f; -[SCSendToViewController _onSelectedItemWithActionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2fe4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112737940;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  if (*(char *)(param_1 + _DAT_1127378e4) == '\x01') {
    uVar2 = *(ulong *)(param_1 + _DAT_112737888);
    func_0x000108faa69c();
    if ((uVar2 & 1) != 0) goto LAB_105e2ff3c;
  }
  if (*(char *)(param_1 + _DAT_112737924) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127378c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c154280();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112737884);
      puVar4 = PTR_PTR_1126b50d0;
      func_0x00010c268e80(PTR_PTR_1126b50d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8de60(uVar1,param_2,puVar4);
      _objc_release(puVar4);
    }
  }
  else {
    func_0x00010bdd0b80(param_1,param_2,param_3);
  }
LAB_105e2ff3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e2ff50; end: 105e300d7; -[SCSendToViewController _attemptAutoScrollWithActionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e2ff50(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112737884;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf529e0();
  if ((lVar7 == 0) || (lVar7 = (long)_DAT_1127378e0, *(char *)(param_1 + lVar7) != '\x01')) {
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar7 = (long)_DAT_1127378e0;
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_1127378e8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((bVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      puVar4 = PTR_PTR_1126b50d0;
      func_0x00010bf9be40(PTR_PTR_1126b50d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8de60(uVar5,param_2,puVar4);
      _objc_release(puVar4);
      goto LAB_105e300b8;
    }
  }
  if (((*(char *)(param_1 + lVar7) != '\x01') || (*(char *)(param_1 + _DAT_1127378e8) == '\x01')) &&
     ((*(byte *)(param_1 + _DAT_112737984) & 1) == 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105e300d8;
    puStack_60 = &UNK_1108ec1b0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105e30250;
    puStack_88 = &UNK_1108ec1e0;
    lStack_80 = param_1;
    lStack_58 = param_1;
    func_0x00010c0bfe00(param_3,param_2,&puStack_78,&puStack_a0);
  }
LAB_105e300b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e300d8; end: 105e3024f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e300d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar6 = param_7;
  func_0x00010c0720c0();
  if ((int)uVar6 != 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112737888);
    func_0x000108f3e208();
    if (iVar1 != 0) {
      lVar5 = (long)_DAT_112737938;
      lVar2 = *(long *)(*(long *)(param_5 + 0x20) + lVar5);
      func_0x00010bfed040(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010c1554e0();
        uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar5);
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08c9c0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar4 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010bfb68e0(uVar6);
        func_0x00010be82240(uVar4);
        _objc_release(uVar6);
        _objc_release(lVar2);
        goto LAB_105e30224;
      }
    }
  }
  func_0x00010be82380(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20));
LAB_105e30224:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105e30250; end: 105e30257;  */

void FUN_105e30250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be82250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processSelectAllAutoScrollWithF_11257e230);
  return;
}



/* Entry: 105e30258; end: 105e303e7; -[SCSendToViewController _processSelectAllAutoScrollWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e30258(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  
  lVar3 = (long)_DAT_112737938;
  dVar6 = param_1;
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar3));
  dVar6 = ((param_2 - dVar6) - param_4) + -5.0;
  func_0x00010be1f3e0(param_1,param_2,param_3,param_4,param_5);
  lVar4 = (long)_DAT_112737888;
  uVar1 = *(ulong *)(param_5 + lVar4);
  func_0x000108f3e168();
  if (((int)uVar1 != 0) &&
     (_CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)PTR__CGRectZero_110347608,
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                         *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18)), (uVar1 & 1) == 0)) {
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar3));
    param_2 = param_2 - param_1;
    dVar6 = param_2 + -5.0;
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    _objc_retain(uVar2);
    fVar5 = SUB84(param_2,0);
    func_0x000108f3e1e0(*(undefined8 *)(param_5 + lVar4));
    if (0.0 < fVar5) {
      func_0x00010bf03400((double)fVar5,PTR__OBJC_CLASS___UIView_1126aec20);
      _objc_release(uVar2);
      return;
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,dVar6,*(undefined8 *)(param_5 + lVar3),PTR_s_setContentOffset_animated__11263e2e0,1);
  return;
}



/* Entry: 105e303e8; end: 105e303f7;  */

void FUN_105e303e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 105e303f8; end: 105e30623; -[SCSendToViewController _processSingleSelectionAutoScroll:frame:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e303f8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  
  dVar8 = param_2;
  dVar9 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_8);
  uVar2 = param_8;
  func_0x00010c08fa60();
  uVar3 = param_8;
  if (((uVar2 != 0) &&
      (uVar2 = param_8,
      func_0x00010c0720c0(param_8,param_6,&PTR____CFConstantStringClassReference_110f12a18),
      (uVar2 & 1) == 0)) &&
     (uVar2 = param_8,
     func_0x00010c0720c0(param_8,param_6,&PTR____CFConstantStringClassReference_110f12d38),
     (int)uVar2 == 0)) {
    uVar2 = param_8;
    func_0x00010c0720c0(param_8,param_6,&PTR____CFConstantStringClassReference_110f12cd8);
    _objc_release(param_8);
    if ((uVar2 & 1) != 0) goto LAB_105e30478;
    lVar4 = (long)_DAT_112737938;
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar4));
    lVar5 = param_5;
    dVar7 = dVar8;
    dVar10 = dVar8;
    func_0x00010beb5880(dVar8,param_5,param_6,param_8);
    if ((int)lVar5 != 0) {
      iVar1 = (int)*(undefined8 *)(param_5 + _DAT_112737888);
      func_0x000108f3e0dc();
      if ((iVar1 == 0) ||
         (lVar5 = param_5, func_0x00010bdd9f20(param_5,param_6,param_8), (int)lVar5 != 0)) {
        func_0x00010becd7e0(param_5);
        func_0x00010c182300(0,dVar7,*(undefined8 *)(param_5 + lVar4),param_6,1);
      }
      goto LAB_105e30478;
    }
    lVar5 = param_5;
    func_0x00010bdd9f20(param_5,param_6,param_8);
    if ((int)lVar5 == 0) goto LAB_105e30478;
    func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
    dVar10 = dVar10 - dVar9;
    lVar5 = (long)_DAT_112737888;
    uVar2 = *(ulong *)(param_5 + lVar5);
    func_0x000108f3e17c();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
    dVar7 = (dVar8 + dVar9) - param_4 * (double)uVar2;
    dVar9 = param_4 + dVar8 + (param_2 - dVar7);
    if (param_2 <= dVar7) {
      dVar9 = param_4 + dVar8;
    }
    uVar3 = *(ulong *)(param_5 + lVar4);
    _objc_retain(uVar3);
    fVar6 = SUB84(dVar7,0);
    if (dVar10 <= dVar9) {
      dVar9 = dVar10;
    }
    if (dVar8 < dVar9) {
      func_0x000108f3e1f4(*(undefined8 *)(param_5 + lVar5));
      if (0.0 < fVar6) {
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_105e30624;
        puStack_90 = &UNK_110858dc0;
        uStack_80 = 0;
        uStack_88 = uVar3;
        dStack_78 = dVar9;
        func_0x00010bf03400((double)fVar6,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_a8);
      }
      else {
        func_0x00010c182300(0,dVar9,uVar3,param_6,1);
      }
    }
  }
  _objc_release(uVar3);
LAB_105e30478:
  _objc_release(param_8);
  return;
}



/* Entry: 105e30624; end: 105e3062f;  */

void FUN_105e30624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 105e30630; end: 105e30927; -[SCSendToViewController _storySectionInView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105e30630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
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
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127378dc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c074e20();
  _objc_release(uVar1);
  if ((int)uVar10 == 0) {
    lVar13 = (long)_DAT_112737938;
    puVar6 = *(undefined **)(param_1 + lVar13);
    func_0x00010c0df2e0();
    puVar2 = puVar6;
    if (0 < (long)puVar6) {
      puVar11 = (undefined *)0x0;
      uVar10 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
      do {
        puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,puVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = *(long *)(param_1 + lVar13);
        func_0x00010c262e00(lVar9,param_2,uVar10,puVar2);
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 != 0) {
          lVar7 = lVar9;
          func_0x00010c13fda0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0720c0();
          _objc_release(lVar7);
          if ((int)lVar8 != 0) {
            uVar1 = *(undefined8 *)(param_1 + _DAT_112737870);
            func_0x00010c106120();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar1;
            func_0x00010bf4b900();
            _objc_release(uVar1);
            puVar12 = (undefined *)0xffffffffffffffff;
            if ((long)(puVar11 + 1) < (long)puVar6) {
              puVar12 = puVar11 + 1;
            }
            if ((int)uVar10 == 0) {
              puVar12 = puVar11;
            }
            _objc_release(lVar9);
LAB_105e308e4:
            _objc_release();
            goto LAB_105e308e8;
          }
        }
        _objc_release(lVar9);
        _objc_release();
        puVar11 = puVar11 + 1;
      } while (puVar6 != puVar11);
    }
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar13 = (long)_DAT_112737938;
    puVar2 = *(undefined **)(param_1 + lVar13);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      uVar10 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          puVar12 = *(undefined **)(lStack_128 + (long)puVar11 * 8);
          uVar3 = *(ulong *)(param_1 + lVar13);
          func_0x00010c262e00(uVar3,param_2,uVar10,puVar12);
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 != 0) {
            uVar4 = uVar3;
            func_0x00010c13fda0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c0720c0();
            _objc_release(uVar4);
            if ((uVar5 & 1) != 0) {
              func_0x00010c1554e0();
              _objc_release(uVar3);
              goto LAB_105e308e4;
            }
          }
          _objc_release(uVar3);
          puVar11 = puVar11 + 1;
        } while (puVar6 != puVar11);
        puVar6 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release();
  }
  puVar12 = (undefined *)0xffffffffffffffff;
LAB_105e308e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = puVar2;
    func_0x00010bec4da0();
    puVar11 = puVar6;
    if (-1 < (long)puVar6) {
      lVar13 = (long)_DAT_112737938;
      puVar11 = *(undefined **)(puVar2 + lVar13);
      func_0x00010c0deec0(puVar11,param_2,puVar6);
      if (0 < (long)puVar11) {
        puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,puVar11 + -1,puVar6);
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 != (undefined *)0x0) {
          uVar10 = *(undefined8 *)(puVar2 + lVar13);
          func_0x00010c08c980(uVar10,param_2,puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0();
          _objc_release(uVar10);
          func_0x00010bf4c7c0(*(undefined8 *)(puVar2 + lVar13));
        }
        _objc_release(puVar12);
        puVar11 = puVar12;
      }
    }
    return puVar11;
  }
  return puVar12;
}



/* Entry: 105e30928; end: 105e30a0b; -[SCSendToViewController _topYOfSectionAfterStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105e30928(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                    undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  lVar1 = param_5;
  func_0x00010bec4da0();
  if (-1 < lVar1) {
    lVar5 = (long)_DAT_112737938;
    lVar2 = *(long *)(param_5 + lVar5);
    func_0x00010c0deec0(lVar2,param_6,lVar1);
    if (0 < lVar2) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,lVar2 + -1,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        dVar6 = NAN;
      }
      else {
        uVar4 = *(undefined8 *)(param_5 + lVar5);
        func_0x00010c08c980(uVar4,param_6,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _objc_release(uVar4);
        func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar5));
        dVar6 = ((param_2 + param_4 * 0.5) - param_1) + -5.0;
      }
      _objc_release(puVar3);
      return dVar6;
    }
  }
  return NAN;
}



/* Entry: 105e30a0c; end: 105e30a6b; -[SCSendToViewController _shouldScrollPastStoriesForSelectedSectionType:currentOffsetY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105e30a0c(double param_1,long param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  func_0x00010becd7e0();
  uVar1 = *(ulong *)(param_2 + _DAT_112737888);
  func_0x000108f3e1b8();
  dVar3 = param_1 + 1.0;
  if ((uVar1 & 1) == 0) {
    dVar3 = param_1;
  }
  return dVar3 < dVar2;
}



/* Entry: 105e30a6c; end: 105e30a93; -[SCSendToViewController _canScrollToNextForSectionType:] */

uint FUN_105e30a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a38);
  return (uint)param_3 ^ 1;
}



/* Entry: 105e30a94; end: 105e30c03; -[SCSendToViewController _getFrameOfLastItemUsingHeaderFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e30a94(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112737938;
  lVar1 = *(long *)(param_2 + lVar7);
  func_0x00010c0df2e0();
  if (0 < lVar1) {
    lVar1 = 0;
    uVar5 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    do {
      uVar6 = *(ulong *)(param_2 + lVar7);
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c9c0(uVar6,param_3,uVar5,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uVar3 = uVar6;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      _objc_release(uVar6);
      if ((uVar3 & 1) != 0) goto LAB_105e30b6c;
      lVar1 = lVar1 + 1;
      lVar4 = *(long *)(param_2 + lVar7);
      func_0x00010c0df2e0();
    } while (lVar1 < lVar4);
  }
  lVar1 = 0;
LAB_105e30b6c:
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar4 = *(long *)(param_2 + lVar7);
  func_0x00010c0deec0(lVar4,param_3,lVar1);
  func_0x00010bfed020(puVar2,param_3,lVar4 + -1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c08c980(uVar5,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar5);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 105e30c04; end: 105e30c0f; -[SCSendToViewController defaultProjectNameV2] */

void FUN_105e30c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_send_to_1126350c0);
  return;
}



/* Entry: 105e30c10; end: 105e30c13; -[SCSendToViewController scrollViewForTray:] */

void FUN_105e30c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollView_112632480);
  return;
}



/* Entry: 105e30c14; end: 105e30f33; -[SCSendToViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e30c14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737940,0);
  _objc_storeStrong(param_1 + _DAT_1127378dc,0);
  _objc_storeStrong(param_1 + _DAT_1127378d8,0);
  _objc_storeStrong(param_1 + _DAT_112737964,0);
  _objc_storeStrong(param_1 + _DAT_112737960,0);
  _objc_storeStrong(param_1 + _DAT_112737968,0);
  _objc_storeStrong(param_1 + _DAT_11273790c,0);
  _objc_storeStrong(param_1 + _DAT_112737920,0);
  _objc_storeStrong(param_1 + _DAT_11273795c,0);
  _objc_storeStrong(param_1 + _DAT_112737958,0);
  _objc_storeStrong(param_1 + _DAT_112737944,0);
  _objc_storeStrong(param_1 + _DAT_1127378ec,0);
  _objc_storeStrong(param_1 + _DAT_112737934,0);
  _objc_storeStrong(param_1 + _DAT_1127378d4,0);
  _objc_storeStrong(param_1 + _DAT_1127378d0,0);
  _objc_storeStrong(param_1 + _DAT_1127378cc,0);
  _objc_storeStrong(param_1 + _DAT_1127378c8,0);
  _objc_storeStrong(param_1 + _DAT_1127378c4,0);
  _objc_storeStrong(param_1 + _DAT_1127378c0,0);
  _objc_storeStrong(param_1 + _DAT_1127378b8,0);
  _objc_storeStrong(param_1 + _DAT_1127378b4,0);
  _objc_storeStrong(param_1 + _DAT_1127378bc,0);
  _objc_storeStrong(param_1 + _DAT_1127378b0,0);
  _objc_storeStrong(param_1 + _DAT_1127378ac,0);
  _objc_storeStrong(param_1 + _DAT_1127378a8,0);
  _objc_storeStrong(param_1 + _DAT_1127378a4,0);
  _objc_storeStrong(param_1 + _DAT_1127378a0,0);
  _objc_storeStrong(param_1 + _DAT_11273789c,0);
  _objc_storeStrong(param_1 + _DAT_112737888,0);
  _objc_storeStrong(param_1 + _DAT_112737894,0);
  _objc_storeStrong(param_1 + _DAT_112737898,0);
  _objc_storeStrong(param_1 + _DAT_112737890,0);
  _objc_storeStrong(param_1 + _DAT_11273788c,0);
  _objc_storeStrong(param_1 + _DAT_112737954,0);
  _objc_storeStrong(param_1 + _DAT_112737988,0);
  _objc_storeStrong(param_1 + _DAT_11273793c,0);
  _objc_storeStrong(param_1 + _DAT_112737938,0);
  _objc_storeStrong(param_1 + _DAT_112737980,0);
  _objc_storeStrong(param_1 + _DAT_112737948,0);
  _objc_storeStrong(param_1 + _DAT_11273794c,0);
  _objc_storeStrong(param_1 + _DAT_112737930,0);
  _objc_storeStrong(param_1 + _DAT_112737878,0);
  _objc_storeStrong(param_1 + _DAT_112737950,0);
  _objc_storeStrong(param_1 + _DAT_112737870,0);
  _objc_storeStrong(param_1 + _DAT_112737884,0);
  _objc_storeStrong(param_1 + _DAT_112737874,0);
  _objc_storeStrong(param_1 + _DAT_11273787c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737880,0);
  return;
}



/* Entry: 105e30f34; end: 105e3107f; -[SCSendToReplySectionViewModelSource initWithConfiguration:lastInteractionDataService:friendmojiPresenter:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_105e30f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ed3e0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    func_0x000108faa718(param_7);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105e31080; end: 105e31143; -[SCSendToReplySectionViewModelSource snapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105e31080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105e31144;
  puStack_58 = &UNK_1108ec210;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = 1;
  uStack_50 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105e31144; end: 105e3125f;  */

void FUN_105e31144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901e254();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07be00();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010bddc4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e31260; end: 105e313bf; -[SCSendToReplySectionViewModelSource selectionRecipientViewModelGeneratorForSectionIdentifier:] */

void FUN_105e31260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfed360();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 8);
  func_0x00010bfebbc0();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c290c80();
  _objc_release(uVar3);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e313c0;
  puStack_90 = &UNK_1108ec2d0;
  uStack_70 = uVar4;
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_60 = 1;
  uStack_88 = param_3;
  uStack_80 = uVar2;
  uStack_68 = uVar6;
  uStack_5f = uVar1;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  ppuVar5 = &puStack_a8;
  _objc_retainBlock(ppuVar5);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 105e313c0; end: 105e3163b;  */

void FUN_105e313c0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_130 [8];
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [8];
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  puStack_d8 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105e3163c;
  uStack_88 = 0x105e3164c;
  uStack_80 = 0;
  uStack_110 = param_5 & 1 | 8;
  if (param_6 <= *(long *)(param_1 + 0x38) - 1U) {
    uStack_110 = 1;
  }
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105e31654;
  puStack_e8 = &UNK_1108ec240;
  puStack_a0 = puStack_d8;
  _objc_copyWeak(auStack_d0,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_af = *(undefined1 *)(param_1 + 0x48);
  uStack_e0 = uVar3;
  uStack_c8 = param_5;
  uStack_c0 = param_6;
  uStack_b8 = uStack_110;
  uStack_b0 = param_3;
  _objc_copyWeak(auStack_130,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_128 = param_5;
  uStack_108 = param_3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_120 = param_6;
  _objc_retain(uVar5);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_107 = *(undefined1 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0060(param_2);
  uVar3 = puStack_a0[5];
  _objc_retain(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_130);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_d0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e3163c; end: 105e31653;  */

void FUN_105e3163c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e31654; end: 105e31713;  */

void FUN_105e31654(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010901e254(param_2,3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bddc4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e31714; end: 105e317b3;  */

void FUN_105e31714(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bddc440(*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e317b4; end: 105e3181b;  */

void FUN_105e317b4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x51);
  }
  else {
    uVar1 = 0;
  }
  FUN_105e53d54(param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                *(char *)(param_1 + 0x50),uVar1,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e3181c; end: 105e31963; -[SCSendToReplySectionViewModelSource _cellViewModelForGroup:isSelected:row:indexKey:totalCount:sectionIdentifier:longPressMinDuration:isRecentlyActive:enableAvatarBackground:groupStyle:] */

void FUN_105e3181c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfceb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb97a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar1 = param_4;
  func_0x000105e54ea4(param_1,param_4,uVar2,param_5,0,param_6,param_7,param_8,param_9,0x1b);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e31964; end: 105e31ba7; -[SCSendToReplySectionViewModelSource _cellViewModelForReplySection:snapchatter:bitmojiAvatarViewType:isSelected:row:totalCount:addActivityIndicator:enableAvatarBackground:groupStyle:] */

void FUN_105e31964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,ulong param_11)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 1;
    FUN_105e53938();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar10);
    uVar2 = 2;
    FUN_105e53938();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar10);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfed360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bfa7d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar2 = uVar10;
  FUN_105e53a20(uVar10,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (param_11 & 0xfffffffffffffffe) == 8;
  uVar7 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c237920();
  _objc_release(uVar7);
  uVar11 = 0;
  if (lVar5 != 0) {
    uVar11 = (uint)bVar1;
  }
  uVar6 = 0;
  if ((uVar11 & (uint)uVar8) == 0) {
    uVar6 = uVar2;
  }
  lVar4 = lVar5;
  if (bVar1 && (uVar8 & 1) == 0) {
    lVar4 = 0;
  }
  uVar9 = param_4;
  func_0x000105e562cc(*(undefined8 *)(param_1 + 0x30),param_4,param_5,uVar6,lVar4,param_6,param_7,
                      uVar3,param_8,param_3,6,param_11,param_9._1_1_);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 105e31ba8; end: 105e31c13; -[SCSendToReplySectionViewModelSource .cxx_destruct] */

void FUN_105e31ba8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e31c14; end: 105e31d23; -[SCSendToSuggestedSnapchatterSectionViewModelSource initWithConfiguration:friendmojiPresenter:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_105e31c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed3e8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    func_0x000108faa718(param_6);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = 1;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105e31d24; end: 105e31ddf; -[SCSendToSuggestedSnapchatterSectionViewModelSource snapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105e31d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105e31de0;
  puStack_50 = &UNK_1108ec300;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105e31de0; end: 105e31ea3;  */

void FUN_105e31de0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07be00(param_2);
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010bddc480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e31ea4; end: 105e31fff; -[SCSendToSuggestedSnapchatterSectionViewModelSource _cellViewModelForQuickAddV2Section:snapchatter:isSelected:row:totalCount:addActivityIndicator:] */

void FUN_105e31ea4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfed360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c25d0;
  _objc_alloc();
  func_0x00010c0462c0();
  uVar4 = param_4;
  func_0x000105e56154(*(undefined8 *)(param_1 + 0x18),param_4,0,uVar1,param_5,param_6,uVar2,param_7,
                      param_3,6,1,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e32000; end: 105e32047; -[SCSendToSuggestedSnapchatterSectionViewModelSource .cxx_destruct] */

void FUN_105e32000(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e32048; end: 105e3229f; -[SCSendToViewModelSource initWithConfiguration:userInfoProvider:friendmojiPresenter:replySectionViewModelSource:suggestedSnapchatterSectionViewModelSource:lastInteractionDataService:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:hasPublicProfile:subscriptionInfoProvider:] */

undefined8 *
FUN_105e32048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126ed3f0;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
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
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bfebbc0();
    *(char *)(puVar1 + 10) = (char)uVar2;
    func_0x000108faa718(param_10);
    puVar1[0xb] = param_1;
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = param_13;
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
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



/* Entry: 105e322a0; end: 105e32453; -[SCSendToViewModelSource snapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105e322a0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    ppuVar2 = *(undefined ***)(param_1 + 0x18);
    _objc_retain(ppuVar2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar5);
    uVar3 = uVar5;
    func_0x00010bfed360();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_initWeak(auStack_58,param_1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105e32454;
    puStack_90 = &UNK_1108ec330;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = (undefined1)uVar1;
    uStack_88 = uVar3;
    _objc_retain(param_3);
    uStack_80 = param_3;
    ppuStack_78 = ppuVar2;
    uStack_70 = uVar5;
    _objc_retain(uVar5);
    _objc_retain(ppuVar2);
    _objc_retain(uVar3);
    ppuVar4 = &puStack_a8;
    _objc_retainBlock(ppuVar4);
    _objc_release(uStack_70);
    _objc_release(ppuStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x28);
    func_0x00010c269d40(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c244780();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105e32454; end: 105e32587;  */

void FUN_105e32454(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25b500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07be00();
  _objc_release(param_2);
  lVar4 = param_1;
  func_0x00010be87020(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105e32588; end: 105e3266b; -[SCSendToViewModelSource sectionLayoutGeneratorForSectionIdentifier:] */

void FUN_105e32588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a38);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12c98);
    ppuVar3 = &PTR___NSConcreteGlobalBlock_1108ec380;
    if ((int)uVar1 == 0) {
      ppuVar3 = &PTR___NSConcreteGlobalBlock_1108ec3a0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf19720();
    _objc_release(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_105e3266c;
    puStack_40 = &UNK_1108ec360;
    ppuVar3 = &puStack_58;
    uStack_38 = uVar1;
    _objc_retainBlock(ppuVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105e3266c; end: 105e3268f;  */

bool FUN_105e3266c(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 0x20) <= param_2;
}



/* Entry: 105e32690; end: 105e32867; -[SCSendToViewModelSource sortableSnapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105e32690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_90;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  uVar1 = uVar4;
  func_0x00010bfed360();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x105e327d0;
  puStack_78 = &UNK_1108ec3c0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_70 = uVar1;
  uStack_68 = param_3;
  uStack_60 = uVar3;
  uStack_58 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retainBlock(&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105e32868; end: 105e32a03; -[SCSendToViewModelSource selectionGroupViewModelGeneratorForSectionIdentifier:] */

void FUN_105e32868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfed360(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar7);
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12e58);
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c290ca0();
    uVar1 = (undefined4)uVar3;
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c290cc0();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c274480();
  _objc_release(uVar5);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105e32a04;
  puStack_a0 = &UNK_1108ec3f0;
  uStack_98 = uVar7;
  uStack_90 = uVar2;
  uStack_88 = param_3;
  uStack_80 = uVar3;
  uStack_78 = uVar8;
  uStack_70 = uVar4;
  uStack_68 = uVar1;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  _objc_retain(uVar7);
  ppuVar6 = &puStack_b8;
  _objc_retainBlock(ppuVar6);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 105e32a04; end: 105e32b63;  */

void FUN_105e32a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb97a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c07be00();
  uVar4 = param_2;
  func_0x000105e54ea4(uVar5,param_2,uVar3,param_3,param_4,param_5,uVar2,param_6,uVar1,0x1b);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e32b64; end: 105e32d2f; -[SCSendToViewModelSource selectionRecipientViewModelGeneratorForSectionIdentifier:] */

void FUN_105e32b64(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  ppuVar5 = &puStack_c0;
  _objc_retain(param_3);
  if (param_3 == &PTR____CFConstantStringClassReference_110f12c78) {
    puVar6 = *(undefined1 **)(param_1 + 0x20);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)puVar6;
    func_0x00010c15a960();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = *(undefined1 **)(param_1 + 0x18);
    _objc_retain(puVar6);
    uVar7 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar7);
    uVar2 = uVar7;
    func_0x00010bfed360();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf862e0();
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105e32d30;
    puStack_a8 = &UNK_1108ec480;
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_a0 = uVar2;
    _objc_retain(param_3);
    uStack_70 = (undefined1)uVar4;
    ppuStack_98 = param_3;
    puStack_90 = puVar6;
    uStack_88 = uVar7;
    uStack_78 = uVar8;
    uStack_6f = uVar1;
    _objc_retain(uVar7);
    _objc_retain(puVar6);
    _objc_retain(uVar2);
    _objc_retainBlock(&puStack_c0);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_release(ppuStack_98);
    _objc_release(uStack_a0);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar7);
  }
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 105e32d30; end: 105e32fd3;  */

void FUN_105e32d30(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  puStack_d0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105e32fd4;
  uStack_88 = 0x105e32fe4;
  uStack_80 = 0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105e32fec;
  puStack_f8 = &UNK_1108ec420;
  puStack_a0 = puStack_d0;
  _objc_copyWeak(auStack_c8,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  uStack_b0 = param_3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_e8 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = uVar2;
  _objc_retain(uVar3);
  uStack_af = *(undefined1 *)(param_1 + 0x50);
  uStack_d8 = uVar3;
  _objc_copyWeak(auStack_138,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_130 = param_5;
  uStack_128 = param_6;
  uStack_118 = param_3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uStack_120 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c0c0060(param_2);
  uVar2 = puStack_a0[5];
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_c8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e32fd4; end: 105e32feb;  */

void FUN_105e32fd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e32fec; end: 105e330d7;  */

void FUN_105e32fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be87020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e330d8; end: 105e33177;  */

void FUN_105e330d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be86fc0(*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e33178; end: 105e331df;  */

void FUN_105e33178(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x49);
  }
  else {
    uVar1 = 0;
  }
  FUN_105e53d54(param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                *(char *)(param_1 + 0x48),uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e331e0; end: 105e332a3; -[SCSendToViewModelSource selectionStoryViewModelGeneratorForSectionIdentifier:useCarouselSection:] */

void FUN_105e331e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105e332a4;
  puStack_58 = &UNK_1108ec4b0;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_50 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105e332a4; end: 105e33377;  */

void FUN_105e332a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9e440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e33378; end: 105e33633; -[SCSendToViewModelSource _selectionStoryCellViewModel:isSelected:storyThumbnailImage:row:totalCount:showPlaceTagCarousel:sectionIdentifier:useCarouselSection:isEligibleForCrossPostingSpotlightToStories:] */

void FUN_105e33378(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,char param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_6);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = param_4;
  if (param_11 == '\0') {
    uVar11 = *(undefined8 *)(param_2 + 0x58);
    uVar9 = *(undefined8 *)(param_2 + 0x78);
    _objc_retain(param_10);
    _objc_retain(param_4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120();
    func_0x000108f3b6e0(uVar11,param_4,param_5,param_7,param_8,param_10,uVar10,param_9,1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_10);
    _objc_release(param_4);
    _objc_release(uVar6);
    _objc_release(uVar9);
    puVar8 = PTR_PTR_1126b52f8;
    func_0x00010c099fc0(PTR_PTR_1126b52f8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_10);
    _objc_retain(param_4);
    uVar6 = uVar10;
    func_0x000108f3e0f0();
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c074e20();
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2583c0();
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120();
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258a60();
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258640();
    func_0x000108f3c620(param_1,param_4,param_5,param_6,param_10,param_7,uVar10,1,uVar6,(char)uVar9)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_10);
    _objc_release(param_4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126b52f8;
    func_0x00010bf32460(PTR_PTR_1126b52f8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}


