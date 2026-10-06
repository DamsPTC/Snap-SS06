/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d76d54; end: 107d76d5b; -[SCImpalaInteractionControllerContext cancelled] */

void FUN_107d76d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_transitionWasCancelled_11267c528);
  return;
}



/* Entry: 107d76d5c; end: 107d76d7f; -[SCImpalaInteractionControllerContext copyWithZone:] */

undefined8 FUN_107d76d5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d76d80; end: 107d76d87; -[SCImpalaInteractionControllerContext view] */

undefined8 FUN_107d76d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d76d88; end: 107d76db7; -[SCImpalaInteractionControllerContext .cxx_destruct] */

void FUN_107d76d88(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d76db8; end: 107d76e7b; -[SCImpalaPresentationController initWithViewController:creatorsProfileImageScopeExposer:creatorsProfileImageScopeServices:] */

undefined1 *
FUN_107d76db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126faf38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d76e7c; end: 107d76eff; -[SCImpalaPresentationController dismissWithAnimated:] */

void FUN_107d76e7c(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 107d76f00; end: 107d76f57;  */

void FUN_107d76f00(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar1);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    bVar2 = *(byte *)(*(long *)(param_1 + 0x20) + 0x48);
  }
  else {
    bVar2 = 1;
  }
  func_0x00010bf84b00(lVar1,param_2,bVar2 & 1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d76f58; end: 107d770bb; -[SCImpalaPresentationController presentImageWithView:parentView:imageURL:fadeOutDisappearance:shareProfileHandler:reportHandler:] */

void FUN_107d76f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_8;
  _objc_retain(param_8);
  if (param_5 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107d770bc;
    puStack_90 = &UNK_110a0b928;
    uStack_88 = param_1;
    _objc_retain(param_7);
    uStack_68 = param_7;
    _objc_retain(param_8);
    uStack_60 = param_8;
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_5);
    lStack_70 = param_5;
    uStack_58 = param_6;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
    _objc_release(uVar1);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d770bc; end: 107d77533;  */

void FUN_107d770bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_5 + 0x20) + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_5 + 0x40);
  _objc_retainBlock();
  uVar17 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x38) = uVar2;
  _objc_release(uVar17);
  uVar2 = *(undefined8 *)(param_5 + 0x48);
  _objc_retainBlock();
  uVar17 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x40);
  *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x40) = uVar2;
  _objc_release(uVar17);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010b9688dc();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_5 + 0x20) + 8) = uVar2;
  _objc_release(uVar17);
  lVar3 = *(long *)(param_5 + 0x30);
  func_0x00010b9688dc();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 8);
  func_0x00010bf20c00(uVar2);
  lVar1 = *(long *)(param_5 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar2);
  uVar18 = param_1;
  uVar19 = param_2;
  uVar20 = param_3;
  uVar21 = param_4;
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b40c0;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20);
  *(undefined **)(*(long *)(param_5 + 0x20) + 0x20) = puVar6;
  _objc_release(uVar2);
  func_0x00010befbb60(lVar3);
  func_0x00010c219b60(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20));
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c2793a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c274200(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bf1ff80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar17);
  _objc_release(lVar5);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar7);
  lVar5 = *(long *)(*(long *)(param_5 + 0x20) + 0x18);
  lVar1 = *(long *)(param_5 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar10 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf23d20(param_1,param_2,param_3,param_4,uVar18,uVar19,uVar20,uVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10));
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107d7753c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x38) + 0x10))();
  return;
}



/* Entry: 107d77534; end: 107d7753f; -[SCImpalaPresentationController didTapShareProfile:] */

void FUN_107d77534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107d7753c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 107d77540; end: 107d7754b; -[SCImpalaPresentationController didTapReportProfile:] */

void FUN_107d77540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107d77548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  return;
}



/* Entry: 107d7754c; end: 107d7756b; -[SCImpalaPresentationController shouldHideActionSheet] */

bool FUN_107d7754c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    return false;
  }
  return *(long *)(param_1 + 0x38) == 0;
}



/* Entry: 107d7756c; end: 107d77573; -[SCImpalaPresentationController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_107d7756c(void)

{
  return 0;
}



/* Entry: 107d77574; end: 107d7757f; -[SCImpalaPresentationController pushToValdiMarshaller:] */

undefined8 FUN_107d77574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9d1ac(param_3,param_1);
  func_0x00010af9d1a4();
  func_0x00010af9d160();
  func_0x00010af9d124();
  return param_3;
}



/* Entry: 107d77580; end: 107d77597; -[SCImpalaPresentationController viewController] */

void FUN_107d77580(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d77598; end: 107d7759f; -[SCImpalaPresentationController forceAnimatedDismiss] */

undefined1 FUN_107d77598(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 107d775a0; end: 107d775a7; -[SCImpalaPresentationController setForceAnimatedDismiss:] */

void FUN_107d775a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107d775a8; end: 107d7760f; -[SCImpalaPresentationController .cxx_destruct] */

void FUN_107d775a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d77610; end: 107d77717; -[SCImpalaShowProfilePresenter initWithPresentingViewController:] */

undefined8 * FUN_107d77610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126faf40;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 4,param_3);
    puVar2 = PTR_PTR_1126d7b38;
    _objc_alloc();
    puVar3 = puVar1 + 4;
    _objc_loadWeakRetained(puVar3);
    _objc_retain();
    puVar4 = puVar3;
    func_0x00010c29bf00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061920(0x3fd851eb851eb852);
    _objc_release(puVar3);
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d77718; end: 107d77837; -[SCImpalaShowProfilePresenter initWithPresentingViewController:isNavigationStyleVertical:] */

undefined8 *
FUN_107d77718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126faf40;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 4,param_3);
    *(undefined1 *)(puVar1 + 3) = param_4;
    puVar2 = PTR_PTR_1126d7b38;
    _objc_alloc();
    puVar3 = puVar1 + 4;
    _objc_loadWeakRetained(puVar3);
    _objc_retain();
    puVar4 = puVar3;
    func_0x00010c29bf00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061940(0x3fd851eb851eb852);
    _objc_release(puVar3);
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d77838; end: 107d7794b; -[SCImpalaShowProfilePresenter initWithSwipeUpInPresentingViewController:provider:viewForPresentationGesture:] */

undefined8 *
FUN_107d77838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126faf40;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 4,param_3);
    _objc_storeWeak(puVar1 + 5,param_4);
    puVar2 = PTR_PTR_1126d7b38;
    _objc_alloc();
    puVar3 = puVar1 + 4;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c061920(0x3fd851eb851eb852);
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d7794c; end: 107d77a7f; -[SCImpalaShowProfilePresenter initWithSwipeUpInPresentingViewController:provider:viewForPresentationGesture:isNavigationStyleVertical:] */

undefined8 *
FUN_107d7794c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126faf40;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 4,param_3);
    _objc_storeWeak(puVar1 + 5,param_4);
    *(undefined1 *)(puVar1 + 3) = param_6;
    puVar2 = PTR_PTR_1126d7b38;
    _objc_alloc();
    puVar3 = puVar1 + 4;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c061940(0x3fd851eb851eb852);
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d77a80; end: 107d77ceb; -[SCImpalaShowProfilePresenter presentViewController:animated:completion:] */

void FUN_107d77a80(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) goto LAB_107d77ca0;
  func_0x00010c1c8b80(param_3);
  func_0x00010c219b20(param_3);
  puVar4 = PTR_PTR_1126d7b38;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061940(0x3fd851eb851eb852);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107d77cec;
  puStack_80 = &UNK_110849230;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = (undefined1)param_4;
  _objc_retain(param_3);
  lStack_78 = param_3;
  _objc_retain(param_5);
  ppuVar5 = &puStack_98;
  uStack_70 = param_5;
  _objc_retainBlock();
  if (param_4 == 0) {
LAB_107d77c6c:
    (*(code *)ppuVar5[2])(ppuVar5);
  }
  else {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a5a28);
    _objc_release(param_3);
    uVar1 = (uint)lVar2 ^ 1;
    if (param_3 == 0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) != 0) goto LAB_107d77c6c;
    _objc_retain(ppuVar5);
    func_0x00010c10a440(param_3);
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar5);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
LAB_107d77ca0:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107d77cec; end: 107d77e27;  */

void FUN_107d77cec(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x1a) == '\x01') {
      puVar3 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar3);
    }
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      lVar4 = lVar2 + 0x30;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar2;
      func_0x00010bec9260(lVar2);
      func_0x00010c2395a0(lVar4,param_2,lVar2,lVar5);
      _objc_release(lVar4);
    }
    lVar4 = lVar2 + 0x20;
    _objc_loadWeakRetained(lVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x38);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107d77e28;
    puStack_60 = &UNK_11084a9e8;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar7;
    lStack_50 = lVar2;
    _objc_retain(uVar6);
    uStack_48 = uVar6;
    func_0x00010c10eda0(lVar4,param_2,uVar7,uVar1,&puStack_78);
    _objc_release(lVar4);
    _objc_release(uStack_48);
    _objc_release(uStack_58);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107d77e28; end: 107d77e6f;  */

void FUN_107d77e28(long param_1,undefined8 param_2)

{
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x20),param_2,4);
  *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x19) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d77e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d77e70; end: 107d77e7b;  */

void FUN_107d77e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107d77e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107d77e7c; end: 107d77e97; -[SCImpalaShowProfilePresenter _swipeDirectionForLogging] */

ulong FUN_107d77e7c(long param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    return (ulong)*(byte *)(param_1 + 0x18);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107d77e98; end: 107d77f33; -[SCImpalaShowProfilePresenter _swipeActionEnabledWithDirection:] */

bool FUN_107d77e98(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c2395c0();
    _objc_release(lVar3);
    _objc_release(uVar1);
    if ((int)lVar4 == 0) {
      return false;
    }
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 107d77f34; end: 107d77fd7; -[SCImpalaShowProfilePresenter swipeInteractionControllerShouldStartInteraction:withDirection:] */

long FUN_107d77f34(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x19) = 1;
  if (param_3 != *(long *)(param_1 + 8)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a5a20);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 1;
    }
    else {
      func_0x00010c22e340(lVar3);
    }
    _objc_release(lVar1);
    return lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__swipeActionEnabledWithDirection_11258fe38,param_4);
  return param_1;
}



/* Entry: 107d77fd8; end: 107d78097; -[SCImpalaShowProfilePresenter swipeInteractionControllerDidStartInteraction:withDirection:] */

void FUN_107d77fd8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + 0x10)) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf84b00();
  }
  else {
    if ((param_3 != *(long *)(param_1 + 8)) ||
       (lVar2 = param_1, func_0x00010bec9240(param_1,param_2,param_4), (int)lVar2 == 0))
    goto LAB_107d78084;
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c10eda0(param_1,param_2,lVar2,1,0);
    }
  }
  _objc_release(lVar2);
LAB_107d78084:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d78098; end: 107d78313; -[SCImpalaShowProfilePresenter swipeInteractionController:withDirection:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

ulong FUN_107d78098(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = 1;
  }
  else if (param_3 == *(long *)(param_1 + 8)) {
    func_0x00010bec9240(param_1);
  }
  else if (*(char *)(param_1 + 0x18) == '\x01') {
    param_1 = param_5;
    func_0x000107d7814c();
  }
  else {
    param_1 = param_5;
    func_0x000107d78230(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107d78314; end: 107d7832b; -[SCImpalaShowProfilePresenter swipeInteractionController:shouldBeRequiredToFailByGestureRecognizer:] */

bool FUN_107d78314(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  if (*(char *)(param_3 + 0x18) != '\x01') {
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar3 = uVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
      _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
      uVar4 = uVar3;
      FUN_107d78528(uVar3,puVar2);
      if ((uVar4 & 1) == 0) {
        func_0x00010bf4cdc0(uVar3);
        bVar5 = param_2 <= 0.0;
        goto LAB_107d782f0;
      }
    }
    bVar5 = false;
LAB_107d782f0:
    _objc_release(uVar1);
    _objc_release(param_6);
    return bVar5;
  }
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar4 = uVar3;
    FUN_107d78528(uVar3,puVar2);
    if ((uVar4 & 1) == 0) {
      func_0x00010bf4cdc0(uVar3);
      bVar5 = param_1 <= 0.0;
      goto LAB_107d7820c;
    }
  }
  bVar5 = false;
LAB_107d7820c:
  _objc_release(uVar1);
  _objc_release(param_6);
  return bVar5;
}



/* Entry: 107d7832c; end: 107d7837f; -[SCImpalaShowProfilePresenter swipeInteractionControllerDidBegin:] */

void FUN_107d7832c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != *(long *)(param_1 + 8)) {
    return;
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bec9260(param_1);
  func_0x00010c2395a0(lVar1,param_2,param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d78380; end: 107d783db; -[SCImpalaShowProfilePresenter swipeInteractionControllerDidFinish:cancelled:] */

void FUN_107d78380(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  
  if ((((param_4 & 1) == 0) && (param_3 == *(long *)(param_1 + 0x10))) ||
     ((param_4 != 0 && (param_3 == *(long *)(param_1 + 8))))) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c239540();
    _objc_release(lVar1);
  }
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



/* Entry: 107d783dc; end: 107d78403; -[SCImpalaShowProfilePresenter animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_107d783dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d78404; end: 107d7842b; -[SCImpalaShowProfilePresenter animationControllerForDismissedController:] */

void FUN_107d78404(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d7842c; end: 107d78453; -[SCImpalaShowProfilePresenter interactionControllerForPresentation:] */

void FUN_107d7842c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d78454; end: 107d7847b; -[SCImpalaShowProfilePresenter interactionControllerForDismissal:] */

void FUN_107d78454(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d7847c; end: 107d78493; -[SCImpalaShowProfilePresenter presentingViewController] */

void FUN_107d7847c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d78494; end: 107d784ab; -[SCImpalaShowProfilePresenter provider] */

void FUN_107d78494(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d784ac; end: 107d784b3; -[SCImpalaShowProfilePresenter performHapticFeedback] */

undefined1 FUN_107d784ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 107d784b4; end: 107d784bb; -[SCImpalaShowProfilePresenter setPerformHapticFeedback:] */

void FUN_107d784b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 107d784bc; end: 107d784d3; -[SCImpalaShowProfilePresenter delegate] */

void FUN_107d784bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d784d4; end: 107d784df; -[SCImpalaShowProfilePresenter setDelegate:] */

void FUN_107d784d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107d784e0; end: 107d78527; -[SCImpalaShowProfilePresenter .cxx_destruct] */

void FUN_107d784e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d78528; end: 107d785ab;  */

uint FUN_107d78528(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      uVar1 = param_1;
      _objc_opt_isKindOfClass(param_1,param_2);
      uVar3 = (uint)uVar1;
      uVar2 = param_1;
      if ((uVar1 & 1) != 0) break;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      param_1 = uVar2;
    } while (uVar2 != 0);
    _objc_release(uVar2);
  }
  return uVar3 & 1;
}



/* Entry: 107d785ac; end: 107d7874b; -[SCImpalaSwipeInteractionController initWithViewController:viewForPresentationGesture:delegate:mode:triggerType:interruptible:callAppearanceMethods:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d785ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126faf48;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276ea98),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276ea9c),param_6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276eaa0) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276eaa4) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276eaa8) = param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276eaac) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276eab0) = param_1;
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11276eab4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(param_5);
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11276eab8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c17fb80(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7874c; end: 107d788f7; -[SCImpalaSwipeInteractionController initWithViewController:viewForPresentationGesture:delegate:mode:triggerType:interruptible:callAppearanceMethods:duration:isNavigationStyleVertical:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d7874c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126faf48;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276ea98),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276ea9c),param_6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276eaa0) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276eaa4) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276eaa8) = param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276eaac) = (undefined1)param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276eab0) = param_1;
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11276eab4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(param_5);
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11276eab8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276eabc) = param_10._1_1_;
    func_0x00010c17fb80(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d788f8; end: 107d7893b; -[SCImpalaSwipeInteractionController timingCurve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d788f8(long param_1)

{
  _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
  func_0x00010c008200(0x3fee666666666666,*(undefined8 *)(param_1 + _DAT_11276eac0),
                      ((undefined8 *)(param_1 + _DAT_11276eac0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d7893c; end: 107d7897f; -[SCImpalaSwipeInteractionController wantsInteractiveStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7893c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276eab4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c252440();
  if (lVar1 != 1) {
    func_0x00010c252440(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 107d78980; end: 107d78b23; -[SCImpalaSwipeInteractionController startInteractiveTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d78980(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276eac4;
  if (*(long *)(param_1 + lVar5) == 0) {
    uVar1 = param_1;
    func_0x00010c2a1a60();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf03260(param_1);
    }
    else {
      puVar2 = PTR_PTR_1126d7b40;
      _objc_alloc();
      func_0x00010c055420();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar4);
      if (*(char *)(param_1 + (long)_DAT_11276eaa8) == '\x01') {
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c2724c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040();
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf4b2a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_107d78b24(0,uVar4,uVar3,*(undefined8 *)(param_1 + (long)_DAT_11276eaa4),
                    *(undefined1 *)(param_1 + (long)_DAT_11276eabc));
      _objc_release(uVar3);
      _objc_release(uVar4);
      lVar5 = param_1 + (long)_DAT_11276ea9c;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c264b80();
      _objc_release(lVar5);
      puStack_48 = PTR_PTR_1126faf48;
      uStack_50 = param_1;
      _objc_msgSendSuper2(&uStack_50,PTR_s_startInteractiveTransition__112671648,param_3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d78b24; end: 107d78c47;  */

void FUN_107d78b24(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_70 [48];
  
  dVar5 = 1.0 - param_1;
  if ((param_4 | 2) != 3) {
    dVar5 = param_1;
  }
  pcVar1 = (code *)PTR__CGRectGetWidth_1103475a8;
  if (param_5 == 0) {
    pcVar1 = (code *)PTR__CGRectGetHeight_110347570;
  }
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf20c00(param_2);
  (*pcVar1)();
  param_1 = (1.0 - dVar5) * param_1;
  if (param_5 == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = param_1;
    param_1 = 0.0;
  }
  _CGAffineTransformMakeTranslation(auStack_70,dVar4,param_1);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(dVar5 * 0.5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 107d78c48; end: 107d78c57; -[SCImpalaSwipeInteractionController transitionDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d78c48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eab0);
}



/* Entry: 107d78c58; end: 107d78d23; -[SCImpalaSwipeInteractionController animateTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d78c58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c069820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276eac4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d78b24(0,uVar2,uVar3,*(undefined8 *)(param_1 + _DAT_11276eaa4),
                *(undefined1 *)(param_1 + _DAT_11276eabc));
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c24dc40(lVar1);
  param_1 = param_1 + _DAT_11276ea9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c264b80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d78d24; end: 107d78f07; -[SCImpalaSwipeInteractionController interruptibleAnimatorForTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d78d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276eac8;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    lVar5 = (long)_DAT_11276eac4;
    lVar4 = *(long *)(param_1 + lVar5);
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126d7b40;
      _objc_alloc();
      func_0x00010c055420();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + lVar5);
    }
    uVar7 = *(undefined8 *)(param_1 + _DAT_11276eaa4);
    _objc_retain(lVar4);
    puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276eab0);
    lVar5 = param_1;
    func_0x00010c270da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00eb20(uVar3,puVar2,param_2,lVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar5);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uVar1 = *(undefined1 *)(param_1 + _DAT_11276eabc);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107d78f08;
    puStack_80 = &UNK_110861e68;
    _objc_retain(lVar4);
    lStack_78 = lVar4;
    uStack_70 = uVar7;
    uStack_68 = uVar1;
    func_0x00010bef6cc0(uVar3,param_2,&puStack_98);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    puStack_c0 = puVar2;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107d78f78;
    puStack_a8 = &UNK_110855e40;
    lStack_a0 = lVar4;
    _objc_retain(lVar4);
    func_0x00010bef78c0(uVar3,param_2,&puStack_c0);
    lVar5 = *(long *)(param_1 + lVar6);
    _objc_retain(lVar5);
    _objc_release(lStack_a0);
    _objc_release(lStack_78);
    _objc_release(lVar4);
  }
  else {
    _objc_retain(lVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107d78f08; end: 107d78f77;  */

void FUN_107d78f08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d78b24(0x3ff0000000000000,uVar1,uVar2,*(undefined8 *)(param_1 + 0x28),
                *(undefined1 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d78f78; end: 107d78f97;  */

void FUN_107d78f78(long param_1,long param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
    return;
  }
  if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
    return;
  }
  return;
}



/* Entry: 107d78f98; end: 107d7904f; -[SCImpalaSwipeInteractionController animationEnded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d78f98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + _DAT_11276ea9c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = (long)_DAT_11276eac4;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf2f680(uVar1);
  func_0x00010c264bc0(lVar2,param_2,param_1,uVar1);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276eab8);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276eac8);
  *(undefined8 *)(param_1 + _DAT_11276eac8) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276eac0;
  *(undefined8 *)(param_1 + lVar2) = 0;
  ((undefined8 *)(param_1 + lVar2))[1] = 0;
  return;
}



/* Entry: 107d79050; end: 107d79267; -[SCImpalaSwipeInteractionController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107d79050(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  _objc_retain(param_5);
  puVar7 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar8 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar7);
  uVar1 = param_5;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    lVar11 = 1;
    goto LAB_107d79134;
  }
  uVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5);
  _objc_release(uVar8);
  lVar12 = *(long *)(param_3 + _DAT_11276eac4);
  bVar2 = *(byte *)(param_3 + _DAT_11276eaa8);
  lVar11 = lVar12;
  func_0x00010bf2f680();
  lVar10 = *(long *)(param_3 + _DAT_11276eaa4);
  if (((lVar12 == 0) || ((bVar2 & 1) != 0)) &&
     (((ABS(param_2) <= ABS(param_1) ^ *(byte *)(param_3 + _DAT_11276eabc)) & 1) == 0)) {
    iVar6 = (int)lVar11;
    if (lVar10 < 2) {
      if (lVar10 == 0) {
        if (lVar12 == 0) {
          iVar6 = 1;
        }
        bVar5 = NAN(param_2);
        bVar4 = param_2 == 0.0;
        bVar3 = param_2 < 0.0;
LAB_107d791ec:
        if (iVar6 == 0) {
          bVar3 = !bVar4 && bVar3 == bVar5;
        }
        if (bVar3 == false) goto LAB_107d79128;
      }
      else if (lVar10 == 1) {
        if (lVar12 == 0) {
          iVar6 = 1;
        }
        bVar5 = param_2 != 0.0 && param_2 >= 0.0;
        if (iVar6 == 0) {
          bVar5 = param_2 < 0.0;
        }
joined_r0x000107d791c8:
        if (!bVar5) goto LAB_107d79128;
      }
    }
    else {
      if (lVar10 == 2) {
        if (lVar12 == 0) {
          iVar6 = 1;
        }
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(param_1)) {
          bVar3 = param_1 < 0.0;
          bVar4 = param_1 == 0.0;
          bVar5 = false;
        }
        goto LAB_107d791ec;
      }
      if (lVar10 == 3) {
        if (lVar12 == 0) {
          iVar6 = 1;
        }
        bVar5 = param_1 != 0.0 && param_1 >= 0.0;
        if (iVar6 == 0) {
          bVar5 = param_1 < 0.0;
        }
        goto joined_r0x000107d791c8;
      }
    }
    lVar10 = param_3 + _DAT_11276ea9c;
    _objc_loadWeakRetained(lVar10);
    uVar13 = *(undefined8 *)(param_3 + _DAT_11276eab4);
    uVar9 = uVar13;
    func_0x00010c29bf00(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264780(uVar13);
    lVar11 = lVar10;
    func_0x00010c264c00(lVar10);
    _objc_release(uVar9);
    _objc_release(lVar10);
  }
  else {
LAB_107d79128:
    lVar11 = 0;
  }
LAB_107d79134:
  _objc_release(uVar1);
  _objc_release(param_5);
  return lVar11;
}



/* Entry: 107d79268; end: 107d7933b; -[SCImpalaSwipeInteractionController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107d79268(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11276eab4;
  if ((param_4 == *(long *)(param_1 + lVar3)) || (param_4 == *(long *)(param_1 + _DAT_11276eab8))) {
    lVar3 = 1;
  }
  else {
    lVar1 = param_1 + _DAT_11276ea9c;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    uVar2 = uVar4;
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264780(uVar4,param_2,uVar2);
    lVar3 = lVar1;
    func_0x00010c264b60(lVar1,param_2,param_1,uVar4,param_4);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 107d7933c; end: 107d79417; -[SCImpalaSwipeInteractionController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107d7933c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_5 == *(long *)(param_2 + _DAT_11276eab4)) ||
     (param_5 == *(long *)(param_2 + _DAT_11276eab8))) {
    uVar2 = 0;
  }
  else if (*(long *)(param_2 + _DAT_11276eac4) == 0) {
    uVar1 = param_2 + _DAT_11276ea9c;
    _objc_loadWeakRetained(uVar1);
    uVar2 = uVar1;
    func_0x00010c264b20();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bfb6780(*(undefined8 *)(param_2 + _DAT_11276eac8));
    uVar2 = (ulong)(param_1 != 1.0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107d79418; end: 107d79467; -[SCImpalaSwipeInteractionController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

uint FUN_107d79418(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126d7b48;
  _objc_retain(in_x3);
  _objc_opt_class(puVar1);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 107d79468; end: 107d7979b; -[SCImpalaSwipeInteractionController _onPan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d79468(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_5);
  lVar6 = (long)_DAT_11276eabc;
  pcVar1 = (code *)PTR__CGRectGetWidth_1103475a8;
  if (*(char *)(param_3 + lVar6) == '\0') {
    pcVar1 = (code *)PTR__CGRectGetHeight_110347570;
  }
  lVar7 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  (*pcVar1)();
  dVar11 = param_1;
  _objc_release(lVar7);
  if (0.0 < param_1) {
    lVar7 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_5,param_4,lVar7);
    dVar10 = dVar11;
    dVar9 = param_2;
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5,param_4,lVar7);
    dVar8 = dVar10;
    _objc_release(lVar7);
    if (*(char *)(param_3 + lVar6) == '\0') {
      dVar11 = param_2;
    }
    lVar7 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    (*pcVar1)();
    dVar11 = dVar11 / dVar8;
    _objc_release(lVar7);
    if (*(char *)(param_3 + lVar6) == '\0') {
      dVar10 = dVar9;
    }
    lVar6 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    (*pcVar1)();
    _objc_release(lVar6);
    dVar12 = -dVar11;
    dVar9 = -(dVar10 / dVar8);
    if ((*(ulong *)(param_3 + _DAT_11276eaa4) & 0xfffffffffffffffd) != 0) {
      dVar12 = dVar11;
      dVar9 = dVar10 / dVar8;
    }
    lVar6 = (long)_DAT_11276eac8;
    iVar2 = (int)*(undefined8 *)(param_3 + lVar6);
    func_0x00010c07cb20();
    dVar11 = -dVar12;
    if (iVar2 == 0) {
      dVar11 = dVar12;
    }
    lVar7 = (long)_DAT_11276eacc;
    dVar11 = dVar11 + *(double *)(param_3 + lVar7);
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    dVar10 = 1.0;
    if (dVar11 <= 1.0) {
      dVar10 = dVar11;
    }
    iVar3 = (int)*(undefined8 *)(param_3 + lVar6);
    func_0x00010c07cb20();
    lVar6 = param_5;
    func_0x00010c252440();
    if (lVar6 - 3U < 2) {
      dVar11 = -dVar9;
      if (iVar2 == 0) {
        dVar11 = dVar9;
      }
      dVar10 = dVar10 + dVar11 * 0.5;
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      dVar8 = 1.0;
      if (dVar10 <= 1.0) {
        dVar8 = dVar10;
      }
      dVar10 = 1.0 - dVar8;
      if (iVar3 == 0) {
        dVar10 = dVar8;
      }
      *(undefined8 *)(param_3 + lVar7) = 0;
      lVar6 = (long)_DAT_11276eac0;
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      dVar8 = 1.0;
      if (dVar11 <= 1.0) {
        dVar8 = dVar11;
      }
      *(undefined8 *)(param_3 + lVar6) = 0;
      ((undefined8 *)(param_3 + lVar6))[1] = dVar8;
      dVar11 = *(double *)(param_3 + _DAT_11276eab0);
      func_0x00010c0f7ce0(param_3);
      dVar8 = (dVar11 / dVar11) * (1.0 - dVar8);
      dVar11 = 2.220446049250313e-16;
      if (2.220446049250313e-16 <= dVar8) {
        dVar11 = dVar8;
      }
      func_0x00010c17fc20(dVar11,param_3);
      lVar6 = param_5;
      func_0x00010c252440();
      if ((lVar6 == 4) || (dVar10 <= 0.4)) {
        func_0x00010bf2e5a0(param_3);
      }
      else {
        func_0x00010bfaf8e0(param_3);
      }
    }
    else if (lVar6 == 2) {
      func_0x00010c286a00(dVar10,param_3);
    }
    else if (lVar6 == 1) {
      if (*(long *)(param_3 + _DAT_11276eac4) == 0) {
        uVar5 = *(undefined8 *)(param_3 + _DAT_11276eab4);
        uVar4 = uVar5;
        func_0x00010c29bf00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c264780(uVar5,param_4,uVar4);
        func_0x00010be007a0(param_3,param_4,uVar5);
        _objc_release(uVar4);
      }
      else {
        func_0x00010c0f5d80(param_3);
      }
      func_0x00010c0f7ce0(param_3);
      *(double *)(param_3 + lVar7) = dVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107d7979c; end: 107d7986b; -[SCImpalaSwipeInteractionController _didStartInteractionWithDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7979c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + _DAT_11276eaa0) == 1) {
    uVar1 = param_1 + _DAT_11276ea98;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    uVar2 = uVar2 & 1;
  }
  else {
    if (*(long *)(param_1 + _DAT_11276eaa0) != 0) goto LAB_107d79838;
    uVar1 = param_1 + _DAT_11276ea98;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
  }
  if (uVar2 != 0) {
    return;
  }
LAB_107d79838:
  param_1 = param_1 + _DAT_11276ea9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c264be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d7986c; end: 107d7988b; -[SCImpalaSwipeInteractionController viewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7986c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ea98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d7988c; end: 107d798ab; -[SCImpalaSwipeInteractionController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7988c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ea9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d798ac; end: 107d798bb; -[SCImpalaSwipeInteractionController mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d798ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eaa0);
}



/* Entry: 107d798bc; end: 107d798cb; -[SCImpalaSwipeInteractionController triggerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d798bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eaa4);
}



/* Entry: 107d798cc; end: 107d79943; -[SCImpalaSwipeInteractionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d798cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ea9c);
  _objc_destroyWeak(param_1 + _DAT_11276ea98);
  _objc_storeStrong(param_1 + _DAT_11276eab8,0);
  _objc_storeStrong(param_1 + _DAT_11276eab4,0);
  _objc_storeStrong(param_1 + _DAT_11276eac8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276eac4,0);
  return;
}



/* Entry: 107d79944; end: 107d79b4f; -[SCSpotlightUnifiedPublicProfileViewControllerProvider initWithCompositeSnapId:swipeToProfileParamsStream:scopeLauncher:loggingInfo:isVerticalNavStyle:] */

undefined8 *
FUN_107d79944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126faf50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    *(byte *)(puVar1 + 9) = param_7 ^ 1;
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[8];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c264f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d79b50; end: 107d79b97;  */

void FUN_107d79b50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffb20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d79b98; end: 107d79c4b; -[SCSpotlightUnifiedPublicProfileViewControllerProvider _didReceiveSwipeToProfileParams:] */

void FUN_107d79b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf454c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_3;
    func_0x00010c07b840();
    *(char *)(param_1 + 0x49) = (char)uVar1;
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d79c4c; end: 107d79e57; -[SCSpotlightUnifiedPublicProfileViewControllerProvider providedViewControllerWithProvidedViewControllerBlock:] */

void FUN_107d79c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107d79e58;
    puStack_80 = &UNK_110852890;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_copyWeak(auStack_a0,auStack_68);
    func_0x00010c0311a0(puVar1);
    puVar2 = PTR_PTR_1126b0f18;
    _objc_alloc(PTR_PTR_1126b0f18);
    func_0x00010bff9da0();
    func_0x00010c1cd960();
    func_0x00010c1cd9a0(puVar2);
    func_0x00010c21e620(puVar2);
    puVar3 = PTR_PTR_1126b0f20;
    _objc_alloc();
    func_0x00010c056680();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8));
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d79e58; end: 107d79ed7;  */

void FUN_107d79e58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d7b50;
    _objc_alloc(PTR_PTR_1126d7b50);
    func_0x00010c061820();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d79ed8; end: 107d79f33;  */

void FUN_107d79ed8(long param_1,long param_2)

{
  _objc_retain(param_2);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c280240(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d79f34; end: 107d79f6b; -[SCSpotlightUnifiedPublicProfileViewControllerProvider unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_107d79f34(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107d79f6c; end: 107d79fe3; -[SCSpotlightUnifiedPublicProfileViewControllerProvider .cxx_destruct] */

void FUN_107d79f6c(long param_1)

{
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



/* Entry: 107d79fe4; end: 107d7a08b; -[SCUnifiedPublicProfilePresenterOperaDelegate initWithEventListener:page:unifiedPublicProfilesPresenterScopeDelegate:] */

long FUN_107d79fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c010b60();
  if (param_1 != 0) {
    uVar1 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x20,param_1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107d7a08c; end: 107d7a13f; -[SCUnifiedPublicProfilePresenterOperaDelegate initWithEventListener:pageProvider:navigationDelegate:] */

undefined1 *
FUN_107d7a08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126faf58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7a140; end: 107d7a257; -[SCUnifiedPublicProfilePresenterOperaDelegate swipeInteractionPresenter:didStartPresentingWithSwipeDirection:] */

void FUN_107d7a140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f42f98;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110ebd138;
  func_0x00010c0eb7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebd138,lVar2,puVar4)
  ;
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  lVar1 = lVar2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  ppuVar6 = ppuVar7;
  func_0x00010bfc9040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar6;
  func_0x00010c088720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010c088700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if ((ppuVar7 != (undefined **)0x0) && (ppuVar8 != (undefined **)0x0)) {
    puVar4 = PTR_PTR_1126c9a28;
    func_0x00010c29d180(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,ppuVar7,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c9a28;
    func_0x00010c29d200(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,ppuVar8,puVar4);
    _objc_release(puVar4);
  }
  lVar2 = lVar2 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0eb7c0();
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107d7a258; end: 107d7a3bf; -[SCUnifiedPublicProfilePresenterOperaDelegate swipeInteractionPresenterDidFinishPresenting:] */

void FUN_107d7a258(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfc9040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c088720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c088700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    puVar6 = PTR_PTR_1126c9a28;
    func_0x00010c29d180(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,lVar3,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c9a28;
    func_0x00010c29d200(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,lVar4,puVar6);
    _objc_release(puVar6);
  }
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb7c0();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107d7a3c0; end: 107d7a47b; -[SCUnifiedPublicProfilePresenterOperaDelegate swipeInteractionPresenter:swipeEnabledWithDirection:] */

uint FUN_107d7a3c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  func_0x00010bfc9040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfc87e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010be42ea0(param_1,param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar3 == 0) {
      uVar6 = 1;
    }
    else {
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c264580();
      _objc_release(lVar4);
      _objc_release(lVar3);
      uVar6 = (uint)lVar5 ^ 1;
    }
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar1);
  return uVar6 & 1;
}



/* Entry: 107d7a47c; end: 107d7a4f7; -[SCUnifiedPublicProfilePresenterOperaDelegate swipeInteractionPresenterDidFinishDismissing:] */

void FUN_107d7a47c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eb7a0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c280240();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107d7a4f8; end: 107d7a5d3; -[SCUnifiedPublicProfilePresenterOperaDelegate _isPreventingTheScrubberGesture:] */

bool FUN_107d7a4f8(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  
  _objc_retain(param_7);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  lVar1 = param_5;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126c9d30;
  func_0x00010c07d4a0(PTR_PTR_1126c9d30,param_6,lVar1);
  if ((int)puVar2 == 0) {
    bVar4 = false;
  }
  else {
    func_0x00010c137f60(PTR_PTR_1126c93f8);
    uVar3 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_7,param_6,uVar3);
    func_0x00010bfb68e0(uVar3);
    bVar4 = param_4 - param_1 < param_2;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  return bVar4;
}



/* Entry: 107d7a5d4; end: 107d7a5fb; -[SCUnifiedPublicProfilePresenterOperaDelegate operaPage] */

void FUN_107d7a5d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d7a5fc; end: 107d7a613; -[SCUnifiedPublicProfilePresenterOperaDelegate eventListener] */

void FUN_107d7a5fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d7a614; end: 107d7a62b; -[SCUnifiedPublicProfilePresenterOperaDelegate pageProvider] */

void FUN_107d7a614(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d7a62c; end: 107d7a643; -[SCUnifiedPublicProfilePresenterOperaDelegate navigationDelegate] */

void FUN_107d7a62c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d7a644; end: 107d7a68b; -[SCUnifiedPublicProfilePresenterOperaDelegate .cxx_destruct] */

void FUN_107d7a644(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7a68c; end: 107d7a7bf; -[SCUnifiedPublicProfileViewControllerProvider initWithBusinessProfileId:isPublisher:scopeLauncher:loggingInfo:isVerticalNavStyle:useOperaWrapper:dismissBlock:cleanUpScopeOnDetach:] */

undefined1 *
FUN_107d7a68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,byte param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126faf60;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(byte *)((long)puVar1 + 0x28) = param_7 ^ 1;
    *(undefined1 *)((long)puVar1 + 0x29) = param_4;
    *(undefined1 *)((long)puVar1 + 0x2a) = param_8;
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x2b) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7a7c0; end: 107d7a7e7; -[SCUnifiedPublicProfileViewControllerProvider initWithBusinessProfileId:isPublisher:scopeLauncher:loggingInfo:isVerticalNavStyle:cleanUpScopeOnDetach:] */

void FUN_107d7a7c0(void)

{
  func_0x00010bff9d40();
  return;
}



/* Entry: 107d7a7e8; end: 107d7a9ef; -[SCUnifiedPublicProfileViewControllerProvider providedViewControllerWithProvidedViewControllerBlock:] */

void FUN_107d7a7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107d7a9f0;
    puStack_80 = &UNK_110852890;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_copyWeak(auStack_a0,auStack_68);
    func_0x00010c0311a0(puVar1);
    puVar2 = PTR_PTR_1126b0f18;
    _objc_alloc(PTR_PTR_1126b0f18);
    func_0x00010bff9da0();
    func_0x00010c1cd960();
    func_0x00010c1cd9a0(puVar2);
    puVar3 = PTR_PTR_1126b0f20;
    _objc_alloc();
    func_0x00010c056680();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8));
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d7a9f0; end: 107d7aa8f;  */

void FUN_107d7a9f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x2a) == '\x01') {
      puVar2 = PTR_PTR_1126d7b50;
      _objc_alloc(PTR_PTR_1126d7b50);
      func_0x00010c061820();
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
      _objc_release(puVar2);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d7aa90; end: 107d7aaf7;  */

void FUN_107d7aa90(long param_1,long param_2)

{
  _objc_retain(param_2);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x2b) == '\x01')) {
    func_0x00010c280240(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d7aaf8; end: 107d7ab53; -[SCUnifiedPublicProfileViewControllerProvider unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_107d7aaf8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107d7ab54; end: 107d7aba7; -[SCUnifiedPublicProfileViewControllerProvider .cxx_destruct] */

void FUN_107d7ab54(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7aba8; end: 107d7ac33; -[SCImpalaPublicProfileOperaLayerViewControllerProvider initWithProvider:shouldDelegateGestures:performHapticFeedback:] */

undefined1 *
FUN_107d7aba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126faf68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x11) = param_4;
    *(undefined1 *)((long)puVar1 + 0x10) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7ac34; end: 107d7ad07; -[SCImpalaPublicProfileOperaLayerViewControllerProvider viewControllerForDelegate:delegateViewForGestures:page:] */

void FUN_107d7ac34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126d7b58;
  _objc_alloc(PTR_PTR_1126d7b58);
  func_0x00010c031d00();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d7ad08; end: 107d7ad0f; -[SCImpalaPublicProfileOperaLayerViewControllerProvider shouldDelegateGestures] */

undefined1 FUN_107d7ad08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107d7ad10; end: 107d7ad1b; -[SCImpalaPublicProfileOperaLayerViewControllerProvider .cxx_destruct] */

void FUN_107d7ad10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


