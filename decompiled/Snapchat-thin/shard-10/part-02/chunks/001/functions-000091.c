/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b6d8c0; end: 107b6d8c7; -[SCOperaWebViewHeaderView gestureRecognizer:shouldReceivePress:] */

undefined8 FUN_107b6d8c0(void)

{
  return 1;
}



/* Entry: 107b6d8c8; end: 107b6d923; -[SCOperaWebViewHeaderView didLongPressExitButton:] */

void FUN_107b6d8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb8e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6d924; end: 107b6d9fb; -[SCOperaWebViewHeaderView didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6d924(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,uVar1);
  _objc_release(param_7);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_5 + _DAT_11276aff8);
  func_0x00010bf20c00();
  _CGRectContainsPoint(-param_3,-param_4,param_3 * 3.0,param_4 * 3.0,param_1,param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b6d9fc; end: 107b6da0b; -[SCOperaWebViewHeaderView setShimmering:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6d9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ff530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b018),PTR_s_setShimmering__11265d770);
  return;
}



/* Entry: 107b6da0c; end: 107b6da1f; -[SCOperaWebViewHeaderView hideActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6da0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b00c),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107b6da20; end: 107b6da33; -[SCOperaWebViewHeaderView showActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6da20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b00c),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 107b6da34; end: 107b6da43; -[SCOperaWebViewHeaderView urlBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b6da34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b028);
}



/* Entry: 107b6da44; end: 107b6da53; -[SCOperaWebViewHeaderView exitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b6da44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aff8);
}



/* Entry: 107b6da54; end: 107b6da73; -[SCOperaWebViewHeaderView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6da54(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b02c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b6da74; end: 107b6da87; -[SCOperaWebViewHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6da74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b02c,param_3);
  return;
}



/* Entry: 107b6da88; end: 107b6db73; -[SCOperaWebViewHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6da88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276b02c);
  _objc_storeStrong(param_1 + _DAT_11276aff8,0);
  _objc_storeStrong(param_1 + _DAT_11276b028,0);
  _objc_storeStrong(param_1 + _DAT_11276b00c,0);
  _objc_storeStrong(param_1 + _DAT_11276b018,0);
  _objc_storeStrong(param_1 + _DAT_11276b014,0);
  _objc_storeStrong(param_1 + _DAT_11276b010,0);
  _objc_storeStrong(param_1 + _DAT_11276b024,0);
  _objc_storeStrong(param_1 + _DAT_11276affc,0);
  _objc_storeStrong(param_1 + _DAT_11276b000,0);
  _objc_storeStrong(param_1 + _DAT_11276b004,0);
  _objc_storeStrong(param_1 + _DAT_11276b008,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aff4,0);
  return;
}



/* Entry: 107b6db74; end: 107b6dbfb; -[SCOperaWebViewNavigationItem initWithUrl:urlType:] */

undefined1 *
FUN_107b6db74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa078;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b6dbfc; end: 107b6dc1f; -[SCOperaWebViewNavigationItem copyWithZone:] */

undefined8 FUN_107b6dbfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b6dc20; end: 107b6dc73; -[SCOperaWebViewNavigationItem hash] */

ulong FUN_107b6dc20(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfde980(lVar1);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = -uVar2;
  if (-1 < (long)uVar2) {
    uVar3 = uVar2;
  }
  uVar3 = uVar3 | lVar1 << 0x20;
  uVar3 = ~uVar3 + uVar3 * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  return uVar3 ^ uVar3 >> 0x16;
}



/* Entry: 107b6dc74; end: 107b6dd13; -[SCOperaWebViewNavigationItem isEqual:] */

long FUN_107b6dc74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b6dcf8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_107b6dcf8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107b6dcf8;
    }
  }
  lVar3 = 1;
LAB_107b6dcf8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b6dd14; end: 107b6dd1b; -[SCOperaWebViewNavigationItem url] */

undefined8 FUN_107b6dd14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b6dd1c; end: 107b6dd23; -[SCOperaWebViewNavigationItem urlType] */

undefined8 FUN_107b6dd1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107b6dd24; end: 107b6dd2f; -[SCOperaWebViewNavigationItem .cxx_destruct] */

void FUN_107b6dd24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b6dd30; end: 107b6dee3; -[SCOperaWebViewWrapper initWithUrlInterceptor:enableJavaScriptBridge:safeBrowsingChecker:configDict:audioSession:] */

undefined1 *
FUN_107b6dd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fa080;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined1 **)((long)puVar1 + 0x98) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1ae3a0(param_3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar4);
    func_0x00010c139de0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b6dee4; end: 107b6e3c3; -[SCOperaWebViewWrapper resetWebViewWithConfigDict:enableJavaScriptBridge:] */

void FUN_107b6dee4(long param_1,undefined *param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [136];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010c0d3c80();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5;
  _objc_release(uVar9);
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar9 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  _objc_release(uVar9);
  if (param_4 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release();
    }
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = PTR_PTR_1126d6b98;
    _objc_opt_new();
    puVar10 = (undefined8 *)(param_1 + 0x20);
    uVar9 = *puVar10;
    *puVar10 = puVar2;
    _objc_release(uVar9);
    _objc_initWeak(auStack_e0,param_1);
    uVar9 = *puVar10;
    param_2 = auStack_e0;
    _objc_copyWeak(auStack_e8);
    func_0x00010bef69c0(uVar9);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
  }
  puVar2 = PTR_PTR_1126d6bb0;
  _objc_alloc_init();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_release(uVar9);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar9 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d6bb8;
    _objc_alloc();
    func_0x00010c031f80();
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar9);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c291760();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar11);
  lVar5 = lVar11;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar11);
      }
      func_0x00010c12e260(lVar3);
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    lVar5 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  if (lVar3 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar9);
  puVar10 = (undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  func_0x00010c18b5e0(*puVar10);
  uVar9 = *puVar10;
  func_0x00010c152980(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126d6bc0;
  _objc_alloc();
  func_0x00010c014140(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar9 = *puVar10;
  *puVar10 = puVar2;
  _objc_release(uVar9);
  func_0x00010c18b5e0(*puVar10);
  uVar9 = *puVar10;
  func_0x00010c152980(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(uVar9);
  lVar5 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf7a160();
  _objc_release(lVar5);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c224f00();
  }
  plVar12 = (long *)(param_1 + 0x28);
  lVar4 = *plVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x80) = (char)lVar5;
  _objc_release(lVar4);
  lVar4 = *plVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x75) = (char)lVar5;
  _objc_release(lVar4);
  lVar4 = *plVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x76) = (char)lVar5;
  _objc_release(lVar4);
  lVar4 = *plVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x82) = (char)lVar5;
  _objc_release(lVar4);
  lVar4 = *plVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + 0x77) = (char)lVar5;
  _objc_release(lVar4);
  lVar5 = *plVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar5;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar9);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar4 + 0x20);
  _objc_destroyWeak(auStack_e0);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 == 0) goto LAB_107b6e578;
  puVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf32ee0();
  if (puVar6 == (undefined *)0x0) {
    lVar5 = param_3 + 0xa8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c27be00();
    _objc_release(lVar5);
    lVar5 = param_3 + 0xa8;
    _objc_loadWeakRetained();
    func_0x00010c07dbe0();
    _objc_release(lVar5);
    puVar6 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf999c0(uVar9);
LAB_107b6e554:
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  else {
    puVar6 = puVar2;
    func_0x00010bf32ee0();
    if (puVar6 == (undefined *)0x0) {
      func_0x00010c0f8cc0(*(undefined8 *)(param_3 + 0xa0));
    }
    else {
      puVar6 = puVar2;
      func_0x00010bf32ee0();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d6ba0;
        func_0x00010c247520(PTR_PTR_1126d6ba0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d6ba8;
        func_0x00010bf1c440(PTR_PTR_1126d6ba8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf32ee0(puVar8);
        _objc_release(puVar7);
        goto LAB_107b6e554;
      }
    }
  }
  _objc_release(puVar2);
LAB_107b6e578:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b6e3c4; end: 107b6e59b;  */

void FUN_107b6e3c4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_107b6e578;
  puVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf32ee0();
  if (puVar2 == (undefined *)0x0) {
    lVar4 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c27be00();
    _objc_release(lVar4);
    lVar4 = param_1 + 0xa8;
    _objc_loadWeakRetained();
    func_0x00010c07dbe0();
    _objc_release(lVar4);
    puVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf999c0(uVar6);
LAB_107b6e554:
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf32ee0();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c0f8cc0(*(undefined8 *)(param_1 + 0xa0));
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf32ee0();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR_PTR_1126d6ba0;
        func_0x00010c247520(PTR_PTR_1126d6ba0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d6ba8;
        func_0x00010bf1c440(PTR_PTR_1126d6ba8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf32ee0(puVar5);
        _objc_release(puVar3);
        goto LAB_107b6e554;
      }
    }
  }
  _objc_release(puVar1);
LAB_107b6e578:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b6e59c; end: 107b6e623; -[SCOperaWebViewWrapper tearDown] */

void FUN_107b6e59c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xa0),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  func_0x00010c224f00(*(undefined8 *)(param_1 + 0x20),param_2,0);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6e624; end: 107b6e6e3; -[SCOperaWebViewWrapper dealloc] */

void FUN_107b6e624(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x68));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b6e810;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar2);
  puStack_50 = PTR_PTR_1126fa080;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b6e6e4; end: 107b6e80f;  */

void FUN_107b6e6e4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        (**(code **)(*(long *)(lVar4 * 8) + 0x10))(*(long *)(lVar4 * 8),0);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107b6e810; end: 107b6e817;  */

void FUN_107b6e810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107b6e818; end: 107b6e923; -[SCOperaWebViewWrapper showPendingUI] */

void FUN_107b6e818(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c239b20();
    _objc_release(lVar1);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7bbc0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c288d60(*(undefined4 *)(param_1 + 0x70));
    _objc_release(lVar1);
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bdc2b80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b8a0(lVar1,param_2,uVar2,0,param_1);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  if (*(char *)(param_1 + 0x91) == '\x01') {
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf769c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107b6e924; end: 107b6ef53; -[SCOperaWebViewWrapper webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_107b6e924(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  int iVar13;
  undefined *puStack_d0;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar11 == (undefined *)0x0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
    goto LAB_107b6eea0;
  }
  uVar2 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 8) == 0) {
LAB_107b6eb98:
    uVar3 = param_4;
    func_0x00010c269f20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar4 = param_4;
      func_0x00010c269f20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c077440();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar6 & 1) == 0) {
        (**(code **)(param_5 + 0x10))(param_5,1);
        goto LAB_107b6ee98;
      }
    }
    uVar3 = uVar2;
    func_0x00010c0b6940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c0720c0();
    if (((uVar3 & 1) == 0) && (uVar3 = uVar4, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    else {
      lVar5 = param_1;
      func_0x00010be624a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        if (*(long *)(param_1 + 0xb8) == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar7;
          func_0x00010bf1f3c0();
          _objc_release(uVar7);
          if ((int)uVar10 != 0) {
            (**(code **)(param_5 + 0x10))(param_5,1);
            goto LAB_107b6ee88;
          }
        }
        uVar10 = *(undefined8 *)(param_1 + 0x68);
        _objc_retain(uVar10);
        _objc_sync_enter(uVar10);
        lVar12 = *(long *)(param_1 + 0x68);
        puVar11 = puVar1;
        func_0x00010beec820(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar11);
        if (lVar12 == 0) {
          puStack_d0 = param_5;
          func_0x00010bf51e00();
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_70 = puStack_d0;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar11;
          func_0x00010c0d3c80();
          uVar7 = *(undefined8 *)(param_1 + 0x68);
          puVar9 = puVar1;
          func_0x00010beec820(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar7);
          _objc_release(puVar9);
        }
        else {
          puVar11 = *(undefined **)(param_1 + 0x68);
          puStack_d0 = puVar1;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = param_5;
          _objc_retainBlock(param_5);
          func_0x00010befa120(puVar11);
        }
        _objc_release(puVar8);
        _objc_release(puVar11);
        _objc_release(puStack_d0);
        _objc_sync_exit(uVar10);
        _objc_release(uVar10);
        puVar11 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_opt_new(PTR__OBJC_CLASS___NSUUID_1126b0270);
        func_0x00010bedc0a0(param_1);
        if (lVar12 == 0) {
          func_0x00010bdde0e0(param_1);
        }
        _objc_release(puVar11);
      }
      else {
        func_0x00010c28fa80(lVar5);
        func_0x00010bdfcbe0(param_1);
        lVar12 = lVar5;
        func_0x00010c28fa80();
        if (lVar12 == 0) {
          (**(code **)(param_5 + 0x10))(param_5,1);
        }
        else {
          (**(code **)(param_5 + 0x10))(param_5,0);
        }
      }
LAB_107b6ee88:
      _objc_release(lVar5);
    }
    _objc_release(uVar4);
  }
  else {
    func_0x00010c1ae3c0();
    _objc_initWeak(auStack_78,param_1);
    uVar3 = param_4;
    func_0x00010c269f20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    if (uVar3 == 0) {
      uVar4 = param_4;
      func_0x00010c2477c0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c077440();
    if (uVar3 == 0) {
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    iVar13 = (int)*(undefined8 *)(param_1 + 8);
    uVar3 = uVar2;
    func_0x00010c0b6940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c083820();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar2);
    func_0x00010c068f20();
    _objc_release(lVar5);
    _objc_release(uVar3);
    if (iVar13 == 0) {
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      goto LAB_107b6eb98;
    }
    (**(code **)(param_5 + 0x10))(param_5,0);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
LAB_107b6ee98:
  _objc_release(uVar2);
LAB_107b6eea0:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(param_3);
  _objc_loadWeakRetained(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107b6ef54; end: 107b6ef6b;  */

void FUN_107b6ef54(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107b6ef6c; end: 107b6f32b; -[SCOperaWebViewWrapper webView:shouldStartLoadWithRequest:navigationType:] */

undefined8 FUN_107b6ef6c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0b6940(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar6 = 1;
    goto LAB_107b6f2d4;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010c1ae3c0();
    _objc_initWeak(auStack_68,param_1);
    uVar7 = *(ulong *)(param_1 + 8);
    uVar1 = param_4;
    func_0x00010c0b6940(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c083820();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    func_0x00010c068f20();
    _objc_release(lVar8);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    if ((uVar7 & 1) != 0) {
      uVar6 = 0;
      goto LAB_107b6f2d4;
    }
  }
  uVar1 = param_4;
  func_0x00010c0b6940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar7;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar1 = uVar7, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    lVar8 = *(long *)(param_1 + 0x30);
    uVar1 = param_4;
    func_0x00010bdc2b80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_4;
    if (lVar8 == 0) {
      func_0x00010bdc2b80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142a00(param_1);
    }
    else {
      lVar9 = *(long *)(param_1 + 0x30);
      uVar2 = param_4;
      func_0x00010bdc2b80(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar9;
      func_0x00010c067fc0();
      _objc_release(lVar9);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (lVar8 == 0) {
        uVar6 = 1;
        goto LAB_107b6f2cc;
      }
      func_0x00010bdc2b80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c239b00(param_1);
    }
    _objc_release(uVar1);
  }
LAB_107b6f2cc:
  _objc_release(uVar7);
LAB_107b6f2d4:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107b6f32c; end: 107b6f343;  */

void FUN_107b6f32c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107b6f344; end: 107b6f38b; -[SCOperaWebViewWrapper webView:didUpdateProgress:] */

void FUN_107b6f344(undefined8 param_1,long param_2)

{
  *(int *)(param_2 + 0x70) = (int)param_1;
  param_2 = param_2 + 0xa8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c288d60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b6f38c; end: 107b6f407; -[SCOperaWebViewWrapper webViewDidStartLoad:] */

void FUN_107b6f38c(long param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x90) = 1;
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7bbc0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0xb8) == 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      param_1 = param_1 + 0xa8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c21d3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107b6f408; end: 107b6f4df; -[SCOperaWebViewWrapper webViewDidFinishLoad:] */

void FUN_107b6f408(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x91) = 1;
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb4ae0(param_1);
  func_0x00010c28b8a0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf769c0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010c266180();
  }
  if (*(char *)(param_1 + 0x77) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf999d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xa0),PTR_s_evaluateJavaScript_completionHan_1125c4018,
               &PTR____CFConstantStringClassReference_110eb0738,0);
    return;
  }
  return;
}



/* Entry: 107b6f4e0; end: 107b6f4f7; -[SCOperaWebViewWrapper webView:didReceiveServerRedirectForProvisionalNavigation:] */

void FUN_107b6f4e0(long param_1)

{
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
  }
  return;
}



/* Entry: 107b6f4f8; end: 107b6f503; -[SCOperaWebViewWrapper webView:didCommitNavigation:] */

void FUN_107b6f4f8(long param_1)

{
  *(undefined1 *)(param_1 + 0x81) = 1;
  return;
}



/* Entry: 107b6f504; end: 107b6f593; -[SCOperaWebViewWrapper webView:didReceiveResponse:] */

void FUN_107b6f504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 200) == 0) {
    uVar2 = param_4;
    func_0x00010c252ee0(param_4);
    func_0x00010c0df7a0(puVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar1;
    _objc_release(uVar2);
  }
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf79400();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b6f594; end: 107b6f7d3; -[SCOperaWebViewWrapper webView:didFailLoadWithError:] */

void FUN_107b6f594(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    lVar1 = param_4;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined **)(param_1 + 0xc0) = puVar2;
    _objc_release(uVar4);
  }
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_4;
      func_0x00010bf3ec40();
      if (((((lVar1 == -0x3e9) || (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 == -0x3eb)) ||
           (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 == -0x3ec)) ||
          ((lVar1 = param_4, func_0x00010bf3ec40(), lVar1 == -0x3ed ||
           (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 == -0x3ee)))) ||
         (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 == -0x3f1)) {
        lVar1 = param_4;
        func_0x00010c292820(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        func_0x00010c236b00(param_1);
      }
      else {
        lVar1 = param_4;
        func_0x00010bf3ec40();
        if (((lVar1 != -0x4b0) && (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 != -0x4b1)) &&
           (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 != -0x4b2)) goto LAB_107b6f6f4;
        lVar1 = param_4;
        func_0x00010c292820(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        func_0x00010c237a00(param_1);
      }
      _objc_release(lVar3);
    }
  }
LAB_107b6f6f4:
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b6f7d4;
  puStack_50 = &UNK_11084e010;
  lStack_48 = param_1;
  func_0x00010bf999c0(*(undefined8 *)(param_1 + 0xa0),param_2,
                      &PTR____CFConstantStringClassReference_110eb06f8,&puStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b6f7d4; end: 107b6f88b;  */

void FUN_107b6f7d4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc4658);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20) + 0xa8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010beb4ae0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c28b8a0(lVar3);
    _objc_release(lVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107b6f88c; end: 107b6f8a7; -[SCOperaWebViewWrapper _shouldOverrideAllowlisted] */

byte FUN_107b6f88c(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 107b6f8a8; end: 107b6f91f; -[SCOperaWebViewWrapper showSafeBrowsingWarning:urlType:] */

void FUN_107b6f8a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x50) = param_4;
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c239b20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6f920; end: 107b6f953; -[SCOperaWebViewWrapper showConnectionError] */

void FUN_107b6f920(long param_1)

{
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c236b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6f954; end: 107b6f987; -[SCOperaWebViewWrapper showGeneralError] */

void FUN_107b6f954(long param_1)

{
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c237a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6f988; end: 107b6f9bf; -[SCOperaWebViewWrapper webBrowsingURLInterceptor:didClickCancelForLeavingAppForURL:] */

void FUN_107b6f988(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf739a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6f9c0; end: 107b6f9f7; -[SCOperaWebViewWrapper webBrowsingURLInterceptor:didClickOKForLeavingAppForURL:] */

void FUN_107b6f9c0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6f9f8; end: 107b6fa07; -[SCOperaWebViewWrapper urlInterceptorConfigUpdates] */

void FUN_107b6f9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110eb0618);
  return;
}



/* Entry: 107b6fa08; end: 107b6fb5f; -[SCOperaWebViewWrapper runSafeBrowsingCheckOnUrl:] */

void FUN_107b6fa08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_107b6fb60;
      puStack_60 = &UNK_1109fe490;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      lStack_58 = param_3;
      _objc_copyWeak(auStack_80,auStack_48);
      _objc_retain(param_3);
      func_0x00010bf386c0(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_release(lStack_58);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b6fb60; end: 107b6fc73;  */

void FUN_107b6fb60(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6);
    _objc_release(uVar3);
    _objc_release(puVar2);
    if (param_2 == 0) {
      uVar4 = *(ulong *)(lVar1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0xa0);
        puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
        func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09c060(uVar3);
        _objc_release(puVar2);
      }
    }
    else {
      func_0x00010c239b00(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b6fc74; end: 107b6fca7;  */

void FUN_107b6fc74(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c236b00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6fca8; end: 107b6fcfb; -[SCOperaWebViewWrapper _didCheckSafeBrowsingForURL:urlType:] */

void FUN_107b6fca8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 != 0) {
    func_0x00010c239b00(param_1,param_2,param_3,param_4);
    func_0x00010c256160(*(undefined8 *)(param_1 + 0xa0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b6fcfc; end: 107b6fdd7; -[SCOperaWebViewWrapper _navigationItemForURL:] */

void FUN_107b6fcfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar3);
    _objc_sync_enter(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107b6fdd8; end: 107b6fe8f; -[SCOperaWebViewWrapper _navigationActionItemForTargetId:] */

void FUN_107b6fdd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar2);
    _objc_sync_enter(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    lVar1 = param_3;
    func_0x00010bdc3580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_sync_exit(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107b6fe90; end: 107b6ff8b; -[SCOperaWebViewWrapper _updateNavigationItem:] */

void FUN_107b6fe90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar4);
    _objc_sync_enter(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,param_3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b6ff8c; end: 107b70043; -[SCOperaWebViewWrapper _updateNavigationActionItem:targetId:] */

void FUN_107b6ff8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = param_4;
  func_0x00010bdc3580(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,param_3,uVar1);
  _objc_release(uVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b70044; end: 107b701f7; -[SCOperaWebViewWrapper _checkSafeBrowsingForURL:webView:targetId:] */

void FUN_107b70044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_4);
  _objc_initWeak(auStack_60,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107b701f8;
  puStack_88 = &UNK_1109fe4c0;
  _objc_copyWeak(auStack_70,auStack_60);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  uStack_80 = param_5;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_copyWeak(auStack_a8,auStack_60);
  _objc_retain(param_3);
  func_0x00010bf386c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b701f8; end: 107b70287;  */

void FUN_107b701f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be62400(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be27220(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b70288; end: 107b702cb;  */

void FUN_107b70288(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c236b00(lVar1);
    func_0x00010bdda320(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b702cc; end: 107b705b3; -[SCOperaWebViewWrapper _handleCheckResultForURL:webView:navigationAction:urlType:] */

void FUN_107b702cc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010be624a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d6bc8;
    _objc_alloc();
    func_0x00010c05a320();
    func_0x00010bedc0c0(param_1);
  }
  else {
    puVar3 = puVar1;
    func_0x00010c28fa80();
    if (puVar3 == param_6) goto LAB_107b703e4;
    puVar2 = PTR_PTR_1126d6bc8;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a320();
    func_0x00010bedc0c0(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  func_0x00010bdfcbe0(param_1);
LAB_107b703e4:
  if (param_6 == (undefined *)0x0) {
    param_6 = *(undefined **)(param_1 + 0x68);
    _objc_retain(param_6);
    _objc_sync_enter(param_6);
    lVar8 = *(long *)(param_1 + 0x68);
    lVar7 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if ((lVar8 != 0) && (lVar7 = lVar8, func_0x00010bf529e0(), lVar7 != 0)) {
      _objc_retain(lVar8);
      lVar7 = lVar8;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(lVar8);
          }
          (**(code **)(*(long *)(lVar11 * 8) + 0x10))(*(long *)(lVar11 * 8),1);
          lVar11 = lVar11 + 1;
        } while (lVar7 != lVar11);
        lVar7 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x68);
      lVar7 = param_3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c12d3e0(uVar9);
      _objc_release(lVar7);
    }
    _objc_release(lVar8);
    _objc_sync_exit(param_6);
    _objc_release(param_6);
  }
  else {
    lVar4 = param_3;
    func_0x00010bdda320(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_6);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = lVar4;
  _objc_retain(lVar4);
  iVar5 = (int)lVar6;
  lVar6 = *(long *)(param_3 + 0x68);
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    lVar6 = lVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_4 = 0;
    if (lVar6 != 0) {
      param_4 = *(undefined8 *)(param_3 + 0x68);
      _objc_retain(param_4);
      _objc_sync_enter(param_4);
      lVar8 = *(long *)(param_3 + 0x68);
      lVar6 = lVar4;
      func_0x00010beec820(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar8;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        _objc_retain(lVar8);
        lVar6 = lVar8;
        func_0x00010bf52a60();
        lVar11 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar11) {
              _objc_enumerationMutation(lVar8);
            }
            (**(code **)(*(long *)(lVar10 * 8) + 0x10))(*(long *)(lVar10 * 8),0);
            lVar10 = lVar10 + 1;
          } while (lVar6 != lVar10);
          lVar6 = lVar8;
          func_0x00010bf52a60();
        }
        _objc_release(lVar8);
      }
      uVar9 = *(undefined8 *)(param_3 + 0x68);
      lVar6 = lVar4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010c12d3e0(uVar9);
      iVar5 = (int)lVar11;
      _objc_release(lVar6);
      _objc_release(lVar8);
      _objc_sync_exit(param_4);
      _objc_release(param_4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_4);
  __Unwind_Resume();
  if (*(char *)(lVar4 + 0x75) == '\x01') {
    if (iVar5 == 0) {
      uVar9 = *(undefined8 *)(lVar4 + 0xa0);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf999c0(uVar9);
      _objc_release(puVar1);
    }
    else {
      *(undefined1 *)(lVar4 + 0x74) = 1;
    }
  }
  func_0x00010bf7b9a0(*(undefined8 *)(lVar4 + 0x38));
  if (*(long *)(lVar4 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c266190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(lVar4 + 0x40),PTR_s_syncMuteStatus_112677288);
    return;
  }
  return;
}



/* Entry: 107b705b4; end: 107b707b3; -[SCOperaWebViewWrapper _cancelActionHandlersForURL:] */

void FUN_107b705b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  iVar3 = (int)lVar1;
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x20 = 0;
    if (lVar1 != 0) {
      unaff_x20 = *(undefined8 *)(param_1 + 0x68);
      _objc_retain(unaff_x20);
      _objc_sync_enter(unaff_x20);
      lVar6 = *(long *)(param_1 + 0x68);
      lVar1 = param_3;
      func_0x00010beec820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar6;
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        _objc_retain(lVar6);
        lVar1 = lVar6;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        while (lVar1 != 0) {
          lVar8 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar6);
            }
            (**(code **)(*(long *)(lVar8 * 8) + 0x10))(*(long *)(lVar8 * 8),0);
            lVar8 = lVar8 + 1;
          } while (lVar1 != lVar8);
          lVar1 = lVar6;
          func_0x00010bf52a60();
        }
        _objc_release(lVar6);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      lVar1 = param_3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c12d3e0(uVar7);
      iVar3 = (int)lVar4;
      _objc_release(lVar1);
      _objc_release(lVar6);
      _objc_sync_exit(unaff_x20);
      _objc_release(unaff_x20);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(unaff_x20);
  __Unwind_Resume();
  if (*(char *)(param_3 + 0x75) == '\x01') {
    if (iVar3 == 0) {
      uVar7 = *(undefined8 *)(param_3 + 0xa0);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf999c0(uVar7);
      _objc_release(puVar2);
    }
    else {
      *(undefined1 *)(param_3 + 0x74) = 1;
    }
  }
  func_0x00010bf7b9a0(*(undefined8 *)(param_3 + 0x38));
  if (*(long *)(param_3 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c266190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_3 + 0x40),PTR_s_syncMuteStatus_112677288)
    ;
    return;
  }
  return;
}



/* Entry: 107b707b4; end: 107b7086b; -[SCOperaWebViewWrapper notifyWebPageOnShow:] */

void FUN_107b707b4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x75) == '\x01') {
    if (param_3 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xa0);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110eb0758);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf999c0(uVar2);
      _objc_release(puVar1);
    }
    else {
      *(undefined1 *)(param_1 + 0x74) = 1;
    }
  }
  func_0x00010bf7b9a0(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c266190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x40),PTR_s_syncMuteStatus_112677288)
    ;
    return;
  }
  return;
}



/* Entry: 107b7086c; end: 107b7092b; -[SCOperaWebViewWrapper notifyWebPageOnHide] */

void FUN_107b7086c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new();
  if (*(char *)(param_1 + 0x75) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb0778);
  }
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb0798);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf999c0(uVar3,param_2,puVar2,0);
    _objc_release(puVar2);
  }
  func_0x00010bf77400(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b7092c; end: 107b709a3; -[SCOperaWebViewWrapper notifyWebPageDidFinishLoad] */

void FUN_107b7092c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x74) == '\x01') {
    *(undefined1 *)(param_1 + 0x74) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb0758);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf999c0(uVar2,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107b709a4; end: 107b709ab; -[SCOperaWebViewWrapper _id] */

undefined8 FUN_107b709a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107b709ac; end: 107b709b3; -[SCOperaWebViewWrapper webView] */

undefined8 FUN_107b709ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107b709b4; end: 107b709cb; -[SCOperaWebViewWrapper delegate] */

void FUN_107b709b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b709cc; end: 107b709d7; -[SCOperaWebViewWrapper setDelegate:] */

void FUN_107b709cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 107b709d8; end: 107b709df; -[SCOperaWebViewWrapper pageLoadErrorCount] */

undefined8 FUN_107b709d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107b709e0; end: 107b709e7; -[SCOperaWebViewWrapper pageLoadCount] */

undefined8 FUN_107b709e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107b709e8; end: 107b709ef; -[SCOperaWebViewWrapper firstPageErrorCode] */

undefined8 FUN_107b709e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107b709f0; end: 107b709f7; -[SCOperaWebViewWrapper firstPageHttpStatusCode] */

undefined8 FUN_107b709f0(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107b709f8; end: 107b709ff; -[SCOperaWebViewWrapper redirectCount] */

undefined8 FUN_107b709f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107b70a00; end: 107b70a07; -[SCOperaWebViewWrapper didLoadStart] */

undefined1 FUN_107b70a00(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 107b70a08; end: 107b70a0f; -[SCOperaWebViewWrapper didLoadSucceed] */

undefined1 FUN_107b70a08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



/* Entry: 107b70a10; end: 107b70b07; -[SCOperaWebViewWrapper .cxx_destruct] */

void FUN_107b70a10(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 107b70b08; end: 107b70bd3; -[SCOperaRemoteWebJavascriptBridge init] */

undefined1 * FUN_107b70b08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___WKUserContentController_1126d44b8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
    _objc_alloc(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
    func_0x00010c04a760();
    func_0x00010befc7c0(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010befb220(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b70bd4; end: 107b70fbb; -[SCOperaRemoteWebJavascriptBridge userContentController:didReceiveScriptMessage:] */

void FUN_107b70bd4(long param_1,undefined8 param_2,undefined **param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar7 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  uVar2 = uVar1;
  _objc_opt_isKindOfClass();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_4;
    func_0x00010bfb6d00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c077440();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_4;
      func_0x00010bf1e9c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class();
      puVar4 = puVar3;
      _objc_opt_isKindOfClass();
      puVar8 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar3);
      uVar1 = param_4;
      func_0x00010bf1e9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c11f420();
      if (uVar5 == 0x7fffffffffffffff) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110daf5b8;
        puVar4 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar1);
        if (puVar4 == (undefined *)0x0) {
          _objc_release(puVar8);
          _objc_release(puVar3);
          _objc_release(uVar2);
          goto LAB_107b70e60;
        }
      }
      else {
        _objc_release(uVar1);
      }
      ppuVar10 = &PTR____CFConstantStringClassReference_110daf5b8;
      puVar4 = puVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        puStack_130 = (undefined *)0x0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        lVar12 = *(long *)(param_1 + 8);
        _objc_retain(lVar12);
        lVar6 = lVar12;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          lVar13 = *plStack_120;
          do {
            lVar14 = 0;
            do {
              if (*plStack_120 != lVar13) {
                _objc_enumerationMutation(lVar12);
              }
              puVar11 = puVar8;
              (**(code **)(*(long *)(lStack_128 + lVar14 * 8) + 0x10))();
              lVar14 = lVar14 + 1;
            } while (lVar6 != lVar14);
            lVar6 = lVar12;
            ppuVar7 = &puStack_130;
            func_0x00010bf52a60();
          } while (lVar6 != 0);
        }
        _objc_release(lVar12);
        ppuVar10 = ppuVar7;
      }
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
  }
LAB_107b70e60:
  while( true ) {
    _objc_release(param_4);
    ppuVar7 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    ppuVar9 = ppuVar7;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar9 = ppuVar7;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c1d0560(puVar8);
      _objc_release(ppuVar9);
    }
    ppuVar9 = ppuVar7;
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar9 = ppuVar7;
      func_0x00010c121ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c1d0560(puVar8);
      _objc_release(ppuVar9);
    }
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_end_catch();
  }
  __Unwind_Resume();
  puVar11 = ppuVar7[1];
  _objc_retainBlock(ppuVar10);
  func_0x00010befa120(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
  return;
}



/* Entry: 107b70fbc; end: 107b70ff3; -[SCOperaRemoteWebJavascriptBridge addActionCallback:] */

void FUN_107b70fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retainBlock(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b70ff4; end: 107b7105b; -[SCOperaRemoteWebJavascriptBridge evaluateJavaScript:completionHandler:] */

void FUN_107b70ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf999c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b7105c; end: 107b71063; -[SCOperaRemoteWebJavascriptBridge userContentController] */

undefined8 FUN_107b7105c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107b71064; end: 107b7107b; -[SCOperaRemoteWebJavascriptBridge webView] */

void FUN_107b71064(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b7107c; end: 107b71087; -[SCOperaRemoteWebJavascriptBridge setWebView:] */

void FUN_107b7107c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107b71088; end: 107b710bf; -[SCOperaRemoteWebJavascriptBridge .cxx_destruct] */

void FUN_107b71088(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b710c0; end: 107b71a03; -[SCOperaRemoteWebLayerView updateWithConfig:webView:operaViewBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b710c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  dVar13 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  *(undefined1 *)(param_5 + _DAT_11276b0c8) = 1;
  func_0x00010bfe2d80(param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bfb68e0(param_5);
  func_0x00010c013de0();
  lVar7 = (long)_DAT_11276b0cc;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar1;
  _objc_release(uVar6);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb04d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1f3c0();
  *(char *)(param_5 + _DAT_11276b0d0) = (char)puVar2;
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb07f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1f3c0();
  lVar8 = (long)_DAT_11276b0d4;
  *(char *)(param_5 + lVar8) = (char)puVar2;
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb08b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1f3c0();
  *(char *)(param_5 + _DAT_11276b0d8) = (char)puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__CGRectZero_110347608;
  if ((*(byte *)(param_5 + lVar8) & 1) == 0) {
    puVar2 = param_7;
    func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_5 + _DAT_11276b0dc) = (char)puVar3;
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d6bd8;
    _objc_alloc();
    dVar13 = *(double *)puVar1;
    func_0x00010c0150e0(dVar13,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10),
                        *(undefined8 *)(puVar1 + 0x18));
    lVar9 = (long)_DAT_11276b0e0;
    uVar6 = *(undefined8 *)(param_5 + lVar9);
    *(undefined **)(param_5 + lVar9) = puVar2;
    _objc_release(uVar6);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar9),param_6,param_5);
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar9),param_6,1);
    func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar9));
  }
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0958);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1f3c0();
  *(char *)(param_5 + _DAT_11276b0e4) = (char)puVar2;
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0978);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1f3c0();
  *(char *)(param_5 + _DAT_11276b0e8) = (char)puVar2;
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0818);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + _DAT_11276b0ec);
  *(undefined **)(param_5 + _DAT_11276b0ec) = puVar1;
  _objc_release(uVar6);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb07d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c067ec0();
  lVar9 = (long)_DAT_11276b0f0;
  *(long *)(param_5 + lVar9) = (long)(int)puVar2;
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0838);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = (long)_DAT_11276b0f4;
  _objc_retain(puVar2);
  uVar6 = *(undefined8 *)(param_5 + lVar11);
  *(undefined **)(param_5 + lVar11) = puVar2;
  _objc_release(uVar6);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0858);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1f3c0();
  *(char *)(param_5 + _DAT_11276b0f8) = (char)puVar2;
  _objc_release(puVar1);
  lVar11 = (long)_DAT_11276b0fc;
  _objc_retain(param_8);
  uVar6 = *(undefined8 *)(param_5 + lVar11);
  *(undefined8 *)(param_5 + lVar11) = param_8;
  _objc_release(uVar6);
  puVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb08d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = (long)_DAT_11276b100;
  _objc_retain(puVar2);
  uVar6 = *(undefined8 *)(param_5 + lVar12);
  *(undefined **)(param_5 + lVar12) = puVar2;
  _objc_release(uVar6);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_5 + lVar11);
  func_0x00010c152980(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar6);
  uVar4 = *(undefined8 *)(param_5 + lVar11);
  func_0x00010c152980(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar7),param_6,*(undefined8 *)(param_5 + lVar11));
  puVar1 = PTR__CGRectZero_110347608;
  lVar9 = *(long *)(param_5 + lVar9);
  if (lVar9 == 1) {
    uVar5 = 0;
  }
  else {
    if (lVar9 != 0) goto LAB_107b71558;
    uVar5 = 1;
  }
  *(undefined1 *)(param_5 + _DAT_11276b104) = uVar5;
LAB_107b71558:
  if (*(char *)(param_5 + lVar8) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                        &PTR____CFConstantStringClassReference_110eb0998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar6 = 0x3fe0000000000000;
    dVar13 = dVar13 * 0.5;
    puVar3 = puVar2;
    func_0x00010c25cbc0(puVar2,param_6,(long)dVar13,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar8 = (long)_DAT_11276b108;
    if (*(long *)(param_5 + lVar8) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar14 = *(undefined8 *)(param_5 + lVar8);
      *(undefined **)(param_5 + lVar8) = puVar2;
      _objc_release(uVar14);
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
      _CGRectGetWidth();
      func_0x00010c23d0a0(puVar3);
      func_0x00010c19f0e0(0,0,dVar13,uVar6,*(undefined8 *)(param_5 + lVar8));
    }
    else {
      func_0x00010c12c960();
    }
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar7),param_6,*(undefined8 *)(param_5 + lVar8));
    _objc_release(puVar3);
  }
  puVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb08f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  func_0x00010c21e900(*(undefined8 *)(param_5 + lVar11),param_6,puVar3);
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0938);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  *(char *)(param_5 + _DAT_11276b10c) = (char)puVar3;
  _objc_release(puVar2);
  func_0x00010bfeef80(param_5);
  func_0x00010bfeec80(param_5);
  func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar7));
  puVar3 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0898);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____kCFBooleanTrue_11034ab68;
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
  }
  uVar5 = SUB81(puVar2,0);
  func_0x00010bf1f3c0();
  lVar11 = (long)_DAT_11276b110;
  *(undefined1 *)(param_5 + lVar11) = uVar5;
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126c3f40;
  _objc_alloc();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010c013de0(0,0,param_1,0x4010000000000000);
  lVar9 = (long)_DAT_11276b114;
  uVar6 = *(undefined8 *)(param_5 + lVar9);
  *(undefined **)(param_5 + lVar9) = puVar2;
  _objc_release(uVar6);
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar9),param_6,0);
  *(undefined8 *)(param_5 + _DAT_11276b118) = 0;
  puVar2 = PTR_PTR_1126b0880;
  _objc_alloc();
  uVar14 = *(undefined8 *)puVar1;
  uVar4 = *(undefined8 *)(puVar1 + 8);
  uVar15 = *(undefined8 *)(puVar1 + 0x10);
  uVar16 = *(undefined8 *)(puVar1 + 0x18);
  func_0x00010c013de0(uVar14,uVar4,uVar15,uVar16);
  lVar8 = (long)_DAT_11276b11c;
  uVar6 = *(undefined8 *)(param_5 + lVar8);
  *(undefined **)(param_5 + lVar8) = puVar2;
  _objc_release(uVar6);
  func_0x00010c17d4c0(*(undefined8 *)(param_5 + lVar8),param_6,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar8),param_6,0);
  func_0x00010c1ff520(*(undefined8 *)(param_5 + lVar8),param_6,1);
  func_0x00010c182b00(*(undefined8 *)(param_5 + lVar8),param_6,*(undefined8 *)(param_5 + lVar9));
  if (*(char *)(param_5 + lVar11) == '\x01') {
    func_0x00010befbb60(param_5);
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_5 + lVar8));
  }
  uVar6 = *(undefined8 *)(param_5 + lVar12);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar6,param_6,puVar1);
  if ((int)uVar6 == 0) {
    uVar10 = *(ulong *)(param_5 + lVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar10,param_6,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((uVar10 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(uVar14,uVar4,uVar15,uVar16);
      lVar8 = (long)_DAT_11276b120;
      uVar6 = *(undefined8 *)(param_5 + lVar8);
      *(undefined **)(param_5 + lVar8) = puVar1;
      _objc_release(uVar6);
      func_0x00010c16e440(*(undefined8 *)(param_5 + lVar8),param_6,*(undefined8 *)(param_5 + lVar12)
                         );
      func_0x00010befbb60(*(undefined8 *)(param_5 + lVar7),param_6,*(undefined8 *)(param_5 + lVar8))
      ;
    }
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126d6890;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffb60(puVar1,param_6,puVar2,0x65);
  lVar8 = (long)_DAT_11276b124;
  uVar6 = *(undefined8 *)(param_5 + lVar8);
  *(undefined **)(param_5 + lVar8) = puVar1;
  _objc_release(uVar6);
  _objc_release(puVar2);
  func_0x00010c1a8560(*(undefined8 *)(param_5 + lVar8),param_6,1);
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar8));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar7),param_6,*(undefined8 *)(param_5 + lVar8));
  puVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110eb0918);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____kCFBooleanFalse_11034ab60;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  uVar5 = SUB81(puVar1,0);
  func_0x00010bf1f3c0();
  lVar7 = (long)_DAT_11276b128;
  *(undefined1 *)(param_5 + lVar7) = uVar5;
  _objc_release(puVar2);
  if (*(char *)(param_5 + lVar7) == '\x01') {
    func_0x00010c24dbc0(*(undefined8 *)(param_5 + lVar8));
  }
  *(undefined1 *)(param_5 + _DAT_11276b12c) = 0;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107b71a04; end: 107b71a37; -[SCOperaRemoteWebLayerView teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b71a04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b0fc;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b71a38; end: 107b720a3; -[SCOperaRemoteWebLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b71a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa090;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar6 = (long)_DAT_11276b0cc;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  lVar8 = (long)_DAT_11276b104;
  lVar7 = (long)_DAT_11276b0d4;
  if ((*(byte *)(param_5 + lVar7) & 1) == 0) {
    dVar9 = 36.0;
    dVar12 = 36.0;
    if (*(char *)(param_5 + lVar8) == '\0') {
      dVar12 = 0.0;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11276b108));
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11276b130));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
    _CGRectGetMinX();
    dVar9 = dVar9 + 20.0;
    dVar13 = dVar9 + 21.0;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
    _CGRectGetMaxY();
    lVar4 = (long)_DAT_11276b138;
    func_0x00010c17a6a0(dVar13,(dVar9 + -20.0 + -21.0 + *(double *)(param_5 + _DAT_11276b134)) -
                               dVar12,*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar4));
    func_0x00010c17a6a0(*(undefined8 *)(param_5 + _DAT_11276b13c));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar4));
    uVar11 = 0x4044000000000000;
    dVar9 = dVar13 + 21.0 + 40.0;
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar4));
    func_0x00010c17a6a0(dVar9,*(undefined8 *)(param_5 + _DAT_11276b140));
    lVar5 = (long)_DAT_11276b144;
    if (*(long *)(param_5 + lVar5) != 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
      _CGRectGetMaxX();
      uVar11 = 0xc00c000000000000;
      dVar9 = dVar9 + -37.5 + -3.5;
      func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar4));
      func_0x00010c17a6a0(dVar9,*(undefined8 *)(param_5 + lVar5));
    }
  }
  else {
    lVar5 = (long)_DAT_11276b108;
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar5));
    lVar4 = (long)_DAT_11276b130;
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar4));
    param_3 = 0x4040800000000000;
    func_0x00010c17a6a0(0x4040800000000000,0x4040800000000000,*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
    _CGRectGetWidth();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    dVar9 = 0.0;
    uVar11 = 0;
    func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_5 + lVar5));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    dVar12 = param_4;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010bc850d8(dVar9,uVar11,param_3,param_4,dVar12 + 10.0);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar2);
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010bf20c00(param_5);
  func_0x00010bc8525c();
  dVar12 = dVar9;
  func_0x00010bfe0640(param_5);
  func_0x00010bc850d8(dVar9,uVar11,param_3,param_4,dVar12 + -36.0);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276b148));
  func_0x00010c19f0e0(dVar9,uVar11,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11276b14c));
  uVar11 = *(undefined8 *)(param_5 + _DAT_11276b118);
  lVar4 = (long)_DAT_11276b0fc;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  dVar9 = 0.0;
  dVar12 = 4.0;
  func_0x00010c19f0e0(0,uVar11,*(undefined8 *)(param_5 + _DAT_11276b11c));
  if (((*(byte *)(param_5 + lVar7) & 1) == 0) && ((*(byte *)(param_5 + lVar8) & 1) != 0)) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
    func_0x00010bf20c00(param_5);
    dVar12 = dVar12 + -36.0;
    func_0x00010c19f0e0(0,0x4042000000000000,param_3,dVar12,*(undefined8 *)(param_5 + lVar6));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
    func_0x00010bf20c00(param_5);
    func_0x00010c19f0e0(0,0,param_3,dVar12 + -36.0,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar4));
    lVar8 = (long)_DAT_11276b150;
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar8));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_5);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + lVar6));
    _objc_release(puVar1);
    func_0x00010c16e440(*(undefined8 *)(param_5 + lVar4));
    uVar11 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c152980(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar11);
    func_0x00010c195460(*(undefined8 *)(param_5 + lVar8));
    uVar11 = NEON_fminnm(*(undefined8 *)(param_5 + _DAT_11276b154),0);
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
    lVar7 = (long)_DAT_11276b0e0;
    func_0x00010c19f0e0(0,uVar11,*(undefined8 *)(param_5 + lVar7));
    func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar7));
  }
  else {
    func_0x00010c16e440(param_5);
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
    lVar8 = (long)_DAT_11276b150;
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar8));
    if ((*(byte *)(param_5 + lVar7) & 1) == 0) {
      if (*(char *)(param_5 + _DAT_11276b0e4) == '\x01') {
        func_0x00010c19f0e0(0,0,0x4040800000000000,0x4040800000000000);
        func_0x00010c17a6a0(0x4040800000000000,0x4040800000000000,*(undefined8 *)(param_5 + lVar8));
      }
      else {
        func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
        dVar13 = dVar9;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
        _CGRectGetMidX();
        dVar10 = dVar13;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar8));
        _CGRectGetMidX();
        dVar13 = dVar13 - dVar10;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
        _CGRectGetMinY();
        func_0x00010bc852e4(dVar9,uVar11,param_3,dVar12,dVar13,dVar10);
        func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar8));
      }
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar8));
  uVar11 = 0x4030000000000000;
  func_0x00010c14db80(0x4030000000000000,0x4024000000000000,*(undefined8 *)(param_5 + lVar4));
  lVar7 = (long)_DAT_11276b120;
  if (*(long *)(param_5 + lVar7) != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  uVar3 = uVar11;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar11,uVar3,*(undefined8 *)(param_5 + _DAT_11276b124));
  return;
}



/* Entry: 107b720a4; end: 107b720b3; -[SCOperaRemoteWebLayerView scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b720a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b0fc),PTR_s_scrollView_112632480);
  return;
}



/* Entry: 107b720b4; end: 107b72157; -[SCOperaRemoteWebLayerView loadRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b720b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf83c40(param_1);
  uVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276b0ec;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + lVar4);
  if (lVar4 != 0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar2 != 0) {
      func_0x00010c09c060(*(undefined8 *)(param_1 + _DAT_11276b0fc),param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b72158; end: 107b72167; -[SCOperaRemoteWebLayerView reload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1288f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b0fc),PTR_s_reload_112627c58);
  return;
}



/* Entry: 107b72168; end: 107b72177; -[SCOperaRemoteWebLayerView stopLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b0fc),PTR_s_stopLoading_112673280);
  return;
}



/* Entry: 107b72178; end: 107b725af; -[SCOperaRemoteWebLayerView initNavButtons] */

/* WARNING: Possible PIC construction at 0x000107b722c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b72310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b723b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b7243c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b723b8) */
/* WARNING: Removing unreachable block (ram,0x000107b72314) */
/* WARNING: Removing unreachable block (ram,0x000107b722cc) */
/* WARNING: Removing unreachable block (ram,0x000107b72440) */
/* WARNING: Removing unreachable block (ram,0x000107b7248c) */
/* WARNING: Removing unreachable block (ram,0x000107b7249c) */
/* WARNING: Removing unreachable block (ram,0x000107b724a8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + _DAT_11276b0d4) == '\x01') {
    lVar4 = (long)_DAT_11276b130;
    if (*(long *)(param_1 + lVar4) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e720(uVar2);
      _objc_release(puVar1);
      func_0x00010c19f0e0(0,0,0x4040800000000000,0x4040800000000000,*(undefined8 *)(param_1 + lVar4)
                         );
    }
    else {
      func_0x00010c12c960();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b0cc);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11276b150;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    if (*(char *)(param_1 + _DAT_11276b0e4) == '\x01') {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e720(uVar2);
      _objc_release(puVar1);
      func_0x00010c19f0e0(0,0,0x4040800000000000,0x4040800000000000,*(undefined8 *)(param_1 + lVar4)
                         );
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e720(uVar2);
      _objc_release(puVar1);
      func_0x00010c202c80(0x4054000000000000,0x4040400000000000,*(undefined8 *)(param_1 + lVar4));
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b0cc);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_addSubview__11259c880,uVar3);
  return;
}



/* Entry: 107b725b0; end: 107b7290f; -[SCOperaRemoteWebLayerView initGestureRecognizers] */

/* WARNING: Possible PIC construction at 0x000107b72870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b72894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b728b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b728d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b728bc) */
/* WARNING: Removing unreachable block (ram,0x000107b72898) */
/* WARNING: Removing unreachable block (ram,0x000107b72874) */
/* WARNING: Removing unreachable block (ram,0x000107b728d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b725b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11276b0d4) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b158;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8340(0x3f847ae147ae147b,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b15c;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18e180(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b160;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18e180(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b164;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b168;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8340(0x3f847ae147ae147b,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b16c;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8340(0x3f847ae147ae147b,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b170;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8340(0x3f847ae147ae147b,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276b174;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8340(0x3f847ae147ae147b,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107b72910; end: 107b729c7; -[SCOperaRemoteWebLayerView exitButtonTouchUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72910(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_3 + _DAT_11276b178) = 0;
  if ((*(char *)(param_3 + _DAT_11276b0f8) != '\x01') &&
     ((*(byte *)(param_3 + _DAT_11276b0dc) & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010c152980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    _objc_release(lVar1);
    if (0.0 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010c152870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_scrollToTop__112632438,1);
      return;
    }
  }
  param_3 = param_3 + _DAT_11276b17c;
  _objc_loadWeakRetained(param_3);
  func_0x00010c12a800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b729c8; end: 107b72a67; -[SCOperaRemoteWebLayerView animateButtonPress:scaleFactor:] */

void FUN_107b729c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b72a68;
  puStack_48 = &UNK_110848c48;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010bf03400(0x3fc999999999999a,puVar1,param_3,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 107b72a68; end: 107b72ab7;  */

void FUN_107b72a68(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
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
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 107b72ab8; end: 107b72b83; -[SCOperaRemoteWebLayerView resetInactivityTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72ab8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b180;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x4014000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s_inactivityTimePeriodReached_1125387a8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4014000000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19cd20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b72b84; end: 107b72bcf; -[SCOperaRemoteWebLayerView inactivityTimePeriodReached] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72b84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b180);
  *(undefined8 *)(param_1 + _DAT_11276b180) = 0;
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + _DAT_11276b178) & 1) == 0) {
    func_0x00010bfe2400(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c138d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetInactivityTimer_11262bd70);
  return;
}



/* Entry: 107b72bd0; end: 107b72cc7; -[SCOperaRemoteWebLayerView hideNavButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72bd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11276b184) = 1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(undefined8 *)(param_1 + _DAT_11276b140));
  _objc_retainAutoreleasedReturnValue();
  if (((*(byte *)(param_1 + _DAT_11276b0f8) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_11276b104) & 1) == 0)) {
    func_0x00010befa120(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11276b150));
  }
  if (*(long *)(param_1 + _DAT_11276b144) != 0) {
    func_0x00010befa120(puVar2);
  }
  puVar1 = PTR_PTR_1126d6be0;
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010bf9f8e0(puVar1,param_2,puVar3,1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b72cc8; end: 107b72e53; -[SCOperaRemoteWebLayerView showApplicableButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72cc8(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  
  if ((*(byte *)(param_1 + _DAT_11276b0d4) & 1) != 0) {
    return;
  }
  bVar8 = 0;
  *(undefined1 *)(param_1 + _DAT_11276b184) = 0;
  if (*(char *)(param_1 + _DAT_11276b10c) == '\x01') {
    bVar8 = *(byte *)(param_1 + _DAT_11276b104) ^ 1;
  }
  lVar9 = (long)_DAT_11276b144;
  if (*(long *)(param_1 + lVar9) == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11276b0fc);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  lVar10 = (long)_DAT_11276b140;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c071800();
  lVar3 = (long)_DAT_11276b138;
  uVar4 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071800();
  if ((uVar4 & 1) == 0) {
    iVar7 = (int)*(undefined8 *)(param_1 + _DAT_11276b0fc);
    func_0x00010bf2cae0();
  }
  else {
    iVar7 = 1;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if ((bVar8 & 1) != 0) {
    func_0x00010befa120(puVar5,param_2,*(undefined8 *)(param_1 + _DAT_11276b150));
  }
  if (bVar1) {
    func_0x00010befa120(puVar5,param_2,*(undefined8 *)(param_1 + lVar9));
  }
  if (iVar2 != 0) {
    func_0x00010befa120(puVar5,param_2,*(undefined8 *)(param_1 + lVar10));
  }
  if (iVar7 != 0) {
    func_0x00010befa120(puVar5,param_2,*(undefined8 *)(param_1 + lVar3));
  }
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    func_0x00010bf9f740(PTR_PTR_1126d6be0,param_2,puVar5,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107b72e54; end: 107b72ea3; -[SCOperaRemoteWebLayerView dismissKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72e54(long param_1,undefined8 param_2)

{
  func_0x00010bf94800(*(undefined8 *)(param_1 + _DAT_11276b0fc),param_2,1);
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b72ea4; end: 107b730bb; -[SCOperaRemoteWebLayerView cardRotatedWithAngle:yTranslation:] */

/* WARNING: Possible PIC construction at 0x000107b73054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b73058) */
/* WARNING: Removing unreachable block (ram,0x000107b73078) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b72ea4(double param_1,double param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar6 = -param_1;
  if (0.0 <= param_1) {
    dVar6 = param_1;
  }
  _CGAffineTransformMakeTranslation(&uStack_90,0,param_2 + (dVar6 / 0.2) * -36.0);
  lVar4 = (long)_DAT_11276b0e0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  dStack_a0 = (double)uStack_70;
  func_0x00010c219960(*(undefined8 *)(param_3 + lVar4));
  if (*(long *)(param_3 + lVar4) == 0) {
    uVar3 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    dStack_a0 = 0.0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_c0);
    uVar3 = *(undefined8 *)(param_3 + lVar4);
  }
  _CGAffineTransformRotate(&uStack_f0,param_1,&uStack_c0);
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  dStack_a0 = dStack_d0;
  func_0x00010c219960(uVar3);
  func_0x00010c08cdc0(*(undefined8 *)(param_3 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_3 + _DAT_11276b0cc));
  _objc_release();
  lVar4 = (long)_DAT_11276b188;
  if ((param_3[lVar4] & 1) == 0) {
    lVar5 = (long)_DAT_11276b11c;
    puVar1 = *(undefined **)(param_3 + lVar5);
    func_0x00010bf01b40();
    puVar2 = PTR_PTR_1126d6be0;
    if (dStack_d0 != 0.0) {
      uStack_60 = *(undefined8 *)(param_3 + lVar5);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9f8e0(puVar2);
      _objc_release();
      param_3[lVar4] = 1;
      param_3[_DAT_11276b18c] = 1;
    }
  }
  if (param_1 != 0.0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    dVar6 = dStack_d0;
    func_0x00010bfe2400();
    func_0x00010bf83c40(puVar1);
    lVar4 = (long)_DAT_11276b0e0;
    uVar3 = *(undefined8 *)(puVar1 + lVar4);
    func_0x00010c28f3a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c740();
    dVar7 = dVar6;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    dVar7 = (dStack_d0 * dVar7) / 36.0;
    func_0x00010c1f5ea0(dVar6,*(undefined8 *)(puVar1 + lVar4));
    _objc_release(uVar3);
    puVar2 = puVar1;
    func_0x00010c152980(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    _objc_release(puVar2);
    param_3 = puVar1;
    if (0.0 <= dVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (0,*(undefined8 *)(puVar1 + lVar4),PTR_s_setAlpha__112637810);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c22c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,param_3,PTR_s_shiftURLBar_withPercentOffset__112668c10)
  ;
  return;
}



/* Entry: 107b730bc; end: 107b7319f; -[SCOperaRemoteWebLayerView setAnchorPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b730bc(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_1;
  func_0x00010bfe2400();
  func_0x00010bf83c40(param_2);
  lVar3 = (long)_DAT_11276b0e0;
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c28f3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c740();
  dVar5 = dVar4;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar5 = (param_1 * dVar5) / 36.0;
  func_0x00010c1f5ea0(dVar4,*(undefined8 *)(param_2 + lVar3));
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010c152980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(lVar2);
  if (dVar5 < 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c22c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,0,param_2,PTR_s_shiftURLBar_withPercentOffset__112668c10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_2 + lVar3),PTR_s_setAlpha__112637810);
  return;
}


