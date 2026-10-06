/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d9d7ac; end: 106d9d8f7; -[SCGalleryPrivateGalleryChangePassphraseFlow initWithFromViewController:effects:userTrackedLogger:grapheneRegistry:currentPageTracker:privateGalleryManager:] */

undefined1 *
FUN_106d9d7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f6d90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d9d8f8; end: 106d9d907; -[SCGalleryPrivateGalleryChangePassphraseFlow isStarted] */

bool FUN_106d9d8f8(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 106d9d908; end: 106d9da73; -[SCGalleryPrivateGalleryChangePassphraseFlow start] */

void FUN_106d9d908(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  uVar1 = param_1;
  func_0x00010c07f840();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar6 = PTR_PTR_1126d27f0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85f98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e85fb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85fb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeb20();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar6;
  _objc_release(uVar9);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
  puVar6 = PTR_PTR_1126d27a0;
  _objc_alloc();
  func_0x00010c040300();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar6;
  _objc_release(uVar2);
  func_0x00010c1cb760(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c219b20(*(undefined8 *)(param_1 + 0x20));
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c10eda0();
  _objc_release(lVar5);
  puVar6 = *(undefined **)(param_1 + 0x20);
  if (puVar6 != (undefined *)0x0) {
    _objc_retain();
    func_0x00010c1070e0(puVar6);
    func_0x000108df583c();
    puVar8 = puVar6;
    func_0x00010c106ec0();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c14cde0();
    _objc_release(puVar6);
    if (puVar7 == puVar8) {
      return;
    }
    puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 106d9da74; end: 106d9db17; -[SCGalleryPrivateGalleryChangePassphraseFlow navigationController:willShowViewController:animated:] */

void FUN_106d9da74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x28) == param_4) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09fc60();
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    if (((lVar1 != param_4) && (lVar1 = *(long *)(param_1 + 0x40), lVar1 != param_4)) &&
       (lVar1 = *(long *)(param_1 + 0x48), lVar1 != param_4)) goto LAB_106d9dafc;
  }
  func_0x00010c137fe0(lVar1);
LAB_106d9dafc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9db18; end: 106d9db27; -[SCGalleryPrivateGalleryChangePassphraseFlow navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_106d9db18(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0f29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_pagingAnimatorForOperation__11261a488,in_x3);
  return;
}



/* Entry: 106d9db28; end: 106d9db3b; -[SCGalleryPrivateGalleryChangePassphraseFlow animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106d9db28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_transitioningAnimatorForPresenti_11267c550,1,0);
  return;
}



/* Entry: 106d9db3c; end: 106d9db93; -[SCGalleryPrivateGalleryChangePassphraseFlow animationControllerForDismissedController:] */

void FUN_106d9db3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c275140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x58);
  _objc_release();
  func_0x00010c27aca0(PTR_PTR_1126d27a0,param_2,0,lVar1 == lVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9db94; end: 106d9dc77; -[SCGalleryPrivateGalleryChangePassphraseFlow enterPassphraseViewControllerDidPressBack:] */

void FUN_106d9db94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == param_3) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf84b00();
    _objc_release(lVar1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x000108df596c();
  }
  else {
    if (*(long *)(param_1 + 0x30) != param_3) goto LAB_106d9dc5c;
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  _objc_release(lVar1);
LAB_106d9dc5c:
  _objc_release(param_3);
  return;
}



/* Entry: 106d9dc78; end: 106d9dcb7;  */

void FUN_106d9dc78(long param_1)

{
  long lVar1;
  
  func_0x00010be92140(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20) + 0x90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c114160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d9dcb8; end: 106d9dd5f; -[SCGalleryPrivateGalleryChangePassphraseFlow enterPassphraseViewController:didCreatePassphrase:] */

void FUN_106d9dcb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea00();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x38),1);
  return;
}



/* Entry: 106d9dd60; end: 106d9ddf3; -[SCGalleryPrivateGalleryChangePassphraseFlow enterPassphraseViewControllerDidPressUsePasscode:] */

void FUN_106d9dd60(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85fd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85fd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee900();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x40),1);
  return;
}



/* Entry: 106d9ddf4; end: 106d9dedf; -[SCGalleryPrivateGalleryChangePassphraseFlow enterPassphraseViewControllerDidUnlock:] */

void FUN_106d9ddf4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d27f0;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ff8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85eb8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e29bf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e29bf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee920();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 106d9dee0; end: 106d9df47; -[SCGalleryPrivateGalleryChangePassphraseFlow confirmPassphraseViewControllerDidPressBack:] */

void FUN_106d9dee0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x38) == param_3) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x50) != param_3) goto LAB_106d9df38;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  _objc_release();
LAB_106d9df38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9df48; end: 106d9dfdb; -[SCGalleryPrivateGalleryChangePassphraseFlow confirmPassphraseViewControllerDidPressQuestionMark:] */

void FUN_106d9df48(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85f38;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                      &PTR____CFConstantStringClassReference_110e278d8,
                      &PTR____CFConstantStringClassReference_110e85f58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = PTR_PTR_1126c3a18;
    _objc_alloc();
    func_0x00010c057da0();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar3;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x60));
    func_0x00010c11c520(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106d9dfdc; end: 106d9e163; -[SCGalleryPrivateGalleryChangePassphraseFlow confirmPassphraseViewControllerDidConfirmPassphrase:] */

void FUN_106d9dfdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) == param_3) {
    lVar3 = 0x10;
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) {
      lVar3 = 0;
      goto LAB_106d9e038;
    }
    lVar3 = 0x18;
  }
  lVar3 = *(long *)(param_1 + lVar3);
  _objc_retain(lVar3);
LAB_106d9e038:
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    func_0x00010c1e3540(uVar2);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106d9e164; end: 106d9e32f;  */

void FUN_106d9e164(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079a60();
    _objc_release(uVar2);
    func_0x00010bfb0300(PTR_PTR_1126b24e0);
    puVar3 = PTR_PTR_1126d2800;
    _objc_opt_new(PTR_PTR_1126d2800);
    func_0x00010c1acb60();
    func_0x00010c1ccae0(puVar3);
    func_0x00010c226f80(puVar3);
    if (param_3 != 0) {
      lVar4 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1971a0(puVar3);
      _objc_release(lVar4);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar2);
    if (param_2 == 0) {
      func_0x000108de5c34();
    }
    else {
      puVar5 = PTR_PTR_1126d2808;
      _objc_alloc();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e86018;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e86018,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0511e0();
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
      *(undefined **)(lVar1 + 0x58) = puVar5;
      _objc_release(uVar2);
      _objc_release(ppuVar6);
      func_0x00010c18b5e0(*(undefined8 *)(lVar1 + 0x58));
      func_0x00010c11c520(*(undefined8 *)(lVar1 + 0x20));
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9e330; end: 106d9e397; -[SCGalleryPrivateGalleryChangePassphraseFlow enterPasscodeViewControllerDidPressBack:] */

void FUN_106d9e330(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x40) == param_3) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x48) != param_3) goto LAB_106d9e388;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  _objc_release();
LAB_106d9e388:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9e398; end: 106d9e443; -[SCGalleryPrivateGalleryChangePassphraseFlow enterPasscodeViewController:didCreatePasscode:] */

void FUN_106d9e398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ed8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee8e0();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x48),1);
  return;
}



/* Entry: 106d9e444; end: 106d9e4d3; -[SCGalleryPrivateGalleryChangePassphraseFlow enterPasscodeViewControllerDidConfirmPasscode:] */

void FUN_106d9e444(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ed8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee9c0();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x50),1);
  return;
}



/* Entry: 106d9e4d4; end: 106d9e5c3; -[SCGalleryPrivateGalleryChangePassphraseFlow finishChangeViewControllerDidPressFinish:] */

void FUN_106d9e4d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09fc60();
  _objc_release(uVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf84b00();
  _objc_release(lVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106d9e5c4; end: 106d9e5fb; -[SCGalleryPrivateGalleryChangePassphraseFlow memoriesInformationWebViewControllerDidPressBack:] */

void FUN_106d9e5c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9e5fc; end: 106d9e67f; -[SCGalleryPrivateGalleryChangePassphraseFlow _reset] */

void FUN_106d9e5fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9e680; end: 106d9e697; -[SCGalleryPrivateGalleryChangePassphraseFlow delegate] */

void FUN_106d9e680(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9e698; end: 106d9e6a3; -[SCGalleryPrivateGalleryChangePassphraseFlow setDelegate:] */

void FUN_106d9e698(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 106d9e6a4; end: 106d9e78b; -[SCGalleryPrivateGalleryChangePassphraseFlow .cxx_destruct] */

void FUN_106d9e6a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d9e78c; end: 106d9e953; -[SCGalleryPrivateGalleryForgotPasscodeFlow initWithFromViewController:deleteMutator:effects:currentPageTracker:privateGalleryManager:dataObjectContext:memoriesProfile:memoriesExperimentService:memoriesPrivateEntriesPurger:] */

undefined1 *
FUN_106d9e78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f6d98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d9e954; end: 106d9e963; -[SCGalleryPrivateGalleryForgotPasscodeFlow isStarted] */

bool FUN_106d9e954(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 106d9e964; end: 106d9ea3f; -[SCGalleryPrivateGalleryForgotPasscodeFlow start] */

void FUN_106d9e964(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010c07f840();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126d2810;
  _objc_alloc();
  func_0x00010bfee9a0();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar6);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
  puVar3 = PTR_PTR_1126d27a0;
  _objc_alloc();
  func_0x00010c040300();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar6);
  func_0x00010c1cb760(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c219b20(*(undefined8 *)(param_1 + 0x28));
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c10eda0();
  _objc_release(lVar2);
  puVar3 = *(undefined **)(param_1 + 0x28);
  if (puVar3 != (undefined *)0x0) {
    _objc_retain();
    func_0x00010c1070e0(puVar3);
    func_0x000108df583c();
    puVar5 = puVar3;
    func_0x00010c106ec0();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c14cde0();
    _objc_release(puVar3);
    if (puVar4 == puVar5) {
      return;
    }
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106d9ea40; end: 106d9eaaf; -[SCGalleryPrivateGalleryForgotPasscodeFlow navigationController:willShowViewController:animated:] */

void FUN_106d9ea40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((*(long *)(param_1 + 0x40) == param_4) || (*(long *)(param_1 + 0x48) == param_4)) ||
     (*(long *)(param_1 + 0x58) == param_4)) {
    func_0x00010c137fe0();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9eab0; end: 106d9eabf; -[SCGalleryPrivateGalleryForgotPasscodeFlow navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_106d9eab0(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0f29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_pagingAnimatorForOperation__11261a488,in_x3);
  return;
}



/* Entry: 106d9eac0; end: 106d9ead3; -[SCGalleryPrivateGalleryForgotPasscodeFlow animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106d9eac0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_transitioningAnimatorForPresenti_11267c550,1,0);
  return;
}



/* Entry: 106d9ead4; end: 106d9eb2b; -[SCGalleryPrivateGalleryForgotPasscodeFlow animationControllerForDismissedController:] */

void FUN_106d9ead4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c275140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x38);
  _objc_release();
  func_0x00010c27aca0(PTR_PTR_1126d27a0,param_2,0,lVar1 == lVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9eb2c; end: 106d9ebfb; -[SCGalleryPrivateGalleryForgotPasscodeFlow forgotPassphraseViewControllerDidPressBack:] */

void FUN_106d9eb2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106d9ebfc; end: 106d9ec8f; -[SCGalleryPrivateGalleryForgotPasscodeFlow forgotPassphraseViewControllerDidConfirm:] */

void FUN_106d9ebfc(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ef8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ef8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee900();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x40),1);
  return;
}



/* Entry: 106d9ec90; end: 106d9ed5f; -[SCGalleryPrivateGalleryForgotPasscodeFlow finishChangeViewControllerDidPressFinish:] */

void FUN_106d9ec90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106d9ed60; end: 106d9edc7; -[SCGalleryPrivateGalleryForgotPasscodeFlow enterPasscodeViewControllerDidPressBack:] */

void FUN_106d9ed60(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x40) == param_3) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x48) != param_3) goto LAB_106d9edb8;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  _objc_release();
LAB_106d9edb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9edc8; end: 106d9ee73; -[SCGalleryPrivateGalleryForgotPasscodeFlow enterPasscodeViewController:didCreatePasscode:] */

void FUN_106d9edc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85e78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee8e0();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x48),1);
  return;
}



/* Entry: 106d9ee74; end: 106d9ef5f; -[SCGalleryPrivateGalleryForgotPasscodeFlow enterPasscodeViewControllerDidPressUsePassphrase:] */

void FUN_106d9ee74(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d27f0;
  _objc_alloc();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e85e98;
  ppuVar2 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85eb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee920();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x58),1);
  return;
}



/* Entry: 106d9ef60; end: 106d9efef; -[SCGalleryPrivateGalleryForgotPasscodeFlow enterPasscodeViewControllerDidConfirmPasscode:] */

void FUN_106d9ef60(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ed8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee9c0();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x50),1);
  return;
}



/* Entry: 106d9eff0; end: 106d9f027; -[SCGalleryPrivateGalleryForgotPasscodeFlow enterPassphraseViewControllerDidPressBack:] */

void FUN_106d9eff0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9f028; end: 106d9f0cf; -[SCGalleryPrivateGalleryForgotPasscodeFlow enterPassphraseViewController:didCreatePassphrase:] */

void FUN_106d9f028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea00();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x60),1);
  return;
}



/* Entry: 106d9f0d0; end: 106d9f137; -[SCGalleryPrivateGalleryForgotPasscodeFlow confirmPassphraseViewControllerDidPressBack:] */

void FUN_106d9f0d0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x50) == param_3) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x60) != param_3) goto LAB_106d9f128;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  _objc_release();
LAB_106d9f128:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9f138; end: 106d9f1cb; -[SCGalleryPrivateGalleryForgotPasscodeFlow confirmPassphraseViewControllerDidPressQuestionMark:] */

void FUN_106d9f138(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85f38;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                      &PTR____CFConstantStringClassReference_110e278d8,
                      &PTR____CFConstantStringClassReference_110e85f58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = PTR_PTR_1126c3a18;
    _objc_alloc();
    func_0x00010c057da0();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar3;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c11c520(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106d9f1cc; end: 106d9f36f; -[SCGalleryPrivateGalleryForgotPasscodeFlow confirmPassphraseViewControllerDidConfirmPassphrase:] */

void FUN_106d9f1cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) == param_3) {
    lVar4 = 0x18;
  }
  else {
    if (*(long *)(param_1 + 0x60) != param_3) {
      lVar4 = 0;
      goto LAB_106d9f22c;
    }
    lVar4 = 0x20;
  }
  lVar4 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar4);
LAB_106d9f22c:
  lVar1 = lVar4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c11be80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = lVar4;
    _objc_retain(lVar4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d9f370; end: 106d9f4ab;  */

void FUN_106d9f370(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(uVar2);
      func_0x000108de5c34();
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x88);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,param_1 + 0x28);
      func_0x00010c1e3540(uVar2);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d9f4ac; end: 106d9f5a3;  */

void FUN_106d9f4ac(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
    if (param_2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(uVar1);
      func_0x000108de5c34();
    }
    else {
      puVar2 = PTR_PTR_1126d2808;
      _objc_alloc();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e85f78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0511e0();
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar2;
      _objc_release(uVar1);
      _objc_release(ppuVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c11c520(*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d9f5a4; end: 106d9f5db; -[SCGalleryPrivateGalleryForgotPasscodeFlow memoriesInformationWebViewControllerDidPressBack:] */

void FUN_106d9f5a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9f5dc; end: 106d9f65f; -[SCGalleryPrivateGalleryForgotPasscodeFlow _reset] */

void FUN_106d9f5dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9f660; end: 106d9f883; -[SCGalleryPrivateGalleryForgotPasscodeFlow _removeAllPrivateEntriesWithCompletionHandler:] */

void FUN_106d9f660(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126af4c0;
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa96e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126af4c0;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    func_0x00010befa160(puVar6);
    puVar7 = puVar6;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(param_3 + 0x10))(param_3,0,0);
    }
    else {
      puVar7 = PTR_PTR_1126b2220;
      _objc_alloc(PTR_PTR_1126b2220);
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar7);
      _objc_release(puVar8);
      func_0x00010bf6bbc0(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9f884; end: 106d9f89b; -[SCGalleryPrivateGalleryForgotPasscodeFlow delegate] */

void FUN_106d9f884(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9f89c; end: 106d9f8a7; -[SCGalleryPrivateGalleryForgotPasscodeFlow setDelegate:] */

void FUN_106d9f89c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106d9f8a8; end: 106d9f9b3; -[SCGalleryPrivateGalleryForgotPasscodeFlow .cxx_destruct] */

void FUN_106d9f8a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d9f9b4; end: 106d9fb7b; -[SCGalleryPrivateGalleryForgotPassphraseFlow initWithFromViewController:deleteMutator:effects:currentPageTracker:privateGalleryManager:dataObjectContext:memoriesProfile:memoriesExperimentService:memoriesPrivateEntriesPurger:] */

undefined1 *
FUN_106d9f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f6da0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d9fb7c; end: 106d9fb8b; -[SCGalleryPrivateGalleryForgotPassphraseFlow isStarted] */

bool FUN_106d9fb7c(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 106d9fb8c; end: 106d9fc67; -[SCGalleryPrivateGalleryForgotPassphraseFlow start] */

void FUN_106d9fb8c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010c07f840();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126d2810;
  _objc_alloc();
  func_0x00010bfee9e0();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar6);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
  puVar3 = PTR_PTR_1126d27a0;
  _objc_alloc();
  func_0x00010c040300();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar6);
  func_0x00010c1cb760(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c219b20(*(undefined8 *)(param_1 + 0x28));
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c10eda0();
  _objc_release(lVar2);
  puVar3 = *(undefined **)(param_1 + 0x28);
  if (puVar3 != (undefined *)0x0) {
    _objc_retain();
    func_0x00010c1070e0(puVar3);
    func_0x000108df583c();
    puVar5 = puVar3;
    func_0x00010c106ec0();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c14cde0();
    _objc_release(puVar3);
    if (puVar4 == puVar5) {
      return;
    }
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106d9fc68; end: 106d9fcd7; -[SCGalleryPrivateGalleryForgotPassphraseFlow navigationController:willShowViewController:animated:] */

void FUN_106d9fc68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((*(long *)(param_1 + 0x38) == param_4) || (*(long *)(param_1 + 0x48) == param_4)) ||
     (*(long *)(param_1 + 0x50) == param_4)) {
    func_0x00010c137fe0();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9fcd8; end: 106d9fce7; -[SCGalleryPrivateGalleryForgotPassphraseFlow navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_106d9fcd8(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0f29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_pagingAnimatorForOperation__11261a488,in_x3);
  return;
}



/* Entry: 106d9fce8; end: 106d9fcfb; -[SCGalleryPrivateGalleryForgotPassphraseFlow animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106d9fce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_transitioningAnimatorForPresenti_11267c550,1,0);
  return;
}



/* Entry: 106d9fcfc; end: 106d9fd53; -[SCGalleryPrivateGalleryForgotPassphraseFlow animationControllerForDismissedController:] */

void FUN_106d9fcfc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c275140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x60);
  _objc_release();
  func_0x00010c27aca0(PTR_PTR_1126d27a0,param_2,0,lVar1 == lVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9fd54; end: 106d9fe23; -[SCGalleryPrivateGalleryForgotPassphraseFlow forgotPassphraseViewControllerDidPressBack:] */

void FUN_106d9fd54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106d9fe24; end: 106d9ff0f; -[SCGalleryPrivateGalleryForgotPassphraseFlow forgotPassphraseViewControllerDidConfirm:] */

void FUN_106d9fe24(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d27f0;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ff8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85eb8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e29bf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e29bf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee920();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x38),1);
  return;
}



/* Entry: 106d9ff10; end: 106d9ff47; -[SCGalleryPrivateGalleryForgotPassphraseFlow enterPassphraseViewControllerDidPressBack:] */

void FUN_106d9ff10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9ff48; end: 106d9ffef; -[SCGalleryPrivateGalleryForgotPassphraseFlow enterPassphraseViewController:didCreatePassphrase:] */

void FUN_106d9ff48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea00();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x40),1);
  return;
}



/* Entry: 106d9fff0; end: 106da0083; -[SCGalleryPrivateGalleryForgotPassphraseFlow enterPassphraseViewControllerDidPressUsePasscode:] */

void FUN_106d9fff0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85fd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85fd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee900();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x48),1);
  return;
}



/* Entry: 106da0084; end: 106da00eb; -[SCGalleryPrivateGalleryForgotPassphraseFlow enterPasscodeViewControllerDidPressBack:] */

void FUN_106da0084(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x48) == param_3) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x50) != param_3) goto LAB_106da00dc;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  _objc_release();
LAB_106da00dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da00ec; end: 106da0197; -[SCGalleryPrivateGalleryForgotPassphraseFlow enterPasscodeViewController:didCreatePasscode:] */

void FUN_106da00ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85e78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee8e0();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x50),1);
  return;
}



/* Entry: 106da0198; end: 106da0227; -[SCGalleryPrivateGalleryForgotPassphraseFlow enterPasscodeViewControllerDidConfirmPasscode:] */

void FUN_106da0198(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ed8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee9c0();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x58),1);
  return;
}



/* Entry: 106da0228; end: 106da028f; -[SCGalleryPrivateGalleryForgotPassphraseFlow confirmPassphraseViewControllerDidPressBack:] */

void FUN_106da0228(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x40) == param_3) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x58) != param_3) goto LAB_106da0280;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  _objc_release();
LAB_106da0280:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da0290; end: 106da0323; -[SCGalleryPrivateGalleryForgotPassphraseFlow confirmPassphraseViewControllerDidPressQuestionMark:] */

void FUN_106da0290(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85f38;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                      &PTR____CFConstantStringClassReference_110e278d8,
                      &PTR____CFConstantStringClassReference_110e85f58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = PTR_PTR_1126c3a18;
    _objc_alloc();
    func_0x00010c057da0();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar3;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c11c520(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106da0324; end: 106da04bb; -[SCGalleryPrivateGalleryForgotPassphraseFlow confirmPassphraseViewControllerDidConfirmPassphrase:] */

void FUN_106da0324(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == param_3) {
    lVar3 = 0x18;
  }
  else {
    if (*(long *)(param_1 + 0x58) != param_3) {
      uVar4 = 0;
      goto LAB_106da0384;
    }
    lVar3 = 0x20;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar4);
LAB_106da0384:
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c11be80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar4;
  _objc_retain(uVar4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 106da04bc; end: 106da05f7;  */

void FUN_106da04bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(uVar2);
      func_0x000108de5c34();
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x80);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,param_1 + 0x28);
      func_0x00010c1e3540(uVar2);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106da05f8; end: 106da06cb;  */

void FUN_106da05f8(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
    if (param_2 == 0) {
      func_0x000108de5c34();
    }
    else {
      puVar2 = PTR_PTR_1126d2808;
      _objc_alloc();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e86058;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e86058,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0511e0();
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar2;
      _objc_release(uVar1);
      _objc_release(ppuVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x60));
      func_0x00010c11c520(*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106da06cc; end: 106da079b; -[SCGalleryPrivateGalleryForgotPassphraseFlow finishChangeViewControllerDidPressFinish:] */

void FUN_106da06cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106da079c; end: 106da07d3; -[SCGalleryPrivateGalleryForgotPassphraseFlow memoriesInformationWebViewControllerDidPressBack:] */

void FUN_106da079c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106da07d4; end: 106da0857; -[SCGalleryPrivateGalleryForgotPassphraseFlow _reset] */

void FUN_106da07d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106da0858; end: 106da0a7b; -[SCGalleryPrivateGalleryForgotPassphraseFlow _removeAllPrivateEntriesWithCompletionHandler:] */

void FUN_106da0858(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126af4c0;
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa96e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126af4c0;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    func_0x00010befa160(puVar6);
    puVar7 = puVar6;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(param_3 + 0x10))(param_3,0,0);
    }
    else {
      puVar7 = PTR_PTR_1126b2220;
      _objc_alloc(PTR_PTR_1126b2220);
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar7);
      _objc_release(puVar8);
      func_0x00010bf6bbc0(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da0a7c; end: 106da0a93; -[SCGalleryPrivateGalleryForgotPassphraseFlow delegate] */

void FUN_106da0a7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da0a94; end: 106da0a9f; -[SCGalleryPrivateGalleryForgotPassphraseFlow setDelegate:] */

void FUN_106da0a94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106da0aa0; end: 106da0bab; -[SCGalleryPrivateGalleryForgotPassphraseFlow .cxx_destruct] */

void FUN_106da0aa0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106da0bac; end: 106da0df3; -[SCGalleryPrivateGallerySetupFlow initWithFromViewController:effects:featureSettingsService:currentPageTracker:dataObjectContext:memoriesPrivateMemoriesManager:galleryLogger:memoriesProfile:userTrackedLogger:coreConfigProvider:] */

undefined8 *
FUN_106da0bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126f6da8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
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



/* Entry: 106da0df4; end: 106da0e03; -[SCGalleryPrivateGallerySetupFlow _isStarted] */

bool FUN_106da0df4(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 106da0e04; end: 106da0e37; -[SCGalleryPrivateGallerySetupFlow start] */

void FUN_106da0e04(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be441c0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec0dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startOffMainThread_11258dd18);
  return;
}



/* Entry: 106da0e38; end: 106da0f13; -[SCGalleryPrivateGallerySetupFlow dismissPresentedUIWithCompletion:] */

undefined8 FUN_106da0e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06d1a0();
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_3);
      func_0x00010bf84b00(lVar1);
      uVar3 = 1;
      func_0x000108df596c(lVar1,1);
      _objc_release(param_3);
      goto LAB_106da0eec;
    }
  }
  uVar3 = 0;
LAB_106da0eec:
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106da0f14; end: 106da0f4f;  */

void FUN_106da0f14(long param_1)

{
  func_0x00010be92140(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106da0f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106da0f50; end: 106da0fbf; -[SCGalleryPrivateGallerySetupFlow navigationController:willShowViewController:animated:] */

void FUN_106da0f50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((*(long *)(param_1 + 0x38) == param_4) || (*(long *)(param_1 + 0x40) == param_4)) ||
     (*(long *)(param_1 + 0x50) == param_4)) {
    func_0x00010c137fe0();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da0fc0; end: 106da0fcf; -[SCGalleryPrivateGallerySetupFlow navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_106da0fc0(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0f29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_pagingAnimatorForOperation__11261a488,in_x3);
  return;
}



/* Entry: 106da0fd0; end: 106da0fe3; -[SCGalleryPrivateGallerySetupFlow animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106da0fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_transitioningAnimatorForPresenti_11267c550,1,0);
  return;
}



/* Entry: 106da0fe4; end: 106da103b; -[SCGalleryPrivateGallerySetupFlow animationControllerForDismissedController:] */

void FUN_106da0fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c275140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_release();
  func_0x00010c27aca0(PTR_PTR_1126d27a0,param_2,0,lVar1 == lVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106da103c; end: 106da113b; -[SCGalleryPrivateGallerySetupFlow startSetupViewControllerDidPressStart:] */

void FUN_106da103c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85fd8;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85fd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee900();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar4);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85fd8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x38),1);
  return;
}



/* Entry: 106da113c; end: 106da120b; -[SCGalleryPrivateGallerySetupFlow startSetupViewControllerDidPressBack:] */

void FUN_106da113c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106da120c; end: 106da12ff; -[SCGalleryPrivateGallerySetupFlow finishSetupViewControllerDidPressFinish:] */

void FUN_106da120c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106da1300; end: 106da1383; -[SCGalleryPrivateGallerySetupFlow enterPasscodeViewControllerDidPressBack:] */

void FUN_106da1300(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) == param_3) {
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x40) != param_3) goto LAB_106da1374;
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  _objc_release(uVar1);
LAB_106da1374:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da1384; end: 106da14bf; -[SCGalleryPrivateGallerySetupFlow enterPasscodeViewController:didCreatePasscode:] */

void FUN_106da1384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(param_4);
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e85ed8;
  ppuVar3 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee8e0();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar5);
  _objc_release(ppuVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar5);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x40),1);
  return;
}



/* Entry: 106da14c0; end: 106da15ab; -[SCGalleryPrivateGallerySetupFlow enterPasscodeViewControllerDidPressUsePassphrase:] */

void FUN_106da14c0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d27f0;
  _objc_alloc();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e85e98;
  ppuVar2 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85eb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee920();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x50),1);
  return;
}



/* Entry: 106da15ac; end: 106da163b; -[SCGalleryPrivateGallerySetupFlow enterPasscodeViewControllerDidConfirmPasscode:] */

void FUN_106da15ac(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ed8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee9c0();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x48),1);
  return;
}



/* Entry: 106da163c; end: 106da1673; -[SCGalleryPrivateGallerySetupFlow enterPassphraseViewControllerDidPressBack:] */

void FUN_106da163c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106da1674; end: 106da173f; -[SCGalleryPrivateGallerySetupFlow enterPassphraseViewController:didCreatePassphrase:] */

void FUN_106da1674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_retain(param_4);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea00();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x58),1);
  return;
}



/* Entry: 106da1740; end: 106da17c3; -[SCGalleryPrivateGallerySetupFlow confirmPassphraseViewControllerDidPressBack:] */

void FUN_106da1740(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) == param_3) {
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x58) != param_3) goto LAB_106da17b4;
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  _objc_release(uVar1);
LAB_106da17b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da17c4; end: 106da188f; -[SCGalleryPrivateGallerySetupFlow confirmPassphraseViewControllerDidPressQuestionMark:] */

void FUN_106da17c4(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85f38;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                      &PTR____CFConstantStringClassReference_110e278d8,
                      &PTR____CFConstantStringClassReference_110e85f58);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x48) == param_3) {
    lVar4 = 0x60;
  }
  else {
    if (*(long *)(param_1 + 0x58) != param_3) goto LAB_106da1874;
    lVar4 = 0x68;
  }
  puVar2 = PTR_PTR_1126c3a18;
  _objc_alloc();
  func_0x00010c057da0();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c11c520(*(undefined8 *)(param_1 + 0x20));
LAB_106da1874:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da1890; end: 106da1893; -[SCGalleryPrivateGallerySetupFlow confirmPassphraseViewControllerDidConfirmPassphrase:] */

void FUN_106da1890(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setPrivateGalleryPassphrase_1125873e0);
  return;
}


