/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad87e5c; end: 10ad87e67; -[LSATouchProcessingController initWithView:touchProcessingComponents:touchProcessingDelegate:gestureRecognizerDelegate:disableMultipleTouch:] */

void FUN_10ad87e5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c061570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_initWithView_touchProcessingComp_1125f5f68)
  ;
  return;
}



/* Entry: 10ad87e68; end: 10ad87e6f; -[LSATouchProcessingController initWithView:touchProcessingComponents:touchProcessingDelegate:gestureRecognizerDelegate:] */

void FUN_10ad87e68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c061550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithView_touchProcessingComp_1125f5f60);
  return;
}



/* Entry: 10ad87e70; end: 10ad87eff; -[LSATouchProcessingController hasGestureRecognizer:] */

bool FUN_10ad87e70(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  
  _objc_retain(param_3);
  if ((((*(long *)(param_1 + 8) == param_3) || (*(long *)(param_1 + 0x28) == param_3)) ||
      (*(long *)(param_1 + 0x30) == param_3)) ||
     (((*(long *)(param_1 + 0x38) == param_3 || (*(long *)(param_1 + 0x40) == param_3)) ||
      (*(long *)(param_1 + 0x48) == param_3)))) {
    bVar1 = true;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x50) == param_3;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10ad87f00; end: 10ad87f07; -[LSATouchProcessingController cancelDelayedTouchProcessingIfNecessary] */

void FUN_10ad87f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelDelayedTouchBeganIfNecessa_1125a9230);
  return;
}



/* Entry: 10ad87f08; end: 10ad87fe3; -[LSATouchProcessingController cleanupGestureRecognizers] */

void FUN_10ad87f08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12c9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad87fe4; end: 10ad881a3; -[LSATouchProcessingController handleTapWithGestureRecognizer:] */

void FUN_10ad87fe4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  _objc_initWeak(auStack_108);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar4 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar4 * 8);
        puVar2 = auStack_108;
        _objc_copyWeak(auStack_158);
        func_0x00010c1154a0(uVar5);
        _objc_destroyWeak(auStack_158);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(puVar2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((puVar2 != (undefined1 *)0x0) && (param_3 != 0)) {
    lVar1 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ad881a4; end: 10ad88213;  */

void FUN_10ad881a4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad88214; end: 10ad883d3; -[LSATouchProcessingController handleDoubleTapWithGestureRecognizer:] */

void FUN_10ad88214(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  _objc_initWeak(auStack_108);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar4 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar4 * 8);
        puVar2 = auStack_108;
        _objc_copyWeak(auStack_158);
        func_0x00010c114940(uVar5);
        _objc_destroyWeak(auStack_158);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(puVar2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((puVar2 != (undefined1 *)0x0) && (param_3 != 0)) {
    lVar1 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ad883d4; end: 10ad88443;  */

void FUN_10ad883d4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad88444; end: 10ad88603; -[LSATouchProcessingController handlePinchWithGestureRecognizer:] */

void FUN_10ad88444(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  _objc_initWeak(auStack_108);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar4 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar4 * 8);
        puVar2 = auStack_108;
        _objc_copyWeak(auStack_158);
        func_0x00010c1150e0(uVar5);
        _objc_destroyWeak(auStack_158);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(puVar2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((puVar2 != (undefined1 *)0x0) && (param_3 != 0)) {
    lVar1 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ad88604; end: 10ad88673;  */

void FUN_10ad88604(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad88674; end: 10ad88833; -[LSATouchProcessingController handlePanWithGestureRecognizer:] */

void FUN_10ad88674(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  _objc_initWeak(auStack_108);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar4 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar4 * 8);
        puVar2 = auStack_108;
        _objc_copyWeak(auStack_158);
        func_0x00010c115020(uVar5);
        _objc_destroyWeak(auStack_158);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(puVar2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((puVar2 != (undefined1 *)0x0) && (param_3 != 0)) {
    lVar1 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ad88834; end: 10ad888a3;  */

void FUN_10ad88834(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad888a4; end: 10ad88a63; -[LSATouchProcessingController handleLongPressWithGestureRecognizer:] */

void FUN_10ad888a4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  _objc_initWeak(auStack_108);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar4 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar4 * 8);
        puVar2 = auStack_108;
        _objc_copyWeak(auStack_158);
        func_0x00010c114ee0(uVar5);
        _objc_destroyWeak(auStack_158);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(puVar2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((puVar2 != (undefined1 *)0x0) && (param_3 != 0)) {
    lVar1 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ad88a64; end: 10ad88ad3;  */

void FUN_10ad88a64(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad88ad4; end: 10ad88c93; -[LSATouchProcessingController handleRotationWithGestureRecognizer:] */

void FUN_10ad88ad4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  _objc_initWeak(auStack_108);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar4 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar4 * 8);
        puVar2 = auStack_108;
        _objc_copyWeak(auStack_158);
        func_0x00010c115340(uVar5);
        _objc_destroyWeak(auStack_158);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(puVar2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((puVar2 != (undefined1 *)0x0) && (param_3 != 0)) {
    lVar1 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ad88c94; end: 10ad88d03;  */

void FUN_10ad88c94(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2773a0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad88d04; end: 10ad88d0b; -[LSATouchProcessingController touchProcessingGestureRecognizer] */

undefined8 FUN_10ad88d04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad88d0c; end: 10ad88d13; -[LSATouchProcessingController tapGestureRecognizer] */

undefined8 FUN_10ad88d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10ad88d14; end: 10ad88d1b; -[LSATouchProcessingController doubleTapGestureRecognizer] */

undefined8 FUN_10ad88d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10ad88d1c; end: 10ad88d23; -[LSATouchProcessingController pinchGestureRecognizer] */

undefined8 FUN_10ad88d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10ad88d24; end: 10ad88d2b; -[LSATouchProcessingController panGestureRecognizer] */

undefined8 FUN_10ad88d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10ad88d2c; end: 10ad88d33; -[LSATouchProcessingController longPressGestureRecognizer] */

undefined8 FUN_10ad88d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10ad88d34; end: 10ad88d3b; -[LSATouchProcessingController rotationGestureRecognizer] */

undefined8 FUN_10ad88d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10ad88d3c; end: 10ad88d53; -[LSATouchProcessingController delegate] */

void FUN_10ad88d3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ad88d54; end: 10ad88de3; -[LSATouchProcessingController .cxx_destruct] */

void FUN_10ad88d54(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad88de4; end: 10ad88f23; -[LSATouchProcessingRecognizer initWithParentController:touchProcessingComponents:ignoreMultipleTouches:touchProcessingDelay:printDebugLogs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10ad88de4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1127012c8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithTarget_action__1125f1c48,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112784230),param_4);
    lVar4 = (long)_DAT_112784234;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784238);
    *(undefined **)((long)puVar1 + (long)_DAT_112784238) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278423c) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112784240) = param_7;
    *(double *)((long)puVar1 + (long)_DAT_112784244) = param_1;
    *(bool *)((long)puVar1 + (long)_DAT_112784248) = 0.0 < param_1;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278424c);
    *(undefined **)((long)puVar1 + (long)_DAT_11278424c) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad88f24; end: 10ad894a3; -[LSATouchProcessingRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad88f24(undefined *param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **unaff_x26;
  long lVar11;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_250;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc1bc0();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    lVar10 = (long)_DAT_112784240;
    if ((param_1[lVar10] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112784238);
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      param_2 = (undefined *)0x4;
      func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abdaa,0x43,&UNK_10f6abde2);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112784250;
    if (((*(long *)(param_1 + lVar6) == 0) &&
        (lVar8 = (long)_DAT_112784244, 0.0 < *(double *)(param_1 + lVar8))) &&
       ((puVar1 = param_1, func_0x00010c252440(), puVar1 == (undefined *)0x0 ||
        (puVar1 = param_1, func_0x00010c252440(), puVar1 == (undefined *)0x3)))) {
      _objc_initWeak(auStack_108,param_1);
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_10ad894a4;
      puStack_120 = &UNK_110841fb0;
      _objc_copyWeak(auStack_110,auStack_108);
      uVar3 = 0;
      puStack_118 = param_1;
      func_0x000107c27d90(0,&puStack_138);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = uVar3;
      _objc_release(uVar5);
      _dispatch_time(0,(long)(*(double *)(param_1 + lVar8) * 1000000000.0));
      param_2 = PTR___dispatch_main_q_11034be20;
      func_0x000107c27d84();
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_108);
    }
    lVar6 = (long)_DAT_11278423c;
    if ((param_1[lVar6] == '\x01') && (lVar8 = param_3, func_0x00010bf529e0(), lVar8 != 1)) {
      func_0x00010c209fc0(param_1);
      func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112784238));
    }
    else {
      lVar8 = (long)_DAT_112784238;
      func_0x00010c280520(*(undefined8 *)(param_1 + lVar8));
      if (param_1[lVar6] == '\x01') {
        uVar4 = *(ulong *)(param_1 + lVar8);
        func_0x00010bf529e0();
        uVar3 = *(undefined8 *)(param_1 + lVar8);
        if (1 < uVar4) {
          func_0x00010c12adc0();
          if (*(long *)(param_1 + _DAT_112784254) != 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + lVar8));
          }
          goto LAB_10ad89420;
        }
        func_0x00010bf04a20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + _DAT_112784254);
        *(undefined8 *)(param_1 + _DAT_112784254) = uVar3;
        _objc_release(uVar5);
      }
      func_0x00010c209fc0(param_1);
      if (param_1[_DAT_112784248] == '\x01') {
        uVar9 = *(undefined8 *)(param_1 + _DAT_11278424c);
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        param_2 = param_1;
        FUN_10ad89840();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(uVar9);
        _objc_release(uVar3);
        _objc_release(uVar5);
        _objc_release(param_1);
      }
      else {
        if ((param_1[lVar10] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + lVar8);
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abdaa,0x88,&UNK_10f6abe6a);
          _objc_release(uVar3);
        }
        param_2 = param_1;
        _objc_initWeak(auStack_108);
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        lStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        plStack_170 = (long *)0x0;
        lVar6 = *(long *)(param_1 + _DAT_112784234);
        _objc_retain(lVar6);
        lVar10 = lVar6;
        func_0x00010bf52a60();
        if (lVar10 != 0) {
          lVar11 = *plStack_170;
          do {
            lVar7 = 0;
            do {
              if (*plStack_170 != lVar11) {
                _objc_enumerationMutation(lVar6);
              }
              uVar3 = *(undefined8 *)(lStack_178 + lVar7 * 8);
              unaff_x26 = *(undefined ***)(param_1 + lVar8);
              puVar1 = param_1;
              func_0x00010c29bf00();
              _objc_retainAutoreleasedReturnValue();
              FUN_10ad89840(unaff_x26,puVar1);
              _objc_retainAutoreleasedReturnValue();
              param_2 = auStack_108;
              _objc_copyWeak(auStack_188);
              func_0x00010c115540(uVar3);
              _objc_release(unaff_x26);
              _objc_release(puVar1);
              _objc_destroyWeak(auStack_188);
              lVar7 = lVar7 + 1;
            } while (lVar10 != lVar7);
            lVar10 = lVar6;
            func_0x00010bf52a60();
          } while (lVar10 != 0);
        }
        _objc_release(lVar6);
        _objc_destroyWeak(auStack_108);
      }
    }
  }
LAB_10ad89420:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar10 != 0) {
    if ((*(char *)(lVar10 + _DAT_112784240) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      uVar5 = *(undefined8 *)(lVar10 + _DAT_11278424c);
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      param_2 = (undefined *)0x4;
      func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abe00,0x4f,&UNK_10f6abe45,param_7,param_8,
                          uVar3);
      _objc_release(uVar5);
    }
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    lVar8 = *(long *)(lVar10 + _DAT_112784234);
    _objc_retain(lVar8);
    lVar6 = lVar8;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar11 = *plStack_300;
      unaff_x26 = &puStack_338;
      do {
        lVar7 = 0;
        do {
          if (*plStack_300 != lVar11) {
            _objc_enumerationMutation(lVar8);
          }
          uVar5 = *(undefined8 *)(lStack_308 + lVar7 * 8);
          uVar3 = *(undefined8 *)(lVar10 + _DAT_11278424c);
          func_0x00010bf51e00();
          puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_330 = 0xc2000000;
          pcStack_328 = FUN_10ad89724;
          puStack_320 = &UNK_11084fd28;
          param_2 = (undefined *)(param_3 + 0x28);
          _objc_copyWeak(auStack_318);
          func_0x00010c115520(uVar5);
          _objc_release(uVar3);
          _objc_destroyWeak(auStack_318);
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
        lVar6 = lVar8;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar8);
    func_0x00010c12adc0(*(undefined8 *)(lVar10 + _DAT_11278424c));
    uVar3 = *(undefined8 *)(lVar10 + _DAT_112784250);
    *(undefined8 *)(lVar10 + _DAT_112784250) = 0;
    _objc_release(uVar3);
    lVar6 = *(long *)(*(long *)(param_3 + 0x20) + (long)_DAT_112784238);
    func_0x00010bf529e0();
    if (lVar6 != 0) {
      *(undefined1 *)(lVar10 + _DAT_112784248) = 0;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar10 = lVar10 + 0x20;
  _objc_loadWeakRetained();
  if (lVar10 != 0) {
    lVar7 = (long)_DAT_112784230;
    lVar6 = lVar10 + lVar7;
    _objc_loadWeakRetained(lVar6);
    lVar11 = lVar6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10 + lVar7;
    _objc_loadWeakRetained(lVar8);
    if (param_2 == (undefined *)0x0) {
      func_0x00010c2773e0(lVar11);
      _objc_release(lVar8);
      _objc_release(lVar11);
      _objc_release(lVar6);
      lVar6 = *(long *)(lVar10 + _DAT_112784238);
      func_0x00010bf529e0();
      if (lVar6 != 0) goto LAB_10ad897e8;
      lVar6 = lVar10 + lVar7;
      _objc_loadWeakRetained(lVar6);
      lVar11 = lVar6;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar10 + lVar7;
      _objc_loadWeakRetained(lVar8);
      func_0x00010c2773c0(lVar11);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar8);
    _objc_release(lVar11);
    _objc_release(lVar6);
  }
LAB_10ad897e8:
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad894a4; end: 10ad89723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad894a4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long lVar6;
  undefined **unaff_x26;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
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
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + _DAT_112784240) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_11278424c);
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      param_2 = 4;
      func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abe00,0x4f,&UNK_10f6abe45,in_x6,in_x7,uVar3);
      _objc_release(uVar2);
    }
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar5 = *(long *)(lVar1 + _DAT_112784234);
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar7 = *plStack_130;
      unaff_x26 = &puStack_168;
      do {
        lVar6 = 0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(lVar5);
          }
          uVar2 = *(undefined8 *)(lStack_138 + lVar6 * 8);
          uVar3 = *(undefined8 *)(lVar1 + _DAT_11278424c);
          func_0x00010bf51e00();
          puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_10ad89724;
          puStack_150 = &UNK_11084fd28;
          param_2 = param_1 + 0x28;
          _objc_copyWeak(auStack_148);
          func_0x00010c115520(uVar2);
          _objc_release(uVar3);
          _objc_destroyWeak(auStack_148);
          lVar6 = lVar6 + 1;
        } while (lVar4 != lVar6);
        lVar4 = lVar5;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    func_0x00010c12adc0(*(undefined8 *)(lVar1 + _DAT_11278424c));
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112784250);
    *(undefined8 *)(lVar1 + _DAT_112784250) = 0;
    _objc_release(uVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784238);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      *(undefined1 *)(lVar1 + _DAT_112784248) = 0;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar6 = (long)_DAT_112784230;
    lVar4 = lVar1 + lVar6;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + lVar6;
    _objc_loadWeakRetained(lVar5);
    if (param_2 == 0) {
      func_0x00010c2773e0(lVar7);
      _objc_release(lVar5);
      _objc_release(lVar7);
      _objc_release(lVar4);
      lVar4 = *(long *)(lVar1 + _DAT_112784238);
      func_0x00010bf529e0();
      if (lVar4 != 0) goto LAB_10ad897e8;
      lVar4 = lVar1 + lVar6;
      _objc_loadWeakRetained(lVar4);
      lVar7 = lVar4;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1 + lVar6;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c2773c0(lVar7);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar4);
  }
LAB_10ad897e8:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad89724; end: 10ad8983f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad89724(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = (long)_DAT_112784230;
    lVar3 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar2);
    if (param_2 == 0) {
      func_0x00010c2773e0(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar3);
      lVar3 = *(long *)(param_1 + _DAT_112784238);
      func_0x00010bf529e0();
      if (lVar3 != 0) goto LAB_10ad897e8;
      lVar3 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar3);
      lVar1 = lVar3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c2773c0(lVar1);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
LAB_10ad897e8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad89840; end: 10ad899cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad89840(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_1);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      puVar3 = PTR_PTR_1126de0e0;
      _objc_alloc();
      func_0x00010c054980();
      if (puVar3 != (undefined *)0x0) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar6 = (long)_DAT_112784230;
    lVar2 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    if (lVar4 == 0) {
      func_0x00010c2773e0(lVar5);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10ad899d0; end: 10ad89a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad899d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_112784230;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    if (param_2 == 0) {
      func_0x00010c2773e0(lVar2);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad89a88; end: 10ad89e6b; -[LSATouchProcessingRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad89a88(undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112784240;
  if ((param_1[lVar3] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    param_2 = (undefined1 *)0x4;
    func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abe84,0xa6,&UNK_10f6abebc,param_7,param_8,uVar7)
    ;
    _objc_release(uVar1);
  }
  if (param_1[_DAT_11278423c] == '\x01') {
    if (*(long *)(param_1 + _DAT_112784254) == 0) goto LAB_10ad89de4;
    lVar6 = param_3;
    func_0x00010bf4b900();
    if ((int)lVar6 == 0) goto LAB_10ad89de4;
  }
  func_0x00010c209fc0(param_1);
  if (param_1[_DAT_112784248] == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11278424c);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
    FUN_10ad89840();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    if ((param_1[lVar3] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abe84,0xb2,&UNK_10f6abeda,param_7,param_8,
                          uVar7);
      _objc_release(uVar1);
    }
    param_2 = param_1;
    _objc_initWeak(auStack_108);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    lVar6 = *(long *)(param_1 + _DAT_112784234);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_140;
      do {
        lVar4 = 0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(lVar6);
          }
          uVar1 = *(undefined8 *)(lStack_148 + lVar4 * 8);
          uVar7 = *(undefined8 *)(param_1 + _DAT_112784238);
          puVar2 = param_1;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          FUN_10ad89840(uVar7,puVar2);
          _objc_retainAutoreleasedReturnValue();
          param_2 = auStack_108;
          _objc_copyWeak(auStack_158);
          func_0x00010c115540(uVar1);
          _objc_release(uVar7);
          _objc_release(puVar2);
          _objc_destroyWeak(auStack_158);
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
    func_0x00010bddf400(param_1);
    _objc_destroyWeak(auStack_108);
  }
LAB_10ad89de4:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar6 = (long)_DAT_112784230;
    lVar3 = param_3 + lVar6;
    _objc_loadWeakRetained(lVar3);
    lVar8 = lVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3 + lVar6;
    _objc_loadWeakRetained(lVar6);
    if (param_2 == (undefined1 *)0x0) {
      func_0x00010c2773e0(lVar8);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad89e6c; end: 10ad89f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad89e6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_112784230;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    if (param_2 == 0) {
      func_0x00010c2773e0(lVar2);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad89f24; end: 10ad8a383; -[LSATouchProcessingRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad89f24(undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = (long)_DAT_112784240;
  if ((param_1[lVar6] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    param_2 = (undefined1 *)0x4;
    func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abef4,0xd1,&UNK_10f6abf2c,param_7,param_8,uVar3)
    ;
    _objc_release(uVar1);
  }
  lVar4 = (long)_DAT_11278423c;
  if ((param_1[lVar4] != '\x01') ||
     ((*(long *)(param_1 + _DAT_112784254) != 0 &&
      (lVar5 = param_3, func_0x00010bf4b900(), (int)lVar5 != 0)))) {
    lVar5 = (long)_DAT_112784248;
    if (param_1[lVar5] == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + _DAT_11278424c);
      uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
      puVar2 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      param_2 = puVar2;
      FUN_10ad89840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(puVar2);
    }
    else {
      if ((param_1[lVar6] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
        uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abef4,0xdc,&UNK_10f6abf4a,param_7,param_8,
                            uVar3);
        _objc_release(uVar1);
      }
      param_2 = param_1;
      _objc_initWeak(auStack_108);
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      lVar9 = *(long *)(param_1 + _DAT_112784234);
      _objc_retain(lVar9);
      lVar6 = lVar9;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar10 = *plStack_140;
        do {
          lVar7 = 0;
          do {
            if (*plStack_140 != lVar10) {
              _objc_enumerationMutation(lVar9);
            }
            uVar1 = *(undefined8 *)(lStack_148 + lVar7 * 8);
            uVar3 = *(undefined8 *)(param_1 + _DAT_112784238);
            puVar2 = param_1;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            FUN_10ad89840(uVar3,puVar2);
            _objc_retainAutoreleasedReturnValue();
            param_2 = auStack_108;
            _objc_copyWeak(auStack_158);
            func_0x00010c115540(uVar1);
            _objc_release(uVar3);
            _objc_release(puVar2);
            _objc_destroyWeak(auStack_158);
            lVar7 = lVar7 + 1;
          } while (lVar6 != lVar7);
          lVar6 = lVar9;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar9);
      _objc_destroyWeak(auStack_108);
    }
    if (param_1[lVar4] == '\x01') {
      lVar4 = (long)_DAT_112784254;
      lVar6 = param_3;
      func_0x00010bf4b900();
      if ((int)lVar6 != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        *(undefined8 *)(param_1 + lVar4) = 0;
        _objc_release(uVar3);
      }
    }
    lVar6 = (long)_DAT_112784238;
    func_0x00010c0ce860(*(undefined8 *)(param_1 + lVar6));
    lVar6 = *(long *)(param_1 + lVar6);
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      func_0x00010c209fc0(param_1);
      param_1[lVar5] = 0.0 < *(double *)(param_1 + _DAT_112784244);
    }
    else {
      func_0x00010c209fc0(param_1);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar9 = (long)_DAT_112784230;
    lVar6 = param_3 + lVar9;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3 + lVar9;
    _objc_loadWeakRetained(lVar4);
    if (param_2 == (undefined1 *)0x0) {
      func_0x00010c2773e0(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar5);
      _objc_release(lVar6);
      lVar6 = param_3 + lVar9;
      _objc_loadWeakRetained(lVar6);
      lVar5 = lVar6;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3 + lVar9;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c2773c0(lVar5);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad8a384; end: 10ad8a487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8a384(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = (long)_DAT_112784230;
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar3);
    if (param_2 == 0) {
      func_0x00010c2773e0(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c2773c0(lVar2);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad8a488; end: 10ad8a8e7; -[LSATouchProcessingRecognizer touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8a488(undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = (long)_DAT_112784240;
  if ((param_1[lVar6] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    param_2 = (undefined1 *)0x4;
    func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abf64,0x103,&UNK_10f6abfa0,param_7,param_8,uVar3
                       );
    _objc_release(uVar1);
  }
  lVar4 = (long)_DAT_11278423c;
  if ((param_1[lVar4] != '\x01') ||
     ((*(long *)(param_1 + _DAT_112784254) != 0 &&
      (lVar5 = param_3, func_0x00010bf4b900(), (int)lVar5 != 0)))) {
    lVar5 = (long)_DAT_112784248;
    if (param_1[lVar5] == '\x01') {
      uVar9 = *(undefined8 *)(param_1 + _DAT_11278424c);
      uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
      puVar2 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      param_2 = puVar2;
      FUN_10ad89840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar9);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(puVar2);
    }
    else {
      if ((param_1[lVar6] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
        uVar1 = *(undefined8 *)(param_1 + _DAT_112784238);
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x00010ae06f08(1,4,&UNK_10f6abd08,&UNK_10f6abf64,0x10e,&UNK_10f6abfc2,param_7,param_8,
                            uVar3);
        _objc_release(uVar1);
      }
      param_2 = param_1;
      _objc_initWeak(auStack_108);
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      lVar7 = *(long *)(param_1 + _DAT_112784234);
      _objc_retain(lVar7);
      lVar6 = lVar7;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar10 = *plStack_140;
        do {
          lVar8 = 0;
          do {
            if (*plStack_140 != lVar10) {
              _objc_enumerationMutation(lVar7);
            }
            uVar1 = *(undefined8 *)(lStack_148 + lVar8 * 8);
            uVar3 = *(undefined8 *)(param_1 + _DAT_112784238);
            puVar2 = param_1;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            FUN_10ad89840(uVar3,puVar2);
            _objc_retainAutoreleasedReturnValue();
            param_2 = auStack_108;
            _objc_copyWeak(auStack_158);
            func_0x00010c115540(uVar1);
            _objc_release(uVar3);
            _objc_release(puVar2);
            _objc_destroyWeak(auStack_158);
            lVar8 = lVar8 + 1;
          } while (lVar6 != lVar8);
          lVar6 = lVar7;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar7);
      _objc_destroyWeak(auStack_108);
    }
    if (param_1[lVar4] == '\x01') {
      lVar4 = (long)_DAT_112784254;
      lVar6 = param_3;
      func_0x00010bf4b900();
      if ((int)lVar6 != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        *(undefined8 *)(param_1 + lVar4) = 0;
        _objc_release(uVar3);
      }
    }
    lVar6 = (long)_DAT_112784238;
    func_0x00010c0ce860(*(undefined8 *)(param_1 + lVar6));
    lVar6 = *(long *)(param_1 + lVar6);
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      func_0x00010c209fc0(param_1);
      param_1[lVar5] = 0.0 < *(double *)(param_1 + _DAT_112784244);
    }
    else {
      func_0x00010c209fc0(param_1);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar4 = (long)_DAT_112784230;
    lVar6 = param_3 + lVar4;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3 + lVar4;
    _objc_loadWeakRetained(lVar4);
    if (param_2 == (undefined1 *)0x0) {
      func_0x00010c2773c0(lVar5);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad8a8e8; end: 10ad8a99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8a8e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_112784230;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    if (param_2 == 0) {
      func_0x00010c2773c0(lVar2);
    }
    else {
      func_0x00010c2773a0();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad8a9a0; end: 10ad8aa27; -[LSATouchProcessingRecognizer cancelDelayedTouchBeganIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8a9a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112784250;
  _dispatch_block_cancel(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11278424c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112784238));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112784254);
  *(undefined8 *)(param_1 + _DAT_112784254) = 0;
  _objc_release(uVar1);
  *(bool *)(param_1 + _DAT_112784248) = 0.0 < *(double *)(param_1 + _DAT_112784244);
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,4);
  return;
}



/* Entry: 10ad8aa28; end: 10ad8ac1b; -[LSATouchProcessingRecognizer _cleanupActiveTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8aa28(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112784238;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + lVar10);
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        lVar8 = *(long *)(lVar11 * 8);
        lVar4 = lVar8;
        func_0x00010c0fa9c0();
        if ((lVar4 == 3) || (func_0x00010c0fa9c0(), lVar8 == 4)) {
          func_0x00010befa120(puVar3);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    _objc_retain(puVar3);
    puVar5 = puVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c12d360(*(undefined8 *)(param_1 + lVar10));
        puVar9 = puVar9 + 1;
      } while (puVar5 != puVar9);
      puVar5 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + _DAT_11278424c,0);
  _objc_storeStrong(puVar3 + _DAT_112784250,0);
  _objc_storeStrong(puVar3 + _DAT_112784254,0);
  _objc_storeStrong(puVar3 + _DAT_112784234,0);
  _objc_destroyWeak(puVar3 + _DAT_112784230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + _DAT_112784238,0);
  return;
}



/* Entry: 10ad8ac1c; end: 10ad8ac97; -[LSATouchProcessingRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8ac1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278424c,0);
  _objc_storeStrong(param_1 + _DAT_112784250,0);
  _objc_storeStrong(param_1 + _DAT_112784254,0);
  _objc_storeStrong(param_1 + _DAT_112784234,0);
  _objc_destroyWeak(param_1 + _DAT_112784230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112784238,0);
  return;
}



/* Entry: 10ad8ac98; end: 10ad8ad6b; -[LSAAnalyticsComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10ad8ac98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127012d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPerformer_announcerQueue_1125eac68,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de0e8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784258);
    *(undefined **)((long)puVar1 + (long)_DAT_112784258) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad8ad6c; end: 10ad8af5f; -[LSAAnalyticsComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8ad6c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_58 = (long *)param_3[1];
  uStack_60 = *param_3;
  if (param_3[1] != 0) {
    plVar7 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_68 = PTR_PTR_1127012d0;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_60,param_4
                      ,param_5);
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c72840;
  puVar8 = puVar4 + 3;
  *puVar8 = &PTR_FUN_110c728e0;
  _objc_initWeak(puVar4 + 4,param_1);
  puStack_80 = (undefined8 *)(param_1 + _DAT_11278425c);
  plVar7 = (long *)puStack_80[1];
  *puStack_80 = puVar8;
  puStack_80[1] = puVar4;
  if (plVar7 == (long *)0x0) {
    uVar5 = *param_3;
    puStack_80 = puVar8;
    puStack_78 = puVar4;
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    uVar5 = *param_3;
    puVar4 = (undefined8 *)puStack_80[1];
    puStack_78 = (undefined8 *)puStack_80[1];
    puStack_80 = (undefined8 *)*puStack_80;
    if (puVar4 == (undefined8 *)0x0) goto LAB_10ad8aee0;
  }
  plVar7 = puVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_10ad8aee0:
  FUN_10a2269b4(uVar5,&puStack_80);
  if (puStack_78 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10ad8af60; end: 10ad8af6f; -[LSAAnalyticsComponent addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8af60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784258),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad8af70; end: 10ad8af7f; -[LSAAnalyticsComponent removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8af70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784258),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10ad8af80; end: 10ad8b057; -[LSAAnalyticsComponent didPreparePerformanceReport:] */

void FUN_10ad8af80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ad8b058;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad8b058; end: 10ad8b06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8b058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784258),
             PTR_s_analyticsComponent_didPreparePer_11259e2f8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad8b06c; end: 10ad8b16b; -[LSAAnalyticsComponent didPrepareEffectAnalyticEventsForLensId:analyticsManager:] */

void FUN_10ad8b06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    FUN_10acfd71c(auStack_48,param_4);
    func_0x00010c132580(param_1);
    FUN_10ad8b664(auStack_48);
    *(undefined8 *)(param_4 + 0x78) = 0;
    puVar1 = (undefined8 *)(param_4 + 0x28);
    FUN_10acfdb7c(param_4 + 0x20,*puVar1);
    *(undefined8 **)(param_4 + 0x20) = puVar1;
    *(undefined8 *)(param_4 + 0x30) = 0;
    *puVar1 = 0;
    *(undefined4 *)(param_4 + 0x80) = 0;
    FUN_10acfda38(auStack_48,param_4);
    func_0x00010c133160(param_1);
    func_0x00010ad8b6e4(auStack_48);
    puVar1 = (undefined8 *)(param_4 + 0x40);
    func_0x00010acfdc18(param_4 + 0x38,*puVar1);
    *puVar1 = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 **)(param_4 + 0x38) = puVar1;
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ad8b16c; end: 10ad8b3b3; -[LSAAnalyticsComponent reportAnalyticsEventsWithEventData:lensId:] */

void FUN_10ad8b16c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3[1];
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  for (lVar1 = *param_3; PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar4, lVar1 != lVar2;
      lVar1 = lVar1 + 0x50) {
    plVar8 = (long *)(lVar1 + 0x18);
    if (*(char *)(lVar1 + 0x2f) < '\0') {
      plVar8 = (long *)*plVar8;
    }
    func_0x00010c25da80(puVar4,param_2,plVar8);
    _objc_retainAutoreleasedReturnValue();
    plVar8 = (long *)(lVar1 + 0x30);
    if (*(char *)(lVar1 + 0x47) < '\0') {
      plVar8 = (long *)*plVar8;
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c3138;
    _objc_alloc(PTR_PTR_1126c3138);
    func_0x00010c01e6e0();
    func_0x00010befa120(puVar3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  }
  puVar4 = puVar3;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    uVar7 = param_1;
    func_0x00010bf047a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10ad8b3b4;
    puStack_80 = &UNK_110896e48;
    uStack_78 = param_1;
    _objc_retain(puVar4);
    puStack_70 = puVar4;
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010c0f88c0(uVar7,param_2,&puStack_98);
    _objc_release(uVar7);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 10ad8b3b4; end: 10ad8b3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8b3b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784258),
             PTR_s_analyticsComponent_didPrepareEve_11259e2f0,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ad8b3d0; end: 10ad8b5c3; -[LSAAnalyticsComponent reportLensCreatorsAnalyticsEventsWithEventData:lensId:] */

void FUN_10ad8b3d0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3[1];
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  for (lVar1 = *param_3; PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar4, lVar1 != lVar2;
      lVar1 = lVar1 + 0x20) {
    plVar7 = (long *)(lVar1 + 8);
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      plVar7 = (long *)*plVar7;
    }
    func_0x00010c25da80(puVar4,param_2,plVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126de0f0;
    _objc_alloc(PTR_PTR_1126de0f0);
    func_0x00010c01e700();
    func_0x00010befa120(puVar3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  }
  puVar4 = puVar3;
  func_0x00010bf51e00();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    uVar6 = param_1;
    func_0x00010bf047a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10ad8b5c4;
    puStack_80 = &UNK_110896e48;
    uStack_78 = param_1;
    _objc_retain(puVar4);
    puStack_70 = puVar4;
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010c0f88c0(uVar6,param_2,&puStack_98);
    _objc_release(uVar6);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 10ad8b5c4; end: 10ad8b5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8b5c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784258),
             PTR_s_analyticsComponent_didPrepareCre_11259e2e8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ad8b5e0; end: 10ad8b64f; -[LSAAnalyticsComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8b5e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + _DAT_11278425c + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112784258,0);
  return;
}



/* Entry: 10ad8b650; end: 10ad8b663; -[LSAAnalyticsComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad8b650(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278425c;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10ad8b664; end: 10ad8b753;  */

/* WARNING: Removing unreachable block (ram,0x00010ad8b698) */
/* WARNING: Removing unreachable block (ram,0x00010ad8b6a8) */

void FUN_10ad8b664(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10ad8b754; end: 10ad8b7ab;  */

long FUN_10ad8b754(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ad8b7ac; end: 10ad8b7bb;  */

void FUN_10ad8b7ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad8b7bc; end: 10ad8b7db;  */

void FUN_10ad8b7bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72840;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad8b7dc; end: 10ad8b7eb;  */

void FUN_10ad8b7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad8b7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ad8b7ec; end: 10ad8b967; -[LSAAnalyticsComponentListenerAnnouncer description] */

void FUN_10ad8b7ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10ad8b968(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ad8b968; end: 10ad8b9c7;  */

void FUN_10ad8b968(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10ad8b9c8; end: 10ad8bc73; -[LSAAnalyticsComponentListenerAnnouncer addListener:] */

undefined8 FUN_10ad8b9c8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c72890;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10ad8bc74(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10ad8bdb4(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10ad8bb7c:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10ad8bb9c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10ad8bc74(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10ad8bc74(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10ad8bdb4(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10ad8bb7c;
    }
  }
  uVar9 = 1;
LAB_10ad8bb9c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10ad8bc74; end: 10ad8bdb3;  */

void FUN_10ad8bc74(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10ad8c3e8();
LAB_10ad8bdb0:
      func_0x000104c4f740();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar9;
      lVar9 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10ad8bdb0;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar8;
    lVar11 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10ad8bdb4; end: 10ad8be0b;  */

void FUN_10ad8bdb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10ad8be0c; end: 10ad8c03b; -[LSAAnalyticsComponentListenerAnnouncer removeListener:] */

void FUN_10ad8be0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10ad8bfc0;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10ad8be74;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10ad8bdb4(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10ad8bfc0;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10ad8be74:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c72890;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10ad8bc74(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10ad8bdb4(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10ad8bfc0;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10ad8bfc0:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad8c03c; end: 10ad8c147; -[LSAAnalyticsComponentListenerAnnouncer analyticsComponent:didPreparePerformanceAnalyticsReport:] */

void FUN_10ad8c03c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_10ad8b968(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf02540();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad8c148; end: 10ad8c273; -[LSAAnalyticsComponentListenerAnnouncer analyticsComponent:didPrepareEventAnalyticsReport:lensId:] */

void FUN_10ad8c148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_10ad8b968(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf02520();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad8c274; end: 10ad8c39f; -[LSAAnalyticsComponentListenerAnnouncer analyticsComponent:didPrepareCreatorsEventAnalyticsReport:lensId:] */

void FUN_10ad8c274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_10ad8b968(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf02500();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad8c3a0; end: 10ad8c3c7; -[LSAAnalyticsComponentListenerAnnouncer .cxx_destruct] */

void FUN_10ad8c3a0(long param_1)

{
  FUN_10ad8c3fc(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10ad8c3c8; end: 10ad8c3e7; -[LSAAnalyticsComponentListenerAnnouncer .cxx_construct] */

void FUN_10ad8c3c8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10ad8c3e8; end: 10ad8c3fb;  */

undefined * FUN_10ad8c3e8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10ad8c3fc; end: 10ad8c453;  */

long FUN_10ad8c3fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ad8c454; end: 10ad8c463;  */

void FUN_10ad8c454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72890;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad8c464; end: 10ad8c483;  */

void FUN_10ad8c464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72890;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad8c484; end: 10ad8c4eb;  */

void FUN_10ad8c484(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad8c4ec; end: 10ad8c4ef;  */

void FUN_10ad8c4ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad8c4f0; end: 10ad8c577;  */

undefined8 * FUN_10ad8c4f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c728e0;
  _objc_storeWeak(param_1 + 1,0);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10ad8c578; end: 10ad8c627;  */

void FUN_10ad8c578(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf785a0(uVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad8c628; end: 10ad8c6e7; -[LSAAnalyticsEvent initWithInteractionName:interactionValue:sessionTotalCount:actionSequenceCount:cameraType:] */

undefined1 *
FUN_10ad8c628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127012d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad8c6e8; end: 10ad8c8af; -[LSAAnalyticsEvent description] */

void FUN_10ad8c6e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2e0d8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2e0f8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2e118);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2e138);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2e158);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ad8c8b0; end: 10ad8c8b7; -[LSAAnalyticsEvent interactionName] */

undefined8 FUN_10ad8c8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad8c8b8; end: 10ad8c8bf; -[LSAAnalyticsEvent interactionValue] */

undefined8 FUN_10ad8c8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ad8c8c0; end: 10ad8c8c7; -[LSAAnalyticsEvent sessionTotalCount] */

undefined8 FUN_10ad8c8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10ad8c8c8; end: 10ad8c8cf; -[LSAAnalyticsEvent actionSequenceCount] */

undefined8 FUN_10ad8c8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10ad8c8d0; end: 10ad8c8d7; -[LSAAnalyticsEvent cameraType] */

undefined8 FUN_10ad8c8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10ad8c8d8; end: 10ad8c907; -[LSAAnalyticsEvent .cxx_destruct] */

void FUN_10ad8c8d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad8c908; end: 10ad8c98b; -[LSACreatorsAnalyticsEvent initWithInteractionName:sessionTotalCount:] */

undefined1 *
FUN_10ad8c908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127012e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad8c98c; end: 10ad8ca83; -[LSACreatorsAnalyticsEvent description] */

void FUN_10ad8c98c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2e0d8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2e118);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ad8ca84; end: 10ad8ca8b; -[LSACreatorsAnalyticsEvent interactionName] */

undefined8 FUN_10ad8ca84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad8ca8c; end: 10ad8ca93; -[LSACreatorsAnalyticsEvent sessionTotalCount] */

undefined8 FUN_10ad8ca8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ad8ca94; end: 10ad8ca9f; -[LSACreatorsAnalyticsEvent .cxx_destruct] */

void FUN_10ad8ca94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad8caa0; end: 10ad8cc2f; -[LSAAudioProcessingComponent processAudioSampleBuffer:error:] */

undefined8
FUN_10ad8caa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _CFRetain(param_3);
  _CMSampleBufferGetNumSamples(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10ad8cc30;
  uStack_50 = 0x10ad8cc40;
  uStack_48 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010bf0f800(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = puStack_68[5];
    _objc_retainAutorelease();
    *param_4 = uVar2;
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  return param_3;
}



/* Entry: 10ad8cc30; end: 10ad8cc47;  */

void FUN_10ad8cc30(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10ad8cc48; end: 10ad8d133;  */

void FUN_10ad8cc48(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  float *pfVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  double *pdVar16;
  double *pdVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  double *pdVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  double dVar28;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  float *pfStack_a0;
  float *pfStack_98;
  
  uVar14 = *(ulong *)(param_1 + 0x28);
  _CMSampleBufferGetNumSamples();
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  _CMSampleBufferGetDataBuffer(uVar15);
  pdVar16 = *(double **)(param_1 + 0x28);
  _CMSampleBufferGetFormatDescription();
  _CMAudioFormatDescriptionGetStreamBasicDescription();
  if (uVar14 != 0) {
    uVar23 = 0;
    uVar2 = *(uint *)(pdVar16 + 3);
    uVar3 = *(uint *)((long)pdVar16 + 0x1c);
    uVar4 = (ulong)uVar3;
    uVar24 = uVar14;
    do {
      uVar8 = uVar24 - 0x800;
      if (0x7ff < uVar24) {
        uVar24 = 0x800;
      }
      lVar25 = uVar23 * uVar2;
      uVar19 = uVar14 - uVar23;
      if (0x7ff < uVar19) {
        uVar19 = 0x800;
      }
      pdVar17 = (double *)(ulong)(uVar2 << 0xb);
      _malloc();
      lVar26 = uVar19 * uVar2;
      _CMBlockBufferCopyDataBytes(uVar15,lVar25,lVar26,pdVar17);
      if (*(long *)(param_1 + 0x20) == 0) {
        plStack_e0 = (long *)0x0;
        plStack_d8 = (long *)0x0;
        plStack_c0 = (long *)0x0;
        plStack_b8 = (long *)0x0;
LAB_10ad8d044:
        plVar10 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar18 = plStack_b8 + 1;
          do {
            lVar20 = *plVar18;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar7) {
              *plVar18 = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
      else {
        uVar5 = *(uint *)((long)pdVar16 + 0x1c);
        dVar28 = *pdVar16;
        func_0x00010bf52380(&plStack_e0);
        plStack_c0 = (long *)0x0;
        plStack_b8 = (long *)0x0;
        if (plStack_d8 == (long *)0x0) goto LAB_10ad8d044;
        plVar18 = plStack_d8;
        __ZNSt3__119__shared_weak_count4lockEv();
        plVar10 = plStack_e0;
        plStack_b8 = plVar18;
        if (plVar18 != (long *)0x0) {
          plStack_c0 = plStack_e0;
          if (plStack_e0 != (long *)0x0) {
            uVar24 = (ulong)(uVar3 * (int)uVar24);
            uStack_b0 = (ulong)uVar5 | uVar19 << 0x20;
            plVar1 = plVar18 + 1;
            plStack_d0 = plStack_e0;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = *plVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)dVar28);
            plStack_c8 = plVar18;
            FUN_10ad19294(*(undefined8 *)(*plStack_e0 + 0x970),&uStack_b0);
            iVar13 = *(int *)(pdVar16 + 4);
            iVar27 = (int)uVar19;
            if ((*(byte *)((long)pdVar16 + 0xc) & 1) == 0) {
              if (iVar13 == 0x20) {
                if (**(int **)(*(long *)(*plVar10 + 0x970) + 0x78) == 0) {
                  iVar13 = (int)*plVar10 + 0x178;
                  FUN_10ad3f6f0();
                  if (iVar13 == 0) goto LAB_10ad8d014;
                }
                uStack_b0 = uVar19;
                uStack_a8 = uVar4;
                FUN_10ad8d180(&pfStack_a0,uVar19 * uVar4);
                pfVar9 = pfStack_a0;
                uVar12 = uStack_a8;
                uVar11 = uStack_b0;
                pdVar21 = pdVar17;
                pfVar22 = pfStack_a0;
                if (uVar3 * iVar27 != 0) {
                  do {
                    *pfVar22 = (float)*(int *)pdVar21 * 4.656613e-10;
                    uVar24 = uVar24 - 1;
                    pdVar21 = (double *)((long)pdVar21 + 4);
                    pfVar22 = pfVar22 + 1;
                  } while (uVar24 != 0);
                }
                FUN_10ad193d0(*(undefined8 *)(*plVar10 + 0x970),pfStack_a0,uVar19);
                pdVar21 = pdVar17;
                for (lVar20 = uVar12 * uVar11; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *(int *)pdVar21 = (int)(*pfVar9 * 2.1474836e+09);
                  pdVar21 = (double *)((long)pdVar21 + 4);
                  pfVar9 = pfVar9 + 1;
                }
              }
              else {
                if (iVar13 != 0x10) goto LAB_10ad8d014;
                if (**(int **)(*(long *)(*plVar10 + 0x970) + 0x78) == 0) {
                  iVar13 = (int)*plVar10 + 0x178;
                  FUN_10ad3f6f0();
                  if (iVar13 == 0) goto LAB_10ad8d014;
                }
                uStack_b0 = uVar19;
                uStack_a8 = uVar4;
                FUN_10ad8d180(&pfStack_a0,uVar19 * uVar4);
                pfVar9 = pfStack_a0;
                uVar12 = uStack_a8;
                uVar11 = uStack_b0;
                uVar24 = (ulong)(uVar3 * iVar27);
                if (uVar3 * iVar27 != 0) {
                  do {
                    pfStack_a0[uVar24 - 1] =
                         (float)(int)*(short *)((long)pdVar17 + uVar24 * 2 + -2) / 32767.0;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                FUN_10ad193d0(*(undefined8 *)(*plVar10 + 0x970),pfStack_a0,uVar19);
                pdVar21 = pdVar17;
                for (lVar20 = uVar12 * uVar11; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *(short *)pdVar21 = (short)(int)(*pfVar9 * 32767.0);
                  pdVar21 = (double *)((long)pdVar21 + 2);
                  pfVar9 = pfVar9 + 1;
                }
              }
LAB_10ad8cfec:
              if (pfStack_a0 != (float *)0x0) {
                pfStack_98 = pfStack_a0;
                __ZdlPv();
              }
            }
            else if (iVar13 == 0x20) {
              FUN_10ad193d0(*(undefined8 *)(*plVar10 + 0x970),pdVar17,uVar19);
            }
            else if (iVar13 == 0x40) {
              if (**(int **)(*(long *)(*plVar10 + 0x970) + 0x78) == 0) {
                iVar13 = (int)*plVar10 + 0x178;
                FUN_10ad3f6f0();
                if (iVar13 == 0) goto LAB_10ad8d014;
              }
              uStack_b0 = uVar19;
              uStack_a8 = uVar4;
              FUN_10ad8d180(&pfStack_a0,uVar19 * uVar4);
              pfVar9 = pfStack_a0;
              uVar12 = uStack_a8;
              uVar11 = uStack_b0;
              pdVar21 = pdVar17;
              pfVar22 = pfStack_a0;
              if (uVar3 * iVar27 != 0) {
                do {
                  *pfVar22 = (float)*pdVar21;
                  uVar24 = uVar24 - 1;
                  pdVar21 = pdVar21 + 1;
                  pfVar22 = pfVar22 + 1;
                } while (uVar24 != 0);
              }
              FUN_10ad193d0(*(undefined8 *)(*plVar10 + 0x970),pfStack_a0,uVar19);
              for (lVar20 = uVar12 * uVar11; lVar20 != 0; lVar20 = lVar20 + -1) {
                pdVar17[lVar20 + -1] = (double)pfVar9[lVar20 + -1];
              }
              goto LAB_10ad8cfec;
            }
LAB_10ad8d014:
            do {
              lVar20 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
          goto LAB_10ad8d044;
        }
      }
      if (plStack_d8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      _CMBlockBufferReplaceDataBytes(pdVar17,uVar15,lVar25,lVar26);
      _free(pdVar17);
      uVar23 = uVar23 + 0x800;
      uVar24 = uVar8;
    } while (uVar23 < uVar14);
  }
  _CFRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad8d134; end: 10ad8d17f;  */

void FUN_10ad8d134(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad8d180; end: 10ad8d1f3;  */

undefined8 * FUN_10ad8d180(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x0001092cc154(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 10ad8d1f4; end: 10ad8d24f; -[LSABaseComponent init] */

void FUN_10ad8d1f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSGenericException_11034aa40,
                      &PTR____CFConstantStringClassReference_110f2e178,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad8d23c);
  (*pcVar1)();
}



/* Entry: 10ad8d250; end: 10ad8d303; -[LSABaseComponent initWithPerformer:announcerQueuePerformer:] */

undefined1 *
FUN_10ad8d250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127012e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad8d304; end: 10ad8d377; -[LSABaseComponent setCoreManager:announcer:configuration:] */

void FUN_10ad8d304(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar6 = param_3[1];
  uVar5 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  _objc_storeWeak(param_1 + 0x28,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10ad8d378; end: 10ad8d94f; -[LSABaseComponent executeWithTrackingManagerBlock:synchronously:] */

void FUN_10ad8d378(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  uVar8 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar5 = uVar8;
  func_0x00010c06fc80();
  _objc_release(uVar8);
  if ((uVar5 & 1) == 0) {
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    goto LAB_10ad8d870;
  }
  func_0x00010bf52380(&pcStack_88,param_1);
  if (plStack_80 != (long *)0x0) {
    plVar6 = plStack_80;
    __ZNSt3__119__shared_weak_count4lockEv();
    pcVar4 = pcStack_88;
    if (plVar6 == (long *)0x0) {
      pcVar4 = (code *)0x0;
    }
    if (plStack_80 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (pcVar4 != (code *)0x0) {
      lVar12 = *(long *)(*(long *)pcVar4 + 0x208);
      lVar10 = param_3;
      _objc_retainBlock();
      if (*(long *)(lVar12 + 0xb8) != 0) {
        plVar9 = *(long **)(lVar12 + 0xb0);
        if (plVar9 == (long *)0x0) {
          (**(code **)(lVar10 + 0x10))(lVar10);
          goto LAB_10ad8d794;
        }
        if ((param_4 & 1) == 0) {
          plVar11 = (long *)plVar9[2];
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)0x20;
            __Znwm();
            *plVar11 = lVar12;
            plVar11[1] = lVar10;
            plVar11[3] = 0x10ad8dacc;
            pcStack_88 = FUN_10ad8da54;
            plStack_80 = plVar11;
            plStack_78 = plVar9;
            (**(code **)*plVar9)(plVar9,&pcStack_88);
          }
          else {
            pcStack_68 = (code *)0x0;
            (**(code **)(*plVar11 + 0x28))(plVar11,0,&pcStack_68);
            if (pcStack_68 != (code *)0x0) {
              func_0x0001092af97c(&pcStack_68);
              goto LAB_10ad8d870;
            }
            plVar7 = (long *)0x28;
            __Znwm();
            *plVar7 = lVar12;
            plVar7[1] = lVar10;
            plVar7[3] = (long)FUN_10ad8da9c;
            plVar7[4] = (long)plVar11;
            pcStack_88 = FUN_10ad8da24;
            plStack_80 = plVar7;
            plStack_78 = plVar9;
            (**(code **)*plVar9)(plVar9,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_68);
          }
          pcStack_68 = (code *)0x0;
          __ZNSt13exception_ptrD1Ev(&pcStack_68);
          lVar10 = 0;
          goto LAB_10ad8d794;
        }
        plVar11 = (long *)plVar9[2];
        plStack_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0xc8;
          __Znwm();
          plVar11[2] = 0;
          plVar11[1] = 0x200000006;
          *(undefined2 *)(plVar11 + 3) = 4;
          plVar11[5] = 0;
          plVar11[4] = 0;
          plVar11[7] = 0;
          plVar11[6] = 0;
          plVar11[9] = 0;
          plVar11[8] = 0;
          plVar11[0xb] = 0;
          plVar11[10] = 0;
          plVar11[0xd] = 0;
          plVar11[0xc] = 0;
          plVar11[0xf] = 0;
          plVar11[0xe] = 0;
          plVar11[0x10] = 0;
          plVar11[0x11] = (long)(plVar11 + 3);
          plVar11[0x12] = 0;
          *(undefined2 *)(plVar11 + 0x13) = 0;
          *plVar11 = (long)&PTR_DAT_110c72968;
          pcStack_88 = (code *)(plVar11 + 0x14);
          *(long *)pcStack_88 = lVar12;
          plVar11[0x15] = lVar10;
          *(undefined1 *)(plVar11 + 0x17) = 1;
          plVar11[0x18] = 0;
          pcStack_70 = FUN_10ad8db2c;
          plStack_80 = plVar11;
          plStack_78 = plVar11;
        }
        else {
          pcStack_68 = (code *)0x0;
          (**(code **)(*plVar11 + 0x28))(plVar11,0,&pcStack_68);
          if (pcStack_68 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_68);
            goto LAB_10ad8d870;
          }
          plVar7 = (long *)0xd0;
          __Znwm();
          *(undefined2 *)(plVar7 + 3) = 4;
          plVar7[2] = 0;
          plVar7[1] = 0x200000006;
          plVar7[5] = 0;
          plVar7[4] = 0;
          plVar7[7] = 0;
          plVar7[6] = 0;
          plVar7[9] = 0;
          plVar7[8] = 0;
          plVar7[0xb] = 0;
          plVar7[10] = 0;
          plVar7[0xd] = 0;
          plVar7[0xc] = 0;
          plVar7[0xf] = 0;
          plVar7[0xe] = 0;
          plVar7[0x10] = 0;
          plVar7[0x11] = (long)(plVar7 + 3);
          plVar7[0x12] = 0;
          *(undefined2 *)(plVar7 + 0x13) = 0;
          *plVar7 = (long)&PTR_FUN_110c72930;
          plVar7[0x14] = lVar12;
          plVar7[0x15] = lVar10;
          *(undefined1 *)(plVar7 + 0x17) = 1;
          plVar7[0x18] = 0;
          plVar7[0x19] = (long)plVar11;
          if (plStack_80 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_80 + 1);
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar8 & 0x1fffffffc) == 4) {
              do {
                uVar8 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar8 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar8 - 1 == 0) {
                (**(code **)(*plStack_80 + 8))();
              }
            }
          }
          plStack_80 = plVar7;
          if (plStack_78 != (long *)0x0) {
            func_0x0001092b4274(&plStack_78);
          }
          pcStack_70 = (code *)0x10ad8dafc;
          pcStack_88 = (code *)(plVar7 + 0x14);
          plStack_78 = plVar7;
          __ZNSt13exception_ptrD1Ev(&pcStack_68);
        }
        pcVar4 = pcStack_88;
        if (*(long *)(pcStack_88 + 0x20) != 0) {
          func_0x0001092b4274();
        }
        *(long **)(pcVar4 + 0x20) = plStack_78;
        plStack_78 = (long *)0x0;
        pcStack_68 = pcStack_70;
        pcStack_60 = pcStack_88;
        plStack_58 = plVar9;
        (**(code **)*plVar9)(plVar9,&pcStack_68);
        plStack_90 = plStack_80;
        plStack_80 = (long *)0x0;
        if ((plStack_78 != (long *)0x0) &&
           (func_0x0001092b4274(&plStack_78), plStack_80 != (long *)0x0)) {
          puVar1 = (ulong *)(plStack_80 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plStack_80 + 8))();
            }
          }
        }
        FUN_109d1a244(&plStack_90);
        FUN_10a09b344(&plStack_90);
        if (plStack_90 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_90 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plStack_90 + 8))();
            }
          }
        }
        lVar10 = 0;
      }
LAB_10ad8d794:
      _objc_release(lVar10);
      if (plVar6 != (long *)0x0) {
        plVar9 = plVar6 + 1;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      _objc_release(param_3);
      return;
    }
  }
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_10ad8d870:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad8d874);
  (*pcVar4)();
}


