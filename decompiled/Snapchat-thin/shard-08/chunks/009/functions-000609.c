/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10678ba50; end: 10678bbbb; -[SCMemoriesOperaFeaturePlugin _didOpenView] */

void FUN_10678ba50(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  bVar1 = *(byte *)(param_2 + 0xa1);
  uVar2 = param_2 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  if ((bVar1 & 1) == 0) {
    func_0x00010c0eaea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c3b30;
    _objc_opt_class(PTR_PTR_1126c3b30);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar3;
      func_0x00010bf16300();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 != 0) && (*(ulong *)(param_2 + 0xa8) != uVar2)) {
        _objc_retain(uVar2);
        uVar5 = *(undefined8 *)(param_2 + 0xa8);
        *(ulong *)(param_2 + 0xa8) = uVar2;
        _objc_release(uVar5);
        uVar6 = param_2 + 0x10;
        _objc_loadWeakRetained();
        uVar7 = uVar6;
        _objc_opt_respondsToSelector();
        _objc_release(uVar6);
        if ((uVar7 & 1) != 0) {
          lVar8 = param_2 + 0x10;
          _objc_loadWeakRetained(lVar8);
          func_0x00010c0eaf40();
          _objc_release(lVar8);
        }
        func_0x00010c2744e0(uVar3);
        param_2 = param_2 + 0x80;
        _objc_loadWeakRetained(param_2);
        lVar8 = param_2;
        func_0x00010c27a680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c283bc0(param_1);
        _objc_release(lVar8);
        _objc_release(param_2);
      }
      _objc_release(uVar2);
    }
  }
  else {
    func_0x00010c0eaea0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10678bbbc; end: 10678bc3b; -[SCMemoriesOperaFeaturePlugin _didFinishPresentViewer] */

void FUN_10678bbbc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef68e0();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1650e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10678bc3c; end: 10678bc43; -[SCMemoriesOperaFeaturePlugin actionHandlerSessionDismissOpera:] */

void FUN_10678bc3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAfterViewModelIsStable__11255e2b0,0);
  return;
}



/* Entry: 10678bc44; end: 10678bcb7; -[SCMemoriesOperaFeaturePlugin actionHandlerSessionExitActionMenu:] */

void FUN_10678bc44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0a5c0(param_1,param_2,0,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10678bcb8; end: 10678bcbf; -[SCMemoriesOperaFeaturePlugin actionHandlerSessionEnterActionMenuFromLongPress:] */

undefined8 FUN_10678bcb8(void)

{
  return 1;
}



/* Entry: 10678bcc0; end: 10678bcfb; -[SCMemoriesOperaFeaturePlugin actionHandlerSessionDismissOperaAndJumpToDreamsTab:] */

void FUN_10678bcc0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x88)) {
    return;
  }
  func_0x00010be02440(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 10678bcfc; end: 10678bd03; -[SCMemoriesOperaFeaturePlugin didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10678bcfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd26d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleShakeAtPage_1125d2358);
  return;
}



/* Entry: 10678bd04; end: 10678bd9b; -[SCMemoriesOperaFeaturePlugin _ensureOperaIsInActionMenu:page:] */

void FUN_10678bd04(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c22ff80();
  if ((iVar1 != 0) && (*(byte *)(param_1 + 0xa0) != param_3)) {
    *(char *)(param_1 + 0xa0) = (char)param_3;
    uVar2 = param_4;
    func_0x000107b27df4();
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + 0x80;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010c2bf380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf1c0();
      _objc_release(lVar3);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10678bd9c; end: 10678be43; -[SCMemoriesOperaFeaturePlugin _enabledDataSaverConservativeModeIfNeeded] */

void FUN_10678bd9c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000108ec0e28();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c072c20();
  if (iVar2 == 0) {
    lVar1 = -2;
  }
  else {
    lVar1 = -1;
  }
  if (((ulong)(lVar3 + lVar1) < 7) && ((0x55U >> (ulong)((uint)(lVar3 + lVar1) & 0x1f) & 1) != 0)) {
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf64320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8fea0();
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10678be44; end: 10678c11f; -[SCMemoriesOperaFeaturePlugin dependentPlugins] */

void FUN_10678be44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 in_x4;
  undefined8 uVar14;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cdcb8;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010c0c9be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c9bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_initWeak(auStack_70,*(undefined8 *)(param_3 + 0xc0));
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10678c120;
  puStack_88 = &UNK_11093ac28;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c214040(puVar2);
  func_0x00010c1d9a00(puVar2);
  func_0x00010c202640(puVar2);
  func_0x00010c1f7fc0(puVar2);
  uVar14 = 0x3fe999999999999a;
  func_0x00010c214340(0x3fe999999999999a,puVar2);
  lVar3 = param_3;
  func_0x00010c1067a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfdc0(puVar2);
  _objc_release(lVar3);
  func_0x00010c0da620(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_a8,param_3);
  _objc_release(param_3);
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10678c6ec;
  puStack_b8 = &UNK_11085c360;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1d3360(puVar2);
  puVar11 = auStack_a8;
  _objc_copyWeak(auStack_d8,puVar11);
  func_0x00010c1d3380(puVar2);
  ppuVar12 = &puStack_60;
  uVar13 = 1;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar11);
  _objc_retain(ppuVar12);
  _objc_retain(uVar13);
  _objc_retain(in_x4);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_10678c498;
  puStack_198 = &UNK_11085b810;
  _objc_retain(in_x4);
  ppuVar6 = &puStack_1b0;
  uStack_190 = in_x4;
  _objc_retainBlock();
  ppuVar7 = ppuVar12;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cdc58;
  _objc_retain();
  _objc_opt_class(puVar5);
  ppuVar8 = ppuVar7;
  _objc_opt_isKindOfClass(ppuVar7,puVar5);
  ppuVar1 = ppuVar7;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar7);
  ppuVar8 = ppuVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126cdcc0;
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = (undefined **)(puVar2 + 0x20);
    _objc_loadWeakRetained();
    ppuVar9 = ppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)ppuVar6[2])(ppuVar6,0);
    }
    else {
      puVar5 = PTR_PTR_1126af4b8;
      _objc_alloc();
      func_0x00010c047e40(uVar14,param_2);
      puStack_1d8 = &uStack_1e0;
      uStack_1e0 = 0;
      uStack_1d0 = 0x3042000000;
      uStack_1c8 = 0x10678c544;
      uStack_1c0 = 0x10678c550;
      _objc_initWeak(auStack_1b8,0);
      ppuVar8 = ppuVar9;
      func_0x00010c119a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar6);
      _objc_copyWeak(auStack_1e8,puVar2 + 0x28);
      ppuVar10 = ppuVar8;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_storeWeak(puStack_1d8 + 5,ppuVar10);
      if (ppuVar10 != (undefined **)0x0) {
        puVar2 = puVar2 + 0x28;
        _objc_loadWeakRetained(puVar2);
        func_0x00010befa120();
        _objc_release(puVar2);
      }
      _objc_release(ppuVar10);
      _objc_destroyWeak(auStack_1e8);
      _objc_release(ppuVar6);
      __Block_object_dispose(&uStack_1e0,8);
      _objc_destroyWeak(auStack_1b8);
      _objc_release(puVar5);
    }
  }
  else {
    ppuVar9 = ppuVar1;
    func_0x00010bf0af00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be12f60(uVar14,param_2,puVar5);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(uStack_190);
  _objc_release(in_x4);
  _objc_release(uVar13);
  _objc_release(ppuVar12);
  _objc_release(puVar11);
  return;
}



/* Entry: 10678c120; end: 10678c497;  */

void FUN_10678c120(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10678c498;
  puStack_98 = &UNK_11085b810;
  _objc_retain(param_7);
  ppuVar2 = &puStack_b0;
  uStack_90 = param_7;
  _objc_retainBlock();
  uVar3 = param_5;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cdc58;
  _objc_retain();
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar5 = uVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126cdcc0;
  if (uVar5 == 0) {
    uVar5 = param_3 + 0x20;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (uVar6 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2,0);
    }
    else {
      puVar4 = PTR_PTR_1126af4b8;
      _objc_alloc();
      func_0x00010c047e40(param_1,param_2);
      puStack_d8 = &uStack_e0;
      uStack_e0 = 0;
      uStack_d0 = 0x3042000000;
      uStack_c8 = 0x10678c544;
      uStack_c0 = 0x10678c550;
      _objc_initWeak(auStack_b8,0);
      uVar5 = uVar6;
      func_0x00010c119a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar2);
      _objc_copyWeak(auStack_e8,param_3 + 0x28);
      uVar7 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_storeWeak(puStack_d8 + 5,uVar7);
      if (uVar7 != 0) {
        param_3 = param_3 + 0x28;
        _objc_loadWeakRetained(param_3);
        func_0x00010befa120();
        _objc_release(param_3);
      }
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_e8);
      _objc_release(ppuVar2);
      __Block_object_dispose(&uStack_e0,8);
      _objc_destroyWeak(auStack_b8);
      _objc_release(puVar4);
    }
  }
  else {
    uVar6 = uVar1;
    func_0x00010bf0af00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be12f60(param_1,param_2,puVar4);
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10678c498; end: 10678c533;  */

void FUN_10678c498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10678c534;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 10678c534; end: 10678c557;  */

void FUN_10678c534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010678c540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10678c558; end: 10678c673;  */

void FUN_10678c558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10678c674;
  puStack_50 = &UNK_11085b810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10678c680;
  puStack_78 = &UNK_110859a38;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uStack_70 = uVar3;
  func_0x00010c0c0800(param_2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10678c690;
  puStack_a8 = &UNK_110850308;
  uStack_a0 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_98,param_1 + 0x30);
  func_0x000100162d98("APPSTORE",&puStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10678c674; end: 10678c68f;  */

void FUN_10678c674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010678c67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10678c690; end: 10678c6eb;  */

void FUN_10678c690(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf86d40(lVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12d360();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10678c6ec; end: 10678c87b;  */

void FUN_10678c6ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cdcc8;
    _objc_alloc_init(PTR_PTR_1126cdcc8);
    func_0x00010c2102e0();
    func_0x00010c1f7f00(puVar2);
    func_0x00010c0b2820(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10678c87c; end: 10678c9e3; +[SCMemoriesOperaFeaturePlugin _fetchPHAssetThumbnail:targetSize:completion:] */

void FUN_10678c87c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c18ba80();
    func_0x00010c1ec960(puVar1);
    func_0x00010c210f80(puVar1);
    puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c1357a0(param_1 * dVar3,param_2 * dVar3,puVar2);
    _objc_release(puVar2);
    _objc_release(param_6);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10678c9e4; end: 10678c9ef;  */

void FUN_10678c9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010678c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10678c9f0; end: 10678c9f7; -[SCMemoriesOperaFeaturePlugin memoriesSnapThumbnailServices] */

undefined8 FUN_10678c9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10678c9f8; end: 10678ca27; -[SCMemoriesOperaFeaturePlugin setMemoriesSnapThumbnailServices:] */

void FUN_10678c9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10678ca28; end: 10678ca2f; -[SCMemoriesOperaFeaturePlugin preferences] */

undefined8 FUN_10678ca28(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10678ca30; end: 10678ca5f; -[SCMemoriesOperaFeaturePlugin setPreferences:] */

void FUN_10678ca30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10678ca60; end: 10678ca67; -[SCMemoriesOperaFeaturePlugin noDepBlizzardLogger] */

undefined8 FUN_10678ca60(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10678ca68; end: 10678ca97; -[SCMemoriesOperaFeaturePlugin setNoDepBlizzardLogger:] */

void FUN_10678ca68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10678ca98; end: 10678cbab; -[SCMemoriesOperaFeaturePlugin .cxx_destruct] */

void FUN_10678ca98(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10678cbac; end: 10678cdeb; -[SCMemoriesOperaFeaturePluginBuilder initWithCurrentPageTracker:memoriesLegacyLogger:memoriesOperaActionHandlerSessionBuilder:memoriesOperaMediaManagerBuilder:shakeToReportAnnouncer:circumstanceEngine:cameraConfig:featureSettingsService:coreConfigProvider:grapheneRegistry:] */

undefined8 *
FUN_10678cbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f3010;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 10678cdec; end: 10678cf4f; -[SCMemoriesOperaFeaturePluginBuilder buildWithBaseView:dataSource:memoriesOperaPresenterDelegate:memoriesOperaSessionConfig:pageHeight:sourcePageName:] */

void FUN_10678cdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cdcc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bff71c0(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = param_2;
  func_0x00010c0c9be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c65a0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c1067a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfdc0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c0da620(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd6a0(puVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10678cf50; end: 10678cf57; -[SCMemoriesOperaFeaturePluginBuilder memoriesSnapThumbnailServices] */

undefined8 FUN_10678cf50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10678cf58; end: 10678cf87; -[SCMemoriesOperaFeaturePluginBuilder setMemoriesSnapThumbnailServices:] */

void FUN_10678cf58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10678cf88; end: 10678cf8f; -[SCMemoriesOperaFeaturePluginBuilder preferences] */

undefined8 FUN_10678cf88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10678cf90; end: 10678cfbf; -[SCMemoriesOperaFeaturePluginBuilder setPreferences:] */

void FUN_10678cf90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10678cfc0; end: 10678cfc7; -[SCMemoriesOperaFeaturePluginBuilder noDepBlizzardLogger] */

undefined8 FUN_10678cfc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10678cfc8; end: 10678cff7; -[SCMemoriesOperaFeaturePluginBuilder setNoDepBlizzardLogger:] */

void FUN_10678cfc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10678cff8; end: 10678d0ab; -[SCMemoriesOperaFeaturePluginBuilder .cxx_destruct] */

void FUN_10678cff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10678d0ac; end: 10678d12f; -[SCMemoriesVOperaOnboardingPlugin initWithPreferences:shouldUseOriginalStyle:] */

undefined1 *
FUN_10678d0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10678d130; end: 10678d13b; -[SCMemoriesVOperaOnboardingPlugin setPlaylistItemController:] */

void FUN_10678d130(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10678d13c; end: 10678d147; -[SCMemoriesVOperaOnboardingPlugin setOperaControlling:] */

void FUN_10678d13c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10678d148; end: 10678d227; -[SCMemoriesVOperaOnboardingPlugin registeredEventsForOperaSession] */

void FUN_10678d148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_50 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_48 = puVar2;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)ppuVar7;
  func_0x00010c0720c0(ppuVar7,param_2,puVar2);
  if ((int)puVar5 == 0) {
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar5 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined1 *)ppuVar7;
      func_0x00010c0720c0(ppuVar7,param_2,puVar2);
      if (((ulong)puVar5 & 1) == 0) {
        _objc_release(puVar2);
      }
      else {
        lVar6 = *(long *)(puVar1 + 0x18);
        func_0x00010c10fd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        if (lVar6 != 0) {
          func_0x00010bde2f20(puVar1,param_2,*(undefined8 *)(puVar1 + 0x18),0);
        }
      }
      goto LAB_10678d2d0;
    }
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010be6a020(puVar1,param_2,uVar8);
LAB_10678d2d0:
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 10678d228; end: 10678d35b; -[SCMemoriesVOperaOnboardingPlugin operaViewDidSendEvent:page:params:] */

void FUN_10678d228(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      if ((uVar2 & 1) == 0) {
        _objc_release(puVar1);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x18);
        func_0x00010c10fd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (lVar4 != 0) {
          func_0x00010bde2f20(param_1,param_2,*(undefined8 *)(param_1 + 0x18),0);
        }
      }
      goto LAB_10678d2d0;
    }
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010be6a020(param_1,param_2,param_4);
LAB_10678d2d0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10678d35c; end: 10678d363; -[SCMemoriesVOperaOnboardingPlugin didTapToDismissOnboardingViewController:] */

void FUN_10678d35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeOnboarding_shouldResume_112556568,param_3,1);
  return;
}



/* Entry: 10678d364; end: 10678d4bf; -[SCMemoriesVOperaOnboardingPlugin _onMediaStartWithPage:] */

void FUN_10678d364(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb6800();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126cdcd8;
    _objc_alloc();
    func_0x00010bfee220();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c10eda0(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10678d4c0; end: 10678d4eb;  */

void FUN_10678d4c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10678d4ec; end: 10678d543; -[SCMemoriesVOperaOnboardingPlugin _shouldShowVOperaOnboarding] */

bool FUN_10678d4ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 == 0;
}



/* Entry: 10678d544; end: 10678d5bf; -[SCMemoriesVOperaOnboardingPlugin _pauseOpera] */

void FUN_10678d544(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,0,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10678d5c0; end: 10678d68f; -[SCMemoriesVOperaOnboardingPlugin _completeOnboarding:shouldResume:] */

void FUN_10678d5c0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10678d690;
  puStack_48 = &UNK_110845ce0;
  lStack_40 = param_1;
  uStack_38 = param_4;
  func_0x00010bf84b00(param_3,param_2,1,&puStack_60);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 10678d690; end: 10678d6d3;  */

void FUN_10678d690(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29e000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10678d6d4; end: 10678d713; -[SCMemoriesVOperaOnboardingPlugin .cxx_destruct] */

void FUN_10678d6d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10678d714; end: 10678d783; -[SCMemoriesVOperaOnboardingViewController init:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10678d714(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3020;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274fd08) = param_3;
    func_0x00010c1c8b80(puVar1);
    func_0x00010c1c8c00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10678d784; end: 10678d8af; -[SCMemoriesVOperaOnboardingViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678d784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(char *)(param_5 + _DAT_11274fd08) == '\x01') {
    puVar2 = PTR_PTR_1126cdce0;
    _objc_alloc(PTR_PTR_1126cdce0);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5e3d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5e3d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c014740(param_1,param_2,param_3,param_4,puVar2);
    _objc_release(ppuVar1);
  }
  else {
    puVar2 = PTR_PTR_1126cdce8;
    _objc_alloc(PTR_PTR_1126cdce8);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0(puVar2);
  }
  _objc_release(puVar3);
  func_0x00010c18b5e0(puVar2);
  func_0x00010c222380(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10678d8b0; end: 10678d8eb; -[SCMemoriesVOperaOnboardingViewController didCompleteDiscoverVOperaV2Onboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678d8b0(long param_1)

{
  param_1 = param_1 + _DAT_11274fd0c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10678d8ec; end: 10678d927; -[SCMemoriesVOperaOnboardingViewController didCompleteSpotlightOnboardingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678d8ec(long param_1)

{
  param_1 = param_1 + _DAT_11274fd0c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10678d928; end: 10678d92f; -[SCMemoriesVOperaOnboardingViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_10678d928(void)

{
  return 1;
}



/* Entry: 10678d930; end: 10678d937; -[SCMemoriesVOperaOnboardingViewController shouldAlwaysBeSilentlyPresented] */

undefined8 FUN_10678d930(void)

{
  return 1;
}



/* Entry: 10678d938; end: 10678d957; -[SCMemoriesVOperaOnboardingViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678d938(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274fd0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10678d958; end: 10678d96b; -[SCMemoriesVOperaOnboardingViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678d958(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274fd0c,param_3);
  return;
}



/* Entry: 10678d96c; end: 10678d97b; -[SCMemoriesVOperaOnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678d96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fd0c);
  return;
}



/* Entry: 10678d97c; end: 10678db9b; -[SCMemoriesOperaSessionPresenter initWithContextOperaPluginProvider:commerceOperaShopScreenshopPluginProvider:memoriesOperaFeaturePluginBuilder:memoriesOperaMediaManagerBuilder:playlistDataSourceBuilder:operaSessionScopeExposer:operaSessionScopeServices:circumstanceEngine:preferences:memoriesClientGenStoryLoadingScreenScopeExposer:] */

undefined8 *
FUN_10678d97c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f3028;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cdcf0;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 10678db9c; end: 10678e1a7; -[SCMemoriesOperaSessionPresenter presentWithDataModels:firstDisplayGroupDataModel:memoriesOperaSessionConfig:parentViewController:baseView:pageHeight:sourcePageName:topInset:transitionMode:transitionAnimator:delegate:shouldDismissPresentingOpera:] */

void FUN_10678db9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined *param_12,
                  undefined8 param_13,char param_14)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar2 = param_3;
  func_0x00010c07ab40();
  if ((int)lVar2 == 0) {
    uVar12 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf22ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(param_3 + 0x58) = uVar12;
    _objc_release(uVar13);
    puVar4 = PTR_PTR_1126b23f0;
    _objc_alloc();
    func_0x00010c29e220(param_7);
    func_0x00010c29d360(param_7);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ae0();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b23f8;
    _objc_alloc(PTR_PTR_1126b23f8);
    func_0x00010c0087a0();
    puVar14 = param_7;
    func_0x00010c2356a0();
    puVar6 = PTR_PTR_1126b2400;
    _objc_alloc();
    func_0x00010c018aa0(param_2);
    puVar7 = param_7;
    func_0x00010bf61a00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    if (puVar8 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
    }
    else {
      _objc_retain(puVar8);
      puVar9 = puVar8;
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar7);
    uVar12 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010bf22a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_3 + 0x60) = uVar12;
    _objc_release(uVar13);
    func_0x00010befa120(puVar9);
    lVar10 = *(long *)(param_3 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c297ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    if (lVar2 != 0) {
      func_0x00010befa120(puVar9);
    }
    puVar7 = param_7;
    func_0x00010c230020();
    if ((int)puVar7 != 0) {
      lVar11 = *(long *)(param_3 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010bf556a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      if (lVar10 != 0) {
        func_0x00010befa120(puVar9);
      }
      _objc_release(lVar10);
    }
    if ((int)puVar14 != 0) {
      iVar1 = (int)*(undefined8 *)(param_3 + 0x30);
      func_0x000108ec17e4();
      if (iVar1 != 0) {
        puVar14 = PTR_PTR_1126cdcf8;
        _objc_alloc(PTR_PTR_1126cdcf8);
        func_0x000108ec182c(*(undefined8 *)(param_3 + 0x30));
        func_0x00010c038260(puVar14);
        func_0x00010befa120(puVar9);
        _objc_release(puVar14);
      }
    }
    _objc_retain(param_12);
    puVar14 = param_12;
    if (param_12 == (undefined *)0x0) {
      puVar14 = param_7;
      func_0x00010c22ef40();
      if ((int)puVar14 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = PTR_PTR_1126cdd00;
        _objc_alloc();
        func_0x00010c033f80();
      }
    }
    uVar12 = *(undefined8 *)(param_3 + 0x40);
    puVar7 = puVar9;
    func_0x00010bf51e00();
    func_0x00010bf23920(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    param_3 = param_3 + 0x38;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf9d620();
    _objc_release(param_3);
    puVar7 = param_7;
    func_0x00010c2315e0();
    if (((ulong)puVar7 & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar7);
    }
    _objc_release(uVar12);
    _objc_release(puVar14);
    _objc_release(lVar2);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    FUN_10678e580(*(undefined8 *)(param_3 + 0x70),1);
    if (param_14 != '\0') {
      func_0x00010bf831e0(param_3);
      _objc_initWeak(auStack_80,param_3);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_10678e1a8;
      puStack_e8 = &UNK_11093ac88;
      _objc_copyWeak(auStack_a8,auStack_80);
      _objc_retain(param_5);
      uStack_e0 = param_5;
      _objc_retain(param_6);
      uStack_d8 = param_6;
      _objc_retain(param_7);
      puStack_d0 = param_7;
      _objc_retain(param_8);
      uStack_c8 = param_8;
      _objc_retain(param_9);
      uStack_88 = param_11;
      uStack_c0 = param_9;
      uStack_a0 = param_1;
      uStack_98 = param_10;
      uStack_90 = param_2;
      _objc_retain(param_12);
      puStack_b8 = param_12;
      _objc_retain(param_13);
      uStack_b0 = param_13;
      ppuVar3 = &puStack_100;
      _objc_retainBlock();
      uVar12 = *(undefined8 *)(param_3 + 0x68);
      *(undefined ***)(param_3 + 0x68) = ppuVar3;
      _objc_release(uVar12);
      _objc_release(uStack_b0);
      _objc_release(puStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(puStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10678e1a8; end: 10678e21f;  */

void FUN_10678e1a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c10f0a0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70),lVar1,
                        param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),0);
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10678e220; end: 10678e227; -[SCMemoriesOperaSessionPresenter resumePlayback] */

void FUN_10678e220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_resumePlayback_11262cf90);
  return;
}



/* Entry: 10678e228; end: 10678e26f; -[SCMemoriesOperaSessionPresenter isPresenting] */

bool FUN_10678e228(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 10678e270; end: 10678e2a3; -[SCMemoriesOperaSessionPresenter dismiss] */

void FUN_10678e270(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_dismiss_1125be578);
    return;
  }
  return;
}



/* Entry: 10678e2a4; end: 10678e2d7; -[SCMemoriesOperaSessionPresenter dismissAtOnce] */

void FUN_10678e2a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf831f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_dismissAtOnce_1125be620);
    return;
  }
  return;
}



/* Entry: 10678e2d8; end: 10678e2df; -[SCMemoriesOperaSessionPresenter navigateToItem:] */

void FUN_10678e2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_navigateToItem__112613210);
  return;
}



/* Entry: 10678e2e0; end: 10678e2ef; -[SCMemoriesOperaSessionPresenter navigateToNextGroupAfterDeferredNavigation] */

void FUN_10678e2e0(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x60),PTR_s_navigateToNextGroupAfterDeferred_112613218);
    return;
  }
  return;
}



/* Entry: 10678e2f0; end: 10678e327; -[SCMemoriesOperaSessionPresenter updateDataModels:] */

void FUN_10678e2f0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c284ee0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 10678e328; end: 10678e387; -[SCMemoriesOperaSessionPresenter updateCameraRollPlaylistDataModels:displayingItemInDataModelsArray:] */

void FUN_10678e328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x58);
    func_0x00010c284140(uVar2,param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) {
      func_0x00010bf82f40(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10678e388; end: 10678e38f; -[SCMemoriesOperaSessionPresenter currentPlaybackItem] */

void FUN_10678e388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_currentPlaybackItem_1125b5820);
  return;
}



/* Entry: 10678e390; end: 10678e397; -[SCMemoriesOperaSessionPresenter currentPlaybackGroup] */

void FUN_10678e390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_currentPlaybackGroup_1125b5818);
  return;
}



/* Entry: 10678e398; end: 10678e39f; -[SCMemoriesOperaSessionPresenter _applicationDidEnterBackground] */

void FUN_10678e398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_dimissIfNoPresentedViewControlle_1125bd540);
  return;
}



/* Entry: 10678e3a0; end: 10678e3a3; -[SCMemoriesOperaSessionPresenter operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_10678e3a0(void)

{
  return;
}



/* Entry: 10678e3a4; end: 10678e3a7; -[SCMemoriesOperaSessionPresenter operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_10678e3a4(void)

{
  return;
}



/* Entry: 10678e3a8; end: 10678e3ab; -[SCMemoriesOperaSessionPresenter operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_10678e3a8(void)

{
  return;
}



/* Entry: 10678e3ac; end: 10678e3af; -[SCMemoriesOperaSessionPresenter operaPresenterDidCancelDismissing:] */

void FUN_10678e3ac(void)

{
  return;
}



/* Entry: 10678e3b0; end: 10678e3b3; -[SCMemoriesOperaSessionPresenter operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_10678e3b0(void)

{
  return;
}



/* Entry: 10678e3b4; end: 10678e3b7; -[SCMemoriesOperaSessionPresenter operaPresenterDidFailToPresent:] */

void FUN_10678e3b4(void)

{
  return;
}



/* Entry: 10678e3b8; end: 10678e3bb; -[SCMemoriesOperaSessionPresenter operaPresenterDidFinishDismissing:] */

void FUN_10678e3b8(void)

{
  return;
}



/* Entry: 10678e3bc; end: 10678e447; -[SCMemoriesOperaSessionPresenter operaPresenterDidTearDown:] */

void FUN_10678e3bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010678e434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10678e448; end: 10678e44b; -[SCMemoriesOperaSessionPresenter operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_10678e448(void)

{
  return;
}



/* Entry: 10678e44c; end: 10678e44f; -[SCMemoriesOperaSessionPresenter operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_10678e44c(void)

{
  return;
}



/* Entry: 10678e450; end: 10678e50b; -[SCMemoriesOperaSessionPresenter .cxx_destruct] */

void FUN_10678e450(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10678e50c; end: 10678e57f; -[SCGrapheneMemoriesOperaExcessiveMetric2 init] */

undefined1 * FUN_10678e50c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3030;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10678e580; end: 10678e5f7;  */

void FUN_10678e580(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11093acb8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10678e5f8; end: 10678e7ef; -[SCMemoriesContentFetcherImpl initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:mergedDataSource:dataObjectContext:memoriesExperimentService:] */

undefined1 *
FUN_10678e5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
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
  puStack_68 = PTR_PTR_1126f3038;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
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



/* Entry: 10678e7f0; end: 10678eb03; -[SCMemoriesContentFetcherImpl fetchCameraRollAssetsWithRequest:resultHandler:] */

void FUN_10678e7f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2670;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010be122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035d40();
  _objc_release(lVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  func_0x00010bfaebe0(param_3);
  lVar2 = param_3;
  func_0x00010c124e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf95200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be76c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bfaebe0(param_3);
  lVar2 = param_1;
  func_0x00010bdcf800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2688;
  _objc_opt_new(PTR_PTR_1126b2688);
  func_0x00010c2b59c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c124e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6b00(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010beff360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 == 0) {
    func_0x00010c099040(param_3);
    func_0x00010c0df840(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2add00(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  func_0x00010c2a87c0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010bfab780(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10678eb04; end: 10678ecaf;  */

void FUN_10678eb04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    puVar3 = PTR_PTR_1126cdd08;
    func_0x00010bf2a860(PTR_PTR_1126cdd08);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
    _objc_release(puVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010beff360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126cdd08;
      func_0x00010bf2a860(PTR_PTR_1126cdd08);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar3);
      _objc_release(puVar3);
    }
    else {
      _objc_copyWeak(auStack_48,param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar4);
      _objc_retain(param_2);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      func_0x00010be0fbc0(lVar1);
      _objc_release(uVar5);
      _objc_release(param_2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_48);
    }
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 8));
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10678ecb0; end: 10678ed8f;  */

void FUN_10678ecb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    lVar4 = *(long *)(param_1 + 0x30);
    puVar3 = PTR_PTR_1126cdd08;
    func_0x00010bf2a860(PTR_PTR_1126cdd08);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
  }
  else {
    puVar3 = puVar1;
    func_0x00010be23ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cdd08;
    func_0x00010c0fa920(PTR_PTR_1126cdd08);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10678ed90; end: 10678f0bb; -[SCMemoriesContentFetcherImpl observeCameraRollAssetsWithRequest:] */

void FUN_10678ed90(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2670;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010be122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035d40();
  _objc_release(lVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  func_0x00010bfaebe0(param_3);
  lVar2 = param_3;
  func_0x00010c124e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf95200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be76c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bfaebe0(param_3);
  lVar2 = param_1;
  func_0x00010bdcf800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2688;
  _objc_opt_new();
  func_0x00010c2b59c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c124e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6b00(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c2a87c0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4b40(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010beff360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 == 0) {
    func_0x00010c099040(param_3);
    func_0x00010c0df840(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2add00(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar7 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puVar6 = PTR_PTR_1126ae6b8;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10678f0bc; end: 10678f22f;  */

void FUN_10678f0bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10678f230;
  puStack_80 = &UNK_11093ad38;
  _objc_copyWeak(auStack_68,param_1 + 0x38);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = param_2;
  _objc_retain(uVar3);
  uStack_70 = uVar3;
  func_0x00010bfab780(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  _objc_copyWeak(auStack_a0,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10678f230; end: 10678f39f;  */

void FUN_10678f230(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if (param_2 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010beff360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        _objc_copyWeak(auStack_48,param_1 + 0x30);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar5);
        _objc_retain(param_2);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar4);
        func_0x00010be0fbc0(lVar1);
        _objc_release(uVar4);
        _objc_release(param_2);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_48);
        goto LAB_10678f364;
      }
    }
    puVar3 = PTR_PTR_1126cdd08;
    func_0x00010bf2a860(PTR_PTR_1126cdd08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
  }
LAB_10678f364:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10678f3a0; end: 10678f453;  */

void FUN_10678f3a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar2 = lVar1;
    func_0x00010be23ba0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cdd08;
    func_0x00010c0fa920(PTR_PTR_1126cdd08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10678f454; end: 10678f48f;  */

void FUN_10678f454(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10678f490; end: 10678f547; -[SCMemoriesContentFetcherImpl _fetchAssetsInAlbumsToExcludeWithRequest:resultHandler:] */

void FUN_10678f490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10678f548;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10678f548; end: 10678f71b;  */

void FUN_10678f548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010beff360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be12280(uVar2);
  lVar3 = lVar1;
  func_0x000108ebefe8(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),PTR____NSArray0__struct_11034ab48);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bcb88;
    _objc_alloc();
    func_0x00010bf529e0(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    _objc_retain(puVar4);
    func_0x00010c030440();
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x20);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
    auVar6 = NEON_ext(auVar6,auVar6,8,1);
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    func_0x00010bf97e80(lVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(auVar6._8_8_);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10678f71c; end: 10678f753;  */

void FUN_10678f71c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10678f754; end: 10678f9e3;  */

void FUN_10678f754(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2670;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be122a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035d40();
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaebe0(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c124e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf95200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2688;
  _objc_opt_new(PTR_PTR_1126b2688);
  func_0x00010c2b59c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c124e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6b00(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2a87c0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4b40(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(puVar1);
  func_0x00010bfab780(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10678f9e4; end: 10678fa5b;  */

void FUN_10678f9e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010c0e7120(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010befa140(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0e7120(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 8));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10678fa5c; end: 10678fb87; -[SCMemoriesContentFetcherImpl _getValidAssetsWithAllFetchResult:fetchResultsToExclude:request:] */

void FUN_10678fa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfa9d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10678fb88;
  puStack_60 = &UNK_11093adc8;
  uStack_58 = param_4;
  puStack_50 = puVar1;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010bf97e80(uVar2,param_2,&puStack_78);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10678fb88; end: 10678fcdf;  */

void FUN_10678fb88(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar6);
      uVar4 = param_2;
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
LAB_10678fc7c:
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf529e0();
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010c099040();
      if (lVar2 == lVar3) {
        *param_4 = 1;
      }
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010c099040(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be136f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__fetchRecentSnapEntriesWithLimit_112562758,uVar4);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar6);
      }
      uVar1 = *(ulong *)(lVar7 * 8);
      uVar4 = param_2;
      func_0x00010bf4b900();
      if ((uVar1 & 1) != 0) {
        _objc_release(lVar6);
        goto LAB_10678fc7c;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}


