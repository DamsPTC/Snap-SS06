/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10505ba58; end: 10505ba93; -[SCMyProfileEntryPoint didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505ba58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aaa8);
  *(undefined8 *)(param_1 + _DAT_11271aaa8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be025d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAnimated_completion__11255e310,0,0);
  return;
}



/* Entry: 10505ba94; end: 10505bb03; -[SCMyProfileEntryPoint _sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10505ba94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271aaa0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c247980();
  if (lVar2 == 0) {
    lVar2 = 0xea;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c247980();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10505bb04; end: 10505bb07; -[SCMyProfileEntryPoint onUIDidEnterHierarchy:appearance:] */

void FUN_10505bb04(void)

{
  return;
}



/* Entry: 10505bb08; end: 10505bb0b; -[SCMyProfileEntryPoint onUIWillAppear:appearance:] */

void FUN_10505bb08(void)

{
  return;
}



/* Entry: 10505bb0c; end: 10505bb0f; -[SCMyProfileEntryPoint onUIDidAppear:appearance:] */

void FUN_10505bb0c(void)

{
  return;
}



/* Entry: 10505bb10; end: 10505bb13; -[SCMyProfileEntryPoint onUIWillDisappear:appearance:] */

void FUN_10505bb10(void)

{
  return;
}



/* Entry: 10505bb14; end: 10505bb17; -[SCMyProfileEntryPoint onUIDidDisappear:appearance:] */

void FUN_10505bb14(void)

{
  return;
}



/* Entry: 10505bb18; end: 10505bb93; -[SCMyProfileEntryPoint onUIDidExitHierarchy:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505bb18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11271aaa0;
  _objc_loadWeakRetained(lVar1);
  FUN_10505b57c();
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_11271aa8c) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271aaa4);
    *(undefined8 *)(param_1 + _DAT_11271aaa4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10505bb94; end: 10505bc23; -[SCMyProfileEntryPoint startChatDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505bb94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11271aaec;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a4ee8);
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10505bc24; end: 10505bc93; -[SCMyProfileEntryPoint didDismissMyProfile3Scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505bc24(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aae4);
  *(undefined8 *)(param_1 + _DAT_11271aae4) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11271aae8;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismiss_1125bac58);
  return;
}



/* Entry: 10505bc94; end: 10505bcdf; -[SCMyProfileEntryPoint willPresentMyProfile3Scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505bc94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271aaa0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4920();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10505bce0; end: 10505be13; -[SCMyProfileEntryPoint didPresentMyProfile3Scope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505bce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b09cd78();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar5 = param_1 + _DAT_11271abf8;
    _objc_loadWeakRetained(lVar5);
    lVar4 = lVar5;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc40();
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  lVar5 = (long)_DAT_11271aaa0;
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4880();
    _objc_release(lVar5);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10505be14; end: 10505be33; -[SCMyProfileEntryPoint communitiesStoreServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505be14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271abe4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10505be34; end: 10505be47; -[SCMyProfileEntryPoint setCommunitiesStoreServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505be34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271abe4,param_3);
  return;
}



/* Entry: 10505be48; end: 10505be67; -[SCMyProfileEntryPoint discoverFeedLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505be48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271aba4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10505be68; end: 10505be7b; -[SCMyProfileEntryPoint setDiscoverFeedLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505be68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271aba4,param_3);
  return;
}



/* Entry: 10505be7c; end: 10505c523; -[SCMyProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505be7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ac68);
  _objc_destroyWeak(param_1 + _DAT_11271ac64);
  _objc_storeStrong(param_1 + _DAT_11271abb0,0);
  _objc_destroyWeak(param_1 + _DAT_11271aadc);
  _objc_storeStrong(param_1 + _DAT_11271aad8,0);
  _objc_storeStrong(param_1 + _DAT_11271aad4,0);
  _objc_storeStrong(param_1 + _DAT_11271aacc,0);
  _objc_destroyWeak(param_1 + _DAT_11271aac4);
  _objc_storeStrong(param_1 + _DAT_11271aac0,0);
  _objc_storeStrong(param_1 + _DAT_11271aabc,0);
  _objc_storeStrong(param_1 + _DAT_11271aae8,0);
  _objc_storeStrong(param_1 + _DAT_11271ac04,0);
  _objc_storeStrong(param_1 + _DAT_11271abe0,0);
  _objc_storeStrong(param_1 + _DAT_11271abec,0);
  _objc_storeStrong(param_1 + _DAT_11271abd8,0);
  _objc_storeStrong(param_1 + _DAT_11271abdc,0);
  _objc_storeStrong(param_1 + _DAT_11271ac60,0);
  _objc_storeStrong(param_1 + _DAT_11271abd4,0);
  _objc_storeStrong(param_1 + _DAT_11271abc8,0);
  _objc_storeStrong(param_1 + _DAT_11271abd0,0);
  _objc_destroyWeak(param_1 + _DAT_11271aac8);
  _objc_destroyWeak(param_1 + _DAT_11271aad0);
  _objc_destroyWeak(param_1 + _DAT_11271aab8);
  _objc_destroyWeak(param_1 + _DAT_11271ab9c);
  _objc_storeStrong(param_1 + _DAT_11271ab98,0);
  _objc_storeStrong(param_1 + _DAT_11271ab7c,0);
  _objc_storeStrong(param_1 + _DAT_11271ab1c,0);
  _objc_storeStrong(param_1 + _DAT_11271ab18,0);
  _objc_storeStrong(param_1 + _DAT_11271ab6c,0);
  _objc_storeStrong(param_1 + _DAT_11271aae0,0);
  _objc_storeStrong(param_1 + _DAT_11271ab68,0);
  _objc_storeStrong(param_1 + _DAT_11271ab64,0);
  _objc_storeStrong(param_1 + _DAT_11271ab50,0);
  _objc_storeStrong(param_1 + _DAT_11271ab24,0);
  _objc_storeStrong(param_1 + _DAT_11271ab20,0);
  _objc_storeStrong(param_1 + _DAT_11271ac30,0);
  _objc_storeStrong(param_1 + _DAT_11271ac2c,0);
  _objc_storeStrong(param_1 + _DAT_11271ab14,0);
  _objc_storeStrong(param_1 + _DAT_11271aa74,0);
  _objc_storeStrong(param_1 + _DAT_11271ac28,0);
  _objc_storeStrong(param_1 + _DAT_11271ac08,0);
  _objc_destroyWeak(param_1 + _DAT_11271ac18);
  _objc_storeStrong(param_1 + _DAT_11271ac14,0);
  _objc_storeStrong(param_1 + _DAT_11271ab10,0);
  _objc_storeStrong(param_1 + _DAT_11271ab0c,0);
  _objc_storeStrong(param_1 + _DAT_11271ab08,0);
  _objc_storeStrong(param_1 + _DAT_11271ab04,0);
  _objc_storeStrong(param_1 + _DAT_11271ab00,0);
  _objc_storeStrong(param_1 + _DAT_11271aafc,0);
  _objc_storeStrong(param_1 + _DAT_11271aab4,0);
  _objc_storeStrong(param_1 + _DAT_11271ac5c,0);
  _objc_storeStrong(param_1 + _DAT_11271ab5c,0);
  _objc_destroyWeak(param_1 + _DAT_11271abfc);
  _objc_destroyWeak(param_1 + _DAT_11271abcc);
  _objc_destroyWeak(param_1 + _DAT_11271ab70);
  _objc_destroyWeak(param_1 + _DAT_11271ac58);
  _objc_destroyWeak(param_1 + _DAT_11271ac00);
  _objc_destroyWeak(param_1 + _DAT_11271abb8);
  _objc_destroyWeak(param_1 + _DAT_11271ab58);
  _objc_destroyWeak(param_1 + _DAT_11271ab84);
  _objc_destroyWeak(param_1 + _DAT_11271ab54);
  _objc_destroyWeak(param_1 + _DAT_11271ab4c);
  _objc_destroyWeak(param_1 + _DAT_11271abc0);
  _objc_destroyWeak(param_1 + _DAT_11271aba4);
  _objc_destroyWeak(param_1 + _DAT_11271abf0);
  _objc_destroyWeak(param_1 + _DAT_11271abe8);
  _objc_destroyWeak(param_1 + _DAT_11271abe4);
  _objc_destroyWeak(param_1 + _DAT_11271abb4);
  _objc_destroyWeak(param_1 + _DAT_11271aba0);
  _objc_destroyWeak(param_1 + _DAT_11271ab90);
  _objc_destroyWeak(param_1 + _DAT_11271ab8c);
  _objc_destroyWeak(param_1 + _DAT_11271ac34);
  _objc_destroyWeak(param_1 + _DAT_11271ab44);
  _objc_destroyWeak(param_1 + _DAT_11271ab48);
  _objc_destroyWeak(param_1 + _DAT_11271ab3c);
  _objc_destroyWeak(param_1 + _DAT_11271ac54);
  _objc_destroyWeak(param_1 + _DAT_11271ab40);
  _objc_destroyWeak(param_1 + _DAT_11271ab38);
  _objc_destroyWeak(param_1 + _DAT_11271ac24);
  _objc_destroyWeak(param_1 + _DAT_11271ac20);
  _objc_destroyWeak(param_1 + _DAT_11271ac50);
  _objc_destroyWeak(param_1 + _DAT_11271ab78);
  _objc_destroyWeak(param_1 + _DAT_11271ac10);
  _objc_destroyWeak(param_1 + _DAT_11271ac1c);
  _objc_destroyWeak(param_1 + _DAT_11271abf4);
  _objc_destroyWeak(param_1 + _DAT_11271ab60);
  _objc_destroyWeak(param_1 + _DAT_11271ac4c);
  _objc_destroyWeak(param_1 + _DAT_11271aaf8);
  _objc_destroyWeak(param_1 + _DAT_11271ab28);
  _objc_destroyWeak(param_1 + _DAT_11271aaf4);
  _objc_destroyWeak(param_1 + _DAT_11271aaf0);
  _objc_destroyWeak(param_1 + _DAT_11271ac48);
  _objc_destroyWeak(param_1 + _DAT_11271aa84);
  _objc_destroyWeak(param_1 + _DAT_11271aa80);
  _objc_destroyWeak(param_1 + _DAT_11271ac44);
  _objc_destroyWeak(param_1 + _DAT_11271ac40);
  _objc_destroyWeak(param_1 + _DAT_11271ab94);
  _objc_destroyWeak(param_1 + _DAT_11271ab2c);
  _objc_destroyWeak(param_1 + _DAT_11271aaec);
  _objc_destroyWeak(param_1 + _DAT_11271ab30);
  _objc_destroyWeak(param_1 + _DAT_11271ab88);
  _objc_destroyWeak(param_1 + _DAT_11271aa90);
  _objc_destroyWeak(param_1 + _DAT_11271ab34);
  _objc_destroyWeak(param_1 + _DAT_11271aba8);
  _objc_destroyWeak(param_1 + _DAT_11271ac3c);
  _objc_destroyWeak(param_1 + _DAT_11271aab0);
  _objc_destroyWeak(param_1 + _DAT_11271ab80);
  _objc_destroyWeak(param_1 + _DAT_11271abac);
  _objc_destroyWeak(param_1 + _DAT_11271ac0c);
  _objc_destroyWeak(param_1 + _DAT_11271abf8);
  _objc_destroyWeak(param_1 + _DAT_11271ac38);
  _objc_destroyWeak(param_1 + _DAT_11271ab74);
  _objc_destroyWeak(param_1 + _DAT_11271abc4);
  _objc_destroyWeak(param_1 + _DAT_11271aaa0);
  _objc_storeStrong(param_1 + _DAT_11271abbc,0);
  _objc_storeStrong(param_1 + _DAT_11271aae4,0);
  _objc_storeStrong(param_1 + _DAT_11271aa88,0);
  _objc_storeStrong(param_1 + _DAT_11271aa7c,0);
  _objc_storeStrong(param_1 + _DAT_11271aa9c,0);
  _objc_storeStrong(param_1 + _DAT_11271aaa8,0);
  _objc_storeStrong(param_1 + _DAT_11271aaa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271aaac,0);
  return;
}



/* Entry: 10505c524; end: 10505c58f; +[SCMyProfileEntryPointABHelper isWebViewOutOfAnimationForProfilePage:] */

undefined8 FUN_10505c524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf398e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10505c590; end: 10505c617; -[SCProfile3V2FlatlandContentProvider initWithEntryPoint:] */

undefined1 * FUN_10505c590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5c78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126b0c28;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10505c618; end: 10505c8f3; -[SCProfile3V2FlatlandContentProvider prepareLightweightSectionsWith:updateBlock:] */

void FUN_10505c618(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar9 == 0) {
    uVar7 = 0;
  }
  else {
    if (param_3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_1;
      func_0x00010bf55b80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = param_1;
    func_0x00010bf54500();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar7 = 0;
    }
    else {
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c2294e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar4 = PTR_PTR_1126b02d0;
      _objc_opt_new(PTR_PTR_1126b02d0);
      puVar5 = PTR_PTR_1126ae820;
      _objc_opt_new(PTR_PTR_1126ae820);
      func_0x00010c0d9840();
      puVar6 = PTR_PTR_1126b4420;
      _objc_alloc();
      func_0x00010bff02e0();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar6;
      _objc_release(uVar7);
      _objc_initWeak(auStack_78,param_1);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10505c8f4;
      puStack_88 = &UNK_1108434b0;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c1f9560(*(undefined8 *)(param_1 + 0x28));
      _objc_copyWeak(auStack_a8,auStack_78);
      func_0x00010c19e8c0(*(undefined8 *)(param_1 + 0x28));
      uVar7 = param_4;
      func_0x00010bf51e00();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar7;
      _objc_release(uVar8);
      func_0x00010bef9980(puVar4);
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c228f00();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c0b3d20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203040();
      _objc_release(lVar2);
      func_0x00010c2602e0(param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar7);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    _objc_release(lVar9);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10505c8f4; end: 10505c94b;  */

void FUN_10505c8f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c150220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10505c94c; end: 10505ca1b; -[SCProfile3V2FlatlandContentProvider createDeckContainer:] */

void FUN_10505c94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b0320;
  _objc_retain(param_3);
  func_0x00010c0cf9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b5c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = param_3;
  func_0x00010c0cfa00(param_3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10505ca1c; end: 10505caaf; -[SCProfile3V2FlatlandContentProvider createActionHandler:] */

void FUN_10505ca1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf54540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2296c0();
    _objc_release(param_1);
    _objc_retain(lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10505cab0; end: 10505cbf3; -[SCProfile3V2FlatlandContentProvider subscribeToSectionsPromise:] */

void FUN_10505cab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  func_0x00010c25de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = param_3;
  func_0x00010bfbc3e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_40;
  _objc_copyWeak(puVar2,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10505cbf4; end: 10505cd37;  */

void FUN_10505cbf4(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_3 == (undefined1 *)0x0) && (lVar1 != 0)) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      _objc_retain(param_2);
      lVar1 = param_2;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar7 = *plStack_100;
        do {
          lVar8 = 0;
          do {
            if (*plStack_100 != lVar7) {
              _objc_enumerationMutation(param_2);
            }
            func_0x00010c2602c0(param_1);
            lVar8 = lVar8 + 1;
          } while (lVar1 != lVar8);
          lVar1 = param_2;
          puVar6 = &uStack_110;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(param_2);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar2 = auStack_158;
    _objc_initWeak(puVar2,param_2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c0e0ea0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_160,auStack_158);
    _objc_retain(puVar5);
    puVar4 = puVar3;
    func_0x00010c25ff60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
  }
  _objc_release(puVar5);
  return;
}



/* Entry: 10505cd38; end: 10505ce77; -[SCProfile3V2FlatlandContentProvider subscribeToSectionObservable:] */

void FUN_10505cd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = auStack_48;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0e0ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10505ce78; end: 10505ced3;  */

void FUN_10505ce78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c2a73e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10505ced4; end: 10505d0ef; -[SCProfile3V2FlatlandContentProvider wireSectionProviders:fromObservable:] */

/* WARNING: Possible PIC construction at 0x00010505d090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010505d094) */
/* WARNING: Removing unreachable block (ram,0x00010505d0ec) */
/* WARNING: Removing unreachable block (ram,0x00010505d154) */
/* WARNING: Removing unreachable block (ram,0x00010505d15c) */
/* WARNING: Removing unreachable block (ram,0x00010505d180) */
/* WARNING: Removing unreachable block (ram,0x00010505d220) */
/* WARNING: Removing unreachable block (ram,0x00010505d20c) */
/* WARNING: Removing unreachable block (ram,0x00010505d0cc) */

void FUN_10505ced4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99b40(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar6 * 8);
      func_0x00010c1bd8e0(lVar7);
      lVar4 = lVar7;
      func_0x00010beee460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        lVar4 = lVar7;
        func_0x00010beee460(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbae0(uVar2);
        _objc_release(lVar4);
      }
      func_0x00010c1554e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010010fab4();
      lVar4 = lVar7;
      if ((int)lVar5 == 0) {
        lVar4 = 0;
      }
      _objc_retain(lVar4);
      if (lVar4 != 0) {
        func_0x00010c161980(lVar7);
      }
      _objc_release(lVar4);
      _objc_release(lVar7);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c150230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scheduleThrottledMerge_112631aa8);
  return;
}



/* Entry: 10505d0f0; end: 10505d223; -[SCProfile3V2FlatlandContentProvider scheduleThrottledMerge] */

void FUN_10505d0f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_3,param_2,
                      PTR_s_mergeAndNotify_1125277b8,0);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x38) = param_1;
  _CFRunLoopGetCurrent();
  _CFRunLoopCopyCurrentMode();
  _objc_retain();
  if (puVar2 != (undefined *)0x0) {
    _objc_release(puVar2);
  }
  puVar3 = puVar2;
  func_0x00010c0720c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3a18;
  if ((int)puVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc3a38;
  }
  _objc_retain(ppuVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined ***)(param_2 + 0x40) = ppuVar1;
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8f60(0x3fa999999999999a,param_2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c150230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_scheduleThrottledMerge_112631aa8);
  return;
}



/* Entry: 10505d224; end: 10505d24f; -[SCProfile3V2FlatlandContentProvider _forceFullReapply] */

void FUN_10505d224(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c150230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scheduleThrottledMerge_112631aa8);
  return;
}



/* Entry: 10505d250; end: 10505d737; -[SCProfile3V2FlatlandContentProvider mergeAndNotify] */

undefined * FUN_10505d250(long param_1,undefined **param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  double dVar20;
  double dVar21;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar20 = *(double *)(param_1 + 0x38);
  if (0.0 < dVar20) {
    _CACurrentMediaTime();
    dVar21 = *(double *)(param_1 + 0x38);
    ppuVar12 = *(undefined ***)(param_1 + 0x40);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc3a38;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar4 = ppuVar12;
    }
    *(double *)(param_1 + 0x38) = 0.0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_retain(ppuVar4);
    _objc_release(ppuVar12);
    param_2 = ppuVar4;
    func_0x000108c7aa2c(*(undefined8 *)(param_1 + 0x48),ppuVar4,(long)((dVar20 - dVar21) * 1000.0));
    _objc_release(ppuVar4);
  }
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar15 = *plStack_230;
    do {
      lVar16 = 0;
      do {
        if (*plStack_230 != lVar15) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010befa160(puVar11);
        lVar16 = lVar16 + 1;
      } while (lVar3 != lVar16);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_10505d738;
  puStack_250 = &UNK_110864268;
  _objc_retain();
  lStack_248 = lVar3;
  func_0x00010c246ba0(puVar11);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  _objc_retain(puVar11);
  puVar9 = &uStack_2b0;
  puVar5 = puVar11;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar2 = *plStack_2a0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_2a0 != lVar2) {
          _objc_enumerationMutation(puVar11);
        }
        uVar17 = *(ulong *)(lStack_2a8 + (long)puVar13 * 8);
        func_0x00010c0ec9a0();
        if (2 < uVar17) {
          func_0x00010befa120(ppuVar4);
        }
        puVar13 = puVar13 + 1;
      } while (puVar5 != puVar13);
      puVar9 = &uStack_2b0;
      puVar5 = puVar11;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar11);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    ppuVar12 = ppuVar4;
    func_0x00010bf51e00();
    param_2 = ppuVar12;
    (**(code **)(lVar2 + 0x10))(lVar2);
    _objc_release(ppuVar12);
    if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      if (*(long *)(param_1 + 0x30) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
        func_0x00010c2a2be0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        *(undefined **)(param_1 + 0x30) = puVar5;
        _objc_release(uVar10);
      }
      puVar5 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x00010c2a2be0();
      _objc_retainAutoreleasedReturnValue();
      lStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      plStack_2e0 = (long *)0x0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      _objc_retain(ppuVar4);
      puVar9 = &uStack_2f0;
      ppuVar12 = ppuVar4;
      func_0x00010bf52a60();
      if (ppuVar12 != (undefined **)0x0) {
        lVar2 = *plStack_2e0;
        do {
          puVar1 = PTR_s_configuration_1125af300;
          puVar13 = PTR_s_applyConfiguration__11259fa20;
          ppuVar18 = (undefined **)0x0;
          do {
            if (*plStack_2e0 != lVar2) {
              _objc_enumerationMutation(ppuVar4);
            }
            puVar19 = *(undefined **)(lStack_2e8 + (long)ppuVar18 * 8);
            puVar6 = puVar19;
            func_0x00010c1554e0();
            _objc_retainAutoreleasedReturnValue();
            if ((puVar6 != (undefined *)0x0) &&
               (puVar7 = puVar6, param_2 = (undefined **)puVar13, _objc_opt_respondsToSelector(),
               ((ulong)puVar7 & 1) != 0)) {
              lVar15 = *(long *)(param_1 + 0x30);
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar15 == 0) {
                puVar7 = puVar19;
                param_2 = (undefined **)puVar1;
                _objc_opt_respondsToSelector();
                if (((ulong)puVar7 & 1) == 0) {
LAB_10505d630:
                  puVar19 = (undefined *)0x0;
                  param_2 = (undefined **)0x0;
                  func_0x000106639468(0);
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  func_0x00010bf46560();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar19 == (undefined *)0x0) goto LAB_10505d630;
                }
                func_0x00010bf081e0(puVar6);
                puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
                func_0x00010c0ddbe0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0560(puVar5);
                _objc_release(puVar7);
              }
              else {
                puVar19 = PTR__OBJC_CLASS___NSNull_1126aef28;
                func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0560(puVar5);
              }
              _objc_release(puVar19);
            }
            _objc_release(puVar6);
            ppuVar18 = (undefined **)((long)ppuVar18 + 1);
          } while (ppuVar12 != ppuVar18);
          puVar9 = &uStack_2f0;
          ppuVar12 = ppuVar4;
          func_0x00010bf52a60();
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar4);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar5;
      _objc_release(uVar10);
    }
  }
  _objc_release(ppuVar4);
  _objc_release(lStack_248);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar9);
  ppuVar12 = *(undefined ***)(puVar11 + 0x20);
  ppuVar4 = param_2;
  func_0x00010c0ec9a0();
  if (ppuVar12 != (undefined **)0x0) {
    func_0x00010bdc94e0();
    ppuVar4 = ppuVar12;
  }
  puVar14 = *(undefined8 **)(puVar11 + 0x20);
  puVar8 = puVar9;
  func_0x00010c0ec9a0();
  if (puVar14 != (undefined8 *)0x0) {
    func_0x00010bdc94e0();
    puVar8 = puVar14;
  }
  puVar11 = (undefined *)(ulong)((long)puVar8 < (long)ppuVar4);
  if ((long)ppuVar4 < (long)puVar8) {
    puVar11 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(puVar9);
  _objc_release(param_2);
  return puVar11;
}



/* Entry: 10505d738; end: 10505d7df;  */

ulong FUN_10505d738(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar1 = param_2;
  func_0x00010c0ec9a0();
  if (lVar4 != 0) {
    func_0x00010bdc94e0();
    lVar1 = lVar4;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = param_3;
  func_0x00010c0ec9a0();
  if (lVar3 != 0) {
    func_0x00010bdc94e0();
    lVar4 = lVar3;
  }
  uVar2 = (ulong)(lVar4 < lVar1);
  if (lVar1 < lVar4) {
    uVar2 = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10505d7e0; end: 10505d903; -[SCProfile3V2FlatlandContentProvider tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505d7e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                        PTR_s_mergeAndNotify_1125277b8,0);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar2 + _DAT_11271aa74);
    }
    _objc_retain(lVar4);
    lVar3 = lVar4;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained();
      if (lVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(lVar2 + _DAT_11271aa74);
      }
      _objc_retain(uVar1);
      func_0x00010c12e1c0(uVar1);
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10505d904; end: 10505d91b; -[SCProfile3V2FlatlandContentProvider entryPoint] */

void FUN_10505d904(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10505d91c; end: 10505d927; -[SCProfile3V2FlatlandContentProvider setEntryPoint:] */

void FUN_10505d91c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10505d928; end: 10505d92f; -[SCProfile3V2FlatlandContentProvider lifecycle] */

undefined8 FUN_10505d928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10505d930; end: 10505d95f; -[SCProfile3V2FlatlandContentProvider setLifecycle:] */

void FUN_10505d930(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10505d960; end: 10505d967; -[SCProfile3V2FlatlandContentProvider observableMap] */

undefined8 FUN_10505d960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10505d968; end: 10505d997; -[SCProfile3V2FlatlandContentProvider setObservableMap:] */

void FUN_10505d968(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10505d998; end: 10505d99f; -[SCProfile3V2FlatlandContentProvider updateBlock] */

undefined8 FUN_10505d998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10505d9a0; end: 10505d9a7; -[SCProfile3V2FlatlandContentProvider setUpdateBlock:] */

void FUN_10505d9a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10505d9a8; end: 10505d9af; -[SCProfile3V2FlatlandContentProvider wiring] */

undefined8 FUN_10505d9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10505d9b0; end: 10505d9df; -[SCProfile3V2FlatlandContentProvider setWiring:] */

void FUN_10505d9b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10505d9e0; end: 10505d9e7; -[SCProfile3V2FlatlandContentProvider configuredSections] */

undefined8 FUN_10505d9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10505d9e8; end: 10505da17; -[SCProfile3V2FlatlandContentProvider setConfiguredSections:] */

void FUN_10505d9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505da18; end: 10505da1f; -[SCProfile3V2FlatlandContentProvider throttledMergeArmedAt] */

undefined8 FUN_10505da18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10505da20; end: 10505da27; -[SCProfile3V2FlatlandContentProvider setThrottledMergeArmedAt:] */

void FUN_10505da20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10505da28; end: 10505da2f; -[SCProfile3V2FlatlandContentProvider throttledMergeArmMode] */

undefined8 FUN_10505da28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10505da30; end: 10505da37; -[SCProfile3V2FlatlandContentProvider setThrottledMergeArmMode:] */

void FUN_10505da30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10505da38; end: 10505da3f; -[SCProfile3V2FlatlandContentProvider profileGrapheneMetrics] */

undefined8 FUN_10505da38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10505da40; end: 10505da6f; -[SCProfile3V2FlatlandContentProvider setProfileGrapheneMetrics:] */

void FUN_10505da40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505da70; end: 10505dae3; -[SCProfile3V2FlatlandContentProvider .cxx_destruct] */

void FUN_10505da70(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10505dae4; end: 10505dd33; -[SCEditDisplayNameAlertView initWithUserSession:snapchatter:userInfoServices:snapchatterServices:] */

undefined1 *
FUN_10505dae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5c80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined ***)((long)puVar1 + 0x78) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    ppuVar3 = param_4;
    func_0x00010901d778();
    if ((int)ppuVar3 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_4;
      func_0x00010bf85d80(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be3af20(puVar1);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc32b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32b8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined ***)((long)puVar1 + 0x30) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc32d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32d8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined ***)((long)puVar1 + 0x38) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db2cf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined ***)((long)puVar1 + 0x40) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined ***)((long)puVar1 + 0x48) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc32f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32f8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined ***)((long)puVar1 + 0x50) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc3318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3318,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined ***)((long)puVar1 + 0x58) = ppuVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = 0;
    _objc_release(uVar2);
    _objc_release(ppuVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10505dd34; end: 10505ddef; -[SCEditDisplayNameAlertView _initalDisplayName:] */

void FUN_10505dd34(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  if (ppuVar1 == (undefined **)0x7fffffffffffffff) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined ***)(param_1 + 0x20) = param_3;
    _objc_release(uVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = param_3;
    func_0x00010c260c20(param_3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined ***)(param_1 + 0x20) = ppuVar3;
    _objc_release(uVar2);
    ppuVar3 = param_3;
    func_0x00010c260c00(param_3,param_2,(long)ppuVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)(param_1 + 0x28) = ppuVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10505ddf0; end: 10505dec3; -[SCEditDisplayNameAlertView _displayNameFromFirstName:lastName:] */

void FUN_10505ddf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  puVar1 = puVar3;
  func_0x00010c114ac0(puVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c114ac0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db27b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c114ac0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10505dec4; end: 10505e117; -[SCEditDisplayNameAlertView showAlert] */

void FUN_10505dec4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10505e118;
  puStack_90 = &UNK_110864298;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10505e194;
  puStack_b8 = &UNK_110864298;
  puVar1 = PTR_PTR_1126b4430;
  lStack_b0 = param_1;
  lStack_88 = param_1;
  func_0x00010beef2e0(PTR_PTR_1126b4430,param_2,0,&puStack_a8,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_d8,param_1);
  puVar1 = PTR_PTR_1126af180;
  puVar3 = auStack_d8;
  _objc_copyWeak(auStack_e0,puVar3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126af180;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(param_1 + 0x88);
  uStack_80 = *(undefined8 *)(param_1 + 0x80);
  uStack_70 = *(undefined8 *)(param_1 + 0x90);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  __Unwind_Resume();
  _objc_retain(puVar3);
  func_0x00010c212f20(puVar3);
  func_0x00010c16d0a0(puVar3);
  func_0x00010c1dc9c0(puVar3);
  func_0x00010c1edbe0(puVar3);
  func_0x00010c18b5e0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10505e118; end: 10505e20f;  */

void FUN_10505e118(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c212f20(param_2);
  func_0x00010c16d0a0(param_2);
  func_0x00010c1dc9c0(param_2);
  func_0x00010c1edbe0(param_2);
  func_0x00010c18b5e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10505e210; end: 10505e23b;  */

void FUN_10505e210(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10505e23c; end: 10505e367;  */

void FUN_10505e23c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d280();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c2717c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf6e520(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126af4b0;
  func_0x00010bf464a0(PTR_PTR_1126af4b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10505e368; end: 10505e37f;  */

void FUN_10505e368(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010505e378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 10505e380; end: 10505e437; -[SCEditDisplayNameAlertView textFieldShouldReturn:] */

undefined8 FUN_10505e380(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x80);
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = *(undefined **)(param_1 + 0x80);
  func_0x00010c26bf00();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == puVar1) {
    func_0x00010bf179a0();
  }
  else {
    _objc_release();
    if (param_3 != puVar2) {
      uVar3 = 1;
      goto LAB_10505e41c;
    }
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83760();
  }
  _objc_release(puVar2);
  uVar3 = 0;
LAB_10505e41c:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10505e438; end: 10505e5fb; -[SCEditDisplayNameAlertView _handleSaveButtonAction] */

void FUN_10505e438(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c26bc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c26bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be04980(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_10505e5d0;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c244ae0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae5c0;
    func_0x00010c1900e0(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2960(uVar1);
    _objc_release(puVar6);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf85f60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285360();
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
LAB_10505e5d0:
  lVar7 = *(long *)(param_1 + 0x68);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x10))(lVar7,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10505e5fc; end: 10505e603; -[SCEditDisplayNameAlertView initialFirstName] */

undefined8 FUN_10505e5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10505e604; end: 10505e633; -[SCEditDisplayNameAlertView setInitialFirstName:] */

void FUN_10505e604(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10505e634; end: 10505e63b; -[SCEditDisplayNameAlertView initialLastName] */

undefined8 FUN_10505e634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10505e63c; end: 10505e66b; -[SCEditDisplayNameAlertView setInitialLastName:] */

void FUN_10505e63c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10505e66c; end: 10505e673; -[SCEditDisplayNameAlertView firstNamePlaceHolder] */

undefined8 FUN_10505e66c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10505e674; end: 10505e6a3; -[SCEditDisplayNameAlertView setFirstNamePlaceHolder:] */

void FUN_10505e674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e6a4; end: 10505e6ab; -[SCEditDisplayNameAlertView lastNamePlaceHolder] */

undefined8 FUN_10505e6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10505e6ac; end: 10505e6db; -[SCEditDisplayNameAlertView setLastNamePlaceHolder:] */

void FUN_10505e6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e6dc; end: 10505e6e3; -[SCEditDisplayNameAlertView saveButtonText] */

undefined8 FUN_10505e6dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10505e6e4; end: 10505e713; -[SCEditDisplayNameAlertView setSaveButtonText:] */

void FUN_10505e6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e714; end: 10505e71b; -[SCEditDisplayNameAlertView cancelButtonText] */

undefined8 FUN_10505e714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10505e71c; end: 10505e74b; -[SCEditDisplayNameAlertView setCancelButtonText:] */

void FUN_10505e71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e74c; end: 10505e753; -[SCEditDisplayNameAlertView alertTitle] */

undefined8 FUN_10505e74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10505e754; end: 10505e783; -[SCEditDisplayNameAlertView setAlertTitle:] */

void FUN_10505e754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e784; end: 10505e78b; -[SCEditDisplayNameAlertView alertDescription] */

undefined8 FUN_10505e784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10505e78c; end: 10505e7bb; -[SCEditDisplayNameAlertView setAlertDescription:] */

void FUN_10505e78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e7bc; end: 10505e7c3; -[SCEditDisplayNameAlertView saveDisplayNameCompleteBlock] */

undefined8 FUN_10505e7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10505e7c4; end: 10505e7cb; -[SCEditDisplayNameAlertView setSaveDisplayNameCompleteBlock:] */

void FUN_10505e7c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10505e7cc; end: 10505e7d3; -[SCEditDisplayNameAlertView savePressedBlock] */

undefined8 FUN_10505e7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10505e7d4; end: 10505e7db; -[SCEditDisplayNameAlertView setSavePressedBlock:] */

void FUN_10505e7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10505e7dc; end: 10505e7e3; -[SCEditDisplayNameAlertView dismissBlock] */

undefined8 FUN_10505e7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10505e7e4; end: 10505e7eb; -[SCEditDisplayNameAlertView setDismissBlock:] */

void FUN_10505e7e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10505e7ec; end: 10505e7f3; -[SCEditDisplayNameAlertView editingSnapchatter] */

undefined8 FUN_10505e7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10505e7f4; end: 10505e823; -[SCEditDisplayNameAlertView setEditingSnapchatter:] */

void FUN_10505e7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e824; end: 10505e82b; -[SCEditDisplayNameAlertView displayNameTextFieldAction] */

undefined8 FUN_10505e824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10505e82c; end: 10505e85b; -[SCEditDisplayNameAlertView setDisplayNameTextFieldAction:] */

void FUN_10505e82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e85c; end: 10505e863; -[SCEditDisplayNameAlertView saveButton] */

undefined8 FUN_10505e85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10505e864; end: 10505e893; -[SCEditDisplayNameAlertView setSaveButton:] */

void FUN_10505e864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e894; end: 10505e89b; -[SCEditDisplayNameAlertView cancelButton] */

undefined8 FUN_10505e894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10505e89c; end: 10505e8cb; -[SCEditDisplayNameAlertView setCancelButton:] */

void FUN_10505e89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505e8cc; end: 10505e9bb; -[SCEditDisplayNameAlertView .cxx_destruct] */

void FUN_10505e8cc(long param_1)

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



/* Entry: 10505e9bc; end: 10505ecef; -[SCAuraFriendProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505e9bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126b4438;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271acd8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271acdc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271ace0;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271ace4;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + _DAT_11271ace8);
  lVar10 = param_1 + _DAT_11271acec;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_11271acf0;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11271acf4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271acf8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271acfc;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c27e600();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271ad00;
  _objc_loadWeakRetained();
  lVar26 = (long)_DAT_11271ad04;
  lVar19 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar21 = lVar26;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11271ad08;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d240(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,uVar25,lVar10,lVar11,lVar13,lVar15,
                      lVar17,lVar18,lVar20,lVar21,lVar23);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar26);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar24 = PTR_PTR_1126b4440;
  _objc_alloc(PTR_PTR_1126b4440);
  lVar2 = param_1 + _DAT_11271ad0c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bff5740(puVar24,param_2,lVar2,puVar1);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271ad10),param_2,puVar24);
  _objc_release(puVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10505ecf0; end: 10505edcb; -[SCAuraFriendProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505ecf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ace8,0);
  _objc_storeStrong(param_1 + _DAT_11271ad10,0);
  _objc_destroyWeak(param_1 + _DAT_11271acec);
  _objc_destroyWeak(param_1 + _DAT_11271ad08);
  _objc_destroyWeak(param_1 + _DAT_11271ad04);
  _objc_destroyWeak(param_1 + _DAT_11271ad00);
  _objc_destroyWeak(param_1 + _DAT_11271acfc);
  _objc_destroyWeak(param_1 + _DAT_11271acf8);
  _objc_destroyWeak(param_1 + _DAT_11271acf4);
  _objc_destroyWeak(param_1 + _DAT_11271acf0);
  _objc_destroyWeak(param_1 + _DAT_11271ace4);
  _objc_destroyWeak(param_1 + _DAT_11271ace0);
  _objc_destroyWeak(param_1 + _DAT_11271acdc);
  _objc_destroyWeak(param_1 + _DAT_11271acd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271ad0c);
  return;
}



/* Entry: 10505edcc; end: 10505f0ff; -[SCAuraMyProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505edcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126b4438;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271ad14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271ad18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271ad1c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271ad20;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + _DAT_11271ad24);
  lVar10 = param_1 + _DAT_11271ad28;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_11271ad2c;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11271ad30;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271ad34;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271ad38;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c27e600();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271ad3c;
  _objc_loadWeakRetained();
  lVar26 = (long)_DAT_11271ad40;
  lVar19 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar21 = lVar26;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11271ad44;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d240(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,uVar25,lVar10,lVar11,lVar13,lVar15,
                      lVar17,lVar18,lVar20,lVar21,lVar23);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar26);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar24 = PTR_PTR_1126b4448;
  _objc_alloc(PTR_PTR_1126b4448);
  lVar2 = param_1 + _DAT_11271ad48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bff5780(puVar24,param_2,lVar2,puVar1);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271ad4c),param_2,puVar24);
  _objc_release(puVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10505f100; end: 10505f1db; -[SCAuraMyProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505f100(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ad24,0);
  _objc_storeStrong(param_1 + _DAT_11271ad4c,0);
  _objc_destroyWeak(param_1 + _DAT_11271ad28);
  _objc_destroyWeak(param_1 + _DAT_11271ad44);
  _objc_destroyWeak(param_1 + _DAT_11271ad40);
  _objc_destroyWeak(param_1 + _DAT_11271ad3c);
  _objc_destroyWeak(param_1 + _DAT_11271ad38);
  _objc_destroyWeak(param_1 + _DAT_11271ad34);
  _objc_destroyWeak(param_1 + _DAT_11271ad30);
  _objc_destroyWeak(param_1 + _DAT_11271ad2c);
  _objc_destroyWeak(param_1 + _DAT_11271ad20);
  _objc_destroyWeak(param_1 + _DAT_11271ad18);
  _objc_destroyWeak(param_1 + _DAT_11271ad1c);
  _objc_destroyWeak(param_1 + _DAT_11271ad14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271ad48);
  return;
}



/* Entry: 10505f1dc; end: 10505f2c7;  */

undefined8 FUN_10505f1dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bee00(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10505f2c8; end: 10505f303;  */

void FUN_10505f2c8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x16;
  return;
}



/* Entry: 10505f304; end: 10505f473;  */

void FUN_10505f304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10505f474;
  uStack_60 = 0x10505f484;
  uStack_58 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bee00(param_1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


