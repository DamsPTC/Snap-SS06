/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105271368; end: 10527139b; -[SCCameraViewfinderRenderTargetImpl setHidden:] */

void FUN_105271368(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e7420;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 10527139c; end: 105271403; -[SCCameraViewfinderRenderTargetImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10527139c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720b94,0);
  _objc_destroyWeak(param_1 + _DAT_112720b98);
  _objc_destroyWeak(param_1 + _DAT_112720ba0);
  _objc_storeStrong(param_1 + _DAT_112720b9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720b90,0);
  return;
}



/* Entry: 105271404; end: 105271477; -[SCComposerActionSheetPresenterFactoryImpl initWithComposerDeckConverter:] */

undefined1 * FUN_105271404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7428;
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



/* Entry: 105271478; end: 1052714a7; -[SCComposerActionSheetPresenterFactoryImpl makePresenter] */

void FUN_105271478(void)

{
  _objc_alloc(PTR_PTR_1126b6cd8);
  func_0x00010c000740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052714a8; end: 105271577; -[SCComposerActionSheetPresenterFactoryImpl makePresenterWithPresentingViewController:] */

void FUN_1052714a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0b7640(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105271578; end: 10527158f;  */

void FUN_105271578(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105271590; end: 1052715eb; -[SCComposerActionSheetPresenterFactoryImpl makePresenterWithPresentingViewControllerProvider:] */

void FUN_105271590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6cd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c000760();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052715ec; end: 105271647; -[SCComposerActionSheetPresenterFactoryImpl makePresenterWithUIContainer:] */

void FUN_1052715ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6cd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c000780();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105271648; end: 105271653; -[SCComposerActionSheetPresenterFactoryImpl .cxx_destruct] */

void FUN_105271648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271654; end: 1052716c7; -[SCComposerAlertPresenterFactorySIGImpl initWithComposerDeckConverter:] */

undefined1 * FUN_105271654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7430;
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



/* Entry: 1052716c8; end: 1052716f7; -[SCComposerAlertPresenterFactorySIGImpl makePresenter] */

void FUN_1052716c8(void)

{
  _objc_alloc(PTR_PTR_1126b6ce0);
  func_0x00010c000740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052716f8; end: 105271753; -[SCComposerAlertPresenterFactorySIGImpl makePresenterWithContainer:] */

void FUN_1052716f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6ce0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c000780();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105271754; end: 10527175f; -[SCComposerAlertPresenterFactorySIGImpl .cxx_destruct] */

void FUN_105271754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271760; end: 1052717d3; -[SCComposerNotificationPresenterFactoryImpl initWithNotificationPool:] */

undefined1 * FUN_105271760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7438;
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



/* Entry: 1052717d4; end: 105271803; -[SCComposerNotificationPresenterFactoryImpl makePresenter] */

void FUN_1052717d4(void)

{
  _objc_alloc(PTR_PTR_1126b6ce8);
  func_0x00010c030020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105271804; end: 10527180b; -[SCComposerNotificationPresenterFactoryImpl notificationPool] */

undefined8 FUN_105271804(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10527180c; end: 105271817; -[SCComposerNotificationPresenterFactoryImpl .cxx_destruct] */

void FUN_10527180c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271818; end: 10527188b; -[SCComposerNotificationPresenter initWithNotificationPool:] */

undefined1 * FUN_105271818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7440;
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



/* Entry: 10527188c; end: 105271913; -[SCComposerNotificationPresenter presentNotificationWithOptions:] */

void FUN_10527188c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105271914;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 105271914; end: 105271a1b;  */

void FUN_105271914(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126afde0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beecea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 1) {
    func_0x00010bf55ce0(puVar5,param_2,uVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 2) {
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf57f80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105271a1c; end: 105271a27; -[SCComposerNotificationPresenter pushToValdiMarshaller:] */

undefined8 FUN_105271a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a48;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 105271a28; end: 105271a2f; -[SCComposerNotificationPresenter notificationPool] */

undefined8 FUN_105271a28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105271a30; end: 105271a3b; -[SCComposerNotificationPresenter .cxx_destruct] */

void FUN_105271a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271a3c; end: 105271afb; -[SCComposerAuthContextDelegateProxy getAuthContext:callback:] */

void FUN_105271a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf106e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126b4ea8;
    _objc_alloc(PTR_PTR_1126b4ea8);
    func_0x00010c01a240();
    func_0x00010c0e2fc0(param_4,param_2,puVar1);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bfc2a20(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105271afc; end: 105271b13; -[SCComposerAuthContextDelegateProxy authContextDelegate] */

void FUN_105271afc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105271b14; end: 105271b1b; -[SCComposerAuthContextDelegateProxy .cxx_destruct] */

void FUN_105271b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105271b1c; end: 105271baf; -[SCComposerBufferedContentFetcherProvider initWithBufferedContentFetcher:] */

undefined1 * FUN_105271b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  puVar1 = PTR_s_init_1125d9248;
  puStack_38 = PTR_PTR_1126e7448;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puStack_48 = PTR_PTR_1126e7448;
  puStack_50 = puVar2;
  _objc_msgSendSuper2(&puStack_50,puVar1);
  if (ppuVar3 != (undefined8 **)0x0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined8 *)((long)ppuVar3 + 8) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar3;
}



/* Entry: 105271bb0; end: 105271bb7; -[SCComposerBufferedContentFetcherProvider provide] */

void FUN_105271bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 105271bb8; end: 105271bc3; -[SCComposerBufferedContentFetcherProvider .cxx_destruct] */

void FUN_105271bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271bc4; end: 105271bcf; -[SCComposerFrameworkProvider .cxx_destruct] */

void FUN_105271bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271bd0; end: 105271c33; -[SCComposerImageLoaderRegistry unregisterImageLoaders:] */

void FUN_105271bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c0ce860(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x00010bdcddc0(param_1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105271c34; end: 105271c63; -[SCComposerImageLoaderRegistry .cxx_destruct] */

void FUN_105271c34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271c64; end: 105271c8b; -[SCComposerVideoLoaderRegistry unregisterVideoLoaders:] */

void FUN_105271c64(long param_1)

{
  func_0x00010c0ce860(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdcddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyConfiguration_112551110);
  return;
}



/* Entry: 105271c8c; end: 105271cbb; -[SCComposerVideoLoaderRegistry .cxx_destruct] */

void FUN_105271c8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271cbc; end: 105271d8b; -[SCComposerAppThemeModule init] */

undefined8 * FUN_105271cbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7468;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    _objc_initWeak(auStack_38,puVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105271d8c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return puVar1;
}



/* Entry: 105271d8c; end: 105271db7;  */

void FUN_105271d8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105271db8; end: 105271deb; -[SCComposerAppThemeModule _refreshSystemAppearance] */

void FUN_105271db8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b889a10();
  _os_unfair_lock_lock(param_1 + 8);
  *(char *)(param_1 + 0xc) = (char)lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 105271dec; end: 105271e1f; -[SCComposerAppThemeModule _cachedSystemAppearanceIsDark] */

undefined1 FUN_105271dec(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  _os_unfair_lock_unlock(param_1 + 8);
  return uVar1;
}



/* Entry: 105271e20; end: 105271f9f; -[SCComposerAppThemeModule _appThemePayload] */

undefined ** FUN_105271e20(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppuRam00000001138466f0 < (undefined **)0x3) {
    ppuVar5 = (undefined **)(&PTR_PTR_110872ca0)[(long)ppuRam00000001138466f0];
  }
  else {
    ppuVar1 = ppuRam00000001138466f0;
    func_0x00010057bc30();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c26d060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar5 = ppuVar2;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  func_0x00010bdd8300(param_1);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dceb78;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dceb98;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_58 = ppuVar5;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dcebb8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_50 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dcebd8;
  puStack_40 = PTR____kCFBooleanTrue_11034ab68;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_78,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110dcebf8;
}



/* Entry: 105271fa0; end: 105271fab; -[SCComposerAppThemeModule getModulePath] */

undefined ** FUN_105271fa0(void)

{
  return &PTR____CFConstantStringClassReference_110dcebf8;
}



/* Entry: 105271fac; end: 1052720cf; -[SCComposerAppThemeModule loadModule] */

undefined * FUN_105271fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105272088;
  puStack_48 = &UNK_110872c70;
  puVar1 = PTR_PTR_1126b6d48;
  uStack_40 = param_1;
  func_0x00010bfbc0a0(PTR_PTR_1126b6d48,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dcec18;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010bdcce60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97f8a0(param_2,uVar3);
  _objc_release(uVar3);
  return (undefined *)0x1;
}



/* Entry: 1052720d0; end: 10527213b; -[SCComposerBadFrameRegistrar removePerfLoggerBridgeForUUID:] */

void FUN_1052720d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10527213c; end: 10527222b; -[SCComposerBadFrameRegistrar getPerfLoggerBridgeWithTag:feature:project:] */

void FUN_10527213c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_opt_new(PTR__OBJC_CLASS___NSUUID_1126b0270);
  puVar2 = PTR_PTR_1126b6d50;
  _objc_alloc(PTR_PTR_1126b6d50);
  func_0x00010c050420();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,puVar2,puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10527222c; end: 105272237; -[SCComposerBadFrameRegistrar .cxx_destruct] */

void FUN_10527222c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105272238; end: 1052723db; -[SCValdiScrollPerfLoggerBridge initWithTag:feature:project:badFrameRegistrar:uuid:] */

undefined8 *
FUN_105272238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e7478;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[2];
    puVar1[2] = uVar3;
    _objc_release(uVar4);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[3];
    puVar1[3] = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar3;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = param_4;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_retain(param_7);
    uVar3 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1052723dc; end: 105272437; -[SCValdiScrollPerfLoggerBridge dealloc] */

void FUN_1052723dc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12d960();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126e7478;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105272438; end: 10527243b; -[SCValdiScrollPerfLoggerBridge resume] */

void FUN_105272438(void)

{
  return;
}



/* Entry: 10527243c; end: 10527243f; -[SCValdiScrollPerfLoggerBridge pauseAndCancelLogging:] */

void FUN_10527243c(void)

{
  return;
}



/* Entry: 105272440; end: 10527249b; -[SCValdiScrollPerfLoggerBridge .cxx_destruct] */

void FUN_105272440(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10527249c; end: 10527250f; -[SCValdiScrollPerfLoggerBridgeFactoryModule initWithRegistrar:] */

undefined1 * FUN_10527249c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7480;
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



/* Entry: 105272510; end: 10527251b; -[SCValdiScrollPerfLoggerBridgeFactoryModule getModulePath] */

undefined ** FUN_105272510(void)

{
  return &PTR____CFConstantStringClassReference_110dcec98;
}



/* Entry: 10527251c; end: 1052725f7; -[SCValdiScrollPerfLoggerBridgeFactoryModule loadModule] */

undefined * FUN_10527251c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052725f8;
  puStack_48 = &UNK_110872c70;
  puVar1 = PTR_PTR_1126b6d48;
  uStack_40 = param_1;
  func_0x00010bfbc0a0(PTR_PTR_1126b6d48,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dcecb8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  uVar3 = param_2;
  func_0x00010b97fc3c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010b97fc3c(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010b97fc3c(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + 8);
  func_0x00010bfc8b60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97f8f8(param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return (undefined *)0x1;
}



/* Entry: 1052725f8; end: 1052726c3;  */

undefined8 FUN_1052725f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  func_0x00010b97fc3c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010b97fc3c(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010b97fc3c(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bfc8b60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97f8f8(param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 1052726c4; end: 1052726cf; -[SCValdiScrollPerfLoggerBridgeFactoryModule .cxx_destruct] */

void FUN_1052726c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052726d0; end: 10527277f;  */

void FUN_1052726d0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    func_0x00010c0720c0();
  }
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105272780; end: 10527283b; -[SCComposerSnapchatDebugMessageDisplayer displayMessage:] */

void FUN_105272780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105272804;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10527283c; end: 10527285b; -[SCComposerSnapchatFontLoader loadFontWithName:fontSize:] */

/* WARNING: Removing unreachable block (ram,0x0001005a3a2c) */

void FUN_10527283c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar9 = *(undefined8 *)PTR__UIFontTextStyleBody_110345bd8;
  ppuVar7 = &puStack_a0;
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  iVar2 = 0;
  func_0x000107c61174();
  func_0x000107c60b90();
  if (iVar2 != 0) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(0);
    func_0x000107c61174(param_4);
    func_0x000107c61170(0);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_4);
  }
  puVar3 = PTR_PTR_1126e1948;
  func_0x000107c4a8d8(param_1,PTR_PTR_1126e1948);
  func_0x000107c61180();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = (code *)&UNK_1005a3db4;
  puStack_88 = &UNK_110d660f8;
  func_0x000107c61174(param_4);
  uStack_80 = param_4;
  uStack_78 = param_1;
  func_0x000107c61174(puVar3);
  func_0x000107c61174(0);
  func_0x000107c61174(&puStack_a0);
  if (lRam00000001137fbf68 != -1) {
    func_0x00010002a2fc(0x1137fbf68,&PTR___NSConcreteGlobalBlock_110d66128);
  }
  puVar4 = puVar3;
  func_0x000107c5181c(puVar3);
  puVar5 = puVar3;
  func_0x000107c5c224(puVar3);
  func_0x000107c61180();
  puVar1 = puRam00000001137fbf60;
  func_0x000107c61174(puRam00000001137fbf60);
  func_0x000107c611a4(puVar1);
  puVar6 = puRam00000001137fbf60;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (puVar6 == (undefined1 *)0x0) {
    (*pcStack_90)();
    func_0x000107c61180();
    if (ppuVar7 != (undefined **)0x0) {
      func_0x000107c56bd8(puRam00000001137fbf60);
    }
    func_0x000107c611a8(puVar1);
    func_0x000107c61170(puVar1);
    puVar8 = (undefined1 *)ppuVar7;
    func_0x0001005a4334(0,ppuVar7,puVar4,puVar5,0);
    func_0x000107c61180();
  }
  else {
    puVar8 = puVar6;
    func_0x0001005a4334(0,puVar6,puVar4,puVar5,0);
    func_0x000107c61180();
    func_0x000107c611a8(puVar1);
    func_0x000107c61170(puVar1);
    ppuVar7 = (undefined **)puVar6;
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(&puStack_a0);
  func_0x000107c61170(0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(0);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10527285c; end: 1052728ff; -[SCComposerSnapchatFontLoader loadFontWithName:fontSize:legibilityWeight:] */

void FUN_10527285c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  _objc_retain(param_4);
  func_0x00010c279600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x0001005a3990(param_1,0,param_4,0,*(undefined8 *)PTR__UIFontTextStyleBody_110345bd8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105272900; end: 105272907; -[SCComposerSnapchatFontLoader shouldBypassContextForLegibilityWeight] */

undefined8 FUN_105272900(void)

{
  return 1;
}



/* Entry: 105272908; end: 10527290f; -[SCComposerSnapchatLogger isLogEnabledForLevel:] */

undefined8 FUN_105272908(void)

{
  return 0;
}



/* Entry: 105272910; end: 105272cef; -[SCComposerSnapchatLogger outputLog:forLevel:] */

void FUN_105272910(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dced58;
  if (param_3 != (undefined **)0x0) {
    ppuVar6 = param_3;
  }
  _objc_retain(ppuVar6);
  ppuVar1 = ppuVar6;
  func_0x00010bfda7c0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110dced38);
  ppuVar9 = ppuVar6;
  if ((int)ppuVar1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dced38;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110dced38);
    func_0x00010c260c00(ppuVar6,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar6;
    _objc_release();
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    func_0x00010b678a8c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar11 = *plStack_170;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_170 != lVar11) {
            _objc_enumerationMutation(ppuVar1);
          }
          uVar10 = *(ulong *)(lStack_178 + (long)ppuVar12 * 8);
          ppuVar3 = ppuVar9;
          func_0x00010bfda7c0(ppuVar9,param_2,uVar10);
          if ((int)ppuVar3 != 0) {
            uVar4 = uVar10;
            func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb498);
            if (((((((uVar4 & 1) == 0) &&
                   (uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4a0),
                   (uVar4 & 1) == 0)) &&
                  (uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4a8),
                  (uVar4 & 1) == 0)) &&
                 ((uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4b0),
                  (uVar4 & 1) == 0 &&
                  (uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4b8),
                  (uVar4 & 1) == 0)))) &&
                ((uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4c0),
                 (uVar4 & 1) == 0 &&
                 ((uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4c8),
                  (uVar4 & 1) == 0 &&
                  (uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4e0),
                  (uVar4 & 1) == 0)))))) &&
               ((uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4e8),
                (uVar4 & 1) == 0 &&
                (uVar4 = uVar10, func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4d0),
                (uVar4 & 1) == 0)))) {
              func_0x00010c0720c0(uVar10,param_2,PTR_PTR_1133bb4d8);
            }
            goto LAB_105272b4c;
          }
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar2 != ppuVar12);
        ppuVar2 = ppuVar1;
        func_0x00010bf52a60(ppuVar1,param_2,&uStack_180,auStack_e8,0x10);
      } while (ppuVar2 != (undefined **)0x0);
    }
LAB_105272b4c:
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar9);
  if (param_4 < 2) {
    if (param_4 == 0) {
      FUN_105272cf0(ppuVar6);
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110dced78;
      pppuVar7 = &ppuStack_f0;
      pppuVar8 = &ppuStack_f8;
      ppuStack_f0 = ppuVar6;
    }
    else {
      if (param_4 != 1) goto LAB_105272cac;
      FUN_105272cf0(ppuVar6);
      ppuStack_108 = &PTR____CFConstantStringClassReference_110dced78;
      pppuVar7 = &ppuStack_100;
      pppuVar8 = &ppuStack_108;
      ppuStack_100 = ppuVar6;
    }
LAB_105272c90:
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar7,pppuVar8,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 == 2) {
      FUN_105272cf0(ppuVar6);
      ppuStack_118 = &PTR____CFConstantStringClassReference_110dced98;
      pppuVar7 = &ppuStack_110;
      pppuVar8 = &ppuStack_118;
      ppuStack_110 = ppuVar6;
      goto LAB_105272c90;
    }
    if (param_4 == 3) {
      FUN_105272cf0(ppuVar6);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2bee40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_128 = &PTR____CFConstantStringClassReference_110dcedb8;
      pppuVar7 = &ppuStack_120;
      pppuVar8 = &ppuStack_128;
      ppuStack_120 = ppuVar6;
    }
    else {
      if (param_4 != 4) goto LAB_105272cac;
      FUN_105272cf0(ppuVar6);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c1248c0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_138 = &PTR____CFConstantStringClassReference_110daeeb8;
      pppuVar7 = &ppuStack_130;
      pppuVar8 = &ppuStack_138;
      ppuStack_130 = ppuVar6;
    }
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar7,pppuVar8,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(puVar5);
LAB_105272cac:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  ppuVar1 = ppuVar6;
  func_0x00010c08fa60();
  while (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar1 < (undefined **)0x7d0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      ppuVar1 = ppuVar6;
      func_0x00010c260c20(ppuVar6,param_2,2000);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar6;
      func_0x00010c260c00(ppuVar6,param_2,2000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      ppuVar6 = ppuVar1;
    }
    _objc_release(ppuVar6);
    ppuVar1 = ppuVar9;
    func_0x00010c08fa60();
    ppuVar6 = ppuVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 105272cf0; end: 105272d9b;  */

void FUN_105272cf0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  while (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c08fa60();
    if (uVar1 < 2000) {
      uVar2 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c260c20(param_1,param_2,2000);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c260c00(param_1,param_2,2000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      param_1 = uVar1;
    }
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x00010c08fa60();
    param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105272d9c; end: 105272ebf; -[SCComposerSnapchatModuleFactoriesProvider createModuleFactories:] */

void FUN_105272d9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6d88;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b6d90;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b6d98;
  _objc_alloc();
  func_0x00010c03daa0();
  puVar4 = PTR_PTR_1126b6da0;
  _objc_alloc();
  puVar5 = PTR_PTR_1126b6da8;
  _objc_opt_new(PTR_PTR_1126b6da8);
  func_0x00010c03e200();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105272ec0; end: 105272ecb; -[SCComposerSnapchatModuleFactoriesProvider .cxx_destruct] */

void FUN_105272ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105272ecc; end: 105272f2f; -[SCValdiSpinnerView initWithFrame:] */

undefined1 * FUN_105272ecc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithColor_size__1125dd8a0,0xd5,1);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1f6060(puVar1);
    func_0x00010bebf620(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105272f30; end: 105272f77; -[SCValdiSpinnerView layoutSubviews] */

void FUN_105272f30(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bebf620(param_1);
  return;
}



/* Entry: 105272f78; end: 105272fab; -[SCValdiSpinnerView willEnqueueIntoComposerPool] */

bool FUN_105272f78(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_opt_class();
  puVar1 = PTR_PTR_1126b6db0;
  _objc_opt_class(PTR_PTR_1126b6db0);
  return param_1 == puVar1;
}



/* Entry: 105272fac; end: 105272fff; -[SCValdiSpinnerView _startAnimatingIfNeeded] */

void FUN_105272fac(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c06c0e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf20c00();
    _CGRectEqualToRect();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startAnimating_112671118);
      return;
    }
  }
  return;
}



/* Entry: 105273000; end: 1052731f7; -[SCValdiSpinnerView _setColor:animator:] */

long FUN_105273000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1;
  func_0x00010c06c0e0();
  lVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      uVar10 = *(ulong *)(lVar9 * 8);
      _objc_retainAutorelease(param_3);
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      _objc_retain(uVar10);
      _objc_opt_class(puVar6);
      uVar7 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar6);
      uVar1 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      func_0x00010c20e8e0(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  if ((int)lVar3 != 0) {
    func_0x00010c24dbc0(param_1);
  }
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010befc640(param_4);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return 1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar4,PTR_s_bindAttribute_invalidateLayoutOn_1125a41d8,
             &PTR____CFConstantStringClassReference_110dbf658,0,
             &PTR___NSConcreteGlobalBlock_110872d18,&PTR___NSConcreteGlobalBlock_110872d58);
  return lVar4;
}



/* Entry: 1052731f8; end: 105273227; +[SCValdiSpinnerView bindAttributes:] */

void FUN_1052731f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_bindAttribute_invalidateLayoutOn_1125a41d8,
             &PTR____CFConstantStringClassReference_110dbf658,0,
             &PTR___NSConcreteGlobalBlock_110872d18,&PTR___NSConcreteGlobalBlock_110872d58);
  return;
}



/* Entry: 105273228; end: 10527329f;  */

void FUN_105273228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c2a4b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2c20(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052732a0; end: 10527331f; -[SCNComposerSnapModulesComposerSnapModules initWithCpp:] */

undefined1 * FUN_1052732a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7498;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x0001052733c4(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 105273320; end: 10527337b; -[SCNComposerSnapModulesComposerSnapModules .cxx_destruct] */

void FUN_105273320(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110872d78;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052733c4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10527337c; end: 1052733eb; -[SCNComposerSnapModulesComposerSnapModules .cxx_construct] */

undefined8 * FUN_10527337c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1052733ec; end: 105273453;  */

undefined8 * FUN_1052733ec(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110872d98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3);
  uVar1 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010527bba8();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 105273454; end: 105273487;  */

void FUN_105273454(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = (long)*(char *)(param_2 + 0x2f);
  if (lStack_18 < 0) {
    lStack_20 = *(long *)(param_2 + 0x18);
    lStack_18 = *(long *)(param_2 + 0x20);
  }
  else {
    lStack_20 = param_2 + 0x18;
  }
  func_0x00010b9a2108(param_1,&lStack_20);
  return;
}



/* Entry: 105273488; end: 105273537;  */

void FUN_105273488(undefined8 param_1,long param_2)

{
  long unaff_x20;
  char *pcStack_38;
  long lStack_30;
  char cStack_21;
  
  func_0x000100b9dac4();
  pcStack_38 = (char *)(param_2 + 0x18);
  lStack_30 = (long)*(char *)(param_2 + 0x2f);
  if (lStack_30 < 0) {
    lStack_30 = *(long *)(unaff_x20 + 0x20);
    if (lStack_30 == 0) goto LAB_1052734e4;
    pcStack_38 = *(char **)pcStack_38;
  }
  else if (*(char *)(param_2 + 0x2f) == '\0') {
LAB_1052734e4:
    pcStack_38 = "";
    lStack_30 = 0;
    func_0x00010527c148();
    return;
  }
  func_0x00010527c148();
  FUN_105273538(&pcStack_38);
  if (cStack_21 < '\0') {
    if (lStack_30 == 0) goto LAB_105273510;
  }
  else if (cStack_21 == '\0') goto LAB_105273510;
  func_0x000100b9dd30();
  func_0x00010b9a2138();
LAB_105273510:
  func_0x00010527bdc4();
  return;
}



/* Entry: 105273538; end: 105273587;  */

void FUN_105273538(undefined8 *param_1,long param_2)

{
  long lStack_28;
  
  FUN_105273668(&lStack_28,param_2 + 0x30);
  if (lStack_28 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010b9a5e5c(param_1,lStack_28 + 0x18);
  }
  FUN_105275bd0(&lStack_28);
  return;
}



/* Entry: 105273588; end: 105273667;  */

void FUN_105273588(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long extraout_x8;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = param_3;
  func_0x000100152bb8(param_3,":memory:");
  if ((((ulong)puVar1 & 1) == 0) &&
     (func_0x00010527c034(*(undefined1 *)((long)param_3 + 0x17)), extraout_x8 != 0)) {
    FUN_105273488(auStack_48,param_2);
    uVar2 = 0;
    func_0x00010b99e470();
    if ((uVar2 & 1) == 0) {
      func_0x00010b99e72c(auStack_48,1);
    }
    uStack_50 = param_3[1];
    puStack_58 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uStack_50 = (ulong)*(byte *)((long)param_3 + 0x17);
      puStack_58 = param_3;
    }
    func_0x00010b9a2138(auStack_48,&puStack_58);
    func_0x00010b9a2460(param_1,auStack_48);
    func_0x0001000e30f4(auStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_3);
  return;
}



/* Entry: 105273668; end: 1052736af;  */

void FUN_105273668(void)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  func_0x00010527bd34();
  func_0x00010527c0c4();
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010527bf04();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x19 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x21 + 0x10);
  return;
}



/* Entry: 1052736b0; end: 1052739cf;  */

long * FUN_1052736b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined4 uStack_104;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010527bccc();
  func_0x00010527ba84();
  lVar9 = *param_2;
  uStack_70 = extraout_x8;
  if ((bRam00000001136b9648 & 1) == 0) {
    iVar6 = 0x136b9648;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001003a83dc(0x1136b9640,"version");
      ___cxa_guard_release(0x1136b9648);
    }
  }
  lVar9 = lVar9 + 0x10;
  FUN_1052739d0(lVar9,0x1136b9640);
  uVar4 = (undefined4)lVar9;
  func_0x00010b9a9518();
  lVar9 = *unaff_x21;
  FUN_1052739f8();
  FUN_1052739d0(lVar9 + 0x10,0x1136b9650);
  func_0x00010b9a9358(&lStack_d0);
  lVar9 = *unaff_x21;
  if ((bRam00000001136b9668 & 1) == 0) {
    iVar6 = 0x136b9668;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001003a83dc(0x1136b9660,"upgrades");
      ___cxa_guard_release(0x1136b9668);
    }
  }
  plVar7 = (long *)(lVar9 + 0x10);
  uStack_104 = uVar4;
  FUN_1052739d0(plVar7,0x1136b9660);
  if ((char)plVar7[1] == '\t') {
    lVar9 = *plVar7;
    lStack_e8 = 0;
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    if (lVar9 != 0) {
      lVar1 = lVar9 + 0x18;
      for (lVar9 = *(long *)(lVar9 + 0x10) << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
        func_0x00010b9a9790(&lStack_f0,lVar1);
        lVar8 = lStack_f0;
        if (((bRam00000001136b9678 & 1) == 0) &&
           (iVar6 = 0x136b9678, ___cxa_guard_acquire(), iVar6 != 0)) {
          func_0x0001003a83dc(0x1136b9670,"fromVersion");
          ___cxa_guard_release(0x1136b9678);
        }
        lVar8 = lVar8 + 0x10;
        FUN_1052739d0(lVar8,0x1136b9670);
        uVar4 = (undefined4)lVar8;
        func_0x00010b9a9518();
        lVar8 = lStack_f0;
        if (((bRam00000001136b9688 & 1) == 0) &&
           (iVar6 = 0x136b9688, ___cxa_guard_acquire(), iVar6 != 0)) {
          func_0x0001003a83dc(0x1136b9680,"toVersion");
          ___cxa_guard_release(0x1136b9688);
        }
        lVar8 = lVar8 + 0x10;
        FUN_1052739d0(lVar8,0x1136b9680);
        uVar5 = (undefined4)lVar8;
        func_0x00010b9a9518();
        lVar8 = lStack_f0;
        FUN_1052739f8();
        FUN_1052739d0(lVar8 + 0x10,0x1136b9650);
        func_0x00010b9a9358(auStack_f8);
        uStack_c8 = uVar4;
        uStack_c4 = uVar5;
        func_0x00010b9a5e5c(auStack_c0,auStack_f8);
        uStack_a8 = 0;
        uStack_78 = 0;
        if (plStack_e0 < plStack_d8) {
          func_0x000100b9dce8(plStack_e0,&uStack_c8);
          plVar7 = plStack_e0 + 0xb;
        }
        else {
          plVar7 = &lStack_e8;
          func_0x000100b9dad0(plVar7,&uStack_c8);
        }
        plStack_e0 = plVar7;
        func_0x00010054b180(&uStack_c8);
        func_0x00010527bdbc();
        func_0x00010527bcfc();
        lVar1 = lVar1 + 0x10;
      }
    }
  }
  else {
    lStack_e8 = 0;
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
  }
  uVar3 = lStack_d0 == 0;
  puVar2 = &UNK_10f7d0ef0;
  if (!(bool)uVar3) {
    puVar2 = (undefined *)(lStack_d0 + 0x18);
  }
  func_0x00010045d974(unaff_x20,uStack_104,puVar2,&lStack_e8);
  func_0x00010527508c(&lStack_e8);
  plVar7 = &lStack_d0;
  func_0x0001003a8c94(plVar7);
  func_0x00010527ba10(uStack_70);
  if ((bool)uVar3) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010527508c(&lStack_e8);
  func_0x0001003a8c94(&lStack_d0);
  func_0x00010527bb70();
  pcStack_118 = FUN_1052739d0;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_105275c00(auStack_138);
  return (long *)(lStack_130 + 8);
}



/* Entry: 1052739d0; end: 1052739f7;  */

long FUN_1052739d0(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_105275c00(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1052739f8; end: 105273bab;  */

void FUN_1052739f8(void)

{
  int iVar1;
  
  if ((bRam00000001136b9658 & 1) == 0) {
    iVar1 = 0x136b9658;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010527bda4("sql");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9658);
      return;
    }
  }
  return;
}



/* Entry: 105273bac; end: 105273bc7;  */

undefined8 FUN_105273bac(void)

{
  func_0x000105273b54();
  return 0x1136b9620;
}



/* Entry: 105273bc8; end: 105273c1f;  */

undefined8 FUN_105273bc8(void)

{
  int iVar1;
  
  if ((bRam00000001136b9638 & 1) == 0) {
    iVar1 = 0x136b9638;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010527bda4("DatabaseRegistration");
      func_0x00010527bec4();
    }
  }
  return 0x1136b9630;
}



/* Entry: 105273c20; end: 105273eb3;  */

undefined8 *** FUN_105273c20(undefined8 ***param_1,undefined8 ***param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 **extraout_x8_01;
  undefined8 **extraout_x8_02;
  undefined8 **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  undefined8 **appuStack_60 [3];
  undefined8 uStack_48;
  
  pppuVar5 = &ppuStack_90;
  pppuVar2 = param_1;
  func_0x00010527ba84();
  pppuVar2[1] = (undefined8 **)0x0;
  pppuVar2[2] = (undefined8 **)0x0;
  *pppuVar2 = (undefined8 **)&PTR_FUN_110872dc8;
  pppuVar3 = appuStack_60;
  uStack_48 = extraout_x8;
  func_0x00010002b838(pppuVar3,"ComposerSqlModule");
  func_0x00010044fc98();
  pppuVar4 = param_1 + 3;
  func_0x00010063d5a4(pppuVar4,appuStack_60,0xe,pppuVar3,0);
  func_0x00010527bc70();
  param_1[0xd] = (undefined8 **)0x32aaaba7;
  param_1[0xf] = (undefined8 **)0x0;
  param_1[0xe] = (undefined8 **)0x0;
  param_1[0x11] = (undefined8 **)0x0;
  param_1[0x10] = (undefined8 **)0x0;
  param_1[0x13] = (undefined8 **)0x0;
  param_1[0x12] = (undefined8 **)0x0;
  param_1[0x15] = (undefined8 **)0x0;
  param_1[0x14] = (undefined8 **)0x0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0xa9) = 0;
  func_0x00010527c034(*(undefined1 *)((long)param_2 + 0x17));
  if (((extraout_x8_00 == 0) ||
      (pppuVar4 = param_2, func_0x000100152bb8(param_2,"file:///"), ((ulong)pppuVar4 & 1) != 0)) ||
     (pppuVar4 = param_2, func_0x000100152bb8(param_2,"/"), ((ulong)pppuVar4 & 1) != 0)) {
    FUN_105275d6c(apuStack_70);
    func_0x00010527bf94();
    pppuVar3 = pppuVar4;
    func_0x00010527be18();
    *pppuVar3 = extraout_x8_01;
    func_0x00010527bf74();
    FUN_1052733ec(pppuVar4 + 3,appuStack_60,apuStack_70);
    func_0x00010527bc70();
    func_0x00010527c0a8(appuStack_60);
    ppuStack_90 = appuStack_60[0];
    FUN_105273eb4(param_1 + 0x16);
    FUN_105275cc0(ppuStack_90);
    pppuVar3 = (undefined8 ***)apuStack_70;
    FUN_1052750b0();
  }
  else {
    bVar1 = *(byte *)((long)param_2 + 0x17);
    in_ZR = bVar1 == 0;
    puStack_88 = param_2[1];
    ppuStack_90 = *param_2;
    if (-1 < (char)bVar1) {
      puStack_88 = (undefined8 **)(ulong)bVar1;
      ppuStack_90 = param_2;
    }
    func_0x00010b9a2108(appuStack_60,&ppuStack_90);
    func_0x00010b9a2138(appuStack_60,&PTR_s_sqlite_110872de8);
    pppuVar3 = appuStack_60;
    func_0x00010b9a2460(&ppuStack_90);
    func_0x00010527bf94();
    func_0x00010527be18();
    *pppuVar3 = extraout_x8_02;
    FUN_1052733ec(pppuVar3 + 3,&ppuStack_90,param_3);
    func_0x00010527c0a8(apuStack_70);
    puStack_78 = apuStack_70[0];
    pppuVar5 = (undefined8 ***)&puStack_78;
    FUN_105273eb4(param_1 + 0x16);
    FUN_105275cc0(puStack_78);
    func_0x00010527bd5c();
    pppuVar3 = appuStack_60;
    func_0x0001000e30f4();
  }
  func_0x00010527ba10(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527c0b4();
    __ZdlPv();
    func_0x00010527bd5c();
    func_0x0001000e30f4(appuStack_60);
    FUN_105275ca0(param_1 + 0x16);
    func_0x00010b9a1f08(param_1 + 0xd);
    func_0x00010bcce460(param_1 + 3);
    func_0x000104bd4c74(pppuVar2 + 1);
    __Unwind_Resume();
    if (pppuVar3 != pppuVar5) {
      func_0x00010527c1f0();
      FUN_105275cc0();
    }
    return pppuVar3;
  }
  return param_1;
}



/* Entry: 105273eb4; end: 105273edf;  */

long FUN_105273eb4(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010527c1f0();
    FUN_105275cc0();
  }
  return param_1;
}



/* Entry: 105273ee0; end: 10527463f;  */

void FUN_105273ee0(undefined8 param_1,long param_2,long *param_3,ulong param_4,undefined1 param_5,
                  int param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 in_ZR;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puStack_210;
  long lStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long alStack_1e0 [2];
  undefined8 *apuStack_1d0 [3];
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined2 uStack_1b6;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  code *pcStack_190;
  undefined **ppuStack_188;
  undefined8 *puStack_180;
  code *pcStack_160;
  undefined **ppuStack_158;
  undefined8 *puStack_150;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_70;
  
  lVar14 = param_2;
  func_0x00010527ba84();
  pbVar1 = (byte *)(lVar14 + 0xb8);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uStack_70 = extraout_x8;
  if ((bVar3 & 1) == 0) {
    FUN_105273454(&uStack_1b8,*(undefined8 *)(param_2 + 0xb0));
    in_ZR = CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8))) ==
            CONCAT44(uStack_1ac,uStack_1b0);
    if (!(bool)in_ZR) {
      FUN_105273538(apuStack_1d0,*(undefined8 *)(param_2 + 0xb0));
      func_0x00010b99e8ac(&plStack_200,&uStack_1b8);
      for (plVar12 = plStack_200; in_ZR = plVar12 == plStack_1f8, !(bool)in_ZR;
          plVar12 = plVar12 + 3) {
        plVar7 = plVar12;
        func_0x00010b99e470();
        if ((int)plVar7 != 0) {
          plVar7 = plVar12;
          func_0x00010b9a2578();
          func_0x00010527c2dc();
          func_0x0001000633dc();
          if (((ulong)plVar7 & 1) == 0) {
            FUN_105274ccc(plVar12);
          }
        }
      }
      func_0x00010527bf34();
      func_0x00010527bd4c();
    }
    func_0x0001000e30f4(&uStack_1b8);
  }
  func_0x000104bd4df4(&lStack_208);
  lVar14 = *(long *)(param_2 + 0xb0);
  puVar8 = (undefined8 *)0x110;
  __Znwm();
  plVar12 = puVar8 + 1;
  *plVar12 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_1108731f8;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10 != 0);
  }
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[3] = &PTR_FUN_110872e08;
  puVar9 = &uStack_1b8;
  func_0x00010002b838(puVar9,"ComposerSqlConn");
  func_0x00010044fc98();
  plVar7 = (long *)&uStack_1b8;
  func_0x00010028bc78(puVar8 + 6,plVar7,0xe,puVar9,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b8);
  plVar13 = puVar8 + 0x1a;
  *plVar13 = 0;
  plVar10 = puVar8 + 0x1b;
  *plVar10 = lVar14;
  puVar8[0x1d] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x21] = 0;
  puVar8[0x20] = 0;
  uStack_1b8 = 1;
  uStack_1b6 = 0x101;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 2;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_194 = 0x10101;
  uStack_1a4 = 0x1010101;
  uStack_1b7 = param_5;
  if ((param_4 & 1) == 0) {
    FUN_1052753cc();
    func_0x00010527bc14();
    FUN_105275e24(apuStack_1d0,*plVar10);
    func_0x00010527bb0c();
    func_0x000100066230(puVar8 + 0x1c,apuStack_1d0);
    func_0x00010527bd4c();
    FUN_105273588(apuStack_1d0,*plVar10,param_3);
    if (param_6 != 0) {
      func_0x00010bcc5450(apuStack_1d0);
    }
    lVar14 = 0x1a8;
    __Znwm();
    func_0x00010045e284();
    lVar11 = *plVar13;
    *plVar13 = lVar14;
    if (lVar11 != 0) {
      func_0x00010527bae8();
    }
    func_0x00010527bd4c();
  }
  else {
    plVar10 = param_3;
    func_0x00010bcc6550(alStack_1e0,param_3);
    if (alStack_1e0[0] == 0) goto LAB_105274460;
    param_3 = (long *)0x200;
    __Znwm();
    func_0x00010bccaf50();
    lVar14 = *plVar13;
    *plVar13 = (long)param_3;
    if (lVar14 != 0) {
      func_0x00010527bae8();
    }
    FUN_105276418(alStack_1e0);
  }
  puVar2 = puVar8 + 3;
  puStack_210 = puVar2;
  if ((puVar8[5] == 0) || (in_ZR = *(long *)(puVar8[5] + 8) == -1, (bool)in_ZR)) {
    uStack_1b8 = SUB81(puVar2,0);
    uStack_1b7 = (undefined1)((ulong)puVar2 >> 8);
    uStack_1b6 = (undefined2)((ulong)puVar2 >> 0x10);
    uStack_1b4 = (undefined4)((ulong)puVar2 >> 0x20);
    uStack_1b0 = SUB84(puVar8,0);
    uStack_1ac = (undefined4)((ulong)puVar8 >> 0x20);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    func_0x0001003a8180(puVar8 + 4,&uStack_1b8);
    func_0x0001003a90c4(&uStack_1b8);
    if (puVar8[5] != 0) goto LAB_1052741d4;
  }
  else {
LAB_1052741d4:
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_00 != 0);
  }
  apuStack_1d0[0] = puVar2;
  func_0x00010b9a8f78(&uStack_1b8,apuStack_1d0);
  FUN_105274640();
  FUN_1052739d0(lStack_208 + 0x10,0x1136b9690);
  func_0x00010b9a9020();
  func_0x00010b9a8d98(&uStack_1b8);
  func_0x000104bddedc(apuStack_1d0);
  if (puVar8[5] != 0) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_01 != 0);
  }
  pcStack_a0 = FUN_10527644c;
  ppuStack_98 = &PTR_FUN_110873288;
  uStack_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  puStack_90 = puVar2;
  FUN_105274694(&lStack_208,"applySchema",&pcStack_a0);
  func_0x00010527ba64(ppuStack_98);
  func_0x00010527bd54();
  if (puVar8[5] != 0) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_02 != 0);
  }
  uStack_d0 = 0x105276d24;
  ppuStack_c8 = &PTR_DAT_1108732a8;
  uStack_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  puStack_c0 = puVar2;
  FUN_105274694(&lStack_208,"recreated",&uStack_d0);
  func_0x00010527ba64(ppuStack_c8);
  func_0x00010527bd54();
  if (puVar8[5] != 0) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_03 != 0);
  }
  pcStack_100 = FUN_105276d88;
  ppuStack_f8 = &PTR_FUN_1108732f8;
  uStack_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  puStack_f0 = puVar2;
  FUN_105274694(&lStack_208,"executeSql",&pcStack_100);
  func_0x00010527ba64(ppuStack_f8);
  func_0x00010527bd54();
  if (puVar8[5] != 0) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_04 != 0);
  }
  pcStack_130 = FUN_1052775dc;
  ppuStack_128 = &PTR_FUN_110873368;
  uStack_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  puStack_120 = puVar2;
  FUN_105274694(&lStack_208,"addObserver",&pcStack_130);
  func_0x00010527ba64(ppuStack_128);
  func_0x00010527bd54();
  if (puVar8[5] != 0) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_05 != 0);
  }
  pcStack_160 = FUN_105277a7c;
  ppuStack_158 = &PTR_FUN_1108733a0;
  uStack_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  puStack_150 = puVar2;
  FUN_105274694(&lStack_208,"transaction",&pcStack_160);
  func_0x00010527ba64(ppuStack_158);
  func_0x00010527bd54();
  if (puVar8[5] != 0) {
    do {
      func_0x00010527bcd8();
    } while (extraout_w10_06 != 0);
  }
  pcStack_190 = FUN_105278090;
  ppuStack_188 = &PTR_FUN_1108733c0;
  uStack_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  puStack_180 = puVar2;
  FUN_105274694(&lStack_208,"emitAsyncLatency",&pcStack_190);
  func_0x00010527ba64(ppuStack_188);
  func_0x00010527bd54();
  plVar7 = &lStack_208;
  func_0x00010b9a8f54(param_1);
  FUN_105275ccc(&puStack_210);
  plVar10 = &lStack_208;
  func_0x000104bd4e40(plVar10);
  func_0x00010527ba10(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_105274460:
  func_0x00010527bbdc();
  func_0x0001005d466c();
  plStack_200 = param_3;
  plStack_1f8 = plVar7;
  func_0x0001003a91d4("Shared Database \'{}\' not registered");
  func_0x0001003a9204(apuStack_1d0);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (plVar10,apuStack_1d0);
  func_0x00010527be04();
  ___cxa_throw(plVar10);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1052744b4);
  (*pcVar6)();
}



/* Entry: 105274640; end: 105274693;  */

void FUN_105274640(void)

{
  int iVar1;
  
  if ((bRam00000001136b9698 & 1) == 0) {
    iVar1 = 0x136b9698;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010527bda4("nativeObject");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9698);
      return;
    }
  }
  return;
}



/* Entry: 105274694; end: 10527477f;  */

void FUN_105274694(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  long lVar4;
  long *plVar5;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [16];
  
  func_0x00010054d294();
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 1;
  *puVar3 = &PTR_FUN_1108730b8;
  puVar3[2] = *param_3;
  (**(code **)(param_3[1] + 0x10))(puVar3 + 3,param_3 + 1);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_60 = puVar3;
  puStack_58 = puVar3;
  func_0x00010b9a8ef8(auStack_50,&puStack_58);
  lVar4 = *unaff_x20;
  func_0x0001003a83dc(auStack_68);
  func_0x00010527bd24(lVar4 + 0x10);
  func_0x00010b9a9020();
  func_0x00010527bbb8();
  func_0x00010b9a8d98(auStack_50);
  func_0x000104bda388(&puStack_58);
  FUN_1052751d4(&puStack_60);
  return;
}



/* Entry: 105274780; end: 105274cbf;  */

void FUN_105274780(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_48;
  
  func_0x00010527ba24();
  uStack_48 = extraout_x8;
  func_0x000100061078();
  func_0x00010527c0a0();
  lVar1 = lStack_230;
  func_0x00010527bdb4("Int");
  func_0x00010527bd24(lVar1 + 0x10);
  func_0x00010527bd2c();
  func_0x00010527bbb8();
  func_0x00010527bc68();
  func_0x00010527bdb4("Double");
  func_0x00010527bbe4();
  func_0x00010527bd2c();
  func_0x00010527bbb8();
  func_0x00010527bc68();
  lVar1 = lStack_230;
  func_0x00010527bdb4("String");
  func_0x00010527bd24(lVar1 + 0x10);
  func_0x00010527bd2c();
  func_0x00010527bbb8();
  func_0x00010527bc68();
  func_0x00010527bdb4("Blob");
  func_0x00010527bbe4();
  func_0x00010527bd2c();
  func_0x00010527bbb8();
  func_0x00010527bc68();
  func_0x00010527bdb4("LongInt");
  func_0x00010527bd24(lStack_230 + 0x10);
  func_0x00010527bd2c();
  func_0x00010527bbb8();
  func_0x00010527bc68();
  func_0x00010527bdb4("Nullable");
  func_0x00010527bbe4();
  func_0x00010527bd2c();
  func_0x00010527bbb8();
  func_0x00010527bc68();
  uStack_238 = CONCAT62(uStack_238._2_6_,4);
  uStack_240 = uStack_240 & 0xffffffff00000000;
  func_0x00010527bdb4("Nonnull");
  func_0x00010527bbe4();
  func_0x00010527bd2c();
  func_0x00010527bbb8();
  func_0x00010527bc68();
  func_0x00010527bd64();
  pcStack_78 = FUN_105278260;
  ppuStack_70 = &PTR_FUN_110873430;
  uStack_60 = uStack_238;
  uStack_68 = uStack_240;
  FUN_105274694(&lStack_230,"setTestUserScope",&pcStack_78);
  func_0x00010527baa4(ppuStack_70);
  func_0x00010527bd14();
  func_0x00010527bd64();
  pcStack_a8 = FUN_105278628;
  ppuStack_a0 = &PTR_FUN_110873450;
  uStack_90 = 0;
  uStack_98 = 0;
  FUN_105274694(&lStack_230,"getCurrentUserId",&pcStack_a8);
  func_0x00010527baa4(ppuStack_a0);
  func_0x00010527bd14();
  func_0x00010527bd64();
  pcStack_d8 = FUN_1052786b4;
  ppuStack_d0 = &PTR_FUN_1108734e0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  FUN_105274694(&lStack_230,"registerDatabase",&pcStack_d8);
  func_0x00010527baa4(ppuStack_d0);
  func_0x00010527bd14();
  func_0x00010527bd64();
  pcStack_108 = FUN_105279034;
  ppuStack_100 = &PTR_FUN_110873500;
  uStack_f0 = 0;
  uStack_f8 = 0;
  FUN_105274694(&lStack_230,"testSchemaUpgrade",&pcStack_108);
  func_0x00010527baa4(ppuStack_100);
  func_0x00010527bd14();
  func_0x00010527bd64();
  pcStack_138 = FUN_105279174;
  ppuStack_130 = &PTR_FUN_110873520;
  uStack_120 = 0;
  uStack_128 = 0;
  FUN_105274694(&lStack_230,"getUserScopeDbRootPath",&pcStack_138);
  func_0x00010527baa4(ppuStack_130);
  func_0x00010527bd14();
  func_0x00010527bd64();
  pcStack_168 = FUN_105279228;
  ppuStack_160 = &PTR_FUN_110873540;
  uStack_150 = 0;
  uStack_158 = 0;
  FUN_105274694(&lStack_230,"newNativeConnection",&pcStack_168);
  func_0x00010527baa4(ppuStack_160);
  func_0x00010527bd14();
  func_0x00010527bd64();
  pcStack_198 = FUN_1052793f4;
  ppuStack_190 = &PTR_FUN_110873578;
  uStack_180 = 0;
  uStack_188 = 0;
  FUN_105274694(&lStack_230,"newNativeConnectionAsync",&pcStack_198);
  func_0x00010527ba64(ppuStack_190);
  func_0x00010527bd14();
  pcStack_1c8 = FUN_1052799fc;
  ppuStack_1c0 = &PTR_FUN_110873658;
  FUN_105274694(&lStack_230,"newNativeStatement",&pcStack_1c8);
  func_0x00010527ba64(ppuStack_1c0);
  pcStack_1f8 = FUN_10527abd4;
  ppuStack_1f0 = &PTR_FUN_1108737a0;
  FUN_105274694(&lStack_230,"newNativeDynamicStatement",&pcStack_1f8);
  func_0x00010527ba64(ppuStack_1f0);
  pcStack_228 = FUN_10527b970;
  ppuStack_220 = &PTR_FUN_1108737c0;
  FUN_105274694(&lStack_230,"timestamp",&pcStack_228);
  func_0x00010527ba38();
  func_0x00010527c17c();
  func_0x00010527bcfc();
  func_0x00010527ba10(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010527ba64(ppuStack_220);
  func_0x00010527bcfc();
  do {
    func_0x00010527bb70();
  } while( true );
}



/* Entry: 105274cc0; end: 105274ccb;  */

void FUN_105274cc0(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcStack_40;
  char *pcStack_38;
  
  pcVar2 = "SqliteNative";
  pcVar1 = pcVar2;
  func_0x0001003a8364();
  pcStack_40 = "SqliteNative";
  func_0x000107c613d0();
  pcStack_38 = pcVar2;
  func_0x0001003a8458(param_1,pcVar1,&pcStack_40);
  return;
}



/* Entry: 105274ccc; end: 105274e63;  */

void FUN_105274ccc(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined1 auStack_78 [24];
  long *plStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  func_0x00010007e1a0(&lStack_48,3);
  for (lVar5 = 0; lVar5 != 0x48; lVar5 = lVar5 + 0x18) {
    puVar1 = (undefined8 *)(lStack_40 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  lStack_40 = lStack_40 + 0x48;
  uStack_58 = 1;
  func_0x00010007e37c(&plStack_60);
  ppuVar7 = &PTR_s_memories_110873120;
  lVar5 = 0x30;
  do {
    func_0x00010b9a2434(auStack_78,param_1,ppuVar7);
    func_0x00010b9a2460(&plStack_60,auStack_78);
    func_0x0001000fecf4(&lStack_48,&plStack_60);
    func_0x00010527bf2c();
    func_0x00010527be30();
    ppuVar7 = ppuVar7 + 2;
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0);
  uVar4 = param_1;
  func_0x00010b99e470();
  if ((int)uVar4 != 0) {
    func_0x00010b99e8ac(&plStack_60,param_1);
    plVar2 = (long *)CONCAT71(uStack_57,uStack_58);
    for (plVar6 = plStack_60; lVar3 = lStack_40, lVar5 = lStack_48, plVar6 != plVar2;
        plVar6 = plVar6 + 3) {
      func_0x00010b9a2460(auStack_78,plVar6);
      FUN_105275210(lVar5,lVar3,auStack_78);
      lVar3 = lStack_40;
      func_0x00010527bc0c();
      if (lVar3 == lVar5) {
        func_0x00010b99e800(plVar6);
      }
    }
    func_0x00010527bf34();
  }
  func_0x0001000e30f4(&lStack_48);
  return;
}



/* Entry: 105274e64; end: 105274e67;  */

undefined8 * FUN_105274e64(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110872e08;
  plVar2 = param_1 + 0x17;
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010527bae8();
  }
  FUN_1052753cc();
  func_0x00010527bc14();
  FUN_105275444(param_1 + 0x19,param_1 + 0x18);
  func_0x00010527bb0c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x19);
  FUN_105275ca0(param_1 + 0x18);
  FUN_105275748(plVar2);
  func_0x00010bcce910(param_1 + 3);
  func_0x00010527c128();
  return param_1;
}



/* Entry: 105274e68; end: 105274e7b;  */

void FUN_105274e68(void)

{
  FUN_105275334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105274e7c; end: 105274e7f;  */

undefined8 * FUN_105274e7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110872e60;
  puVar1 = param_1 + 3;
  *puVar1 = &PTR_FUN_110872ea0;
  func_0x00010054c334(puVar1);
  func_0x00010b9a8d98(param_1 + 0x18);
  FUN_1052757d4(param_1 + 0x15);
  FUN_105275ccc(param_1 + 0x14);
  func_0x00010054c360(puVar1);
  func_0x00010527c128();
  return param_1;
}



/* Entry: 105274e80; end: 105274e93;  */

void FUN_105274e80(void)

{
  FUN_105275770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105274e94; end: 105274ea7;  */

undefined8 * FUN_105274e94(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_110872e60;
  *param_1 = &PTR_FUN_110872ea0;
  func_0x00010054c334(param_1);
  func_0x00010b9a8d98(param_1 + 0x15);
  FUN_1052757d4(param_1 + 0x12);
  FUN_105275ccc(param_1 + 0x11);
  func_0x00010054c360(param_1);
  func_0x00010527c128();
  return param_1 + -3;
}



/* Entry: 105274ea8; end: 105274ebb;  */

void FUN_105274ea8(void)

{
  func_0x00010527581c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105274ebc; end: 105274ebf;  */

undefined8 * FUN_105274ebc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110872f58;
  param_1[1] = &PTR_FUN_110872f88;
  func_0x00010bcc7964(param_1 + 6);
  FUN_1052758ec(param_1 + 6);
  FUN_105275ccc(param_1 + 5);
  func_0x000104bda388(param_1 + 4);
  func_0x0001003a81d8(param_1 + 2);
  return param_1;
}


