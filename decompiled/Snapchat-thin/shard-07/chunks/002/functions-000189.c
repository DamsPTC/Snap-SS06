/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10537ad78; end: 10537adc3; +[SCRegistrationUsernameAction exited] */

void FUN_10537ad78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537adc4; end: 10537ae2b; +[SCRegistrationUsernameAction inputUsernameDidChangeWithUsernameText:] */

void FUN_10537adc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537ae2c; end: 10537ae77; +[SCRegistrationUsernameAction rotateUsernameSuggestion] */

void FUN_10537ae2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537ae78; end: 10537aebf; +[SCRegistrationUsernameAction submitUsername] */

void FUN_10537ae78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537aec0; end: 10537af1b; +[SCRegistrationUsernameAction toggled1TLCheckboxWithSelected:] */

void FUN_10537aec0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  puVar2[0x20] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537af1c; end: 10537af3f; -[SCRegistrationUsernameAction copyWithZone:] */

undefined8 FUN_10537af1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537af40; end: 10537afb7; -[SCRegistrationUsernameAction hash] */

void FUN_10537af40(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x20);
  puVar2 = &uStack_48;
  uStack_40 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e7b68;
  puStack_80 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537afb8; end: 10537affb; -[SCRegistrationUsernameAction internalInit] */

void FUN_10537afb8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7b68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537affc; end: 10537b0bb; -[SCRegistrationUsernameAction isEqual:] */

long FUN_10537affc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10537b0a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
        (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_10537b0a0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10537b0a0;
    }
  }
  lVar3 = 1;
LAB_10537b0a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10537b0bc; end: 10537b20f; -[SCRegistrationUsernameAction matchSubmitUsername:exited:inputUsernameDidChange:rotateUsernameSuggestion:didSelectUsernameSuggestion:toggled1TLCheckbox:] */

void FUN_10537b0bc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10537b1cc;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if (lVar2 != 1) {
        if ((lVar2 != 2) || (param_5 == 0)) goto LAB_10537b1cc;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        pcVar3 = *(code **)(param_5 + 0x10);
        lVar2 = param_5;
        goto LAB_10537b1c8;
      }
      if (param_4 == 0) goto LAB_10537b1cc;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (lVar2 != 3) {
      if (lVar2 != 4) {
        if ((lVar2 == 5) && (param_8 != 0)) {
          (**(code **)(param_8 + 0x10))(param_8,*(undefined1 *)(param_1 + 0x20));
        }
        goto LAB_10537b1cc;
      }
      if (param_7 == 0) goto LAB_10537b1cc;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
LAB_10537b1c8:
      (*pcVar3)(lVar2,uVar1);
      goto LAB_10537b1cc;
    }
    if (param_6 == 0) goto LAB_10537b1cc;
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2);
LAB_10537b1cc:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537b210; end: 10537b21b; -[SCRegistrationUsernameAction .cxx_destruct] */

void FUN_10537b210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537b21c; end: 10537b347; -[SCRegistrationUsernameViewModel initWithCanContinue:canRefresh:isRegistering:username:continueButtonTitle:state:suggestions:] */

undefined1 *
FUN_10537b21c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e7b70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10537b348; end: 10537b36b; -[SCRegistrationUsernameViewModel copyWithZone:] */

undefined8 FUN_10537b348(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537b36c; end: 10537b40b; -[SCRegistrationUsernameViewModel hash] */

ulong * FUN_10537b36c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10537b4ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10537b4f8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10537b4f8;
            }
            goto LAB_10537b4ec;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10537b4f8:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10537b40c; end: 10537b513; -[SCRegistrationUsernameViewModel isEqual:] */

long FUN_10537b40c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10537b4ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10537b4f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10537b4f8;
            }
            goto LAB_10537b4ec;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10537b4f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10537b514; end: 10537b51b; -[SCRegistrationUsernameViewModel canContinue] */

undefined1 FUN_10537b514(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10537b51c; end: 10537b523; -[SCRegistrationUsernameViewModel canRefresh] */

undefined1 FUN_10537b51c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10537b524; end: 10537b52b; -[SCRegistrationUsernameViewModel isRegistering] */

undefined1 FUN_10537b524(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10537b52c; end: 10537b533; -[SCRegistrationUsernameViewModel username] */

undefined8 FUN_10537b52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10537b534; end: 10537b53b; -[SCRegistrationUsernameViewModel continueButtonTitle] */

undefined8 FUN_10537b534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10537b53c; end: 10537b543; -[SCRegistrationUsernameViewModel state] */

undefined8 FUN_10537b53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10537b544; end: 10537b54b; -[SCRegistrationUsernameViewModel suggestions] */

undefined8 FUN_10537b544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10537b54c; end: 10537b593; -[SCRegistrationUsernameViewModel .cxx_destruct] */

void FUN_10537b54c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537b594; end: 10537b5f7; +[SCRegistrationUsernameViewModelState defaultWithMessage:] */

void FUN_10537b594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7ba0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537b5f8; end: 10537b663; +[SCRegistrationUsernameViewModelState errorWithErrorMessage:] */

void FUN_10537b5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7ba0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537b664; end: 10537b6cf; +[SCRegistrationUsernameViewModelState loadingWithMessage:] */

void FUN_10537b664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7ba0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537b6d0; end: 10537b73b; +[SCRegistrationUsernameViewModelState successWithMessage:] */

void FUN_10537b6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7ba0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537b73c; end: 10537b75f; -[SCRegistrationUsernameViewModelState copyWithZone:] */

undefined8 FUN_10537b73c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537b760; end: 10537b7ef; -[SCRegistrationUsernameViewModelState hash] */

void FUN_10537b760(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e7b78;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537b7f0; end: 10537b833; -[SCRegistrationUsernameViewModelState internalInit] */

void FUN_10537b7f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7b78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537b834; end: 10537b91b; -[SCRegistrationUsernameViewModelState isEqual:] */

long FUN_10537b834(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10537b8f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10537b900;
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
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10537b900;
            }
            goto LAB_10537b8f4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10537b900:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10537b91c; end: 10537ba03; -[SCRegistrationUsernameViewModelState matchDefault:success:loading:error:] */

void FUN_10537b91c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10537b9d4;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10537b9d4;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10537b9d4;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 3) || (param_6 == 0)) goto LAB_10537b9d4;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10537b9d4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537ba04; end: 10537ba4b; -[SCRegistrationUsernameViewModelState .cxx_destruct] */

void FUN_10537ba04(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537ba4c; end: 10537babf; -[SCRedirectToRegInfoServices initWithRedirectToRegInfoProvider:] */

undefined1 * FUN_10537ba4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7b80;
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



/* Entry: 10537bac0; end: 10537bac7; -[SCRedirectToRegInfoServices redirectToRegInfoProvider] */

undefined8 FUN_10537bac0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10537bac8; end: 10537bad3; -[SCRedirectToRegInfoServices .cxx_destruct] */

void FUN_10537bac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10537bad4; end: 10537bbc3;  */

bool FUN_10537bad4(undefined8 param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  if (lRam00000001136bb5c0 != -1) {
    func_0x00010002a2fc(0x1136bb5c0,&PTR___NSConcreteGlobalBlock_11087e7b8);
  }
  if ((bRam00000001136bb5b8 & 1) == 0) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf3f8;
    func_0x00010c067fc0();
    if ((long)ppuVar2 - 1U < 2) {
      bVar1 = true;
      goto LAB_10537bb90;
    }
    if (ppuVar2 == (undefined **)0xffffffffffffffff) {
      uVar3 = param_1;
      FUN_10537bbc4(param_1,1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0da120();
      if (((int)uVar4 == 1) || (uVar4 = uVar3, func_0x00010c0da120(), (int)uVar4 == 0)) {
        bVar1 = false;
      }
      else {
        uVar4 = uVar3;
        func_0x00010c0da120(uVar3);
        bVar1 = (int)uVar4 != -0x4524111;
      }
      _objc_release(uVar3);
      goto LAB_10537bb90;
    }
  }
  bVar1 = false;
LAB_10537bb90:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10537bbc4; end: 10537bc9b;  */

void FUN_10537bbc4(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10537be1c;
  puStack_30 = &UNK_110842e18;
  _objc_retain(param_1);
  uStack_28 = param_1;
  if (lRam00000001136bb5d8 != -1) {
    func_0x00010002a2fc(0x1136bb5d8,&puStack_48);
  }
  if ((param_2 != 0) && ((bRam00000001136bb5b9 & 1) == 0)) {
    func_0x00010bf9d480(uRam00000001136bb5d0);
    bRam00000001136bb5b9 = 1;
  }
  uVar1 = uRam00000001136bb5c8;
  _objc_retain(uRam00000001136bb5c8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10537bc9c; end: 10537bd77;  */

undefined8 FUN_10537bc9c(undefined8 param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  if (lRam00000001136bb5c0 != -1) {
    func_0x00010002a2fc(0x1136bb5c0,&PTR___NSConcreteGlobalBlock_11087e7b8);
  }
  if ((bRam00000001136bb5b8 & 1) == 0) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf3f8;
    func_0x00010c067fc0();
    if (ppuVar2 == (undefined **)0xffffffffffffffff) {
      uVar3 = param_1;
      FUN_10537bbc4(param_1,0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c106f80();
      uVar1 = (int)uVar4 - 1;
      if (uVar1 < 6) {
        uVar4 = *(undefined8 *)(&UNK_10dd97ac8 + (ulong)uVar1 * 8);
      }
      else {
        uVar4 = 1;
      }
      _objc_release(uVar3);
    }
    else {
      uVar4 = 1;
      if (ppuVar2 == (undefined **)0x1) {
        uVar4 = 3;
      }
    }
  }
  else {
    uVar4 = 1;
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10537bd78; end: 10537be1b;  */

bool FUN_10537bd78(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_10537bbc4(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106f80();
  _objc_release(param_1);
  return (int)uVar1 == 10;
}



/* Entry: 10537be1c; end: 10537bf17;  */

void FUN_10537be1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd4938,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uRam00000001136bb5d0;
  uRam00000001136bb5d0 = uVar1;
  _objc_release(uVar2);
  uVar2 = uRam00000001136bb5d0;
  func_0x00010c296d80(uRam00000001136bb5d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b7ca0;
  _objc_alloc();
  uVar5 = uVar3;
  func_0x00010c296d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = 0;
  func_0x00010c008360(puVar4,param_2,uVar5,&uStack_48);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  uVar2 = puRam00000001136bb5c8;
  puRam00000001136bb5c8 = puVar4;
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 10537bf18; end: 10537bf93;  */

undefined * FUN_10537bf18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb5e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd4958,
                        &UNK_10dd97af8,&UNK_10dd97bbc,0xb,FUN_10537bf94,0);
    do {
      if (puRam00000001136bb5e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb5e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb5e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb5e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb5e0;
}



/* Entry: 10537bf94; end: 10537bf9f;  */

bool FUN_10537bf94(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10537bfa0; end: 10537c01b;  */

undefined * FUN_10537bfa0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb5e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd4978,
                        &UNK_10dd97be8,&UNK_10dd97c64,6,FUN_10537c01c,0);
    do {
      if (puRam00000001136bb5e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb5e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb5e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb5e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb5e8;
}



/* Entry: 10537c01c; end: 10537c027;  */

bool FUN_10537c01c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10537c028; end: 10537c08f; +[SCActivationPbNGORegistrationMVPConfig descriptor] */

void FUN_10537c028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb5f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2d360,
                        &PTR____CFConstantStringClassReference_110dd4998,
                        &PTR_s_snapchat_activation_cof_1130d0438,&PTR_s_ngoMvpMode_1130d0450,3,0xc,
                        0x1c);
    puRam00000001136bb5f0 = puVar1;
  }
  return;
}



/* Entry: 10537c090; end: 10537c1ab; -[SCRegistrationBirthdayScope initWithDelegate:uiContainer:defaultBirthday:viewConfig:registrationRequestObservable:] */

undefined1 *
FUN_10537c090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e7b88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537c1ac; end: 10537c1c3; -[SCRegistrationBirthdayScope delegate] */

void FUN_10537c1ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537c1c4; end: 10537c1cb; -[SCRegistrationBirthdayScope uiContainer] */

undefined8 FUN_10537c1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10537c1cc; end: 10537c1d3; -[SCRegistrationBirthdayScope defaultBirthday] */

undefined8 FUN_10537c1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10537c1d4; end: 10537c1db; -[SCRegistrationBirthdayScope viewConfig] */

undefined8 FUN_10537c1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10537c1dc; end: 10537c1e3; -[SCRegistrationBirthdayScope registrationRequestObservable] */

undefined8 FUN_10537c1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10537c1e4; end: 10537c233; -[SCRegistrationBirthdayScope .cxx_destruct] */

void FUN_10537c1e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10537c234; end: 10537c6cb;  */

void FUN_10537c234(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd49b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd49b8,
                      &PTR____CFConstantStringClassReference_110dd49d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10537c6cc; end: 10537c76f; -[SCRegistrationUsernameSuggestionServices initWithUsernameSuggestionFetcher:usernameAvailabilityChecker:] */

undefined1 *
FUN_10537c6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7b90;
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



/* Entry: 10537c770; end: 10537c777; -[SCRegistrationUsernameSuggestionServices usernameSuggestionFetcher] */

undefined8 FUN_10537c770(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10537c778; end: 10537c77f; -[SCRegistrationUsernameSuggestionServices usernameAvailabilityChecker] */

undefined8 FUN_10537c778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10537c780; end: 10537c7af; -[SCRegistrationUsernameSuggestionServices .cxx_destruct] */

void FUN_10537c780(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10537c7b0; end: 10537c7f7; +[SCRegistrationCheckUsernameResult available] */

void FUN_10537c7b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af7b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537c7f8; end: 10537c843; +[SCRegistrationCheckUsernameResult requestFailed] */

void FUN_10537c7f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af7b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537c844; end: 10537c8d7; +[SCRegistrationCheckUsernameResult unavailableWithSuggestions:errorMessage:] */

void FUN_10537c844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af7b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
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



/* Entry: 10537c8d8; end: 10537c8fb; -[SCRegistrationCheckUsernameResult copyWithZone:] */

undefined8 FUN_10537c8d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537c8fc; end: 10537c973; -[SCRegistrationCheckUsernameResult hash] */

void FUN_10537c8fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e7b98;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537c974; end: 10537c9b7; -[SCRegistrationCheckUsernameResult internalInit] */

void FUN_10537c974(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7b98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537c9b8; end: 10537ca6f; -[SCRegistrationCheckUsernameResult isEqual:] */

long FUN_10537c9b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10537ca48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10537ca54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10537ca54;
        }
        goto LAB_10537ca48;
      }
    }
    lVar3 = 0;
  }
LAB_10537ca54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10537ca70; end: 10537cb1b; -[SCRegistrationCheckUsernameResult matchAvailable:unavailable:requestFailed:] */

void FUN_10537ca70(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10537caf8;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_10537caf8;
    }
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10537caf8;
    pcVar2 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar2)(lVar1);
LAB_10537caf8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537cb1c; end: 10537cbbf; -[SCRegistrationCheckUsernameResult .cxx_destruct] */

void FUN_10537cb1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537cbc0; end: 10537cccb;  */

undefined8 FUN_10537cbc0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar6 * 8);
        func_0x00010537cb4c();
        if ((uVar2 & 1) != 0) {
          uVar4 = 1;
          goto LAB_10537cc84;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    uVar4 = 0;
  }
LAB_10537cc84:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar4;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = puRam00000001136bb600;
  puRam00000001136bb600 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return uVar4;
}



/* Entry: 10537cccc; end: 10537cd07;  */

void FUN_10537cccc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136bb600;
  puRam00000001136bb600 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10537cd08; end: 10537cdc3; -[SCKoreanUserConsentChecklistItemView initWithChecklistItem:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10537cd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7ba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11272224c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112722250),param_4);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537cdc4; end: 10537cdd3; -[SCKoreanUserConsentChecklistItemView setChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537cdc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112722254),PTR_s_setSelected__11265c598);
  return;
}



/* Entry: 10537cdd4; end: 10537cde3; -[SCKoreanUserConsentChecklistItemView isChecked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537cdd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112722254),PTR_s_isSelected_1125fcfa8);
  return;
}



/* Entry: 10537cde4; end: 10537d27f; -[SCKoreanUserConsentChecklistItemView _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537cde4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c166c00(puVar1,param_2,3);
  func_0x00010c207380(0x4020000000000000,puVar1);
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493a0(puVar2,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_88 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_80 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_78 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar19);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar20);
  _objc_release(puVar2);
  puVar13 = PTR_PTR_1126b7ca8;
  _objc_opt_new();
  lVar20 = (long)_DAT_112722254;
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar13;
  _objc_release(uVar18);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar20),param_2,param_1,
                      PTR_s__didTapCheckbox_11255dcc0,0x40);
  func_0x00010bef6d60(puVar1,param_2,*(undefined8 *)(param_1 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar14;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  uStack_98 = uVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2a5060(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar18);
  _objc_release(uVar14);
  puVar13 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar19 = (long)_DAT_11272224c;
  lVar20 = param_1;
  func_0x00010be46040(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  func_0x00010c21ad00(puVar13,param_2,lVar20);
  lVar20 = param_1;
  func_0x00010be46020(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar13,param_2,lVar20);
  _objc_release(lVar20);
  func_0x00010c1cfce0(puVar13,param_2,0);
  lVar20 = param_1;
  func_0x00010becb340(param_1);
  func_0x00010c213040(puVar13,param_2,lVar20);
  func_0x00010be46000(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar13,param_2,param_1);
  _objc_release(param_1);
  func_0x00010bef6d60(puVar1,param_2,puVar13);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c21e900(puVar13,param_2,1);
  func_0x00010bef9040(puVar13,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = puVar1;
  func_0x00010c06e780();
  func_0x00010c17c0e0(puVar1,param_2,(uint)puVar13 ^ 1);
  puVar13 = puVar1 + _DAT_112722250;
  _objc_loadWeakRetained(puVar13);
  uVar18 = *(undefined8 *)(puVar1 + _DAT_11272224c);
  puVar2 = puVar1;
  func_0x00010c06e780(puVar1);
  func_0x00010bf38880(puVar13,param_2,puVar1,uVar18,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 10537d280; end: 10537d2f3; -[SCKoreanUserConsentChecklistItemView _didTapCheckbox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537d280(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c06e780();
  func_0x00010c17c0e0(param_1,param_2,(uint)lVar1 ^ 1);
  lVar1 = param_1 + _DAT_112722250;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272224c);
  lVar2 = param_1;
  func_0x00010c06e780(param_1);
  func_0x00010bf38880(lVar1,param_2,param_1,uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10537d2f4; end: 10537d373; -[SCKoreanUserConsentChecklistItemView _didTapTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537d2f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be460c0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11272224c));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be00c80(param_1);
  }
  else {
    param_1 = param_1 + _DAT_112722250;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf388a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10537d374; end: 10537d4bb; -[SCKoreanUserConsentChecklistItemView _itemText:] */

void FUN_10537d374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10537d4bc;
  uStack_40 = 0x10537d4cc;
  uStack_38 = 0;
  func_0x00010c0bfbe0(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10537d4bc; end: 10537d4d3;  */

void FUN_10537d4bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10537d4d4; end: 10537d5ff;  */

void FUN_10537d4d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_10537e5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10537d600; end: 10537d747; -[SCKoreanUserConsentChecklistItemView _itemURL:] */

void FUN_10537d600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10537d4bc;
  uStack_40 = 0x10537d4cc;
  uStack_38 = 0;
  func_0x00010c0bfbe0(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10537d748; end: 10537d75b;  */

void FUN_10537d748(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10537d75c; end: 10537d88b;  */

void FUN_10537d75c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110db01b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10537d88c; end: 10537d9af; -[SCKoreanUserConsentChecklistItemView _itemTextStyle:] */

undefined8 FUN_10537d88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bfbe0(param_3);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10537d9b0; end: 10537da13;  */

void FUN_10537d9b0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x18;
  return;
}



/* Entry: 10537da14; end: 10537db4f; -[SCKoreanUserConsentChecklistItemView _itemTextColor:] */

void FUN_10537da14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bfbe0(param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10537db50; end: 10537dbb3;  */

void FUN_10537db50(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xc6;
  return;
}



/* Entry: 10537dbb4; end: 10537dbd3; -[SCKoreanUserConsentChecklistItemView _textAlignment] */

undefined8 FUN_10537dbb4(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be43140();
  uVar1 = 2;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10537dbd4; end: 10537dc0b; -[SCKoreanUserConsentChecklistItemView _isRTL] */

bool FUN_10537dbd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0();
  func_0x00010c292b00(puVar1,param_2,param_1);
  return puVar1 == (undefined *)0x1;
}



/* Entry: 10537dc0c; end: 10537dc57; -[SCKoreanUserConsentChecklistItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537dc0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112722250);
  _objc_storeStrong(param_1 + _DAT_112722254,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272224c,0);
  return;
}



/* Entry: 10537dc58; end: 10537dcd3; -[SCKoreanUserConsentChecklistView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10537dc58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7ba8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112722258),param_3);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537dcd4; end: 10537e273; -[SCKoreanUserConsentChecklistView _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537dcd4(long param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c166c00(puVar1);
  func_0x00010c207380(0x4028000000000000,puVar1);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(puVar1);
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar17);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar16);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar15);
  _objc_release(puVar2);
  puVar12 = PTR_PTR_1126b7cb0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b7cb8;
  func_0x00010c1586a0(PTR_PTR_1126b7cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe000();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11272225c);
  *(undefined **)(param_1 + _DAT_11272225c) = puVar12;
  _objc_release(uVar14);
  _objc_release(puVar2);
  func_0x00010bef6d60(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar12);
  func_0x00010bef6d60(puVar1);
  func_0x00010c219b60(puVar2);
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (lRam00000001136bb608 != -1) {
    param_2 = &PTR___NSConcreteGlobalBlock_11087e838;
    func_0x00010002a2fc(0x1136bb608,&PTR___NSConcreteGlobalBlock_11087e838);
  }
  lVar7 = lRam00000001136bb610;
  _objc_retain(lRam00000001136bb610);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar7);
  lVar15 = lVar7;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (lVar15 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar7);
      }
      puVar3 = PTR_PTR_1126b7cb0;
      _objc_alloc(PTR_PTR_1126b7cb0);
      func_0x00010bffe000();
      func_0x00010befa120(puVar12);
      func_0x00010bef6d60(puVar1);
      _objc_release(puVar3);
      lVar17 = lVar17 + 1;
    } while (lVar15 != lVar17);
    lVar15 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112722260);
  *(undefined **)(param_1 + _DAT_112722260) = puVar12;
  _objc_retain(puVar12);
  _objc_release(uVar14);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar15 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar15);
  _objc_release(puVar3);
  lVar15 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(lVar15);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_11272225c;
  if (puVar12 == *(undefined **)(puVar1 + lVar16)) {
    lVar17 = *(long *)(puVar1 + _DAT_112722260);
    _objc_retain(lVar17);
    lVar16 = lVar17;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar16 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar17);
        }
        func_0x00010c17c0e0(*(undefined8 *)(lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar16 != lVar13);
      lVar16 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
  }
  else {
    func_0x00010c0bc7a0(*(undefined8 *)(puVar1 + _DAT_112722260));
    func_0x00010c17c0e0(*(undefined8 *)(puVar1 + lVar16));
  }
  puVar1 = puVar1 + _DAT_112722258;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf388c0();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c06e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isChecked_1125f93f0);
  return;
}



/* Entry: 10537e274; end: 10537e3e7; -[SCKoreanUserConsentChecklistView checklistItemView:checklistItem:isChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537e274(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = (long)_DAT_11272225c;
  if (param_3 == *(long *)(param_1 + lVar3)) {
    lVar4 = *(long *)(param_1 + _DAT_112722260);
    _objc_retain(lVar4);
    lVar3 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c17c0e0(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
  }
  else {
    func_0x00010c0bc7a0(*(undefined8 *)(param_1 + _DAT_112722260),param_2,
                        &PTR___NSConcreteGlobalBlock_11087e818);
    func_0x00010c17c0e0(*(undefined8 *)(param_1 + lVar3));
  }
  param_1 = param_1 + _DAT_112722258;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf388c0();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c06e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isChecked_1125f93f0);
  return;
}



/* Entry: 10537e3e8; end: 10537e3ef;  */

void FUN_10537e3e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isChecked_1125f93f0);
  return;
}



/* Entry: 10537e3f0; end: 10537e44b; -[SCKoreanUserConsentChecklistView checklistItemView:checklistItem:selectedLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537e3f0(long param_1)

{
  undefined8 in_x4;
  long lVar1;
  
  lVar1 = (long)_DAT_112722258;
  _objc_retain(in_x4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf388e0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10537e44c; end: 10537e497; -[SCKoreanUserConsentChecklistView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10537e44c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722260,0);
  _objc_storeStrong(param_1 + _DAT_11272225c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722258);
  return;
}



/* Entry: 10537e498; end: 10537e59f;  */

void FUN_10537e498(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126b7cb8;
  func_0x00010c26b420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7cb8;
  func_0x00010bf40c20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b7cb8;
  func_0x00010bf81200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b7cb8;
  func_0x00010c27a2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136bb610;
  puRam00000001136bb610 = puVar8;
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd5038;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd5038,
                      &PTR____CFConstantStringClassReference_110dd5058,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar3 = ppuVar2;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10537e5a0; end: 10537e617;  */

void FUN_10537e5a0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd5038;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dd5038,
                      &PTR____CFConstantStringClassReference_110dd5058,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10537e618; end: 10537e663; +[SCKoreanUserConsentChecklistItem colletionAndUseRequiredInformation] */

void FUN_10537e618(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7cb8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537e664; end: 10537e6af; +[SCKoreanUserConsentChecklistItem disclosureOfPersonalInformation] */

void FUN_10537e664(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7cb8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537e6b0; end: 10537e6f7; +[SCKoreanUserConsentChecklistItem selectAll] */

void FUN_10537e6b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7cb8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537e6f8; end: 10537e743; +[SCKoreanUserConsentChecklistItem termOfUse] */

void FUN_10537e6f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7cb8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


