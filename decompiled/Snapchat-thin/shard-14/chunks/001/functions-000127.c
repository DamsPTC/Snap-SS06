/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b011f8c; end: 10b01200b; -[SCBitmojiAvatarFallbackImage hash] */

void FUN_10b011f8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
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
  puStack_78 = PTR_PTR_112704318;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01200c; end: 10b01204f; -[SCBitmojiAvatarFallbackImage internalInit] */

void FUN_10b01200c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704318;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b012050; end: 10b012117; -[SCBitmojiAvatarFallbackImage isEqual:] */

long FUN_10b012050(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0120f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0120fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b0120fc;
        }
        goto LAB_10b0120f0;
      }
    }
    lVar3 = 0;
  }
LAB_10b0120fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b012118; end: 10b0121a3; -[SCBitmojiAvatarFallbackImage matchAvatarSilhouette:image:] */

void FUN_10b012118(long param_1,undefined8 param_2,long param_3,long param_4)

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
              (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0121a4; end: 10b0121d3; -[SCBitmojiAvatarFallbackImage .cxx_destruct] */

void FUN_10b0121a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b0121d4; end: 10b012247; -[SCAvatarImageFetchingServices initWithAvatarImageFetcher:] */

undefined1 * FUN_10b0121d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704320;
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



/* Entry: 10b012248; end: 10b01224f; -[SCAvatarImageFetchingServices avatarImageFetcher] */

undefined8 FUN_10b012248(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b012250; end: 10b01225b; -[SCAvatarImageFetchingServices .cxx_destruct] */

void FUN_10b012250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01225c; end: 10b0122a3; +[SCBitmojiAvatarImageTransformation circle] */

void FUN_10b01225c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d43a0;
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



/* Entry: 10b0122a4; end: 10b012303; +[SCBitmojiAvatarImageTransformation croppedWithAspectRatio:heightPercentage:] */

void FUN_10b0122a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d43a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b012304; end: 10b012327; -[SCBitmojiAvatarImageTransformation copyWithZone:] */

undefined8 FUN_10b012304(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b012328; end: 10b0123c3; -[SCBitmojiAvatarImageTransformation hash] */

void FUN_10b012328(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar2 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_28 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_20 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112704328;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0123c4; end: 10b012407; -[SCBitmojiAvatarImageTransformation internalInit] */

void FUN_10b0123c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704328;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b012408; end: 10b0124f7; -[SCBitmojiAvatarImageTransformation isEqual:] */

bool FUN_10b012408(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
          goto LAB_10b0124dc;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b0124dc:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0124f8; end: 10b01257b; -[SCBitmojiAvatarImageTransformation matchCircle:cropped:] */

void FUN_10b0124f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_4);
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01257c; end: 10b01263f; -[SCMemoriesScope initWithUiContainer:viewLifecycleObservable:scopeDelegate:] */

undefined1 *
FUN_10b01257c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704330;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b012640; end: 10b012647; -[SCMemoriesScope uiContainer] */

undefined8 FUN_10b012640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b012648; end: 10b01264f; -[SCMemoriesScope viewLifecycleObservable] */

undefined8 FUN_10b012648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b012650; end: 10b012667; -[SCMemoriesScope scopeDelegate] */

void FUN_10b012650(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b012668; end: 10b01269f; -[SCMemoriesScope .cxx_destruct] */

void FUN_10b012668(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0126a0; end: 10b0126e7; +[SCMemoriesViewLifecycleEvent viewDidAppear] */

void FUN_10b0126a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df348;
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



/* Entry: 10b0126e8; end: 10b012733; +[SCMemoriesViewLifecycleEvent viewDidDisappear] */

void FUN_10b0126e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df348;
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



/* Entry: 10b012734; end: 10b012757; -[SCMemoriesViewLifecycleEvent copyWithZone:] */

undefined8 FUN_10b012734(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b012758; end: 10b01275f; -[SCMemoriesViewLifecycleEvent hash] */

undefined8 FUN_10b012758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b012760; end: 10b0127a3; -[SCMemoriesViewLifecycleEvent internalInit] */

void FUN_10b012760(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0127a4; end: 10b01282b; -[SCMemoriesViewLifecycleEvent isEqual:] */

bool FUN_10b0127a4(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b01282c; end: 10b0128a3; -[SCMemoriesViewLifecycleEvent matchViewDidAppear:viewDidDisappear:] */

void FUN_10b01282c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_10b012874;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b012874;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_10b012874:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0128a4; end: 10b0128ab; -[SCDreamsSessionService dreamsSessionManager] */

undefined8 FUN_10b0128a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0128ac; end: 10b0128b3; -[SCDreamsSessionService dreamsAsyncSessionManager] */

undefined8 FUN_10b0128ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0128b4; end: 10b0128e3; -[SCDreamsSessionService .cxx_destruct] */

void FUN_10b0128b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0128e4; end: 10b0128eb; -[SCCAISnapsSelfieOnboardingSource__Enum init] */

void FUN_10b0128e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b0128ec; end: 10b0128f3; -[SCCDreamsPlusUpsellType__Enum init] */

void FUN_10b0128ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b0128f4; end: 10b0128fb; -[SCCDreamsSubscriptionTier__Enum init] */

void FUN_10b0128f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b0128fc; end: 10b012927; -[SCCAISnapGenerationRequest initWithGenerationId:lens:] */

void FUN_10b0128fc(void)

{
  func_0x00010b013308(PTR_PTR_112704348);
  func_0x00010b0132bc();
  return;
}



/* Entry: 10b012928; end: 10b01293b; +[SCCAISnapGenerationRequest valdiMarshallableObjectDescriptor] */

void FUN_10b012928(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cab6a8;
  param_1[1] = &PTR_DAT_110cab708;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b01293c; end: 10b012967; -[SCCAISnapGenerationResponse initWithGenerationId:lensId:success:] */

void FUN_10b01293c(void)

{
  func_0x00010b013308(PTR_PTR_112704350);
  func_0x00010b0132bc();
  return;
}



/* Entry: 10b012968; end: 10b01297b; +[SCCAISnapGenerationResponse valdiMarshallableObjectDescriptor] */

void FUN_10b012968(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cab718;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b01297c; end: 10b0129b7; -[SCCAISnapsTabContext initWithGenAiSnapsObservable:aiLensesObservable:] */

void FUN_10b01297c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b013308(PTR_PTR_112704358);
  func_0x00010b013318(auStack_20);
  return;
}



/* Entry: 10b0129b8; end: 10b0129d7; +[SCCAISnapsTabContext valdiMarshallableObjectDescriptor] */

void FUN_10b0129b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cab7d8;
  param_1[1] = &PTR_s_SCBridgeObservable_110cab940;
  param_1[2] = &PTR_s_oi_v_110cab7a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0129d8; end: 10b0129fb;  */

undefined8 FUN_10b0129d8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10b0129fc; end: 10b012a4b;  */

void FUN_10b0129fc(void)

{
  func_0x00010b013428();
  func_0x00010b0133e0();
  func_0x00010b01332c(FUN_10b013240);
  func_0x00010b0133f0();
  func_0x00010b013374();
  func_0x00010b013348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b012a4c; end: 10b012adf; -[SCCDreamsFriendSelectionContext initWithSelectedFriendObservable:friendsObservable:onSelectFriend:onSelectNone:] */

undefined1 * FUN_10b012a4c(void)

{
  undefined1 *puVar1;
  undefined8 unaff_x22;
  
  func_0x00010b013358();
  _objc_retain();
  func_0x00010b013380();
  func_0x00010b013410();
  func_0x00010b013440();
  func_0x00010b013350();
  func_0x00010b01333c();
  puVar1 = &stack0xffffffffffffffb0;
  func_0x00010b013318(puVar1);
  func_0x00010b013418();
  func_0x00010b013348();
  _objc_release(unaff_x22);
  func_0x00010b013388();
  return puVar1;
}



/* Entry: 10b012ae0; end: 10b012af3; +[SCCDreamsFriendSelectionContext valdiMarshallableObjectDescriptor] */

void FUN_10b012ae0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cab988;
  param_1[1] = &PTR_s_SCBridgeObservable_110caba30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012af4; end: 10b012b23; -[SCCDreamsNotificationContext initWithNotificationObservable:] */

void FUN_10b012af4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704368;
  uStack_20 = param_1;
  func_0x00010b01333c();
  func_0x00010b013318(&uStack_20);
  return;
}



/* Entry: 10b012b24; end: 10b012b37; +[SCCDreamsNotificationContext valdiMarshallableObjectDescriptor] */

void FUN_10b012b24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caba50;
  param_1[1] = &PTR_s_SCBridgeObservable_110caba80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012b38; end: 10b012b67; -[SCCDreamsPlusSubscriptionInfo initWithIsSubscribed:planType:] */

void FUN_10b012b38(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704370;
  uStack_20 = param_1;
  func_0x00010b01333c();
  func_0x00010b013318(&uStack_20);
  return;
}



/* Entry: 10b012b68; end: 10b012b7b; +[SCCDreamsPlusSubscriptionInfo valdiMarshallableObjectDescriptor] */

void FUN_10b012b68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caba98;
  param_1[1] = &PTR_DAT_110cabae0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012b7c; end: 10b012bdf; -[SCCDreamsSnapchatPlusContext initWithPlusSubscriptionInfoObservable:onTapPlusSubscribe:] */

void FUN_10b012b7c(void)

{
  func_0x00010b0132e0();
  func_0x00010b0133b4();
  func_0x00010b01333c();
  func_0x00010b013318(&stack0xffffffffffffffc0);
  func_0x00010b013320();
  func_0x00010b013348();
  return;
}



/* Entry: 10b012be0; end: 10b012bff; +[SCCDreamsSnapchatPlusContext valdiMarshallableObjectDescriptor] */

void FUN_10b012be0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cabb20;
  param_1[1] = &PTR_s_SCBridgeObservable_110cabbc8;
  param_1[2] = &PTR_s_oi_v_110cabaf0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012c00; end: 10b012c53; -[SCCDreamsSponsoredContext initWithSponsoredDisclaimerShownCountObservable:onShowSponsoredDisclaimer:] */

void FUN_10b012c00(void)

{
  func_0x00010b0132e0();
  func_0x00010b0133b4();
  func_0x00010b01333c();
  func_0x00010b013318(&stack0xffffffffffffffc0);
  func_0x00010b013320();
  func_0x00010b013348();
  return;
}



/* Entry: 10b012c54; end: 10b012c67; +[SCCDreamsSponsoredContext valdiMarshallableObjectDescriptor] */

void FUN_10b012c54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cabbe8;
  param_1[1] = &PTR_s_SCBridgeObservable_110cabc48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012c68; end: 10b012cdf; -[SCCDreamsTabSelectionContext initWithSelectionModeObservable:onSelectModeChange:onSelectedDreamsChange:] */

undefined1 * FUN_10b012c68(void)

{
  undefined1 *puVar1;
  
  func_0x00010b013448();
  _objc_retain();
  func_0x00010b013408();
  func_0x00010b013440();
  func_0x00010b0133b4();
  func_0x00010b013348();
  func_0x00010b01333c();
  puVar1 = &stack0xffffffffffffffb0;
  func_0x00010b013318(puVar1);
  func_0x00010b013388();
  func_0x00010b013400();
  func_0x00010b013350();
  return puVar1;
}



/* Entry: 10b012ce0; end: 10b012cff; +[SCCDreamsTabSelectionContext valdiMarshallableObjectDescriptor] */

void FUN_10b012ce0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cabc90;
  param_1[1] = &PTR_s_SCBridgeObservable_110cabcf0;
  param_1[2] = &PTR_s_ob_v_110cabc60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012d00; end: 10b012d27;  */

undefined8 FUN_10b012d00(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b012d28; end: 10b012d77;  */

void FUN_10b012d28(void)

{
  func_0x00010b013428();
  func_0x00010b0133e0();
  func_0x00010b01332c(0x10b01325c);
  func_0x00010b0133f0();
  func_0x00010b013374();
  func_0x00010b013348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b012d78; end: 10b012e4b; -[SCCDreamsUnpackAnimationViewModel initWithViewFactory:animationStateObservable:loadAnimation:playWhenReady:onAnimationFinish:] */

undefined8 * FUN_10b012d78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain();
  func_0x00010b013380();
  func_0x00010b013410();
  _objc_retainBlock();
  func_0x00010b013400();
  _objc_retainBlock();
  func_0x00010b013418();
  puStack_58 = PTR_PTR_112704390;
  uStack_60 = param_1;
  func_0x00010b01333c();
  puVar1 = &uStack_60;
  func_0x00010b013318(puVar1);
  func_0x00010b013350();
  func_0x00010b013348();
  func_0x00010b013400();
  _objc_release(in_x5);
  func_0x00010b013388();
  return puVar1;
}



/* Entry: 10b012e4c; end: 10b012e6b; +[SCCDreamsUnpackAnimationViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b012e4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cabd38;
  param_1[1] = &PTR_s_SCValdiViewFactory_110cabdc8;
  param_1[2] = &PTR_s_ob_v_110cabd08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012e6c; end: 10b012ef3; -[SCCDreamsUnpackFullscreenContext initWithNextGenerationSnapPackObservable:onTapMyStory:onTapShare:bitmojiURL:] */

undefined1 * FUN_10b012e6c(void)

{
  undefined1 *puVar1;
  undefined8 unaff_x22;
  
  func_0x00010b013358();
  func_0x00010b013408();
  func_0x00010b013380();
  _objc_retainBlock();
  func_0x00010b013410();
  func_0x00010b013388();
  func_0x00010b013440();
  func_0x00010b013320();
  func_0x00010b01333c();
  puVar1 = &stack0xffffffffffffffb0;
  func_0x00010b013318(puVar1);
  func_0x00010b013348();
  func_0x00010b013388();
  _objc_release(unaff_x22);
  func_0x00010b013418();
  return puVar1;
}



/* Entry: 10b012ef4; end: 10b012f07; +[SCCDreamsUnpackFullscreenContext valdiMarshallableObjectDescriptor] */

void FUN_10b012ef4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cabde0;
  param_1[1] = &PTR_s_SCBridgeObservable_110cabe58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012f08; end: 10b012f37; -[SCCLensPlusState initWithHasAccess:isLocked:isFreemiumAvailable:freemiumGenerationsLeft:] */

void FUN_10b012f08(void)

{
  func_0x00010b013308(PTR_PTR_1127043a0);
  func_0x00010b0132bc();
  return;
}



/* Entry: 10b012f38; end: 10b012f4b; +[SCCLensPlusState valdiMarshallableObjectDescriptor] */

void FUN_10b012f38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cabe78;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012f4c; end: 10b012f6b; -[SCDreamsGeneratedDreamsInPackViewModel init] */

void FUN_10b012f4c(void)

{
  func_0x00010b0132cc(PTR_PTR_1127043a8);
  return;
}



/* Entry: 10b012f6c; end: 10b012f7f; +[SCDreamsGeneratedDreamsInPackViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b012f6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cabf08;
  param_1[1] = &PTR_DAT_110cabf68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012f80; end: 10b012f9f; -[SCDreamsGeneratedDreamsViewModel init] */

void FUN_10b012f80(void)

{
  func_0x00010b0132cc(PTR_PTR_1127043b0);
  return;
}



/* Entry: 10b012fa0; end: 10b012fbf; +[SCDreamsGeneratedDreamsViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b012fa0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cabfc0;
  param_1[1] = &PTR_s_SCBridgeObservable_110cac050;
  param_1[2] = &PTR_DAT_110cabf90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b012fc0; end: 10b012fef;  */

undefined8 FUN_10b012fc0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2,param_2[2],param_2[3],param_2[4]);
  return 0;
}



/* Entry: 10b012ff0; end: 10b01303f;  */

void FUN_10b012ff0(void)

{
  func_0x00010b013428();
  func_0x00010b0133e0();
  func_0x00010b01332c(0x10b013278);
  func_0x00010b0133f0();
  func_0x00010b013374();
  func_0x00010b013348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b013040; end: 10b013097; -[SCDreamsPackViewModel initWithDreamsProductObservable:onDreamsPackPrice:] */

void FUN_10b013040(void)

{
  func_0x00010b0132e0();
  func_0x00010b0133b4();
  func_0x00010b01333c();
  func_0x00010b013318(&stack0xffffffffffffffc0);
  func_0x00010b013320();
  func_0x00010b013348();
  return;
}



/* Entry: 10b013098; end: 10b0130ab; +[SCDreamsPackViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b013098(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cac080;
  param_1[1] = &PTR_s_SCBridgeObservable_110cac0c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0130ac; end: 10b0130d7; -[SCDreamsPaymentResult initWithGenerationId:] */

void FUN_10b0130ac(void)

{
  func_0x00010b013308(PTR_PTR_1127043c0);
  func_0x00010b0132bc();
  return;
}



/* Entry: 10b0130d8; end: 10b0130eb; +[SCDreamsPaymentResult valdiMarshallableObjectDescriptor] */

void FUN_10b0130d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cac0e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0130ec; end: 10b013153; -[SCDreamsPaymentWorkflowContext initWithPrimaryIdentityObservable:paymentResultObservable:onPurchasePack:] */

undefined1 * FUN_10b0130ec(void)

{
  undefined1 *puVar1;
  
  func_0x00010b013448();
  _objc_retain();
  func_0x00010b013408();
  func_0x00010b0133b4();
  func_0x00010b01333c();
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b013318(puVar1);
  func_0x00010b013350();
  func_0x00010b013388();
  func_0x00010b013348();
  return puVar1;
}



/* Entry: 10b013154; end: 10b013167; +[SCDreamsPaymentWorkflowContext valdiMarshallableObjectDescriptor] */

void FUN_10b013154(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cac140;
  param_1[1] = &PTR_s_SCBridgeObservable_110cac1a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013168; end: 10b013197; -[SCDreamsTabAnalyticsContext initWithBlizzardLogger:] */

void FUN_10b013168(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127043d0;
  uStack_20 = param_1;
  func_0x00010b01333c();
  func_0x00010b013318(&uStack_20);
  return;
}



/* Entry: 10b013198; end: 10b0131ab; +[SCDreamsTabAnalyticsContext valdiMarshallableObjectDescriptor] */

void FUN_10b013198(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_110cac1c0;
  param_1[1] = &PTR_s_SCCBlizzardLogging_110cac208;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0131ac; end: 10b0131f7; -[SCDreamsTabContext initWithNavigator:] */

void FUN_10b0131ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b013308(PTR_PTR_1127043d8);
  func_0x00010b013318(auStack_20);
  return;
}



/* Entry: 10b0131f8; end: 10b01320b; +[SCDreamsTabContext valdiMarshallableObjectDescriptor] */

void FUN_10b0131f8(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110cac220;
  param_1[1] = &PTR_s_SCValdiINavigator_110cac388;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b01320c; end: 10b01322b; -[SCDreamsTabViewModel init] */

void FUN_10b01320c(void)

{
  func_0x00010b0132cc(PTR_PTR_1127043e0);
  return;
}



/* Entry: 10b01322c; end: 10b01323f; +[SCDreamsTabViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b01322c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cac400;
  param_1[1] = &PTR_DAT_110cac4c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013240; end: 10b0132ab;  */

void FUN_10b013240(void)

{
  func_0x00010b013390();
  return;
}



/* Entry: 10b0132ac; end: 10b01345b;  */

void FUN_10b0132ac(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b01345c; end: 10b0134ef; -[SCCFriendPickerContext initWithCancel:didComplete:] */

undefined8 *
FUN_10b01345c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1127043e8;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  func_0x00010b0135b4(puVar2,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b0134f0; end: 10b013503; +[SCCFriendPickerContext valdiMarshallableObjectDescriptor] */

void FUN_10b0134f0(undefined8 *param_1)

{
  *param_1 = &PTR_s_cancel_110cac520;
  param_1[1] = &PTR_DAT_110cac568;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013504; end: 10b01353f; -[SCCFriendPickerItem initWithUserId:displayName:] */

void FUN_10b013504(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127043f0;
  uStack_20 = param_1;
  func_0x00010b0135b4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b013540; end: 10b013557; +[SCCFriendPickerItem valdiMarshallableObjectDescriptor] */

void FUN_10b013540(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110cac578;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013558; end: 10b01358f; -[SCCFriendPickerViewModel initWithItems:] */

void FUN_10b013558(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127043f8;
  uStack_20 = param_1;
  func_0x00010b0135b4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b013590; end: 10b0135bb; +[SCCFriendPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b013590(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cac5f0;
  param_1[1] = &PTR_DAT_110cac638;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0135bc; end: 10b0135c3; -[SCCDreamsGenerationStatus__Enum init] */

void FUN_10b0135bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b0135c4; end: 10b0135cb; -[SCCDreamsRarity__Enum init] */

void FUN_10b0135c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b0135cc; end: 10b0135d3; -[SCCGenAIType__Enum init] */

void FUN_10b0135cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b0135d4; end: 10b01369b; -[SCCAISnapLensDescriptor__Enum init] */

undefined8 FUN_10b0135d4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010b013b30();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0();
  _objc_release(uVar1);
  func_0x00010b013b90(uVar2);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lRam00000001137f2350 != -1) {
    func_0x000107c27d9c(0x1137f2350,&PTR___NSConcreteGlobalBlock_110cac648);
  }
  uVar1 = uRam00000001137f2358;
  _objc_retain(uRam00000001137f2358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return uVar1;
}



/* Entry: 10b01369c; end: 10b0136f7;  */

void FUN_10b01369c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b013b30();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001137f2358;
  uRam00000001137f2358 = param_1;
  _objc_release(uVar1);
  func_0x00010b013b90(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10b0136f8;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010b013b20(PTR_PTR_112704400);
  func_0x00010b013b80(auStack_70);
  return;
}



/* Entry: 10b0136f8; end: 10b013727; -[SCCAISnapsLens initWithLensId:name:thumbnailUrl:descriptors:] */

void FUN_10b0136f8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b013b20(PTR_PTR_112704400);
  func_0x00010b013b80(auStack_20);
  return;
}



/* Entry: 10b013728; end: 10b01373b; +[SCCAISnapsLens valdiMarshallableObjectDescriptor] */

void FUN_10b013728(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110cac668;
  param_1[1] = &PTR_DAT_110cac6e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b01373c; end: 10b01376f; -[SCCDreamsApiDreamsTweaks init] */

void FUN_10b01373c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704408;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b013770; end: 10b01377f; +[SCCDreamsApiDreamsTweaks valdiMarshallableObjectDescriptor] */

void FUN_10b013770(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cac6f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b013780; end: 10b0137af; -[SCCDreamsMetadata initWithDreamId:dreamPackId:identities:userIds:] */

void FUN_10b013780(void)

{
  func_0x00010b013b20(PTR_PTR_112704410);
  func_0x00010b013b04();
  return;
}



/* Entry: 10b0137b0; end: 10b0137bf; +[SCCDreamsMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b0137b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_dreamId_110cac738;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0137c0; end: 10b0137e7; -[SCCDreamsNotification initWithNotificationId:notificationType:] */

void FUN_10b0137c0(void)

{
  func_0x00010b013b20(PTR_PTR_112704418);
  func_0x00010b013b04();
  return;
}



/* Entry: 10b0137e8; end: 10b0137f7; +[SCCDreamsNotification valdiMarshallableObjectDescriptor] */

void FUN_10b0137e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cac7c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


