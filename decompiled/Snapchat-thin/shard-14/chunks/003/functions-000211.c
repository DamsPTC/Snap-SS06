/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0e3758; end: 10b0e37cb; -[SCGenericLensMetadataStore .cxx_destruct] */

void FUN_10b0e3758(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e37cc; end: 10b0e38cb; -[SCLensRequestSettings initWithCoder:] */

undefined1 * FUN_10b0e37cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705af8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e38cc; end: 10b0e39b7; -[SCLensRequestSettings initWithPriority:fetchPolicy:trackingId:trackingType:trackingMediaType:] */

undefined1 *
FUN_10b0e38cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112705af8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e39b8; end: 10b0e39db; -[SCLensRequestSettings copyWithZone:] */

undefined8 FUN_10b0e39b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e39dc; end: 10b0e3a77; -[SCLensRequestSettings encodeWithCoder:] */

void FUN_10b0e39dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f5e578);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f5e598);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e858d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f5e5b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f5e5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e3a78; end: 10b0e3aff; -[SCLensRequestSettings hash] */

undefined8 * FUN_10b0e3a78(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0e3bb8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0e3bc4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
          if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b0e3bc4;
          }
          goto LAB_10b0e3bb8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0e3bc4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0e3b00; end: 10b0e3bdf; -[SCLensRequestSettings isEqual:] */

long FUN_10b0e3b00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e3bb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e3bc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b0e3bc4;
          }
          goto LAB_10b0e3bb8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e3bc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e3be0; end: 10b0e3be7; -[SCLensRequestSettings priority] */

undefined8 FUN_10b0e3be0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e3be8; end: 10b0e3bef; -[SCLensRequestSettings fetchPolicy] */

undefined8 FUN_10b0e3be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e3bf0; end: 10b0e3bf7; -[SCLensRequestSettings trackingId] */

undefined8 FUN_10b0e3bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e3bf8; end: 10b0e3bff; -[SCLensRequestSettings trackingType] */

undefined8 FUN_10b0e3bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e3c00; end: 10b0e3c07; -[SCLensRequestSettings trackingMediaType] */

undefined8 FUN_10b0e3c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0e3c08; end: 10b0e3c43; -[SCLensRequestSettings .cxx_destruct] */

void FUN_10b0e3c08(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b0e3c44; end: 10b0e3caf; +[SCLensFetchStatus errorWithError:] */

void FUN_10b0e3c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dfac0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0e3cb0; end: 10b0e3cfb; +[SCLensFetchStatus fetched] */

void FUN_10b0e3cb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfac0;
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



/* Entry: 10b0e3cfc; end: 10b0e3d57; +[SCLensFetchStatus fetchingWithProgress:] */

void FUN_10b0e3cfc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfac0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0e3d58; end: 10b0e3d9f; +[SCLensFetchStatus notStarted] */

void FUN_10b0e3d58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfac0;
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



/* Entry: 10b0e3da0; end: 10b0e3dc3; -[SCLensFetchStatus copyWithZone:] */

undefined8 FUN_10b0e3da0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e3dc4; end: 10b0e3e47; -[SCLensFetchStatus hash] */

void FUN_10b0e3dc4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_28 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112705b00;
  puStack_60 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e3e48; end: 10b0e3e8b; -[SCLensFetchStatus internalInit] */

void FUN_10b0e3e48(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112705b00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e3e8c; end: 10b0e3f5f; -[SCLensFetchStatus isEqual:] */

long FUN_10b0e3e8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e3f38:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e3f44;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b0e3f44;
        }
        goto LAB_10b0e3f38;
      }
    }
    lVar4 = 0;
  }
LAB_10b0e3f44:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0e3f60; end: 10b0e404f; -[SCLensFetchStatus matchNotStarted:fetching:fetched:error:] */

void FUN_10b0e3f60(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 != 0) {
      if ((lVar1 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))(*(undefined8 *)(param_1 + 0x10),param_4);
      }
      goto LAB_10b0e4020;
    }
    if (param_3 == 0) goto LAB_10b0e4020;
    pcVar2 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  else {
    if (lVar1 != 2) {
      if ((lVar1 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_10b0e4020;
    }
    if (param_5 == 0) goto LAB_10b0e4020;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  (*pcVar2)(lVar1);
LAB_10b0e4020:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e4050; end: 10b0e405b; -[SCLensFetchStatus .cxx_destruct] */

void FUN_10b0e4050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b0e405c; end: 10b0e40f3; -[SCLensComponentFetchStatus initWithStatusType:currentProgress:fetchError:] */

undefined1 *
FUN_10b0e405c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112705b08;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e40f4; end: 10b0e4117; -[SCLensComponentFetchStatus copyWithZone:] */

undefined8 FUN_10b0e40f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e4118; end: 10b0e419b; -[SCLensComponentFetchStatus hash] */

undefined8 * FUN_10b0e4118(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0e4248:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0e4254;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b0e4254;
        }
        goto LAB_10b0e4248;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0e4254:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0e419c; end: 10b0e426f; -[SCLensComponentFetchStatus isEqual:] */

long FUN_10b0e419c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e4248:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e4254;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b0e4254;
        }
        goto LAB_10b0e4248;
      }
    }
    lVar4 = 0;
  }
LAB_10b0e4254:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0e4270; end: 10b0e4277; -[SCLensComponentFetchStatus statusType] */

undefined8 FUN_10b0e4270(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e4278; end: 10b0e427f; -[SCLensComponentFetchStatus currentProgress] */

undefined8 FUN_10b0e4278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e4280; end: 10b0e4287; -[SCLensComponentFetchStatus fetchError] */

undefined8 FUN_10b0e4280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e4288; end: 10b0e4293; -[SCLensComponentFetchStatus .cxx_destruct] */

void FUN_10b0e4288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b0e4294; end: 10b0e433f; -[SCLensDownloadOperationMetadata initWithDownloadOperation:requestSettings:] */

undefined1 *
FUN_10b0e4294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705b10;
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



/* Entry: 10b0e4340; end: 10b0e4363; -[SCLensDownloadOperationMetadata copyWithZone:] */

undefined8 FUN_10b0e4340(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e4364; end: 10b0e43d7; -[SCLensDownloadOperationMetadata hash] */

undefined8 * FUN_10b0e4364(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b0e4458:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0e4464;
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
          goto LAB_10b0e4464;
        }
        goto LAB_10b0e4458;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0e4464:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0e43d8; end: 10b0e447f; -[SCLensDownloadOperationMetadata isEqual:] */

long FUN_10b0e43d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e4458:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e4464;
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
          goto LAB_10b0e4464;
        }
        goto LAB_10b0e4458;
      }
    }
    lVar3 = 0;
  }
LAB_10b0e4464:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e4480; end: 10b0e4487; -[SCLensDownloadOperationMetadata downloadOperation] */

undefined8 FUN_10b0e4480(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e4488; end: 10b0e448f; -[SCLensDownloadOperationMetadata requestSettings] */

undefined8 FUN_10b0e4488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e4490; end: 10b0e44bf; -[SCLensDownloadOperationMetadata .cxx_destruct] */

void FUN_10b0e4490(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e44c0; end: 10b0e44eb; +[SCGrapheneLensContentDeliveryMetric retrieveLensContentManager] */

void FUN_10b0e44c0(void)

{
  _objc_alloc(PTR_PTR_1126dfae8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e44ec; end: 10b0e4517; +[SCGrapheneLensContentDeliveryMetric retrieveLensBitmojiCm] */

void FUN_10b0e44ec(void)

{
  _objc_alloc(PTR_PTR_1126dfae8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e4518; end: 10b0e45b7; -[SCGrapheneLensContentDeliveryMetric description] */

void FUN_10b0e4518(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5e5f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f5e5f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112705b18;
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



/* Entry: 10b0e45b8; end: 10b0e45bf; -[SCLensExternalDataFetchingPluginScope plugInRegistry] */

undefined8 FUN_10b0e45b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e45c0; end: 10b0e45cb; -[SCLensExternalDataFetchingPluginScope .cxx_destruct] */

void FUN_10b0e45c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e45cc; end: 10b0e463f; -[SCLensCreatorBlocklistServices initWithLensCreatorBlocklistManager:] */

undefined1 * FUN_10b0e45cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705b28;
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



/* Entry: 10b0e4640; end: 10b0e4647; -[SCLensCreatorBlocklistServices lensCreatorBlocklistManager] */

undefined8 FUN_10b0e4640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e4648; end: 10b0e4677; -[SCLensCreatorBlocklistServices setLensCreatorBlocklistManager:] */

void FUN_10b0e4648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0e4678; end: 10b0e4683; -[SCLensCreatorBlocklistServices .cxx_destruct] */

void FUN_10b0e4678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e4684; end: 10b0e46b3; -[SCLensCacheServices .cxx_destruct] */

void FUN_10b0e4684(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e46b4; end: 10b0e46bb; -[SCLensDownloadTrackingServices downloadTracker] */

undefined8 FUN_10b0e46b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e46bc; end: 10b0e46c7; -[SCLensDownloadTrackingServices .cxx_destruct] */

void FUN_10b0e46bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e46c8; end: 10b0e46f7; -[SCLensPreferencesStorageServices .cxx_destruct] */

void FUN_10b0e46c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e46f8; end: 10b0e47a7; -[SCLensPersistentStoreEntry initWithCoder:] */

undefined1 * FUN_10b0e46f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705b48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e47a8; end: 10b0e4853; -[SCLensPersistentStoreEntry initWithSerializedStoreData:creationDate:] */

undefined1 *
FUN_10b0e47a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705b48;
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



/* Entry: 10b0e4854; end: 10b0e4877; -[SCLensPersistentStoreEntry copyWithZone:] */

undefined8 FUN_10b0e4854(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e4878; end: 10b0e48d7; -[SCLensPersistentStoreEntry encodeWithCoder:] */

void FUN_10b0e4878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f5e658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f55338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e48d8; end: 10b0e494b; -[SCLensPersistentStoreEntry hash] */

undefined8 * FUN_10b0e48d8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b0e49cc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0e49d8;
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
          goto LAB_10b0e49d8;
        }
        goto LAB_10b0e49cc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0e49d8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0e494c; end: 10b0e49f3; -[SCLensPersistentStoreEntry isEqual:] */

long FUN_10b0e494c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e49cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e49d8;
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
          goto LAB_10b0e49d8;
        }
        goto LAB_10b0e49cc;
      }
    }
    lVar3 = 0;
  }
LAB_10b0e49d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e49f4; end: 10b0e49fb; -[SCLensPersistentStoreEntry serializedStoreData] */

undefined8 FUN_10b0e49f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e49fc; end: 10b0e4a03; -[SCLensPersistentStoreEntry creationDate] */

undefined8 FUN_10b0e49fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e4a04; end: 10b0e4a77; -[SCLensPersistentStoreEntry .cxx_destruct] */

void FUN_10b0e4a04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e4a78; end: 10b0e4c27;  */

void FUN_10b0e4a78(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf529e0();
  if (uVar5 < 3) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = param_1;
    func_0x00010bf529e0();
    if (uVar5 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b5938;
    _objc_alloc(PTR_PTR_1126b5938);
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050fc0(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0e4c28; end: 10b0e4d7f;  */

void FUN_10b0e4c28(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_15c [260];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  lVar6 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_1 == 0) || (lVar5 = param_1, func_0x00010c08fa60(), lVar5 == 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    if (param_4 == 0) {
      puVar7 = &UNK_10f72ae45;
    }
    else {
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      puVar7 = &UNK_10f72ae39;
    }
    _snprintf(auStack_15c,0x103,puVar7);
    puVar1 = auStack_15c;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(lVar6);
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf529e0();
    if (puVar8 < (undefined1 *)0x3) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar1;
      func_0x00010bf529e0();
      if (puVar8 < (undefined1 *)0x4) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        puVar8 = puVar1;
        func_0x00010c0dfd40(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = puVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(puVar2);
      puVar7 = PTR_PTR_1126b5938;
      _objc_alloc(PTR_PTR_1126b5938);
      puVar2 = puVar1;
      func_0x00010c0dfd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0dfd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c050fc0(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar8);
    }
    _objc_release(puVar1);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b0e4d80; end: 10b0e4d8f; +[SCBitmojiImageParams fromEncoded:customojiParams:] */

void FUN_10b0e4d80(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (uVar5 < 3) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf529e0();
    if (uVar5 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b5938;
    _objc_alloc(PTR_PTR_1126b5938);
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050fc0(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0e4d90; end: 10b0e4d9f; +[SCBitmojiImageParams fromEncoded:scale:customojiParams:] */

void FUN_10b0e4d90(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_5);
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (uVar5 < 3) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf529e0();
    if (uVar5 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b5938;
    _objc_alloc(PTR_PTR_1126b5938);
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c050fc0(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0e4da0; end: 10b0e4e9b; -[SCBitmojiImageParams encodedBitmoji] */

void FUN_10b0e4da0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c130220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = -1;
  }
  else {
    lVar2 = param_1;
    func_0x00010c130220(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c067ec0();
    lVar5 = (long)(int)lVar5;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26afc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c06c000(param_1);
  lVar3 = param_1;
  func_0x00010bf12ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb7be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  FUN_10b0e4c28(lVar1,lVar2,lVar3,param_1,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b0e4e9c; end: 10b0e4f43;  */

void FUN_10b0e4e9c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  uVar3 = param_1;
  if (uVar1 < 0x15) {
    uVar1 = param_1;
    func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 == 0) {
      _objc_retain(param_1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b0e4f44; end: 10b0e508f; -[SCBitmojiImageParams fullStickerId] */

void FUN_10b0e4f44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010bf12ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    FUN_10b0e4e9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bfb7be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    FUN_10b0e4e9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar5 = -1;
    }
    else {
      lVar3 = param_1;
      func_0x00010c130220(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c067ec0();
      lVar5 = (long)(int)lVar5;
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
    lVar3 = param_1;
    func_0x00010c26afc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c000(param_1);
    lVar4 = lVar3;
    FUN_10b0e4c28(lVar3,param_1,lVar1,lVar2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b0e5090; end: 10b0e50d7; -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:sceneID:format:scale:feature:renderStyle:] */

void FUN_10b0e5090(void)

{
  func_0x00010bff6020(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  return;
}



/* Entry: 10b0e50d8; end: 10b0e50ef; -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:sceneID:format:scale:feature:] */

void FUN_10b0e50d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAvatarID_friendAvatarID__1125db1c8,param_3,0,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 10b0e50f0; end: 10b0e5123; -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:friendAvatarID:sceneID:format:scale:feature:] */

void FUN_10b0e50f0(void)

{
  func_0x00010bff6020(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  return;
}



/* Entry: 10b0e5124; end: 10b0e5183;  */

undefined8 FUN_10b0e5124(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010c08fa60(), lVar2 == 0)) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar2 = param_1;
    func_0x00010c067ec0();
    uVar1 = 3;
    if ((int)lVar2 != 3) {
      uVar1 = 0xffffffffffffffff;
    }
    uVar3 = 0;
    if ((int)lVar2 != 0) {
      uVar3 = uVar1;
    }
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10b0e5184; end: 10b0e518b; -[SCBitmojiFlatlandBatchContentServices batchedSceneFetcher] */

undefined8 FUN_10b0e5184(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e518c; end: 10b0e5193; -[SCBitmojiFlatlandBatchContentServices clientRenderer] */

undefined8 FUN_10b0e518c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e5194; end: 10b0e51db; -[SCBitmojiFlatlandBatchContentServices .cxx_destruct] */

void FUN_10b0e5194(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e51dc; end: 10b0e51e3; -[SCBitmojiFlatlandContentServices combinedContentFetcher] */

undefined8 FUN_10b0e51dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e51e4; end: 10b0e51eb; -[SCBitmojiFlatlandContentServices serverBatchSceneFetcher] */

undefined8 FUN_10b0e51e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e51ec; end: 10b0e523f; -[SCBitmojiFlatlandContentServices .cxx_destruct] */

void FUN_10b0e51ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e5240; end: 10b0e5647; +[SCBitmojiFlatlandURLConstructor constructBackgroundURLFromRequest:] */

void FUN_10b0e5240(undefined **param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10b0e5648;
  uStack_50 = 0x10b0e5658;
  uStack_48 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  lVar1 = param_3;
  func_0x00010bf13c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be440();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c23d0a0();
  if (lVar1 == 2) {
    if (*(char *)(puStack_88 + 3) == '\0') {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde6a80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
    }
    else {
      ppuVar5 = (undefined **)puStack_68[5];
      _objc_retain(ppuVar5);
    }
    ppuVar2 = ppuVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar3;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar3;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c1f6900();
    func_0x00010c1a9200(ppuVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820(ppuVar3);
    _objc_release(puVar4);
    param_1 = ppuVar3;
    func_0x00010bdc2b80(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    if (*(char *)(puStack_88 + 3) != '\0') {
      param_1 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b0e55cc;
    }
    lVar1 = param_3;
    func_0x00010c23d0a0();
    ppuVar5 = &PTR____CFConstantStringClassReference_110db1158;
    if (lVar1 != 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db2d38;
    }
    _objc_retain(ppuVar5);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde6a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(ppuVar5);
LAB_10b0e55cc:
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0e5648; end: 10b0e565f;  */

void FUN_10b0e5648(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b0e5660; end: 10b0e5697;  */

void FUN_10b0e5660(long param_1,undefined8 param_2)

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



/* Entry: 10b0e5698; end: 10b0e56fb;  */

void FUN_10b0e5698(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0e56fc; end: 10b0e5a37; +[SCBitmojiFlatlandURLConstructor constructUniversalAvatarURLFromRequest:type:imageHost:cacheVersion:engineType:] */

void FUN_10b0e56fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb7bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb5800(param_3);
  uVar3 = param_1;
  func_0x00010be18b40(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = param_3;
  func_0x00010c14fa60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf12e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110f5e8d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010bfb7bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110f5e8b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 2) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110df9398;
    ppuVar12 = &PTR____CFConstantStringClassReference_110dad378;
LAB_10b0e588c:
    puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,ppuVar11,ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7,param_2,puVar8);
    _objc_release(puVar8);
  }
  else if (param_4 == 1) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110de1b98;
    ppuVar12 = &PTR____CFConstantStringClassReference_110dbfb38;
    goto LAB_10b0e588c;
  }
  puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  if (0 < (int)param_7) {
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d4c0(puVar8,param_2,&PTR____CFConstantStringClassReference_110f5e858,puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  lVar2 = param_3;
  func_0x00010c14e120();
  if (lVar2 == 3) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110db1158;
  }
  else {
    if (lVar2 != 2) goto LAB_10b0e5988;
    ppuVar11 = &PTR____CFConstantStringClassReference_110db04d8;
  }
  puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1058,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7,param_2,puVar8);
  _objc_release(puVar8);
LAB_10b0e5988:
  puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                      &PTR____CFConstantStringClassReference_110db10b8,
                      &PTR____CFConstantStringClassReference_110db04d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010bde6aa0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2ec18,puVar6,uVar3,
                      puVar7,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0e5a38; end: 10b0e5a43; +[SCBitmojiFlatlandURLConstructor _constructFlatlandURLWithPathPrefix:resourcePath:pathExtension:imageHost:] */

void FUN_10b0e5a38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde6ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constructFlatlandURLWithPathPre_112557448);
  return;
}



/* Entry: 10b0e5a44; end: 10b0e5bab; +[SCBitmojiFlatlandURLConstructor _constructFlatlandURLWithPathPrefix:resourcePath:pathExtension:queryItems:imageHost:] */

void FUN_10b0e5a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f5e7f8;
  if (param_7 != 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f5e818;
  }
  func_0x00010c1f6900();
  func_0x00010c1a9200(puVar1,param_2,ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f5e838;
  func_0x00010c25ce00(&PTR____CFConstantStringClassReference_110f5e838,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar3 = ppuVar2;
  func_0x00010c25ce00(ppuVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  ppuVar4 = ppuVar3;
  func_0x00010c25ce20(ppuVar3,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1d9820(puVar1,param_2,ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  lVar5 = param_6;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010c1e6460(puVar1,param_2,param_6);
  }
  puVar6 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b0e5bac; end: 10b0e5bc7; +[SCBitmojiFlatlandURLConstructor _formatStringForFormat:] */

undefined ** FUN_10b0e5bac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de1538;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc1398;
  }
  return ppuVar1;
}



/* Entry: 10b0e5bc8; end: 10b0e5c57; -[SCBitmojiFlatlandBackgroundFetchRequest initWithBackground:size:feature:] */

undefined1 *
FUN_10b0e5bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705b60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e5c58; end: 10b0e5c7b; -[SCBitmojiFlatlandBackgroundFetchRequest copyWithZone:] */

undefined8 FUN_10b0e5c58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e5c7c; end: 10b0e5cef; -[SCBitmojiFlatlandBackgroundFetchRequest hash] */

undefined8 * FUN_10b0e5c7c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  lStack_30 = (long)*(int *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0e5d84;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b0e5d84;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b0e5d84;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b0e5d84:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b0e5cf0; end: 10b0e5d9f; -[SCBitmojiFlatlandBackgroundFetchRequest isEqual:] */

long FUN_10b0e5cf0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e5d84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_10b0e5d84;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b0e5d84;
    }
  }
  lVar3 = 1;
LAB_10b0e5d84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e5da0; end: 10b0e5da7; -[SCBitmojiFlatlandBackgroundFetchRequest background] */

undefined8 FUN_10b0e5da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e5da8; end: 10b0e5daf; -[SCBitmojiFlatlandBackgroundFetchRequest size] */

undefined8 FUN_10b0e5da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e5db0; end: 10b0e5db7; -[SCBitmojiFlatlandBackgroundFetchRequest feature] */

undefined4 FUN_10b0e5db0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b0e5db8; end: 10b0e5dc3; -[SCBitmojiFlatlandBackgroundFetchRequest .cxx_destruct] */

void FUN_10b0e5db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e5dc4; end: 10b0e5eab; -[SCBitmojiFlatlandBackgroundListResponse initWithVersion:identifiers:latestIdentifiers:plusExclusiveIds:] */

undefined1 *
FUN_10b0e5dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705b68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e5eac; end: 10b0e5ecf; -[SCBitmojiFlatlandBackgroundListResponse copyWithZone:] */

undefined8 FUN_10b0e5eac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e5ed0; end: 10b0e5f5b; -[SCBitmojiFlatlandBackgroundListResponse hash] */

long * FUN_10b0e5ed0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  plVar3 = &lStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10b0e6004:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b0e6010;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && (plVar3[1] == param_3[1])) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[4];
          if (plVar6 != (long *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b0e6010;
          }
          goto LAB_10b0e6004;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10b0e6010:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10b0e5f5c; end: 10b0e602b; -[SCBitmojiFlatlandBackgroundListResponse isEqual:] */

long FUN_10b0e5f5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e6004:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e6010;
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
            goto LAB_10b0e6010;
          }
          goto LAB_10b0e6004;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e6010:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e602c; end: 10b0e6033; -[SCBitmojiFlatlandBackgroundListResponse version] */

undefined8 FUN_10b0e602c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e6034; end: 10b0e603b; -[SCBitmojiFlatlandBackgroundListResponse identifiers] */

undefined8 FUN_10b0e6034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e603c; end: 10b0e6043; -[SCBitmojiFlatlandBackgroundListResponse latestIdentifiers] */

undefined8 FUN_10b0e603c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


