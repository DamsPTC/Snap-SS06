/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b09e4f0; end: 10b09e65b; -[SCComposerDimmingPresentationController presentationTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09e4f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar5 = (long)_DAT_11278c6e8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf7ee80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar5),param_2,0x12);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar5));
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b09e65c;
    puStack_40 = &UNK_110870710;
    lStack_38 = param_1;
    func_0x00010bf02c20(lVar3,param_2,&puStack_58,0);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10b09e65c; end: 10b09e673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09e65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278c6e8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b09e674; end: 10b09e72b; -[SCComposerDimmingPresentationController dismissalTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09e674(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11278c6e8));
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b09e72c;
    puStack_40 = &UNK_110870710;
    lStack_38 = param_1;
    func_0x00010bf02c20(lVar2,param_2,&puStack_58,0);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b09e72c; end: 10b09e743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09e72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278c6e8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b09e744; end: 10b09e7af; -[SCComposerDimmingPresentationController dismissalTransitionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09e744(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11278c6e8;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b09e7b0; end: 10b09e7b3; -[SCComposerDimmingPresentationController presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] */

void FUN_10b09e7b0(void)

{
  return;
}



/* Entry: 10b09e7b4; end: 10b09e7c3; -[SCComposerDimmingPresentationController dimmingColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b09e7b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c6ec);
}



/* Entry: 10b09e7c4; end: 10b09e803; -[SCComposerDimmingPresentationController setDimmingColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09e7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278c6ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b09e804; end: 10b09e843; -[SCComposerDimmingPresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09e804(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c6ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c6e8,0);
  return;
}



/* Entry: 10b09e844; end: 10b09e8af; -[SCComposerNavigator initWithRuntime:] */

undefined1 * FUN_10b09e844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127055f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b09e8b0; end: 10b09e8b3; -[SCComposerNavigator viewController] */

void FUN_10b09e8b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_managedViewController_11260ba98);
  return;
}



/* Entry: 10b09e8b4; end: 10b09e90f; -[SCComposerNavigator dismissWithAnimated:] */

void FUN_10b09e8b4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b09e910;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10b09e910; end: 10b09e94f;  */

void FUN_10b09e910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b09e950; end: 10b09e9ab; -[SCComposerNavigator popToSelfWithAnimated:] */

void FUN_10b09e950(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b09e9ac;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10b09e9ac; end: 10b09ea33;  */

void FUN_10b09e9ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1039c0(uVar2,param_2,uVar3,*(undefined1 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b09ea34; end: 10b09ea8f; -[SCComposerNavigator popWithAnimated:] */

void FUN_10b09ea34(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b09ea90;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10b09ea90; end: 10b09eaf3;  */

void FUN_10b09ea90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b09eaf4; end: 10b09ebd3; -[SCComposerNavigator presentComponentWithPage:animated:] */

void FUN_10b09eaf4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b09ebd4;
  puStack_68 = &UNK_110858b70;
  lStack_60 = param_1;
  uStack_58 = param_3;
  lStack_50 = lVar2;
  uStack_48 = param_4;
  _objc_retain(lVar2);
  _objc_retain(param_3);
  func_0x000107c312d0("APPSTORE",&puStack_80);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b09ebd4; end: 10b09ebe7;  */

void FUN_10b09ebd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be057b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doPresentComponentWithPage_sour_11255ef88,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 10b09ebe8; end: 10b09ecc7; -[SCComposerNavigator pushComponentWithPage:animated:] */

void FUN_10b09ebe8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b09ecc8;
  puStack_68 = &UNK_110858b70;
  lStack_60 = param_1;
  uStack_58 = param_3;
  lStack_50 = lVar2;
  uStack_48 = param_4;
  _objc_retain(lVar2);
  _objc_retain(param_3);
  func_0x000107c312d0("APPSTORE",&puStack_80);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b09ecc8; end: 10b09ecdb;  */

void FUN_10b09ecc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be057d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doPushComponentWithPage_sourceC_11255ef90,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 10b09ecdc; end: 10b09ecdf; -[SCComposerNavigator setBackButtonObserverWithObserver:] */

void FUN_10b09ecdc(void)

{
  return;
}



/* Entry: 10b09ece0; end: 10b09ed3b; -[SCComposerNavigator forceDisableDismissalGestureWithForceDisable:] */

void FUN_10b09ece0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b09ed3c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10b09ed3c; end: 10b09edbf;  */

void FUN_10b09ed3c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29c100(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b09edc0; end: 10b09ee77; -[SCComposerNavigator _findTopViewController] */

void FUN_10b09edc0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) break;
    uVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b09ee78; end: 10b09f077; -[SCComposerNavigator _doPresentComponentWithPage:sourceComponentContext:animated:] */

void FUN_10b09ee78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b7040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be16c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2bd660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010c2bd6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  uVar3 = param_3;
  func_0x00010c0799a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    uVar3 = param_3;
    func_0x00010c237020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      func_0x00010c1c8b80(uVar1);
    }
    else {
      func_0x00010c1c8b80(uVar1);
      puVar5 = PTR_PTR_1126df730;
      _objc_alloc(PTR_PTR_1126df730);
      func_0x00010c038a20();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18e040(puVar5);
      _objc_release(puVar6);
      func_0x00010c219b20(uVar1);
      _objc_setAssociatedObject(uVar1,PTR_s_transitioningDelegate_11267c558,puVar5,1);
      _objc_release(puVar5);
    }
  }
  uVar3 = param_3;
  func_0x00010bf809c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010c1c8ae0(uVar1);
  }
  func_0x00010c10eda0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09f078; end: 10b09f16b; -[SCComposerNavigator _doPushComponentWithPage:sourceComponentContext:animated:] */

void FUN_10b09f078(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be16c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
  }
  if (uVar4 != 0) {
    func_0x00010c0b7040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520(uVar4);
    _objc_release(param_1);
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b09f16c; end: 10b09f20b; -[SCComposerNavigator wrapViewControllerInNavigationController:] */

void FUN_10b09f16c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  puVar2 = param_1;
  func_0x00010c0d66c0();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c0d66c0(param_1);
    puVar1 = param_1;
  }
  _objc_alloc(puVar1);
  func_0x00010c0402e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c0d6280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219c00();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b09f20c; end: 10b09f4df; -[SCComposerNavigator makeContainerViewControllerWithPage:parentComposerContext:] */

void FUN_10b09f20c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  _objc_opt_class(param_1);
  _objc_alloc();
  puVar2 = param_1 + 8;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c040b80(puVar1);
  _objc_release(puVar2);
  func_0x00010bf4ac20(param_1);
  func_0x00010c181960(puVar1);
  func_0x00010c0d66c0(param_1);
  func_0x00010c1cb7e0(puVar1);
  lVar3 = param_3;
  func_0x00010bf443a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d3c80();
  _objc_release(lVar3);
  func_0x00010c1d0640(lVar4);
  puVar5 = PTR_PTR_1126afcc8;
  _objc_alloc(PTR_PTR_1126afcc8);
  lVar3 = param_3;
  func_0x00010bf44480(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf445a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf51e00(lVar4);
  puVar2 = param_1 + 8;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c000640(puVar5);
  _objc_release(puVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  if (param_4 != 0) {
    puVar2 = puVar5;
    func_0x00010c295200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d90a0();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126afcd0;
  _objc_opt_class();
  puVar8 = param_1;
  func_0x00010bf4ac20();
  if (puVar8 != (undefined *)0x0) {
    func_0x00010bf4ac20();
    puVar2 = param_1;
  }
  _objc_alloc();
  func_0x00010c0601e0();
  puVar8 = puVar2;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar8 & 1) != 0) {
    lVar3 = param_3;
    func_0x00010c239260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c202620(puVar2);
    _objc_release(lVar3);
  }
  puVar8 = puVar2;
  _objc_opt_respondsToSelector(puVar2,PTR_s_setTitle__1126632b8);
  if (((ulong)puVar8 & 1) != 0) {
    lVar3 = param_3;
    func_0x00010c0fe2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf809c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf809c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1c8ae0(puVar2);
    _objc_release(lVar3);
  }
  func_0x00010c1c1bc0(puVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b09f4e0; end: 10b09f567; -[SCComposerNavigator setPageVisibilityObserverWithObserver:] */

void FUN_10b09f4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_10b09f568;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b09f568; end: 10b09f5eb;  */

void FUN_10b09f568(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29c100(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b09f5ec; end: 10b09f5f7; -[SCComposerNavigator pushToValdiMarshaller:] */

undefined8 FUN_10b09f5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b38;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b9661d8();
  return param_3;
}



/* Entry: 10b09f5f8; end: 10b09f5ff; -[SCComposerNavigator shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10b09f5f8(void)

{
  return 1;
}



/* Entry: 10b09f600; end: 10b09f617; -[SCComposerNavigator managedViewController] */

void FUN_10b09f600(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b09f618; end: 10b09f623; -[SCComposerNavigator setManagedViewController:] */

void FUN_10b09f618(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10b09f624; end: 10b09f62b; -[SCComposerNavigator containerClassOverride] */

undefined8 FUN_10b09f624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b09f62c; end: 10b09f65b; -[SCComposerNavigator setContainerClassOverride:] */

void FUN_10b09f62c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b09f65c; end: 10b09f663; -[SCComposerNavigator navigationControllerClassOverride] */

undefined8 FUN_10b09f65c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b09f664; end: 10b09f693; -[SCComposerNavigator setNavigationControllerClassOverride:] */

void FUN_10b09f664(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b09f694; end: 10b09f6d3; -[SCComposerNavigator .cxx_destruct] */

void FUN_10b09f694(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b09f6d4; end: 10b09f72b; -[SCContainerViewController shouldDisableShakeToReportOnCurrentPage] */

ulong FUN_10b09f6d4(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be1e520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c22f020(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b09f72c; end: 10b09f76f; -[SCContainerViewController willStartCensoringScreenshot] */

void FUN_10b09f72c(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be1e520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010c2a6c20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b09f770; end: 10b09f7b3; -[SCContainerViewController willEndCensoringScreenshot] */

void FUN_10b09f770(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be1e520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010c2a6300(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b09f7b4; end: 10b09f813; -[SCContainerViewController defaultProjectNameV3] */

void FUN_10b09f7b4(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be1e540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf69fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09f814; end: 10b09f873; -[SCContainerViewController defaultProjectNameV2] */

void FUN_10b09f814(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be1e520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf69fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09f874; end: 10b09f8d3; -[SCContainerViewController defaultSubProjectName] */

void FUN_10b09f874(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be1e540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf6a5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09f8d4; end: 10b09f933; -[SCContainerViewController jiraMetaInfo] */

void FUN_10b09f8d4(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be1e520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c085480(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09f934; end: 10b09f983; -[SCContainerViewController _getCurrentShakeToReportDelegate] */

void FUN_10b09f934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107c318f8();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09f984; end: 10b09fafb; -[SCContainerViewController _getCurrentShakeToReportDelegateV2] */

void FUN_10b09f984(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0;
  lVar4 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(lVar5);
      func_0x00010be1e520();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      lVar8 = param_1;
LAB_10b09fabc:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
        return;
      }
      ___stack_chk_fail();
      func_0x000107c31820(&UNK_10f726c96);
      func_0x00010c19efa0(uVar10,*(undefined8 *)(lVar5 + 8));
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
      func_0x000107c61180();
      func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      puVar3 = PTR_DAT_1126a5038;
      lVar8 = *(long *)(lVar9 * 8);
      _objc_retain(lVar8);
      lVar6 = lVar8;
      func_0x000107c318f8(lVar8,puVar3);
      lVar1 = lVar8;
      if ((int)lVar6 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(lVar8);
      if (lVar1 != 0) {
        _objc_release();
        goto LAB_10b09fabc;
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10b09fafc; end: 10b09fb6b; -[SCPresentationInteractionControllerImplementation updateInteractiveTransition:] */

void FUN_10b09fafc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x000107c31820(&UNK_10f726c96);
  func_0x00010c19efa0(param_1,*(undefined8 *)(param_2 + 8));
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b09fb6c; end: 10b09fcbf; -[SCPresentationInteractionControllerImplementation completeTransition:animated:withVelocity:] */

void FUN_10b09fb6c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x000107c31820(&UNK_10f726d74);
  uVar2 = *(ulong *)(param_5 + 0x10);
  _objc_opt_respondsToSelector(uVar2,PTR_s_timingCurveForVelocity__112679d98);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010bf4b2a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar4 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010bf4b2a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010c270dc0(param_1 / param_3,param_2 / param_4,uVar3);
    _objc_retainAutoreleasedReturnValue();
    if ((param_7 & 1) == 0) {
      func_0x00010c1ede40(*(undefined8 *)(param_5 + 8));
    }
    func_0x00010bf4fa00(0,*(undefined8 *)(param_5 + 8));
    _objc_release(uVar3);
  }
  lVar5 = *(long *)(param_5 + 0x20);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,param_5,param_7);
  }
  func_0x00010bf43be0(param_5);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b09fcc0; end: 10b09fccf; -[SCContainerViewController init] */

void FUN_10b09fcc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0278b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLoggingObserver_contentV_1125e7810,0,0,0);
  return;
}



/* Entry: 10b09fcd0; end: 10b09fcdb; -[SCContainerViewController initWithLoggingObserver:] */

void FUN_10b09fcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0278b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLoggingObserver_contentV_1125e7810,param_3,0,0);
  return;
}



/* Entry: 10b09fcdc; end: 10b09fceb; -[SCContainerViewController addUIKitPresentationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09fcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c728),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 10b09fcec; end: 10b09fd7f; -[SCContainerViewController backgroundExitBehavior] */

void FUN_10b09fcec(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_40;
  puVar2 = param_1;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_backgroundExitBehavior_1125a2980;
  puVar3 = puVar2;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar3 & 1) == 0) {
    puStack_38 = PTR_PTR_112705608;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar4 = (undefined1 **)puVar2;
    func_0x00010bf13f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10b09fd80; end: 10b09fe0f; -[SCContainerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09fd80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1,param_3);
  lVar1 = param_1;
  func_0x00010c27f060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b260();
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_112705608;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 10b09fe10; end: 10b09fe9f; -[SCContainerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09fe10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1,param_3);
  lVar1 = param_1;
  func_0x00010c27f060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b220();
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_112705608;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 10b09fea0; end: 10b09fef3; -[SCContainerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09fea0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1);
  puStack_28 = PTR_PTR_112705608;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b09fef4; end: 10b09ff67; -[SCContainerViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09fef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_112705608;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 10b09ff68; end: 10b09ffbb; -[SCContainerViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09ff68(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1);
  puStack_28 = PTR_PTR_112705608;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 10b09ffbc; end: 10b09ffeb; -[SCContainerViewController childViewControllerForHomeIndicatorAutoHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09ffbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c730);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b09ffec; end: 10b0a001b; -[SCContainerViewController childViewControllerForScreenEdgesDeferringSystemGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b09ffec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c730);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0a001c; end: 10b0a00a3; -[SCContainerViewController containerBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a001c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_10f726f7d;
  func_0x000107c31820(&UNK_10f726f7d);
  func_0x00010c09c7a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278c72c);
  func_0x00010bf4aba0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0a00a4; end: 10b0a00ab; -[SCContainerViewController _doTransition:usingStyle:interactive:] */

void FUN_10b0a00a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be058d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doTransition_usingStyle_interac_11255efd0);
  return;
}



/* Entry: 10b0a00ac; end: 10b0a010f;  */

void FUN_10b0a00ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c31820(&UNK_10f727109);
  func_0x00010c27bca0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0a0110; end: 10b0a011f;  */

void FUN_10b0a0110(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_triggerInteractionCompletionBloc_11267ca18,
             *(undefined8 *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 10b0a0120; end: 10b0a01bb; -[SCContainerViewController present:usingStyle:] */

void FUN_10b0a0120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f7271ca;
  func_0x000107c31820(&UNK_10f7271ca);
  func_0x00010be058a0(param_1,param_2,param_3,param_4,0);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a01bc; end: 10b0a02ef; -[SCContainerViewController presentInteractively:usingStyle:completion:] */

void FUN_10b0a01bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c23b940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b280();
  _objc_release(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b0a02f0;
  puStack_68 = &UNK_1108843d8;
  uStack_60 = param_1;
  uStack_58 = uVar1;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be058e0(param_1,param_2,param_3,param_4,1,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0a02f0; end: 10b0a0353;  */

void FUN_10b0a02f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23b940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0a0354; end: 10b0a0357; -[SCContainerViewController dismissViewControllerWithCompletion:] */

void FUN_10b0a0354(void)

{
  return;
}



/* Entry: 10b0a0358; end: 10b0a035f; -[SCContainerViewController dismissInteractivelyWithCompletion:] */

undefined8 FUN_10b0a0358(void)

{
  return 0;
}



/* Entry: 10b0a0360; end: 10b0a0367; -[SCContainerViewController willHandleTransitionAnimationForVC:] */

undefined8 FUN_10b0a0360(void)

{
  return 1;
}



/* Entry: 10b0a0368; end: 10b0a0397; -[SCContainerViewController childViewControllerForCustomStatusBarStyleContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0368(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c730);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0a0398; end: 10b0a04df; -[SCContainerViewController swizzledUIKitWillPresentViewController:presentationOwner:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0398(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar14;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar15;
  long lVar16;
  undefined8 uStack_850;
  long lStack_848;
  long *plStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined1 auStack_810 [128];
  long lStack_790;
  long lStack_780;
  undefined **ppuStack_778;
  long lStack_770;
  ulong uStack_768;
  undefined *puStack_760;
  long lStack_758;
  long lStack_750;
  undefined1 *puStack_748;
  undefined1 *puStack_740;
  undefined1 *puStack_738;
  undefined8 ****ppppuStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 auStack_6e0 [128];
  long lStack_660;
  long lStack_650;
  undefined **ppuStack_648;
  long lStack_640;
  ulong uStack_638;
  undefined *puStack_630;
  long lStack_628;
  long lStack_620;
  undefined1 *puStack_618;
  undefined1 *puStack_610;
  undefined1 *puStack_608;
  undefined8 ****ppppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [128];
  long lStack_530;
  undefined1 ****ppppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_478 [128];
  long lStack_3f8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar9 = auStack_e8;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x25 = *puStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf4b1c0(*(undefined8 *)(lStack_128 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar13 != unaff_x26);
      puVar9 = auStack_e8;
      lVar13 = lVar12;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_260;
  pcStack_138 = FUN_10b0a04e0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar12 = *(long *)(param_3 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar10 = auStack_218;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x25 = *puStack_250;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf4b120(*(undefined8 *)(lStack_258 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar13 != unaff_x26);
      puVar10 = auStack_218;
      lVar13 = lVar12;
      puVar3 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_390;
  pcStack_268 = FUN_10b0a0628;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar12 = *(long *)((long)puVar2 + (long)_DAT_11278c728);
  _objc_retain(lVar12);
  puVar9 = auStack_348;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x25 = *puStack_380;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf4b1a0(*(undefined8 *)(lStack_388 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar13 != unaff_x26);
      puVar9 = auStack_348;
      lVar13 = lVar12;
      puVar4 = &uStack_390;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_4c0;
  pcStack_398 = FUN_10b0a0770;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  lVar13 = *(long *)((long)puVar3 + (long)_DAT_11278c728);
  _objc_retain(lVar13);
  puVar10 = auStack_478;
  lVar12 = lVar13;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x25 = *puStack_4b0;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010bf4b100(*(undefined8 *)(lStack_4b8 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar12 != unaff_x26);
      puVar10 = auStack_478;
      lVar12 = lVar13;
      puVar2 = &uStack_4c0;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar13);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_5f0;
  pcStack_4c8 = FUN_10b0a08b8;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  lVar11 = *(long *)((long)puVar4 + (long)_DAT_11278c728);
  _objc_retain(lVar11);
  puVar9 = auStack_5b0;
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x26 = *plStack_5e0;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitAddChildViewCon_1125b05e0;
      unaff_x28 = 0;
      do {
        if (*plStack_5e0 != unaff_x26) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x25 = *(ulong *)(lStack_5e8 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar5 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf4b0e0(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar12 != unaff_x28);
      puVar9 = auStack_5b0;
      lVar12 = lVar11;
      puVar3 = &uStack_5f0;
      func_0x00010bf52a60();
      lVar13 = 0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar10);
  puVar6 = (undefined1 *)puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_720;
  pcStack_5f8 = FUN_10b0a0a24;
  lStack_660 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  lStack_640 = unaff_x26;
  uStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  lStack_628 = lVar13;
  lStack_620 = lVar11;
  puStack_618 = (undefined1 *)puVar4;
  puStack_610 = puVar10;
  puStack_608 = (undefined1 *)puVar2;
  ppppuStack_600 = &ppppuStack_4d0;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  lStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  plStack_710 = (long *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  lVar11 = *(long *)(puVar6 + _DAT_11278c728);
  _objc_retain(lVar11);
  puVar10 = auStack_6e0;
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x26 = *plStack_710;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitRemoveFromParen_1125b0608;
      unaff_x28 = 0;
      do {
        if (*plStack_710 != unaff_x26) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x25 = *(ulong *)(lStack_718 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar5 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf4b180(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar12 != unaff_x28);
      puVar10 = auStack_6e0;
      lVar12 = lVar11;
      puVar8 = &uStack_720;
      func_0x00010bf52a60();
      lVar13 = 0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar9);
  puVar7 = (undefined1 *)puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_660) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_850;
  pcStack_728 = FUN_10b0a0b90;
  lStack_790 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_780 = unaff_x28;
  ppuStack_778 = unaff_x27;
  lStack_770 = unaff_x26;
  uStack_768 = unaff_x25;
  puStack_760 = unaff_x24;
  lStack_758 = lVar13;
  lStack_750 = lVar11;
  puStack_748 = puVar6;
  puStack_740 = puVar9;
  puStack_738 = (undefined1 *)puVar3;
  ppppuStack_730 = &ppppuStack_600;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  lStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  plStack_840 = (long *)0x0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  lVar12 = *(long *)(puVar7 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar9 = auStack_810;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar11 = *plStack_840;
    do {
      puVar1 = PTR_s_containerVC_UIKitPushViewControl_1125b0600;
      lVar15 = 0;
      do {
        if (*plStack_840 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        uVar14 = *(ulong *)(lStack_848 + lVar15 * 8);
        _objc_retain(uVar14);
        uVar5 = uVar14;
        _objc_opt_respondsToSelector(uVar14,puVar1);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf4b160(uVar14);
        }
        _objc_release(uVar14);
        lVar15 = lVar15 + 1;
      } while (lVar13 != lVar15);
      puVar9 = auStack_810;
      lVar13 = lVar12;
      puVar2 = &uStack_850;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_790) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  lVar15 = *(long *)((long)puVar8 + (long)_DAT_11278c728);
  _objc_retain(lVar15);
  lVar13 = lVar15;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar13 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar15);
      }
      uVar14 = *(ulong *)(lVar16 * 8);
      _objc_retain(uVar14);
      uVar5 = uVar14;
      _objc_opt_respondsToSelector(uVar14,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x00010bf4b140(uVar14);
      }
      _objc_release(uVar14);
      lVar16 = lVar16 + 1;
    } while (lVar13 != lVar16);
    lVar13 = lVar15;
    func_0x00010bf52a60();
    puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  }
  _objc_release(lVar15);
  _objc_release(puVar9);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained((undefined1 *)((long)puVar2 + (long)_DAT_11278c714));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a04e0; end: 10b0a0627; -[SCContainerViewController swizzledUIKitDidPresentViewController:presentationOwner:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a04e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar14;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar15;
  long lVar16;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 auStack_6e0 [128];
  long lStack_660;
  long lStack_650;
  undefined **ppuStack_648;
  long lStack_640;
  ulong uStack_638;
  undefined *puStack_630;
  long lStack_628;
  long lStack_620;
  undefined1 *puStack_618;
  undefined1 *puStack_610;
  undefined1 *puStack_608;
  undefined8 ****ppppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [128];
  long lStack_530;
  long lStack_520;
  undefined **ppuStack_518;
  long lStack_510;
  ulong uStack_508;
  undefined *puStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined1 *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  undefined1 ****ppppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar9 = auStack_e8;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x25 = *puStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf4b120(*(undefined8 *)(lStack_128 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar13 != unaff_x26);
      puVar9 = auStack_e8;
      lVar13 = lVar12;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_260;
  pcStack_138 = FUN_10b0a0628;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar12 = *(long *)(param_3 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar10 = auStack_218;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x25 = *puStack_250;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf4b1a0(*(undefined8 *)(lStack_258 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar13 != unaff_x26);
      puVar10 = auStack_218;
      lVar13 = lVar12;
      puVar3 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_390;
  pcStack_268 = FUN_10b0a0770;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar13 = *(long *)((long)puVar2 + (long)_DAT_11278c728);
  _objc_retain(lVar13);
  puVar9 = auStack_348;
  lVar12 = lVar13;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x25 = *puStack_380;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010bf4b100(*(undefined8 *)(lStack_388 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar12 != unaff_x26);
      puVar9 = auStack_348;
      lVar12 = lVar13;
      puVar8 = &uStack_390;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar13);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_4c0;
  pcStack_398 = FUN_10b0a08b8;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  lVar11 = *(long *)((long)puVar3 + (long)_DAT_11278c728);
  _objc_retain(lVar11);
  puVar10 = auStack_480;
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x26 = *plStack_4b0;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitAddChildViewCon_1125b05e0;
      unaff_x28 = 0;
      do {
        if (*plStack_4b0 != unaff_x26) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x25 = *(ulong *)(lStack_4b8 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf4b0e0(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar12 != unaff_x28);
      puVar10 = auStack_480;
      lVar12 = lVar11;
      puVar2 = &uStack_4c0;
      func_0x00010bf52a60();
      lVar13 = 0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar9);
  puVar5 = (undefined1 *)puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_5f0;
  pcStack_4c8 = FUN_10b0a0a24;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  lStack_510 = unaff_x26;
  uStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  lStack_4f8 = lVar13;
  lStack_4f0 = lVar11;
  puStack_4e8 = (undefined1 *)puVar3;
  puStack_4e0 = puVar9;
  puStack_4d8 = (undefined1 *)puVar8;
  ppppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  lVar11 = *(long *)(puVar5 + _DAT_11278c728);
  _objc_retain(lVar11);
  puVar9 = auStack_5b0;
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x26 = *plStack_5e0;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitRemoveFromParen_1125b0608;
      unaff_x28 = 0;
      do {
        if (*plStack_5e0 != unaff_x26) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x25 = *(ulong *)(lStack_5e8 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf4b180(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar12 != unaff_x28);
      puVar9 = auStack_5b0;
      lVar12 = lVar11;
      puVar7 = &uStack_5f0;
      func_0x00010bf52a60();
      lVar13 = 0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar10);
  puVar6 = (undefined1 *)puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_530) {
    ___stack_chk_fail();
    puVar3 = &uStack_720;
    pcStack_5f8 = FUN_10b0a0b90;
    lStack_660 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_650 = unaff_x28;
    ppuStack_648 = unaff_x27;
    lStack_640 = unaff_x26;
    uStack_638 = unaff_x25;
    puStack_630 = unaff_x24;
    lStack_628 = lVar13;
    lStack_620 = lVar11;
    puStack_618 = puVar5;
    puStack_610 = puVar10;
    puStack_608 = (undefined1 *)puVar2;
    ppppuStack_600 = &ppppuStack_4d0;
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    lStack_718 = 0;
    uStack_720 = 0;
    uStack_708 = 0;
    plStack_710 = (long *)0x0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    lVar12 = *(long *)(puVar6 + _DAT_11278c728);
    _objc_retain(lVar12);
    puVar10 = auStack_6e0;
    lVar13 = lVar12;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar11 = *plStack_710;
      do {
        puVar1 = PTR_s_containerVC_UIKitPushViewControl_1125b0600;
        lVar15 = 0;
        do {
          if (*plStack_710 != lVar11) {
            _objc_enumerationMutation(lVar12);
          }
          uVar14 = *(ulong *)(lStack_718 + lVar15 * 8);
          _objc_retain(uVar14);
          uVar4 = uVar14;
          _objc_opt_respondsToSelector(uVar14,puVar1);
          if ((uVar4 & 1) != 0) {
            func_0x00010bf4b160(uVar14);
          }
          _objc_release(uVar14);
          lVar15 = lVar15 + 1;
        } while (lVar13 != lVar15);
        puVar10 = auStack_6e0;
        lVar13 = lVar12;
        puVar3 = &uStack_720;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar12);
    _objc_release(puVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_660) {
      ___stack_chk_fail();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar3);
      _objc_retain(puVar10);
      lVar15 = *(long *)((long)puVar7 + (long)_DAT_11278c728);
      _objc_retain(lVar15);
      lVar13 = lVar15;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
      while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar13 != 0) {
        lVar16 = 0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(lVar15);
          }
          uVar14 = *(ulong *)(lVar16 * 8);
          _objc_retain(uVar14);
          uVar4 = uVar14;
          _objc_opt_respondsToSelector(uVar14,puVar1);
          if ((uVar4 & 1) != 0) {
            func_0x00010bf4b140(uVar14);
          }
          _objc_release(uVar14);
          lVar16 = lVar16 + 1;
        } while (lVar13 != lVar16);
        lVar13 = lVar15;
        func_0x00010bf52a60();
        puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
      }
      _objc_release(lVar15);
      _objc_release(puVar10);
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      ___stack_chk_fail();
      _objc_loadWeakRetained((undefined1 *)((long)puVar3 + (long)_DAT_11278c714));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b0a0628; end: 10b0a076f; -[SCContainerViewController swizzledUIKitWillDismissViewController:dismissalOwner:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0628(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar14;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar15;
  long lVar16;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [128];
  long lStack_530;
  long lStack_520;
  undefined **ppuStack_518;
  long lStack_510;
  ulong uStack_508;
  undefined *puStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined1 *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  undefined1 ****ppppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  long lStack_3f0;
  undefined **ppuStack_3e8;
  long lStack_3e0;
  ulong uStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar9 = auStack_e8;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x25 = *puStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf4b1a0(*(undefined8 *)(lStack_128 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar13 != unaff_x26);
      puVar9 = auStack_e8;
      lVar13 = lVar12;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_260;
  pcStack_138 = FUN_10b0a0770;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar13 = *(long *)(param_3 + _DAT_11278c728);
  _objc_retain(lVar13);
  puVar10 = auStack_218;
  lVar12 = lVar13;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x25 = *puStack_250;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010bf4b100(*(undefined8 *)(lStack_258 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar12 != unaff_x26);
      puVar10 = auStack_218;
      lVar12 = lVar13;
      puVar7 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar13);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_390;
  pcStack_268 = FUN_10b0a08b8;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar11 = *(long *)((long)puVar2 + (long)_DAT_11278c728);
  _objc_retain(lVar11);
  puVar9 = auStack_350;
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x26 = *plStack_380;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitAddChildViewCon_1125b05e0;
      unaff_x28 = 0;
      do {
        if (*plStack_380 != unaff_x26) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x25 = *(ulong *)(lStack_388 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b0e0(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar12 != unaff_x28);
      puVar9 = auStack_350;
      lVar12 = lVar11;
      puVar8 = &uStack_390;
      func_0x00010bf52a60();
      lVar13 = 0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar10);
  puVar4 = (undefined1 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_4c0;
  pcStack_398 = FUN_10b0a0a24;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  lStack_3e0 = unaff_x26;
  uStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  lStack_3c8 = lVar13;
  lStack_3c0 = lVar11;
  puStack_3b8 = (undefined1 *)puVar2;
  puStack_3b0 = puVar10;
  puStack_3a8 = (undefined1 *)puVar7;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  lVar11 = *(long *)(puVar4 + _DAT_11278c728);
  _objc_retain(lVar11);
  puVar10 = auStack_480;
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    unaff_x26 = *plStack_4b0;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitRemoveFromParen_1125b0608;
      unaff_x28 = 0;
      do {
        if (*plStack_4b0 != unaff_x26) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x25 = *(ulong *)(lStack_4b8 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b180(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar12 != unaff_x28);
      puVar10 = auStack_480;
      lVar12 = lVar11;
      puVar6 = &uStack_4c0;
      func_0x00010bf52a60();
      lVar13 = 0;
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar9);
  puVar5 = (undefined1 *)puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_5f0;
  pcStack_4c8 = FUN_10b0a0b90;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  lStack_510 = unaff_x26;
  uStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  lStack_4f8 = lVar13;
  lStack_4f0 = lVar11;
  puStack_4e8 = puVar4;
  puStack_4e0 = puVar9;
  puStack_4d8 = (undefined1 *)puVar8;
  ppppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(puVar6);
  _objc_retain(puVar10);
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  lVar12 = *(long *)(puVar5 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar9 = auStack_5b0;
  lVar13 = lVar12;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar11 = *plStack_5e0;
    do {
      puVar1 = PTR_s_containerVC_UIKitPushViewControl_1125b0600;
      lVar15 = 0;
      do {
        if (*plStack_5e0 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        uVar14 = *(ulong *)(lStack_5e8 + lVar15 * 8);
        _objc_retain(uVar14);
        uVar3 = uVar14;
        _objc_opt_respondsToSelector(uVar14,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b160(uVar14);
        }
        _objc_release(uVar14);
        lVar15 = lVar15 + 1;
      } while (lVar13 != lVar15);
      puVar9 = auStack_5b0;
      lVar13 = lVar12;
      puVar2 = &uStack_5f0;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar12);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_530) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    _objc_retain(puVar9);
    lVar15 = *(long *)((long)puVar6 + (long)_DAT_11278c728);
    _objc_retain(lVar15);
    lVar13 = lVar15;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
    while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar13 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar15);
        }
        uVar14 = *(ulong *)(lVar16 * 8);
        _objc_retain(uVar14);
        uVar3 = uVar14;
        _objc_opt_respondsToSelector(uVar14,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b140(uVar14);
        }
        _objc_release(uVar14);
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = lVar15;
      func_0x00010bf52a60();
      puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
    }
    _objc_release(lVar15);
    _objc_release(puVar9);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return;
    }
    ___stack_chk_fail();
    _objc_loadWeakRetained((undefined1 *)((long)puVar2 + (long)_DAT_11278c714));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 10b0a0770; end: 10b0a08b7; -[SCContainerViewController swizzledUIKitDidDismissViewController:dismissalOwner:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0770(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar13;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar14;
  long lVar15;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  long lStack_3f0;
  undefined **ppuStack_3e8;
  long lStack_3e0;
  ulong uStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  long lStack_2c0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
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
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar12);
  puVar8 = auStack_e8;
  lVar11 = lVar12;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x25 = *puStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf4b100(*(undefined8 *)(lStack_128 + unaff_x26 * 8));
        unaff_x26 = unaff_x26 + 1;
      } while (lVar11 != unaff_x26);
      puVar8 = auStack_e8;
      lVar11 = lVar12;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (lVar11 != 0);
  }
  _objc_release(lVar12);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_260;
  pcStack_138 = FUN_10b0a08b8;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar10 = *(long *)(param_3 + _DAT_11278c728);
  _objc_retain(lVar10);
  puVar9 = auStack_220;
  lVar11 = lVar10;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x26 = *plStack_250;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitAddChildViewCon_1125b05e0;
      unaff_x28 = 0;
      do {
        if (*plStack_250 != unaff_x26) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x25 = *(ulong *)(lStack_258 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar2 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf4b0e0(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar11 != unaff_x28);
      puVar9 = auStack_220;
      lVar11 = lVar10;
      puVar7 = &uStack_260;
      func_0x00010bf52a60();
      lVar12 = 0;
    } while (lVar11 != 0);
  }
  _objc_release(lVar10);
  _objc_release(puVar8);
  puVar3 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_390;
  pcStack_268 = FUN_10b0a0a24;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  lStack_2b0 = unaff_x26;
  uStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  lStack_298 = lVar12;
  lStack_290 = lVar10;
  lStack_288 = param_3;
  puStack_280 = puVar8;
  puStack_278 = (undefined1 *)puVar6;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar10 = *(long *)(puVar3 + _DAT_11278c728);
  _objc_retain(lVar10);
  puVar8 = auStack_350;
  lVar11 = lVar10;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x26 = *plStack_380;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitRemoveFromParen_1125b0608;
      unaff_x28 = 0;
      do {
        if (*plStack_380 != unaff_x26) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x25 = *(ulong *)(lStack_388 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar2 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf4b180(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar11 != unaff_x28);
      puVar8 = auStack_350;
      lVar11 = lVar10;
      puVar5 = &uStack_390;
      func_0x00010bf52a60();
      lVar12 = 0;
    } while (lVar11 != 0);
  }
  _objc_release(lVar10);
  _objc_release(puVar9);
  puVar4 = (undefined1 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_4c0;
  pcStack_398 = FUN_10b0a0b90;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  lStack_3e0 = unaff_x26;
  uStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  lStack_3c8 = lVar12;
  lStack_3c0 = lVar10;
  puStack_3b8 = puVar3;
  puStack_3b0 = puVar9;
  puStack_3a8 = (undefined1 *)puVar7;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  lVar11 = *(long *)(puVar4 + _DAT_11278c728);
  _objc_retain(lVar11);
  puVar9 = auStack_480;
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar10 = *plStack_4b0;
    do {
      puVar1 = PTR_s_containerVC_UIKitPushViewControl_1125b0600;
      lVar14 = 0;
      do {
        if (*plStack_4b0 != lVar10) {
          _objc_enumerationMutation(lVar11);
        }
        uVar13 = *(ulong *)(lStack_4b8 + lVar14 * 8);
        _objc_retain(uVar13);
        uVar2 = uVar13;
        _objc_opt_respondsToSelector(uVar13,puVar1);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf4b160(uVar13);
        }
        _objc_release(uVar13);
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      puVar9 = auStack_480;
      lVar12 = lVar11;
      puVar6 = &uStack_4c0;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar9);
  lVar14 = *(long *)((long)puVar5 + (long)_DAT_11278c728);
  _objc_retain(lVar14);
  lVar12 = lVar14;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar12 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar14);
      }
      uVar13 = *(ulong *)(lVar15 * 8);
      _objc_retain(uVar13);
      uVar2 = uVar13;
      _objc_opt_respondsToSelector(uVar13,puVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf4b140(uVar13);
      }
      _objc_release(uVar13);
      lVar15 = lVar15 + 1;
    } while (lVar12 != lVar15);
    lVar12 = lVar14;
    func_0x00010bf52a60();
    puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  }
  _objc_release(lVar14);
  _objc_release(puVar9);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained((undefined1 *)((long)puVar6 + (long)_DAT_11278c714));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a08b8; end: 10b0a0a23; -[SCContainerViewController swizzledUIKitAddChildViewController:parentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a08b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar12;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar13;
  long lVar14;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  long lStack_2c0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
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
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar10);
  puVar8 = auStack_f0;
  lVar2 = lVar10;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitAddChildViewCon_1125b05e0;
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x25 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b0e0(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      puVar8 = auStack_f0;
      lVar2 = lVar10;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  pcStack_138 = FUN_10b0a0a24;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  lStack_160 = lVar10;
  lStack_158 = param_1;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar11 = *(long *)(lVar2 + _DAT_11278c728);
  _objc_retain(lVar11);
  puVar9 = auStack_220;
  lVar10 = lVar11;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x26 = *plStack_250;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitRemoveFromParen_1125b0608;
      unaff_x28 = 0;
      do {
        if (*plStack_250 != unaff_x26) {
          _objc_enumerationMutation(lVar11);
        }
        unaff_x25 = *(ulong *)(lStack_258 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b180(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar10 != unaff_x28);
      puVar9 = auStack_220;
      lVar10 = lVar11;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar10 != 0);
  }
  _objc_release(lVar11);
  _objc_release(puVar8);
  puVar4 = (undefined1 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_390;
  pcStack_268 = FUN_10b0a0b90;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  lStack_2b0 = unaff_x26;
  uStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  uStack_298 = unaff_x23;
  lStack_290 = lVar11;
  lStack_288 = lVar2;
  puStack_280 = puVar8;
  puStack_278 = (undefined1 *)puVar7;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar5);
  _objc_retain(puVar9);
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar10 = *(long *)(puVar4 + _DAT_11278c728);
  _objc_retain(lVar10);
  puVar8 = auStack_350;
  lVar2 = lVar10;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_380;
    do {
      puVar1 = PTR_s_containerVC_UIKitPushViewControl_1125b0600;
      lVar13 = 0;
      do {
        if (*plStack_380 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        uVar12 = *(ulong *)(lStack_388 + lVar13 * 8);
        _objc_retain(uVar12);
        uVar3 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b160(uVar12);
        }
        _objc_release(uVar12);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar8 = auStack_350;
      lVar2 = lVar10;
      puVar6 = &uStack_390;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  lVar13 = *(long *)((long)puVar5 + (long)_DAT_11278c728);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar2 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar13);
      }
      uVar12 = *(ulong *)(lVar14 * 8);
      _objc_retain(uVar12);
      uVar3 = uVar12;
      _objc_opt_respondsToSelector(uVar12,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010bf4b140(uVar12);
      }
      _objc_release(uVar12);
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = lVar13;
    func_0x00010bf52a60();
    puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  }
  _objc_release(lVar13);
  _objc_release(puVar8);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained((undefined1 *)((long)puVar6 + (long)_DAT_11278c714));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a0a24; end: 10b0a0b8f; -[SCContainerViewController swizzledUIKitRemoveFromParentViewController:parentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0a24(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  long unaff_x26;
  long lVar10;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar11;
  long lVar12;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar4 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar8);
  puVar6 = auStack_f0;
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR_s_consumeFuture_1125b0000;
    do {
      unaff_x24 = PTR_s_containerVC_UIKitRemoveFromParen_1125b0608;
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x25 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        _objc_retain(unaff_x25);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b180(unaff_x25);
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      puVar6 = auStack_f0;
      lVar2 = lVar8;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = &uStack_260;
    pcStack_138 = FUN_10b0a0b90;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    lStack_160 = lVar8;
    lStack_158 = param_1;
    uStack_150 = param_4;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar8 = *(long *)(lVar2 + _DAT_11278c728);
    _objc_retain(lVar8);
    puVar7 = auStack_220;
    lVar2 = lVar8;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_250;
      do {
        puVar1 = PTR_s_containerVC_UIKitPushViewControl_1125b0600;
        lVar11 = 0;
        do {
          if (*plStack_250 != lVar10) {
            _objc_enumerationMutation(lVar8);
          }
          uVar9 = *(ulong *)(lStack_258 + lVar11 * 8);
          _objc_retain(uVar9);
          uVar3 = uVar9;
          _objc_opt_respondsToSelector(uVar9,puVar1);
          if ((uVar3 & 1) != 0) {
            func_0x00010bf4b160(uVar9);
          }
          _objc_release(uVar9);
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        puVar7 = auStack_220;
        lVar2 = lVar8;
        puVar5 = &uStack_260;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar8);
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
      return;
    }
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    _objc_retain(puVar7);
    lVar11 = *(long *)((long)puVar4 + (long)_DAT_11278c728);
    _objc_retain(lVar11);
    lVar2 = lVar11;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
    while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar11);
        }
        uVar9 = *(ulong *)(lVar12 * 8);
        _objc_retain(uVar9);
        uVar3 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b140(uVar9);
        }
        _objc_release(uVar9);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar11;
      func_0x00010bf52a60();
      puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
    }
    _objc_release(lVar11);
    _objc_release(puVar7);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    _objc_loadWeakRetained((undefined1 *)((long)puVar5 + (long)_DAT_11278c714));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 10b0a0b90; end: 10b0a0cfb; -[SCContainerViewController swizzledUIKitPushViewController:navigationController:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0b90(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar4 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar6);
  puVar5 = auStack_f0;
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      puVar1 = PTR_s_containerVC_UIKitPushViewControl_1125b0600;
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        _objc_retain(uVar7);
        uVar3 = uVar7;
        _objc_opt_respondsToSelector(uVar7,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf4b160(uVar7);
        }
        _objc_release(uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar5 = auStack_f0;
      lVar2 = lVar6;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  lVar9 = *(long *)(param_3 + _DAT_11278c728);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar9);
      }
      uVar7 = *(ulong *)(lVar10 * 8);
      _objc_retain(uVar7);
      uVar3 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010bf4b140(uVar7);
      }
      _objc_release(uVar7);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar9;
    func_0x00010bf52a60();
    puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  }
  _objc_release(lVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained((undefined1 *)((long)puVar4 + (long)_DAT_11278c714));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a0cfc; end: 10b0a0e67; -[SCContainerViewController swizzledUIKitPopViewController:navigationController:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0cfc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + _DAT_11278c728);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  while (PTR_s_containerVC_UIKitPopViewControll_1125b05f8 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      _objc_retain(uVar7);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf4b140(uVar7);
      }
      _objc_release(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_containerVC_UIKitPopViewControll_1125b05f8;
  }
  _objc_release(lVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + _DAT_11278c714);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a0e68; end: 10b0a0e87; -[SCContainerViewController loggingObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0e68(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c714);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a0e88; end: 10b0a0e97; -[SCContainerViewController useUIKitPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b0a0e88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c720);
}



/* Entry: 10b0a0e98; end: 10b0a0eb7; -[SCContainerViewController customStatusBarStyleContextController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0e98(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c744);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a0eb8; end: 10b0a0f97; -[SCContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0eb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278c74c);
  _objc_destroyWeak(param_1 + _DAT_11278c748);
  _objc_destroyWeak(param_1 + _DAT_11278c744);
  _objc_storeStrong(param_1 + _DAT_11278c730,0);
  _objc_destroyWeak(param_1 + _DAT_11278c714);
  _objc_storeStrong(param_1 + _DAT_11278c710,0);
  _objc_storeStrong(param_1 + _DAT_11278c728,0);
  _objc_storeStrong(param_1 + _DAT_11278c724,0);
  _objc_storeStrong(param_1 + _DAT_11278c71c,0);
  _objc_storeStrong(param_1 + _DAT_11278c718,0);
  _objc_storeStrong(param_1 + _DAT_11278c72c,0);
  _objc_storeStrong(param_1 + _DAT_11278c73c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c740,0);
  return;
}



/* Entry: 10b0a0f98; end: 10b0a0faf; -[SCPresentationContextImplementation containerView] */

void FUN_10b0a0f98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a0fb0; end: 10b0a0fb7; -[SCPresentationContextImplementation newView] */

void FUN_10b0a0fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_loadWeakRetained_11034d270)(param_1 + 0x10);
  return;
}



/* Entry: 10b0a0fb8; end: 10b0a0fcf; -[SCPresentationContextImplementation oldView] */

void FUN_10b0a0fb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a0fd0; end: 10b0a0fdb; -[SCPresentationContextImplementation overlayItemFrame] */

undefined8 FUN_10b0a0fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0a0fdc; end: 10b0a0fe3; -[SCPresentationContextImplementation headerAnimationStyle] */

undefined8 FUN_10b0a0fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b0a0fe4; end: 10b0a0feb; -[SCPresentationContextImplementation footerHeight] */

undefined8 FUN_10b0a0fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0a0fec; end: 10b0a110b; -[SCPresentationContextImplementation triggerInteractionCompletionBlocks:complete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a0fec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      (**(code **)(*(long *)(lVar6 * 8) + 0x10))(*(long *)(lVar6 * 8),param_3,param_4);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_3 + _DAT_11278c77c);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b0a110c; end: 10b0a113b; -[SIGContainerPresentationView activeContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a110c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c77c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0a113c; end: 10b0a116f;  */

void FUN_10b0a113c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf18850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_beginPresentation__1125a3bb8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0a1170; end: 10b0a1207;  */

void FUN_10b0a1170(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x000107c2bd44(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdf040(param_2);
  _objc_release(param_2);
  func_0x00010bf02ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a1208; end: 10b0a121f;  */

void FUN_10b0a1208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_completeAnimation__1125ae7a8);
  return;
}



/* Entry: 10b0a1220; end: 10b0a1287;  */

void FUN_10b0a1220(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c084de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02ec0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a1288; end: 10b0a1297;  */

void FUN_10b0a1288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_completeAnimation__1125ae7a8);
  return;
}



/* Entry: 10b0a1298; end: 10b0a12a7; -[SIGContainerPresentationView containerHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a1298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c77c),PTR_s_header_1125d5598);
  return;
}



/* Entry: 10b0a12a8; end: 10b0a12f7; -[SIGContainerPresentationView containerBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a12a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c77c);
  func_0x00010bf14800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


