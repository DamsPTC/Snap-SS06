/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10523d6b8; end: 10523d737; -[SCSpectaclesHomeComposerEntryPoint spectaclesHomeViewControllerDidDealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d6b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_1127203bc) = 0;
  lVar3 = (long)_DAT_1127203a8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248c00(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10523d738; end: 10523d7af; -[SCSpectaclesHomeComposerEntryPoint spectaclesPairingScopeDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d738(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127203f4;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10523d7b0; end: 10523d827; -[SCSpectaclesHomeComposerEntryPoint spectaclesPairingScopeDidComplete:postPairingOnboardingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d7b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127203f4;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10523d828; end: 10523d903; -[SCSpectaclesHomeComposerEntryPoint spectaclesDeviceSettingsScopeDidExitScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d828(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_1127203ac) == '\x01') {
    lVar3 = (long)_DAT_1127203a8;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c150700();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c248c00(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar2 = (long)_DAT_1127203f8;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10523d904; end: 10523d967; -[SCSpectaclesHomeComposerEntryPoint spectaclesDeviceSettingsScopeDidUnpairSpectacles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d904(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_1127203ac) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c248990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_spectaclesDeviceSettingsScopeDid_11266fc88)
    ;
    return;
  }
  lVar1 = param_1 + _DAT_1127203b0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c248c80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10523d968; end: 10523d9bf; -[SCSpectaclesHomeComposerEntryPoint deviceStatusActionHandler:didUnpairedOrForgottenDevice:] */

void FUN_10523d968(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10523d9c0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10523d9c0; end: 10523d9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523d9c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = lVar2 + _DAT_1127203b0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c248c80(lVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10523da00; end: 10523da07; -[SCSpectaclesHomeComposerEntryPoint spectaclesSelectionViewController:didSelectDevice:] */

void FUN_10523da00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__refreshDeviceContextWithDevice__11257faf8,param_4);
  return;
}



/* Entry: 10523da08; end: 10523da1b; -[SCSpectaclesHomeComposerEntryPoint spectaclesSelectionViewControllerDidDismissTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523da08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127203f0),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 10523da1c; end: 10523da2f; -[SCSpectaclesHomeComposerEntryPoint setHomeViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523da1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127203b0,param_3);
  return;
}



/* Entry: 10523da30; end: 10523da5f; -[SCSpectaclesHomeComposerEntryPoint getDeviceContextObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523da30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127203b4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10523da60; end: 10523dc83; -[SCSpectaclesHomeComposerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523da60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720448,0);
  _objc_storeStrong(param_1 + _DAT_1127203f4,0);
  _objc_storeStrong(param_1 + _DAT_112720444,0);
  _objc_storeStrong(param_1 + _DAT_112720440,0);
  _objc_storeStrong(param_1 + _DAT_1127203e4,0);
  _objc_storeStrong(param_1 + _DAT_1127203f8,0);
  _objc_storeStrong(param_1 + _DAT_11272043c,0);
  _objc_storeStrong(param_1 + _DAT_112720438,0);
  _objc_destroyWeak(param_1 + _DAT_112720434);
  _objc_storeStrong(param_1 + _DAT_112720430,0);
  _objc_destroyWeak(param_1 + _DAT_11272042c);
  _objc_destroyWeak(param_1 + _DAT_1127203d0);
  _objc_destroyWeak(param_1 + _DAT_1127203fc);
  _objc_destroyWeak(param_1 + _DAT_1127203c8);
  _objc_destroyWeak(param_1 + _DAT_1127203d8);
  _objc_destroyWeak(param_1 + _DAT_112720428);
  _objc_destroyWeak(param_1 + _DAT_112720424);
  _objc_destroyWeak(param_1 + _DAT_112720420);
  _objc_destroyWeak(param_1 + _DAT_11272041c);
  _objc_destroyWeak(param_1 + _DAT_112720418);
  _objc_destroyWeak(param_1 + _DAT_112720414);
  _objc_destroyWeak(param_1 + _DAT_112720410);
  _objc_destroyWeak(param_1 + _DAT_1127203ec);
  _objc_destroyWeak(param_1 + _DAT_1127203d4);
  _objc_destroyWeak(param_1 + _DAT_1127203c0);
  _objc_destroyWeak(param_1 + _DAT_1127203dc);
  _objc_destroyWeak(param_1 + _DAT_11272040c);
  _objc_destroyWeak(param_1 + _DAT_112720408);
  _objc_destroyWeak(param_1 + _DAT_112720400);
  _objc_destroyWeak(param_1 + _DAT_1127203cc);
  _objc_destroyWeak(param_1 + _DAT_1127203b8);
  _objc_destroyWeak(param_1 + _DAT_112720404);
  _objc_destroyWeak(param_1 + _DAT_1127203e8);
  _objc_destroyWeak(param_1 + _DAT_1127203e0);
  _objc_destroyWeak(param_1 + _DAT_1127203a8);
  _objc_storeStrong(param_1 + _DAT_1127203c4,0);
  _objc_storeStrong(param_1 + _DAT_1127203f0,0);
  _objc_storeStrong(param_1 + _DAT_1127203b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127203b0);
  return;
}



/* Entry: 10523dc84; end: 10523dd37; -[SCSpectaclesHomeComposerViewControllerContainerView initWithRootView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10523dc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puStack_38 = PTR_PTR_1126e7160;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272044c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10523dd38; end: 10523dd63; -[SCSpectaclesHomeComposerViewControllerContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523dd38(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272044c),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10523dd64; end: 10523dd77; -[SCSpectaclesHomeComposerViewControllerContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523dd64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272044c,0);
  return;
}



/* Entry: 10523dd78; end: 10523deab; -[SCSpectaclesHomeComposerViewController initWithDelegate:contentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10523dd78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puStack_40 = PTR_PTR_1126e7168;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112720454,puVar2);
    _objc_release(puVar2);
    lVar5 = (long)_DAT_112720458;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11272045c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar3;
    _objc_release(uVar4);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return puVar1;
}



/* Entry: 10523deac; end: 10523deaf; -[SCSpectaclesHomeComposerViewController preferredStatusBarStyle] */

undefined8 FUN_10523deac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10523deb0; end: 10523df83; -[SCSpectaclesHomeComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523deb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6898;
  _objc_alloc(PTR_PTR_1126b6898);
  lVar5 = (long)_DAT_112720458;
  func_0x00010c040280();
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272045c);
  uStack_40 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10523df84;
  puStack_68 = PTR_PTR_1126e7168;
  puStack_70 = puVar2;
  uStack_60 = uVar4;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_70,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(puVar2 + _DAT_112720450) = puVar3;
  _objc_release(puVar1);
  return;
}



/* Entry: 10523df84; end: 10523dff3; -[SCSpectaclesHomeComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523df84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7168;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_112720450) = puVar2;
  _objc_release(puVar1);
  return;
}



/* Entry: 10523dff4; end: 10523e067; -[SCSpectaclesHomeComposerViewController viewWillAppear:] */

void FUN_10523dff4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10523e068; end: 10523e0c7; -[SCSpectaclesHomeComposerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523e068(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112720454;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c248c60();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126e7168;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10523e0c8; end: 10523e0d7; -[SCSpectaclesHomeComposerViewController setDisallowDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523e0c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112720460) = param_3;
  return;
}



/* Entry: 10523e0d8; end: 10523e0e3; -[SCSpectaclesHomeComposerViewController supportedInterfaceOrientations] */

undefined8 FUN_10523e0d8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 10523e0e4; end: 10523e16b; -[SCSpectaclesHomeComposerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10523e0e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + _DAT_112720460) & 1) == 0) {
    uVar1 = *(ulong *)(param_3 + _DAT_112720458);
    if ((param_5 != uVar1) ||
       (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) == 0)) {
      uVar2 = 1;
      goto LAB_10523e150;
    }
  }
  uVar2 = 0;
LAB_10523e150:
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 10523e16c; end: 10523e16f; -[SCSpectaclesHomeComposerViewController cardToExpandTransition] */

void FUN_10523e16c(void)

{
  return;
}



/* Entry: 10523e170; end: 10523e1c3; -[SCSpectaclesHomeComposerViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523e170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10523e1c4; end: 10523e25b; -[SCSpectaclesHomeComposerViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523e1c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    puVar1 = (undefined *)(param_1 + _DAT_112720454);
    _objc_loadWeakRetained(puVar1);
    func_0x00010c248c80();
  }
  else {
    if (param_4 != 0) goto LAB_10523e248;
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ec0(param_1);
    func_0x00010c14dc60(puVar1,param_2,param_1);
  }
  _objc_release(puVar1);
LAB_10523e248:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10523e25c; end: 10523e263; -[SCSpectaclesHomeComposerViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_10523e25c(void)

{
  return 1;
}



/* Entry: 10523e264; end: 10523e26b; -[SCSpectaclesHomeComposerViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_10523e264(void)

{
  return 0;
}



/* Entry: 10523e26c; end: 10523e277; -[SCSpectaclesHomeComposerViewController defaultProjectNameV2] */

void FUN_10523e26c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_spectacles_11266fb40);
  return;
}



/* Entry: 10523e278; end: 10523e283; -[SCSpectaclesHomeComposerViewController defaultSubProjectName] */

undefined ** FUN_10523e278(void)

{
  return &PTR____CFConstantStringClassReference_110dcc3f8;
}



/* Entry: 10523e284; end: 10523e293; -[SCSpectaclesHomeComposerViewController disallowDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10523e284(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112720460);
}



/* Entry: 10523e294; end: 10523e2df; -[SCSpectaclesHomeComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523e294(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272045c,0);
  _objc_storeStrong(param_1 + _DAT_112720458,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720454);
  return;
}



/* Entry: 10523e2e0; end: 10523e3a3; -[SCSpectaclesBrieScope initWithCurrentDevice:uiContainer:scopeDelegate:] */

undefined1 *
FUN_10523e2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e7170;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10523e3a4; end: 10523e3bb; -[SCSpectaclesBrieScope scopeDelegate] */

void FUN_10523e3a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523e3bc; end: 10523e3c3; -[SCSpectaclesBrieScope currentDevice] */

undefined8 FUN_10523e3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10523e3c4; end: 10523e3cb; -[SCSpectaclesBrieScope uiContainer] */

undefined8 FUN_10523e3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10523e3cc; end: 10523e403; -[SCSpectaclesBrieScope .cxx_destruct] */

void FUN_10523e3cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10523e404; end: 10523e723; -[SCSpectaclesHomeDeviceCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10523e404(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126e7178;
  ppuVar1 = &puStack_a8;
  puStack_a8 = param_1;
  _objc_msgSendSuper2(ppuVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  puVar2 = (undefined *)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    func_0x00010c161260(ppuVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x404f000000000000,0x404f000000000000);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar17 = (long)_DAT_112720470;
    uVar16 = *(undefined8 *)((long)ppuVar1 + lVar17);
    *(undefined **)((long)ppuVar1 + lVar17) = puVar3;
    _objc_release(uVar16);
    func_0x00010befbb60(puVar2);
    ppuVar4 = ppuVar1;
    func_0x00010c27f7a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(ppuVar4);
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar1 + lVar17));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)ppuVar1 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar16;
    uVar7 = *(undefined8 *)((long)ppuVar1 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar9;
    uVar10 = *(undefined8 *)((long)ppuVar1 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar11;
    uVar12 = *(undefined8 *)((long)ppuVar1 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar16);
    _objc_release(puVar6);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b68a0;
    func_0x00010bf692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_112720474);
    *(undefined **)((long)ppuVar1 + (long)_DAT_112720474) = puVar3;
    _objc_release(uVar16);
    func_0x00010c160fc0(ppuVar1);
    ppuVar4 = ppuVar1;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &PTR____CFConstantStringClassReference_110dcc438;
    func_0x00010c160fc0();
    _objc_release(ppuVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar17 = (long)_DAT_112720478;
  uVar15 = *(ulong *)(puVar2 + lVar17);
  func_0x00010c071ae0();
  if ((uVar15 & 1) == 0) {
    _objc_retain(param_3);
    uVar16 = *(undefined8 *)(puVar2 + lVar17);
    *(undefined ***)(puVar2 + lVar17) = param_3;
    _objc_release(uVar16);
    ppuVar1 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(puVar3);
    _objc_release(ppuVar1);
    ppuVar1 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(puVar3);
    _objc_release(ppuVar1);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf6f720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar6);
    _objc_release(puVar3);
    ppuVar1 = param_3;
    func_0x00010c07d660();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    if ((int)ppuVar1 == 0) {
      func_0x00010c127e40(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf6d680();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar2;
    func_0x00010c26c280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00010bfeb480(param_3);
    puVar3 = puVar2;
    func_0x00010c27f7a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c540();
    _objc_release(puVar3);
    ppuVar1 = param_3;
    func_0x00010bf706e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 == (undefined **)0x0) {
      func_0x00010c1a9f00(*(undefined8 *)(puVar2 + _DAT_112720470));
    }
    else {
      ppuVar1 = param_3;
      func_0x00010bf706e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea3640(puVar2);
      _objc_release(ppuVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 10523e724; end: 10523e947; -[SCSpectaclesHomeDeviceCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523e724(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112720478;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(lVar3);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(lVar3);
    _objc_release(lVar5);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf6f720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(lVar5);
    _objc_release(puVar4);
    lVar5 = param_3;
    func_0x00010c07d660();
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    if ((int)lVar5 == 0) {
      func_0x00010c127e40(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf6d680();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_1;
    func_0x00010c26c280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(lVar5);
    _objc_release(puVar4);
    func_0x00010bfeb480(param_3);
    lVar5 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c540();
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010bf706e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112720470),param_2,
                          *(undefined8 *)(param_1 + _DAT_112720474));
    }
    else {
      lVar5 = param_3;
      func_0x00010bf706e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea3640(param_1,param_2,lVar5);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10523e948; end: 10523ea63; -[SCSpectaclesHomeDeviceCell _setDeviceIconWithIconFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523e948(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11272047c;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar1);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10523ea64; end: 10523eadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523ea64(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + _DAT_11272047c))) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112720470));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10523eadc; end: 10523eaeb; -[SCSpectaclesHomeDeviceCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10523eadc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112720478);
}



/* Entry: 10523eaec; end: 10523eb4b; -[SCSpectaclesHomeDeviceCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523eaec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720478,0);
  _objc_storeStrong(param_1 + _DAT_11272047c,0);
  _objc_storeStrong(param_1 + _DAT_112720474,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720470,0);
  return;
}



/* Entry: 10523eb4c; end: 10523ec7b; -[SCSpectaclesSelectionController initWithSpectaclesManager:spectaclesAppStatusProvider:onDemandResourceFetching:currentDevice:] */

undefined1 *
FUN_10523eb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e7180;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b68a8;
    _objc_alloc();
    func_0x00010c0312e0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10523ec7c; end: 10523eff7; -[SCSpectaclesSelectionController updateViewModels] */

undefined * FUN_10523ec7c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar12);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b68a0;
  func_0x00010c2469e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar5;
  _objc_release(uVar12);
  lVar13 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar13);
  lVar7 = lVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar13);
      }
      uVar15 = *(undefined8 *)(lVar14 * 8);
      uVar12 = uVar15;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar12;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      puVar5 = PTR_PTR_1126b68a0;
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2534c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      func_0x00010c071ae0(uVar15);
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf40c40(uVar15);
      func_0x00010bfe5640(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b68b0;
      _objc_alloc();
      func_0x00010c15e740(uVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b68a0;
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06300();
      func_0x00010c1248e0(puVar2);
      func_0x00010c02db00();
      _objc_release(uVar9);
      _objc_release(uVar15);
      func_0x00010befa120(puVar3);
      _objc_release(puVar8);
      _objc_release(uVar12);
      _objc_release(puVar5);
      _objc_release(uVar4);
      lVar14 = lVar14 + 1;
    } while (lVar7 != lVar14);
    lVar7 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  uVar10 = *(ulong *)(param_1 + 8);
  func_0x00010c071b60();
  if ((uVar10 & 1) == 0) {
    puVar5 = puVar3;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar5;
    _objc_release(uVar12);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2496e0();
    _objc_release(param_1);
  }
  _objc_release(uVar6);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c074be0();
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 10523eff8; end: 10523f037;  */

undefined8 FUN_10523eff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c074be0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10523f038; end: 10523f05f; -[SCSpectaclesSelectionController getDeviceFromViewModel:] */

void FUN_10523f038(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfecde0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndex__112615960,uVar2);
  return;
}



/* Entry: 10523f060; end: 10523f063; -[SCSpectaclesSelectionController spectaclesDeviceDidUpdateState:] */

void FUN_10523f060(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateViewModels_112680a18);
  return;
}



/* Entry: 10523f064; end: 10523f067; -[SCSpectaclesSelectionController spectaclesDevice:didUpdateInfo:] */

void FUN_10523f064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateViewModels_112680a18);
  return;
}



/* Entry: 10523f068; end: 10523f06b; -[SCSpectaclesSelectionController spectaclesDevice:didUnpairWithReason:] */

void FUN_10523f068(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateViewModels_112680a18);
  return;
}



/* Entry: 10523f06c; end: 10523f083; -[SCSpectaclesSelectionController delegate] */

void FUN_10523f06c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523f084; end: 10523f08f; -[SCSpectaclesSelectionController setDelegate:] */

void FUN_10523f084(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10523f090; end: 10523f0f7; -[SCSpectaclesSelectionController .cxx_destruct] */

void FUN_10523f090(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10523f0f8; end: 10523f3c7; -[SCSpectaclesSelectionTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10523f0f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126e7188;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar9 = (long)_DAT_11272049c;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar9));
  lVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar9));
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar3;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 10523f3c8; end: 10523f3cf; -[SCSpectaclesSelectionTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_10523f3c8(void)

{
  return 1;
}



/* Entry: 10523f3d0; end: 10523f423; +[SCSpectaclesSelectionTrayViewController trayHeightPercentage] */

double FUN_10523f3d0(void)

{
  undefined *puVar1;
  double in_d3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return 415.0 / in_d3;
}



/* Entry: 10523f424; end: 10523f433; -[SCSpectaclesSelectionTrayViewController titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10523f424(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272049c);
}



/* Entry: 10523f434; end: 10523f447; -[SCSpectaclesSelectionTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523f434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272049c,0);
  return;
}



/* Entry: 10523f448; end: 10523f543; -[SCSpectaclesSelectionViewController initWithStatusCoordinator:spectaclesManager:onDemandResourceFetching:currentDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10523f448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e7190;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126b68b8;
    _objc_alloc();
    func_0x00010c04af80();
    lVar4 = (long)_DAT_1127204a0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10523f544; end: 10523f5eb; -[SCSpectaclesSelectionViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523f544(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e7190;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010beb0580(param_1);
  func_0x00010c28bfc0(*(undefined8 *)(param_1 + _DAT_1127204a0));
  return;
}



/* Entry: 10523f5ec; end: 10523f627; -[SCSpectaclesSelectionViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523f5ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127204a4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 10523f628; end: 10523f72f; -[SCSpectaclesSelectionViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523f628(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c142240();
  lVar6 = (long)_DAT_1127204a4;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010bf529e0();
  lVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249720();
  _objc_release(lVar3);
  if (lVar1 != lVar2) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127204a0);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    lVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40(uVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc4ba0(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c249700();
    _objc_release(param_1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10523f730; end: 10523f973; -[SCSpectaclesSelectionViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523f730(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c142240();
  lVar6 = (long)_DAT_1127204a4;
  lVar2 = *(long *)(param_3 + lVar6);
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    puVar5 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc_init(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5,param_4,puVar3);
    _objc_release(puVar3);
    uVar7 = 0x402e000000000000;
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c26c280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x000109025078();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c26c280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xc6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c26c280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf345e0(puVar5);
    puVar3 = puVar5;
    func_0x00010c26c280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(uVar7,param_2);
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010c26c280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar3);
    func_0x00010c161260(puVar5,param_4,0);
  }
  else {
    puVar5 = *(undefined **)(param_3 + _DAT_1127204a8);
    func_0x00010bf6e060(puVar5,param_4,&PTR____CFConstantStringClassReference_110dcc418);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + lVar6);
    lVar1 = param_6;
    func_0x00010c142240(param_6);
    func_0x00010c0dfd40(uVar7,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(puVar5,param_4,uVar7);
    _objc_release(uVar7);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10523f974; end: 10523f983; -[SCSpectaclesSelectionViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_10523f974(void)

{
  return uRam00000001130c9bf8;
}



/* Entry: 10523f984; end: 10523f987; -[SCSpectaclesSelectionViewController title] */

void FUN_10523f984(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc478;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dcc478,
                      &PTR____CFConstantStringClassReference_110dcc498,0);
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



/* Entry: 10523f988; end: 10523fd53; -[SCSpectaclesSelectionViewController _setupTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523f988(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar20 = (long)_DAT_1127204a8;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar20));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar20),param_2,1);
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  puVar1 = PTR_PTR_1126b68c0;
  _objc_opt_class(PTR_PTR_1126b68c0);
  func_0x00010c125fe0(uVar19,param_2,puVar1,&PTR____CFConstantStringClassReference_110dcc418);
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf493c0(0x4024000000000000,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  uStack_88 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 4;
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(uVar2);
  lVar17 = *(long *)(param_1 + lVar20);
  func_0x00010c160fc0(lVar17,param_2,&PTR____CFConstantStringClassReference_110dcc458);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar18);
  uVar19 = *(undefined8 *)(lVar17 + _DAT_1127204a4);
  *(undefined8 *)(lVar17 + _DAT_1127204a4) = uVar18;
  _objc_retain(uVar18);
  _objc_release(uVar19);
  func_0x00010c128b60(*(undefined8 *)(lVar17 + _DAT_1127204a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 10523fd54; end: 10523fdb7; -[SCSpectaclesSelectionViewController spectaclesSelectionController:didUpdateViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523fd54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127204a4);
  *(undefined8 *)(param_1 + _DAT_1127204a4) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_1127204a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10523fdb8; end: 10523fdc7; -[SCSpectaclesSelectionViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10523fdb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127204a8);
}



/* Entry: 10523fdc8; end: 10523fde7; -[SCSpectaclesSelectionViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523fdc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127204ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10523fde8; end: 10523fdfb; -[SCSpectaclesSelectionViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523fde8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127204ac,param_3);
  return;
}



/* Entry: 10523fdfc; end: 10523fe57; -[SCSpectaclesSelectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10523fdfc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127204ac);
  _objc_storeStrong(param_1 + _DAT_1127204a0,0);
  _objc_storeStrong(param_1 + _DAT_1127204a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127204a8,0);
  return;
}



/* Entry: 10523fe58; end: 10523ff6b; -[SCSpectaclesHomeDeviceCellViewModel initWithName:state:deviceIconFuture:serialNumber:inErrorState:isSelected:] */

undefined1 *
FUN_10523fe58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e7198;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10523ff6c; end: 10523ff8f; -[SCSpectaclesHomeDeviceCellViewModel copyWithZone:] */

undefined8 FUN_10523ff6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10523ff90; end: 105240027; -[SCSpectaclesHomeDeviceCellViewModel hash] */

undefined8 * FUN_10523ff90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_58;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1052400f8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105240104;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_105240104;
            }
            goto LAB_1052400f8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105240104:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105240028; end: 10524011f; -[SCSpectaclesHomeDeviceCellViewModel isEqual:] */

long FUN_105240028(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1052400f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105240104;
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
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105240104;
            }
            goto LAB_1052400f8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105240104:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105240120; end: 105240127; -[SCSpectaclesHomeDeviceCellViewModel name] */

undefined8 FUN_105240120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105240128; end: 10524012f; -[SCSpectaclesHomeDeviceCellViewModel state] */

undefined8 FUN_105240128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105240130; end: 105240137; -[SCSpectaclesHomeDeviceCellViewModel deviceIconFuture] */

undefined8 FUN_105240130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105240138; end: 10524013f; -[SCSpectaclesHomeDeviceCellViewModel serialNumber] */

undefined8 FUN_105240138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105240140; end: 105240147; -[SCSpectaclesHomeDeviceCellViewModel inErrorState] */

undefined1 FUN_105240140(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105240148; end: 10524014f; -[SCSpectaclesHomeDeviceCellViewModel isSelected] */

undefined1 FUN_105240148(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105240150; end: 105240197; -[SCSpectaclesHomeDeviceCellViewModel .cxx_destruct] */

void FUN_105240150(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105240198; end: 1052401af;  */

void FUN_105240198(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc478;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dcc478,
                      &PTR____CFConstantStringClassReference_110dcc498,0);
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



/* Entry: 1052401b0; end: 10524073f; -[SCComposerSpectaclesHomeDeviceControlManager initWithPerformer:device:brightnessSettingsManager:audioSettingsManager:] */

undefined8 *
FUN_1052401b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126e71a0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[10];
    puVar1[10] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar6);
    uVar2 = puVar1[2];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar6);
    uVar2 = puVar1[3];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar6);
    uVar2 = puVar1[4];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar6);
    *(undefined1 *)(puVar1 + 0xe) = 0;
    _objc_initWeak(auStack_90,puVar1);
    uVar4 = puVar1[0xb];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf21280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105240740;
    puStack_a0 = &UNK_110871400;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = puVar1[0xb];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf113e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105240788;
    puStack_c8 = &UNK_110871430;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = puVar1[0xc];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf0f200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x1052407d0;
    puStack_f0 = &UNK_11084a018;
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = puVar1[0xc];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0d41c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_110,auStack_90);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010be0f380(puVar1);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105240740; end: 10524085f;  */

void FUN_105240740(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105240860; end: 10524086b; -[SCComposerSpectaclesHomeDeviceControlManager pushToValdiMarshaller:] */

void FUN_105240860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a87eb0(param_3,param_1);
  func_0x000105a87e90();
  func_0x000105a87e88();
  func_0x000105a87e14();
  func_0x000105a87e4c();
  return;
}



/* Entry: 10524086c; end: 10524099f; -[SCComposerSpectaclesHomeDeviceControlManager setAudioLevelAsyncWithLevel:lastUpdate:] */

void FUN_10524086c(double param_1,long param_2,undefined8 param_3,byte param_4)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  double dStack_40;
  undefined1 auStack_38 [8];
  
  *(byte *)(param_2 + 0x70) = param_4 ^ 1;
  func_0x00010bddae40();
  lVar2 = *(long *)(param_2 + 0x40);
  func_0x00010c067fc0();
  fVar1 = 0.0;
  if (ABS((double)lVar2 + param_1 * -100.0) <= 5.0) {
    fVar1 = 0.1;
  }
  _objc_initWeak(auStack_38,param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1052409a0;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uVar3 = 0;
  dStack_40 = param_1;
  func_0x0001008553e8(0,&puStack_68);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  _objc_release(uVar4);
  if (fVar1 <= 0.0) {
    func_0x0001000d76cc("APPSTORE",*(undefined8 *)(param_2 + 0x28));
  }
  else {
    func_0x000100c749e0(fVar1,"APPSTORE");
  }
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052409a0; end: 1052409d3;  */

void FUN_1052409a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed3580(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052409d4; end: 105240a2f; -[SCComposerSpectaclesHomeDeviceControlManager muteSystemSoundAsyncWithFlag:] */

void FUN_1052409d4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105240a30;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 105240a30; end: 105240a6f;  */

void FUN_105240a30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105240a70; end: 105240ba3; -[SCComposerSpectaclesHomeDeviceControlManager setBrightnessLevelAsyncWithLevel:lastUpdate:] */

void FUN_105240a70(double param_1,long param_2,undefined8 param_3,byte param_4)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  double dStack_40;
  undefined1 auStack_38 [8];
  
  *(byte *)(param_2 + 0x70) = param_4 ^ 1;
  func_0x00010bddae40();
  lVar2 = *(long *)(param_2 + 0x48);
  func_0x00010c067fc0();
  fVar1 = 0.0;
  if (ABS((double)lVar2 + param_1 * -100.0) <= 5.0) {
    fVar1 = 0.1;
  }
  _objc_initWeak(auStack_38,param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105240ba4;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uVar3 = 0;
  dStack_40 = param_1;
  func_0x0001008553e8(0,&puStack_68);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  _objc_release(uVar4);
  if (fVar1 <= 0.0) {
    func_0x0001000d76cc("APPSTORE",*(undefined8 *)(param_2 + 0x28));
  }
  else {
    func_0x000100c749e0(fVar1,"APPSTORE");
  }
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105240ba4; end: 105240bd7;  */

void FUN_105240ba4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed44c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105240bd8; end: 105240c33; -[SCComposerSpectaclesHomeDeviceControlManager setAutoBrightnessAsyncWithEnabled:] */

void FUN_105240bd8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105240c34;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 105240c34; end: 105240c73;  */

void FUN_105240c34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105240c74; end: 105240c87; -[SCComposerSpectaclesHomeDeviceControlManager statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_105240c74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != *(long *)(param_1 + 0x68)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchAllData_112561680);
  return;
}



/* Entry: 105240c88; end: 105240da7; -[SCComposerSpectaclesHomeDeviceControlManager _fetchAllData] */

void FUN_105240c88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010bfa1c80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c105b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134980(uVar1,param_2,lVar3 == 0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1369a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010bfa1c80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c105b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134bc0(uVar1,param_2,lVar3 == 0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105240da8; end: 105240de3; -[SCComposerSpectaclesHomeDeviceControlManager _cancelThrottleSetDeviceValueBlock] */

void FUN_105240da8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105240de4; end: 105240e1f; -[SCComposerSpectaclesHomeDeviceControlManager _cancelThrottleUpdateAudioUIBlock] */

void FUN_105240de4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105240e20; end: 105240e5b; -[SCComposerSpectaclesHomeDeviceControlManager _cancelThrottleUpdateBrightnessUIBlock] */

void FUN_105240e20(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}


