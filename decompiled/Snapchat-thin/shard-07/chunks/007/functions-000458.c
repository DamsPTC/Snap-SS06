/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058746dc; end: 10587480f;  */

void FUN_1058746dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be98e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105874810; end: 10587495b;  */

void FUN_105874810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10587393c;
  uStack_60 = 0x10587394c;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  func_0x00010be56b40(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10587495c; end: 105874a5f;  */

void FUN_10587495c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar5);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28) = puVar2;
  _objc_release(uVar5);
  *(undefined1 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105874a60; end: 105874ab7;  */

void FUN_105874a60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105874ab8; end: 105874b7b;  */

void FUN_105874ab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bece5a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105874b7c; end: 105874c6f;  */

void FUN_105874b7c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  func_0x00010be59e60(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  func_0x00010be56b40(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(&uStack_40,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105874c70; end: 105874c93;  */

void FUN_105874c70(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105874c94; end: 105874db7; -[SCMemoriesBackupTranscoder _transcodeSnapDocWithLoggingWithIdentifier:videoProcessorTranscodeObservable:] */

void FUN_105874c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be51a60(param_1);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bece840(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105874db8; end: 105874e63;  */

void FUN_105874db8(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  if (param_1 == 0) {
    uVar1 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010be51a60(param_1);
    _objc_retain(param_2);
    puVar2 = param_2;
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105874e64; end: 105874f87; -[SCMemoriesBackupTranscoder _transcodeGallerySnapWithLoggingWithSnap:videoProcessorTranscodeObservable:] */

void FUN_105874e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be51a60(param_1);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bece5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105874f88; end: 105875033;  */

void FUN_105874f88(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  if (param_1 == 0) {
    uVar1 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    func_0x00010be51a60(param_1);
    _objc_retain(param_2);
    puVar2 = param_2;
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105875034; end: 1058751ef; -[SCMemoriesBackupTranscoder _transcodeSnapDocWithIdentifier:videoProcessorTranscodeObservable:] */

void FUN_105875034(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    uVar6 = *(ulong *)(param_1 + 0x48);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126af5d0;
    puVar5 = PTR_PTR_1126ae6b8;
    if (uVar6 <= uVar2) {
      uVar3 = 0x10;
      func_0x000107f19b68(0x10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar3);
      goto LAB_1058751a8;
    }
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  puVar4 = param_4;
  func_0x00010bfb2660(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_1058751a8:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058751f0; end: 1058755af;  */

void FUN_1058751f0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar9 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126af5d0;
  puVar2 = PTR_PTR_1126ae6b8;
  if (lVar9 == 0) {
    uVar7 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar7);
  }
  else {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_10587393c;
    uStack_78 = 0x10587394c;
    uStack_70 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_10587393c;
    uStack_a8 = 0x10587394c;
    uStack_a0 = 0;
    func_0x00010c0c0800(param_2);
    puVar2 = PTR_PTR_1126ae6b8;
    if (puStack_c0[5] == 0) {
      lVar3 = puStack_90[5];
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      puVar1 = PTR_PTR_1126af5d0;
      puVar2 = PTR_PTR_1126ae6b8;
      if (lVar4 == 0) {
        puVar5 = (undefined *)0xb;
        func_0x000107f19b68(0xb);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
      else {
        puVar5 = *(undefined **)(lVar9 + 0x58);
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        puVar1 = PTR_PTR_1126af5d0;
        puVar2 = PTR_PTR_1126ae6b8;
        if (puVar6 == (undefined *)0x0) {
          puVar6 = (undefined *)0xd;
          func_0x000107f19b68(0xd);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0860a0(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uStack_68 = *(undefined8 *)(param_1 + 0x20);
          uStack_60 = puStack_90[5];
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2619e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0860a0(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar1);
        _objc_release(puVar6);
      }
    }
    else {
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c8,8);
  uVar8 = 8;
  __Block_object_dispose(&uStack_98);
  __Unwind_Resume();
  _objc_retain(uVar8);
  lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1058755b0; end: 10587561f;  */

void FUN_1058755b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105875620; end: 10587581b; -[SCMemoriesBackupTranscoder _transcodeGallerySnapWithSnap:videoProcessorTranscodeObservable:] */

void FUN_105875620(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 2;
LAB_105875778:
    puVar5 = PTR_PTR_1126af5d0;
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107f19b68(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  else {
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      uVar7 = *(ulong *)(param_1 + 0x48);
      _objc_release(uVar2);
      if (uVar7 <= uVar3) {
        uVar4 = 0x10;
        goto LAB_105875778;
      }
    }
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    puVar5 = param_4;
    func_0x00010bfb2660(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10587581c; end: 105875bbb;  */

void FUN_10587581c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar7 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10587393c;
    uStack_70 = 0x10587394c;
    uStack_68 = 0;
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_10587393c;
    uStack_a0 = 0x10587394c;
    uStack_98 = 0;
    func_0x00010c0c0800(param_2);
    puVar3 = PTR_PTR_1126ae6b8;
    if (puStack_b8[5] == 0) {
      lVar4 = puStack_88[5];
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      puVar7 = PTR_PTR_1126af5d0;
      puVar3 = PTR_PTR_1126ae6b8;
      if (lVar5 == 0) {
        puVar6 = (undefined *)0xb;
        func_0x000107f19b68(0xb);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = *(undefined **)(puVar1 + 0x58);
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c08fa60();
        puVar8 = PTR_PTR_1126af5d0;
        puVar3 = PTR_PTR_1126ae6b8;
        if (puVar7 == (undefined *)0x0) {
          puVar7 = (undefined *)0xd;
          func_0x000107f19b68(0xd);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0860a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar7 = puVar1;
          func_0x00010be094c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12cc60(*(undefined8 *)(puVar1 + 0x58));
          puVar8 = *(undefined **)(param_1 + 0x20);
          _objc_retain(puVar8);
          puVar3 = puVar7;
          func_0x00010c0b8600(puVar7);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
    }
    else {
      puVar6 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    __Block_object_dispose(&uStack_90,8);
    uVar2 = uStack_68;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105875bbc; end: 105875c2b;  */

void FUN_105875bbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105875c2c; end: 105875e3b;  */

void FUN_105875c2c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_10587393c;
  uStack_68 = 0x10587394c;
  uStack_60 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_10587393c;
  uStack_98 = 0x10587394c;
  uStack_90 = 0;
  func_0x00010c0c0800(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  if ((puStack_b0[5] == 0) && (puStack_80[5] != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = puStack_80[5];
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_58 = uVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b8,8);
  uVar4 = 8;
  __Block_object_dispose(&uStack_88);
  __Unwind_Resume();
  _objc_retain(uVar4);
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105875e3c; end: 105875eab;  */

void FUN_105875e3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105875eac; end: 105875fef; -[SCMemoriesBackupTranscoder _encryptCacheAndGetFileURLForData:forSnap:] */

void FUN_105875eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be094e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105875ff0; end: 1058761af;  */

void FUN_105875ff0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  uVar2 = 7;
  func_0x000107f19b68(7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10587393c;
    uStack_70 = 0x10587394c;
    uStack_68 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0c0800(param_2);
    puVar4 = (undefined *)puStack_88[5];
    _objc_retain(puVar4);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058761b0; end: 10587629f;  */

void FUN_1058761b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c14b5a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be98e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar1;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058762a0; end: 105876333;  */

void FUN_1058762a0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105876334; end: 105876447; -[SCMemoriesBackupTranscoder _encryptData:forSnap:] */

void FUN_105876334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105876448; end: 10587660b;  */

void FUN_105876448(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = param_2;
    func_0x000107f19c58(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar3 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x30);
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    func_0x00010c135a60(uVar2);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10587660c; end: 105876827;  */

void FUN_10587660c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = 7;
LAB_10587677c:
    puVar7 = PTR_PTR_1126af5d0;
    func_0x000107f19b68(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010c0719c0();
    if ((uVar2 & 1) != 0) {
LAB_105876764:
      func_0x00010c0719c0(param_2);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      lVar6 = 0xe;
      goto LAB_10587677c;
    }
    uVar2 = param_2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      _objc_release(uVar2);
      goto LAB_105876764;
    }
    uVar3 = param_2;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar4 == 0) goto LAB_105876764;
    lVar5 = *(long *)(lVar1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bdc1800(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c156cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010c08fa60();
    puVar8 = PTR_PTR_1126af5d0;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    if (lVar5 == 0) {
      puVar7 = (undefined *)0xe;
      func_0x000107f19b68(0xe);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar9);
      _objc_release(puVar8);
      goto LAB_1058767b0;
    }
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar9);
LAB_1058767b0:
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105876828; end: 105876943; -[SCMemoriesBackupTranscoder _decryptData:forIdentifier:] */

void FUN_105876828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105876944; end: 105876baf;  */

void FUN_105876944(long param_1,undefined *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = param_2;
    func_0x000107f19c58(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105876bb0;
    puStack_80 = &UNK_1108b9928;
    _objc_copyWeak(auStack_68,param_1 + 0x38);
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puStack_78 = param_2;
    _objc_retain(uVar6);
    ppuVar2 = &puStack_98;
    uStack_70 = uVar6;
    _objc_retainBlock(ppuVar2);
    puVar3 = PTR_PTR_1126af4d0;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x60);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      uVar4 = 0x11;
      func_0x0001000819a8(0x11,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135a40(uVar6);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      uVar4 = 0x11;
      func_0x0001000819a8(0x11,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135a60(uVar6);
    }
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_70);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105876bb0; end: 105876d8b;  */

void FUN_105876bb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = 7;
LAB_105876ce4:
    puVar4 = PTR_PTR_1126af5d0;
    func_0x000107f19b68(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = param_2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      _objc_release(lVar6);
LAB_105876cd4:
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      lVar6 = 0x15;
      goto LAB_105876ce4;
    }
    lVar2 = param_2;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar6);
    if (lVar3 == 0) goto LAB_105876cd4;
    lVar6 = *(long *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bdc1800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar6;
    func_0x00010c08fa60();
    puVar5 = PTR_PTR_1126af5d0;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x15;
      func_0x000107f19b68(0x15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar7);
      _objc_release(puVar5);
      goto LAB_105876d18;
    }
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar7);
LAB_105876d18:
  _objc_release(puVar4);
  _objc_release(lVar6);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105876d8c; end: 105876ea7; -[SCMemoriesBackupTranscoder _saveDataToTemporaryDirectory:] */

void FUN_105876d8c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    uVar3 = 1;
    func_0x000107f19b68(1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105876ea8;
    puStack_48 = &UNK_11084f340;
    uStack_40 = uVar3;
    _objc_retain(param_3);
    puStack_38 = param_3;
    _objc_retain(uVar3);
    func_0x00010bf54280(puVar2,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_38;
  }
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105876ea8; end: 105877043;  */

void FUN_105876ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2bda80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  if (puVar6 == (undefined *)0x0) {
    puVar5 = (undefined *)0x3;
    func_0x000107f19b68(3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(puVar6);
  }
  else {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
  }
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105877044; end: 10587708f; -[SCMemoriesBackupTranscoder _handleLowMemoryWarning] */

void FUN_105877044(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x71) = 1;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105877090; end: 105877107; -[SCMemoriesBackupTranscoder _logCheckpoint:] */

void FUN_105877090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010587b720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105877108; end: 1058771d7; -[SCMemoriesBackupTranscoder _logOverallPerfMetricWithStartTime:didSucceed:] */

void FUN_105877108(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _CACurrentMediaTime();
  func_0x00010587b6b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(dVar3 - param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058771d8; end: 1058772a7; -[SCMemoriesBackupTranscoder _logCacheRetrievalPerfMetricsWithStartTime:didSucceed:] */

void FUN_1058771d8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _CACurrentMediaTime();
  func_0x00010587b798(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(dVar3 - param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058772a8; end: 105877377; -[SCMemoriesBackupTranscoder _logTranscodingPerfMetricsWithStartTime:didSucceed:] */

void FUN_1058772a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _CACurrentMediaTime();
  func_0x00010587b808(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(dVar3 - param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105877378; end: 10587741f; -[SCMemoriesBackupTranscoder .cxx_destruct] */

void FUN_105877378(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105877420; end: 1058774c3; -[SCMemoriesBackupTranscodingCache initWithContentDelivery:performer:] */

undefined1 *
FUN_105877420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaa80;
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



/* Entry: 1058774c4; end: 105877633; -[SCMemoriesBackupTranscodingCache removeDataForSnapId:] */

void FUN_1058774c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    func_0x00010587869c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar4);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105877634; end: 105877753;  */

void FUN_105877634(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = param_2;
    func_0x000107f19c58(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010c12bd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    func_0x00010c297260(lVar2);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105877754; end: 1058777b3;  */

void FUN_105877754(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058777b4; end: 1058779e3; -[SCMemoriesBackupTranscodingCache removeDataPromiseForSnapId:] */

void FUN_1058777b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126ae558;
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x1;
    func_0x000107f19d04(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1058778cc;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    uStack_40 = uVar1;
    puStack_38 = puVar4;
    _objc_retain(uVar1);
    func_0x00010c0f88c0(uVar2,param_2,&puStack_68);
    puVar5 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    _objc_release(uVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058779e4; end: 105877a5b;  */

void FUN_1058779e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105877a5c; end: 105877a67;  */

void FUN_105877a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105877a68; end: 105877b7b; -[SCMemoriesBackupTranscodingCache retrieveFilePathForSnapId:] */

void FUN_105877a68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x1;
    func_0x000107f19d04(1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105877b7c;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    uStack_40 = uVar1;
    puStack_38 = puVar4;
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    puVar5 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    _objc_release(uVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105877b7c; end: 105877c8f;  */

void FUN_105877b7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058779e4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1378;
  uVar4 = uVar1;
  func_0x00010c0c46a0();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c291580(puVar3,param_2,uVar4,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13e5c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105877c90; end: 105877d33;  */

void FUN_105877c90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  lVar2 = param_2;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if ((lVar1 == 0) && (lVar1 = lVar2, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar3 = 3;
    func_0x000107f19d04(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105877d34; end: 105877e47; -[SCMemoriesBackupTranscodingCache retrieveDataPromiseForSnapId:] */

void FUN_105877d34(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x1;
    func_0x000107f19d04(1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105877e48;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    uStack_40 = uVar1;
    puStack_38 = puVar4;
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    puVar5 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    _objc_release(uVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105877e48; end: 105877f5b;  */

void FUN_105877e48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058779e4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1378;
  uVar4 = uVar1;
  func_0x00010c0c46a0();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c291580(puVar3,param_2,uVar4,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13e4a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105877f5c; end: 105877fef;  */

void FUN_105877f5c(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_4 == 0) || (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
    uVar2 = 3;
    func_0x000107f19d04(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105877ff0; end: 105878107; -[SCMemoriesBackupTranscodingCache retrieveDataForSnapId:] */

void FUN_105877ff0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126ae6b8;
  if (lVar3 == 0) {
    func_0x00010587869c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105878108;
    puStack_48 = &UNK_11084f340;
    _objc_retain(param_3);
    lStack_40 = param_3;
    lStack_38 = lVar3;
    _objc_retain(lVar3);
    func_0x00010bf54280(puVar2,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lStack_40);
    puVar2 = puVar1;
  }
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105878108; end: 105878333;  */

void FUN_105878108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1058779e4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c291580(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c13e4a0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105878334; end: 1058785db; -[SCMemoriesBackupTranscodingCache saveTranscodingOutputData:forSnapId:] */

void FUN_105878334(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) ||
     (lVar1 = param_4, func_0x00010c08fa60(), puVar2 = PTR_PTR_1126ae6b8, lVar1 == 0)) {
    puVar3 = PTR_PTR_1126ae6b8;
    uVar4 = 0;
    func_0x00010587869c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x105878488;
    puStack_60 = &UNK_1108683b8;
    _objc_retain(param_4);
    lStack_58 = param_4;
    uStack_50 = uVar4;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(uVar4);
    func_0x00010bf54280(puVar2,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lStack_48);
    _objc_release(lStack_58);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058785dc; end: 10587866b;  */

void FUN_1058785dc(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 == 0) {
    uVar1 = 2;
    func_0x000107f19d04(2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10587866c; end: 1058786ef; -[SCMemoriesBackupTranscodingCache .cxx_destruct] */

void FUN_10587866c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058786f0; end: 1058786ff; -[SCMemoriesBackupTranscodingHelper getTranscodableSnapsWithGallerySnaps:backgroundUploadedSnapIds:isPrivate:] */

void FUN_1058786f0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d8530;
    _objc_alloc(PTR_PTR_1126d8530);
    func_0x00010c0611c0();
    puVar6 = PTR_PTR_1126d8538;
    _objc_alloc(PTR_PTR_1126d8538);
    func_0x00010c0551e0();
    goto code_r0x000107f198b8;
  }
  puVar2 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  if (param_5 == 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
  }
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  puVar5 = puVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puVar7 = PTR_PTR_1126d8530;
    _objc_alloc();
    func_0x00010bf529e0();
    func_0x00010bf529e0(puVar1);
    func_0x00010bf529e0(puVar2);
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(puVar5);
    if (puVar6 != (undefined *)0x0) goto code_r0x000107f1985c;
    func_0x00010bf529e0(puVar4);
    func_0x00010c0611c0(puVar7);
    puVar6 = PTR_PTR_1126d8538;
    _objc_alloc(PTR_PTR_1126d8538);
  }
  else {
    puVar7 = PTR_PTR_1126d8530;
    _objc_alloc(PTR_PTR_1126d8530);
    func_0x00010bf529e0(puVar2);
    func_0x00010bf529e0(puVar1);
    func_0x00010bf529e0(puVar2);
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(puVar5);
code_r0x000107f1985c:
    func_0x00010c0611c0(puVar7);
    puVar6 = PTR_PTR_1126d8538;
    _objc_alloc(PTR_PTR_1126d8538);
  }
  func_0x00010c0551e0();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
code_r0x000107f198b8:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105878700; end: 10587870f; -[SCMemoriesBackupTranscodingHelper getTranscodableSnapsWithMemoriesSnaps:backgroundUploadedSnapIds:isPrivate:] */

void FUN_105878700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010af2564c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000107f1963c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x000107f19a38(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105878710; end: 10587876b; -[SCMemoriesBackupVideoBitrateCalculatorImpl initWithMaxResolutionInPixels:minResolutionInPixels:targetBitrateForHEVC:] */

void FUN_105878710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126eaa88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10587876c; end: 10587884b; -[SCMemoriesBackupVideoBitrateCalculatorImpl bitrateWithVideoSize:codec:originalBitrate:] */

void FUN_10587876c(double param_1,double param_2,float param_3,long param_4)

{
  double dVar1;
  
  if ((((param_1 <= 0.0) || (param_2 <= 0.0)) || (param_3 <= 0.0)) ||
     (*(long *)(param_4 + 0x18) == 0)) {
    _objc_alloc(PTR_PTR_1126bf790);
  }
  else {
    if (param_2 <= param_1) {
      param_1 = param_2;
    }
    dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x10));
    if ((param_1 < dVar1) ||
       (dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 8)), dVar1 < param_1)) {
      _objc_alloc(PTR_PTR_1126bf790);
    }
    else {
      _objc_alloc(PTR_PTR_1126bf790);
    }
  }
  func_0x00010c04c3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587884c; end: 105878a1b; -[SCMemoriesBackupVideoProcessor initWithTranscodeScheduler:encryptedContentManager:cloudFS:temporaryFileWriter:bitrateCalculator:grapheneRegistry:transcodingLogger:keyFrameInterval:skipTranscodingIfPossible:qualityLevel:circumstanceEngine:] */

undefined8 *
FUN_10587884c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14)

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
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126eaa90;
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
    *(undefined1 *)(puVar1 + 8) = param_11;
    puVar1[9] = param_10;
    puVar1[10] = param_13;
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xd) = 0;
  }
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105878a1c; end: 105878ab7; -[SCMemoriesBackupVideoProcessor lowerBitrateForVideoSnap:] */

void FUN_105878a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be1c9a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be5b120(param_1,param_2,uVar1,0,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105878ab8; end: 105878ba3; -[SCMemoriesBackupVideoProcessor lowerBitrateFutureForVideoData:timeRange:identifier:] */

void FUN_105878ab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0082a0();
  _objc_release(param_3);
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x00010be5b0c0(param_1,param_2,puVar1,param_4,param_5,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be5b0e0(param_1,param_2,*(long *)(param_1 + 0x50),puVar1,param_4,param_5,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105878ba4; end: 105878bf7; -[SCMemoriesBackupVideoProcessor lowerBitrateFutureForVideoAsset:timeRange:identifier:isORT:] */

void FUN_105878ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x00010be5b0c0(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be5b0e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105878bf8; end: 105878ce7; -[SCMemoriesBackupVideoProcessor lowerBitrateForVideoAsset:identifier:isORT:] */

void FUN_105878bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105878ce8;
  puStack_50 = &UNK_11088e668;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b120(param_1,param_2,puVar1,0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105878ce8; end: 105878d5f;  */

void FUN_105878ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105878d60; end: 105878e8f; -[SCMemoriesBackupVideoProcessor _lowerBitrateWithOriginalAssetResultObservable:timeRange:snapId:isORT:] */

void FUN_105878d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  uStack_50 = param_6;
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105878e90; end: 105879107;  */

void FUN_105878e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_105879108;
    uStack_50 = 0x105879118;
    uStack_48 = 0;
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_105879108;
    uStack_80 = 0x105879118;
    uStack_78 = 0;
    func_0x00010c0c0800(param_2);
    puVar3 = PTR_PTR_1126af5d0;
    puVar4 = PTR_PTR_1126ae6b8;
    if ((puStack_98[5] == 0) && (puStack_68[5] != 0)) {
      puVar4 = puVar1;
      if (*(long *)(puVar1 + 0x50) == 0) {
        func_0x00010be5b0a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010be5b100(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      uVar2 = 8;
      func_0x000107f19b68(8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    __Block_object_dispose(&uStack_70,8);
    uVar2 = uStack_48;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105879108; end: 10587911f;  */

void FUN_105879108(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105879120; end: 10587918f;  */

void FUN_105879120(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105879190; end: 1058794ab; -[SCMemoriesBackupVideoProcessor _lowerBitrateFor720pVideosWithoutQualityLevel:timeRange:snapId:isORT:] */

void FUN_105879190(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_78 = 0;
  func_0x000109126b30(param_4,&lStack_78);
  lVar1 = lStack_78;
  _objc_retain(lStack_78);
  puVar3 = PTR_PTR_1126af5d0;
  puVar6 = PTR_PTR_1126ae6b8;
  if ((float)param_1 == 0.0 || lVar1 != 0) {
    puVar2 = (undefined *)0x9;
    func_0x000107f19b68(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105879438;
  }
  puVar2 = param_2;
  func_0x00010bdd4bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c252d60();
  puVar4 = PTR_PTR_1126af5d0;
  puVar6 = PTR_PTR_1126ae6b8;
  if ((long)puVar3 < 2) {
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c269da0(puVar2);
    }
    else if (puVar3 == (undefined *)0x1) {
      puVar3 = (undefined *)0x12;
      goto LAB_1058793f0;
    }
LAB_1058792e8:
    puVar3 = param_2;
    func_0x00010bece6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010bece7c0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_2 + 0x68);
    _objc_retain(puVar3);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = puVar3;
    _objc_release(uVar5);
    _os_unfair_lock_unlock(param_2 + 0x68);
    _objc_initWeak(auStack_80,param_2);
    puVar6 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_6);
    func_0x00010bf54280(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  else {
    if (puVar3 == (undefined *)0x2) {
      puVar3 = (undefined *)0x13;
    }
    else {
      if (puVar3 != (undefined *)0x3) goto LAB_1058792e8;
      puVar3 = (undefined *)0x14;
    }
LAB_1058793f0:
    func_0x000107f19b68(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
LAB_105879438:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058794ac; end: 10587960b;  */

void FUN_1058794ac(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = param_2;
    func_0x000107f19c58(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    func_0x00010c25f8e0(uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10587960c; end: 105879667;  */

void FUN_10587960c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beceb00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105879668; end: 10587998f; -[SCMemoriesBackupVideoProcessor _lowerBitrateFutureFor720pVideosWithoutQualityLevel:timeRange:snapId:isORT:] */

void FUN_105879668(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_78 = 0;
  func_0x000109126b30(param_4,&lStack_78);
  lVar1 = lStack_78;
  _objc_retain(lStack_78);
  puVar7 = PTR_PTR_1126ae558;
  if ((float)param_1 == 0.0 || lVar1 != 0) {
    lVar2 = 9;
    func_0x000107f19b68(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105879918;
  }
  lVar2 = param_2;
  func_0x00010bdd4bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252d60();
  puVar7 = PTR_PTR_1126ae558;
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      func_0x00010c269da0(lVar2);
    }
    else if (lVar3 == 1) {
      lVar3 = 0x12;
      goto LAB_1058798e8;
    }
LAB_105879790:
    lVar3 = param_2;
    func_0x00010bece6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bece7c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_2 + 0x68);
    _objc_retain(lVar3);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(long *)(param_2 + 0x60) = lVar3;
    _objc_release(uVar5);
    _os_unfair_lock_unlock(param_2 + 0x68);
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_80,param_2);
    uVar5 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_6);
    _objc_retain(puVar6);
    func_0x00010c25f8e0(uVar5);
    _objc_release(uVar5);
    puVar7 = puVar6;
    func_0x00010bfbc3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar6);
    _objc_release(lVar4);
  }
  else {
    if (lVar3 == 2) {
      lVar3 = 0x13;
    }
    else {
      if (lVar3 != 3) goto LAB_105879790;
      lVar3 = 0x14;
    }
LAB_1058798e8:
    func_0x000107f19b68(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
LAB_105879918:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105879990; end: 1058799eb;  */

void FUN_105879990(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beceb20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058799ec; end: 105879c5b; -[SCMemoriesBackupVideoProcessor _lowerBitrateFutureToQualityLevel:originalAsset:timeRange:snapId:isORT:] */

void FUN_1058799ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010beb6a00();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bece700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bece7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x68);
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar1;
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_1 + 0x68);
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_6);
    _objc_retain(puVar4);
    func_0x00010c25f8e0(uVar3);
    _objc_release(uVar3);
    puVar5 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  else {
    func_0x00010be58ae0(param_1);
    puVar5 = PTR_PTR_1126ae558;
    lVar1 = 0x12;
    func_0x000107f19b68(0x12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105879c5c; end: 105879cb7;  */

void FUN_105879c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beceb20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105879cb8; end: 105879ef3; -[SCMemoriesBackupVideoProcessor _lowerBitrateToQualityLevel:originalAsset:timeRange:snapId:isORT:] */

void FUN_105879cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010beb6a00();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bece700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bece7c0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x68);
    _objc_retain(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar1;
    _objc_release(uVar4);
    _os_unfair_lock_unlock(param_1 + 0x68);
    _objc_initWeak(auStack_58,param_1);
    puVar5 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_6);
    func_0x00010bf54280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar3);
  }
  else {
    func_0x00010be58ae0(param_1);
    puVar2 = PTR_PTR_1126af5d0;
    puVar5 = PTR_PTR_1126ae6b8;
    lVar1 = 0x12;
    func_0x000107f19b68(0x12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105879ef4; end: 10587a053;  */

void FUN_105879ef4(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = param_2;
    func_0x000107f19c58(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    func_0x00010c25f8e0(uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10587a054; end: 10587a0af;  */

void FUN_10587a054(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beceb00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10587a0b0; end: 10587a257; -[SCMemoriesBackupVideoProcessor _shouldSkipTranscodingWithQualityLevel:originalAsset:timeRange:snapId:] */

ulong FUN_10587a0b0(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  double adStack_d0 [2];
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  double dStack_98;
  byte bStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_6;
  uVar8 = param_8;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (*(char *)(param_3 + 0x40) == '\x01') {
    if (param_7 != 0) {
      func_0x00010bdc1120(&dStack_98,param_7);
      uStack_68 = uStack_80;
      uStack_60 = uStack_78;
      if (((param_6 != 0) && (func_0x00010bf8b160(&dStack_98,param_6), (bStack_8c & 1) != 0)) &&
         ((uStack_74 & 1) != 0)) {
        adStack_d0[0] = dStack_98;
        uStack_c0 = uStack_88;
        uStack_e8 = uStack_68;
        uStack_e0 = uStack_60;
        uStack_dc = uStack_74;
        uStack_d8 = uStack_70;
        _CMTimeSubtract(auStack_b0,adStack_d0,&uStack_e8);
        _CMTimeGetSeconds(auStack_b0);
        param_2 = 0x3f50624dd2f1a9fc;
        param_1 = dStack_98;
        if (0.001 < dStack_98) goto LAB_10587a1c4;
      }
    }
    lStack_f0 = 0;
    func_0x000109126b30(param_6,&lStack_f0);
    fVar10 = SUB84(param_1,0);
    if (fVar10 != 0.0 && lStack_f0 == 0) {
      puVar1 = PTR_PTR_1126bf798;
      func_0x00010bf690e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf1c7c0();
      param_1 = (double)(ulong)(uint)(float)(int)puVar2;
      uVar9 = (ulong)(fVar10 <= (float)(int)puVar2);
      _objc_release(puVar1);
      goto LAB_10587a204;
    }
  }
LAB_10587a1c4:
  uVar9 = 0;
LAB_10587a204:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar9;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  puVar1 = PTR_PTR_1126b0010;
  _objc_retain(uVar8);
  func_0x00010c29b220(puVar1);
  if (uVar7 == 0) {
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_188,uVar7);
  }
  uStack_190 = 0;
  func_0x000109126b30(uVar7,&uStack_190);
  uVar4 = uStack_190;
  _objc_retain(uStack_190);
  func_0x000109126d54();
  uVar3 = *(undefined8 *)(param_6 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  if ((uStack_180 & 0x100000000) != 0) {
    uStack_1a8 = uStack_180;
    uStack_1b0 = uStack_188;
    uStack_1a0 = uStack_178;
    _CMTimeGetSeconds(&uStack_1b0);
  }
  func_0x00010c299760();
  func_0x00010c0afac0(param_1,param_2,0x3ff0000000000000,uVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  return uVar7;
}



/* Entry: 10587a258; end: 10587a453; -[SCMemoriesBackupVideoProcessor _logSkippedTranscodingWithQualityLevel:originalAsset:timeRange:snapId:] */

void FUN_10587a258(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0010;
  _objc_retain(param_8);
  func_0x00010c29b220(puVar1);
  if (param_6 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_98,param_6);
  }
  uStack_a0 = 0;
  func_0x000109126b30(param_6,&uStack_a0);
  uVar3 = uStack_a0;
  _objc_retain(uStack_a0);
  func_0x000109126d54();
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  if ((uStack_90 & 0x100000000) != 0) {
    uStack_b8 = uStack_90;
    uStack_c0 = uStack_98;
    uStack_b0 = uStack_88;
    _CMTimeGetSeconds(&uStack_c0);
  }
  func_0x00010c299760();
  func_0x00010c0afac0(param_1,param_2,0x3ff0000000000000,uVar2);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  return;
}



/* Entry: 10587a454; end: 10587a613; -[SCMemoriesBackupVideoProcessor _transcodingSchedulerDidCompleteWithSnapId:status:outputData:promise:] */

void FUN_10587a454(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x68);
  if (param_4 - 1U < 2) {
    uVar2 = 0xc;
    func_0x000107f19b68(0xc);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_6,param_2,uVar2);
  }
  else {
    if (param_4 != 0) goto LAB_10587a5e4;
    puVar3 = PTR_PTR_1126bf7a0;
    func_0x00010c279b80(PTR_PTR_1126bf7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_11324bc80;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x48)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc4658);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,puVar1,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c0c7e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(puVar6);
    if (param_5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_5 + 8);
    }
    _objc_retain(uVar2);
    func_0x00010bf43d60(param_6,param_2,uVar2);
  }
  _objc_release(uVar2);
LAB_10587a5e4:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10587a614; end: 10587a807; -[SCMemoriesBackupVideoProcessor _transcodingSchedulerDidCompleteWithSnapId:status:outputData:observer:] */

void FUN_10587a614(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x68);
  if (param_4 - 1U < 2) {
    uVar2 = 0xc;
    func_0x000107f19b68(0xc);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 0) goto LAB_10587a7d8;
    puVar3 = PTR_PTR_1126bf7a0;
    func_0x00010c279b80(PTR_PTR_1126bf7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_11324bc80;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x48)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc4658);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,puVar1,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c0c7e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126af5d0;
    if (param_5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_5 + 8);
    }
    _objc_retain(uVar2);
    func_0x00010c2619e0(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(param_6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
LAB_10587a7d8:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10587a808; end: 10587a867; -[SCMemoriesBackupVideoProcessor cancelOngoingTranscoding] */

void FUN_10587a808(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ee40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x68);
  return;
}



/* Entry: 10587a868; end: 10587a953; -[SCMemoriesBackupVideoProcessor _getAVAssetForSnap:] */

void FUN_10587a868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10587a954; end: 10587aac7;  */

void FUN_10587a954(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = param_2;
    func_0x000107f19c58(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010c1346c0(uVar2);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10587aac8; end: 10587ab27;  */

void FUN_10587aac8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10587ab28; end: 10587af1b; -[SCMemoriesBackupVideoProcessor _transcodeInputKeepSameResolutionWithOriginalAsset:targetBitrate:keyFrameInterval:timeRange:snapId:isORT:] */

void FUN_10587ab28(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_7;
  uVar16 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010bece0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x58);
  func_0x000109128224();
  lVar14 = param_3;
  func_0x00010c299760();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126bf7a8;
  func_0x00010af219f8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    _objc_release();
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
  }
  else {
    lVar1 = 6000000;
    if (param_4 != 0) {
      lVar1 = param_4;
    }
    *(undefined8 *)(puVar4 + 8) = 0;
    _objc_retain(puVar4);
    _objc_release(puVar4);
    *(undefined8 *)(puVar4 + 0x10) = 4;
    _objc_retain(puVar4);
    _objc_release(puVar4);
    *(undefined8 *)(puVar4 + 0xa0) = 0;
    _objc_retain(puVar4);
    _objc_release(puVar4);
    *(undefined8 *)(puVar4 + 0xa8) = 0;
    _objc_retain(puVar4);
    _objc_release(puVar4);
    *(undefined8 *)(puVar4 + 0x98) = 0x3ff0000000000000;
    _objc_retain(puVar4);
    _objc_release(puVar4);
    *(undefined8 *)(puVar4 + 0x70) = 0;
    _objc_retain(puVar4);
    _objc_release(puVar4);
    *(long *)(puVar4 + 0x38) = lVar1;
    _objc_retain(puVar4);
    _objc_release(puVar4);
    *(ulong *)(puVar4 + 0xf8) = (ulong)(lVar14 != 1 & uVar2);
    _objc_retain(puVar4);
  }
  _objc_release(puVar4);
  func_0x00010af223a8(puVar4,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    *(undefined8 *)(puVar4 + 0x58) = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(puVar4);
  }
  lStack_80 = param_7;
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126bf7b0;
  func_0x00010af20be0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    *(undefined8 *)(puVar5 + 8) = 8;
    _objc_retain(puVar5);
  }
  _objc_release(puVar5);
  puVar6 = puVar5;
  func_0x00010af20c74(puVar5,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af20ce8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af228f4(puVar4,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar4;
  func_0x00010af22820(puVar4,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af22938();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bf7b8;
  func_0x00010af206d8();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010af207cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af20854();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010911db9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126bf6c0;
  _objc_alloc();
  func_0x00010b743b10();
  puVar11 = PTR_PTR_1126bf7c0;
  _objc_alloc();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010af1fd14(puVar11,puVar9);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar14 = lStack_80;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_88 = FUN_10587af1c;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_e0 = puVar9;
    puStack_d8 = puVar10;
    puStack_d0 = puVar11;
    puStack_c8 = puVar8;
    puStack_c0 = puVar7;
    puStack_b8 = puVar5;
    puStack_b0 = puVar6;
    puStack_a8 = puVar4;
    puStack_a0 = puVar12;
    lStack_98 = lVar3;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(lVar15);
    lVar3 = lVar14;
    func_0x00010bece0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf7a8;
    func_0x00010af219f8();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      _objc_release();
      _objc_release(0);
      _objc_release(0);
      _objc_release(0);
      _objc_release(0);
    }
    else {
      *(undefined8 *)(puVar4 + 8) = 0;
      _objc_retain(puVar4);
      _objc_release(puVar4);
      *(undefined8 *)(puVar4 + 0x10) = 4;
      _objc_retain(puVar4);
      _objc_release(puVar4);
      *(undefined8 *)(puVar4 + 0xa0) = 0;
      _objc_retain(puVar4);
      _objc_release(puVar4);
      *(undefined8 *)(puVar4 + 0xa8) = 0;
      _objc_retain(puVar4);
      _objc_release(puVar4);
      *(undefined8 *)(puVar4 + 0x98) = 0x3ff0000000000000;
      _objc_retain(puVar4);
      _objc_release(puVar4);
      *(undefined **)(puVar4 + 0x70) = puVar13;
      _objc_retain(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010af223a8(puVar4,lVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      *(undefined8 *)(puVar4 + 0x58) = *(undefined8 *)(lVar14 + 0x48);
      _objc_retain(puVar4);
    }
    lStack_100 = lVar15;
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126bf7b0;
    func_0x00010af20be0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      *(undefined8 *)(puVar5 + 8) = 8;
      _objc_retain(puVar5);
    }
    _objc_release(puVar5);
    puVar6 = puVar5;
    func_0x00010af20c74(puVar5,uVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af20ce8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af228f4(puVar4,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010af22820(puVar4,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af22938();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bf7b8;
    func_0x00010af206d8();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010af207cc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af20854();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_f0 = lVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010911db9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126bf6c0;
    _objc_alloc(PTR_PTR_1126bf6c0);
    func_0x00010b743b10();
    puVar11 = PTR_PTR_1126bf7c0;
    _objc_alloc();
    lVar14 = 1;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010af1fd14(puVar11,puVar9);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lStack_100);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      pcStack_108 = FUN_10587b294;
      puStack_150 = puVar11;
      puStack_148 = puVar8;
      puStack_140 = puVar7;
      puStack_138 = puVar6;
      puStack_130 = puVar5;
      puStack_128 = puVar4;
      puStack_120 = puVar12;
      lStack_118 = lVar3;
      ppuStack_110 = &puStack_90;
      _objc_retain(puVar13);
      _objc_retain(lVar14);
      puVar4 = PTR__kCMTimeZero_110348670;
      if (lVar14 == 0) {
        uStack_168 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_170 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_160 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        if (puVar13 == (undefined *)0x0) {
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_1c0,puVar13);
        }
        uStack_188 = uStack_1b8;
        uStack_190 = uStack_1c0;
        uStack_198 = uStack_1b0;
      }
      else {
        func_0x00010bdc1120(&uStack_1c0,lVar14);
        uStack_168 = uStack_1b8;
        uStack_170 = uStack_1c0;
        uStack_160 = uStack_1b0;
        func_0x00010bdc1120(&uStack_1c0,lVar14);
        uStack_188 = uStack_1a0;
        uStack_190 = uStack_1a8;
      }
      puVar11 = PTR_PTR_1126bf6a0;
      uStack_180 = uStack_198;
      _objc_alloc(PTR_PTR_1126bf6a0);
      puVar5 = PTR_PTR_1126bf698;
      func_0x00010bf0b9a0(PTR_PTR_1126bf698);
      _objc_retainAutoreleasedReturnValue();
      uStack_1b8 = uStack_168;
      uStack_1c0 = uStack_170;
      uStack_1b0 = uStack_160;
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uStack_1b8 = uStack_188;
      uStack_1c0 = uStack_190;
      uStack_1b0 = uStack_180;
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uStack_1b8 = *(undefined8 *)(puVar4 + 8);
      uStack_1c0 = *(undefined8 *)puVar4;
      uStack_1b0 = *(undefined8 *)(puVar4 + 0x10);
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b7425e0(0x3ff0000000000000,puVar11,puVar5,1,puVar6,puVar7,puVar4,0,0,0);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar14);
      _objc_release(puVar13);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10587af1c; end: 10587b293; -[SCMemoriesBackupVideoProcessor _transcodeInputWithOutputQualityLevel:originalAsset:keyFrameInterval:timeRange:snapId:isORT:] */

void FUN_10587af1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x6);
  lVar1 = param_1;
  func_0x00010bece0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf7a8;
  func_0x00010af219f8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_release();
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
  }
  else {
    *(undefined8 *)(puVar2 + 8) = 0;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0x10) = 4;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0xa0) = 0;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0xa8) = 0;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0x98) = 0x3ff0000000000000;
    _objc_retain(puVar2);
    _objc_release(puVar2);
    *(undefined8 *)(puVar2 + 0x70) = param_3;
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  func_0x00010af223a8(puVar2,in_x6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    *(undefined8 *)(puVar2 + 0x58) = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(puVar2);
  }
  uStack_80 = in_x6;
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126bf7b0;
  func_0x00010af20be0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    *(undefined8 *)(puVar3 + 8) = 8;
    _objc_retain(puVar3);
  }
  _objc_release(puVar3);
  puVar4 = puVar3;
  func_0x00010af20c74(puVar3,in_x7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af20ce8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af228f4(puVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010af22820(puVar2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af22938();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bf7b8;
  func_0x00010af206d8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010af207cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af20854();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010911db9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126bf6c0;
  _objc_alloc(PTR_PTR_1126bf6c0);
  func_0x00010b743b10();
  puVar9 = PTR_PTR_1126bf7c0;
  _objc_alloc();
  lVar12 = 1;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010af1fd14(puVar9,puVar7);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(uStack_80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_88 = FUN_10587b294;
    puStack_d0 = puVar9;
    puStack_c8 = puVar6;
    puStack_c0 = puVar5;
    puStack_b8 = puVar4;
    puStack_b0 = puVar3;
    puStack_a8 = puVar2;
    puStack_a0 = puVar10;
    lStack_98 = lVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar11);
    _objc_retain(lVar12);
    puVar2 = PTR__kCMTimeZero_110348670;
    if (lVar12 == 0) {
      uStack_e8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_f0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_e0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      if (puVar11 == (undefined *)0x0) {
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_140,puVar11);
      }
      uStack_108 = uStack_138;
      uStack_110 = uStack_140;
      uStack_118 = uStack_130;
    }
    else {
      func_0x00010bdc1120(&uStack_140,lVar12);
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_e0 = uStack_130;
      func_0x00010bdc1120(&uStack_140,lVar12);
      uStack_108 = uStack_120;
      uStack_110 = uStack_128;
    }
    puVar9 = PTR_PTR_1126bf6a0;
    uStack_100 = uStack_118;
    _objc_alloc(PTR_PTR_1126bf6a0);
    puVar3 = PTR_PTR_1126bf698;
    func_0x00010bf0b9a0(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_130 = uStack_e0;
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uStack_108;
    uStack_140 = uStack_110;
    uStack_130 = uStack_100;
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = *(undefined8 *)(puVar2 + 8);
    uStack_140 = *(undefined8 *)puVar2;
    uStack_130 = *(undefined8 *)(puVar2 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b7425e0(0x3ff0000000000000,puVar9,puVar3,1,puVar4,puVar5,puVar2,0,0,0);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar12);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10587b294; end: 10587b46f; -[SCMemoriesBackupVideoProcessor _trackSegmentWithOriginalAsset:timeRange:] */

void FUN_10587b294(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR__kCMTimeZero_110348670;
  if (param_4 == 0) {
    uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    if (param_3 == 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_c0,param_3);
    }
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_98 = uStack_b0;
  }
  else {
    func_0x00010bdc1120(&uStack_c0,param_4);
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    func_0x00010bdc1120(&uStack_c0,param_4);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
  }
  puVar1 = PTR_PTR_1126bf6a0;
  uStack_80 = uStack_98;
  _objc_alloc(PTR_PTR_1126bf6a0);
  puVar2 = PTR_PTR_1126bf698;
  func_0x00010bf0b9a0(PTR_PTR_1126bf698);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_b0 = uStack_60;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_b0 = uStack_80;
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = *(undefined8 *)(puVar5 + 8);
  uStack_c0 = *(undefined8 *)puVar5;
  uStack_b0 = *(undefined8 *)(puVar5 + 0x10);
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7425e0(0x3ff0000000000000,puVar1,puVar2,1,puVar3,puVar4,puVar5,0,0,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10587b470; end: 10587b56f; -[SCMemoriesBackupVideoProcessor _transcodeOutput] */

void FUN_10587b470(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfacf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bf7c8;
  _objc_alloc(PTR_PTR_1126bf7c8);
  func_0x00010af1ff64();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10587b570; end: 10587b62b; -[SCMemoriesBackupVideoProcessor _bitrateResultForVideoAsset:originalBitrate:] */

void FUN_10587b570(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b0010;
  uVar5 = param_1;
  _objc_retain(param_5);
  func_0x00010c29b220(puVar1,param_4,param_5,1);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c299760(param_5);
  _objc_release(param_5);
  uVar4 = uVar2;
  func_0x00010bf1c8c0(uVar5,param_2,param_1,uVar2,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10587b62c; end: 10587b877; -[SCMemoriesBackupVideoProcessor .cxx_destruct] */

void FUN_10587b62c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10587b878; end: 10587b8a3; +[SCGrapheneMemoriesBackupTranscodeMetric transcodePerformance] */

void FUN_10587b878(void)

{
  _objc_alloc(PTR_PTR_1126bf7a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587b8a4; end: 10587b8cf; +[SCGrapheneMemoriesBackupTranscodeMetric transcodeCheckpoint] */

void FUN_10587b8a4(void)

{
  _objc_alloc(PTR_PTR_1126bf7a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587b8d0; end: 10587b8fb; +[SCGrapheneMemoriesBackupTranscodeMetric transcodeCacheReadPerformance] */

void FUN_10587b8d0(void)

{
  _objc_alloc(PTR_PTR_1126bf7a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587b8fc; end: 10587b927; +[SCGrapheneMemoriesBackupTranscodeMetric transcodeTranscodePerformance] */

void FUN_10587b8fc(void)

{
  _objc_alloc(PTR_PTR_1126bf7a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587b928; end: 10587b953; +[SCGrapheneMemoriesBackupTranscodeMetric transcodeGopSize] */

void FUN_10587b928(void)

{
  _objc_alloc(PTR_PTR_1126bf7a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587b954; end: 10587b9f3; -[SCGrapheneMemoriesBackupTranscodeMetric description] */

void FUN_10587b954(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e09318;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e09318,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126eaa98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10587b9f4; end: 10587bb5f; -[SCGrapheneRegistry memoriesBackupTranscodeGraphene] */

void FUN_10587b9f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10587ba7c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c0ea8 != -1) {
    func_0x00010002a2fc(0x1136c0ea8,&puStack_48);
  }
  uVar1 = uRam00000001136c0ea0;
  _objc_retain(uRam00000001136c0ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


