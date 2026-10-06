/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aec705c; end: 10aec70db; -[SCMixerUpdateNamespaceData hash] */

undefined8 * FUN_10aec705c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec716c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec7178;
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
          goto LAB_10aec7178;
        }
        goto LAB_10aec716c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec7178:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec70dc; end: 10aec7193; -[SCMixerUpdateNamespaceData isEqual:] */

long FUN_10aec70dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec716c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec7178;
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
          goto LAB_10aec7178;
        }
        goto LAB_10aec716c;
      }
    }
    lVar3 = 0;
  }
LAB_10aec7178:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec7194; end: 10aec725f; +[SCMixerFetchEvent failureWithRequestParams:error:clientRequestId:] */

void FUN_10aec7194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126de518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aec7260; end: 10aec7313; +[SCMixerFetchEvent requestWithRequestedNamespaces:requestParams:downloadBandwidthEstimation:downloadBandwidthClass:reachability:] */

void FUN_10aec7260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126de518;
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
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined4 *)(puVar2 + 0x28) = param_6;
  *(undefined4 *)(puVar2 + 0x2c) = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aec7314; end: 10aec744f; +[SCMixerFetchEvent responseWithRequestedNamespaces:requestParams:parsedResponse:latencySec:clientRequestId:feedData:] */

void FUN_10aec7314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126de518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x48) = param_1;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_8;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aec7450; end: 10aec7473; -[SCMixerFetchEvent copyWithZone:] */

undefined8 FUN_10aec7450(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec7474; end: 10aec7587; -[SCMixerFetchEvent hash] */

void FUN_10aec7474(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  lStack_80 = (long)(int)*(undefined8 *)(param_1 + 0x28);
  lStack_78 = (long)(int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_c8 = PTR_PTR_112701828;
  puStack_d0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec7588; end: 10aec75cb; -[SCMixerFetchEvent internalInit] */

void FUN_10aec7588(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec75cc; end: 10aec77a7; -[SCMixerFetchEvent isEqual:] */

long FUN_10aec75cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec7780:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec778c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(int *)(param_1 + 0x28) == *(int *)(param_3 + 0x28))) &&
        (*(int *)(param_1 + 0x2c) == *(int *)(param_3 + 0x2c))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
      dVar5 = ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x68), lVar4 == *(long *)(param_3 + 0x68) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x70);
        if (lVar4 != *(long *)(param_3 + 0x70)) {
          func_0x00010c071ae0();
          goto LAB_10aec778c;
        }
        goto LAB_10aec7780;
      }
    }
    lVar4 = 0;
  }
LAB_10aec778c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aec77a8; end: 10aec7877; -[SCMixerFetchEvent matchRequest:response:failure:] */

void FUN_10aec77a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (*(undefined8 *)(param_1 + 0x48),param_4,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aec7878; end: 10aec7907; -[SCMixerFetchEvent .cxx_destruct] */

void FUN_10aec7878(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aec7908; end: 10aec7a83; -[SCLensFeedDataModel initWithNamespaceId:rearNamespaceOverride:renderStrategy:displayName:iconURL:defaultNamespace:lastUpdateTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10aec7908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112701830;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112785280);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785280) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112785284);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785284) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112785288);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785288) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278528c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278528c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112785290);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785290) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112785294) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785298) = param_1;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec7a84; end: 10aec7aa7; -[SCLensFeedDataModel copyWithZone:] */

undefined8 FUN_10aec7a84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec7aa8; end: 10aec7b8b; -[SCLensFeedDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10aec7aa8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112785280);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112785284);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112785288);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278528c);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112785290);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_112785294);
  uVar7 = ~*(ulong *)(param_1 + _DAT_112785298) + *(ulong *)(param_1 + _DAT_112785298) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10aec7cd0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec7cdc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (*(char *)((long)puVar4 + (long)_DAT_112785294) == param_3[_DAT_112785294])) {
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_112785298) -
                   *(double *)(param_3 + _DAT_112785298));
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_112785298) +
                  *(double *)(param_3 + _DAT_112785298)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112785280),
            lVar6 == *(long *)(param_3 + _DAT_112785280) || (func_0x00010c071ae0(), (int)lVar6 != 0)
            ))) && ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112785284),
                    lVar6 == *(long *)(param_3 + _DAT_112785284) ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112785288),
           lVar6 == *(long *)(param_3 + _DAT_112785288) || (func_0x00010c071ae0(), (int)lVar6 != 0))
          && ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278528c),
              lVar6 == *(long *)(param_3 + _DAT_11278528c) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_112785290);
        if (puVar8 != *(undefined1 **)(param_3 + _DAT_112785290)) {
          func_0x00010c071ae0();
          goto LAB_10aec7cdc;
        }
        goto LAB_10aec7cd0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10aec7cdc:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10aec7b8c; end: 10aec7cf7; -[SCLensFeedDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10aec7b8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec7cd0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec7cdc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(char *)(param_1 + (long)_DAT_112785294) == *(char *)(param_3 + (long)_DAT_112785294))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112785298);
      dVar6 = *(double *)(param_3 + (long)_DAT_112785298);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_112785280),
            lVar4 == *(long *)(param_3 + (long)_DAT_112785280) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_112785284),
           lVar4 == *(long *)(param_3 + (long)_DAT_112785284) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + (long)_DAT_112785288),
           lVar4 == *(long *)(param_3 + (long)_DAT_112785288) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_11278528c),
           lVar4 == *(long *)(param_3 + (long)_DAT_11278528c) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112785290);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112785290)) {
          func_0x00010c071ae0();
          goto LAB_10aec7cdc;
        }
        goto LAB_10aec7cd0;
      }
    }
    lVar4 = 0;
  }
LAB_10aec7cdc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aec7cf8; end: 10aec7d07; -[SCLensFeedDataModel namespaceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec7cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785280);
}



/* Entry: 10aec7d08; end: 10aec7d17; -[SCLensFeedDataModel rearNamespaceOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec7d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785284);
}



/* Entry: 10aec7d18; end: 10aec7d27; -[SCLensFeedDataModel renderStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec7d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785288);
}



/* Entry: 10aec7d28; end: 10aec7d37; -[SCLensFeedDataModel displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec7d28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278528c);
}



/* Entry: 10aec7d38; end: 10aec7d47; -[SCLensFeedDataModel iconURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec7d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785290);
}



/* Entry: 10aec7d48; end: 10aec7d57; -[SCLensFeedDataModel defaultNamespace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10aec7d48(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112785294);
}



/* Entry: 10aec7d58; end: 10aec7d67; -[SCLensFeedDataModel lastUpdateTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec7d58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785298);
}



/* Entry: 10aec7d68; end: 10aec7dd7; -[SCLensFeedDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aec7d68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112785290,0);
  _objc_storeStrong(param_1 + _DAT_11278528c,0);
  _objc_storeStrong(param_1 + _DAT_112785288,0);
  _objc_storeStrong(param_1 + _DAT_112785284,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112785280,0);
  return;
}



/* Entry: 10aec7dd8; end: 10aec7f0f; -[SCLensMetadataItemDataModel initWithLensId:checksum:expirationTimestamp:namespaceName:lensMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10aec7dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112701838;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278529c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278529c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852a0) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852a4) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852a8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852ac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852ac) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec7f10; end: 10aec7f33; -[SCLensMetadataItemDataModel copyWithZone:] */

undefined8 FUN_10aec7f10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec7f34; end: 10aec7fdb; -[SCLensMetadataItemDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10aec7f34(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278529c);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852a0);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + _DAT_1127852a4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127852a8);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852ac);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec80c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec80d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_1127852a4) == *(long *)(param_3 + _DAT_1127852a4))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278529c);
      if ((lVar5 == *(long *)(param_3 + _DAT_11278529c)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127852a0);
        if ((lVar5 == *(long *)(param_3 + _DAT_1127852a0)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127852a8);
          if ((lVar5 == *(long *)(param_3 + _DAT_1127852a8)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_1127852ac);
            if (puVar6 != *(undefined1 **)(param_3 + _DAT_1127852ac)) {
              func_0x00010c071ae0();
              goto LAB_10aec80d0;
            }
            goto LAB_10aec80c4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec80d0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec7fdc; end: 10aec80eb; -[SCLensMetadataItemDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10aec7fdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec80c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec80d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_1127852a4) == *(long *)(param_3 + (long)_DAT_1127852a4))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11278529c);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278529c)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127852a0);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127852a0)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_1127852a8);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127852a8)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_1127852ac);
            if (lVar3 != *(long *)(param_3 + (long)_DAT_1127852ac)) {
              func_0x00010c071ae0();
              goto LAB_10aec80d0;
            }
            goto LAB_10aec80c4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec80d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec80ec; end: 10aec80fb; -[SCLensMetadataItemDataModel lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec80ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278529c);
}



/* Entry: 10aec80fc; end: 10aec810b; -[SCLensMetadataItemDataModel checksum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec80fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852a0);
}



/* Entry: 10aec810c; end: 10aec811b; -[SCLensMetadataItemDataModel expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec810c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852a4);
}



/* Entry: 10aec811c; end: 10aec812b; -[SCLensMetadataItemDataModel namespaceName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec811c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852a8);
}



/* Entry: 10aec812c; end: 10aec813b; -[SCLensMetadataItemDataModel lensMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec812c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852ac);
}



/* Entry: 10aec813c; end: 10aec819b; -[SCLensMetadataItemDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aec813c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127852ac,0);
  _objc_storeStrong(param_1 + _DAT_1127852a8,0);
  _objc_storeStrong(param_1 + _DAT_1127852a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278529c,0);
  return;
}



/* Entry: 10aec819c; end: 10aec8297; -[SCLensNamespaceGroupDataModel initWithGroupId:namespaceIds:lastUpdateTimestamp:locale:exclusiveLensSubscriptionPresent:feedsCacheTtlMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10aec819c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112701840;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127852b0) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852b4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852b8) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852bc) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127852c0) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852c4) = param_2;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec8298; end: 10aec82bb; -[SCLensNamespaceGroupDataModel copyWithZone:] */

undefined8 FUN_10aec8298(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec82bc; end: 10aec839f; -[SCLensNamespaceGroupDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10aec82bc(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_68 = (long)*(int *)(param_1 + _DAT_1127852b0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852b4);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127852b8) + *(ulong *)(param_1 + _DAT_1127852b8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127852bc);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + _DAT_1127852c0);
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127852c4) + *(ulong *)(param_1 + _DAT_1127852c4) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  plVar4 = &lStack_68;
  uStack_50 = uVar3;
  func_0x000107c3191c(plVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_10aec84d8:
    plVar8 = (long *)0x1;
  }
  else {
    plVar8 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10aec84e4;
    plVar8 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar8);
    if ((((ulong)plVar5 & 1) != 0) &&
       ((*(int *)((long)plVar4 + (long)_DAT_1127852b0) ==
         *(int *)((long)param_3 + (long)_DAT_1127852b0) &&
        (*(char *)((long)plVar4 + (long)_DAT_1127852c0) ==
         *(char *)((long)param_3 + (long)_DAT_1127852c0))))) {
      dVar9 = *(double *)((long)plVar4 + (long)_DAT_1127852b8);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_1127852b8);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)plVar4 + (long)_DAT_1127852c4);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_1127852c4);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if ((bVar1) &&
           ((lVar6 = *(long *)((long)plVar4 + (long)_DAT_1127852b4),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852b4) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          plVar8 = *(long **)((long)plVar4 + (long)_DAT_1127852bc);
          if (plVar8 != *(long **)((long)param_3 + (long)_DAT_1127852bc)) {
            func_0x00010c071ae0();
            goto LAB_10aec84e4;
          }
          goto LAB_10aec84d8;
        }
      }
    }
    plVar8 = (long *)0x0;
  }
LAB_10aec84e4:
  _objc_release(param_3);
  return plVar8;
}



/* Entry: 10aec83a0; end: 10aec84ff; -[SCLensNamespaceGroupDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10aec83a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec84d8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec84e4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + (long)_DAT_1127852b0) == *(int *)(param_3 + (long)_DAT_1127852b0) &&
        (*(char *)(param_1 + (long)_DAT_1127852c0) == *(char *)(param_3 + (long)_DAT_1127852c0)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127852b8);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127852b8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_1127852c4);
        dVar6 = *(double *)(param_3 + (long)_DAT_1127852c4);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_1127852b4),
            lVar4 == *(long *)(param_3 + (long)_DAT_1127852b4) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_1127852bc);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_1127852bc)) {
            func_0x00010c071ae0();
            goto LAB_10aec84e4;
          }
          goto LAB_10aec84d8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10aec84e4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aec8500; end: 10aec850f; -[SCLensNamespaceGroupDataModel groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10aec8500(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127852b0);
}



/* Entry: 10aec8510; end: 10aec851f; -[SCLensNamespaceGroupDataModel namespaceIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec8510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852b4);
}



/* Entry: 10aec8520; end: 10aec852f; -[SCLensNamespaceGroupDataModel lastUpdateTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec8520(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852b8);
}



/* Entry: 10aec8530; end: 10aec853f; -[SCLensNamespaceGroupDataModel locale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec8530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852bc);
}



/* Entry: 10aec8540; end: 10aec854f; -[SCLensNamespaceGroupDataModel exclusiveLensSubscriptionPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10aec8540(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127852c0);
}



/* Entry: 10aec8550; end: 10aec855f; -[SCLensNamespaceGroupDataModel feedsCacheTtlMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec8550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852c4);
}



/* Entry: 10aec8560; end: 10aec859f; -[SCLensNamespaceGroupDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aec8560(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127852bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127852b4,0);
  return;
}



/* Entry: 10aec85a0; end: 10aec85c3; -[SCLensScheduleNamespaceDataModel copyWithZone:] */

undefined8 FUN_10aec85a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec85c4; end: 10aec8727; -[SCLensScheduleNamespaceDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10aec85c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852c8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127852cc);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852d0);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uStack_80 = *(undefined8 *)(param_1 + _DAT_1127852d4);
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127852d8) + *(ulong *)(param_1 + _DAT_1127852d8) * 0x40000;
  uVar8 = ~*(ulong *)(param_1 + _DAT_1127852dc) + *(ulong *)(param_1 + _DAT_1127852dc) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127852e0);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852e4);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127852e8);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852ec);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127852f0);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852f4);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127852f8);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127852fc);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_98;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10aec8968:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec8974;
    puVar9 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar5 & 1) != 0) &&
       (*(long *)((long)puVar4 + (long)_DAT_1127852d4) ==
        *(long *)((long)param_3 + (long)_DAT_1127852d4))) {
      dVar10 = *(double *)((long)puVar4 + (long)_DAT_1127852d8);
      dVar11 = *(double *)((long)param_3 + (long)_DAT_1127852d8);
      dVar12 = ABS(dVar10 - dVar11);
      dVar10 = ABS(dVar10 + dVar11) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar10))) {
        bVar1 = dVar12 < dVar10;
      }
      if (bVar1) {
        dVar10 = *(double *)((long)puVar4 + (long)_DAT_1127852dc);
        dVar11 = *(double *)((long)param_3 + (long)_DAT_1127852dc);
        dVar12 = ABS(dVar10 - dVar11);
        dVar10 = ABS(dVar10 + dVar11) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar10))) {
          bVar1 = dVar12 < dVar10;
        }
        if (((((bVar1) &&
              ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852c8),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852c8) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852cc),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852cc) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852d0),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852d0) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852e0),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852e0) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852e4),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852e4) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
           (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852e8),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852e8) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852ec),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852ec) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852f0),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852f0) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852f4),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852f4) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127852f8),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127852f8) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) {
          puVar9 = *(undefined8 **)((long)puVar4 + (long)_DAT_1127852fc);
          if (puVar9 != *(undefined8 **)((long)param_3 + (long)_DAT_1127852fc)) {
            func_0x00010c071ae0();
            goto LAB_10aec8974;
          }
          goto LAB_10aec8968;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10aec8974:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10aec8728; end: 10aec898f; -[SCLensScheduleNamespaceDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10aec8728(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec8968:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec8974;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_1127852d4) == *(long *)(param_3 + (long)_DAT_1127852d4))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127852d8);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127852d8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_1127852dc);
        dVar6 = *(double *)(param_3 + (long)_DAT_1127852dc);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if (((((bVar1) &&
              ((lVar4 = *(long *)(param_1 + (long)_DAT_1127852c8),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127852c8) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_1127852cc),
              lVar4 == *(long *)(param_3 + (long)_DAT_1127852cc) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((((lVar4 = *(long *)(param_1 + (long)_DAT_1127852d0),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127852d0) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + (long)_DAT_1127852e0),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127852e0) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_1127852e4),
              lVar4 == *(long *)(param_3 + (long)_DAT_1127852e4) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
           (((lVar4 = *(long *)(param_1 + (long)_DAT_1127852e8),
             lVar4 == *(long *)(param_3 + (long)_DAT_1127852e8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((((lVar4 = *(long *)(param_1 + (long)_DAT_1127852ec),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127852ec) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + (long)_DAT_1127852f0),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127852f0) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             (((lVar4 = *(long *)(param_1 + (long)_DAT_1127852f4),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127852f4) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + (long)_DAT_1127852f8),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127852f8) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_1127852fc);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_1127852fc)) {
            func_0x00010c071ae0();
            goto LAB_10aec8974;
          }
          goto LAB_10aec8968;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10aec8974:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aec8990; end: 10aec899f; -[SCLensScheduleNamespaceDataModel activeLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec8990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852cc);
}



/* Entry: 10aec89a0; end: 10aec89af; -[SCLensScheduleNamespaceDataModel preCachedLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec89a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852d0);
}



/* Entry: 10aec89b0; end: 10aec89bf; -[SCLensScheduleNamespaceDataModel version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec89b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852dc);
}



/* Entry: 10aec89c0; end: 10aec89cf; -[SCLensScheduleNamespaceDataModel mixerRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec89c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852e4);
}



/* Entry: 10aec89d0; end: 10aec89df; -[SCLensScheduleNamespaceDataModel clientRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aec89d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852e8);
}



/* Entry: 10aec89e0; end: 10aec8a73; -[SCLensFeedRenderStrategy initWithSpans:orientation:contentType:itemsSpacingMultiplier:useItemsCardBackground:useItemsDivider:lensTileLayout:lensTileAspectRatio:] */

void FUN_10aec89e0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112701850;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    *(undefined4 *)((long)puVar1 + 0x18) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_10;
    *(undefined4 *)((long)puVar1 + 0x20) = param_2;
  }
  return;
}



/* Entry: 10aec8a74; end: 10aec8a97; -[SCLensFeedRenderStrategy copyWithZone:] */

undefined8 FUN_10aec8a74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec8a98; end: 10aec8b57; -[SCLensFeedRenderStrategy hash] */

ulong * FUN_10aec8a98(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  float fVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  long lStack_18;
  
  puVar1 = &uStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(ulong *)(param_1 + 0xc) & 0xffffffff;
  uStack_58 = *(ulong *)(param_1 + 0xc) >> 0x20;
  uStack_50 = (ulong)*(uint *)(param_1 + 0x14);
  uVar3 = (ulong)*(uint *)(param_1 + 0x18) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  lStack_48 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar3 = (ulong)*(uint *)(param_1 + 0x20) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  lStack_28 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  func_0x000107c3191c(&uStack_60,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) != 0) &&
          ((((*(int *)((long)puVar1 + 0xc) == *(int *)(param_3 + 0xc) &&
             (*(int *)((long)puVar1 + 0x10) == *(int *)(param_3 + 0x10))) &&
            (*(int *)((long)puVar1 + 0x14) == *(int *)(param_3 + 0x14))) &&
           ((*(char *)((long)puVar1 + 8) == param_3[8] &&
            (*(char *)((long)puVar1 + 9) == param_3[9])))))) &&
         (*(int *)((long)puVar1 + 0x1c) == *(int *)(param_3 + 0x1c))) {
        fVar5 = ABS(*(float *)((long)puVar1 + 0x18) - *(float *)(param_3 + 0x18));
        if ((fVar5 < 1.1754944e-38) ||
           (fVar5 < ABS(*(float *)((long)puVar1 + 0x18) + *(float *)(param_3 + 0x18)) *
                    1.1920929e-07)) {
          fVar5 = ABS(*(float *)((long)puVar1 + 0x20) + *(float *)(param_3 + 0x20)) * 1.1920929e-07;
          if (fVar5 <= 1.1754944e-38) {
            fVar5 = 1.1754944e-38;
          }
          puVar4 = (undefined1 *)
                   (ulong)(ABS(*(float *)((long)puVar1 + 0x20) - *(float *)(param_3 + 0x20)) < fVar5
                          );
          goto LAB_10aec8c44;
        }
      }
      puVar4 = (undefined1 *)0x0;
    }
  }
LAB_10aec8c44:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10aec8b58; end: 10aec8c8f; -[SCLensFeedRenderStrategy isEqual:] */

bool FUN_10aec8b58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float fVar4;
  
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
      if ((((uVar2 & 1) != 0) &&
          ((((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
             (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
            (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))) &&
           ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
         (*(int *)(param_1 + 0x1c) == *(int *)(param_3 + 0x1c))) {
        fVar4 = ABS(*(float *)(param_1 + 0x18) - *(float *)(param_3 + 0x18));
        if ((fVar4 < 1.1754944e-38) ||
           (fVar4 < ABS(*(float *)(param_1 + 0x18) + *(float *)(param_3 + 0x18)) * 1.1920929e-07)) {
          fVar4 = ABS(*(float *)(param_1 + 0x20) + *(float *)(param_3 + 0x20)) * 1.1920929e-07;
          if (fVar4 <= 1.1754944e-38) {
            fVar4 = 1.1754944e-38;
          }
          bVar3 = ABS(*(float *)(param_1 + 0x20) - *(float *)(param_3 + 0x20)) < fVar4;
          goto LAB_10aec8c44;
        }
      }
      bVar3 = false;
    }
  }
LAB_10aec8c44:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10aec8c90; end: 10aec8c97; -[SCLensFeedRenderStrategy spans] */

undefined4 FUN_10aec8c90(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10aec8c98; end: 10aec8c9f; -[SCLensFeedRenderStrategy orientation] */

undefined4 FUN_10aec8c98(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10aec8ca0; end: 10aec8ca7; -[SCLensFeedRenderStrategy contentType] */

undefined4 FUN_10aec8ca0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10aec8ca8; end: 10aec8caf; -[SCLensFeedRenderStrategy itemsSpacingMultiplier] */

undefined4 FUN_10aec8ca8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10aec8cb0; end: 10aec8cb7; -[SCLensFeedRenderStrategy useItemsCardBackground] */

undefined1 FUN_10aec8cb0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aec8cb8; end: 10aec8cbf; -[SCLensFeedRenderStrategy useItemsDivider] */

undefined1 FUN_10aec8cb8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aec8cc0; end: 10aec8cc7; -[SCLensFeedRenderStrategy lensTileLayout] */

undefined4 FUN_10aec8cc0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10aec8cc8; end: 10aec8ccf; -[SCLensFeedRenderStrategy lensTileAspectRatio] */

undefined4 FUN_10aec8cc8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10aec8cd0; end: 10aec8cf3; -[SCLensMetadataDataModel copyWithZone:] */

undefined8 FUN_10aec8cd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec8cf4; end: 10aec8fbf; -[SCLensMetadataDataModel hash] */

undefined8 * FUN_10aec8cf4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_220;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_220 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_218 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_210 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_208 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_200 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f0 = uVar1;
  func_0x00010bfde980();
  uStack_1e0 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  lStack_1d8 = (long)*(char *)(param_1 + 8);
  lStack_1d0 = (long)*(char *)(param_1 + 9);
  uStack_1e8 = uVar2;
  func_0x00010bfde980();
  uStack_1c0 = (ulong)*(byte *)(param_1 + 10);
  uStack_1b8 = (ulong)*(byte *)(param_1 + 0xb);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_1b0 = uVar2;
  func_0x00010bfde980();
  uStack_1a0 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  lVar5 = *(long *)(param_1 + 0x80);
  lStack_190 = -lVar5;
  if (-1 < lVar5) {
    lStack_190 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_1a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = uVar2;
  func_0x00010bfde980();
  uStack_178 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_170 = (ulong)*(byte *)(param_1 + 0xe);
  lStack_168 = (long)*(char *)(param_1 + 0xf);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_180 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_160 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_158 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_150 = uVar2;
  func_0x00010bfde980();
  uStack_140 = (ulong)*(byte *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_148 = uVar1;
  func_0x00010bfde980();
  uStack_130 = (ulong)*(byte *)(param_1 + 0x11);
  lVar5 = *(long *)(param_1 + 0xc0);
  uStack_120 = *(undefined8 *)(param_1 + 200);
  lStack_128 = -lVar5;
  if (-1 < lVar5) {
    lStack_128 = lVar5;
  }
  uStack_138 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bfde980();
  lStack_110 = (long)*(char *)(param_1 + 0x12);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uStack_118 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uStack_f8 = (ulong)*(byte *)(param_1 + 0x13);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_100 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uStack_e0 = (ulong)*(byte *)(param_1 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  lStack_d0 = (long)*(char *)(param_1 + 0x15);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  lStack_98 = (long)*(char *)(param_1 + 0x16);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 0x17);
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_220,0x3f);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec9558:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec9564;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((((ulong)puVar4 & 1) != 0) &&
          ((((*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58) &&
             (*(char *)((long)puVar3 + 8) == param_3[8])) &&
            (*(char *)((long)puVar3 + 9) == param_3[9])) &&
           ((*(char *)((long)puVar3 + 10) == param_3[10] &&
            (*(char *)((long)puVar3 + 0xb) == param_3[0xb])))))) &&
         (*(char *)((long)puVar3 + 0xc) == param_3[0xc])) &&
        (((((*(long *)((long)puVar3 + 0x78) == *(long *)(param_3 + 0x78) &&
            (*(long *)((long)puVar3 + 0x80) == *(long *)(param_3 + 0x80))) &&
           ((*(char *)((long)puVar3 + 0xd) == param_3[0xd] &&
            (((*(char *)((long)puVar3 + 0xe) == param_3[0xe] &&
              (*(char *)((long)puVar3 + 0xf) == param_3[0xf])) &&
             (*(char *)((long)puVar3 + 0x10) == param_3[0x10])))))) &&
          ((*(char *)((long)puVar3 + 0x11) == param_3[0x11] &&
           (*(long *)((long)puVar3 + 0xc0) == *(long *)(param_3 + 0xc0))))) &&
         (*(char *)((long)puVar3 + 0x12) == param_3[0x12])))) &&
       (((*(char *)((long)puVar3 + 0x13) == param_3[0x13] &&
         (*(char *)((long)puVar3 + 0x14) == param_3[0x14])) &&
        ((*(char *)((long)puVar3 + 0x15) == param_3[0x15] &&
         ((*(char *)((long)puVar3 + 0x16) == param_3[0x16] &&
          (*(char *)((long)puVar3 + 0x17) == param_3[0x17])))))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x48);
                  if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x50);
                    if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x60);
                      if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x68);
                        if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x70);
                          if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x88);
                            if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x90);
                              if ((lVar5 == *(long *)(param_3 + 0x90)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x98);
                                if ((lVar5 == *(long *)(param_3 + 0x98)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = *(long *)((long)puVar3 + 0xa0);
                                  if ((lVar5 == *(long *)(param_3 + 0xa0)) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = *(long *)((long)puVar3 + 0xa8);
                                    if ((lVar5 == *(long *)(param_3 + 0xa8)) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = *(long *)((long)puVar3 + 0xb0);
                                      if ((lVar5 == *(long *)(param_3 + 0xb0)) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = *(long *)((long)puVar3 + 0xb8);
                                        if ((lVar5 == *(long *)(param_3 + 0xb8)) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = *(long *)((long)puVar3 + 200);
                                          if ((lVar5 == *(long *)(param_3 + 200)) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = *(long *)((long)puVar3 + 0xd0);
                                            if ((lVar5 == *(long *)(param_3 + 0xd0)) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = *(long *)((long)puVar3 + 0xd8);
                                              if ((lVar5 == *(long *)(param_3 + 0xd8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = *(long *)((long)puVar3 + 0xe0);
                                                if ((lVar5 == *(long *)(param_3 + 0xe0)) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  lVar5 = *(long *)((long)puVar3 + 0xe8);
                                                  if ((lVar5 == *(long *)(param_3 + 0xe8)) ||
                                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = *(long *)((long)puVar3 + 0xf0);
                                                    if ((lVar5 == *(long *)(param_3 + 0xf0)) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      lVar5 = *(long *)((long)puVar3 + 0xf8);
                                                      if ((lVar5 == *(long *)(param_3 + 0xf8)) ||
                                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                        lVar5 = *(long *)((long)puVar3 + 0x100);
                                                        if ((lVar5 == *(long *)(param_3 + 0x100)) ||
                                                           (func_0x00010c071ae0(), (int)lVar5 != 0))
                                                        {
                                                          lVar5 = *(long *)((long)puVar3 + 0x108);
                                                          if ((lVar5 == *(long *)(param_3 + 0x108))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar5 != 0)) {
                                                            lVar5 = *(long *)((long)puVar3 + 0x110);
                                                            if ((lVar5 == *(long *)(param_3 + 0x110)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar5 != 0)) {
                                                              lVar5 = *(long *)((long)puVar3 + 0x118
                                                                               );
                                                              if ((lVar5 == *(long *)(param_3 +
                                                                                     0x118)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar5 != 0)) {
                                                                lVar5 = *(long *)((long)puVar3 +
                                                                                 0x120);
                                                                if ((lVar5 == *(long *)(param_3 +
                                                                                       0x120)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar5 != 0)) {
                                                                  lVar5 = *(long *)((long)puVar3 +
                                                                                   0x128);
                                                                  if ((lVar5 == *(long *)(param_3 +
                                                                                         0x128)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar5 != 0)) {
                                                                    lVar5 = *(long *)((long)puVar3 +
                                                                                     0x130);
                                                                    if ((lVar5 == *(long *)(param_3 
                                                  + 0x130)) ||
                                                  (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = *(long *)((long)puVar3 + 0x138);
                                                    if ((lVar5 == *(long *)(param_3 + 0x138)) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      lVar5 = *(long *)((long)puVar3 + 0x140);
                                                      if ((lVar5 == *(long *)(param_3 + 0x140)) ||
                                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                        lVar5 = *(long *)((long)puVar3 + 0x148);
                                                        if ((lVar5 == *(long *)(param_3 + 0x148)) ||
                                                           (func_0x00010c071ae0(), (int)lVar5 != 0))
                                                        {
                                                          lVar5 = *(long *)((long)puVar3 + 0x150);
                                                          if ((lVar5 == *(long *)(param_3 + 0x150))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar5 != 0)) {
                                                            lVar5 = *(long *)((long)puVar3 + 0x158);
                                                            if ((lVar5 == *(long *)(param_3 + 0x158)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar5 != 0)) {
                                                              lVar5 = *(long *)((long)puVar3 + 0x160
                                                                               );
                                                              if ((lVar5 == *(long *)(param_3 +
                                                                                     0x160)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar5 != 0)) {
                                                                lVar5 = *(long *)((long)puVar3 +
                                                                                 0x168);
                                                                if ((lVar5 == *(long *)(param_3 +
                                                                                       0x168)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar5 != 0)) {
                                                                  lVar5 = *(long *)((long)puVar3 +
                                                                                   0x170);
                                                                  if ((lVar5 == *(long *)(param_3 +
                                                                                         0x170)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar5 != 0)) {
                                                                    lVar5 = *(long *)((long)puVar3 +
                                                                                     0x178);
                                                                    if ((lVar5 == *(long *)(param_3 
                                                  + 0x178)) ||
                                                  (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = *(long *)((long)puVar3 + 0x180);
                                                    if ((lVar5 == *(long *)(param_3 + 0x180)) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      puVar6 = *(undefined1 **)
                                                                ((long)puVar3 + 0x188);
                                                      if (puVar6 != *(undefined1 **)
                                                                     (param_3 + 0x188)) {
                                                        func_0x00010c071ae0();
                                                        goto LAB_10aec9564;
                                                      }
                                                      goto LAB_10aec9558;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec9564:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec8fc0; end: 10aec957f; -[SCLensMetadataDataModel isEqual:] */

long FUN_10aec8fc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec9558:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec9564;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
             (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
            (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
         (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
        (((((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
            (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))) &&
           ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
            (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
              (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
             (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))))) &&
          ((*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11) &&
           (*(long *)(param_1 + 0xc0) == *(long *)(param_3 + 0xc0))))) &&
         (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))))) &&
       (((*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13) &&
         (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))) &&
        ((*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15) &&
         ((*(char *)(param_1 + 0x16) == *(char *)(param_3 + 0x16) &&
          (*(char *)(param_1 + 0x17) == *(char *)(param_3 + 0x17))))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x60);
                      if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x68);
                        if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x70);
                          if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x88);
                            if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x90);
                              if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x98);
                                if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xa0);
                                  if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xa8);
                                    if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0xb0);
                                      if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xb8);
                                        if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 200);
                                          if ((lVar3 == *(long *)(param_3 + 200)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xd0);
                                            if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xd8);
                                              if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xe0);
                                                if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0xe8);
                                                  if ((lVar3 == *(long *)(param_3 + 0xe8)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0xf0);
                                                    if ((lVar3 == *(long *)(param_3 + 0xf0)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0xf8);
                                                      if ((lVar3 == *(long *)(param_3 + 0xf8)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0x100);
                                                        if ((lVar3 == *(long *)(param_3 + 0x100)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x108);
                                                          if ((lVar3 == *(long *)(param_3 + 0x108))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0x110);
                                                            if ((lVar3 == *(long *)(param_3 + 0x110)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0x118);
                                                              if ((lVar3 == *(long *)(param_3 +
                                                                                     0x118)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                                lVar3 = *(long *)(param_1 + 0x120);
                                                                if ((lVar3 == *(long *)(param_3 +
                                                                                       0x120)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) {
                                                                  lVar3 = *(long *)(param_1 + 0x128)
                                                                  ;
                                                                  if ((lVar3 == *(long *)(param_3 +
                                                                                         0x128)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                                    lVar3 = *(long *)(param_1 +
                                                                                     0x130);
                                                                    if ((lVar3 == *(long *)(param_3 
                                                  + 0x130)) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x138);
                                                    if ((lVar3 == *(long *)(param_3 + 0x138)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x140);
                                                      if ((lVar3 == *(long *)(param_3 + 0x140)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0x148);
                                                        if ((lVar3 == *(long *)(param_3 + 0x148)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x150);
                                                          if ((lVar3 == *(long *)(param_3 + 0x150))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0x158);
                                                            if ((lVar3 == *(long *)(param_3 + 0x158)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0x160);
                                                              if ((lVar3 == *(long *)(param_3 +
                                                                                     0x160)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                                lVar3 = *(long *)(param_1 + 0x168);
                                                                if ((lVar3 == *(long *)(param_3 +
                                                                                       0x168)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) {
                                                                  lVar3 = *(long *)(param_1 + 0x170)
                                                                  ;
                                                                  if ((lVar3 == *(long *)(param_3 +
                                                                                         0x170)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                                    lVar3 = *(long *)(param_1 +
                                                                                     0x178);
                                                                    if ((lVar3 == *(long *)(param_3 
                                                  + 0x178)) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x180);
                                                    if ((lVar3 == *(long *)(param_3 + 0x180)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x188);
                                                      if (lVar3 != *(long *)(param_3 + 0x188)) {
                                                        func_0x00010c071ae0();
                                                        goto LAB_10aec9564;
                                                      }
                                                      goto LAB_10aec9558;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec9564:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec9580; end: 10aec9587; -[SCLensMetadataDataModel isThirdParty] */

undefined1 FUN_10aec9580(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10aec9588; end: 10aec95ab; -[SCLensMetadataHintTranslation copyWithZone:] */

undefined8 FUN_10aec9588(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec95ac; end: 10aec961f; -[SCLensMetadataHintTranslation hash] */

undefined8 * FUN_10aec95ac(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10aec96a0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec96ac;
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
          goto LAB_10aec96ac;
        }
        goto LAB_10aec96a0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec96ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec9620; end: 10aec96c7; -[SCLensMetadataHintTranslation isEqual:] */

long FUN_10aec9620(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec96a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec96ac;
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
          goto LAB_10aec96ac;
        }
        goto LAB_10aec96a0;
      }
    }
    lVar3 = 0;
  }
LAB_10aec96ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec96c8; end: 10aec9747; -[SCLensMetadataLensResource hash] */

undefined8 * FUN_10aec96c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lStack_38 = (long)*(char *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aec97e8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec97f4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10aec97f4;
        }
        goto LAB_10aec97e8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec97f4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec9748; end: 10aec980f; -[SCLensMetadataLensResource isEqual:] */

long FUN_10aec9748(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec97e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec97f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aec97f4;
        }
        goto LAB_10aec97e8;
      }
    }
    lVar3 = 0;
  }
LAB_10aec97f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec9810; end: 10aec98bb; -[SCLensMetadataSponsoredSlug initWithStyle:defaultValues:] */

undefined1 *
FUN_10aec9810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701870;
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



/* Entry: 10aec98bc; end: 10aec98df; -[SCLensMetadataSponsoredSlug copyWithZone:] */

undefined8 FUN_10aec98bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec98e0; end: 10aec9953; -[SCLensMetadataSponsoredSlug hash] */

undefined8 * FUN_10aec98e0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10aec99d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec99e0;
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
          goto LAB_10aec99e0;
        }
        goto LAB_10aec99d4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec99e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec9954; end: 10aec99fb; -[SCLensMetadataSponsoredSlug isEqual:] */

long FUN_10aec9954(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec99d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec99e0;
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
          goto LAB_10aec99e0;
        }
        goto LAB_10aec99d4;
      }
    }
    lVar3 = 0;
  }
LAB_10aec99e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec99fc; end: 10aec9a03; -[SCLensMetadataSponsoredSlug style] */

undefined8 FUN_10aec99fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec9a04; end: 10aec9a0b; -[SCLensMetadataSponsoredSlug defaultValues] */

undefined8 FUN_10aec9a04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec9a0c; end: 10aec9a3b; -[SCLensMetadataSponsoredSlug .cxx_destruct] */

void FUN_10aec9a0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec9a3c; end: 10aec9b73; -[SCLensMetadataSlugStyle initWithFont:textSize:color:dropshadowColor:dropshadowOffset:] */

undefined1 *
FUN_10aec9a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112701878;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec9b74; end: 10aec9b97; -[SCLensMetadataSlugStyle copyWithZone:] */

undefined8 FUN_10aec9b74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec9b98; end: 10aec9c2f; -[SCLensMetadataSlugStyle hash] */

undefined8 * FUN_10aec9b98(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
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
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec9cf8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec9d04;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10aec9d04;
              }
              goto LAB_10aec9cf8;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec9d04:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec9c30; end: 10aec9d1f; -[SCLensMetadataSlugStyle isEqual:] */

long FUN_10aec9c30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec9cf8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec9d04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10aec9d04;
              }
              goto LAB_10aec9cf8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec9d04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec9d20; end: 10aec9d27; -[SCLensMetadataSlugStyle font] */

undefined8 FUN_10aec9d20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec9d28; end: 10aec9d2f; -[SCLensMetadataSlugStyle textSize] */

undefined8 FUN_10aec9d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec9d30; end: 10aec9d37; -[SCLensMetadataSlugStyle color] */

undefined8 FUN_10aec9d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec9d38; end: 10aec9d3f; -[SCLensMetadataSlugStyle dropshadowColor] */

undefined8 FUN_10aec9d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aec9d40; end: 10aec9d47; -[SCLensMetadataSlugStyle dropshadowOffset] */

undefined8 FUN_10aec9d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aec9d48; end: 10aec9d9b; -[SCLensMetadataSlugStyle .cxx_destruct] */

void FUN_10aec9d48(long param_1)

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



/* Entry: 10aec9d9c; end: 10aec9e47; -[SCLensMetadataTextPoint initWithX:y:] */

undefined1 *
FUN_10aec9d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701880;
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



/* Entry: 10aec9e48; end: 10aec9e6b; -[SCLensMetadataTextPoint copyWithZone:] */

undefined8 FUN_10aec9e48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec9e6c; end: 10aec9edf; -[SCLensMetadataTextPoint hash] */

undefined8 * FUN_10aec9e6c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10aec9f60:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec9f6c;
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
          goto LAB_10aec9f6c;
        }
        goto LAB_10aec9f60;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec9f6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec9ee0; end: 10aec9f87; -[SCLensMetadataTextPoint isEqual:] */

long FUN_10aec9ee0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec9f60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec9f6c;
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
          goto LAB_10aec9f6c;
        }
        goto LAB_10aec9f60;
      }
    }
    lVar3 = 0;
  }
LAB_10aec9f6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec9f88; end: 10aec9f8f; -[SCLensMetadataTextPoint x] */

undefined8 FUN_10aec9f88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec9f90; end: 10aec9f97; -[SCLensMetadataTextPoint y] */

undefined8 FUN_10aec9f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec9f98; end: 10aec9fc7; -[SCLensMetadataTextPoint .cxx_destruct] */

void FUN_10aec9f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec9fc8; end: 10aeca1db; -[SCLensMetadataSlugPosAndText initWithViewRect:alignment:position:hmargin:vmargin:text:sponsoredText:sponsoredChannelText:timeBeforeFadeout:longformText:longformTimeBeforeFadeout:] */

undefined8 *
FUN_10aec9fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112701888;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    puVar1[9] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10aeca1dc; end: 10aeca1ff; -[SCLensMetadataSlugPosAndText copyWithZone:] */

undefined8 FUN_10aeca1dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aeca200; end: 10aeca2cf; -[SCLensMetadataSlugPosAndText hash] */

undefined8 * FUN_10aeca200(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aeca418:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aeca424;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48) &&
        (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x50);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_10aeca424;
                      }
                      goto LAB_10aeca418;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aeca424:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}


