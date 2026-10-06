/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc8d060; end: 10bc8d06b; +[SCMultiDirectionalUIContainer setTouchShieldDisabled:] */

void FUN_10bc8d060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c218d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e2df8,PTR_s_setTouchShieldDisabled__112663d78);
  return;
}



/* Entry: 10bc8d06c; end: 10bc8d0e7; -[SCMultiDirectionalUIContainer setPannableCellController:] */

void FUN_10bc8d06c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0f3740(0x3ff0000000000000);
    _objc_release(lVar1);
  }
  _objc_storeWeak(param_1 + 0x38,param_3);
  func_0x00010c1d8ee0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1d8ee0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8d0e8; end: 10bc8d10f; -[SCMultiDirectionalUIContainer interactiveTransition] */

void FUN_10bc8d0e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc8d110; end: 10bc8d127; -[SCMultiDirectionalUIContainer pannableCellController] */

void FUN_10bc8d110(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8d128; end: 10bc8d12f; -[SCMultiDirectionalUIContainer animated] */

undefined1 FUN_10bc8d128(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10bc8d130; end: 10bc8d137; -[SCMultiDirectionalUIContainer setAnimated:] */

void FUN_10bc8d130(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10bc8d138; end: 10bc8d13f; -[SCMultiDirectionalUIContainer wantsInteractivePresentation] */

undefined1 FUN_10bc8d138(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 10bc8d140; end: 10bc8d187; -[SCMultiDirectionalUIContainer .cxx_destruct] */

void FUN_10bc8d140(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bc8d188; end: 10bc8d22b; -[SCNavigationUIContainer initWithNavigationController:animated:] */

undefined1 *
FUN_10bc8d188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8d22c; end: 10bc8d23f; -[SCNavigationUIContainer initWithNavigationController:] */

void FUN_10bc8d22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithNavigationController_ani_1125e9330,param_3,
             &PTR___NSConcreteGlobalBlock_110d96608);
  return;
}



/* Entry: 10bc8d240; end: 10bc8d2cf; -[SCNavigationUIContainer initWithNavigationController:allowsMultipleViewControllers:] */

undefined1 *
FUN_10bc8d240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined ***)((long)puVar1 + 0x20) = &PTR___NSConcreteGlobalBlock_110d96628;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8d2d0; end: 10bc8d2d7;  */

undefined8 FUN_10bc8d2d0(void)

{
  return 1;
}



/* Entry: 10bc8d2d8; end: 10bc8d477; -[SCNavigationUIContainer attachUI:] */

void FUN_10bc8d2d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_2 + 0x10,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_storeWeak(param_2 + 0x18,param_4);
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_initWeak(auStack_58,param_2);
    puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    func_0x00010c17fb40(puVar1);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    func_0x00010c11c520(lVar2);
    _objc_release(lVar2);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10bc8d478; end: 10bc8d4af;  */

void FUN_10bc8d478(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc8d4b0; end: 10bc8d677; -[SCNavigationUIContainer attachUI:completion:] */

void FUN_10bc8d4b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_2 + 0x10,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_storeWeak(param_2 + 0x18,param_4);
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_initWeak(auStack_58,param_2);
    puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    _objc_retain(param_5);
    func_0x00010c17fb40(puVar1);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    func_0x00010c11c520(lVar2);
    _objc_release(lVar2);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10bc8d678; end: 10bc8d6c3;  */

void FUN_10bc8d678(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bc8d6c4; end: 10bc8d8fb; -[SCNavigationUIContainer detachUI:] */

void FUN_10bc8d6c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2 + 8;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c29c580();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2 + 0x18;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar3;
      func_0x00010bfecde0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar5 != 0x7fffffffffffffff) {
        func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
        lVar2 = param_2 + 8;
        _objc_loadWeakRetained(lVar2);
        lVar4 = lVar2;
        func_0x00010c29c580();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar2);
        (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
        func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
        _objc_initWeak(auStack_68,param_2);
        puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
        _objc_copyWeak(auStack_78,auStack_68);
        uStack_70 = param_1;
        _objc_retain(param_4);
        func_0x00010c17fb40(puVar1);
        param_2 = param_2 + 8;
        _objc_loadWeakRetained(param_2);
        func_0x00010c2224c0();
        _objc_release(param_2);
        func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_68);
        _objc_release(lVar3);
        goto LAB_10bc8d8b4;
      }
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
LAB_10bc8d8b4:
  _objc_release(param_4);
  return;
}



/* Entry: 10bc8d8fc; end: 10bc8d9b3;  */

void FUN_10bc8d8fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    if (*(char *)(lVar1 + 0x28) == '\x01') {
      lVar2 = lVar1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c29c580();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(lVar1 + 0x18,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bc8d9b4; end: 10bc8d9ef; -[SCNavigationUIContainer .cxx_destruct] */

void FUN_10bc8d9b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bc8d9f0; end: 10bc8da67; -[SCOverlayStackUIContainer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bc8d9f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112796490;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8da68; end: 10bc8dadf; -[SCOverlayStackUIContainer initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bc8da68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112796490;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8dae0; end: 10bc8db57; -[SCOverlayStackUIContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bc8dae0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112796490;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8db58; end: 10bc8dbab; -[SCOverlayStackUIContainer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8db58(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112796490),param_2,param_1);
  puStack_28 = PTR_PTR_11270e250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bc8dbac; end: 10bc8dbff; -[SCOverlayStackUIContainer viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8dbac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270e250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_112796490));
  return;
}



/* Entry: 10bc8dc00; end: 10bc8dc5f; -[SCOverlayStackUIContainer viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8dc00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + _DAT_112796490),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 10bc8dc60; end: 10bc8dcbf; -[SCOverlayStackUIContainer viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8dc60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_112796490),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 10bc8dcc0; end: 10bc8dd1f; -[SCOverlayStackUIContainer viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8dcc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112796490),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 10bc8dd20; end: 10bc8dd7f; -[SCOverlayStackUIContainer viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8dd20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_112796490),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 10bc8dd80; end: 10bc8ddf3; -[SCOverlayStackUIContainer beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8dd80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_112796490),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_11270e250;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 10bc8ddf4; end: 10bc8de47; -[SCOverlayStackUIContainer endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8ddf4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_112796490),param_2,param_1);
  puStack_28 = PTR_PTR_11270e250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 10bc8de48; end: 10bc8dec3; -[SCOverlayStackUIContainer willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8de48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796490);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_11270e250;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8dec4; end: 10bc8df3f; -[SCOverlayStackUIContainer didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8dec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796490);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_11270e250;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8df40; end: 10bc8df47; -[SCOverlayStackUIContainer attachUI:] */

void FUN_10bc8df40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 10bc8df48; end: 10bc8dfeb; -[SCOverlayStackUIContainer attachUI:completion:] */

void FUN_10bc8df48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010c26f3c0(puVar1);
  FUN_10bc8a8e4(param_1,param_3);
  _objc_release(param_3);
  iVar2 = 2;
  func_0x000107c31924(2,0x10,0,0);
  if (iVar2 != 0) {
    func_0x00010c1cbfa0(param_1);
  }
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10bc8dfec; end: 10bc8e0ab; -[SCOverlayStackUIContainer detachUI:] */

void FUN_10bc8dfec(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar2 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    FUN_10bc8acc0(lVar3);
  }
  iVar1 = 2;
  func_0x000107c31924(2,0x10,0,0);
  if (iVar1 != 0) {
    func_0x00010c1cbfa0(param_1);
  }
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8e0ac; end: 10bc8e13b; -[SCOverlayStackUIContainer supportedInterfaceOrientations] */

undefined1 * FUN_10bc8e0ac(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_11270e250;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x00010c2631c0(puVar2);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 10bc8e13c; end: 10bc8e14f; -[SCOverlayStackUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796490,0);
  return;
}



/* Entry: 10bc8e150; end: 10bc8e157; -[SCOverlayUIContainer attachUI:] */

void FUN_10bc8e150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 10bc8e158; end: 10bc8e1e7; -[SCOverlayUIContainer attachUI:completion:] */

void FUN_10bc8e158(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010becd5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    FUN_10bc8a8e4(lVar1,param_3);
    _objc_storeWeak(param_1 + 0x10,param_3);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8e1e8; end: 10bc8e26f; -[SCOverlayUIContainer detachUI:] */

void FUN_10bc8e1e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    FUN_10bc8acc0();
    _objc_release(param_1);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8e270; end: 10bc8e34b; -[SCOverlayUIContainer _topMostViewController] */

void FUN_10bc8e270(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar3 = uVar1;
  if (uVar4 == 0) {
    uVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar3 = uVar4;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = uVar3;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = uVar1;
  if (uVar4 != 0) {
    uVar5 = uVar3;
    func_0x00010c275140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10bc8e34c; end: 10bc8e373; -[SCOverlayUIContainer .cxx_destruct] */

void FUN_10bc8e34c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bc8e374; end: 10bc8e427; -[SCOverlayWindow hitTest:withEvent:] */

void FUN_10bc8e374(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &puStack_40;
  puStack_38 = PTR_PTR_11270e260;
  puStack_40 = param_1;
  _objc_msgSendSuper2(&puStack_40,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined1 **)param_1) {
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
    if (ppuVar1 != (undefined1 **)puVar2) {
      _objc_retain(ppuVar1);
      puVar2 = (undefined1 *)ppuVar1;
      goto LAB_10bc8e408;
    }
  }
  puVar2 = (undefined1 *)0x0;
LAB_10bc8e408:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc8e428; end: 10bc8e487; -[SCOverlayWindowUIContainer initWithWindowLevel:accessibilityModal:] */

undefined8 FUN_10bc8e428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063280(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 10bc8e488; end: 10bc8e54b; -[SCOverlayWindowUIContainer attachUI:] */

void FUN_10bc8e488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e2e00;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  FUN_10bd86158(*(undefined8 *)(param_1 + 8));
  func_0x00010c225b00(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    func_0x00010bf1f3c0();
    func_0x00010c161100(*(undefined8 *)(param_1 + 8),param_2,lVar3);
  }
  func_0x00010c1ee700(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8e54c; end: 10bc8e59f; -[SCOverlayWindowUIContainer detachUI:] */

void FUN_10bc8e54c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1ee700(*(undefined8 *)(param_1 + 8),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8e5a0; end: 10bc8e5cf; -[SCOverlayWindowUIContainer .cxx_destruct] */

void FUN_10bc8e5a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc8e5d0; end: 10bc8e647; -[SCSingleScreenUIContainer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bc8e5d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_1127964a8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8e648; end: 10bc8e6bf; -[SCSingleScreenUIContainer initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bc8e648(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_1127964a8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8e6c0; end: 10bc8e737; -[SCSingleScreenUIContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bc8e6c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar4 = (long)_DAT_1127964a8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8e738; end: 10bc8e78b; -[SCSingleScreenUIContainer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e738(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_1127964a8),param_2,param_1);
  puStack_28 = PTR_PTR_11270e270;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bc8e78c; end: 10bc8e7df; -[SCSingleScreenUIContainer viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e78c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270e270;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_1127964a8));
  return;
}



/* Entry: 10bc8e7e0; end: 10bc8e83f; -[SCSingleScreenUIContainer viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + _DAT_1127964a8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e270;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 10bc8e840; end: 10bc8e89f; -[SCSingleScreenUIContainer viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_1127964a8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e270;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 10bc8e8a0; end: 10bc8e8ff; -[SCSingleScreenUIContainer viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_1127964a8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e270;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 10bc8e900; end: 10bc8e95f; -[SCSingleScreenUIContainer viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e900(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_1127964a8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_11270e270;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 10bc8e960; end: 10bc8e9d3; -[SCSingleScreenUIContainer beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_1127964a8),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_11270e270;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 10bc8e9d4; end: 10bc8ea27; -[SCSingleScreenUIContainer endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8e9d4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_1127964a8),param_2,param_1);
  puStack_28 = PTR_PTR_11270e270;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 10bc8ea28; end: 10bc8eaa3; -[SCSingleScreenUIContainer willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8ea28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127964a8);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_11270e270;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8eaa4; end: 10bc8eb1f; -[SCSingleScreenUIContainer didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8eaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127964a8);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_11270e270;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8eb20; end: 10bc8eba7; -[SCSingleScreenUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x00010bc8eb4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bc8eb50) */
/* WARNING: Removing unreachable block (ram,0x00010bc8eb84) */
/* WARNING: Removing unreachable block (ram,0x00010bc8eb8c) */

void FUN_10bc8eb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c26f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_timeIntervalSinceReferenceDate_112679718);
  return;
}



/* Entry: 10bc8eba8; end: 10bc8ec4f; -[SCSingleScreenUIContainer detachUI:] */

void FUN_10bc8eba8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar1 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    FUN_10bc8acc0(lVar2);
  }
  func_0x00010c1cbec0(param_1);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8ec50; end: 10bc8ecdf; -[SCSingleScreenUIContainer supportedInterfaceOrientations] */

undefined1 * FUN_10bc8ec50(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_11270e270;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x00010c2631c0(puVar2);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 10bc8ece0; end: 10bc8ed23; -[SCSingleScreenUIContainer childViewControllerForStatusBarStyle] */

void FUN_10bc8ece0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc8ed24; end: 10bc8ed67; -[SCSingleScreenUIContainer childViewControllerForStatusBarHidden] */

void FUN_10bc8ed24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc8ed68; end: 10bc8ee9b; -[SCSingleScreenUIContainer _removeChildViewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8ed68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf51e00();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        FUN_10bc8acc0(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_1127964a8,0);
  return;
}



/* Entry: 10bc8ee9c; end: 10bc8eeaf; -[SCSingleScreenUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8ee9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127964a8,0);
  return;
}



/* Entry: 10bc8eeb0; end: 10bc8ef2f; -[SCSingleViewContainer hitTest:withEvent:] */

void FUN_10bc8eeb0(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_11270e278;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf879e0();
  if (((int)puVar2 == 0) || (ppuVar1 != (undefined1 **)param_1)) {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc8ef30; end: 10bc8ef7b; -[SCSingleViewContainer detachView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8ef30(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_1127964ac));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8ef7c; end: 10bc8ef8b; -[SCSingleViewContainer sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8ef7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127964ac),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10bc8ef8c; end: 10bc8ef9b; -[SCSingleViewContainer doesPassthroughTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10bc8ef8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127964b0);
}



/* Entry: 10bc8ef9c; end: 10bc8efaf; -[SCSingleViewContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8ef9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127964ac,0);
  return;
}



/* Entry: 10bc8efb0; end: 10bc8f02b; -[SCStackedScreenUIContainer attachUI:] */

void FUN_10bc8efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10bc8ad20(uVar2);
  FUN_10bc8a8e4(param_1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bc8f02c; end: 10bc8f0e3; -[SCStackedScreenUIContainer detachUI:] */

void FUN_10bc8f02c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10bc8acc0(uVar2);
  func_0x00010bf38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc8a954();
  _objc_release(uVar1);
  _objc_release(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8f0e4; end: 10bc8f133; -[SCStyledModalUIContainer initWithPresentingViewController:animated:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8f0e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e280;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithPresentingViewController_1125ebdd0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127964b4) = in_x4;
  }
  return;
}



/* Entry: 10bc8f134; end: 10bc8f13b; -[SCStyledModalUIContainer attachUI:] */

void FUN_10bc8f134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 10bc8f13c; end: 10bc8f1cb; -[SCStyledModalUIContainer attachUI:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8f13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1c8b80(param_3);
  puStack_38 = PTR_PTR_11270e280;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_attachUI_completion__1125a0c10,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8f1cc; end: 10bc8f213; -[SCSubviewUIContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8f1cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270e288;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127964b8) = 1;
  }
  return;
}



/* Entry: 10bc8f214; end: 10bc8f293; -[SCSubviewUIContainer hitTest:withEvent:] */

void FUN_10bc8f214(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_11270e288;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf879e0();
  if (((int)puVar2 == 0) || (ppuVar1 != (undefined1 **)param_1)) {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc8f294; end: 10bc8f35b; -[SCSubviewUIContainer detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8f294(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127964c4;
  func_0x00010c2a6740(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar1 = param_1;
  func_0x00010bf87a20();
  if ((int)lVar1 != 0) {
    func_0x00010bf17b00(*(undefined8 *)(param_1 + lVar3),param_2,0,0);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf87a20();
  if ((int)lVar1 != 0) {
    func_0x00010bf941a0(*(undefined8 *)(param_1 + lVar3));
  }
  func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8f35c; end: 10bc8f36b; -[SCSubviewUIContainer doesPassthroughTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10bc8f35c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127964bc);
}



/* Entry: 10bc8f36c; end: 10bc8f3a7; -[SCSubviewUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8f36c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127964c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127964c0);
  return;
}



/* Entry: 10bc8f3a8; end: 10bc8f3b7;  */

void FUN_10bc8f3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__attachUI_completion__112551bb8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10bc8f3b8; end: 10bc8f3bb; -[SCWindowUIContainer detachUI:] */

void FUN_10bc8f3b8(void)

{
  return;
}



/* Entry: 10bc8f3bc; end: 10bc8f3c7; -[SCWindowUIContainer .cxx_destruct] */

void FUN_10bc8f3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc8f3c8; end: 10bc8f413;  */

uint FUN_10bc8f3c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1c10;
  _objc_retain();
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 10bc8f414; end: 10bc8f487; -[SCUIViewControllerContainerFactory initWithViewController:] */

undefined1 * FUN_10bc8f414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e298;
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



/* Entry: 10bc8f488; end: 10bc8f4bf; -[SCUIViewControllerContainerFactory modalWithAnimated:] */

void FUN_10bc8f488(void)

{
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8f4c0; end: 10bc8f507; -[SCUIViewControllerContainerFactory modalWithAnimated:style:] */

void FUN_10bc8f4c0(void)

{
  _objc_alloc(PTR_PTR_1126aff58);
  func_0x00010c038f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8f508; end: 10bc8f5a7; -[SCUIViewControllerContainerFactory navigationWithAnimated:] */

void FUN_10bc8f508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d66a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e500(puVar3,param_2,uVar2,param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc8f5a8; end: 10bc8f5d7; -[SCUIViewControllerContainerFactory subview] */

void FUN_10bc8f5a8(void)

{
  _objc_alloc(PTR_PTR_1126b0870);
  func_0x00010c033f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8f5d8; end: 10bc8f607; -[SCUIViewControllerContainerFactory overlay] */

void FUN_10bc8f5d8(void)

{
  _objc_alloc(PTR_PTR_1126c3b20);
  func_0x00010c038ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8f608; end: 10bc8f613; -[SCUIViewControllerContainerFactory .cxx_destruct] */

void FUN_10bc8f608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc8f614; end: 10bc8f61f; -[SCViewControllerLifecycleChecker willDealloc:] */

void FUN_10bc8f614(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a) = 1;
  return;
}



/* Entry: 10bc8f620; end: 10bc8f62b; -[SCViewControllerLifecycleChecker viewWillDisappear:animated:] */

void FUN_10bc8f620(long param_1)

{
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}



/* Entry: 10bc8f62c; end: 10bc8f647; -[SCViewControllerLifecycleChecker viewDidDisappear:animated:] */

void FUN_10bc8f62c(long param_1)

{
  if (0 < *(long *)(param_1 + 8)) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return;
}



/* Entry: 10bc8f648; end: 10bc8f64f; -[SCViewControllerLifecycleChecker hasCompletedInitialAppearance] */

undefined1 FUN_10bc8f648(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 10bc8f650; end: 10bc8f90f;  */

/* WARNING: Removing unreachable block (ram,0x00010bc8f8d8) */

undefined **
FUN_10bc8f650(long param_1,undefined **param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110d96648,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(ppuVar2);
    return &PTR_PTR_113403210;
  }
  return ppuVar2;
}



/* Entry: 10bc8f910; end: 10bc8f94b;  */

undefined ** FUN_10bc8f910(void)

{
  return &PTR_PTR_113403210;
}



/* Entry: 10bc8f94c; end: 10bc8f9af;  */

undefined8 FUN_10bc8f94c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fdf9d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdf9d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fdf9b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdf9b8,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}


