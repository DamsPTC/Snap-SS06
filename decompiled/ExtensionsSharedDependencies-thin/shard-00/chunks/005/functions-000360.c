/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0072b9b4; end: 0072ba03; -[SCLazyLoadingProxy isKindOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0072b9b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac5f00);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_isKindOfClass();
  _objc_release(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 0072ba04; end: 0072ba7b; -[SCLazyLoadingProxy isMemberOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0072ba04(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_00ac36d0;
  _objc_opt_class(PTR_PTR_00ac36d0);
  func_0x007877e0(param_3,param_2,puVar1);
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ac5f00);
    func_0x00792720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00787ac0();
    _objc_release(uVar3);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 0072ba7c; end: 0072bacb; -[SCLazyLoadingProxy respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0072ba7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac5f00);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 0072bacc; end: 0072bb4b; -[SCLazyLoadingProxy conformsToProtocol:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0072bacc(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_00ac5f00);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    FUN_0076f6e8(lVar2,param_3);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (undefined4)lVar3;
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 0072bb4c; end: 0072bc3b; -[SCLazyLoadingProxy isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0072bb4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac36d0;
    _objc_opt_class(PTR_PTR_00ac36d0);
    uVar3 = param_3;
    func_0x00787ac0(param_3,param_2,puVar1);
    lVar4 = (long)_DAT_00ac5f00;
    uVar2 = param_3;
    if ((int)uVar3 != 0) {
      do {
        param_3 = *(ulong *)(uVar2 + lVar4);
        func_0x00792720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar1 = PTR_PTR_00ac36d0;
        _objc_opt_class(PTR_PTR_00ac36d0);
        uVar3 = param_3;
        func_0x00787ac0(param_3,param_2,puVar1);
        uVar2 = param_3;
      } while ((uVar3 & 1) != 0);
    }
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00792720();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == param_3) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      func_0x007877e0(uVar2,param_2,param_3);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 0072bc3c; end: 0072bc83; -[SCLazyLoadingProxy hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0072bc3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac5f00);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x007843a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 0072bc84; end: 0072bc97; -[SCLazyLoadingProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072bc84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5f00,0);
  return;
}



/* Entry: 0072bc98; end: 0072bcd3;  */

void FUN_0072bc98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMethodSignature_00ac36d8;
  func_0x00791820(PTR__OBJC_CLASS___NSMethodSignature_00ac36d8,param_2,&UNK_0091dda4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b640f8;
  puRam0000000000b640f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072bcd4; end: 0072bd57; -[SCMainThreadLazy initWithInitializationBlock:] */

undefined1 * FUN_0072bcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0072bd58; end: 0072bdd7; -[SCMainThreadLazy initWithWrappedValue:] */

undefined1 * FUN_0072bd58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0072bdd8; end: 0072be7f; -[SCMainThreadLazy target] */

undefined * FUN_0072bdd8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00787a60();
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(undefined **)(param_1 + 8);
    if (puVar4 == (undefined *)0x0) {
      lVar1 = *(long *)(param_1 + 0x10);
      (**(code **)(lVar1 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar1;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar3);
      puVar4 = *(undefined **)(param_1 + 8);
    }
    _objc_retain(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
    return puVar4;
  }
  puVar4 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  puVar2 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00787a60();
  if (((ulong)puVar2 & 1) != 0) {
    return (undefined *)(ulong)(*(long *)(puVar4 + 8) != 0);
  }
  puVar4 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20(PTR__OBJC_CLASS___NSException_00ac2f30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  _objc_storeStrong(puVar4 + 0x10,0);
  puVar4 = puVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(puVar4,0);
  return puVar4;
}



/* Entry: 0072be80; end: 0072beeb; -[SCMainThreadLazy isCreated] */

undefined * FUN_0072be80(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00787a60();
  if (((ulong)puVar1 & 1) != 0) {
    return (undefined *)(ulong)(*(long *)(param_1 + 8) != 0);
  }
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  func_0x00782f20(PTR__OBJC_CLASS___NSException_00ac2f30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  _objc_storeStrong(puVar1 + 0x10,0);
  puVar1 = puVar1 + 8;
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(puVar1,0);
  return puVar1;
}



/* Entry: 0072beec; end: 0072bf1b; -[SCMainThreadLazy .cxx_destruct] */

void FUN_0072beec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0072bf1c; end: 0072bfdf;  */

void FUN_0072bf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_0072bfe0;
  puStack_40 = &UNK_00a0b5a0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0078a7a0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00783680(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072bfe0; end: 0072bfeb;  */

void FUN_0072bfe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0072bfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 0072bfec; end: 0072c173;  */

void FUN_0072bfec(undefined *param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  if ((param_4 & 1) == 0) {
    puVar5 = (undefined8 *)param_3;
    func_0x00783660();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00780e80(param_1);
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x0078bc80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00780ea0();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_110;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          if ((param_3 == (undefined1 *)0x0) ||
             (puVar3 = param_3,
             (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_118 + (long)puVar9 * 8)),
             (int)puVar3 != 0)) {
            func_0x00787100(puVar1);
          }
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = param_1;
        puVar5 = &uStack_120;
        func_0x00780ea0();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_1);
    param_1 = puVar1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = &uStack_240;
    lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
    _objc_retain(puVar5);
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00780ea0();
    if (puVar3 != (undefined1 *)0x0) {
      lVar7 = *plStack_230;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          param_1 = *(undefined **)(lStack_238 + (long)puVar8 * 8);
          puVar4 = (undefined1 *)puVar5;
          (**(code **)((long)puVar5 + 0x10))(puVar5,param_1);
          if (((ulong)puVar4 & 1) != 0) {
            _objc_retain(param_1);
            goto LAB_0072c258;
          }
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar3 = param_3;
        puVar6 = &uStack_240;
        func_0x00780ea0();
      } while (puVar3 != (undefined1 *)0x0);
    }
    param_1 = (undefined *)0x0;
LAB_0072c258:
    _objc_release(param_3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_178) {
      ___stack_chk_fail();
      puVar3 = (undefined1 *)puVar5;
      func_0x00780e80();
      if (puVar3 <= puVar6) {
        puVar6 = (undefined8 *)puVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00792310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_subarrayWithRange__00abf5d0,0,puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072c174; end: 0072c2a3;  */

void FUN_0072c174(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00780ea0();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        puVar2 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,uVar4);
        if (((ulong)puVar2 & 1) != 0) {
          _objc_retain(uVar4);
          goto LAB_0072c258;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      puVar3 = &uStack_120;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  uVar4 = 0;
LAB_0072c258:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  puVar2 = param_3;
  func_0x00780e80();
  if (puVar2 <= puVar3) {
    puVar3 = (undefined8 *)puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00792310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_subarrayWithRange__00abf5d0,0,puVar3);
  return;
}



/* Entry: 0072c2a4; end: 0072c2d7;  */

void FUN_0072c2a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00780e80();
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00792310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_subarrayWithRange__00abf5d0,0,param_3);
  return;
}



/* Entry: 0072c2d8; end: 0072c457;  */

/* WARNING: Removing unreachable block (ram,0x0072c378) */

void FUN_0072c2d8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00780ea0();
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      uVar3 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      if ((uVar5 & 1) == 0) {
        if (uVar3 != 0) {
          func_0x0077e720(puVar1);
        }
      }
      else {
        func_0x0077e760(puVar1);
      }
      _objc_release(uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_1;
    func_0x00780ea0();
  }
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00788e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072c458; end: 0072c45f;  */

void FUN_0072c458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00788e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_map_notFoundMarker__00abd098,param_3,0);
  return;
}



/* Entry: 0072c460; end: 0072c4db;  */

void FUN_0072c460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_00ac2f90;
  _objc_retain(param_3);
  func_0x00789b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00788e20(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072c4dc; end: 0072cb07;  */

/* WARNING: Removing unreachable block (ram,0x0072cb8c) */

undefined * FUN_0072c4dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined auStack_348 [128];
  long lStack_2c8;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x00780e80(param_1);
  func_0x0077f1a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar5 = auStack_e8;
  lVar13 = param_1;
  func_0x00780ea0();
  if (lVar13 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_128 + lVar15 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_4;
        if (lVar3 != 0) {
          lVar1 = lVar3;
        }
        _objc_retain(lVar1);
        _objc_release(lVar3);
        if (lVar1 != 0) {
          func_0x0077e720(puVar10);
        }
        _objc_release(lVar1);
        lVar15 = lVar15 + 1;
      } while (lVar13 != lVar15);
      puVar5 = auStack_e8;
      lVar13 = param_1;
      puVar4 = &uStack_130;
      func_0x00780ea0();
    } while (lVar13 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = &uStack_260;
    lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    puVar10 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    func_0x00780e80(param_3);
    func_0x00791380();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(param_3);
    puVar14 = auStack_218;
    lVar13 = param_3;
    func_0x00780ea0();
    if (lVar13 != 0) {
      lVar12 = *plStack_250;
      do {
        lVar15 = 0;
        do {
          if (*plStack_250 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          puVar16 = (undefined1 *)puVar4;
          (**(code **)((long)puVar4 + 0x10))(puVar4,*(undefined8 *)(lStack_258 + lVar15 * 8));
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar5;
          if (puVar16 != (undefined1 *)0x0) {
            puVar14 = puVar16;
          }
          _objc_retain(puVar14);
          _objc_release(puVar16);
          if (puVar14 != (undefined1 *)0x0) {
            func_0x0077e720(puVar10);
          }
          _objc_release(puVar14);
          lVar15 = lVar15 + 1;
        } while (lVar13 != lVar15);
        puVar14 = auStack_218;
        lVar13 = param_3;
        puVar7 = &uStack_260;
        func_0x00780ea0();
      } while (lVar13 != 0);
    }
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_198) {
      ___stack_chk_fail();
      puVar8 = &uStack_390;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_00999f88;
      _objc_retain(puVar7);
      _objc_retain(puVar14);
      puVar10 = PTR__OBJC_CLASS___NSMutableOrderedSet_00ac3300;
      func_0x00780e80(puVar4);
      func_0x0078a1c0();
      _objc_retainAutoreleasedReturnValue();
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      plStack_380 = (long *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      _objc_retain(puVar4);
      puVar9 = auStack_348;
      puVar5 = (undefined1 *)puVar4;
      func_0x00780ea0();
      if (puVar5 != (undefined1 *)0x0) {
        lVar13 = *plStack_380;
        do {
          puVar16 = (undefined1 *)0x0;
          do {
            if (*plStack_380 != lVar13) {
              _objc_enumerationMutation(puVar4);
            }
            puVar6 = (undefined1 *)puVar7;
            (**(code **)((long)puVar7 + 0x10))
                      (puVar7,*(undefined8 *)(lStack_388 + (long)puVar16 * 8));
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar14;
            if (puVar6 != (undefined1 *)0x0) {
              puVar2 = puVar6;
            }
            _objc_retain(puVar2);
            _objc_release(puVar6);
            if (puVar2 != (undefined1 *)0x0) {
              func_0x0077e720(puVar10);
            }
            _objc_release(puVar2);
            puVar16 = puVar16 + 1;
          } while (puVar5 != puVar16);
          puVar9 = auStack_348;
          puVar5 = (undefined1 *)puVar4;
          puVar8 = &uStack_390;
          func_0x00780ea0();
        } while (puVar5 != (undefined1 *)0x0);
      }
      _objc_release(puVar4);
      _objc_release(puVar14);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_2c8) {
        ___stack_chk_fail();
        puVar4 = &uStack_4c0;
        lStack_3f8 = *(long *)PTR____stack_chk_guard_00999f88;
        _objc_retain(puVar8);
        _objc_retain(puVar9);
        _objc_retain(puVar9);
        lStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        plStack_4b0 = (long *)0x0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        _objc_retain(puVar7);
        puVar5 = (undefined1 *)puVar7;
        func_0x00780ea0();
        puVar10 = puVar9;
        if (puVar5 != (undefined1 *)0x0) {
          lVar13 = *plStack_4b0;
          do {
            puVar14 = (undefined1 *)0x0;
            puVar11 = puVar10;
            do {
              if (*plStack_4b0 != lVar13) {
                _objc_enumerationMutation(puVar7);
              }
              puVar10 = (undefined *)puVar8;
              (**(code **)((long)puVar8 + 0x10))
                        (puVar8,puVar11,*(undefined8 *)(lStack_4b8 + (long)puVar14 * 8));
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              puVar14 = puVar14 + 1;
              puVar11 = puVar10;
            } while (puVar5 != puVar14);
            puVar5 = (undefined1 *)puVar7;
            puVar4 = &uStack_4c0;
            func_0x00780ea0();
          } while (puVar5 != (undefined1 *)0x0);
        }
        _objc_release(puVar7);
        _objc_release(puVar9);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_3f8) {
          ___stack_chk_fail();
          lVar13 = *(long *)PTR____stack_chk_guard_00999f88;
          _objc_retain(puVar4);
          _objc_retain(puVar8);
          puVar9 = (undefined *)puVar8;
          func_0x00780ea0();
          puVar10 = (undefined *)0x0;
          if (puVar9 != (undefined *)0x0) {
            do {
              puVar10 = (undefined *)0x0;
              do {
                puVar5 = (undefined1 *)puVar4;
                (**(code **)((long)puVar4 + 0x10))(puVar4,*(undefined8 *)((long)puVar10 * 8));
                if (((ulong)puVar5 & 1) != 0) {
                  puVar10 = (undefined *)((long)&MACH_HEADER.magic + 1);
                  goto LAB_0072cbdc;
                }
                puVar10 = puVar10 + 1;
              } while (puVar9 != puVar10);
              puVar9 = (undefined *)puVar8;
              func_0x00780ea0();
            } while (puVar9 != (undefined *)0x0);
            puVar10 = (undefined *)0x0;
          }
LAB_0072cbdc:
          _objc_release(puVar8);
          _objc_release(puVar4);
          if (*(long *)PTR____stack_chk_guard_00999f88 == lVar13) {
            return puVar10;
          }
          ___stack_chk_fail();
          puVar10 = PTR__OBJC_CLASS___NSString_00ac2988;
          _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
          puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8;
          func_0x00781700(PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8);
          _objc_retainAutoreleasedReturnValue();
          func_0x007851e0(puVar10);
          _objc_release(puVar9);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar10);
  return puVar10;
}



/* Entry: 0072cb08; end: 0072cc23;  */

/* WARNING: Removing unreachable block (ram,0x0072cb8c) */

undefined * FUN_0072cb08(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00780ea0();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    do {
      lVar6 = 0;
      do {
        uVar2 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lVar6 * 8));
        if ((uVar2 & 1) != 0) {
          puVar3 = (undefined *)((long)&MACH_HEADER.magic + 1);
          goto LAB_0072cbdc;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      func_0x00780ea0();
    } while (lVar1 != 0);
    puVar3 = (undefined *)0x0;
  }
LAB_0072cbdc:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8;
  func_0x00781700(PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x007851e0(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return puVar3;
}



/* Entry: 0072cc24; end: 0072ccd7;  */

void FUN_0072cc24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8;
  func_0x00781700(PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007851e0(puVar1,param_2,puVar2,4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072ccd8; end: 0072ce17;  */

/* WARNING: Removing unreachable block (ram,0x0072cec0) */
/* WARNING: Removing unreachable block (ram,0x0072cd64) */

void FUN_0072ccd8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00780ea0();
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      uVar5 = *(ulong *)(lVar6 * 8);
      puVar1 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
      uVar2 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar1);
      if ((uVar2 & 1) == 0) {
        func_0x0077e720(param_3);
      }
      else {
        func_0x0077d620(uVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = param_1;
    func_0x00780ea0();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc();
  func_0x00780e80(param_3);
  func_0x00784f20();
  func_0x0078bc80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00780ea0();
  while (uVar2 != 0) {
    uVar5 = 0;
    do {
      func_0x0077e720(puVar1);
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
    uVar2 = param_3;
    func_0x00780ea0();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    func_0x00784c20();
    func_0x00780e80();
    if (0 < (long)(param_3 - 1)) {
      do {
        param_3 = param_3 - 1;
        _arc4random_uniform(param_3);
        func_0x00782f40(puVar1);
      } while (1 < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072ce18; end: 0072cf3f;  */

void FUN_0072ce18(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00780e80(param_1);
  func_0x00784f20(puVar1,param_2,uVar2);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x0078bc80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00780ea0();
  if (uVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      uVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        func_0x0077e720(puVar1,param_2,*(undefined8 *)(lStack_108 + uVar4 * 8));
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      uVar2 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    func_0x00784c20();
    func_0x00780e80();
    if (0 < (long)(param_1 - 1)) {
      do {
        param_1 = param_1 - 1;
        uVar2 = param_1;
        _arc4random_uniform(param_1);
        func_0x00782f40(puVar1,param_2,param_1,uVar2 & 0xffffffff);
      } while (1 < param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072cf40; end: 0072cfb3;  */

void FUN_0072cf40(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  func_0x00784c20();
  func_0x00780e80();
  if (0 < (long)(param_1 - 1)) {
    do {
      param_1 = param_1 - 1;
      uVar2 = param_1;
      _arc4random_uniform(param_1);
      func_0x00782f40(puVar1,param_2,param_1,uVar2 & 0xffffffff);
    } while (1 < param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072cfb4; end: 0072d397;  */

/* WARNING: Removing unreachable block (ram,0x0072d718) */
/* WARNING: Removing unreachable block (ram,0x0072d7d4) */

undefined * FUN_0072cfb4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined *unaff_x21;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *puVar10;
  undefined *unaff_x28;
  undefined1 auStack_5f8 [256];
  long lStack_4f8;
  undefined *puStack_4f0;
  long lStack_4e8;
  undefined **ppuStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 ***pppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_3c8;
  undefined **ppuStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar8 = param_3;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00780e80();
  puVar2 = PTR____NSArray0__struct_00999d10;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00780ea0();
    if (puVar1 != (undefined *)0x0) {
      unaff_x24 = (undefined *)0x0;
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = (undefined *)0x0;
        do {
          unaff_x25 = unaff_x24;
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
          if (((unaff_x25 == (undefined *)0x0) ||
              (puVar8 = param_3, (**(code **)(param_3 + 0x10))(param_3,unaff_x24,unaff_x25),
              ((ulong)puVar8 & 1) == 0)) &&
             (puVar8 = unaff_x21, func_0x00780e80(), puVar8 != (undefined *)0x0)) {
            unaff_x26 = unaff_x21;
            func_0x00780e20();
            func_0x0077e720(puVar2);
            _objc_release(unaff_x26);
            func_0x0078b280(unaff_x21);
          }
          func_0x0077e720(unaff_x21);
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar1 != unaff_x28);
        puVar1 = param_1;
        puVar6 = &uStack_130;
        func_0x00780ea0();
      } while (puVar1 != (undefined *)0x0);
      _objc_release(unaff_x24);
      unaff_x23 = (undefined *)0x0;
    }
    _objc_release(param_1);
    puVar1 = unaff_x21;
    func_0x00780e80();
    puVar8 = (undefined *)puVar6;
    if (puVar1 != (undefined *)0x0) {
      param_1 = unaff_x21;
      func_0x00780e20();
      puVar8 = param_1;
      func_0x0077e720(puVar2);
      _objc_release(param_1);
    }
    _objc_release(unaff_x21);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    puVar6 = &uStack_260;
    uStack_138 = 0x72d1bc;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_00999f88;
    puStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = param_1;
    puStack_158 = unaff_x21;
    puStack_150 = puVar2;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00780e80();
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00780ea0();
    if (puVar2 != (undefined *)0x0) {
      unaff_x27 = *plStack_250;
      do {
        unaff_x28 = (undefined *)0x0;
        puVar10 = puVar9;
        do {
          if (*plStack_250 != unaff_x27) {
            _objc_enumerationMutation(puVar1);
          }
          unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x28 * 8);
          func_0x0077e720(puVar10);
          puVar9 = puVar10;
          func_0x00780e80();
          if (puVar9 == puVar8) {
LAB_0072d2c8:
            puVar9 = puVar10;
            func_0x00780e20(puVar10);
            func_0x0077e720(puVar3);
            _objc_release(puVar9);
            puVar9 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
            func_0x0077f1a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            unaff_x24 = puVar9;
          }
          else {
            unaff_x25 = puVar1;
            func_0x00788220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar9 = puVar10;
            if (unaff_x24 == unaff_x25) goto LAB_0072d2c8;
          }
          unaff_x28 = unaff_x28 + 1;
          puVar10 = puVar9;
        } while (puVar2 != unaff_x28);
        puVar2 = puVar1;
        puVar6 = &uStack_260;
        func_0x00780ea0();
        unaff_x23 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar2 = puVar3;
    func_0x00780e20();
    _objc_release(puVar9);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_1a0) {
      ___stack_chk_fail();
      pcStack_268 = FUN_0072d398;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_00999f88;
      puStack_2a0 = unaff_x24;
      puStack_298 = unaff_x23;
      puStack_290 = puVar9;
      puStack_288 = puVar8;
      puStack_280 = puVar3;
      puStack_278 = puVar2;
      ppuStack_270 = &puStack_140;
      _objc_retain(puVar6);
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      puStack_360 = (undefined8 *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      _objc_retain(puVar1);
      puVar2 = puVar1;
      func_0x00780ea0();
      if (puVar2 != (undefined *)0x0) {
        puVar9 = (undefined *)*puStack_360;
        do {
          unaff_x23 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_360 != puVar9) {
              _objc_enumerationMutation(puVar1);
            }
            puVar8 = (undefined *)puVar6;
            (**(code **)((long)puVar6 + 0x10))
                      (puVar6,*(undefined8 *)(lStack_368 + (long)unaff_x23 * 8));
            if ((int)puVar8 == 0) {
              puVar8 = (undefined *)0x0;
              goto LAB_0072d470;
            }
            unaff_x23 = unaff_x23 + 1;
          } while (puVar2 != unaff_x23);
          puVar2 = puVar1;
          func_0x00780ea0();
        } while (puVar2 != (undefined *)0x0);
      }
      puVar8 = (undefined *)((long)&MACH_HEADER.magic + 1);
LAB_0072d470:
      _objc_release(puVar1);
      puVar3 = (undefined *)puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2a8) {
        return puVar8;
      }
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
      puVar4 = &uStack_490;
      ppuStack_3c0 = &PTR_s_initWithExecutionStartDateNanos__00ac2000;
      pcStack_378 = FUN_0072d4b8;
      lStack_3c8 = *(long *)PTR____stack_chk_guard_00999f88;
      puStack_3b8 = unaff_x25;
      puStack_3b0 = unaff_x24;
      puStack_3a8 = unaff_x23;
      puStack_3a0 = puVar9;
      puStack_398 = puVar8;
      puStack_390 = puVar1;
      puStack_388 = (undefined *)puVar6;
      pppuStack_380 = &ppuStack_270;
      func_0x00780e80();
      func_0x0077f1a0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
      func_0x0078c940();
      _objc_retainAutoreleasedReturnValue();
      lStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      puStack_480 = (undefined8 *)0x0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      _objc_retain(puVar3);
      puVar8 = puVar3;
      func_0x00780ea0();
      if (puVar8 != (undefined *)0x0) {
        unaff_x24 = (undefined *)*puStack_480;
        do {
          unaff_x25 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_480 != unaff_x24) {
              _objc_enumerationMutation(puVar3);
            }
            unaff_x23 = *(undefined **)(lStack_488 + (long)unaff_x25 * 8);
            puVar9 = puVar1;
            func_0x00780c20();
            if (((ulong)puVar9 & 1) == 0) {
              func_0x0077e720(puVar2);
              func_0x0077e720(puVar1);
            }
            unaff_x25 = unaff_x25 + 1;
          } while (puVar8 != unaff_x25);
          puVar8 = puVar3;
          puVar4 = &uStack_490;
          func_0x00780ea0();
          puVar9 = (undefined *)0x0;
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      puVar8 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_3c8) {
        ___stack_chk_fail();
        ppuStack_4e0 = &PTR_s_initWithExecutionStartDateNanos__00ac2000;
        pcStack_498 = FUN_0072d61c;
        lStack_4f8 = *(long *)PTR____stack_chk_guard_00999f88;
        puStack_4f0 = unaff_x28;
        lStack_4e8 = unaff_x27;
        puStack_4d8 = unaff_x25;
        puStack_4d0 = unaff_x24;
        puStack_4c8 = unaff_x23;
        puStack_4c0 = puVar9;
        puStack_4b8 = puVar1;
        puStack_4b0 = puVar2;
        puStack_4a8 = puVar3;
        pppuStack_4a0 = &pppuStack_380;
        func_0x0078b320();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSSet_00ac2a68;
        func_0x00791360();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
        func_0x00780e80(puVar8);
        func_0x00780e80(puVar4);
        func_0x0077f1a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
        func_0x0078c940();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        puVar1 = (undefined *)puVar4;
        func_0x00780ea0();
        while (puVar1 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            puVar5 = puVar9;
            func_0x00780c20();
            if ((int)puVar5 != 0) {
              func_0x0077e720(puVar2);
              func_0x0077e720(puVar3);
            }
            puVar10 = puVar10 + 1;
          } while (puVar1 != puVar10);
          puVar1 = (undefined *)puVar4;
          func_0x00780ea0();
        }
        _objc_release(puVar4);
        func_0x0078b320();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = auStack_5f8;
        puVar1 = puVar8;
        func_0x00780ea0();
        while (puVar1 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            puVar5 = puVar3;
            func_0x00780c20();
            if (((ulong)puVar5 & 1) == 0) {
              func_0x0077e720(puVar2);
            }
            puVar10 = puVar10 + 1;
          } while (puVar1 != puVar10);
          puVar7 = auStack_5f8;
          puVar1 = puVar8;
          func_0x00780ea0();
        }
        _objc_release(puVar8);
        _objc_release(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar4);
        if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_4f8) {
          ___stack_chk_fail();
          _objc_retain(puVar7);
          func_0x00789700(puVar4);
          func_0x0078b5c0();
          _objc_release(puVar7);
          puVar2 = (undefined *)puVar4;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return puVar2;
}



/* Entry: 0072d398; end: 0072d4b7;  */

/* WARNING: Removing unreachable block (ram,0x0072d718) */
/* WARNING: Removing unreachable block (ram,0x0072d7d4) */
/* WARNING: Removing unreachable block (ram,0x0072d41c) */

undefined * FUN_0072d398(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_398 [256];
  long lStack_298;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  
  lVar10 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00780ea0();
  do {
    if (lVar1 == 0) {
      puVar11 = (undefined *)((long)&MACH_HEADER.magic + 1);
LAB_0072d470:
      _objc_release(param_1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar10) {
        return puVar11;
      }
      ___stack_chk_fail();
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
      puVar5 = &uStack_230;
      lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
      func_0x00780e80();
      func_0x0077f1a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
      func_0x0078c940();
      _objc_retainAutoreleasedReturnValue();
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      plStack_220 = (long *)0x0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      _objc_retain(param_3);
      lVar1 = param_3;
      func_0x00780ea0();
      if (lVar1 != 0) {
        lVar10 = *plStack_220;
        do {
          lVar12 = 0;
          do {
            if (*plStack_220 != lVar10) {
              _objc_enumerationMutation(param_3);
            }
            puVar4 = puVar3;
            func_0x00780c20();
            if (((ulong)puVar4 & 1) == 0) {
              func_0x0077e720(puVar11);
              func_0x0077e720(puVar3);
            }
            lVar12 = lVar12 + 1;
          } while (lVar1 != lVar12);
          lVar1 = param_3;
          puVar5 = &uStack_230;
          func_0x00780ea0();
        } while (lVar1 != 0);
      }
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_168) {
        ___stack_chk_fail();
        lStack_298 = *(long *)PTR____stack_chk_guard_00999f88;
        func_0x0078b320();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSSet_00ac2a68;
        func_0x00791360();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
        func_0x00780e80(puVar3);
        func_0x00780e80(puVar5);
        func_0x0077f1a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
        func_0x0078c940();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar5);
        puVar4 = (undefined *)puVar5;
        func_0x00780ea0();
        while (puVar4 != (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
          do {
            puVar8 = puVar6;
            func_0x00780c20();
            if ((int)puVar8 != 0) {
              func_0x0077e720(puVar11);
              func_0x0077e720(puVar7);
            }
            puVar13 = puVar13 + 1;
          } while (puVar4 != puVar13);
          puVar4 = (undefined *)puVar5;
          func_0x00780ea0();
        }
        _objc_release(puVar5);
        func_0x0078b320();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = auStack_398;
        puVar4 = puVar3;
        func_0x00780ea0();
        while (puVar4 != (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
          do {
            puVar8 = puVar7;
            func_0x00780c20();
            if (((ulong)puVar8 & 1) == 0) {
              func_0x0077e720(puVar11);
            }
            puVar13 = puVar13 + 1;
          } while (puVar4 != puVar13);
          puVar9 = auStack_398;
          puVar4 = puVar3;
          func_0x00780ea0();
        }
        _objc_release(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_298) {
          ___stack_chk_fail();
          _objc_retain(puVar9);
          func_0x00789700(puVar5);
          func_0x0078b5c0();
          _objc_release(puVar9);
          puVar11 = (undefined *)puVar5;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar11);
      return puVar11;
    }
    lVar12 = 0;
    do {
      lVar2 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lVar12 * 8));
      if ((int)lVar2 == 0) {
        puVar11 = (undefined *)0x0;
        goto LAB_0072d470;
      }
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = param_1;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 0072d4b8; end: 0072d61b;  */

void FUN_0072d4b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [128];
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar12 = param_1;
  func_0x00780e80();
  func_0x0077f1a0(puVar1,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  func_0x0078c940();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar12 = param_1;
  func_0x00780ea0();
  if (lVar12 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(undefined8 *)(lStack_118 + lVar11 * 8);
        puVar3 = puVar2;
        func_0x00780c20(puVar2,param_2,uVar9);
        if (((ulong)puVar3 & 1) == 0) {
          func_0x0077e720(puVar1,param_2,uVar9);
          func_0x0077e720(puVar2,param_2,uVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar12 != lVar11);
      lVar12 = param_1;
      puVar4 = &uStack_120;
      func_0x00780ea0();
    } while (lVar12 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
    func_0x0078b320();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_00ac2a68;
    func_0x00791360(PTR__OBJC_CLASS___NSSet_00ac2a68,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    puVar5 = puVar2;
    func_0x00780e80(puVar2);
    puVar6 = (undefined *)puVar4;
    func_0x00780e80(puVar4);
    func_0x0077f1a0(puVar1,param_2,puVar6 + (long)puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    func_0x0078c940();
    _objc_retainAutoreleasedReturnValue();
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    _objc_retain(puVar4);
    puVar6 = (undefined *)puVar4;
    func_0x00780ea0(puVar4,param_2,&uStack_2d0,auStack_208,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar12 = *plStack_2c0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_2c0 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          uVar9 = *(undefined8 *)(lStack_2c8 + (long)puVar13 * 8);
          puVar7 = puVar3;
          func_0x00780c20(puVar3,param_2,uVar9);
          if ((int)puVar7 != 0) {
            func_0x0077e720(puVar1,param_2,uVar9);
            func_0x0077e720(puVar5,param_2,uVar9);
          }
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar6 = (undefined *)puVar4;
        func_0x00780ea0(puVar4,param_2,&uStack_2d0,auStack_208,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    func_0x0078b320();
    _objc_retainAutoreleasedReturnValue();
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    puVar8 = auStack_288;
    puVar6 = puVar2;
    func_0x00780ea0();
    if (puVar6 != (undefined *)0x0) {
      lVar12 = *plStack_300;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_300 != lVar12) {
            _objc_enumerationMutation(puVar2);
          }
          uVar9 = *(undefined8 *)(lStack_308 + (long)puVar13 * 8);
          puVar7 = puVar5;
          func_0x00780c20(puVar5,param_2,uVar9);
          if (((ulong)puVar7 & 1) == 0) {
            func_0x0077e720(puVar1,param_2,uVar9);
          }
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar8 = auStack_288;
        puVar6 = puVar2;
        func_0x00780ea0(puVar2,param_2,&uStack_310,puVar8,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(puVar8);
      func_0x00789700(puVar4);
      func_0x0078b5c0();
      _objc_release(puVar8);
      puVar1 = (undefined *)puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072d61c; end: 0072d887;  */

void FUN_0072d61c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x0078b320();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  func_0x00791360(PTR__OBJC_CLASS___NSSet_00ac2a68,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  lVar8 = param_1;
  func_0x00780e80(param_1);
  puVar2 = param_3;
  func_0x00780e80(param_3);
  func_0x0077f1a0(puVar3,param_2,puVar2 + lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  func_0x0078c940();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00780ea0(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_1a0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_1a8 + (long)puVar10 * 8);
        puVar5 = puVar1;
        func_0x00780c20(puVar1,param_2,uVar7);
        if ((int)puVar5 != 0) {
          func_0x0077e720(puVar3,param_2,uVar7);
          func_0x0077e720(puVar2,param_2,uVar7);
        }
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = param_3;
      func_0x00780ea0(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(param_3);
  func_0x0078b320();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar6 = auStack_168;
  lVar8 = param_1;
  func_0x00780ea0();
  if (lVar8 != 0) {
    lVar9 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
        puVar4 = puVar2;
        func_0x00780c20(puVar2,param_2,uVar7);
        if (((ulong)puVar4 & 1) == 0) {
          func_0x0077e720(puVar3,param_2,uVar7);
        }
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      puVar6 = auStack_168;
      lVar8 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_1f0,puVar6,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    func_0x00789700(param_3);
    func_0x0078b5c0();
    _objc_release(puVar6);
    puVar3 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0072d888; end: 0072d8df;  */

void FUN_0072d888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00789700(param_1);
  func_0x0078b5c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072d8e0; end: 0072d9f7;  */

ulong FUN_0072d8e0(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00780e80();
    uVar1 = param_3;
    func_0x00780e80();
    uVar3 = 0;
    if ((param_4 != 0) && (uVar4 == uVar1)) {
      uVar3 = param_1;
      func_0x00780e80();
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      else {
        uVar4 = 0;
        do {
          uVar1 = param_1;
          func_0x00789e20(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00789e20(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_4;
          (**(code **)(param_4 + 0x10))(param_4,uVar1,uVar2);
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((uVar3 & 1) == 0) break;
          uVar4 = uVar4 + 1;
          uVar1 = param_1;
          func_0x00780e80();
        } while (uVar4 < uVar1);
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 0072d9f8; end: 0072da83;  */

void FUN_0072d9f8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00780e80();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00780e80(param_1);
    _arc4random_uniform();
    func_0x00789e20(param_1,param_2,uVar1 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0072da84; end: 0072daaf;  */

void FUN_0072da84(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_00ac3278;
  _objc_alloc_init();
  uVar1 = puRam0000000000b64108;
  puRam0000000000b64108 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072dab0; end: 0072ddff;  */

void FUN_0072dab0(double param_1,undefined *param_2,undefined **param_3,undefined *param_4,
                 int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00780e20();
  puVar7 = param_4;
  func_0x00780e20();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  dVar8 = param_1;
  func_0x00789c20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar1);
  if (lRam0000000000b64100 != -1) {
    param_3 = &PTR___NSConcreteGlobalBlock_00a1f7c0;
    _dispatch_once(0xb64100);
  }
  puVar1 = puRam0000000000b64108;
  _objc_retain(puRam0000000000b64108);
  puVar7 = puVar1;
  puVar2 = puVar3;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    func_0x007918a0(param_2);
    if (param_1 < dVar8) {
      puVar7 = param_2;
      func_0x00791e20();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x0078ae00();
      _objc_release(puVar7);
      if (puVar2 != (undefined *)0x7fffffffffffffff) {
        puVar2 = param_2;
        func_0x00791e20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00788580();
        ppuVar4 = param_3;
        _objc_release(puVar2);
        if (param_5 == 0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar2 = param_2;
          func_0x0077f440(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSAttributedString_00ac32e0;
          _objc_alloc();
          func_0x00786960();
          func_0x007918a0();
          param_1 = param_1 - dVar8;
          _objc_release(puVar2);
        }
        func_0x00789700();
        func_0x007918a0();
        if ((param_1 < dVar8) && (puVar7 + (long)param_3 != (undefined *)0x0)) {
          puVar7 = puVar7 + (long)param_3;
          do {
            puVar7 = puVar7 + -1;
            func_0x00781d80(param_2);
            func_0x007918a0(param_2);
            if (dVar8 <= param_1) break;
          } while (puVar7 != (undefined *)0x0);
        }
        param_3 = ppuVar4;
        if (param_5 != 0) {
          func_0x0078b580(param_2);
          param_3 = ppuVar4;
        }
        puVar7 = param_2;
        func_0x00780e20(param_2);
        puVar2 = puVar7;
        func_0x0078f4a0(puVar1);
        _objc_retain(puVar7);
        _objc_release(param_2);
        _objc_release(puVar6);
        _objc_release(puVar7);
        goto LAB_0072dd8c;
      }
    }
    puVar7 = param_2;
    func_0x00780e20();
    puVar2 = puVar7;
    func_0x0078f4a0(puVar1);
    _objc_release(puVar7);
    _objc_retain(param_2);
    puVar7 = param_2;
  }
LAB_0072dd8c:
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
    func_0x00787380(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00791e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x0078ad80();
    ppuVar4 = param_3;
    _objc_release(puVar1);
    if ((puVar7 == (undefined *)0x7fffffffffffffff) && (param_3 == (undefined **)0x0)) {
      param_4 = PTR__OBJC_CLASS___NSAttributedString_00ac32e0;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_00ac32e0);
      func_0x00786940();
    }
    else {
      puVar1 = param_4;
      func_0x00791e20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078ada0();
      _objc_release(puVar1);
      if (ppuVar4 == (undefined **)0x0) {
        puVar1 = param_4;
        func_0x00791e20(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x007882e0();
        _objc_release(puVar1);
      }
      func_0x0077f420(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    puVar7 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 0072de00; end: 0072df27;  */

void FUN_0072de00(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00787380(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078ad80();
  lVar3 = param_2;
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x7fffffffffffffff) && (param_2 == 0)) {
    param_1 = PTR__OBJC_CLASS___NSAttributedString_00ac32e0;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_00ac32e0);
    func_0x00786940();
  }
  else {
    puVar1 = param_1;
    func_0x00791e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078ada0();
    _objc_release(puVar1);
    if (lVar3 == 0) {
      puVar1 = param_1;
      func_0x00791e20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x007882e0();
      _objc_release(puVar1);
    }
    func_0x0077f420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072df28; end: 0072e0af;  */

undefined1  [16]
FUN_0072df28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = param_5;
  _objc_opt_class();
  func_0x007918c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uVar7 = param_1;
  uVar8 = param_2;
  func_0x00793680(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x00780e20();
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x0077fc40(param_1,param_2,param_5);
    puVar4 = PTR__OBJC_CLASS___NSValue_00ac32b0;
    uVar7 = param_3;
    uVar8 = param_4;
    func_0x00793680(param_3,param_4,PTR__OBJC_CLASS___NSValue_00ac32b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puVar2);
  }
  else {
    func_0x0077b8c0();
    param_3 = uVar7;
    param_4 = uVar8;
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    auVar9._8_8_ = param_4;
    auVar9._0_8_ = param_3;
    return auVar9;
  }
  ___stack_chk_fail();
  if (lRam0000000000b64110 != -1) {
    _dispatch_once(0xb64110,&PTR___NSConcreteGlobalBlock_00a1f7e0);
  }
  uVar1 = uRam0000000000b64118;
  _objc_retain(uRam0000000000b64118);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 0072e0b0; end: 0072e103;  */

void FUN_0072e0b0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64110 != -1) {
    _dispatch_once(0xb64110,&PTR___NSConcreteGlobalBlock_00a1f7e0);
  }
  uVar1 = uRam0000000000b64118;
  _objc_retain(uRam0000000000b64118);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072e104; end: 0072e12f;  */

void FUN_0072e104(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_00ac3278;
  _objc_alloc_init();
  uVar1 = puRam0000000000b64118;
  puRam0000000000b64118 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072e130; end: 0072e153;  */

void FUN_0072e130(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (0,PTR__OBJC_CLASS___NSAttributedString_00ac32e0,
             PTR_s_attributedStringForText_font_col_00aba9f8);
  return;
}



/* Entry: 0072e154; end: 0072e333;  */

void FUN_0072e154(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_00ac36e0;
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00786940();
    lVar2 = param_4;
    func_0x007882e0(param_4);
    _objc_release(param_4);
    func_0x0077e400(puVar1,param_3,*(undefined8 *)PTR__NSFontAttributeName_00998fd0,param_5,0,lVar2)
    ;
    if (0.0 < param_1) {
      uVar5 = *(undefined8 *)PTR__NSKernAttributeName_00998fe0;
      puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
      func_0x00789c20(param_1,PTR__OBJC_CLASS___NSNumber_00ac29d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e400(puVar1,param_3,uVar5,puVar4,0,lVar2);
      _objc_release(puVar4);
    }
    func_0x0077e400(puVar1,param_3,*(undefined8 *)PTR__NSForegroundColorAttributeName_00998fd8,
                    param_6,0,lVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_00ac32a0;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_00ac32a0);
    func_0x0078cb00();
    func_0x007883e0(param_5);
    func_0x0078efa0(puVar3);
    func_0x007883e0(param_5);
    func_0x0078ee20(puVar3);
    func_0x0078ec00(0x3ff0000000000000,puVar3);
    func_0x00783760(puVar3);
    func_0x0078e4c0(puVar3);
    func_0x0078ebc0(puVar3,param_3,0);
    func_0x0077e400(puVar1,param_3,*(undefined8 *)PTR__NSParagraphStyleAttributeName_00998fe8,puVar3
                    ,0,lVar2);
    puVar4 = puVar1;
    func_0x00780e20(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 0072e334; end: 0072e583;  */

void FUN_0072e334(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_00ac36e0;
  _objc_alloc();
  func_0x00786940();
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_00ac3188;
  func_0x0078b1e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_0072e584(param_3);
  uVar10 = param_4;
  func_0x00780e80();
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      func_0x007882e0(puVar1);
      puVar3 = puVar1;
      func_0x00791e20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078ade0();
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00791e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00780e20();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x007924a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
      func_0x007819e0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00787380();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00780840(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00780820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00787200();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar9 = param_4;
      func_0x00789e00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078b580(puVar1);
      _objc_release(uVar9);
      _objc_release(puVar3);
      _objc_release(puVar4);
      uVar10 = uVar10 + 1;
      uVar9 = param_4;
      func_0x00780e80();
    } while (uVar10 < uVar9);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072e584; end: 0072e61b;  */

undefined * FUN_0072e584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_00ac3188;
  uStack_38 = 0;
  _objc_retain();
  func_0x0078b1e0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a49160,1,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x007882e0(param_1);
  puVar3 = puVar1;
  func_0x00789ba0(puVar1,param_2,param_1,1,0,uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 0072e61c; end: 0072e75b;  */

void FUN_0072e61c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  lVar2 = param_3;
  FUN_0072e584();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    puVar7 = (ulong *)register0x00000008;
    do {
      uVar6 = *puVar7;
      _objc_retain(uVar6);
      _objc_release(uVar4);
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_00ac32e0;
      _objc_opt_class(PTR__OBJC_CLASS___NSAttributedString_00ac32e0);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar3);
      if ((uVar4 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_00ac36e0;
        _objc_opt_class(PTR__OBJC_CLASS___NSMutableAttributedString_00ac36e0);
        _objc_opt_isKindOfClass(uVar6,puVar3);
      }
      func_0x0077e720(puVar1);
      lVar2 = lVar2 + -1;
      uVar4 = uVar6;
      puVar7 = puVar7 + 1;
    } while (lVar2 != 0);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_00ac36e0;
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
  func_0x00786940();
  func_0x0077d9c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0072e75c; end: 0072e7a7;  */

void FUN_0072e75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00784ca0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072e7a8; end: 0072e83f;  */

void FUN_0072e7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00791f80(param_3,param_2,&PTR____CFConstantStringClassReference_00a27140,
                  &PTR____CFConstantStringClassReference_00a21380);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00791f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x007815c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072e840; end: 0072e847;  */

void FUN_0072e840(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_base64EncodedStringWithOptions__00abaac8,1);
  return;
}



/* Entry: 0072e848; end: 0072e9f7;  */

void FUN_0072e848(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x0077f720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x007882e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00791f80(param_1,param_2,&PTR____CFConstantStringClassReference_00a24b80,
                    &PTR____CFConstantStringClassReference_00a314a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar1;
    func_0x00791f80(lVar1,param_2,&PTR____CFConstantStringClassReference_00a21380,
                    &PTR____CFConstantStringClassReference_00a27140);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_retain(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072e9f8; end: 0072eaa7;  */

void FUN_0072e9f8(byte *param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  ushort *puVar6;
  
  pbVar4 = param_1;
  func_0x007882e0();
  lVar5 = (long)pbVar4 << 2;
  _malloc();
  _objc_retainAutorelease();
  func_0x0077fde0();
  if (pbVar4 != (byte *)0x0) {
    puVar6 = (ushort *)(lVar5 + 2);
    do {
      bVar3 = *param_1;
      uVar1 = bVar3 >> 4 | 0x30;
      if (0x9f < bVar3) {
        uVar1 = (bVar3 >> 4) + 0x37;
      }
      puVar6[-1] = uVar1;
      uVar1 = bVar3 & 0xf;
      uVar2 = bVar3 & 0xf | 0x30;
      if (9 < uVar1) {
        uVar2 = uVar1 + 0x37;
      }
      *puVar6 = uVar2;
      pbVar4 = pbVar4 + -1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 2;
    } while (pbVar4 != (byte *)0x0);
  }
  _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
  func_0x00784f80();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0072eaa8; end: 0072eb27;  */

void FUN_0072eaa8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = 3;
    if (param_4 == 0) {
      uVar1 = 1;
    }
    func_0x00781680(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,param_3,uVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0072eb28; end: 0072eda7;  */

ulong FUN_0072eb28(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bStack_65;
  int iStack_64;
  short sStack_38;
  char cStack_36;
  undefined4 uStack_35;
  int iStack_31;
  undefined1 uStack_2d;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = param_1;
  func_0x007882e0();
  if (uVar1 < 0xc) {
    uVar1 = 0;
  }
  else {
    uStack_2d = 0;
    sStack_38 = 0;
    cStack_36 = '\0';
    uStack_35 = 0;
    iStack_31 = 0;
    func_0x00783ce0(param_1,param_2,&sStack_38,0xc);
    if (sStack_38 == -0x2701 && cStack_36 == -1) {
      uVar1 = 1;
    }
    else if (CONCAT17((undefined1)iStack_31,CONCAT43(uStack_35,CONCAT12(cStack_36,sStack_38))) ==
             0xa1a0a0d474e5089) {
      uVar1 = 2;
    }
    else if (((CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x6369656870797466) ||
             (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x3166696d70797466)) ||
            (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x3166736d70797466)) {
      uVar1 = 4;
    }
    else if ((CONCAT13((undefined1)uStack_35,CONCAT12(cStack_36,sStack_38)) == 0x46464952) &&
            (CONCAT13(uStack_2d,iStack_31._1_3_) == 0x50424557)) {
      uVar1 = 3;
    }
    else if (CONCAT13((undefined1)uStack_35,CONCAT12(cStack_36,sStack_38)) == 0x38464947) {
      uVar1 = 8;
    }
    else if ((CONCAT13((undefined1)iStack_31,uStack_35._1_3_) == 0x70797466 &&
              iStack_31 == 0x34706d70) ||
            (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x6d6f736970797466)) {
      uVar1 = 5;
    }
    else if (sStack_38 == 0x4b50) {
      uVar1 = 6;
    }
    else {
      uVar1 = 0;
      if (CONCAT17(uStack_2d,CONCAT43(iStack_31,uStack_35._1_3_)) == 0x2020747170797466) {
        uVar1 = 7;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  func_0x0078a780();
  if ((uVar2 == 3) && (uVar2 = uVar1, func_0x007882e0(), 0x15 < uVar2)) {
    iStack_64 = 0;
    func_0x00783d20(uVar1,param_2,&iStack_64,0xc,4);
    uVar2 = 0;
    if (iStack_64 == 0x58385056) {
      func_0x00783d20(uVar1,param_2,&bStack_65,0x10,1);
      uVar2 = (ulong)(bStack_65 >> 1 & 1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 0072eda8; end: 0072ee3b;  */

undefined * FUN_0072eda8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  _objc_retain(param_3);
  func_0x00781280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x007807e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00794560(puVar2);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 0072ee3c; end: 0072ee8f;  */

void FUN_0072ee3c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64128 != -1) {
    _dispatch_once(0xb64128,&PTR___NSConcreteGlobalBlock_00a1f800);
  }
  uVar1 = uRam0000000000b64120;
  _objc_retain(uRam0000000000b64120);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072ee90; end: 0072eef3;  */

void FUN_0072ee90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  _objc_alloc();
  func_0x00784ee0();
  uVar1 = puRam0000000000b64120;
  puRam0000000000b64120 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072eef4; end: 0072ef0f;  */

void FUN_0072eef4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00781930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            ((double)param_3 / 1000.0,PTR__OBJC_CLASS___NSDate_00ac2c88,
             PTR_s_dateWithTimeIntervalSince1970__00abb340);
  return;
}



/* Entry: 0072ef10; end: 0072ef83;  */

undefined8 FUN_0072ef10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_retain(param_3);
  func_0x007817e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00787680(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 0072ef84; end: 0072f197;  */

bool FUN_0072ef84(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = false;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar2 = param_1;
    func_0x0077ff00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x007807c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar2);
    func_0x0077ff00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x007807c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_1);
    lVar4 = lVar3;
    func_0x00789520();
    lVar5 = lVar2;
    func_0x00789520();
    if (lVar4 == lVar5) {
      lVar4 = lVar3;
      func_0x00781960(lVar3);
      lVar5 = lVar2;
      func_0x00781960(lVar2);
      bVar1 = lVar4 == lVar5;
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  return bVar1;
}



/* Entry: 0072f198; end: 0072f2e3;  */

undefined8 FUN_0072f198(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x0077ff00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
    func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x007807e0(param_1,param_2,0x10,param_3,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00781960(uVar2);
    _objc_release(uVar2);
    return uVar3;
  }
  return 0;
}



/* Entry: 0072f2e4; end: 0072f3c3;  */

void FUN_0072f2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  func_0x00781280(PTR__OBJC_CLASS___NSCalendar_00ac35e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDateComponents_00ac35f0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_00ac35f0);
  func_0x00791400();
  func_0x0078f060(puVar2,param_2,param_4);
  func_0x0078d940(puVar2,param_2,param_5);
  func_0x0078e580(puVar2,param_2,param_6);
  func_0x0078efe0(puVar2,param_2,param_7);
  func_0x00790300(puVar2,param_2,param_8);
  puVar3 = puVar1;
  func_0x00781880(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0072f3c4; end: 0072f6b7;  */

bool FUN_0072f3c4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900();
  _objc_release(puVar1);
  return param_1 <= (double)(param_4 * 0x15180);
}



/* Entry: 0072f6b8; end: 0072f70b;  */

void FUN_0072f6b8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64138 != -1) {
    _dispatch_once(0xb64138,&PTR___NSConcreteGlobalBlock_00a1f820);
  }
  uVar1 = uRam0000000000b64130;
  _objc_retain(uRam0000000000b64130);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072f70c; end: 0072f79b;  */

void FUN_0072f70c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a491a0,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b64130;
  puRam0000000000b64130 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072f79c; end: 0072f7ef;  */

void FUN_0072f79c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64148 != -1) {
    _dispatch_once(0xb64148,&PTR___NSConcreteGlobalBlock_00a1f840);
  }
  uVar1 = uRam0000000000b64140;
  _objc_retain(uRam0000000000b64140);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072f7f0; end: 0072f87f;  */

void FUN_0072f7f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a491c0,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b64140;
  puRam0000000000b64140 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072f880; end: 0072f8d3;  */

void FUN_0072f880(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64158 != -1) {
    _dispatch_once(0xb64158,&PTR___NSConcreteGlobalBlock_00a1f860);
  }
  uVar1 = uRam0000000000b64150;
  _objc_retain(uRam0000000000b64150);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072f8d4; end: 0072f963;  */

void FUN_0072f8d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a491e0,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b64150;
  puRam0000000000b64150 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072f964; end: 0072f9b7;  */

void FUN_0072f964(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64168 != -1) {
    _dispatch_once(0xb64168,&PTR___NSConcreteGlobalBlock_00a1f880);
  }
  uVar1 = uRam0000000000b64160;
  _objc_retain(uRam0000000000b64160);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072f9b8; end: 0072fa47;  */

void FUN_0072f9b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a49200,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b64160;
  puRam0000000000b64160 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072fa48; end: 0072fa9b;  */

void FUN_0072fa48(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64178 != -1) {
    _dispatch_once(0xb64178,&PTR___NSConcreteGlobalBlock_00a1f8a0);
  }
  uVar1 = uRam0000000000b64170;
  _objc_retain(uRam0000000000b64170);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072fa9c; end: 0072fb2b;  */

void FUN_0072fa9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a49220,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b64170;
  puRam0000000000b64170 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072fb2c; end: 0072fb7f;  */

void FUN_0072fb2c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64188 != -1) {
    _dispatch_once(0xb64188,&PTR___NSConcreteGlobalBlock_00a1f8c0);
  }
  uVar1 = uRam0000000000b64180;
  _objc_retain(uRam0000000000b64180);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072fb80; end: 0072fc0f;  */

void FUN_0072fb80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a49240,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b64180;
  puRam0000000000b64180 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072fc10; end: 0072fc63;  */

void FUN_0072fc10(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64198 != -1) {
    _dispatch_once(0xb64198,&PTR___NSConcreteGlobalBlock_00a1f8e0);
  }
  uVar1 = uRam0000000000b64190;
  _objc_retain(uRam0000000000b64190);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072fc64; end: 0072fcf3;  */

void FUN_0072fc64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a49260,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b64190;
  puRam0000000000b64190 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072fcf4; end: 0072fd47;  */

void FUN_0072fcf4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b641a8 != -1) {
    _dispatch_once(0xb641a8,&PTR___NSConcreteGlobalBlock_00a1f900);
  }
  uVar1 = uRam0000000000b641a0;
  _objc_retain(uRam0000000000b641a0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072fd48; end: 0072fdd7;  */

void FUN_0072fd48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a48060,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b641a0;
  puRam0000000000b641a0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072fdd8; end: 0072fe2b;  */

void FUN_0072fdd8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b641b8 != -1) {
    _dispatch_once(0xb641b8,&PTR___NSConcreteGlobalBlock_00a1f920);
  }
  uVar1 = uRam0000000000b641b0;
  _objc_retain(uRam0000000000b641b0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072fe2c; end: 0072febb;  */

void FUN_0072fe2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a49280,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = puRam0000000000b641b0;
  puRam0000000000b641b0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072febc; end: 0072ff0f;  */

void FUN_0072febc(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b641c8 != -1) {
    _dispatch_once(0xb641c8,&PTR___NSConcreteGlobalBlock_00a1f940);
  }
  uVar1 = uRam0000000000b641c0;
  _objc_retain(uRam0000000000b641c0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072ff10; end: 0072ffcb;  */

void FUN_0072ff10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a492a0,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_00ac2f88;
  func_0x00781cc0(PTR__OBJC_CLASS___NSTimeZone_00ac2f88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790ae0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  uVar1 = puRam0000000000b641c0;
  puRam0000000000b641c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0072ffcc; end: 0073001f;  */

void FUN_0072ffcc(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b641d8 != -1) {
    _dispatch_once(0xb641d8,&PTR___NSConcreteGlobalBlock_00a1f960);
  }
  uVar1 = uRam0000000000b641d0;
  _objc_retain(uRam0000000000b641d0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00730020; end: 007300db;  */

void FUN_00730020(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  puVar3 = puVar2;
  func_0x007884a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00781860(puVar4,param_2,&PTR____CFConstantStringClassReference_00a492c0,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d8e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_00ac2f88;
  func_0x00781cc0(PTR__OBJC_CLASS___NSTimeZone_00ac2f88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790ae0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  uVar1 = puRam0000000000b641d0;
  puRam0000000000b641d0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 007300dc; end: 0073069f;  */

void FUN_007300dc(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b641e8 != -1) {
    _dispatch_once(0xb641e8,&PTR___NSConcreteGlobalBlock_00a1f980);
  }
  uVar1 = uRam0000000000b641e0;
  _objc_retain(uRam0000000000b641e0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 007306a0; end: 007306a7;  */

void FUN_007306a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00782e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_errorWithDomain_description_code_00abb890);
  return;
}



/* Entry: 007306a8; end: 0073078f;  */

void FUN_007306a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00791180(puVar1,param_2,param_4,*(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38);
  }
  if (param_6 != 0) {
    func_0x00791180(puVar1,param_2,param_6,*(undefined8 *)PTR__NSUnderlyingErrorKey_00998fa8);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
  func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00,param_2,param_3,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00730790; end: 0073081b;  */

void FUN_00730790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSException_00ac2f30;
  uVar3 = *(undefined8 *)PTR__NSInternalInconsistencyException_00999c88;
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a49320);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782f20(puVar2,param_2,uVar3,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0073081c; end: 0073093b;  */

void FUN_0073081c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSHashTable_00ac2e60;
  func_0x00793a40();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00780ea0();
  if (lVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        func_0x0077e720(puVar1);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      puVar3 = &uStack_110;
      func_0x00780ea0();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    lVar2 = lRam0000000000b64278;
    _objc_retain(puVar3);
    if (lVar2 != -1) {
      _dispatch_once(0xb64278,&PTR___NSConcreteGlobalBlock_00a1faa0);
    }
    puVar1 = puRam0000000000b64270;
    func_0x00789f00(puRam0000000000b64270);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0073093c; end: 00730b53;  */

void FUN_0073093c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam0000000000b64278;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    _dispatch_once(0xb64278,&PTR___NSConcreteGlobalBlock_00a1faa0);
  }
  uVar2 = uRam0000000000b64270;
  func_0x00789f00(uRam0000000000b64270);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00730b54; end: 00730bd3;  */

void FUN_00730b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  FUN_00730bd4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_00730e48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782060(puVar3,param_2,param_1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b64270;
  puRam0000000000b64270 = puVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00730bd4; end: 00730c27;  */

void FUN_00730bd4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64288 != -1) {
    _dispatch_once(0xb64288,&PTR___NSConcreteGlobalBlock_00a1fac0);
  }
  uVar1 = uRam0000000000b64280;
  _objc_retain(uRam0000000000b64280);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00730c28; end: 00730e47;  */

/* WARNING: Removing unreachable block (ram,0x00730cf8) */

void FUN_00730c28(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_00730e48();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x00780e80();
  func_0x0077f1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00780ea0();
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      puVar5 = PTR__OBJC_CLASS___NSLocale_00ac2990;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782040(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x007884e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSLocale_00ac2990;
      _objc_alloc(PTR__OBJC_CLASS___NSLocale_00ac2990);
      func_0x00785aa0();
      puVar6 = puVar4;
      func_0x007822c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x0077e720(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_1;
    func_0x00780ea0();
  }
  _objc_release(param_1);
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b64280;
  puRam0000000000b64280 = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
    ___stack_chk_fail();
    if (lRam0000000000b64298 != -1) {
      _dispatch_once(0xb64298,&PTR___NSConcreteGlobalBlock_00a1fae0);
    }
    uVar1 = uRam0000000000b64290;
    _objc_retain(uRam0000000000b64290);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
    return;
  }
  return;
}



/* Entry: 00730e48; end: 00730e9b;  */

void FUN_00730e48(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64298 != -1) {
    _dispatch_once(0xb64298,&PTR___NSConcreteGlobalBlock_00a1fae0);
  }
  uVar1 = uRam0000000000b64290;
  _objc_retain(uRam0000000000b64290);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00730e9c; end: 00730ecf;  */

void FUN_00730e9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x0077b9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b64290;
  puRam0000000000b64290 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00730ed0; end: 00730f4f;  */

void FUN_00730ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  FUN_00730e48();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_00730bd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782060(puVar3,param_2,param_1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b642a0;
  puRam0000000000b642a0 = puVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00730f50; end: 00730fff;  */

void FUN_00730f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  func_0x00730fac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00791360(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b642b0;
  puRam0000000000b642b0 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00731000; end: 00731017;  */

void FUN_00731000(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000000b642c0;
  ppuRam0000000000b642c0 = &PTR__OBJC_CLASS___NSConstantArray_00a595c8;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00731018; end: 00731073;  */

void FUN_00731018(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  FUN_00730bd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00791360(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b642d0;
  puRam0000000000b642d0 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00731074; end: 00731203;  */

void FUN_00731074(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00730fac();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  lVar2 = param_1;
  func_0x00780e80();
  func_0x00791380(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00780ea0(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = PTR__OBJC_CLASS___NSLocale_00ac2990;
        func_0x00780f20(PTR__OBJC_CLASS___NSLocale_00ac2990,param_2,
                        *(undefined8 *)(lStack_118 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x0077e720(puVar3,param_2,puVar4);
        }
        _objc_release(puVar4);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  func_0x007913e0(PTR__OBJC_CLASS___NSSet_00ac2a68,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b642e0;
  puRam0000000000b642e0 = puVar4;
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  FUN_00730e48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00791360(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b642f0;
  puRam0000000000b642f0 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00731204; end: 0073125f;  */

void FUN_00731204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  FUN_00730e48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00791360(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b642f0;
  puRam0000000000b642f0 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}


