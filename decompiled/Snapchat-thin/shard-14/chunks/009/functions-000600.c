/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b703d7c; end: 10b703d9f; -[SCSpectaclesDeviceConnectionState copyWithZone:] */

undefined8 FUN_10b703d7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b703da0; end: 10b703dff; -[SCSpectaclesDeviceConnectionState hash] */

undefined8 * FUN_10b703da0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10b703e00; end: 10b703ea7; -[SCSpectaclesDeviceConnectionState isEqual:] */

bool FUN_10b703e00(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b703ea8; end: 10b703eaf; -[SCSpectaclesDeviceConnectionState ble] */

undefined8 FUN_10b703ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b703eb0; end: 10b703eb7; -[SCSpectaclesDeviceConnectionState btc] */

undefined8 FUN_10b703eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b703eb8; end: 10b703ebf; -[SCSpectaclesDeviceConnectionState wifi] */

undefined8 FUN_10b703eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b703ec0; end: 10b703f7b;  */

void FUN_10b703ec0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  _objc_retain();
  lStack_38 = 0;
  lStack_40 = 0;
  func_0x00010bfc99e0(param_1,param_2,&lStack_38,*(undefined8 *)PTR__NSURLCanonicalPathKey_11034aae8
                      ,&lStack_40);
  lVar2 = lStack_38;
  _objc_retain(lStack_38);
  lVar1 = lStack_40;
  _objc_retain(lStack_40);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  puVar4 = param_1;
  if (lVar3 != 0 && lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b703f7c; end: 10b7040d7;  */

void FUN_10b703f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  func_0x00010c189b60();
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010bf6a760(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c09e2e0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = puVar3;
  func_0x00010c25ce20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b7040d8; end: 10b7043db;  */

void FUN_10b7040d8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_1);
  puVar9 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      uVar11 = *(undefined8 *)((long)puVar8 * 8);
      puVar2 = puVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 == (undefined *)0x0) {
        func_0x00010c1d0640(puVar10);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = puVar10;
      func_0x00010c0e00e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c0df760(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar10);
      _objc_release(puVar2);
      _objc_release(puVar3);
      puVar2 = puVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c067ec0();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar3 < 2) {
        func_0x00010befa120(puVar1);
      }
      else {
        uVar4 = uVar11;
        func_0x00010c25cea0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(uVar4);
        func_0x00010c0f58c0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c25ce20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        _objc_release(uVar11);
        _objc_release(puVar2);
      }
      puVar8 = puVar8 + 1;
    } while (puVar9 != puVar8);
    puVar9 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar9 = param_1;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    while (PTR__OBJC_CLASS___NSUUID_1126b0270 = puVar10, puVar9 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
        func_0x00010c057ea0();
        func_0x00010bfcb980();
        _objc_release(puVar1);
        puVar10 = puVar10 + 1;
      } while (puVar9 != puVar10);
      puVar9 = param_1;
      func_0x00010bf52a60();
      puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    }
    _objc_alloc();
    func_0x00010c057e80();
    puVar9 = puVar10;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        _objc_retain(param_1);
        puVar9 = param_1;
      }
      else if (param_1 == (undefined *)0x0) {
        _objc_retain(param_2);
        puVar9 = param_2;
      }
      else {
        puVar9 = param_1;
        func_0x00010c0720c0();
        if (((ulong)puVar9 & 1) == 0) {
          puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          func_0x00010c057ea0();
          func_0x00010bfcb980();
          puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          func_0x00010c057ea0();
          func_0x00010bfcb980();
          puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          func_0x00010c057e80();
          puVar9 = puVar8;
          func_0x00010bdc3580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar1);
          _objc_release(puVar10);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
      }
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        ___stack_chk_fail();
        puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        _objc_alloc();
        func_0x00010c057ea0();
        _objc_release(param_1);
        if (puVar10 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          func_0x00010bfcb980(puVar10);
          puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
          ___stack_chk_fail();
          _objc_retain();
          if ((puVar10 == (undefined *)0x0) ||
             (puVar9 = puVar10, func_0x00010c08fa60(), puVar9 != (undefined *)0x10)) {
            puVar9 = (undefined *)0x0;
          }
          else {
            puVar9 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
            _objc_retainAutorelease(puVar10);
            func_0x00010bf25f00();
            func_0x00010c057e80(puVar9);
          }
          _objc_release(puVar10);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b7043dc; end: 10b704537;  */

void FUN_10b7043dc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar5 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  while (PTR__OBJC_CLASS___NSUUID_1126b0270 = puVar6, puVar5 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_1);
      }
      puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      func_0x00010c057ea0();
      func_0x00010bfcb980();
      _objc_release(puVar1);
      puVar6 = puVar6 + 1;
    } while (puVar5 != puVar6);
    puVar5 = param_1;
    func_0x00010bf52a60();
    puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  }
  _objc_alloc();
  func_0x00010c057e80();
  puVar5 = puVar6;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      _objc_retain(param_1);
      puVar5 = param_1;
    }
    else if (param_1 == (undefined *)0x0) {
      _objc_retain(param_2);
      puVar5 = param_2;
    }
    else {
      puVar5 = param_1;
      func_0x00010c0720c0();
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
        func_0x00010c057ea0();
        func_0x00010bfcb980();
        puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
        func_0x00010c057ea0();
        func_0x00010bfcb980();
        puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
        func_0x00010c057e80();
        puVar5 = puVar2;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar1);
        _objc_release(puVar6);
      }
      else {
        puVar5 = (undefined *)0x0;
      }
    }
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
      ___stack_chk_fail();
      puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_alloc();
      func_0x00010c057ea0();
      _objc_release(param_1);
      if (puVar6 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        func_0x00010bfcb980(puVar6);
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
        ___stack_chk_fail();
        _objc_retain();
        if ((puVar6 == (undefined *)0x0) ||
           (puVar5 = puVar6, func_0x00010c08fa60(), puVar5 != (undefined *)0x10)) {
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          _objc_retainAutorelease(puVar6);
          func_0x00010bf25f00();
          func_0x00010c057e80(puVar5);
        }
        _objc_release(puVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b704538; end: 10b70467f;  */

void FUN_10b704538(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    _objc_retain(param_1);
    puVar5 = param_1;
  }
  else if (param_1 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar5 = param_2;
  }
  else {
    puVar5 = param_1;
    func_0x00010c0720c0();
    if (((ulong)puVar5 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      func_0x00010c057ea0();
      func_0x00010bfcb980();
      puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      func_0x00010c057ea0();
      func_0x00010bfcb980();
      puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      func_0x00010c057e80();
      puVar5 = puVar3;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_alloc();
    func_0x00010c057ea0();
    _objc_release(param_1);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010bfcb980(puVar1);
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
      ___stack_chk_fail();
      _objc_retain();
      if ((puVar1 == (undefined *)0x0) ||
         (puVar5 = puVar1, func_0x00010c08fa60(), puVar5 != (undefined *)0x10)) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
        _objc_retainAutorelease(puVar1);
        func_0x00010bf25f00();
        func_0x00010c057e80(puVar5);
      }
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b704680; end: 10b7047af;  */

void FUN_10b704680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  func_0x00010c057ea0();
  _objc_release(param_1);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bfcb980(puVar1,param_2,auStack_38);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_38,0x10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain();
    if ((puVar1 == (undefined *)0x0) ||
       (puVar3 = puVar1, func_0x00010c08fa60(), puVar3 != (undefined *)0x10)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bf25f00();
      func_0x00010c057e80(puVar3,param_2,puVar2);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7047b0; end: 10b7048eb;  */

void FUN_10b7047b0(double param_1,double param_2,long param_3,undefined8 param_4,int param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if ((param_3 != 0) && (param_6 != 0)) {
    _objc_retain(param_6);
    _objc_retain(param_3);
    lVar1 = param_6;
    func_0x00010bf931e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c7b90;
    _objc_opt_new(PTR_PTR_1126c7b90);
    if (param_5 != 0) {
      puVar3 = puVar2;
      func_0x00010c0699e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
    }
    func_0x00010c2199c0(puVar2);
    func_0x00010bf930a0((float)param_1,param_6);
    func_0x00010c2256c0(puVar2);
    func_0x00010bf930c0((float)param_2,param_6);
    _objc_release(param_6);
    func_0x00010c1a7d00(puVar2);
    puVar3 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1e5020();
    func_0x00010c1863a0(puVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7048ec; end: 10b7049ef; +[SCSnapDocCoreStickerUtils videoTrackingTimeTransformsForStaticStickersWithRelativeCenter:scale:rotation:] */

void FUN_10b7048ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c055500(param_1,param_2,param_3,param_4);
  puVar2 = PTR_PTR_1126bb2a8;
  _objc_alloc();
  func_0x00010c052280();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befb970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7049f0; end: 10b7049fb; +[SCSnapDocCoreStickerUtils addStickerItemInstance:toSnapDocEditor:relativeSize:relativeCenter:scale:rotation:segment:] */

void FUN_10b7049f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010befb970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addStickerItemInstance_toSnapDoc_11259c800,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b7049fc; end: 10b704b67; +[SCSnapDocCoreStickerUtils addStickerItemInstance:toSnapDocEditor:relativeSize:relativeCenter:scale:rotation:isAnimated:segment:] */

void FUN_10b7049fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_10);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126b13b8;
  lVar4 = 0;
  if ((param_9 != 0) && (param_10 != 0)) {
    _objc_retain(param_9);
    func_0x00010c29ba00(param_3,param_4,param_5,param_6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_9;
    FUN_10b7047b0(param_1,param_2,param_9,puVar1,param_11,param_10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_9);
    lVar4 = param_10;
    if (param_12 == 0) {
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa9a0(param_10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      func_0x00010befa9a0(param_10);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b704b68; end: 10b704b6f; -[SCSnapDocChange snapDoc] */

undefined8 FUN_10b704b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b704b70; end: 10b704b9f; -[SCSnapDocChange setSnapDoc:] */

void FUN_10b704b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b704ba0; end: 10b704ba7; -[SCSnapDocChange didResetSnapDoc] */

undefined1 FUN_10b704ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b704ba8; end: 10b704baf; -[SCSnapDocChange setDidResetSnapDoc:] */

void FUN_10b704ba8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b704bb0; end: 10b704bb7; -[SCSnapDocChange playbackLayerChanges] */

undefined8 FUN_10b704bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b704bb8; end: 10b704be7; -[SCSnapDocChange setPlaybackLayerChanges:] */

void FUN_10b704bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b704be8; end: 10b704bef; -[SCSnapDocChange segmentChanges] */

undefined8 FUN_10b704be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b704bf0; end: 10b704c1f; -[SCSnapDocChange setSegmentChanges:] */

void FUN_10b704bf0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b704c20; end: 10b704c27; -[SCSnapDocChange renderEffectChanges] */

undefined8 FUN_10b704c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b704c28; end: 10b704c57; -[SCSnapDocChange setRenderEffectChanges:] */

void FUN_10b704c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b704c58; end: 10b704c9f; -[SCSnapDocChange .cxx_destruct] */

void FUN_10b704c58(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b704ca0; end: 10b704cab; -[SCSnapDocEditorServices .cxx_destruct] */

void FUN_10b704ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b704cac; end: 10b704d5f; -[SCPlaybackLayerChange initWithSegmentIndex:playbackLayer:changeType:] */

undefined1 *
FUN_10b704cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a0e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b704d60; end: 10b704d83; -[SCPlaybackLayerChange copyWithZone:] */

undefined8 FUN_10b704d60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b704d84; end: 10b704dfb; -[SCPlaybackLayerChange hash] */

undefined8 * FUN_10b704d84(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b704e8c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b704e98;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b704e98;
        }
        goto LAB_10b704e8c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b704e98:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b704dfc; end: 10b704eb3; -[SCPlaybackLayerChange isEqual:] */

long FUN_10b704dfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b704e8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b704e98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b704e98;
        }
        goto LAB_10b704e8c;
      }
    }
    lVar3 = 0;
  }
LAB_10b704e98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b704eb4; end: 10b704ebb; -[SCPlaybackLayerChange segmentIndex] */

undefined8 FUN_10b704eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b704ebc; end: 10b704ec3; -[SCPlaybackLayerChange playbackLayer] */

undefined8 FUN_10b704ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b704ec4; end: 10b704ecb; -[SCPlaybackLayerChange changeType] */

undefined8 FUN_10b704ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b704ecc; end: 10b704efb; -[SCPlaybackLayerChange .cxx_destruct] */

void FUN_10b704ecc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b704efc; end: 10b704faf; -[SCSegmentChange initWithSegmentIndex:fromIndex:changeType:] */

undefined1 *
FUN_10b704efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a0e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b704fb0; end: 10b704fd3; -[SCSegmentChange copyWithZone:] */

undefined8 FUN_10b704fb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b704fd4; end: 10b70504b; -[SCSegmentChange hash] */

undefined8 * FUN_10b704fd4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b7050dc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7050e8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b7050e8;
        }
        goto LAB_10b7050dc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b7050e8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b70504c; end: 10b705103; -[SCSegmentChange isEqual:] */

long FUN_10b70504c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7050dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7050e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b7050e8;
        }
        goto LAB_10b7050dc;
      }
    }
    lVar3 = 0;
  }
LAB_10b7050e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b705104; end: 10b70510b; -[SCSegmentChange segmentIndex] */

undefined8 FUN_10b705104(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70510c; end: 10b705113; -[SCSegmentChange fromIndex] */

undefined8 FUN_10b70510c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b705114; end: 10b70511b; -[SCSegmentChange changeType] */

undefined8 FUN_10b705114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b70511c; end: 10b70514b; -[SCSegmentChange .cxx_destruct] */

void FUN_10b70511c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b70514c; end: 10b7051d3; -[SCRenderEffectChange initWithRenderEffectNode:changeType:] */

undefined1 *
FUN_10b70514c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a0f0;
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



/* Entry: 10b7051d4; end: 10b7051f7; -[SCRenderEffectChange copyWithZone:] */

undefined8 FUN_10b7051d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7051f8; end: 10b705263; -[SCRenderEffectChange hash] */

undefined8 * FUN_10b7051f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7052e8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b7052e8;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b7052e8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b7052e8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b705264; end: 10b705303; -[SCRenderEffectChange isEqual:] */

long FUN_10b705264(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7052e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b7052e8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b7052e8;
    }
  }
  lVar3 = 1;
LAB_10b7052e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b705304; end: 10b70530b; -[SCRenderEffectChange renderEffectNode] */

undefined8 FUN_10b705304(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70530c; end: 10b705313; -[SCRenderEffectChange changeType] */

undefined8 FUN_10b70530c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b705314; end: 10b70531f; -[SCRenderEffectChange .cxx_destruct] */

void FUN_10b705314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b705320; end: 10b705397; -[SCPreviewAutoCaptionsState initWithPhraseStates:] */

undefined1 * FUN_10b705320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a0f8;
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



/* Entry: 10b705398; end: 10b7053bb; -[SCPreviewAutoCaptionsState copyWithZone:] */

undefined8 FUN_10b705398(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7053bc; end: 10b7053c3; -[SCPreviewAutoCaptionsState hash] */

void FUN_10b7053bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b7053c4; end: 10b705453; -[SCPreviewAutoCaptionsState isEqual:] */

long FUN_10b7053c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b705438;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b705438;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b705438;
    }
  }
  lVar3 = 1;
LAB_10b705438:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b705454; end: 10b70545b; -[SCPreviewAutoCaptionsState phraseStates] */

undefined8 FUN_10b705454(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70545c; end: 10b705467; -[SCPreviewAutoCaptionsState .cxx_destruct] */

void FUN_10b70545c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b705468; end: 10b705513; -[SCPreviewAutoCaptionsPhraseState initWithText:transforms:] */

undefined1 *
FUN_10b705468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a100;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b705514; end: 10b705537; -[SCPreviewAutoCaptionsPhraseState copyWithZone:] */

undefined8 FUN_10b705514(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b705538; end: 10b7055ab; -[SCPreviewAutoCaptionsPhraseState hash] */

undefined8 * FUN_10b705538(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b70562c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b705638;
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
          goto LAB_10b705638;
        }
        goto LAB_10b70562c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b705638:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7055ac; end: 10b705653; -[SCPreviewAutoCaptionsPhraseState isEqual:] */

long FUN_10b7055ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b70562c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b705638;
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
          goto LAB_10b705638;
        }
        goto LAB_10b70562c;
      }
    }
    lVar3 = 0;
  }
LAB_10b705638:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b705654; end: 10b70565b; -[SCPreviewAutoCaptionsPhraseState text] */

undefined8 FUN_10b705654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70565c; end: 10b705663; -[SCPreviewAutoCaptionsPhraseState transforms] */

undefined8 FUN_10b70565c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b705664; end: 10b705693; -[SCPreviewAutoCaptionsPhraseState .cxx_destruct] */

void FUN_10b705664(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b705694; end: 10b7057ab; -[SCDrawingStroke initWithCoder:] */

undefined1 * FUN_10b705694(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a108;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 8) = (double)param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7057ac; end: 10b7058a7; -[SCDrawingStroke initWithLineWidth:points:color:emoji:drawerType:uniqueId:] */

undefined1 *
FUN_10b7057ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_11270a108;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7058a8; end: 10b7058cb; -[SCDrawingStroke copyWithZone:] */

undefined8 FUN_10b7058a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7058cc; end: 10b70597f; -[SCDrawingStroke encodeWithCoder:] */

void FUN_10b7058cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92ee0((float)dVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110f72e38)
  ;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f72e58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de8258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e550b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f72e78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f58858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b705980; end: 10b705a2f; -[SCDrawingStroke hash] */

ulong * FUN_10b705980(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  puVar4 = &uStack_58;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b705b1c:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b705b28;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && ((puVar4[5] == param_3[5] && (puVar4[6] == param_3[6])))) {
      dVar9 = ABS((double)puVar4[1] - (double)param_3[1]);
      dVar8 = ABS((double)puVar4[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (((bVar1) &&
          ((uVar6 = puVar4[2], uVar6 == param_3[2] || (func_0x00010c071ae0(), (int)uVar6 != 0)))) &&
         ((uVar6 = puVar4[3], uVar6 == param_3[3] || (func_0x00010c071c60(), (int)uVar6 != 0)))) {
        puVar7 = (ulong *)puVar4[4];
        if (puVar7 != (ulong *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b705b28;
        }
        goto LAB_10b705b1c;
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b705b28:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b705a30; end: 10b705b43; -[SCDrawingStroke isEqual:] */

long FUN_10b705a30(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b705b1c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b705b28;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071c60(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b705b28;
        }
        goto LAB_10b705b1c;
      }
    }
    lVar4 = 0;
  }
LAB_10b705b28:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b705b44; end: 10b705b4b; -[SCDrawingStroke lineWidth] */

undefined8 FUN_10b705b44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b705b4c; end: 10b705b53; -[SCDrawingStroke points] */

undefined8 FUN_10b705b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b705b54; end: 10b705b5b; -[SCDrawingStroke color] */

undefined8 FUN_10b705b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b705b5c; end: 10b705b63; -[SCDrawingStroke emoji] */

undefined8 FUN_10b705b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b705b64; end: 10b705b6b; -[SCDrawingStroke drawerType] */

undefined8 FUN_10b705b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b705b6c; end: 10b705b73; -[SCDrawingStroke uniqueId] */

undefined8 FUN_10b705b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b705b74; end: 10b705baf; -[SCDrawingStroke .cxx_destruct] */

void FUN_10b705b74(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b705bb0; end: 10b705bfb; -[SCStrokeDrawerPoint initWithLocation:] */

void FUN_10b705bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a110;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10b705bfc; end: 10b705c1f; -[SCStrokeDrawerPoint copyWithZone:] */

undefined8 FUN_10b705bfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b705c20; end: 10b705cb3; -[SCStrokeDrawerPoint hash] */

ulong * FUN_10b705c20(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar3 & 1) == 0) {
        puVar6 = (ulong *)0x0;
      }
      else {
        uVar4 = 0;
        if ((double)puVar2[2] == (double)param_3[2]) {
          uVar4 = (uint)((double)puVar2[1] == (double)param_3[1]);
        }
        puVar6 = (ulong *)(ulong)uVar4;
      }
    }
  }
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b705cb4; end: 10b705d43; -[SCStrokeDrawerPoint isEqual:] */

bool FUN_10b705cb4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
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
      if ((uVar2 & 1) == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (*(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10)) {
          bVar3 = *(double *)(param_1 + 8) == *(double *)(param_3 + 8);
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b705d44; end: 10b705d4b; -[SCStrokeDrawerPoint location] */

undefined1  [16] FUN_10b705d44(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 10b705d4c; end: 10b705ddb; +[SCSnapDocFilter ctpFilterWithFilter:metadata:] */

void FUN_10b705d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bcd58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b705ddc; end: 10b705e47; +[SCSnapDocFilter ucoFilterWithLensSnapchat:] */

void FUN_10b705ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bcd58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b705e48; end: 10b705e6b; -[SCSnapDocFilter copyWithZone:] */

undefined8 FUN_10b705e48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b705e6c; end: 10b705eef; -[SCSnapDocFilter hash] */

void FUN_10b705e6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a118;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b705ef0; end: 10b705f33; -[SCSnapDocFilter internalInit] */

void FUN_10b705ef0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b705f34; end: 10b706003; -[SCSnapDocFilter isEqual:] */

long FUN_10b705f34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b705fdc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b705fe8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b705fe8;
          }
          goto LAB_10b705fdc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b705fe8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b706004; end: 10b70608b; -[SCSnapDocFilter matchCtpFilter:ucoFilter:] */

void FUN_10b706004(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b70608c; end: 10b7060c7; -[SCSnapDocFilter .cxx_destruct] */

void FUN_10b70608c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7060c8; end: 10b706137; -[SCTransform initWithScale:center:rotationRadians:timestampMs:] */

void FUN_10b7060c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270a120;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
  }
  return;
}



/* Entry: 10b706138; end: 10b70615b; -[SCTransform copyWithZone:] */

undefined8 FUN_10b706138(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b70615c; end: 10b706237; -[SCTransform hash] */

ulong * FUN_10b70615c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar4 & 1) != 0) &&
         (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) {
        dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          puVar6 = (undefined1 *)0x0;
          if ((*(double *)((long)puVar3 + 0x20) == *(double *)(param_3 + 0x20)) &&
             (*(double *)((long)puVar3 + 0x28) == *(double *)(param_3 + 0x28))) {
            dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16;
            if (dVar7 <= 2.2250738585072014e-308) {
              dVar7 = 2.2250738585072014e-308;
            }
            puVar6 = (undefined1 *)
                     (ulong)(ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10)) <
                            dVar7);
          }
          goto LAB_10b706330;
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_10b706330:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10b706238; end: 10b70634b; -[SCTransform isEqual:] */

bool FUN_10b706238(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          bVar1 = false;
          if ((*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20)) &&
             (*(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28))) {
            dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
          }
          goto LAB_10b706330;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b706330:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b70634c; end: 10b706353; -[SCTransform scale] */

undefined8 FUN_10b70634c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b706354; end: 10b70635b; -[SCTransform center] */

undefined1  [16] FUN_10b706354(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10b70635c; end: 10b706363; -[SCTransform rotationRadians] */

undefined8 FUN_10b70635c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b706364; end: 10b70636b; -[SCTransform timestampMs] */

undefined8 FUN_10b706364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b70636c; end: 10b7063f3; -[SCSnapDocMediaChange initWithMediaId:changeType:] */

undefined1 *
FUN_10b70636c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a128;
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



/* Entry: 10b7063f4; end: 10b706417; -[SCSnapDocMediaChange copyWithZone:] */

undefined8 FUN_10b7063f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


