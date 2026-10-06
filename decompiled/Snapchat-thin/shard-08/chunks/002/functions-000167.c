/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ef04c8; end: 105ef0517; -[SCMapViewController _logInitialViewportCalculated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef04c8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + (long)_DAT_11273a088);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6b00(param_1);
  func_0x00010c0a8a60(uVar1,param_2,param_1 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef0518; end: 105ef05df; -[SCMapViewController _logInitialViewportFinalWithOutcome:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef0518(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273a088;
  uVar1 = *(ulong *)(param_2 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8b40();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf200(*(undefined8 *)(param_2 + (long)_DAT_11273a140));
  func_0x00010bdf6b00(param_2);
  func_0x00010c0a8a80(param_1,uVar3,param_3,param_4,param_2 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105ef05e0; end: 105ef0623; -[SCMapViewController _presentExternalMusicDeepLinkFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef05e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a0b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10bde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef0624; end: 105ef06df; -[SCMapViewController _presentArrivalNotificationsTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef0624(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273a194;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126c5bc0;
  _objc_alloc(PTR_PTR_1126c5bc0);
  func_0x00010c0582c0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273a0c8);
  func_0x00010bf21f80(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef06e0; end: 105ef07bb; -[SCMapViewController _presentInferredSchoolOnboardingDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef06e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273a164;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126c5bd0;
    _objc_alloc(PTR_PTR_1126c5bd0);
    func_0x00010c058160();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273a0a4);
    func_0x00010bf21f80(uVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980(puVar2,param_2,uVar4);
    _objc_release(uVar4);
  }
  else {
    puVar2 = PTR_PTR_1126c5bc8;
    _objc_alloc_init(PTR_PTR_1126c5bc8);
    puVar3 = (undefined *)(param_1 + lVar5);
    _objc_loadWeakRetained(puVar3);
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ef07bc; end: 105ef090b; -[SCMapViewController _registerForNotificationCenter] */

void FUN_105ef07bc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef090c; end: 105ef094b; -[SCMapViewController _deregisterForNotificationCenter] */

void FUN_105ef090c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef094c; end: 105ef0b17; -[SCMapViewController _maybeSetupGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef094c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_1;
  if ((*(byte *)(param_1 + (long)_DAT_11273a198) & 1) == 0) {
    *(undefined1 *)(param_1 + (long)_DAT_11273a198) = 1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (uVar2 == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      do {
        uVar3 = uVar2;
        func_0x00010bfc1c00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (uVar7 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar3);
            }
            uVar8 = *(ulong *)(uVar9 * 8);
            puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
            _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
            uVar5 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar4);
            if ((uVar5 & 1) != 0) {
              _objc_retain(uVar8);
              goto LAB_105ef0a7c;
            }
            uVar9 = uVar9 + 1;
          } while (uVar7 != uVar9);
          uVar7 = uVar3;
          func_0x00010bf52a60();
        }
        uVar8 = 0;
LAB_105ef0a7c:
        _objc_release(uVar3);
        uVar7 = uVar2;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      } while ((uVar7 != 0) && (uVar2 = uVar7, uVar8 == 0));
    }
    func_0x00010c180ba0(*(undefined8 *)(param_1 + (long)_DAT_11273a130));
    _objc_release(uVar7);
    _objc_release(uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bef11a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105ef0b18; end: 105ef0b4f; -[SCMapViewController applicationWillResignActive:] */

void FUN_105ef0b18(undefined8 param_1)

{
  func_0x00010bef11a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef0b50; end: 105ef0c67; -[SCMapViewController applicationDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef0b50(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11273a19c) = param_1;
  func_0x00010bfb3280(*(undefined8 *)(param_2 + _DAT_112739fe8));
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273a030);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11273a084);
  func_0x00010bfedde0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11273a134);
  func_0x00010c1530a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcae40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07820(uVar1,param_3,uVar2,0xffffffffffffffff,0,PTR____NSArray0__struct_11034ab48,0,
                      uVar5,*(undefined8 *)(param_2 + _DAT_11273a168));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef0c68; end: 105ef0ce3; -[SCMapViewController applicationWillEnterForeground:] */

void FUN_105ef0c68(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105ef0ce4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 105ef0ce4; end: 105ef0ceb;  */

void FUN_105ef0ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dismissOnForegroundIfNecessary_11255e568);
  return;
}



/* Entry: 105ef0cec; end: 105ef0e17; -[SCMapViewController _dismissOnForegroundIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef0cec(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _CACurrentMediaTime();
  if (300.0 < param_1 - *(double *)(param_2 + (long)_DAT_11273a19c)) {
    uVar1 = param_2;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 != 0) {
        func_0x00010bf84b00(param_2);
      }
      uVar1 = param_2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010c27acc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010c10fd00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf84b00();
      }
      else {
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ba6c0();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 105ef0e18; end: 105ef0ee3; -[SCMapViewController applicationDidBecomeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef0e18(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + (long)_DAT_11273a030);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11273a084);
  func_0x00010bfedde0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf077a0(uVar1,param_2,uVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c286f00(*(undefined8 *)(param_1 + (long)_DAT_112739ff8));
  func_0x00010be42e60();
  if ((param_1 & 1) != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ef0ee4; end: 105ef103b; -[SCMapViewController _userDidTakeScreenshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef0ee4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273a030);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291d40();
  _objc_release(uVar1);
  lVar5 = param_2;
  func_0x00010be41c00();
  if ((int)lVar5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11273a1a0;
    if ((*(long *)(param_2 + lVar5) == 0) || (func_0x00010c26f380(puVar2), 3.3 <= param_1)) {
      _objc_retain(puVar2);
      uVar1 = *(undefined8 *)(param_2 + lVar5);
      *(undefined **)(param_2 + lVar5) = puVar2;
      _objc_release(uVar1);
      lVar6 = (long)_DAT_11273a09c;
      lVar5 = *(long *)(param_2 + lVar6);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_2 + lVar6));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar4 = PTR_PTR_1126c5bd8;
      _objc_alloc(PTR_PTR_1126c5bd8);
      func_0x00010c0582c0();
      func_0x00010bf9d620(*(undefined8 *)(param_2 + lVar6),param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105ef103c; end: 105ef1097; -[SCMapViewController _isPresentingStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ef103c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bef11a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ad00();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112739fec);
    func_0x00010c07ab40(uVar3);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105ef1098; end: 105ef10db; -[SCMapViewController _dismissModallyPresentedElements] */

/* WARNING: Possible PIC construction at 0x000105ef10b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ef10bc) */

void FUN_105ef1098(void)

{
  func_0x00010bef11a0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bf84610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105ef10dc; end: 105ef120f; -[SCMapViewController _presentLocationSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef10dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf2dd60(*(undefined8 *)(param_1 + _DAT_11273a130),param_2,
                      &PTR____CFConstantStringClassReference_110e30b38);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b0ea8;
  _objc_opt_new(PTR_PTR_1126b0ea8);
  func_0x00010c19a840();
  puVar3 = PTR_PTR_1126b5538;
  _objc_opt_new(PTR_PTR_1126b5538);
  func_0x00010c1bfc40(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar3);
  lVar4 = param_1 + _DAT_11273a108;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020();
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf61c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef1210; end: 105ef131b; -[SCMapViewController _presentAddFriendsScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1210(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af668;
  _objc_alloc(PTR_PTR_1126af668);
  func_0x00010c033380();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1;
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2,param_2,lVar3,1);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273a004);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273a008);
  func_0x00010bf22980(uVar4,param_2,puVar1,puVar2,0,0x27,0,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010bf61c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef131c; end: 105ef1abf; -[SCMapViewController _presentBitmojiTray:launchSource:sourceSessionId:reactionEmoji:reactionImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef131c(double param_1,double param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined *puVar10;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar18 = (long)_DAT_11273a060;
  lVar5 = *(long *)(param_3 + lVar18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) goto LAB_105ef1a7c;
  lVar5 = *(long *)(param_3 + _DAT_11273a090);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) goto LAB_105ef1a7c;
  lVar14 = (long)_DAT_11273a010;
  lVar5 = *(long *)(param_3 + lVar14);
  func_0x00010c08fa60();
  if (lVar5 == 0) goto LAB_105ef1a7c;
  lVar5 = *(long *)(param_3 + _DAT_112739fe0);
  func_0x00010c0b96e0(lVar5,param_4,*(undefined8 *)(param_3 + lVar14));
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_3 + _DAT_11273a050);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c076e60();
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      func_0x00010c09ea60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238260();
    }
    else {
      lVar16 = (long)_DAT_11273a164;
      puVar13 = param_3 + lVar16;
      _objc_loadWeakRetained();
      if (puVar13 == (undefined *)0x0) {
LAB_105ef14cc:
        puVar13 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar13);
        uVar8 = *(undefined8 *)(param_3 + _DAT_11273a1a4);
        *(undefined8 *)(param_3 + _DAT_11273a1a4) = 0;
        _objc_release(uVar8);
        uVar8 = *(undefined8 *)(param_3 + _DAT_11273a058);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2237c0();
        _objc_release(uVar8);
        lVar16 = (long)_DAT_112739fc4;
        puVar9 = *(undefined **)(param_3 + lVar16);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar9;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar13;
        func_0x00010bf51c80();
        iVar4 = (int)puVar10;
        param_1 = ABS(param_1);
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (1.1920928955078125e-07 < ABS(param_2)) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_1)) {
            bVar1 = param_1 < 1.1920928955078125e-07;
            bVar2 = param_1 == 1.1920928955078125e-07;
            bVar3 = false;
          }
        }
        if (bVar2 || bVar1 != bVar3) {
LAB_105ef19f4:
          _objc_release(puVar13);
          _objc_release(puVar9);
        }
        else {
          _CLLocationCoordinate2DIsValid();
          _objc_release(puVar13);
          _objc_release(puVar9);
          if (iVar4 != 0) {
            puVar9 = *(undefined **)(param_3 + _DAT_112739fc8);
            func_0x00010c0fa5c0(puVar9,param_4,*(undefined8 *)(param_3 + lVar14));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            dVar20 = 100.0;
            _objc_release();
            uVar11 = *(undefined8 *)(param_3 + lVar16);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar11;
            func_0x00010c09ea00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51c80();
            dVar21 = dVar20;
            _objc_release(uVar8);
            fVar19 = SUB84(dVar21,0);
            _objc_release(uVar11);
            func_0x00010bdd4780(param_3);
            func_0x0001090218f0(*(undefined8 *)(param_3 + _DAT_11273a00c));
            dVar25 = (double)fVar19;
            dVar21 = 0.0;
            if (0.0 <= dVar25) {
              dVar21 = dVar25;
            }
            NEON_fminnm(dVar21,0x4039800000000000);
            _exp2();
            dVar21 = -85.0511287798066;
            if (-85.0511287798066 <= dVar20) {
              dVar21 = dVar20;
            }
            NEON_fminnm(dVar21,0x40554345b1a549d7);
            _cos();
            func_0x000108d313b8();
            uVar8 = *(undefined8 *)(param_3 + _DAT_11273a018);
            func_0x00010c269d40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b8940();
            _objc_release(uVar8);
            lVar14 = (long)_DAT_11273a134;
            puVar13 = PTR_PTR_1126b1e08;
            dVar21 = dVar20;
            dVar23 = param_2;
            func_0x00010bf29880(dVar20,param_2,dVar25,0x404e000000000000,0,PTR_PTR_1126b1e08,param_4
                                ,*(undefined8 *)(param_3 + lVar14));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf01f00();
            lVar15 = (long)_DAT_11273a140;
            uVar8 = *(undefined8 *)(param_3 + lVar15);
            dVar25 = dVar21;
            func_0x00010bf28e60(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf01f00();
            dVar21 = dVar21 - dVar25;
            _objc_release(uVar8);
            func_0x00010bf34640(*(undefined8 *)(param_3 + lVar15));
            uVar11 = *(undefined8 *)(param_3 + lVar16);
            dVar22 = dVar25;
            dVar24 = dVar23;
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar11;
            func_0x00010c09ea00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51c80();
            func_0x000108d312a8(dVar25,dVar23,dVar22,dVar24);
            _objc_release(uVar8);
            _objc_release(uVar11);
            bVar1 = 400000.0 < ABS(dVar21);
            lVar16 = (long)_DAT_11273a144;
            iVar4 = (int)*(undefined8 *)(param_3 + lVar16);
            func_0x00010c071800();
            if (iVar4 == 0) {
              if (bVar1 || 400.0 < dVar25) {
                func_0x00010c176040(*(undefined8 *)(param_3 + lVar15),param_4,puVar13);
                goto LAB_105ef19f4;
              }
              puVar10 = PTR_PTR_1126b1e20;
              _objc_alloc(PTR_PTR_1126b1e20);
              func_0x00010c00eb00(0x3fd3333333333333);
              func_0x00010c176120(*(undefined8 *)(param_3 + lVar15),param_4,puVar13,puVar10,0);
            }
            else {
              puVar10 = PTR_PTR_1126b1dc8;
              dVar21 = dVar20;
              func_0x00010c271ea0(dVar20,param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf01f00(puVar13);
              dVar22 = dVar21;
              func_0x00010c0fc7c0(puVar13);
              func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar14));
              dVar22 = 1.5707963267948966 - (dVar22 * 3.141592653589793) / 180.0;
              _sin(dVar22);
              dVar23 = 0.2617993877991494;
              _tan(0x3fd0c152382d7365);
              dVar20 = (dVar20 * 3.141592653589793) / 180.0;
              _cos(dVar20);
              _log2(((dVar20 * 6.283185307179586 * 6378137.0) /
                    ((dVar23 * (dVar21 / dVar22 + dVar21 / dVar22)) / dVar24)) * 0.001953125);
              puVar12 = PTR_PTR_1126b1dc8;
              puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf2a160(puVar12,param_4,puVar17,
                                  &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184550,
                                  &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184560);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar17);
              if (bVar1 || 400.0 < dVar25) {
                puVar17 = (undefined *)0x0;
              }
              else {
                puVar17 = PTR_PTR_1126b1dc8;
                func_0x00010bf03e40(0x3fd3333333333333,PTR_PTR_1126b1dc8,param_4,1);
                _objc_retainAutoreleasedReturnValue();
              }
              func_0x00010c0d1840(*(undefined8 *)(param_3 + lVar16),param_4,puVar10,puVar12,puVar17)
              ;
              _objc_release(puVar17);
              _objc_release(puVar12);
            }
            _objc_release(puVar10);
            goto LAB_105ef19f4;
          }
        }
        puVar13 = *(undefined **)(param_3 + _DAT_11273a05c);
        func_0x00010bf22f60(puVar13,param_4,param_3,param_6,param_7,param_8,param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(*(undefined8 *)(param_3 + lVar18),param_4,puVar13);
        param_3 = *(undefined **)(param_3 + _DAT_11273a134);
        func_0x00010bf218e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c171740();
      }
      else {
        iVar4 = (int)*(undefined8 *)(param_3 + _DAT_11273a00c);
        func_0x000109021a7c();
        _objc_release(puVar13);
        if (iVar4 == 0) goto LAB_105ef14cc;
        puVar13 = PTR_PTR_1126c5be0;
        _objc_alloc(PTR_PTR_1126c5be0);
        func_0x00010c04a8e0();
        param_3 = param_3 + lVar16;
        _objc_loadWeakRetained(param_3);
        func_0x00010c0d5ec0();
      }
      _objc_release(param_3);
      param_3 = puVar13;
    }
    _objc_release(param_3);
  }
  _objc_release(lVar5);
LAB_105ef1a7c:
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105ef1ac0; end: 105ef1b2b; -[SCMapViewController mapBitmojiTrayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1ac0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a060;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be266b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleBitmojiTrayClosed_112567348);
    return;
  }
  return;
}



/* Entry: 105ef1b2c; end: 105ef1b77; -[SCMapViewController mapBitmojiTrayDidUpdateSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1b2c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c108f40();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c128e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112739fe8),PTR_s_reloadMyStatuses_112627db0);
  return;
}



/* Entry: 105ef1b78; end: 105ef1d03; -[SCMapViewController mapBitmojiTrayDidSelectFriendCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1b78(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_112739fc8);
  func_0x00010c0fa5c0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112739fe0);
    func_0x00010c0b96e0(uVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10dd60(*(undefined8 *)(param_1 + _DAT_112739fe4),param_2,param_1,uVar4);
    _objc_release(uVar4);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
    func_0x000109021ae4();
    if (iVar1 == 0) {
      func_0x00010bddc5a0(param_1,param_2,param_3,8,5,0,0xf,0,0xba,0x100);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7b5e0(param_1,param_2,puVar3,1,0xba,0,0,0);
      _objc_release(puVar3);
    }
    func_0x00010c0b8880(param_1);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_3 + _DAT_11273a058);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2237c0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_3 + _DAT_11273a1a4);
  *(undefined8 *)(param_3 + _DAT_11273a1a4) = 0;
  _objc_release(uVar4);
  lVar2 = param_3;
  func_0x00010beb6fe0();
  if ((int)lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_3 + _DAT_11273a134);
    func_0x00010bf218e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 105ef1d04; end: 105ef1da7; -[SCMapViewController _handleBitmojiTrayClosed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1d04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a058);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2237c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1a4);
  *(undefined8 *)(param_1 + _DAT_11273a1a4) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010beb6fe0();
  if ((int)lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273a134);
    func_0x00010bf218e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ef1da8; end: 105ef1de3; -[SCMapViewController _openBitmojiBuilder] */

void FUN_105ef1da8(undefined8 param_1)

{
  func_0x00010be7a380();
  func_0x00010bf61c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef1de4; end: 105ef1e63; -[SCMapViewController _presentAvatarBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1de4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112739fd0),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef1e64; end: 105ef1eb3; -[SCMapViewController bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1e64(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112739fd0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf61c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef1eb4; end: 105ef229f; -[SCMapViewController _exposeMapPlaceDiscoveryScopeWithPlacePivot:placeLocation:source:sourceSessionId:footerActionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef1eb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar16 = (long)_DAT_11273a164;
  lVar12 = param_3 + lVar16;
  _objc_loadWeakRetained();
  if (lVar12 == 0) {
LAB_105ef207c:
    iVar2 = (int)lVar12;
    _CLLocationCoordinate2DIsValid(param_1,param_2);
    if (iVar2 != 0) {
      ppuVar9 = param_5;
      func_0x00010c2923e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(ppuVar9);
    }
    lVar16 = (long)_DAT_11273a090;
    func_0x00010c150520(*(undefined8 *)(param_3 + lVar16));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar10 = PTR_PTR_1126b1e18;
    _objc_alloc(PTR_PTR_1126b1e18);
    func_0x00010c0366e0(param_1,param_2);
    uVar11 = *(undefined8 *)(param_3 + lVar16);
    func_0x00010c150520(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fcfc0(param_3,param_4,uVar11,puVar10);
    _objc_release(uVar11);
    lVar12 = *(long *)(param_3 + lVar16);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 != 0) goto LAB_105ef2258;
    puVar13 = PTR_PTR_1126c5bf0;
    _objc_alloc(PTR_PTR_1126c5bf0);
    uVar14 = *(undefined8 *)(param_3 + _DAT_112739fe0);
    lVar12 = (long)_DAT_11273a010;
    func_0x00010c0b96e0(uVar14,param_4,*(undefined8 *)(param_3 + lVar12));
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar14;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_3 + lVar12);
    lVar12 = param_3;
    func_0x00010be6ddc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7c40(puVar13,param_4,uVar11,uVar15,param_3,lVar12,
                        *(undefined8 *)(param_3 + _DAT_11273a0ec));
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_release(uVar14);
    func_0x00010bf9d620(*(undefined8 *)(param_3 + lVar16),param_4,puVar13);
    uVar11 = *(undefined8 *)(param_3 + _DAT_11273a134);
    func_0x00010bf218e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dce60();
    _objc_release(uVar11);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_3 + _DAT_11273a00c);
    func_0x000109021a5c();
    _objc_release();
    if (iVar2 == 0) goto LAB_105ef207c;
    puVar10 = PTR_PTR_1126c5be8;
    _objc_alloc();
    ppuVar3 = param_5;
    func_0x00010c0fd320(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_5;
    func_0x00010c0fc8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar9 = ppuVar4;
    }
    ppuVar5 = param_5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_5;
    func_0x00010bf0de60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_5;
    func_0x00010c0fc860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7;
    }
    ppuVar8 = param_5;
    func_0x00010c09e700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0366a0(param_1,param_2,puVar10,param_4,ppuVar3,ppuVar9,0,ppuVar5,ppuVar6,ppuVar1,
                        ppuVar8,param_6,param_7,param_8);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar13 = (undefined *)(param_3 + lVar16);
    _objc_loadWeakRetained(puVar13);
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar13);
LAB_105ef2258:
  _objc_release(puVar10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105ef22a0; end: 105ef239f; -[SCMapViewController placeDiscoveryScopeWantsToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef22a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273a090;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar2 == param_3) {
    lVar2 = param_1;
    func_0x00010c0b9900(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273a058);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar1);
    _objc_release(lVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010beb6fe0();
    if ((int)lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273a134);
      func_0x00010bf218e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 105ef23a0; end: 105ef242b; -[SCMapViewController placeDiscoveryScope:updateTrayDetails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef23a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_11273a090);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273a0ec),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ef242c; end: 105ef2433; -[SCMapViewController placeDiscoveryScope:onEditSearchQuery:] */

void FUN_105ef242c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7aaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentCloudFooterSearchTrayWit_11257c458,param_4);
  return;
}



/* Entry: 105ef2434; end: 105ef2483; -[SCMapViewController _didTapOnBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef2434(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739fdc);
  func_0x00010bf9a1e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf259c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be90f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestDismissal_112581d78);
  return;
}



/* Entry: 105ef2484; end: 105ef251b; -[SCMapViewController _requestDismissal] */

void FUN_105ef2484(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c17d620(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105ef251c; end: 105ef254f; -[SCMapViewController didTapOnCompassButtonWithWarningIndicator] */

void FUN_105ef251c(undefined8 param_1)

{
  func_0x00010c09ea60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef2550; end: 105ef2603; -[SCMapViewController _topMostPresentedViewController] */

void FUN_105ef2550(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) break;
    uVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ef2604; end: 105ef269f; -[SCMapViewController _operaPresentingViewController] */

void FUN_105ef2604(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010becd5c0();
  _objc_retainAutoreleasedReturnValue();
  if (((uVar1 == param_1) ||
      (uVar2 = uVar1, func_0x00010010fab4(uVar1,PTR_DAT_1126a4e58), uVar1 == 0)) ||
     ((uVar2 & 1) == 0)) {
    uVar2 = param_1;
    func_0x00010bf161c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      param_1 = uVar2;
    }
    _objc_retain(param_1);
    _objc_release(uVar2);
  }
  else {
    _objc_retain(uVar1);
    param_1 = uVar1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ef26a0; end: 105ef270f; -[SCMapViewController _displayChatForUserId:deepLinkURL:] */

void FUN_105ef26a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  _objc_retain(param_4);
  func_0x00010c294260(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be04280(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef2710; end: 105ef27a3; -[SCMapViewController _displayChat:deepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef2710(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11273a19c) = param_1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_112739fd4);
  func_0x00010becd5c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b960(uVar1,param_3,param_2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ef27a4; end: 105ef27af; -[SCMapViewController _bitmojiHeight] */

undefined8 FUN_105ef27a4(void)

{
  return 0x4051800000000000;
}



/* Entry: 105ef27b0; end: 105ef28e7; -[SCMapViewController locationAccessMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef27b0(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11273a1a8;
  lVar5 = *(long *)(param_1 + lVar9);
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126c5bf8;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112739ffc);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273a050);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11273a084);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112739fdc);
    func_0x00010bf9a1e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112739ff4);
    bVar1 = (byte)*(undefined8 *)(param_1 + _DAT_11273a020);
    func_0x00010c2905c0();
    func_0x00010c027020(puVar2,param_2,uVar3,uVar6,uVar7,param_1,uVar4,uVar8,bVar1 ^ 1);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + lVar9);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105ef28e8; end: 105ef292f; -[SCMapViewController mapLocationAccessMonitor:didChangeLoadingViewVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef28e8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) == 0) {
    func_0x00010c128900(0,*(undefined8 *)(param_1 + _DAT_112739fc8),param_2,7);
  }
  func_0x00010bde5e00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bddda70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkIfMapIsFullyVisible_112555038);
  return;
}



/* Entry: 105ef2930; end: 105ef2a47; -[SCMapViewController mapLocationAccessMonitorExperiencedExitEvent:] */

void FUN_105ef2930(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105ef2a48;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retainBlock();
    uVar1 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    }
    else {
      func_0x00010bf84b00(param_1);
    }
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ef2a48; end: 105ef2a73;  */

void FUN_105ef2a48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef2a74; end: 105ef2c87; -[SCMapViewController mapLocationAccessMonitor:didDismissSkippablePromptWithAuthorizedLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef2a74(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010be56980(param_1);
  if ((param_4 != 0) && (lVar8 = (long)_DAT_11273a160, (*(byte *)(param_1 + lVar8) & 1) == 0)) {
    lVar7 = (long)_DAT_11273a164;
    lVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 == 0) {
      lVar7 = (long)_DAT_112739fc4;
      lVar2 = *(long *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar8 == 0) {
        *(undefined1 *)(param_1 + _DAT_11273a188) = 1;
        _objc_initWeak(auStack_48,param_1);
        uVar3 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c09f820();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_50,auStack_48);
        uVar5 = uVar4;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + _DAT_11273a1ac);
        *(undefined8 *)(param_1 + _DAT_11273a1ac) = uVar5;
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      else {
        func_0x00010be18480(param_1);
      }
    }
    else {
      lVar7 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar7);
      puVar1 = PTR_PTR_1126c5ba0;
      func_0x00010bf6aa00(PTR_PTR_1126c5ba0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d5ec0(lVar7);
      _objc_release(puVar1);
      _objc_release(lVar7);
      *(undefined1 *)(param_1 + lVar8) = 1;
      *(undefined1 *)(param_1 + _DAT_11273a188) = 0;
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ef2c88; end: 105ef2d33;  */

void FUN_105ef2c88(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ef2d34; end: 105ef2d5f;  */

void FUN_105ef2d34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef2d60; end: 105ef2dcb; -[SCMapViewController _logOnboardingCompleteIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef2d60(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112739fc0;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c0b9660();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c1c2340(*(undefined8 *)(param_1 + lVar3),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112739fdc);
  func_0x00010bf9a1e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ef2dcc; end: 105ef2e4f; -[SCMapViewController _configureUIForOpenTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef2dcc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    func_0x00010beffb20(PTR_PTR_1126b1f10);
  }
  else {
    func_0x00010c09e300();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a098);
  func_0x00010c0b8ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223900();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef2e50; end: 105ef2f2b; -[SCMapViewController _dismissTraysWithMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef2e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c0b8880();
  func_0x00010bfb3720(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11273a190));
  func_0x00010bfcea40(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11273a18c));
  lVar1 = *(long *)(param_1 + _DAT_11273a1b0);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf940a0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + _DAT_11273a1b4);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105efba2c(param_3);
    func_0x00010bf3dbc0(lVar1,param_2,param_3);
    _objc_release(lVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a1b8);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ef2f2c; end: 105ef2f2f; -[SCMapViewController _updateIdleTimerDisabled] */

void FUN_105ef2f2c(void)

{
  return;
}



/* Entry: 105ef2f30; end: 105ef30df; -[SCMapViewController mapPlacesController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef2f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar9 = (long)_DAT_11273a1bc;
  lVar8 = *(long *)(param_5 + lVar9);
  if (lVar8 == 0) {
    puVar1 = PTR_PTR_1126c5c00;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_5 + _DAT_11273a140);
    uVar7 = *(undefined8 *)(param_5 + _DAT_11273a134);
    uVar5 = *(undefined8 *)(param_5 + _DAT_11273a00c);
    lVar14 = (long)_DAT_11273a018;
    uVar2 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8960();
    uVar12 = *(undefined8 *)(param_5 + _DAT_11273a058);
    uVar13 = *(undefined8 *)(param_5 + _DAT_11273a028);
    uVar10 = *(undefined8 *)(param_5 + _DAT_11273a02c);
    lVar8 = param_5;
    uVar6 = param_1;
    uVar15 = param_2;
    uVar16 = param_3;
    uVar17 = param_4;
    func_0x00010be6ddc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_5 + _DAT_112739fdc);
    uVar3 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8920();
    func_0x00010c028960(param_1,param_2,param_3,param_4,uVar6,uVar15,uVar16,uVar17,puVar1,param_6,
                        uVar4,uVar7,uVar5,param_5,uVar12,uVar13,uVar10,lVar8,uVar11,
                        *(undefined8 *)(param_5 + _DAT_112739fe0),
                        *(undefined8 *)(param_5 + _DAT_112739fec),
                        *(undefined8 *)(param_5 + _DAT_11273a07c));
    uVar6 = *(undefined8 *)(param_5 + lVar9);
    *(undefined **)(param_5 + lVar9) = puVar1;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(uVar2);
    func_0x00010c1277c0(*(undefined8 *)(param_5 + _DAT_11273a130),param_6,
                        *(undefined8 *)(param_5 + lVar9));
    lVar8 = *(long *)(param_5 + lVar9);
  }
  _objc_retain(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105ef30e0; end: 105ef3127; -[SCMapViewController activeTTPController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef30e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273a124;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06b700();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ef3128; end: 105ef312f; -[SCMapViewController preferredStatusBarUpdateAnimation] */

undefined8 FUN_105ef3128(void)

{
  return 1;
}



/* Entry: 105ef3130; end: 105ef3173; -[SCMapViewController preferredStatusBarStyle] */

undefined8 FUN_105ef3130(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  uVar1 = 3;
  if (lVar2 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 105ef3174; end: 105ef31e3; -[SCMapViewController _updateStatusBarVisibilityAnimated:] */

void FUN_105ef3174(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_105ef31e4;
    puStack_20 = &UNK_110842e18;
    uStack_18 = param_1;
    func_0x00010bf03400(*(undefined8 *)PTR__UINavigationControllerHideShowBarDuration_110345d38,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  return;
}



/* Entry: 105ef31e4; end: 105ef31eb;  */

void FUN_105ef31e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  return;
}



/* Entry: 105ef31ec; end: 105ef31f3; -[SCMapViewController prefersStatusBarHidden] */

undefined8 FUN_105ef31ec(void)

{
  return 0;
}



/* Entry: 105ef31f4; end: 105ef3347; -[SCMapViewController _markViewedStatusForSelectedUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef31f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  puVar5 = (undefined1 *)0x0;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112739fc8);
    func_0x00010c0fa580();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar10 = lVar1;
    func_0x00010c0fa5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar10);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          uVar4 = uVar9;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be5da00(param_1,param_2,uVar4,uVar9);
          _objc_release(uVar4);
          lVar12 = lVar12 + 1;
        } while (lVar2 != lVar12);
        lVar2 = lVar10;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar10);
    _objc_release();
    puVar5 = (undefined1 *)puVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar13 = auStack_218;
  puVar3 = puVar5;
  func_0x00010bf52a60(puVar5,param_2,&uStack_260,puVar13,0x10);
  if (puVar3 != (undefined1 *)0x0) {
    lVar10 = *plStack_250;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(puVar5);
        }
        uVar9 = *(undefined8 *)(lStack_258 + (long)puVar13 * 8);
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112739fc8);
        func_0x00010c0fa5c0(uVar4,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5da00(lVar1,param_2,uVar9,uVar4);
        _objc_release(uVar4);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar13 = auStack_218;
      puVar3 = puVar5;
      puVar8 = &uStack_260;
      func_0x00010bf52a60(puVar5,param_2,&uStack_260,puVar13,0x10);
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar13);
  lVar1 = (long)_DAT_112739fe8;
  puVar6 = *(undefined1 **)(puVar5 + lVar1);
  func_0x00010c09ab60(puVar6,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar3 == (undefined1 *)0x0) {
    puVar6 = puVar13;
    func_0x00010c253280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 == (undefined1 *)0x0) goto LAB_105ef359c;
    uVar4 = *(undefined8 *)(puVar5 + lVar1);
    puVar5 = puVar13;
    func_0x00010c253280(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c253260();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010c2923e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd60(uVar4,param_2,puVar6,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(puVar5 + lVar1);
    puVar5 = puVar3;
    func_0x00010bfe5ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd60(uVar4,param_2,puVar5,puVar8);
  }
  _objc_release(puVar5);
LAB_105ef359c:
  _objc_release(puVar3);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105ef3348; end: 105ef347f; -[SCMapViewController _focusedCardDidUpdateWithPrevFriendIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef3348(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = auStack_e8;
  lVar10 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar7,0x10);
  if (lVar10 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar1 = *(undefined8 *)(param_1 + _DAT_112739fc8);
        func_0x00010c0fa5c0(uVar1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5da00(param_1,param_2,uVar8,uVar1);
        _objc_release(uVar1);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      puVar7 = auStack_e8;
      lVar10 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar7,0x10);
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  lVar10 = (long)_DAT_112739fe8;
  puVar2 = *(undefined1 **)(param_3 + lVar10);
  func_0x00010c09ab60(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined1 *)0x0) {
    puVar2 = puVar7;
    func_0x00010c253280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined1 *)0x0) goto LAB_105ef359c;
    uVar1 = *(undefined8 *)(param_3 + lVar10);
    puVar2 = puVar7;
    func_0x00010c253280(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c253260();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c2923e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd60(uVar1,param_2,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + lVar10);
    puVar2 = puVar3;
    func_0x00010bfe5ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd60(uVar1,param_2,puVar2,puVar6);
  }
  _objc_release(puVar2);
LAB_105ef359c:
  _objc_release(puVar3);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105ef3480; end: 105ef35c7; -[SCMapViewController _markViewedStatusForUserId:personLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef3480(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112739fe8;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c09ab60(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_4;
    func_0x00010c253280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_105ef359c;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    lVar1 = param_4;
    func_0x00010c253280(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c253260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd60(uVar4,param_2,lVar5,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    lVar1 = lVar2;
    func_0x00010bfe5ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd60(uVar4,param_2,lVar1,param_3);
  }
  _objc_release(lVar1);
LAB_105ef359c:
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef35c8; end: 105ef35cb; -[SCMapViewController presentingViewControllerForTouchResponder:] */

void FUN_105ef35c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresentingViewController_112579110);
  return;
}



/* Entry: 105ef35cc; end: 105ef35cf; -[SCMapViewController storyPresenterDidStartPresenting:] */

void FUN_105ef35cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 105ef35d0; end: 105ef360b; -[SCMapViewController storyPresenterDidStopPresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef35d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a000);
  func_0x00010c0f2220();
  func_0x00010c24fc40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 105ef360c; end: 105ef360f; -[SCMapViewController mapChromeDidTapBackButton] */

void FUN_105ef360c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapOnBackButton_11255dd88);
  return;
}



/* Entry: 105ef3610; end: 105ef369f; -[SCMapViewController mapChromeDidTapLocationSettingsButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef3610(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273a050);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076e60();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentLocationSettings_11257caa8);
    return;
  }
  func_0x00010c09ea60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef36a0; end: 105ef37ef; -[SCMapViewController mapChromeDidTapFriendButtonForUserId:inCluster:actionId:isFromSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef36a0(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5,uint param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_6 = param_6 & ((uint)param_4 ^ 1);
  iVar5 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
  func_0x000109021ae4();
  if (iVar5 == 0) {
    uVar4 = 1;
    iVar5 = 5;
    uVar3 = param_3;
    puVar7 = param_4;
    func_0x00010bddc580(param_1,param_2,param_4,param_3,1,5,param_4,0xd,(char)param_6);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = (ulong)(param_6 ^ 1);
    uVar4 = 0xb3;
    puVar7 = (undefined *)0x0;
    param_4 = puVar8;
    puVar6 = puVar1;
    func_0x00010be7b5e0(param_1,param_2,puVar8,uVar3,0xb3,puVar1,0,0);
    iVar5 = (int)puVar6;
    _objc_release(puVar1);
    _objc_release(puVar8);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  puVar8 = param_4;
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b1ee0;
    _objc_alloc(PTR_PTR_1126b1ee0);
    func_0x00010c036140();
  }
  func_0x00010c16b640(puVar8,param_2,uVar4);
  if (iVar5 != 0) {
    func_0x00010c1dc600(puVar8,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f88);
  }
  uVar2 = 0xb3;
  func_0x000100c6f294(0xb3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0cf60(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),param_3,
                      param_2,puVar8,uVar2,0,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ef37f0; end: 105ef391f; -[SCMapViewController mapChromeDidTapPlacesTrayButtonWithPivotName:localizedPivotName:attributeId:isSearchQuery:actionId:] */

void FUN_105ef37f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b1ee0;
    _objc_alloc(PTR_PTR_1126b1ee0);
    func_0x00010c036140();
  }
  func_0x00010c16b640(puVar4,param_2,param_5);
  if (param_6 != 0) {
    func_0x00010c1dc600(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f88);
  }
  uVar2 = 0xb3;
  func_0x000100c6f294(0xb3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0cf60(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),param_1,
                      param_2,puVar4,uVar2,0,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef3920; end: 105ef39b3; -[SCMapViewController mapChromeDidTapPlaceProfileButtonWithPlaceId:sourceType:] */

void FUN_105ef3920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = 0xcb;
  func_0x000100c6f294(0xcb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7d500(0,0,0,0,param_1,param_2,param_3,0,uVar1,param_4,0,0);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef39b4; end: 105ef3a07; -[SCMapViewController mapChromeDidTapMeTrayButtonWithActionId:] */

void FUN_105ef39b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a460(param_1,param_2,1,0xb3,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef3a08; end: 105ef3a0b; -[SCMapViewController mapChromeDidTapAddFriendsButton] */

void FUN_105ef3a08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAddFriendsScope_11257c178);
  return;
}



/* Entry: 105ef3a0c; end: 105ef3af3; -[SCMapViewController mapChromeDidTapMemoriesPivot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef3a0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11273a1b0;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c5c08;
  _objc_alloc(PTR_PTR_1126c5c08);
  func_0x00010c00a2c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a120);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d960();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef3af4; end: 105ef3b97; -[SCMapViewController mapChromeDidTapFootstepsPivot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef3af4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273a1c0;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c5c10;
  _objc_alloc(PTR_PTR_1126c5c10);
  func_0x00010c00a2c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a11c);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef3b98; end: 105ef3e23; -[SCMapViewController mapChromeDidTapFootstepsActivityWithLocalizedLocality:localizedFootstepsMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef3b98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_112739fc8);
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + _DAT_112739fe0);
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + _DAT_112739fe8);
  func_0x00010bf61de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  lVar5 = lVar3;
  if (lVar4 == 0) {
    lVar4 = lVar1;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0dab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  lVar4 = lVar5;
  func_0x00010c08fa60();
  if ((lVar4 == 0) || (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 == 0)) {
    func_0x00010beb9300(param_1);
  }
  else {
    puVar6 = auStack_68;
    _objc_initWeak(puVar6,param_1);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112739fcc);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfa5480(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ef3e24; end: 105ef3e7f;  */

void FUN_105ef3e24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb9300(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ef3e80; end: 105ef43ab; -[SCMapViewController mapChromeDidTapCompassButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef3e80(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar2 = *(undefined8 *)(param_5 + _DAT_11273a030);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cec0();
  _objc_release(uVar2);
  lVar15 = (long)_DAT_11273a144;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar15);
  func_0x00010c071800();
  if (iVar1 == 0) {
    puVar12 = param_5;
    func_0x00010be41c40();
    if ((int)puVar12 != 0) {
      func_0x00010c139c00(*(undefined8 *)(param_5 + _DAT_11273a130));
                    /* WARNING: Could not recover jumptable at 0x00010c139210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_5 + _DAT_11273a140),
                 PTR_s_resetPitchAndDirectionAnimated__11262bea0,1);
      return;
    }
    uVar4 = *(ulong *)(param_5 + _DAT_11273a050);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c076e60();
    _objc_release(uVar4);
    if ((uVar3 & 1) == 0) {
LAB_105ef41cc:
      func_0x00010c09ea60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238260();
      goto LAB_105ef4388;
    }
    lVar13 = *(long *)(param_5 + _DAT_112739fc4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar13;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    if (lVar15 == 0) {
LAB_105ef41f0:
                    /* WARNING: Could not recover jumptable at 0x00010bddc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_5,PTR_s__centerMapOnUserRegionAnimated__112554b40,1);
      return;
    }
    puVar12 = param_5;
    func_0x00010bee6e80(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b1e20;
    _objc_alloc(PTR_PTR_1126b1e20);
    func_0x00010c00eb00(0xbff0000000000000);
    lVar15 = (long)_DAT_11273a140;
    func_0x00010c1dbe20(0,*(undefined8 *)(param_5 + lVar15));
    func_0x00010c176120(*(undefined8 *)(param_5 + lVar15));
    param_5 = puVar12;
  }
  else {
    uVar3 = *(ulong *)(param_5 + lVar15);
    func_0x00010c0704c0();
    if ((uVar3 & 1) == 0) {
      func_0x00010c1c1c80(*(undefined8 *)(param_5 + lVar15));
      puVar12 = PTR_PTR_1126b1dc8;
      func_0x00010bf2a140(PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b1dc8;
      func_0x00010bf03e20(PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d17a0(*(undefined8 *)(param_5 + lVar15));
      param_5 = puVar12;
    }
    else {
      uVar4 = *(ulong *)(param_5 + _DAT_11273a050);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c076e60();
      _objc_release(uVar4);
      if ((uVar3 & 1) == 0) goto LAB_105ef41cc;
      lVar14 = (long)_DAT_112739fc4;
      lVar5 = *(long *)(param_5 + lVar14);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar5;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar13 == 0) goto LAB_105ef41f0;
      func_0x00010c1c1c80(*(undefined8 *)(param_5 + lVar15));
      puVar12 = PTR_PTR_1126b1dc8;
      uVar6 = *(undefined8 *)(param_5 + lVar14);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      func_0x00010c271ea0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar6);
      puVar7 = *(undefined **)(param_5 + lVar15);
      func_0x00010bfc3600();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf2a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0fc7c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        dVar18 = 0.0;
      }
      else {
        puVar10 = puVar7;
        func_0x00010bf2a0e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0fc7c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(puVar11);
        _objc_release(puVar10);
        dVar18 = param_1 * 3.141592653589793;
        param_1 = 3.141592653589793;
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_retain(0);
      _objc_release(0);
      puVar8 = puVar7;
      func_0x00010bf345e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11273a134));
      dVar18 = 1.5707963267948966 - dVar18 / 180.0;
      _sin(dVar18);
      dVar16 = 0.2617993877991494;
      _tan(0x3fd0c152382d7365);
      dVar17 = (param_1 * 3.141592653589793) / 180.0;
      _cos(dVar17);
      dVar18 = ((dVar17 * 6.283185307179586 * 6378137.0) /
               ((dVar16 * (18000.0 / dVar18 + 18000.0 / dVar18)) / param_4)) * 0.001953125;
      _log2(dVar18);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126b1dc8;
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar18,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2a140(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126b1dc8;
      func_0x00010bf03e20(PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1840(*(undefined8 *)(param_5 + lVar15));
      _objc_release(puVar9);
      _objc_release(puVar8);
      param_5 = puVar12;
    }
  }
  _objc_release(puVar7);
LAB_105ef4388:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105ef43ac; end: 105ef43af; -[SCMapViewController mapChromeDidLongPressCompassButton] */

void FUN_105ef43ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentCompassLocationOverrideA_11257c480);
  return;
}



/* Entry: 105ef43b0; end: 105ef446f; -[SCMapViewController _isMapViewportRotatedOrTilted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_105ef43b0(double param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_11273a140;
  if (*(long *)(param_2 + lVar3) == 0) {
    bVar2 = 0;
  }
  else {
    lVar4 = (long)_DAT_11273a130;
    bVar2 = 0;
    if (*(long *)(param_2 + lVar4) != 0) {
      func_0x00010c0fc7c0();
      dVar5 = param_1;
      func_0x00010bf12060(*(undefined8 *)(param_2 + lVar4));
      param_1 = param_1 - dVar5;
      func_0x00010bf7f0e0(*(undefined8 *)(param_2 + lVar3));
      dVar5 = ABS(dVar5);
      if (0.1 <= dVar5) {
        func_0x00010bf7f0e0(*(undefined8 *)(param_2 + lVar3));
        bVar1 = 0.1 <= ABS(dVar5 + -360.0);
      }
      else {
        bVar1 = false;
      }
      bVar2 = 0.5 <= ABS(param_1) | bVar1;
    }
  }
  return bVar2;
}



/* Entry: 105ef4470; end: 105ef4473; -[SCMapViewController _presentCompassLocationOverrideActionSheet] */

void FUN_105ef4470(void)

{
  return;
}



/* Entry: 105ef4474; end: 105ef458b; -[SCMapViewController _createFootstepsCaasUIContainer] */

void FUN_105ef4474(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ef458c;
  puStack_48 = &UNK_110845c10;
  puStack_40 = puVar1;
  _objc_copyWeak(auStack_68,auStack_38);
  func_0x00010c0311a0(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ef458c; end: 105ef4597;  */

void FUN_105ef458c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachUI__1125a0c08,param_2);
  return;
}



/* Entry: 105ef4598; end: 105ef463f;  */

void FUN_105ef4598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ef4640; end: 105ef466b;  */

void FUN_105ef4640(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd7500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef466c; end: 105ef486f; -[SCMapViewController _showFootstepsCaasCameraWithBitmojiImage:localizedLocality:localizedFootstepsMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef466c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c03e5a0();
  puVar2 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b20c8;
  func_0x00010bfb4600(PTR_PTR_1126b20c8,param_2,param_4,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b20d0;
  _objc_alloc(PTR_PTR_1126b20d0);
  func_0x00010c03c940();
  puVar5 = PTR_PTR_1126b20d8;
  _objc_alloc(PTR_PTR_1126b20d8);
  puVar6 = puVar5;
  func_0x00010c2a9d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273a110);
  lVar7 = param_1;
  func_0x00010bdede00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x0001091f3d04();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23800(uVar9,param_2,puVar2,lVar7,0,lVar8,1,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(lVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273a10c),param_2,uVar9);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef4870; end: 105ef48c7; -[SCMapViewController _caasCameraDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef4870(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a10c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ef48c8; end: 105ef498f; -[SCMapViewController didCloseHomeProfileWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef48c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11273a0e4;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == param_3) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010beb6fe0();
      if ((int)lVar1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_11273a134);
        func_0x00010bf218e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18aea0();
        _objc_release(uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef4990; end: 105ef4a07; -[SCMapViewController _presentCloudFooterSearchTrayWithSearchQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef4990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a098);
  _objc_retain(param_3);
  func_0x00010c0b8ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e0c0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ef4a08; end: 105ef4ad7; -[SCMapViewController _handleViewportChange:] */

void FUN_105ef4a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ef4adc;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ef4b24;
  puStack_48 = &UNK_110841f20;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ef4bf0;
  puStack_70 = &UNK_110841f20;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105ef4bf8;
  puStack_98 = &UNK_110842e18;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bec60(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108f5c90,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_1108f5cb0,&puStack_60,&puStack_88,&puStack_b0,
                      &PTR___NSConcreteGlobalBlock_1108f5cd0,&PTR___NSConcreteGlobalBlock_1108f5cf0)
  ;
  return;
}



/* Entry: 105ef4ad8; end: 105ef4adb;  */

void FUN_105ef4ad8(void)

{
  return;
}



/* Entry: 105ef4adc; end: 105ef4b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef4adc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_11273a1c4;
  if ((*(byte *)(lVar1 + lVar2) & 1) == 0) {
    func_0x00010bedb1a0(lVar1,param_2,1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  *(undefined1 *)(lVar1 + lVar2) = 1;
  return;
}



/* Entry: 105ef4b20; end: 105ef4b23;  */

void FUN_105ef4b20(void)

{
  return;
}



/* Entry: 105ef4b24; end: 105ef4bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef4b24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30b58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb1a0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a030);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a084);
  func_0x00010bfedde0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b00(uVar2,param_2,uVar3,PTR____NSArray0__struct_11034ab48);
  _objc_release(uVar3);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a1c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef4bf0; end: 105ef4c07;  */

void FUN_105ef4bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed96b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateIdleTimerDisabled_112593f50);
  return;
}



/* Entry: 105ef4c08; end: 105ef4d43; -[SCMapViewController _updateMapChromeVisibilityOnViewportChanging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef4c08(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1f10;
  lVar5 = *(long *)(param_1 + _DAT_11273a0d8);
  if (lVar5 == 0) {
    return;
  }
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a098);
    func_0x00010c0b8ca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb20(PTR_PTR_1126b1f10);
  }
  else if (lVar5 == 2) {
    puVar4 = PTR_PTR_1126b1f10;
    func_0x00010c0fd340(PTR_PTR_1126b1f10);
    func_0x00010bf44680(puVar1,param_2,puVar4);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a098);
    func_0x00010c0b8ca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar5 != 1) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a098);
    func_0x00010c0b8ca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db140(PTR_PTR_1126b1f10);
  }
  func_0x00010c223900();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ef4d44; end: 105ef4e4b; -[SCMapViewController _exposeAddressSelectionScopeWithAddress:senderID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef4d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11273a164;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
    func_0x000109021a5c();
    _objc_release(lVar2);
    if (iVar1 != 0) {
      puVar3 = PTR_PTR_1126c5c18;
      _objc_alloc(PTR_PTR_1126c5c18);
      func_0x00010bff2660();
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0d5ec0();
      _objc_release(param_1);
      goto LAB_105ef4e24;
    }
  }
  puVar3 = *(undefined **)(param_1 + _DAT_11273a070);
  func_0x00010bf229a0(puVar3,param_2,param_3,param_4,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273a074),param_2,puVar3);
LAB_105ef4e24:
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef4e4c; end: 105ef5037; -[SCMapViewController _exposeDropScopeWithDrop:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef4e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11273a164;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
    func_0x000109021a5c();
    _objc_release(lVar2);
    if (iVar1 != 0) {
      puVar3 = PTR_PTR_1126c5c20;
      _objc_alloc(PTR_PTR_1126c5c20);
      func_0x00010c00e700();
      param_1 = param_1 + lVar8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0d5ec0();
      _objc_release(param_1);
      goto LAB_105ef4fec;
    }
  }
  puVar3 = *(undefined **)(param_1 + _DAT_11273a064);
  func_0x00010bf230c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273a134);
  func_0x00010c0b9340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c09d420();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar3);
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273a16c);
  *(undefined8 *)(param_1 + _DAT_11273a16c) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_105ef4fec:
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105ef5038; end: 105ef5103;  */

void FUN_105ef5038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bec40(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ef5104; end: 105ef5107;  */

void FUN_105ef5104(void)

{
  return;
}



/* Entry: 105ef5108; end: 105ef513b;  */

void FUN_105ef5108(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0cd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef513c; end: 105ef513f;  */

void FUN_105ef513c(void)

{
  return;
}



/* Entry: 105ef5140; end: 105ef51cb; -[SCMapViewController _exposeDropScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef5140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11273a068;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a134);
    func_0x00010bf218e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192140();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


