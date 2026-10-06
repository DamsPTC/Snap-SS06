/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0044c68c; end: 0044c6b3; -[SCMultiDirectionalUIContainer interactiveTransition] */

void FUN_0044c68c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0044c6b4; end: 0044c6cb; -[SCMultiDirectionalUIContainer pannableCellController] */

void FUN_0044c6b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0044c6cc; end: 0044c6d3; -[SCMultiDirectionalUIContainer animated] */

undefined1 FUN_0044c6cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 0044c6d4; end: 0044c6db; -[SCMultiDirectionalUIContainer setAnimated:] */

void FUN_0044c6d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 0044c6dc; end: 0044c6e3; -[SCMultiDirectionalUIContainer wantsInteractivePresentation] */

undefined1 FUN_0044c6dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 0044c6e4; end: 0044c72b; -[SCMultiDirectionalUIContainer .cxx_destruct] */

void FUN_0044c6e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 0044c72c; end: 0044c7cf; -[SCNavigationUIContainer initWithNavigationController:animated:] */

undefined1 *
FUN_0044c72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3c48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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



/* Entry: 0044c7d0; end: 0044c7e3; -[SCNavigationUIContainer initWithNavigationController:] */

void FUN_0044c7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00785d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithNavigationController_ani_00abc450,param_3,
             &PTR___NSConcreteGlobalBlock_009e4990);
  return;
}



/* Entry: 0044c7e4; end: 0044c873; -[SCNavigationUIContainer initWithNavigationController:allowsMultipleViewControllers:] */

undefined1 *
FUN_0044c7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3c48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined ***)((long)puVar1 + 0x20) = &PTR___NSConcreteGlobalBlock_009e49b0;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0044c874; end: 0044c87b;  */

undefined8 FUN_0044c874(void)

{
  return 1;
}



/* Entry: 0044c87c; end: 0044ca1b; -[SCNavigationUIContainer attachUI:] */

void FUN_0044c87c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
    func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x007938a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00788220();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_2 + 0x10,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_storeWeak(param_2 + 0x18,param_4);
    func_0x0077f840(PTR__OBJC_CLASS___CATransaction_00ac2e00);
    _objc_initWeak(auStack_58,param_2);
    puVar1 = PTR__OBJC_CLASS___CATransaction_00ac2e00;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    func_0x0078d520(puVar1);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    func_0x0078ac40(lVar2);
    _objc_release(lVar2);
    func_0x00780660(PTR__OBJC_CLASS___CATransaction_00ac2e00);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 0044ca1c; end: 0044ca53;  */

void FUN_0044ca1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0044ca54; end: 0044ca67;  */

void FUN_0044ca54(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 0044ca68; end: 0044cc2f; -[SCNavigationUIContainer attachUI:completion:] */

void FUN_0044ca68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
    func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x007938a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00788220();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_2 + 0x10,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_storeWeak(param_2 + 0x18,param_4);
    func_0x0077f840(PTR__OBJC_CLASS___CATransaction_00ac2e00);
    _objc_initWeak(auStack_58,param_2);
    puVar1 = PTR__OBJC_CLASS___CATransaction_00ac2e00;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    _objc_retain(param_5);
    func_0x0078d520(puVar1);
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    func_0x0078ac40(lVar2);
    _objc_release(lVar2);
    func_0x00780660(PTR__OBJC_CLASS___CATransaction_00ac2e00);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 0044cc30; end: 0044ccdb;  */

void FUN_0044cc30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0044ccdc; end: 0044cf13; -[SCNavigationUIContainer detachUI:] */

void FUN_0044ccdc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
      func_0x007938a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2 + 0x18;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar3;
      func_0x007848c0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar5 != 0x7fffffffffffffff) {
        func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
        lVar2 = param_2 + 8;
        _objc_loadWeakRetained(lVar2);
        lVar4 = lVar2;
        func_0x007938a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00792300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar2);
        (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
        func_0x0077f840(PTR__OBJC_CLASS___CATransaction_00ac2e00);
        _objc_initWeak(auStack_68,param_2);
        puVar1 = PTR__OBJC_CLASS___CATransaction_00ac2e00;
        _objc_copyWeak(auStack_78,auStack_68);
        uStack_70 = param_1;
        _objc_retain(param_4);
        func_0x0078d520(puVar1);
        param_2 = param_2 + 8;
        _objc_loadWeakRetained(param_2);
        func_0x00791280();
        _objc_release(param_2);
        func_0x00780660(PTR__OBJC_CLASS___CATransaction_00ac2e00);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_68);
        _objc_release(lVar3);
        goto LAB_0044cecc;
      }
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
LAB_0044cecc:
  _objc_release(param_4);
  return;
}



/* Entry: 0044cf14; end: 0044cfcb;  */

void FUN_0044cf14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
    if (*(char *)(lVar1 + 0x28) == '\x01') {
      lVar2 = lVar1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x007938a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00788220();
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
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0044cfcc; end: 0044d007; -[SCNavigationUIContainer .cxx_destruct] */

void FUN_0044cfcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 0044d008; end: 0044d07f; -[SCOverlayStackUIContainer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0044d008(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2e08;
    _objc_alloc_init();
    lVar4 = (long)_DAT_00ac4f04;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00782100(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0044d080; end: 0044d0f7; -[SCOverlayStackUIContainer initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0044d080(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__00ab6be0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2e08;
    _objc_alloc_init();
    lVar4 = (long)_DAT_00ac4f04;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00782100(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0044d0f8; end: 0044d16f; -[SCOverlayStackUIContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0044d0f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__00abc108);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2e08;
    _objc_alloc_init();
    lVar4 = (long)_DAT_00ac4f04;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00782100(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0044d170; end: 0044d1c3; -[SCOverlayStackUIContainer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d170(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00793b20(*(undefined8 *)(param_1 + _DAT_00ac4f04),param_2,param_1);
  puStack_28 = PTR_PTR_00ac3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0044d1c4; end: 0044d217; -[SCOverlayStackUIContainer viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d1c4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00ac3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_00ab6be8);
  func_0x00793900(*(undefined8 *)(param_1 + _DAT_00ac4f04));
  return;
}



/* Entry: 0044d218; end: 0044d277; -[SCOverlayStackUIContainer viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00793980(*(undefined8 *)(param_1 + _DAT_00ac4f04),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__00ab6bf0,param_3);
  return;
}



/* Entry: 0044d278; end: 0044d2d7; -[SCOverlayStackUIContainer viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x007938c0(*(undefined8 *)(param_1 + _DAT_00ac4f04),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__00ab6bf8,param_3);
  return;
}



/* Entry: 0044d2d8; end: 0044d337; -[SCOverlayStackUIContainer viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x007939a0(*(undefined8 *)(param_1 + _DAT_00ac4f04),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__00ab6c00,param_3);
  return;
}



/* Entry: 0044d338; end: 0044d397; -[SCOverlayStackUIContainer viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x007938e0(*(undefined8 *)(param_1 + _DAT_00ac4f04),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__00ab6c08,param_3);
  return;
}



/* Entry: 0044d398; end: 0044d40b; -[SCOverlayStackUIContainer beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x0077f880(*(undefined8 *)(param_1 + _DAT_00ac4f04),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_00ac3c50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_00abab10,param_3,param_4);
  return;
}



/* Entry: 0044d40c; end: 0044d45f; -[SCOverlayStackUIContainer endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d40c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00782840(*(undefined8 *)(param_1 + _DAT_00ac4f04),param_2,param_1);
  puStack_28 = PTR_PTR_00ac3c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_00abb700);
  return;
}



/* Entry: 0044d460; end: 0044d4db; -[SCOverlayStackUIContainer willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac4f04);
  _objc_retain(param_3);
  func_0x00793b80(uVar1);
  puStack_38 = PTR_PTR_00ac3c50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__00abfbe8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 0044d4dc; end: 0044d557; -[SCOverlayStackUIContainer didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac4f04);
  _objc_retain(param_3);
  func_0x00782140(uVar1);
  puStack_38 = PTR_PTR_00ac3c50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__00abb540,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 0044d558; end: 0044d55f; -[SCOverlayStackUIContainer attachUI:] */

void FUN_0044d558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_attachUI_completion__00aba9c0,param_3,0);
  return;
}



/* Entry: 0044d560; end: 0044d603; -[SCOverlayStackUIContainer attachUI:completion:] */

void FUN_0044d560(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_retain(param_3);
  func_0x00792940(puVar1);
  FUN_004499a0(param_1,param_3);
  _objc_release(param_3);
  iVar2 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar2 != 0) {
    func_0x0078f1c0(param_1);
  }
  func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 0044d604; end: 0044d6c3; -[SCOverlayStackUIContainer detachUI:] */

void FUN_0044d604(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
  lVar2 = param_1;
  func_0x007801e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    FUN_00449d7c(lVar3);
  }
  iVar1 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar1 != 0) {
    func_0x0078f1c0(param_1);
  }
  func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044d6c4; end: 0044d753; -[SCOverlayStackUIContainer supportedInterfaceOrientations] */

undefined1 * FUN_0044d6c4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x007801e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_00ac3c50;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_supportedInterfaceOrientations_00abf668);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x00792560(puVar2);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 0044d754; end: 0044d767; -[SCOverlayStackUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac4f04,0);
  return;
}



/* Entry: 0044d768; end: 0044d7d3; -[SCOverlayUIContainer initWithPresentingViewController:] */

undefined1 * FUN_0044d768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3c58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0044d7d4; end: 0044d7db; -[SCOverlayUIContainer attachUI:] */

void FUN_0044d7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_attachUI_completion__00aba9c0,param_3,0);
  return;
}



/* Entry: 0044d7dc; end: 0044d86b; -[SCOverlayUIContainer attachUI:completion:] */

void FUN_0044d7dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x0077dd80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    FUN_004499a0(lVar1,param_3);
    _objc_storeWeak(param_1 + 0x10,param_3);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044d86c; end: 0044d8f3; -[SCOverlayUIContainer detachUI:] */

void FUN_0044d86c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x0078a300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    FUN_00449d7c();
    _objc_release(param_1);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044d8f4; end: 0044d9cf; -[SCOverlayUIContainer _topMostViewController] */

void FUN_0044d8f4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_00ac2e10;
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
    func_0x00789860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = uVar3;
  func_0x00792b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = uVar1;
  if (uVar4 != 0) {
    uVar5 = uVar3;
    func_0x00792b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar5);
  return;
}



/* Entry: 0044d9d0; end: 0044d9f7; -[SCOverlayUIContainer .cxx_destruct] */

void FUN_0044d9d0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 0044d9f8; end: 0044daab; -[SCOverlayWindow hitTest:withEvent:] */

void FUN_0044d9f8(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &puStack_40;
  puStack_38 = PTR_PTR_00ac3c60;
  puStack_40 = param_1;
  _objc_msgSendSuper2(&puStack_40,PTR_s_hitTest_withEvent__00ab6af0);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined1 **)param_1) {
    func_0x0078bd00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00793860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
    if (ppuVar1 != (undefined1 **)puVar2) {
      _objc_retain(ppuVar1);
      puVar2 = (undefined1 *)ppuVar1;
      goto LAB_0044da8c;
    }
  }
  puVar2 = (undefined1 *)0x0;
LAB_0044da8c:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0044daac; end: 0044dab3; -[SCOverlayWindowUIContainer initWithWindowLevel:] */

void FUN_0044daac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00787050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithWindowLevel_accessibilit_00abc918,0);
  return;
}



/* Entry: 0044dab4; end: 0044db13; -[SCOverlayWindowUIContainer initWithWindowLevel:accessibilityModal:] */

undefined8 FUN_0044dab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00787040(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 0044db14; end: 0044db97; -[SCOverlayWindowUIContainer initWithWindowLevel:accessibilityModality:] */

undefined1 *
FUN_0044db14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3c68;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0044db98; end: 0044dc5b; -[SCOverlayWindowUIContainer attachUI:] */

void FUN_0044db98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2e18;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
  func_0x00788c60(PTR__OBJC_CLASS___UIScreen_00ac2c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fc60();
  func_0x00785700();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  FUN_0076f850(*(undefined8 *)(param_1 + 8));
  func_0x00791320(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    func_0x0077fbc0();
    func_0x0078ca00(*(undefined8 *)(param_1 + 8),param_2,lVar3);
  }
  func_0x00790040(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x0078e520(*(undefined8 *)(param_1 + 8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044dc5c; end: 0044dcaf; -[SCOverlayWindowUIContainer detachUI:] */

void FUN_0044dc5c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00790040(*(undefined8 *)(param_1 + 8),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044dcb0; end: 0044dcdf; -[SCOverlayWindowUIContainer .cxx_destruct] */

void FUN_0044dcb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0044dce0; end: 0044dd57; -[SCSingleScreenUIContainer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0044dce0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2e08;
    _objc_alloc_init();
    lVar4 = (long)_DAT_00ac4f1c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00782100(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0044dd58; end: 0044ddcf; -[SCSingleScreenUIContainer initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0044dd58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__00ab6be0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2e08;
    _objc_alloc_init();
    lVar4 = (long)_DAT_00ac4f1c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00782100(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0044ddd0; end: 0044de47; -[SCSingleScreenUIContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0044ddd0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__00abc108);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2e08;
    _objc_alloc_init();
    lVar4 = (long)_DAT_00ac4f1c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00782100(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0044de48; end: 0044de9b; -[SCSingleScreenUIContainer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044de48(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00793b20(*(undefined8 *)(param_1 + _DAT_00ac4f1c),param_2,param_1);
  puStack_28 = PTR_PTR_00ac3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0044de9c; end: 0044deef; -[SCSingleScreenUIContainer viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044de9c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00ac3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_00ab6be8);
  func_0x00793900(*(undefined8 *)(param_1 + _DAT_00ac4f1c));
  return;
}



/* Entry: 0044def0; end: 0044df4f; -[SCSingleScreenUIContainer viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044def0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00793980(*(undefined8 *)(param_1 + _DAT_00ac4f1c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__00ab6bf0,param_3);
  return;
}



/* Entry: 0044df50; end: 0044dfaf; -[SCSingleScreenUIContainer viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044df50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x007938c0(*(undefined8 *)(param_1 + _DAT_00ac4f1c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__00ab6bf8,param_3);
  return;
}



/* Entry: 0044dfb0; end: 0044e00f; -[SCSingleScreenUIContainer viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044dfb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x007939a0(*(undefined8 *)(param_1 + _DAT_00ac4f1c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__00ab6c00,param_3);
  return;
}



/* Entry: 0044e010; end: 0044e06f; -[SCSingleScreenUIContainer viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x007938e0(*(undefined8 *)(param_1 + _DAT_00ac4f1c),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_00ac3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__00ab6c08,param_3);
  return;
}



/* Entry: 0044e070; end: 0044e0e3; -[SCSingleScreenUIContainer beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e070(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x0077f880(*(undefined8 *)(param_1 + _DAT_00ac4f1c),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_00ac3c70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_00abab10,param_3,param_4);
  return;
}



/* Entry: 0044e0e4; end: 0044e137; -[SCSingleScreenUIContainer endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e0e4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00782840(*(undefined8 *)(param_1 + _DAT_00ac4f1c),param_2,param_1);
  puStack_28 = PTR_PTR_00ac3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_00abb700);
  return;
}



/* Entry: 0044e138; end: 0044e1b3; -[SCSingleScreenUIContainer willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac4f1c);
  _objc_retain(param_3);
  func_0x00793b80(uVar1);
  puStack_38 = PTR_PTR_00ac3c70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__00abfbe8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 0044e1b4; end: 0044e22f; -[SCSingleScreenUIContainer didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e1b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac4f1c);
  _objc_retain(param_3);
  func_0x00782140(uVar1);
  puStack_38 = PTR_PTR_00ac3c70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__00abb540,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 0044e230; end: 0044e2b7; -[SCSingleScreenUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x0044e25c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0044e260) */
/* WARNING: Removing unreachable block (ram,0x0044e294) */
/* WARNING: Removing unreachable block (ram,0x0044e29c) */

void FUN_0044e230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00792950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(puVar1,PTR_s_timeIntervalSinceReferenceDate_00abf760);
  return;
}



/* Entry: 0044e2b8; end: 0044e35f; -[SCSingleScreenUIContainer detachUI:] */

void FUN_0044e2b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
  lVar1 = param_1;
  func_0x007801e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    FUN_00449d7c(lVar2);
  }
  func_0x0078f1a0(param_1);
  func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044e360; end: 0044e3ef; -[SCSingleScreenUIContainer supportedInterfaceOrientations] */

undefined1 * FUN_0044e360(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x007801e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_38 = PTR_PTR_00ac3c70;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_supportedInterfaceOrientations_00abf668);
  }
  else {
    ppuVar3 = (undefined1 **)puVar2;
    func_0x00792560(puVar2);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar3;
}



/* Entry: 0044e3f0; end: 0044e433; -[SCSingleScreenUIContainer childViewControllerForStatusBarStyle] */

void FUN_0044e3f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x007801e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0044e434; end: 0044e477; -[SCSingleScreenUIContainer childViewControllerForStatusBarHidden] */

void FUN_0044e434(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x007801e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0044e478; end: 0044e5ab; -[SCSingleScreenUIContainer _removeChildViewControllers] */

/* WARNING: Removing unreachable block (ram,0x0044e524) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e478(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x007801e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00780e20();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00780e80();
  if (lVar2 != 0) {
    func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00780ea0();
    while (lVar2 != 0) {
      lVar4 = 0;
      do {
        FUN_00449d7c(*(undefined8 *)(lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00780ea0();
    }
    _objc_release(lVar1);
    func_0x00792940(PTR__OBJC_CLASS___NSDate_00ac2c88);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(lVar1 + _DAT_00ac4f1c,0);
    return;
  }
  return;
}



/* Entry: 0044e5ac; end: 0044e5bf; -[SCSingleScreenUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac4f1c,0);
  return;
}



/* Entry: 0044e5c0; end: 0044e63f; -[SCSingleViewContainer hitTest:withEvent:] */

void FUN_0044e5c0(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_00ac3c78;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__00ab6af0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x007823a0();
  if (((int)puVar2 == 0) || (ppuVar1 != (undefined1 **)param_1)) {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0044e640; end: 0044e8c3; -[SCSingleViewContainer attachView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e640(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar14 = param_3;
  _objc_retain(param_3);
  lVar15 = (long)_DAT_00ac4f20;
  func_0x0078b3a0(*(undefined8 *)(param_1 + lVar15));
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = param_3;
  _objc_release(uVar2);
  if (*(long *)(param_1 + lVar15) != 0) {
    func_0x00790c20(*(long *)(param_1 + lVar15),param_2,0);
    func_0x0077e8e0(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_00ac2dc0;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x007882a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x007882a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00780b20(uVar3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    uStack_88 = uVar2;
    func_0x00792b20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00792b20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00780b20(uVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    uStack_80 = uVar7;
    func_0x00792c60();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00792c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00780b20(uVar8,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    uStack_78 = uVar10;
    func_0x0077fc00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x0077fc00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00780b20(uVar11,param_2,lVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    uStack_70 = uVar12;
    func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x0077e340(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(lVar15);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(uVar3);
    func_0x00788280(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  func_0x0078b3a0(*(undefined8 *)(param_3 + _DAT_00ac4f20));
  if (puVar14 != (undefined *)0x0) {
    (**(code **)(puVar14 + 0x10))(puVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar14);
  return;
}



/* Entry: 0044e8c4; end: 0044e90f; -[SCSingleViewContainer detachView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e8c4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x0078b3a0(*(undefined8 *)(param_1 + _DAT_00ac4f20));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044e910; end: 0044e937; -[SCSingleViewContainer intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e910(long param_1)

{
  if (*(long *)(param_1 + _DAT_00ac4f20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00787310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(long *)(param_1 + _DAT_00ac4f20),PTR_s_intrinsicContentSize_00abc9c8);
    return;
  }
  return;
}



/* Entry: 0044e938; end: 0044e947; -[SCSingleViewContainer sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007918f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac4f20),PTR_s_sizeThatFits__00abf348);
  return;
}



/* Entry: 0044e948; end: 0044e957; -[SCSingleViewContainer doesPassthroughTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0044e948(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ac4f24);
}



/* Entry: 0044e958; end: 0044e967; -[SCSingleViewContainer setPassthroughTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e958(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00ac4f24) = param_3;
  return;
}



/* Entry: 0044e968; end: 0044e97b; -[SCSingleViewContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac4f20,0);
  return;
}



/* Entry: 0044e97c; end: 0044e9f7; -[SCStackedScreenUIContainer attachUI:] */

void FUN_0044e97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x007801e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_00449ddc(uVar2);
  FUN_004499a0(param_1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0044e9f8; end: 0044eaaf; -[SCStackedScreenUIContainer detachUI:] */

void FUN_0044e9f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x007801e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_00449d7c(uVar2);
  func_0x007801e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  FUN_00449a10();
  _objc_release(uVar1);
  _objc_release(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044eab0; end: 0044eaff; -[SCStyledModalUIContainer initWithPresentingViewController:animated:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044eab0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithPresentingViewController_00abc638);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac4f28) = in_x4;
  }
  return;
}



/* Entry: 0044eb00; end: 0044eb07; -[SCStyledModalUIContainer attachUI:] */

void FUN_0044eb00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_attachUI_completion__00aba9c0,param_3,0);
  return;
}



/* Entry: 0044eb08; end: 0044eb97; -[SCStyledModalUIContainer attachUI:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044eb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0078f020(param_3);
  puStack_38 = PTR_PTR_00ac3c80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_attachUI_completion__00aba9c0,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0044eb98; end: 0044ebdf; -[SCSubviewUIContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044eb98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_00ac3c88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithCoder__00abc108);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac4f2c) = 1;
  }
  return;
}



/* Entry: 0044ebe0; end: 0044ec27; -[SCSubviewUIContainer initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ebe0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_00ac3c88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__00abc2c8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac4f2c) = 1;
  }
  return;
}



/* Entry: 0044ec28; end: 0044ec8f; -[SCSubviewUIContainer initWithParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0044ec28(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00785700(*(undefined8 *)PTR__CGRectZero_00999ee8,
                  *(undefined8 *)(PTR__CGRectZero_00999ee8 + 8),
                  *(undefined8 *)(PTR__CGRectZero_00999ee8 + 0x10),
                  *(undefined8 *)(PTR__CGRectZero_00999ee8 + 0x18));
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + _DAT_00ac4f34,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 0044ec90; end: 0044ed0f; -[SCSubviewUIContainer hitTest:withEvent:] */

void FUN_0044ec90(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_00ac3c88;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__00ab6af0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x007823a0();
  if (((int)puVar2 == 0) || (ppuVar1 != (undefined1 **)param_1)) {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0044ed10; end: 0044ee3f; -[SCSubviewUIContainer attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ed10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_00ac4f38;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00793860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_00ac4f34;
  lVar3 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar3);
  func_0x0077e480();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_00ac2db8;
  puStack_70 = PTR___NSConcreteStackBlock_00999f30;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_0044ee40;
  puStack_58 = &UNK_009e36d0;
  lStack_50 = param_1;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x0078a660(puVar1,param_2,&puStack_70);
  lVar3 = param_1 + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    func_0x00782120(uVar4,param_2,param_1);
    _objc_release(param_1);
  }
  _objc_release(uStack_48);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044ee40; end: 0044f0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ee40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
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
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x007823c0();
  if (iVar2 != 0) {
    func_0x0077f860(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_00ac4f38),param_2,1,0);
  }
  func_0x0077fc60(*(undefined8 *)(param_1 + 0x20));
  func_0x0078e240(*(undefined8 *)(param_1 + 0x28));
  func_0x0077e8e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00790c20(*(undefined8 *)(param_1 + 0x28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_00ac2dc0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00792b20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00792b20();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00780b20(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar17;
  func_0x0078bca0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x0078bca0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00780b20(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar7;
  func_0x0077fc00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077fc00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00780b20(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar10;
  func_0x007882c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x007882c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00780b20(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  uStack_70 = uVar13;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar14;
  func_0x0077e340(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00788280(*(undefined8 *)(param_1 + 0x20));
  lVar15 = *(long *)(param_1 + 0x20);
  func_0x007823c0();
  if ((int)lVar15 != 0) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_00ac4f38);
    func_0x00782820();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar18);
  lVar19 = (long)_DAT_00ac4f38;
  func_0x00793b60(*(undefined8 *)(lVar15 + lVar19),param_2,0);
  lVar16 = lVar15;
  func_0x007823c0();
  if ((int)lVar16 != 0) {
    func_0x0077f860(*(undefined8 *)(lVar15 + lVar19),param_2,0,0);
  }
  uVar17 = *(undefined8 *)(lVar15 + lVar19);
  func_0x00793860(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b3a0();
  _objc_release(uVar17);
  lVar16 = lVar15;
  func_0x007823c0();
  if ((int)lVar16 != 0) {
    func_0x00782820(*(undefined8 *)(lVar15 + lVar19));
  }
  func_0x0078b380(*(undefined8 *)(lVar15 + lVar19));
  func_0x00782120(*(undefined8 *)(lVar15 + lVar19),param_2,0);
  uVar17 = *(undefined8 *)(lVar15 + lVar19);
  *(undefined8 *)(lVar15 + lVar19) = 0;
  _objc_release(uVar17);
  if (puVar18 != (undefined *)0x0) {
    (**(code **)(puVar18 + 0x10))(puVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar18);
  return;
}



/* Entry: 0044f0dc; end: 0044f1a3; -[SCSubviewUIContainer detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f0dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_00ac4f38;
  func_0x00793b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar1 = param_1;
  func_0x007823c0();
  if ((int)lVar1 != 0) {
    func_0x0077f860(*(undefined8 *)(param_1 + lVar3),param_2,0,0);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00793860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b3a0();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x007823c0();
  if ((int)lVar1 != 0) {
    func_0x00782820(*(undefined8 *)(param_1 + lVar3));
  }
  func_0x0078b380(*(undefined8 *)(param_1 + lVar3));
  func_0x00782120(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044f1a4; end: 0044f1b3; -[SCSubviewUIContainer doesPassthroughTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0044f1a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ac4f30);
}



/* Entry: 0044f1b4; end: 0044f1c3; -[SCSubviewUIContainer setPassthroughTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f1b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00ac4f30) = param_3;
  return;
}



/* Entry: 0044f1c4; end: 0044f1d3; -[SCSubviewUIContainer doesSendAppearanceTransitions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0044f1c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ac4f2c);
}



/* Entry: 0044f1d4; end: 0044f1e3; -[SCSubviewUIContainer setSendAppearanceTransitions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f1d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00ac4f2c) = param_3;
  return;
}



/* Entry: 0044f1e4; end: 0044f21f; -[SCSubviewUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f1e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac4f38,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + _DAT_00ac4f34);
  return;
}



/* Entry: 0044f220; end: 0044f293; -[SCWindowUIContainer initWithWindow:] */

undefined1 * FUN_0044f220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3c90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0044f294; end: 0044f29b; -[SCWindowUIContainer attachUI:] */

void FUN_0044f294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_attachUI_completion__00aba9c0,param_3,0);
  return;
}



/* Entry: 0044f29c; end: 0044f417; -[SCWindowUIContainer attachUI:completion:] */

void FUN_0044f29c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x0078bd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0078a960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x0078bd00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x0078a960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x007874c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x0078bd00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_0044f418;
      puStack_70 = &UNK_009e4340;
      lStack_68 = param_1;
      _objc_retain(param_3);
      uStack_60 = param_3;
      _objc_retain(param_4);
      uStack_58 = param_4;
      func_0x00782240(uVar6,param_2,0,&puStack_88);
      _objc_release(uVar6);
      _objc_release(uStack_58);
      _objc_release(uStack_60);
      goto LAB_0044f3ec;
    }
  }
  func_0x0077c100(param_1,param_2,param_3,param_4);
LAB_0044f3ec:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0044f418; end: 0044f427;  */

void FUN_0044f418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__attachUI_completion__00ab9d38,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 0044f428; end: 0044f48f; -[SCWindowUIContainer _attachUI:completion:] */

void FUN_0044f428(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  func_0x00790040(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00787a00();
  if ((uVar1 & 1) == 0) {
    func_0x00788cc0(*(undefined8 *)(param_1 + 8));
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 0044f490; end: 0044f493; -[SCWindowUIContainer detachUI:] */

void FUN_0044f490(void)

{
  return;
}


