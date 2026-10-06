/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10591beac; end: 10591c0bf;  */

/* WARNING: Possible PIC construction at 0x00010591c0d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010591c0d8) */

void FUN_10591beac(double param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c252ee0(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)(param_2 + 0x20) != 0) {
    _CACurrentMediaTime();
    func_0x00010bfb0860(param_1 - *(double *)(param_2 + 0x40),PTR_PTR_1126c02c0);
    func_0x00010bfec580(PTR_PTR_1126c02c8);
  }
  lVar5 = param_3;
  if ((param_4 == 0) || (param_5 != 0)) {
    if (*(long *)(param_2 + 0x28) != 0) {
      func_0x00010bfec580(PTR_PTR_1126c02c8);
    }
    lVar7 = *(long *)(param_2 + 0x38);
    if (lVar7 == 0) goto LAB_10591c068;
    lVar4 = param_3;
    func_0x00010c252ee0(param_3);
    func_0x00010bf001c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,param_4,param_5,lVar4,lVar5);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x30);
    if (lVar7 == 0) goto LAB_10591c068;
    lVar4 = param_3;
    func_0x00010c252ee0(param_3);
    func_0x00010bf001c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,param_4,lVar4,lVar5);
  }
  _objc_release(lVar5);
LAB_10591c068:
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x80),PTR_s_clearPersistedRequests_1125ac8c8);
  return;
}



/* Entry: 10591c0c0; end: 10591c0ef; -[SCGtqNetworkController invalidate] */

/* WARNING: Possible PIC construction at 0x00010591c0d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010591c0d8) */

void FUN_10591c0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_clearPersistedRequests_1125ac8c8);
  return;
}



/* Entry: 10591c0f0; end: 10591c287; -[SCGtqNetworkController submitRetryRequest:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10591c0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10591c288;
  puStack_80 = &UNK_1108ab730;
  uStack_78 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  _objc_retainBlock(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10591c294;
  puStack_a8 = &UNK_1108a0d30;
  uStack_a0 = param_7;
  _objc_retain(param_7);
  _objc_retainBlock(&puStack_c0);
  uVar4 = param_3;
  func_0x00010c2721c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f660();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 10591c288; end: 10591c293;  */

void FUN_10591c288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010591c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10591c294; end: 10591c2c3;  */

void FUN_10591c294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252ee0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010591c2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  return;
}



/* Entry: 10591c2c4; end: 10591c327; -[SCGtqNetworkController retriableRequestManager] */

void FUN_10591c2c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x80);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10591c328; end: 10591c38b; -[SCGtqNetworkController retriableViewRequestManager] */

void FUN_10591c328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    _objc_release(uVar2);
    func_0x00010c200b60(*(undefined8 *)(param_1 + 0x88),param_2,
                        &PTR___NSConcreteGlobalBlock_1108c0310);
    lVar3 = *(long *)(param_1 + 0x88);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10591c38c; end: 10591c3ef; -[SCGtqNetworkController retriableCreationRequestManager] */

void FUN_10591c38c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    _objc_release(uVar2);
    func_0x00010c200b60(*(undefined8 *)(param_1 + 0x90),param_2,
                        &PTR___NSConcreteGlobalBlock_1108c0310);
    lVar3 = *(long *)(param_1 + 0x90);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10591c3f0; end: 10591c3ff; -[SCGtqNetworkController retrieveAdsCommonRequestData] */

void FUN_10591c3f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126b7d78;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar6);
  _objc_alloc(puVar3);
  func_0x00010bff1280();
  _objc_release(uVar2);
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126c02a8;
  _objc_opt_new(PTR_PTR_1126c02a8);
  puVar5 = puVar3;
  func_0x00010bf075a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010befdf00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c700(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010c0d7700(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbfe0(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010bef3f80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1dfdc0(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10591c400; end: 10591c4eb; -[SCGtqNetworkController .cxx_destruct] */

void FUN_10591c400(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10591c4ec; end: 10591c65b;  */

undefined ** FUN_10591c4ec(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c252ee0();
  puVar4 = PTR_PTR_1126c02c8;
  if (lVar1 == 0x191) {
    puVar2 = PTR_PTR_1126c02b8;
    func_0x00010bdc21a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec580(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (param_2 == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c252ee0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 < 500) {
      func_0x00010c252ee0(param_2);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_11117f048;
      func_0x00010bf4b900();
      _objc_release(puVar4);
    }
    else {
      ppuVar6 = (undefined **)0x1;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  ppuVar6 = (undefined **)PTR_PTR_1126c02d0;
  _objc_alloc_init(PTR_PTR_1126c02d0);
  puVar4 = PTR_PTR_1126b0458;
  _objc_alloc_init();
  lVar1 = param_2;
  func_0x00010c089520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a20(puVar4);
  _objc_release(lVar1);
  puVar2 = puVar4;
  func_0x00010c1552c0();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c1f90c0(puVar4);
  }
  puVar2 = PTR_PTR_1126ae740;
  func_0x00010bf09f00(PTR_PTR_1126ae740);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2327a0();
  if ((int)param_2 != 0) {
    func_0x00010befc800(puVar2);
  }
  func_0x00010befc800(puVar2);
  func_0x00010c1e5f20(ppuVar6);
  func_0x00010c1b8200(ppuVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return ppuVar6;
}



/* Entry: 10591c65c; end: 10591c747; -[SCUnlockableSensitivity syncInfo] */

void FUN_10591c65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c02d0;
  _objc_alloc_init(PTR_PTR_1126c02d0);
  puVar2 = PTR_PTR_1126b0458;
  _objc_alloc_init();
  uVar3 = param_1;
  func_0x00010c089520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010c1552c0();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010c1f90c0(puVar2,param_2,1);
  }
  puVar4 = PTR_PTR_1126ae740;
  func_0x00010bf09f00(PTR_PTR_1126ae740);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2327a0();
  if ((int)param_1 != 0) {
    func_0x00010befc800(puVar4,param_2,1);
  }
  func_0x00010befc800(puVar4,param_2,0);
  func_0x00010c1e5f20(puVar1,param_2,puVar4);
  func_0x00010c1b8200(puVar1,param_2,puVar2);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591c748; end: 10591c74f; -[SCUnlockableSensitivity shouldRequestLowSensitivity] */

undefined1 FUN_10591c748(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10591c750; end: 10591c757; -[SCUnlockableSensitivity setShouldRequestLowSensitivity:] */

void FUN_10591c750(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10591c758; end: 10591c75f; -[SCUnlockableSensitivity lastLowSensitivityResponse] */

undefined8 FUN_10591c758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10591c760; end: 10591c78f; -[SCUnlockableSensitivity setLastLowSensitivityResponse:] */

void FUN_10591c760(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10591c790; end: 10591c79b; -[SCUnlockableSensitivity .cxx_destruct] */

void FUN_10591c790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10591c79c; end: 10591c7b3; -[SCUnlockableSensitivityController _isBackgroundFlushEnabled] */

void FUN_10591c79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e0dab8,0,0);
  return;
}



/* Entry: 10591c7b4; end: 10591c9cb; -[SCUnlockableSensitivityController appDidEnterBackground] */

void FUN_10591c7b4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = param_1;
  func_0x00010be3e520();
  if ((uVar1 & 1) != 0) {
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_alloc_init();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    puVar8 = *(undefined **)PTR__UIBackgroundTaskInvalid_110345af0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10591c9cc;
    puStack_90 = &UNK_11084fa08;
    puStack_68 = &uStack_70;
    puStack_58 = puVar8;
    _objc_retain();
    puStack_88 = puVar2;
    puStack_78 = &uStack_70;
    _objc_retain(puVar7);
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar7;
    _objc_retainBlock();
    puVar4 = puVar7;
    func_0x00010bf17d20();
    puStack_68[3] = puVar4;
    if (puVar4 != puVar8) {
      uVar5 = 0x11;
      _dispatch_get_global_queue(0x11,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar6;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_10591ca58;
      puStack_c0 = &UNK_11084aaa8;
      uStack_b8 = param_1;
      _objc_retain(ppuVar3);
      ppuStack_b0 = ppuVar3;
      func_0x00010007380c(uVar5,&puStack_d8);
      _objc_release(uVar5);
      _objc_release(ppuStack_b0);
    }
    _objc_release(ppuVar3);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puVar2);
    _objc_release(puVar7);
    return;
  }
  puVar6 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c02d8;
  func_0x00010be24e20(PTR_PTR_1126c02d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14aa80(puVar6);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10591c9cc; end: 10591ca57;  */

void FUN_10591c9cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) != lVar2) {
    func_0x00010bf94260(*(undefined8 *)(param_1 + 0x28));
    *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = lVar2;
  }
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10591ca58; end: 10591cb03;  */

void FUN_10591ca58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c02d8;
  func_0x00010be24e20(PTR_PTR_1126c02d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14aa80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_sync_enter(uVar4);
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010591cb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10591cb04; end: 10591cb67; +[SCUnlockableSensitivityController removeSavedState] */

void FUN_10591cb04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c02d8;
  func_0x00010be24e20(PTR_PTR_1126c02d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10591cb68; end: 10591cb97; -[SCUnlockableSensitivityController setAppStartExperimentReader:] */

void FUN_10591cb68(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10591cb98; end: 10591cc6f; -[SCUnlockableSensitivityController initWithCoder:] */

undefined1 * FUN_10591cb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eaea0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10591cc70; end: 10591cd5f; -[SCUnlockableSensitivityController encodeWithCoder:] */

void FUN_10591cc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10591cd60;
  puStack_48 = &UNK_110841f80;
  _objc_retain(param_3);
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retainBlock();
  uVar2 = param_1;
  func_0x00010be3e520();
  if ((int)uVar2 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10591cd60; end: 10591cdb7;  */

/* WARNING: Possible PIC construction at 0x00010591cd84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010591cd88) */

void FUN_10591cd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_encodeObject_forKey__1125c25b0,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
             &PTR____CFConstantStringClassReference_110e0daf8);
  return;
}



/* Entry: 10591cdb8; end: 10591ce6f; -[SCUnlockableSensitivityController clear] */

void FUN_10591cdb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10591ce70; end: 10591ce77; -[SCUnlockableSensitivityController fetchSensitivitySettings] */

void FUN_10591ce70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchSensitivitySettings__1125c81f8,0);
  return;
}



/* Entry: 10591ce78; end: 10591cf3f; -[SCUnlockableSensitivityController fetchSensitivitySettings:] */

void FUN_10591ce78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c02e0;
  _objc_opt_new(PTR_PTR_1126c02e0);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = param_1;
  func_0x00010bdf8040(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b81e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if ((param_3 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010beb5520(0x40ac200000000000,param_1);
  }
  else {
    uVar2 = 1;
  }
  func_0x00010c200e00(puVar1,param_2,uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591cf40; end: 10591cf43; -[SCUnlockableSensitivityController logSensitivityLoaded] */

void FUN_10591cf40(void)

{
  return;
}



/* Entry: 10591cf44; end: 10591cf9b; -[SCUnlockableSensitivityController _shouldRequestLowSensitivityWithExpiry:] */

undefined8 FUN_10591cf44(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  func_0x00010c26f320(*(undefined8 *)(param_2 + 0x18));
  if ((dVar2 == 0.0) || (func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x18)), param_1 < ABS(dVar2))
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10591cf9c; end: 10591d013; -[SCUnlockableSensitivityController _stringFromDate:] */

void FUN_10591cf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c189b60();
  puVar2 = puVar1;
  func_0x00010c25d400(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10591d014; end: 10591d057; -[SCUnlockableSensitivityController _dateForTimestamp:] */

void FUN_10591d014(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + *(long *)(&UNK_10ddc1bc8 + param_3 * 8));
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10591d058; end: 10591d153; -[SCUnlockableSensitivityController _touchTimestamp:date:] */

void FUN_10591d058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10591d154;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  uStack_40 = param_4;
  _objc_retainBlock();
  uVar2 = param_1;
  func_0x00010be3e520();
  if ((int)uVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    (*(code *)ppuVar1[2])(ppuVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10591d154; end: 10591d1a3;  */

void FUN_10591d154(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(ulong *)(param_1 + 0x30) < 3) {
    lVar4 = *(long *)(&UNK_10ddc1bc8 + *(ulong *)(param_1 + 0x30) * 8);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
    *(undefined8 *)(lVar1 + lVar4) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10591d1a4; end: 10591d1bf; -[SCUnlockableSensitivityController invalidate] */

void FUN_10591d1a4(void)

{
  func_0x00010bf3a660();
                    /* WARNING: Could not recover jumptable at 0x00010c12e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c02d8,PTR_s_removeSavedState_112629268);
  return;
}



/* Entry: 10591d1c0; end: 10591d207; -[SCUnlockableSensitivityController .cxx_destruct] */

void FUN_10591d1c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10591d208; end: 10591d3cb; -[SCGtqAdTrackProxyPersistenceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:] */

void FUN_10591d208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0290;
  _objc_alloc();
  func_0x00010c05a7a0();
  _objc_retain();
  puVar6 = puVar1;
  func_0x00010c244040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar1;
    func_0x00010c244040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c278520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205c80();
    _objc_release(uVar2);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c02b0;
    _objc_alloc(PTR_PTR_1126c02b0);
    uVar2 = param_1;
    func_0x00010c278520(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfe4420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0f5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcfe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019760(puVar6,param_2,uVar2,uVar3,uVar4,uVar5,param_1,3,param_3,param_5);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10591d3cc; end: 10591d503; -[SCGtqAdTrackProxyPersistenceRequest initWithTrackProxyRequest:host:path:key:additionalHTTPHeaders:] */

undefined1 *
FUN_10591d3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eaea8;
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



/* Entry: 10591d504; end: 10591d527; -[SCGtqAdTrackProxyPersistenceRequest copyWithZone:] */

undefined8 FUN_10591d504(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10591d528; end: 10591d64f; -[SCGtqAdTrackProxyPersistenceRequest initWithCoder:] */

undefined1 * FUN_10591d528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eaea8;
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



/* Entry: 10591d650; end: 10591d6eb; -[SCGtqAdTrackProxyPersistenceRequest encodeWithCoder:] */

void FUN_10591d650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e0db78);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110df2dd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dbfab8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110dc1758);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e0db98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10591d6ec; end: 10591d6f3; -[SCGtqAdTrackProxyPersistenceRequest preferFasterCoding] */

undefined8 FUN_10591d6ec(void)

{
  return 1;
}



/* Entry: 10591d6f4; end: 10591d767; -[SCGtqAdTrackProxyPersistenceRequest encodeWithFasterCoder:] */

void FUN_10591d6f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10591d768; end: 10591d83b; -[SCGtqAdTrackProxyPersistenceRequest decodeWithFasterDecoder:] */

void FUN_10591d768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10591d83c; end: 10591d93b; -[SCGtqAdTrackProxyPersistenceRequest setObject:forUInt64Key:] */

void FUN_10591d83c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0xa4daa37ee18cb9) {
    if (param_4 == 0x33e79e5c4c811) {
      lVar2 = 0x20;
    }
    else {
      if (param_4 != 0x8634b93a20081) goto LAB_10591d928;
      lVar2 = 0x28;
    }
  }
  else if (param_4 == 0xa4daa37ee18cb9) {
    lVar2 = 8;
  }
  else if (param_4 == 0xb78452146e14b0) {
    lVar2 = 0x18;
  }
  else {
    if (param_4 != 0xeb22e10233f861) goto LAB_10591d928;
    lVar2 = 0x10;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10591d928:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10591d93c; end: 10591d94f; +[SCGtqAdTrackProxyPersistenceRequest fasterCodingVersion] */

undefined8 FUN_10591d93c(void)

{
  return 0xa50fd8c3a7b3f464;
}



/* Entry: 10591d950; end: 10591d95b; +[SCGtqAdTrackProxyPersistenceRequest fasterCodingKeys] */

undefined8 FUN_10591d950(void)

{
  return 0x11310e490;
}



/* Entry: 10591d95c; end: 10591d977; -[SCGtqAdTrackProxyPersistenceRequest isEqual:] */

undefined8 * FUN_10591d95c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x1136c1720;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 5;
  lVar5 = 5;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam00000001136c1718 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x1136c1720) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam00000001136c1718 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 10591d978; end: 10591d98b; -[SCGtqAdTrackProxyPersistenceRequest hash] */

ulong FUN_10591d978(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x1136c1720;
  if ((bRam00000001136c1718 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 5;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x1136c1720) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam00000001136c1718 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam00000001136c1720);
  func_0x00010bfde980(uVar3);
  lVar7 = 4;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 10591d98c; end: 10591d993; -[SCGtqAdTrackProxyPersistenceRequest trackProxyRequest] */

undefined8 FUN_10591d98c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10591d994; end: 10591d99b; -[SCGtqAdTrackProxyPersistenceRequest host] */

undefined8 FUN_10591d994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10591d99c; end: 10591d9a3; -[SCGtqAdTrackProxyPersistenceRequest path] */

undefined8 FUN_10591d99c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10591d9a4; end: 10591d9ab; -[SCGtqAdTrackProxyPersistenceRequest key] */

undefined8 FUN_10591d9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10591d9ac; end: 10591d9b3; -[SCGtqAdTrackProxyPersistenceRequest additionalHTTPHeaders] */

undefined8 FUN_10591d9ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10591d9b4; end: 10591da07; -[SCGtqAdTrackProxyPersistenceRequest .cxx_destruct] */

void FUN_10591d9b4(long param_1)

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



/* Entry: 10591da08; end: 10591dc93; -[SCUnlockableViewTracker initWithAdsRequestProvider:unlockablesGtqNetworkRequestManager:applicationPreferences:userAdIdProvider:grapheneRegistry:adsUserInfoProvider:adConfigProvider:trackerConfig:spectrumLogger:networkConnectivityAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10591da08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126eaeb0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b91a0;
    _objc_alloc();
    func_0x00010c02f120();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c02e8;
    _objc_alloc();
    func_0x00010bff1060();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272c3a8) = 0;
  }
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 10591dc94; end: 10591dd3f; -[SCUnlockableViewTracker fireTrackWithDuration:mediaDurationSec:encGeoData:unlockablesSnapInfo:viewType:snappableInviteAction:] */

void FUN_10591dc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bdf2060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb07c0(param_1,param_2,uVar1,0,param_6,0,
                      &PTR____CFConstantStringClassReference_110e0dbb8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10591dd40; end: 10591dda7; -[SCUnlockableViewTracker trackAttachmentViewWithAdId:] */

void FUN_10591dd40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c02f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c019d40();
  _objc_release(param_3);
  func_0x00010bea5160(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10591dda8; end: 10591e603; -[SCUnlockableViewTracker _createProtoTrackWithDuration:mediaDurationSec:encGeoData:unlockablesSnapInfo:viewType:snappableInviteAction:] */

undefined *
FUN_10591dda8(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c02f8;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c0304c0();
  func_0x00010c2157c0(puVar1,param_3,puVar11);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c0304c0();
  func_0x00010c1c4620(puVar1,param_3,puVar11);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c07a4e0();
  func_0x00010bff91e0(puVar11,param_3,puVar3);
  func_0x00010c1af440(puVar1,param_3,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar2);
  lVar4 = param_6;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    func_0x00010c1955e0(puVar1,param_3,0);
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955e0(puVar1,param_3,puVar11);
    _objc_release(puVar11);
  }
  puVar2 = PTR_PTR_1126c0310;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126c0318;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd20();
  func_0x00010c0df720(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar5,param_3,puVar11);
  func_0x00010c2256c0(puVar3,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar14);
  puVar5 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd00();
  func_0x00010c0df720(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar5,param_3,puVar11);
  func_0x00010c1a7d00(puVar3,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar14);
  func_0x00010c1f7040(puVar2,param_3,puVar3);
  func_0x00010c18c9e0(puVar1,param_3,puVar2);
  puVar11 = param_2;
  func_0x00010be21c60(param_2,param_3,param_8);
  func_0x00010c205ba0(puVar1,param_3,puVar11);
  if (param_9 == 1) {
    uVar13 = 1;
LAB_10591e098:
    func_0x00010c2061e0(puVar1,param_3,uVar13);
  }
  else if (param_9 == 2) {
    uVar13 = 2;
    goto LAB_10591e098;
  }
  lVar4 = param_7;
  func_0x00010c08fa60();
  puVar11 = puVar2;
  if (lVar4 == 0) goto LAB_10591e2d4;
  puVar5 = PTR_PTR_1126c0328;
  _objc_alloc();
  puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = 0;
  func_0x00010c008360(puVar5,param_3,puVar14,&lStack_f8);
  lVar4 = lStack_f8;
  _objc_retain(lStack_f8);
  _objc_release(puVar14);
  if (lVar4 == 0) {
    puVar14 = puVar5;
    func_0x00010c08bdc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x00010c08fa60();
    _objc_release(puVar14);
    if (puVar6 == (undefined *)0x0) {
      puVar14 = puVar5;
      func_0x00010c098340();
      if (puVar14 == (undefined *)0x0) goto LAB_10591e2c4;
      param_1 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      puVar6 = puVar5;
      func_0x00010c098320();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010bf52a60();
      puVar14 = (undefined *)0x0;
      if (puVar15 != (undefined *)0x0) {
        lVar16 = *plStack_130;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar16) {
              _objc_enumerationMutation(puVar6);
            }
            puVar14 = *(undefined **)(lStack_138 + (long)puVar11 * 8);
            puVar7 = puVar14;
            func_0x00010bef2c20();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c08fa60();
            _objc_release(puVar7);
            if (puVar8 != (undefined *)0x0) {
              func_0x00010bef2c20();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_10591e230;
            }
            puVar11 = puVar11 + 1;
          } while (puVar15 != puVar11);
          puVar15 = puVar6;
          func_0x00010bf52a60(puVar6,param_3,&uStack_140,auStack_f0,0x10);
        } while (puVar15 != (undefined *)0x0);
        puVar14 = (undefined *)0x0;
      }
LAB_10591e230:
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c0330;
    }
    else {
      puVar14 = puVar5;
      func_0x00010c08bdc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c0330;
    }
    PTR_PTR_1126c0330 = puVar6;
    if (puVar14 != (undefined *)0x0) {
      _objc_opt_new(puVar6);
      func_0x00010c163720();
      puVar15 = param_2;
      func_0x00010c088320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar15 != (undefined *)0x0) {
        puVar15 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        func_0x00010c01e4a0();
        func_0x00010c225cc0(puVar6,param_3,puVar15);
        _objc_release(puVar15);
        func_0x00010bea5160(param_2,param_3,0);
      }
      func_0x00010c207fe0(puVar1,param_3,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar14);
    }
  }
LAB_10591e2c4:
  _objc_release(puVar5);
  _objc_release(lVar4);
LAB_10591e2d4:
  puVar5 = PTR_PTR_1126b92e0;
  _objc_opt_new(PTR_PTR_1126b92e0);
  func_0x00010c164dc0();
  func_0x00010c21bd20(puVar5,param_3,puVar1);
  puVar14 = PTR_PTR_1126c0338;
  _objc_opt_new(PTR_PTR_1126c0338);
  puVar6 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar9 = *(long *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bfc8bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar4;
  func_0x00010bfc20c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar16;
  func_0x00010c08fa60();
  if (lVar10 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar11 = *(undefined **)(param_2 + 0x38);
    func_0x00010c269d40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    param_2 = puVar11;
    func_0x00010bfc8bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_2;
    func_0x00010bfc20c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar6,param_3,puVar15);
  func_0x00010c1fda20(puVar14,param_3,puVar6);
  _objc_release(puVar6);
  if (lVar10 != 0) {
    _objc_release(puVar15);
    _objc_release(param_2);
    _objc_release(puVar11);
  }
  _objc_release(lVar16);
  _objc_release(lVar4);
  _objc_release(lVar9);
  func_0x00010c1ab240(puVar14,param_3,puVar5);
  puVar6 = PTR_PTR_1126c0340;
  _objc_opt_new(PTR_PTR_1126c0340);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_3,puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6460(puVar6,param_3,puVar11);
  _objc_release(puVar11);
  puVar15 = PTR_PTR_1126c0348;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(param_1 * 1000.0,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar7,param_3,puVar11);
  func_0x00010c185760(puVar15,param_3,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c1cf8e0(puVar15,param_3,puVar11);
  _objc_release(puVar11);
  func_0x00010c1ae980(puVar15,param_3,puVar6);
  puVar11 = PTR_PTR_1126c0358;
  _objc_opt_new(PTR_PTR_1126c0358);
  puVar7 = PTR_PTR_1126c0360;
  _objc_opt_new(PTR_PTR_1126c0360);
  lVar4 = param_7;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778,param_3,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bd80(puVar7,param_3,puVar8);
    _objc_release(puVar8);
  }
  func_0x00010c204860(puVar11,param_3,puVar7);
  puVar8 = puVar15;
  func_0x00010c218ec0(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  uVar12 = (uint)puVar8;
  if ((undefined *)0x8 < puVar8) {
    uVar12 = 2;
  }
  return (undefined *)(ulong)uVar12;
}



/* Entry: 10591e604; end: 10591e613; -[SCUnlockableViewTracker _getProtoSnapViewType:] */

undefined4 FUN_10591e604(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_3;
  if (8 < param_3) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10591e614; end: 10591e667; -[SCUnlockableViewTracker lastAttachmentInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591e614(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272c3a8;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272c3ac);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10591e668; end: 10591e6bf; -[SCUnlockableViewTracker _setLastAttachmentInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591e668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11272c3a8;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272c3ac);
  *(undefined8 *)(param_1 + _DAT_11272c3ac) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 10591e6c0; end: 10591e6d3; -[SCUnlockableViewTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591e6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272c3ac,0);
  return;
}



/* Entry: 10591e6d4; end: 10591e75b; -[SCUnlockablesAttachmentInteraction initWithHasOpened:adId:] */

undefined1 *
FUN_10591e6d4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaeb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10591e75c; end: 10591e77f; -[SCUnlockablesAttachmentInteraction copyWithZone:] */

undefined8 FUN_10591e75c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10591e780; end: 10591e7e3; -[SCUnlockablesAttachmentInteraction hash] */

ulong * FUN_10591e780(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10591e868;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_10591e868;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10591e868;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10591e868:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10591e7e4; end: 10591e883; -[SCUnlockablesAttachmentInteraction isEqual:] */

long FUN_10591e7e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10591e868;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10591e868;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10591e868;
    }
  }
  lVar3 = 1;
LAB_10591e868:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10591e884; end: 10591e88b; -[SCUnlockablesAttachmentInteraction hasOpened] */

undefined1 FUN_10591e884(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10591e88c; end: 10591e893; -[SCUnlockablesAttachmentInteraction adId] */

undefined8 FUN_10591e88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10591e894; end: 10591e89f; -[SCUnlockablesAttachmentInteraction .cxx_destruct] */

void FUN_10591e894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10591e8a0; end: 10591e8cb; +[SCGrapheneUnlockableMainAppMetric gtqServeSensitivity] */

void FUN_10591e8a0(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591e8cc; end: 10591e8f7; +[SCGrapheneUnlockableMainAppMetric checksumMismatch] */

void FUN_10591e8cc(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591e8f8; end: 10591e923; +[SCGrapheneUnlockableMainAppMetric checksumMissing] */

void FUN_10591e8f8(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591e924; end: 10591e94f; +[SCGrapheneUnlockableMainAppMetric checksumListSizeRequest] */

void FUN_10591e924(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591e950; end: 10591e97b; +[SCGrapheneUnlockableMainAppMetric checksumListSizeResponse] */

void FUN_10591e950(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591e97c; end: 10591e9a7; +[SCGrapheneUnlockableMainAppMetric fullGeofilterSizeResponse] */

void FUN_10591e97c(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591e9a8; end: 10591e9d3; +[SCGrapheneUnlockableMainAppMetric excludeSensitivity] */

void FUN_10591e9a8(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591e9d4; end: 10591e9ff; +[SCGrapheneUnlockableMainAppMetric zeroCaptionStyle] */

void FUN_10591e9d4(void)

{
  _objc_alloc(PTR_PTR_1126c0368);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10591ea00; end: 10591ea9f; -[SCGrapheneUnlockableMainAppMetric description] */

void FUN_10591ea00(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0dbd8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e0dbd8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126eaec0;
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



/* Entry: 10591eaa0; end: 10591ec27; -[SCGrapheneRegistry unlockableMainAppGraphene] */

void FUN_10591eaa0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10591eb28;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1750 != -1) {
    func_0x00010002a2fc(0x1136c1750,&puStack_48);
  }
  uVar1 = uRam00000001136c1748;
  _objc_retain(uRam00000001136c1748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10591ec28; end: 10591ec9b; -[SCUnlockablesRequestInfoProvider initWithCountryCodeProvider:] */

undefined1 * FUN_10591ec28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eaec8;
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



/* Entry: 10591ec9c; end: 10591edff; -[SCUnlockablesRequestInfoProvider requestInfo] */

void FUN_10591ec9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_PTR_1126c0370;
  _objc_alloc_init(PTR_PTR_1126c0370);
  uVar2 = param_1;
  func_0x00010bdea040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184aa0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_opt_class(param_1);
  func_0x00010bdc3d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160c80(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2158a0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0378;
  _objc_alloc_init(PTR_PTR_1126c0378);
  func_0x00010c1f7600(0);
  uVar5 = 0;
  uVar6 = 0;
  func_0x00010c1f71a0(0,puVar3);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd20();
  func_0x00010c1f7640(puVar3,param_2,(int)(double)CONCAT44(uVar6,uVar5));
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd00();
  func_0x00010c1f71e0(puVar3,param_2,(int)(double)CONCAT44(uVar6,uVar5));
  _objc_release(puVar4);
  func_0x00010c1f7220(puVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10591ee00; end: 10591eebf; +[SCUnlockablesRequestInfoProvider _acceptLanguageString] */

void FUN_10591ee00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0dff20(puVar1,param_2,*(undefined8 *)PTR__NSLocaleCountryCode_11034aa58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10591eec0; end: 10591ef2b; -[SCUnlockablesRequestInfoProvider _countryCode] */

void FUN_10591eec0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = *(undefined ***)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f13d78;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10591ef2c; end: 10591ef37; -[SCUnlockablesRequestInfoProvider .cxx_destruct] */

void FUN_10591ef2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10591ef38; end: 10591f0a3; -[SCFideliusNotificationProcessor initWithUserSession:fideliusManager:notificationPayloadDecryptor:circumstanceEngine:logger:] */

undefined1 *
FUN_10591ef38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eaed0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    func_0x00010be66720(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10591f0a4; end: 10591f0c7; -[SCFideliusNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_10591f0a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c11c420();
  uVar1 = 2;
  if (param_3 != 0x69) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10591f0c8; end: 10591f1d3; -[SCFideliusNotificationProcessor processNotification:] */

void FUN_10591f0c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x69) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c09d460();
    if (lVar1 != 10) {
      lVar1 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4a80();
        _objc_release(uVar4);
        func_0x00010bfab2a0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e0dd78);
      }
      else {
        func_0x00010be5fd40(param_1,param_2,param_3,lVar2);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10591f1d4; end: 10591f23f; -[SCFideliusNotificationProcessor _observeNotifications] */

void FUN_10591f1d4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x000105947368();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10591f240; end: 10591f43f; -[SCFideliusNotificationProcessor _ackRetryServiceReadyV2:] */

void FUN_10591f240(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar1);
  puVar5 = &uStack_140;
  lVar15 = lVar1;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar18 = *plStack_130;
    do {
      lVar16 = 0;
      do {
        if (*plStack_130 != lVar18) {
          _objc_enumerationMutation(lVar1);
        }
        uVar17 = *(undefined8 *)(lStack_138 + lVar16 * 8);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar2;
        func_0x00010c15f960();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar13;
        func_0x00010beedaa0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_f8 = uVar17;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1152e0(uVar3);
        _objc_release(puVar4);
        _objc_release(uVar3);
        _objc_release(uVar13);
        _objc_release(uVar2);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      puVar5 = &uStack_140;
      lVar15 = lVar1;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010c08fa60();
  if (puVar5 == (undefined8 *)0x0) {
    uVar13 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4a80();
    _objc_release(uVar13);
    ppuVar19 = (undefined **)0x0;
  }
  else {
    uVar7 = *(ulong *)(param_3 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf67800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010bf679e0();
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if ((uVar7 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_3 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4a80();
      _objc_release(uVar13);
      ppuVar19 = (undefined **)0x0;
    }
    else {
      uVar7 = uVar8;
      func_0x00010bf67980(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(uVar7);
      puVar9 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar9;
      func_0x00010c08fa60();
      if (puVar12 == (undefined *)0x0) {
        puVar12 = *(undefined **)(param_3 + 0x40);
        func_0x00010c269d40(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4a80();
        ppuVar19 = (undefined **)0x0;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x00010bff6b20();
        puVar10 = PTR_PTR_1126c0380;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar10 == (undefined *)0x0) {
          uVar13 = *(undefined8 *)(param_3 + 0x40);
          func_0x00010c269d40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a4a80();
          _objc_release(uVar13);
          ppuVar19 = (undefined **)0x0;
        }
        else {
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          param_2 = &PTR___NSConcreteGlobalBlock_1108c0380;
          ppuVar19 = ppuVar11;
          func_0x00010050471c();
          _objc_release(ppuVar11);
        }
        _objc_release(puVar10);
        _objc_release(0);
      }
      _objc_release(puVar12);
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(0);
    }
    _objc_release(uVar8);
  }
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    func_0x00010c064f20(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar11;
    func_0x00010bfe2ee0();
    ppuVar19 = ppuVar11;
    func_0x00010c0b5940(ppuVar11);
    func_0x000100c4a928(ppuVar14,ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar14;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    _objc_release(ppuVar11);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar19);
  return;
}



/* Entry: 10591f440; end: 10591f77b; -[SCFideliusNotificationProcessor _decryptNotification:manager:] */

void FUN_10591f440(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4a80();
    _objc_release(uVar10);
    ppuVar13 = (undefined **)0x0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf67800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010bf679e0();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if ((uVar3 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4a80();
      _objc_release(uVar10);
      ppuVar13 = (undefined **)0x0;
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf67980(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(uVar3);
      puVar6 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c08fa60();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = *(undefined **)(param_1 + 0x40);
        func_0x00010c269d40(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4a80();
        ppuVar13 = (undefined **)0x0;
      }
      else {
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x00010bff6b20();
        puVar7 = PTR_PTR_1126c0380;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar7 == (undefined *)0x0) {
          uVar10 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a4a80();
          _objc_release(uVar10);
          ppuVar13 = (undefined **)0x0;
        }
        else {
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          param_2 = &PTR___NSConcreteGlobalBlock_1108c0380;
          ppuVar13 = ppuVar8;
          func_0x00010050471c();
          _objc_release(ppuVar8);
        }
        _objc_release(puVar7);
        _objc_release(0);
      }
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(0);
    }
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    func_0x00010c064f20(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar8;
    func_0x00010bfe2ee0();
    ppuVar13 = ppuVar8;
    func_0x00010c0b5940(ppuVar8);
    func_0x000100c4a928(ppuVar11,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar11;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(ppuVar8);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 10591f77c; end: 10591f813;  */

void FUN_10591f77c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c064f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe2ee0();
  uVar3 = uVar1;
  func_0x00010c0b5940(uVar1);
  func_0x000100c4a928(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10591f814; end: 10591f923;  */

void FUN_10591f814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar5 = PTR_PTR_1126c0388;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c064f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe2ee0();
  uVar4 = uVar2;
  func_0x00010c0b5940(uVar2);
  func_0x000100c4a928(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c272200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10591f924; end: 10591fbcf; -[SCFideliusNotificationProcessor _decryptNotificationV2:manager:] */

void FUN_10591f924(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lStack_70;
  long lStack_68;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4a80();
    _objc_release(uVar10);
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf67800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010bf679e0();
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4a80();
      _objc_release(uVar10);
      puVar11 = (undefined *)0x0;
    }
    else {
      uVar4 = uVar5;
      func_0x00010bf67980(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lStack_68 = 0;
      func_0x00010bdc1900(puVar6,param_2,uVar4,0,&lStack_68);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lStack_68;
      _objc_retain(lStack_68);
      _objc_release(uVar4);
      puVar11 = (undefined *)0x0;
      if (lVar3 == 0) {
        puVar7 = puVar6;
        func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e0ddf8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010c08fa60();
        if (puVar11 == (undefined *)0x0) {
          puVar9 = *(undefined **)(param_1 + 0x40);
          func_0x00010c269d40(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a4a80();
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
          _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
          func_0x00010bff6b20();
          lStack_70 = 0;
          puVar8 = PTR_PTR_1126c0380;
          func_0x00010c0f40e0(PTR_PTR_1126c0380,param_2,puVar9,&lStack_70);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lStack_70;
          _objc_retain(lStack_70);
          if ((puVar8 == (undefined *)0x0) || (lVar1 != 0)) {
            uVar10 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010c269d40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a4a80();
            _objc_release(uVar10);
            puVar11 = (undefined *)0x0;
          }
          else {
            _objc_retain(puVar8);
            puVar11 = puVar8;
          }
          _objc_release(puVar8);
          _objc_release(lVar1);
        }
        _objc_release(puVar9);
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      _objc_release(lVar3);
    }
    _objc_release(uVar5);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10591fbd0; end: 10591fd77; -[SCFideliusNotificationProcessor _meshNotificationFlowV2:manager:] */

void FUN_10591fbd0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bdf8b20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bfab2a0(param_4);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4a80();
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c15f960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beedaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      _os_unfair_lock_lock(param_1 + 0x38);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
      _os_unfair_lock_unlock(param_1 + 0x38);
    }
    else {
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1152e0(lVar4);
      _objc_release(param_1);
    }
    _objc_release(lVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x38);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10591fd78; end: 10591fde3; -[SCFideliusNotificationProcessor .cxx_destruct] */

void FUN_10591fd78(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10591fde4; end: 105920037; -[SCFideliusNotificationProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10591fde4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0390;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11272c3e4;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272c3e8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfac560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272c3ec;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0dc5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272c3f0;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d9c0();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11272c3f4);
  *(undefined **)(param_1 + _DAT_11272c3f4) = puVar2;
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  param_1 = param_1 + _DAT_11272c3f8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105920038; end: 10592010f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105920038(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bd028;
    _objc_alloc(PTR_PTR_1126bd028);
    lVar1 = param_1 + _DAT_11272c3dc;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11272c3e0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c292f40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0180a0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105920110; end: 1059201c3; -[SCFideliusNotificationProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105920110(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_11272c3f8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126eaed8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


