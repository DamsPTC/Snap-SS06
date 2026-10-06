/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001c404; end: 10001c513;  */

void FUN_10001c404(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  func_0x00010001f700(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  func_0x00010001f8e0(uVar2);
  func_0x00010001fd80(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 10001c514; end: 10001c687;  */

void FUN_10001c514(long param_1)

{
  long lVar1;
  
  func_0x00010001f700(*(undefined8 *)(param_1 + 0x20));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010001ef20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(*(undefined8 *)(param_1 + 0x20),PTR_s_unlock_10002f170);
  return;
}



/* Entry: 10001c688; end: 10001c7c7; -[SCLazy flatMap:] */

void FUN_10001c688(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    _os_unfair_lock_unlock(param_1 + 0x18);
    puVar2 = PTR_PTR_10002f2f8;
    _objc_alloc(PTR_PTR_10002f2f8);
    puStack_60 = PTR___NSConcreteStackBlock_1000281e0;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10001c754;
    puStack_48 = &UNK_100028d68;
    _objc_retain(param_3);
    lStack_40 = param_1;
    lStack_38 = param_3;
    func_0x00010001f460(puVar2,param_2,&puStack_60,cVar1 != '\0');
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar2);
  return;
}



/* Entry: 10001c7c8; end: 10001c853; -[SCLazy initWithInitializationBlock:isAutoCreation:] */

undefined1 *
FUN_10001c7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_10002f440;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10001c854; end: 10001c877; -[SCLazy copyWithZone:] */

undefined8 FUN_10001c854(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10001c878; end: 10001c8a7; -[SCLazy .cxx_destruct] */

void FUN_10001c878(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 10001c8a8; end: 10001c8f3; -[SCLazyLoadingProxy initWithInitializationBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10001c8a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_10002f2f8;
  func_0x00010001ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_10002f51c);
  *(undefined **)(param_1 + _DAT_10002f51c) = puVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10001c8f4; end: 10001c903; -[SCLazyLoadingProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + _DAT_10002f51c),PTR_s_target_10002f168);
  return;
}



/* Entry: 10001c904; end: 10001c99f; -[SCLazyLoadingProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c904(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_10002f51c);
  func_0x00010001fd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (lRam0000000100031500 != -1) {
      _dispatch_once(0x100031500,&PTR___NSConcreteGlobalBlock_100028ea8);
    }
    lVar2 = lRam0000000100031508;
    _objc_retain(lRam0000000100031508);
  }
  else {
    lVar2 = lVar1;
    func_0x00010001f780(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(lVar2);
  return;
}



/* Entry: 10001c9a0; end: 10001c9ff; -[SCLazyLoadingProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_10002f51c);
  func_0x00010001fd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010001f5c0(param_3,param_2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 10001ca00; end: 10001ca4f; -[SCLazyLoadingProxy class] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ca00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_10002f51c);
  func_0x00010001fd60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_class();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar2);
  return;
}



/* Entry: 10001ca50; end: 10001ca9f; -[SCLazyLoadingProxy isKindOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10001ca50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_10002f51c);
  func_0x00010001fd60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_isKindOfClass();
  _objc_release(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10001caa0; end: 10001cb17; -[SCLazyLoadingProxy isMemberOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10001caa0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_10002f3b8;
  _objc_opt_class(PTR_PTR_10002f3b8);
  func_0x00010001f5e0(param_3,param_2,puVar1);
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_10002f51c);
    func_0x00010001fd60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010001f660();
    _objc_release(uVar3);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10001cb18; end: 10001cb67; -[SCLazyLoadingProxy respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10001cb18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_10002f51c);
  func_0x00010001fd60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10001cb68; end: 10001cbe7; -[SCLazyLoadingProxy conformsToProtocol:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001cb68(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_10002f51c);
  func_0x00010001fd60();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    FUN_10001d338(lVar2,param_3);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (undefined4)lVar3;
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10001cbe8; end: 10001ccd7; -[SCLazyLoadingProxy isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10001cbe8(ulong param_1,undefined8 param_2,ulong param_3)

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
    puVar1 = PTR_PTR_10002f3b8;
    _objc_opt_class(PTR_PTR_10002f3b8);
    uVar3 = param_3;
    func_0x00010001f660(param_3,param_2,puVar1);
    lVar4 = (long)_DAT_10002f51c;
    uVar2 = param_3;
    if ((int)uVar3 != 0) {
      do {
        param_3 = *(ulong *)(uVar2 + lVar4);
        func_0x00010001fd60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar1 = PTR_PTR_10002f3b8;
        _objc_opt_class(PTR_PTR_10002f3b8);
        uVar3 = param_3;
        func_0x00010001f660(param_3,param_2,puVar1);
        uVar2 = param_3;
      } while ((uVar3 & 1) != 0);
    }
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010001fd60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == param_3) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      func_0x00010001f5e0(uVar2,param_2,param_3);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10001ccd8; end: 10001cd1f; -[SCLazyLoadingProxy hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10001ccd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_10002f51c);
  func_0x00010001fd60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010001f340();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10001cd20; end: 10001cd33; -[SCLazyLoadingProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001cd20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + _DAT_10002f51c,0);
  return;
}



/* Entry: 10001cd34; end: 10001cd6f;  */

void FUN_10001cd34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMethodSignature_10002f3c0;
  func_0x00010001fca0(PTR__OBJC_CLASS___NSMethodSignature_10002f3c0,param_2,"@@:");
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000100031508;
  puRam0000000100031508 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar1);
  return;
}



/* Entry: 10001cd70; end: 10001cdf3; -[SCMainThreadLazy initWithInitializationBlock:] */

undefined1 * FUN_10001cd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10001cdf4; end: 10001ce73; -[SCMainThreadLazy initWithWrappedValue:] */

undefined1 * FUN_10001cdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
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



/* Entry: 10001ce74; end: 10001cf1b; -[SCMainThreadLazy target] */

undefined * FUN_10001ce74(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSThread_10002f3c8;
  func_0x00010001f640();
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
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar4);
    return puVar4;
  }
  puVar4 = PTR__OBJC_CLASS___NSException_10002f2d8;
  func_0x00010001f160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  puVar2 = PTR__OBJC_CLASS___NSThread_10002f3c8;
  func_0x00010001f640();
  if (((ulong)puVar2 & 1) != 0) {
    return (undefined *)(ulong)(*(long *)(puVar4 + 8) != 0);
  }
  puVar4 = PTR__OBJC_CLASS___NSException_10002f2d8;
  func_0x00010001f160(PTR__OBJC_CLASS___NSException_10002f2d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  _objc_storeStrong(puVar4 + 0x10,0);
  puVar4 = puVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(puVar4,0);
  return puVar4;
}



/* Entry: 10001cf1c; end: 10001cf87; -[SCMainThreadLazy isCreated] */

undefined * FUN_10001cf1c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_10002f3c8;
  func_0x00010001f640();
  if (((ulong)puVar1 & 1) != 0) {
    return (undefined *)(ulong)(*(long *)(param_1 + 8) != 0);
  }
  puVar1 = PTR__OBJC_CLASS___NSException_10002f2d8;
  func_0x00010001f160(PTR__OBJC_CLASS___NSException_10002f2d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  _objc_storeStrong(puVar1 + 0x10,0);
  puVar1 = puVar1 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(puVar1,0);
  return puVar1;
}



/* Entry: 10001cf88; end: 10001cfb7; -[SCMainThreadLazy .cxx_destruct] */

void FUN_10001cf88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 10001cfb8; end: 10001cff3; -[sc_lock_box init] */

void FUN_10001cfb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_10002f450;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10001cff4; end: 10001cffb; -[sc_lock_box lock] */

void FUN_10001cff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_lock_1000282b0)(param_1 + 8);
  return;
}



/* Entry: 10001cffc; end: 10001d003; -[sc_lock_box unlock] */

void FUN_10001cffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_1000282c0)(param_1 + 8);
  return;
}



/* Entry: 10001d004; end: 10001d00b; -[sc_lock_box tryLock] */

void FUN_10001d004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_trylock_1000282b8)(param_1 + 8);
  return;
}



/* Entry: 10001d00c; end: 10001d013; -[sc_lock_box assertOwner] */

void FUN_10001d00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_owner_1000282a8)(param_1 + 8);
  return;
}



/* Entry: 10001d014; end: 10001d01b; -[sc_lock_box assertNotOwner] */

void FUN_10001d014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_not_owner_1000282a0)(param_1 + 8);
  return;
}



/* Entry: 10001d01c; end: 10001d023; -[sc_lock_box _unsafe_private_reference] */

long FUN_10001d01c(long param_1)

{
  return param_1 + 8;
}



/* Entry: 10001d024; end: 10001d02f; -[SCAssertTracker lastAssertFuseKey] */

void FUN_10001d024(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_100028110)(param_1,param_2,8,1);
  return;
}



/* Entry: 10001d030; end: 10001d037; -[SCAssertTracker setLastAssertFuseKey:] */

void FUN_10001d030(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_100028198)();
  return;
}



/* Entry: 10001d038; end: 10001d043; -[SCAssertTracker .cxx_destruct] */

void FUN_10001d038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 10001d044; end: 10001d16f;  */

bool FUN_10001d044(ulong param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long alStack_50 [2];
  
  FUN_10001d25c();
  if ((param_1 & 1) == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_100029538);
    bVar2 = false;
  }
  else {
    if (lRam0000000100031518 != -1) {
      _dispatch_once(0x100031518,&PTR___NSConcreteGlobalBlock_100028ec8);
    }
    lVar1 = lRam0000000100031510;
    _objc_retain(lRam0000000100031510);
    lVar3 = lVar1;
    func_0x00010001f6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    bVar2 = lVar3 != 0;
    if (lVar3 == 0) {
      _NSLog(&PTR____CFConstantStringClassReference_100029558);
    }
    else {
      _clock_gettime(6,alStack_50);
      puVar4 = PTR__OBJC_CLASS___NSString_10002f320;
      func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320);
      _objc_retainAutoreleasedReturnValue();
      FUN_10001d19c((double)alStack_50[0]);
      FUN_10001d19c((double)alStack_50[0],lVar3);
      _NSLog(&PTR____CFConstantStringClassReference_100029578);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  return bVar2;
}



/* Entry: 10001d170; end: 10001d19b;  */

void FUN_10001d170(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_10002f3d0;
  _objc_alloc_init();
  uVar1 = puRam0000000100031510;
  puRam0000000100031510 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar1);
  return;
}



/* Entry: 10001d19c; end: 10001d25b;  */

void FUN_10001d19c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_10002f2f0;
  _objc_retain();
  func_0x00010001fcc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_10002f320;
  func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320,param_3,
                      &PTR____CFConstantStringClassReference_100029598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010001fb40(param_1,puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_10002f2f0;
  func_0x00010001fcc0(PTR__OBJC_CLASS___NSUserDefaults_10002f2f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fd40();
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar1);
  return;
}



/* Entry: 10001d25c; end: 10001d2f3;  */

ulong FUN_10001d25c(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [32];
  uint uStack_2a0;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100028200;
  uStack_2a0 = 0;
  uStack_38 = 0xe00000001;
  uStack_30 = 1;
  uStack_2c = param_1;
  _getpid();
  uStack_2c8 = 0x288;
  _sysctl(&uStack_38,4,auStack_2c0,&uStack_2c8,0,0);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_28) {
    return (ulong)(uStack_2a0 >> 0xb & 1);
  }
  ___stack_chk_fail();
  uVar1 = 0;
  _CFDictionaryCreateMutable(0,0x800,&UNK_100028ee8,PTR__kCFTypeDictionaryValueCallBacks_1000280a8);
  uRam00000001000315a0 = uVar1;
  uRam00000001000315a8 = 0;
  uRam00000001000315ac = 0;
  return uVar1;
}



/* Entry: 10001d2f4; end: 10001d337;  */

void FUN_10001d2f4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _CFDictionaryCreateMutable(0,0x800,&UNK_100028ee8,PTR__kCFTypeDictionaryValueCallBacks_1000280a8);
  uRam00000001000315a0 = uVar1;
  uRam00000001000315a8 = 0;
  uRam00000001000315ac = 0;
  return;
}



/* Entry: 10001d338; end: 10001d49b;  */

ulong FUN_10001d338(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x00010001f6a0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      _object_getClass(param_1);
      _os_unfair_lock_lock(0x1000315a8);
      lVar3 = lRam00000001000315a0;
      _CFDictionaryGetValue(lRam00000001000315a0,uVar2);
      if (lVar3 == 0) {
        _CFDictionaryCreateMutable();
        _CFDictionarySetValue(lRam00000001000315a0,uVar2,lVar3);
      }
      _os_unfair_lock_unlock(0x1000315a8);
      _os_unfair_lock_lock(0x1000315ac);
      lVar4 = lVar3;
      _CFDictionaryGetValue(lVar3,param_2);
      _os_unfair_lock_unlock(0x1000315ac);
      if (lVar4 == 0) {
        func_0x00010001edc0();
        _os_unfair_lock_lock(0x1000315ac);
        puVar1 = (undefined8 *)PTR__kCFBooleanTrue_1000280a0;
        if ((int)param_1 == 0) {
          puVar1 = (undefined8 *)PTR__kCFBooleanFalse_100028098;
        }
        _CFDictionarySetValue(lVar3,param_2,*puVar1);
        _os_unfair_lock_unlock(0x1000315ac);
      }
      else {
        param_1 = (ulong)(*(long *)PTR__kCFBooleanTrue_1000280a0 == lVar4);
      }
    }
    else {
      func_0x00010001edc0(param_1);
    }
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10001d49c; end: 10001d4f3;  */

void FUN_10001d49c(void)

{
  return;
}



/* Entry: 10001d4f4; end: 10001d613;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10001d4f4(int param_1,ulong param_2,double *param_3,double *param_4,undefined1 *param_5,
                   undefined1 *param_6)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  double *pdVar7;
  double *pdVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  double adStack_68 [2];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  double adStack_48 [2];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100028200;
  pdVar8 = param_3;
  _objc_retain(param_3);
  if (param_3 != (double *)0x0) {
    pdVar8 = adStack_48;
    param_4 = adStack_48 + 1;
    param_5 = auStack_38;
    param_6 = auStack_30;
    func_0x00010001f2a0();
    if (param_1 != 0) {
      pdVar8 = adStack_68;
      param_4 = adStack_68 + 1;
      param_5 = auStack_58;
      param_6 = auStack_50;
      pdVar7 = param_3;
      func_0x00010001f2a0();
      if ((int)pdVar7 != 0) {
        lVar9 = 0;
        do {
          lVar14 = -(ulong)((long)(*(double *)((long)adStack_48 + lVar9) * 255.0) ==
                           (long)(*(double *)((long)adStack_68 + lVar9) * 255.0));
          lVar15 = -(ulong)((long)(*(double *)(auStack_38 + lVar9 + -8) * 255.0) ==
                           (long)(*(double *)(auStack_58 + lVar9 + -8) * 255.0));
          uVar16 = CONCAT44(CONCAT13(~(byte)((ulong)lVar15 >> 0x18),
                                     CONCAT12(~(byte)((ulong)lVar15 >> 0x10),
                                              CONCAT11(~(byte)((ulong)lVar15 >> 8),~(byte)lVar15))),
                            CONCAT13(~(byte)((ulong)lVar14 >> 0x18),
                                     CONCAT12(~(byte)((ulong)lVar14 >> 0x10),
                                              CONCAT11(~(byte)((ulong)lVar14 >> 8),~(byte)lVar14))))
          ;
          uVar17 = NEON_umaxp(uVar16,uVar16,4);
          if ((uVar17 & 1) != 0) break;
          bVar4 = lVar9 != 0x10;
          lVar9 = lVar9 + 0x10;
        } while (bVar4);
        uVar17 = (ulong)((byte)((~(byte)lVar14 & 1) + (~(byte)lVar15 & 2)) == '\0');
        goto LAB_10001d5dc;
      }
    }
  }
  uVar17 = 0;
LAB_10001d5dc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_28) {
    return uVar17;
  }
  ___stack_chk_fail();
  uVar17 = 0;
  bVar4 = false;
  lVar9 = 0xc0;
  if ((*(uint *)(param_3 + 4) & 0x1000000) != 0) {
    lVar9 = 0xd0;
  }
  puVar2 = (ulong *)((long)param_3 + ((ulong)(*(uint *)(param_3 + 4) >> 0x17) & 8) + lVar9);
  plVar1 = (long *)(param_2 + 0x50);
  uVar11 = *puVar2;
LAB_10001d698:
  uVar13 = uVar11 & 3;
  if (uVar13 == 0) {
    func_0x00010001e150(param_2);
  }
  else if (uVar13 != 3) {
    FUN_10001e108(param_3);
    if (!bVar4) {
      return uVar13;
    }
    do {
      lVar9 = *plVar1;
      uVar17 = *(ulong *)(param_2 + 0x58);
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9;
        *(ulong *)(param_2 + 0x58) = uVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar10 = (uint)uVar17;
    while ((uVar10 >> 9 & 1) == 0) {
      uVar11 = uVar17 | 0x800;
      if (((uint)uVar17 >> 10 & 1) != 0) {
        uVar11 = uVar17 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar17;
      }
      do {
        while( true ) {
          lVar14 = *plVar1;
          uVar12 = *(ulong *)(param_2 + 0x58);
          cVar5 = lVar14 != lVar9;
          if (uVar12 != uVar17) {
            cVar5 = cVar5 + '\x01';
          }
          if (cVar5 == '\0') break;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar14;
            *(ulong *)(param_2 + 0x58) = uVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_10001d7f4;
        }
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10001d7f4:
      if (lVar14 == lVar9 && uVar12 == uVar17) goto LAB_10001d818;
      lVar9 = lVar14;
      uVar17 = uVar12;
      uVar10 = (uint)uVar12;
    }
    func_0x00010001da78(param_2);
LAB_10001d818:
    func_0x00010001dee0(param_2);
    func_0x00010001e25c(param_2 + 0x80);
    return uVar13;
  }
  if (!bVar4) {
    pdVar8[3] = 0.0;
    pdVar8[4] = (double)param_6;
    *pdVar8 = (double)param_5;
    pdVar8[1] = (double)param_4;
    do {
      lVar9 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar10 = (uint)uVar13;
    while ((uVar10 >> 9 & 1) == 0) {
      if (((uint)uVar13 >> 10 & 1) == 0) {
        uVar12 = uVar13 & 0xfffffffffffff5ff;
      }
      else {
        uVar12 = uVar13 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar14 = *plVar1;
          uVar3 = *(ulong *)(param_2 + 0x58);
          cVar5 = lVar14 != lVar9;
          if (uVar3 != uVar13) {
            cVar5 = cVar5 + '\x01';
          }
          if (cVar5 == '\0') break;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar14;
            *(ulong *)(param_2 + 0x58) = uVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_10001d71c;
        }
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          *(ulong *)(param_2 + 0x58) = uVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10001d71c:
      if (lVar14 == lVar9 && uVar3 == uVar13) goto LAB_10001d740;
      lVar9 = lVar14;
      uVar13 = uVar3;
      uVar10 = (uint)uVar3;
    }
    func_0x00010001dbd8(param_2);
LAB_10001d740:
    func_0x00010001e2a4(param_2 + 0x80);
    func_0x00010001df0c(param_2);
  }
  do {
    uVar13 = *(ulong *)(param_2 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar13 = uVar13 & 0xff;
  if (uVar17 < uVar13) {
    FUN_10001dd38(param_3,uVar13);
    uVar17 = uVar13;
  }
  *(ulong *)(param_2 + 0x10) = uVar11 & 0xfffffffffffffffc;
  uVar13 = *puVar2;
  if (uVar13 == uVar11) {
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = param_2;
      cVar5 = ExclusiveMonitorsStatus();
    }
    bVar6 = cVar5 == '\0';
  }
  else {
    bVar6 = false;
    ClearExclusiveLocal();
  }
  bVar4 = true;
  uVar11 = uVar13;
  if (bVar6) {
    func_0x00010001deac();
    return 0;
  }
  goto LAB_10001d698;
}



/* Entry: 10001d614; end: 10001d857;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10001d614(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_10001d698:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x00010001e150(param_2);
  }
  else if (uVar12 != 3) {
    FUN_10001e108(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10001d7f4;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10001d7f4:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_10001d818;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x00010001da78(param_2);
LAB_10001d818:
    func_0x00010001dee0(param_2);
    func_0x00010001e25c(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10001d71c;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10001d71c:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_10001d740;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x00010001dbd8(param_2);
LAB_10001d740:
    func_0x00010001e2a4(param_2 + 0x80);
    func_0x00010001df0c(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_10001dd38(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x00010001deac();
    return 0;
  }
  goto LAB_10001d698;
}



/* Entry: 10001d858; end: 10001d93f;  */

void FUN_10001d858(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010001dea4();
  *(code **)(lVar1 + 0x38) = FUN_10001d940;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10001d614(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010001d92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_10001e398(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x00010001d944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10001d940; end: 10001d947;  */

void FUN_10001d940(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010001d944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10001d948; end: 10001da57;  */

void FUN_10001d948(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010001dea4();
  *(code **)(lVar1 + 0x38) = FUN_10001da58;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10001d614(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010001da40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10001da58; end: 10001da77;  */

void FUN_10001da58(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010001da64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 10001da78; end: 10001dd37;  */

/* WARNING: Possible PIC construction at 0x00010001db8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010001db90) */
/* WARNING: Removing unreachable block (ram,0x00010001dbb0) */
/* WARNING: Removing unreachable block (ram,0x00010001db9c) */
/* WARNING: Removing unreachable block (ram,0x00010001dbb4) */

void FUN_10001da78(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar2 = *plVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar7 = (undefined8 *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (lStack_60 = lVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_10001ddb8(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x00010001e228(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_10001e234(puVar7 + 1);
    }
    else {
      puVar7[3] = lVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        lVar2 = *plVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = lVar2 != lStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_10001db3c;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10001db3c:
    if (lVar2 == lStack_60 && uVar3 == uStack_58) {
      uVar6 = uStack_58 | 0x800;
      uVar3 = uVar6;
      if (((uint)uStack_58 >> 10 & 1) != 0) {
        uVar6 = uStack_58 & 0xfffffffffffffbff | 0x800;
        *(char *)(param_1 + 0x21) = (char)uStack_58;
        uVar3 = uVar6;
      }
      do {
        uStack_58 = uVar3;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_10001e234(0x100031530);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 10001dd38; end: 10001ddb7;  */

void FUN_10001dd38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam0000000100031528 != -1) {
    FUN_10001de8c();
  }
  if (pcRam0000000100031520 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001dd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100031520)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Entry: 10001ddb8; end: 10001de8b;  */

/* WARNING: Possible PIC construction at 0x00010001de08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010001de18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010001de4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010001de50) */
/* WARNING: Removing unreachable block (ram,0x00010001de54) */
/* WARNING: Removing unreachable block (ram,0x00010001de5c) */
/* WARNING: Removing unreachable block (ram,0x00010001de64) */
/* WARNING: Removing unreachable block (ram,0x00010001de0c) */
/* WARNING: Removing unreachable block (ram,0x00010001de1c) */
/* WARNING: Removing unreachable block (ram,0x00010001de44) */
/* WARNING: Removing unreachable block (ram,0x00010001de30) */
/* WARNING: Removing unreachable block (ram,0x00010001de48) */

void FUN_10001ddb8(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = (long *)(param_1 + 0x50);
  FUN_10001e234(0x100031530);
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar3;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_2 = lVar3;
  param_2[1] = lVar4;
  if ((((uint)lVar4 >> 9 & 1) != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
    unaff_x30 = 0x10001de0c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x100031530);
  return;
}



/* Entry: 10001de8c; end: 10001deab;  */

void FUN_10001de8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100028230)(0x100031528,0x100031520,0x10001dd88);
  return;
}



/* Entry: 10001deac; end: 10001dfbb;  */

undefined8 FUN_10001deac(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 10001dfbc; end: 10001dff3;  */

void FUN_10001dfbc(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam0000000100031540 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 10001dff4; end: 10001e0e7;  */

void FUN_10001dff4(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x100031538,FUN_10001dfbc,0);
  if ((bRam0000000100031540 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam0000000100031550 != -1) {
      func_0x00010001e104();
    }
    iVar1 = (int)uVar2;
    if ((pcRam0000000100031548 == (code *)0x0) || ((*pcRam0000000100031548)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Entry: 10001e0e8; end: 10001e107;  */

void FUN_10001e0e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100028230)(0x100031550,0x100031548,0x10001e0b8);
  return;
}



/* Entry: 10001e108; end: 10001e1f7;  */

void FUN_10001e108(undefined8 param_1)

{
  if (lRam0000000100031560 != -1) {
    FUN_10001e1f8();
  }
  if (pcRam0000000100031558 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001e124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100031558)(param_1);
    return;
  }
  return;
}



/* Entry: 10001e1f8; end: 10001e233;  */

void FUN_10001e1f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100028230)(0x100031560,0x100031558,0x10001e198);
  return;
}



/* Entry: 10001e234; end: 10001e25b;  */

void FUN_10001e234(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 10001e25c; end: 10001e34b;  */

void FUN_10001e25c(undefined8 param_1)

{
  if (lRam0000000100031580 != -1) {
    FUN_10001e34c();
  }
  if (pcRam0000000100031578 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100031578)(param_1);
    return;
  }
  return;
}



/* Entry: 10001e34c; end: 10001e397;  */

void FUN_10001e34c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100028230)(0x100031580,0x100031578,0x10001e2ec);
  return;
}



/* Entry: 10001e398; end: 10001e3a3;  */

void FUN_10001e398(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010001e3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF_1000284c0)();
  return;
}


