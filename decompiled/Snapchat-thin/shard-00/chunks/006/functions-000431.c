/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008eb964; end: 1008eb9b3; -[SCMemoriesNavigationServiceImpl unlockScrollWithKey:] */

/* WARNING: Possible PIC construction at 0x0001008eb9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eb9a4) */

void FUN_1008eb964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3bf08(param_1);
  func_0x000107c61180();
  func_0x000107c5d290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008eb9b4; end: 1008eb9c3; -[SCFeatureMemoriesImpl unlockScrollWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb9b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762a04),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 1008eb9c4; end: 1008eba2f; -[SCCameraOverlayView setReplyNavigationHidden:] */

/* WARNING: Possible PIC construction at 0x0001008eba14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eba18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb9c4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112762890) != 0) {
    func_0x000107c501b4();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1008eba30; end: 1008ebacb; -[SCCameraViewController _hideHeaderTitleRow:] */

/* WARNING: Possible PIC construction at 0x0001008eba74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008eba8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ebab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eba78) */
/* WARNING: Removing unreachable block (ram,0x0001008eba90) */
/* WARNING: Removing unreachable block (ram,0x0001008ebab8) */
/* WARNING: Removing unreachable block (ram,0x0001008eba94) */

void FUN_1008eba30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_1126a5648;
  func_0x000107c61174();
  uVar3 = param_1;
  FUN_10010fab4(param_1,puVar2);
  uVar1 = param_1;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ebacc; end: 1008ebb1f; -[SIGHeaderItem setTitleCollapsesWhenScrolled:] */

void FUN_1008ebacc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x19) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1008ebb20;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1008ebb20; end: 1008ebb6f;  */

void FUN_1008ebb20(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_headerItem_didChangeTitleCollaps_1125d5880);
  if ((uVar1 & 1) != 0) {
    func_0x000107c44d40(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008ebb70; end: 1008ebc47; -[SCSwipeViewContainerViewController _isCoveredByOtherVCWithReason:] */

uint FUN_1008ebb70(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  
  uVar1 = param_1;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000107c4f078();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49aa0();
    uVar5 = (uint)uVar3 ^ 1;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((param_3 != (undefined8 *)0x0) && ((uVar3 & 1) == 0)) {
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c51804(puVar4,param_2,&PTR____CFConstantStringClassReference_110ee4bb8);
      func_0x000107c61180();
      func_0x000107c61104();
      *param_3 = puVar4;
      func_0x000107c61170(param_1);
    }
  }
  return uVar5;
}



/* Entry: 1008ebc48; end: 1008ebcbb; -[SCDisposableObserverLifecycle dealloc] */

void FUN_1008ebc48(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c42194();
  puStack_28 = PTR_PTR_11270e620;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1008ebcbc; end: 1008ebd57; -[SCDisposableObserverLifecycle disposeAll] */

void FUN_1008ebcbc(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  func_0x000107c60d88(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != puVar4) {
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      func_0x000107c61174(uVar1);
      func_0x000107c4218c(uVar1);
      func_0x000107c61170(uVar1);
      puVar2 = puVar3;
    } while (puVar3 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    puVar4 = *(undefined8 **)(param_1 + 0x50);
  }
  while (puVar2 != puVar4) {
    puVar4 = puVar4 + -1;
    func_0x000107c61170(*puVar4);
  }
  *(undefined8 **)(param_1 + 0x50) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 1008ebd58; end: 1008ebdaf; -[SCObserverUnsubscriber dispose] */

/* WARNING: Possible PIC construction at 0x0001008ebd94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ebd98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ebd58(long param_1)

{
  param_1 = param_1 + _DAT_1127967b4;
  func_0x000107c61148(param_1);
  func_0x000107c5d394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ebdb0; end: 1008ebdbf; -[SCBehaviorSubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ebdb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127967f4),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 1008ebdc0; end: 1008ebebf; -[SCMulticastObserver removeObserver:] */

/* WARNING: Possible PIC construction at 0x0001008ebe04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ebe5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ebe08) */
/* WARNING: Removing unreachable block (ram,0x0001008ebe10) */
/* WARNING: Removing unreachable block (ram,0x0001008ebe1c) */
/* WARNING: Removing unreachable block (ram,0x0001008ebe20) */
/* WARNING: Removing unreachable block (ram,0x0001008ebe60) */
/* WARNING: Removing unreachable block (ram,0x0001008ebe6c) */

void FUN_1008ebdc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar1 == lVar2) {
    if (lVar1 != lVar2) {
      if (lVar1 + 8 != lVar2) {
        lVar2 = lVar1 + 8;
        func_0x000107c61148(lVar2);
        func_0x000107c611a0(lVar1,lVar2);
        goto code_r0x000107c61170;
      }
      while (lVar2 != lVar1) {
        lVar2 = lVar2 + -8;
        func_0x000107c61120(lVar2);
      }
      *(long *)(param_1 + 0x50) = lVar1;
    }
    func_0x000107c60d8c(param_1 + 8);
  }
  else {
    func_0x000107c61148(lVar1);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008ebec0; end: 1008ebeef; -[SCAnonymousObserver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008ebed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ebedc) */

void FUN_1008ebec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1008ebef0; end: 1008ebf2b; -[SCObserverUnsubscriber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ebef0(long param_1)

{
  func_0x000107c6119c(param_1 + _DAT_1127967b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127967b4);
  return;
}



/* Entry: 1008ebf2c; end: 1008ebf87; -[SCDisposableObserverLifecycle .cxx_destruct] */

void FUN_1008ebf2c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    puVar1 = puVar2;
    if (puVar2 != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        func_0x000107c61170(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    func_0x000107c60e14(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1008ebf88; end: 1008ec0cb; -[SCNavigationLoggingObserver presenter:didPresent:interactively:] */

/* WARNING: Possible PIC construction at 0x0001008ebfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec0b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ec0a4) */
/* WARNING: Removing unreachable block (ram,0x0001008ec07c) */
/* WARNING: Removing unreachable block (ram,0x0001008ec054) */
/* WARNING: Removing unreachable block (ram,0x0001008ebff0) */
/* WARNING: Removing unreachable block (ram,0x0001008ec040) */
/* WARNING: Removing unreachable block (ram,0x0001008ec018) */
/* WARNING: Removing unreachable block (ram,0x0001008ec0b4) */

void FUN_1008ebf88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c3adf0(param_1);
  func_0x000107c61148(param_1 + 8);
  func_0x000107c611a0(param_1 + 8,param_4);
  func_0x000107c61174();
  func_0x000107c4e2ec(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008ec0cc; end: 1008ec147; -[SCNavigationLoggingObserver _assertViewController:] */

/* WARNING: Possible PIC construction at 0x0001008ec12c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ec130) */

void FUN_1008ec0cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158();
  param_1 = param_1 + 8;
  func_0x000107c61148();
  func_0x000107c61158();
  func_0x000107c51804(puVar1,param_2,&PTR____CFConstantStringClassReference_110e63bb8);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ec148; end: 1008ec237; -[SCNavigationLoggingObserver _shouldNotifyTrackerForPage:] */

uint FUN_1008ec148(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f59ad8);
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110e30ab8);
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
      if ((int)uVar2 == 0) {
        uVar2 = param_3;
        func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110eb57b8);
        if ((int)uVar2 == 0) {
          uVar2 = param_3;
          func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f5a898);
          if ((int)uVar2 == 0) {
            uVar1 = 1;
            goto LAB_1008ec218;
          }
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c2bd08(uVar2);
          uVar1 = (uint)uVar2;
        }
        else {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c2bd04(uVar2);
          uVar1 = (uint)uVar2;
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c2bd0c(uVar2);
        uVar1 = (uint)uVar2;
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c2bd10(uVar2);
      uVar1 = (uint)uVar2;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001008ccec8(uVar2);
    uVar1 = (uint)uVar2;
  }
  uVar1 = uVar1 ^ 1;
LAB_1008ec218:
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1008ec238; end: 1008ec303; -[SCNavigationSignPostLogger endTransition:] */

void FUN_1008ec238(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 auStack_50 [8];
  undefined2 auStack_40 [8];
  
  puVar4 = auStack_50;
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar6);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar5 = lVar7 - 1;
  if (param_3 == 0) {
    if ((0xfffffffffffffffd < uVar5) || (uVar1 = uVar6, func_0x000107c611e0(), (int)uVar1 == 0))
    goto LAB_1008ec2e8;
    auStack_50[0] = 0;
    pcVar2 = "transition";
    pcVar3 = "cancelled";
  }
  else {
    if ((0xfffffffffffffffd < uVar5) || (uVar1 = uVar6, func_0x000107c611e0(), (int)uVar1 == 0))
    goto LAB_1008ec2e8;
    auStack_40[0] = 0;
    pcVar2 = "transitions";
    pcVar3 = "completed";
    puVar4 = auStack_40;
  }
  func_0x000107c60ea8(0x100000000,uVar6,2,lVar7,pcVar2,pcVar3,puVar4,2);
LAB_1008ec2e8:
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1008ec304; end: 1008ec4b3; -[SCContainerViewController sig_container_needsStatusBarAppearanceUpdate] */

/* WARNING: Possible PIC construction at 0x0001008ec364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec3a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ec468) */
/* WARNING: Removing unreachable block (ram,0x0001000e2a84) */
/* WARNING: Removing unreachable block (ram,0x0001008ec458) */
/* WARNING: Removing unreachable block (ram,0x0001008ec408) */
/* WARNING: Removing unreachable block (ram,0x0001008ec40c) */
/* WARNING: Removing unreachable block (ram,0x0001008ec3c8) */
/* WARNING: Removing unreachable block (ram,0x0001008ec390) */
/* WARNING: Removing unreachable block (ram,0x0001008ec3cc) */
/* WARNING: Removing unreachable block (ram,0x0001008ec410) */
/* WARNING: Removing unreachable block (ram,0x0001008ec3e4) */
/* WARNING: Removing unreachable block (ram,0x0001008ec388) */
/* WARNING: Removing unreachable block (ram,0x0001008ec368) */
/* WARNING: Removing unreachable block (ram,0x0001008ec36c) */
/* WARNING: Removing unreachable block (ram,0x0001008ec3ac) */
/* WARNING: Removing unreachable block (ram,0x0001008ec3b0) */

void FUN_1008ec304(undefined8 param_1)

{
  FUN_1000ba800(&UNK_10f726f36);
  func_0x000107c56a18(param_1);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_1);
  func_0x000107c3f9dc(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008ec4b4; end: 1008ec4e3; -[SCContainerViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ec4b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c730);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008ec4e4; end: 1008ec513; -[SCSwipeViewContainerViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ec4e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008ec514; end: 1008ec51b; -[SCMainCameraScreenRootViewController preferredStatusBarStyle] */

undefined8 FUN_1008ec514(void)

{
  return 1;
}



/* Entry: 1008ec51c; end: 1008ec54b; -[SCContainerViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ec51c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c730);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008ec54c; end: 1008ec57b; -[SCSwipeViewContainerViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ec54c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008ec57c; end: 1008ec583; -[SCMainCameraScreenRootViewController prefersStatusBarHidden] */

undefined8 FUN_1008ec57c(void)

{
  return 0;
}



/* Entry: 1008ec584; end: 1008ec5db;  */

void FUN_1008ec584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c4a50c();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e27b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setPreviousStatusBarStyle__112656410,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c20a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setStatusBarStyle_animated__1126602f8,param_3,param_4);
  return;
}



/* Entry: 1008ec5dc; end: 1008ec5df;  */

void FUN_1008ec5dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStatusBarHidden_withAnimation_1126602e8);
  return;
}



/* Entry: 1008ec5e0; end: 1008ec6bf; -[SCCustomStatusBarStyleContextController setNeedsCustomStatusBarStyleContextUpdate] */

void FUN_1008ec5e0(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61144(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    puStack_40 = &UNK_106892130;
    puStack_38 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    func_0x000107c61120(auStack_30);
    func_0x000107c61120(auStack_28);
  }
  return;
}



/* Entry: 1008ec6c0; end: 1008ec7bb;  */

/* WARNING: Possible PIC construction at 0x0001008ec6f4: Changing call to branch */

void FUN_1008ec6c0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((int)param_2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
    iVar1 = 2;
    FUN_100029b9c(2,0x10,0,0);
    if (iVar1 == 0) {
      return;
    }
    param_1 = param_1 + 0x38;
    func_0x000107c61148(param_1);
    func_0x000107c56a30();
  }
  else {
    param_1 = param_1 + 0x30;
    func_0x000107c61148(param_1);
    func_0x000107c3e73c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ec7bc; end: 1008ec85f; -[SCInAppNotificationLegacyContainerPresentationObserver beganPresentingViewController:] */

/* WARNING: Possible PIC construction at 0x0001008ec81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ec840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ec844) */

void FUN_1008ec7bc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126c6e70;
  func_0x000107c61158(PTR_PTR_1126c6e70);
  uVar2 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    param_3 = param_1 + 8;
    func_0x000107c61148(param_3);
    func_0x000107c4eb88();
  }
  else {
    func_0x000107c3f9d4(param_3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008ec860; end: 1008ec86b;  */

void FUN_1008ec860(void)

{
  return;
}



/* Entry: 1008ec86c; end: 1008ec997; -[SCManagedDeviceCapacityAnalyzerImpl _automaticallyDetectLowLightConditionWithBrightness:maxISOPreset:] */

/* WARNING: Possible PIC construction at 0x0001008ec954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ec958) */

void FUN_1008ec86c(float param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  
  dVar7 = *(double *)(param_3 + 0x18);
  if (((*(byte *)(param_3 + 0x68) & 1) != 0) || (dVar7 < param_2 * 0.9800000190734863)) {
    bVar1 = true;
    bVar4 = false;
    if (*(byte *)(param_3 + 0x68) != 0) {
      bVar1 = false;
      bVar4 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < -1.75;
        bVar4 = false;
      }
    }
    bVar2 = false;
    bVar3 = true;
    if (bVar1 == bVar4) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar7) && !NAN(param_2)) {
        bVar2 = dVar7 == param_2;
        bVar3 = param_2 <= dVar7;
      }
    }
    if (!bVar3 || bVar2) {
      if (6 < *(long *)(param_3 + 0x30)) {
        *(undefined1 *)(param_3 + 0x68) = 0;
        uVar6 = *(undefined8 *)(param_3 + 0x80);
        puVar5 = PTR_PTR_1126b9df8;
        func_0x000107c41a64(PTR_PTR_1126b9df8,param_4,0);
        func_0x000107c61180();
        func_0x000107c4d664(uVar6,param_4,puVar5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar5);
        return;
      }
      *(long *)(param_3 + 0x30) = *(long *)(param_3 + 0x30) + 1;
    }
  }
  else if (param_1 < -2.75) {
    if (0x18 < *(long *)(param_3 + 0x28)) {
      *(undefined1 *)(param_3 + 0x68) = 1;
      uVar6 = *(undefined8 *)(param_3 + 0x80);
      puVar5 = PTR_PTR_1126b9df8;
      func_0x000107c41a64(PTR_PTR_1126b9df8,param_4,1);
      func_0x000107c61180();
      func_0x000107c4d664(uVar6,param_4,puVar5);
      goto code_r0x000107c61170;
    }
    *(long *)(param_3 + 0x28) = *(long *)(param_3 + 0x28) + 1;
  }
  else if (-1.75 <= param_1) {
    *(undefined8 *)(param_3 + 0x28) = 0;
  }
  return;
}



/* Entry: 1008ec998; end: 1008ec9af; -[SCAPagePageView setFeature:] */

void FUN_1008ec998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db1138,5,param_3,0);
  return;
}



/* Entry: 1008ec9b0; end: 1008ec9f7; -[SCAPagePageView setStack:] */

void FUN_1008ec9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110e6ed38,0xc,param_3,
                      0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008ec9f8; end: 1008eca4b; -[SCAPagePageView setBadgeState:] */

void FUN_1008ec9f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1a38,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008eca4c; end: 1008eca9f; -[SCAPagePageView setViewTimeSec:] */

void FUN_1008eca4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,0xd,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008ecaa0; end: 1008ecb4f;  */

void FUN_1008ecaa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  func_0x000107c6111c(auStack_38,param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
  puVar2 = auStack_38;
  func_0x000107c61148(puVar2);
  func_0x000107c3c320();
  func_0x000107c61170(puVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
  }
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1008ecb50; end: 1008ecb53; -[SIGLegacyContainerViewController _reportInvalidVisibleStateIfNeededFromTrigger:] */

void FUN_1008ecb50(void)

{
  return;
}



/* Entry: 1008ecb54; end: 1008ecb9f;  */

void FUN_1008ecb54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c428a4(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),2,param_2);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008ecb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 1008ecba0; end: 1008ece2b; -[SCDeckContainerBranchChangeTransition endWithAppearance:interactionType:completed:] */

ulong FUN_1008ecba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_1 + 0x20)) {
    if ((param_5 & 1) == 0) {
      lVar1 = param_1;
      func_0x000107c3c78c();
      if ((int)lVar1 == 0) {
        func_0x000107c41af4(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
        if (*(char *)(param_1 + 0x28) == '\x01') {
          func_0x000107c41c1c(*(undefined8 *)(param_1 + 0x20),param_2,
                              *(undefined8 *)(param_1 + 0x30),param_3);
        }
        func_0x000107c419cc(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
        param_5 = 0;
        goto LAB_1008ece04;
      }
      lVar1 = *(long *)(param_1 + 0x10);
    }
    func_0x000107c41af4(lVar1,param_2,param_3);
    func_0x000107c419cc(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    lVar1 = param_1;
    func_0x000107c3b60c(param_1,param_2,*(undefined1 *)(param_1 + 0x18),
                        *(undefined1 *)(param_1 + 0x28));
    puVar6 = PTR_PTR_1126df5d0;
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = PTR_PTR_1126df5d8;
    func_0x000107c610f4(PTR_PTR_1126df5d8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4e230(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4e230(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4e25c(uVar5);
    func_0x000107c61180();
    func_0x000107c480a4(puVar2,param_2,uVar3,uVar4,lVar1,param_3,param_4,uVar5);
    func_0x000107c41db4(puVar6,param_2,puVar2);
    func_0x000107c61180();
    func_0x000107c4d664(uVar9,param_2,puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar5);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      func_0x000107c41c1c(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x40),
                          param_3);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      func_0x000107c53400(*(long *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x30));
      lVar8 = *(long *)(param_1 + 0x20);
      func_0x000107c61174(lVar8);
      lVar1 = lVar8;
      func_0x000107c4e354();
      func_0x000107c61180();
      lVar7 = lVar1;
      func_0x000107c3f9c8();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar1);
      lVar1 = lVar8;
      if (lVar7 != lVar8) {
        do {
          lVar7 = lVar1;
          func_0x000107c4e354(lVar1);
          func_0x000107c61180();
          func_0x000107c53400();
          func_0x000107c61170(lVar7);
          lVar8 = lVar1;
          func_0x000107c4e354();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          lVar1 = lVar8;
          func_0x000107c4e354();
          func_0x000107c61180();
          lVar7 = lVar1;
          func_0x000107c3f9c8();
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x000107c61170(lVar1);
          lVar1 = lVar8;
        } while (lVar7 != lVar8);
      }
      func_0x000107c61170(lVar8);
    }
    param_5 = 1;
  }
LAB_1008ece04:
  func_0x000107c61170(param_3);
  return param_5;
}



/* Entry: 1008ece2c; end: 1008ece37; -[SCDeckContainerBase didDisappearWithAppearance:] */

void FUN_1008ece2c(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf8de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_emitDidDisappearWithAppearance__1125c1128);
  return;
}



/* Entry: 1008ece38; end: 1008ecebb; -[SCDeckContainerLifecyleEventEmitter emitDidDisappearWithAppearance:] */

void FUN_1008ece38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1008ecebc;
  puStack_38 = &UNK_110cb66f0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3c0dc(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008ecebc; end: 1008ecf17;  */

/* WARNING: Possible PIC construction at 0x0001008ecf00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ecf04) */

void FUN_1008ecebc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x18);
  func_0x000107c4dd64(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008ecf18; end: 1008ecfe7; -[SCRootContainer onUIDidDisappear:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ecf18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3ea80(puVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278c52c);
  func_0x000107c5de64(uVar2);
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  puStack_48 = PTR_PTR_112705558;
  lStack_50 = param_1;
  func_0x000107c61154(&lStack_50,PTR_s_onUIDidDisappear_appearance__112617720,param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008ecfe8; end: 1008ed06f; -[SCAPagePageView setPageEndTs:] */

/* WARNING: Possible PIC construction at 0x0001008ed038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ed03c) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1008ecfe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5c9e4(param_3);
    func_0x000107c4d954(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e6ed58,0xe,puVar1,5);
  return;
}



/* Entry: 1008ed070; end: 1008ed0f7; -[SCAPagePageView setPageStartTs:] */

/* WARNING: Possible PIC construction at 0x0001008ed0c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ed0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1008ed070(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5c9e4(param_3);
    func_0x000107c4d954(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1ab8,0xf,puVar1,5);
  return;
}



/* Entry: 1008ed0f8; end: 1008ed0fb; -[SCDeckContainerBase onUIDidDisappear:appearance:] */

void FUN_1008ed0f8(void)

{
  return;
}



/* Entry: 1008ed0fc; end: 1008ed10b; -[SCDeckContainerBase didAppearWithAppearance:] */

void FUN_1008ed0fc(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf8ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_emitDidAppearWithAppearance__1125c1120);
  return;
}



/* Entry: 1008ed10c; end: 1008ed18f; -[SCDeckContainerLifecyleEventEmitter emitDidAppearWithAppearance:] */

void FUN_1008ed10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1008ed190;
  puStack_38 = &UNK_110cb66f0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3c0dc(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008ed190; end: 1008ed1eb;  */

/* WARNING: Possible PIC construction at 0x0001008ed1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ed1d8) */

void FUN_1008ed190(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x18);
  func_0x000107c4dd60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008ed1ec; end: 1008ed2c7; -[SIGTabBarItemContainer onUIDidAppear:appearance:] */

/* WARNING: Possible PIC construction at 0x0001008ed22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ed244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ed2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ed248) */
/* WARNING: Removing unreachable block (ram,0x0001008ed230) */
/* WARNING: Removing unreachable block (ram,0x0001008ed24c) */
/* WARNING: Removing unreachable block (ram,0x0001008ed258) */
/* WARNING: Removing unreachable block (ram,0x0001008ed260) */
/* WARNING: Removing unreachable block (ram,0x0001008ed244) */
/* WARNING: Removing unreachable block (ram,0x0001008ed2a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ed1ec(long param_1)

{
  param_1 = param_1 + _DAT_11278c5d4;
  func_0x000107c61148(param_1);
  func_0x000107c3c5a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ed2c8; end: 1008ed2d3; -[SCAPagePageView getEventName] */

undefined ** FUN_1008ed2c8(void)

{
  return &PTR____CFConstantStringClassReference_110e6d8b8;
}



/* Entry: 1008ed2d4; end: 1008ed3a3; -[SCTabBarContainer maybeAttachGesturesToView:atIndex:] */

/* WARNING: Possible PIC construction at 0x0001008ed35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ed360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ed2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_11278c5b4) == '\x01') {
    func_0x000107c61174(param_3);
    func_0x000107c4d93c();
    puVar1 = PTR_PTR_1126da290;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11278c5c8);
    *(undefined **)(param_1 + _DAT_11278c5c8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1008ed3a4; end: 1008ed3cb; -[SCActiveUserNGSNavigationRouter onUIDidAppear:appearance:] */

void FUN_1008ed3a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3ca1c();
                    /* WARNING: Could not recover jumptable at 0x00010bed6810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCurrentSwipeViewType__1125933a8,uVar1)
  ;
  return;
}



/* Entry: 1008ed3cc; end: 1008ed4bb; -[SCActiveUserNGSNavigationRouter _updateCurrentSwipeViewType:] */

void FUN_1008ed3cc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x1a0) != param_3) {
    if (param_3 == 3) {
      func_0x000107c54ce0(*(undefined8 *)(param_1 + 0x440));
    }
    *(long *)(param_1 + 0x1a0) = param_3;
    uVar3 = param_1 + 0x460;
    func_0x000107c61148();
    puVar4 = PTR_PTR_1126ce528;
    func_0x000107c61158(PTR_PTR_1126ce528);
    uVar5 = uVar3;
    func_0x000107c6115c(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c3ce30(uVar1);
    func_0x000107c61170(uVar1);
    lVar7 = *(long *)(param_1 + 0x1a0);
    if (((*(byte *)(param_1 + 0x3e0) & 1) == 0) && (lVar7 == 5)) {
      *(undefined1 *)(param_1 + 0x3e0) = 1;
    }
    else if (*(byte *)(param_1 + 0x3e0) == 0) {
      return;
    }
    iVar2 = (int)*(undefined8 *)(param_1 + 0x158);
    func_0x000107c2aa48();
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x140);
      func_0x0001009703d0(uVar6,0);
      if ((int)uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c286610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x448),PTR_s_updateImageForSpotlightTab__11267f3a8,
                   lVar7 == 5);
        return;
      }
    }
  }
  return;
}



/* Entry: 1008ed4bc; end: 1008ed61f; -[SCActiveUserNavigationWorkflow _wireUpAnyEnqueuedDeferredModalContainers] */

void FUN_1008ed4bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000107c50924();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4ada4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c3c0c8();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c40794();
    func_0x000107c4fe7c(param_1);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    func_0x000107c61174(lVar1);
    lVar3 = lVar1;
    func_0x000107c4080c(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar3 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            func_0x000107c61128(lVar1);
          }
          func_0x000107c57740(*(undefined8 *)(lStack_118 + lVar5 * 8),param_2,lVar2);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar1;
        func_0x000107c4080c(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar3 != 0);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61148(lVar2 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008ed620; end: 1008ed637; -[SCActiveUserNavigationWorkflow router] */

void FUN_1008ed620(long param_1)

{
  func_0x000107c61148(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008ed638; end: 1008ed6c3; -[SCActiveUserNGSNavigationRouter legacy_visibleViewController] */

void FUN_1008ed638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x1a0) == -1) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d9e8(uVar2,param_2,puVar1);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3f9d4();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1008ed6c4; end: 1008ed72f; -[SCActiveUserNavigationWorkflow _pendingDeferredModalContainers] */

void FUN_1008ed6c4(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  func_0x000107c61134(param_1,&UNK_10f39a642);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c61180();
    func_0x000107c61188(param_1,&UNK_10f39a642,puVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008ed730; end: 1008ed747; -[SCDeckContainerBlockObserver onUIDidAppear:appearance:] */

void FUN_1008ed730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008ed740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1008ed748; end: 1008ed7bf; +[SCDeckTransitionEvent didTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ed748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11307d788) = 1;
  *(undefined8 *)(lVar2 + _DAT_11307d790) = 0;
  *(undefined8 *)(lVar2 + _DAT_11307d798) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008ed7c0; end: 1008ed7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ed7c0(long param_1)

{
  long unaff_x20;
  
  if (*(uint *)(param_1 + _DAT_11307d738) < 0x18 &&
      (1 << (ulong)(*(uint *)(param_1 + _DAT_11307d738) & 0x1f) & 0xc178c2U) != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Entry: 1008ed7fc; end: 1008eda03; -[SCAPagePageView prepareDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ed7fc(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x000107c61174(lVar2);
    lVar4 = lVar2;
    func_0x000107c4080c();
    if (lVar4 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            func_0x000107c61128(lVar2);
          }
          uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          func_0x000107c3e1c4(uVar5);
          func_0x000107c61180();
          func_0x000107c3d798(puVar3);
          func_0x000107c61170(uVar5);
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar2;
        func_0x000107c4080c();
      } while (lVar4 != 0);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c56bd8(param_3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff88(param_3);
    lVar4 = lVar2;
    func_0x000107c3e1c4(lVar2);
    func_0x000107c61180();
    func_0x000107c3d66c(param_3);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar2);
  puStack_138 = PTR_PTR_11270c328;
  lStack_140 = param_1;
  func_0x000107c61154(&lStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = *(int *)(param_3 + _DAT_11307d738) - 1;
  if ((uVar1 < 0x17) && ((0x60bc61U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    *puVar6 = *(undefined8 *)(&UNK_10dcd5658 + (ulong)uVar1 * 8);
    *(undefined2 *)(puVar6 + 1) = 0;
  }
  return;
}



/* Entry: 1008eda04; end: 1008eda57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eda04(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *(int *)(param_1 + _DAT_11307d738) - 1;
  if ((uVar1 < 0x17) && ((0x60bc61U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    *puVar2 = *(undefined8 *)(&UNK_10dcd5658 + (ulong)uVar1 * 8);
    *(undefined2 *)(puVar2 + 1) = 0;
  }
  return;
}



/* Entry: 1008eda58; end: 1008eda9f;  */

/* WARNING: Possible PIC construction at 0x0001008eda8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eda90) */

void FUN_1008eda58(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c05c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008edaa0; end: 1008edaa3; -[SCDeckCurrentPageTrackerNotifier _onDidTransitionWithData:] */

void FUN_1008edaa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleReportToCurrentPageTracke_1125695b0);
  return;
}



/* Entry: 1008edaa4; end: 1008edb03; -[SCDeckCurrentPageTrackerNotifier _handleReportToCurrentPageTracker:] */

void FUN_1008edaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4d640(param_3);
  lVar2 = param_1;
  func_0x000107c3c7a4(param_1,param_2,uVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = param_3;
    func_0x000107c4d640(param_3);
    func_0x0001008781f8();
    func_0x000107c5bb50(uVar3,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008edb04; end: 1008edc67; -[SCDeckCurrentPageTrackerNotifier _shouldReportToCurrentPageTrackerForPage:] */

long FUN_1008edb04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_3;
  func_0x0001008781f8();
  if (lVar1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x000107c5c734(lVar1);
  func_0x000107c61180();
  iVar2 = (int)param_3;
  if (iVar2 < 0xb) {
    if (iVar2 < 6) {
      if (iVar2 == 0) goto LAB_1008edbfc;
      if (iVar2 == 1) {
        param_3 = lVar1;
        func_0x0001008ccec8(lVar1);
        goto LAB_1008edbfc;
      }
    }
    else {
      if (iVar2 == 6) {
        param_3 = lVar1;
        func_0x000107c2bd0c(lVar1);
        goto LAB_1008edbfc;
      }
      if (iVar2 == 7) {
        param_3 = lVar1;
        func_0x000107c2bd04(lVar1);
        goto LAB_1008edbfc;
      }
    }
  }
  else if (iVar2 < 0xd) {
    if (iVar2 == 0xb) {
      param_3 = lVar1;
      func_0x000107c2bd10(lVar1);
      goto LAB_1008edbfc;
    }
    if (iVar2 == 0xc) {
      param_3 = lVar1;
      func_0x000107c2bd08(lVar1);
      goto LAB_1008edbfc;
    }
  }
  else {
    if (iVar2 == 0xd) {
      param_3 = lVar1;
      func_0x000107c2bd14(lVar1);
      goto LAB_1008edbfc;
    }
    if (iVar2 == 0x10) {
      param_3 = lVar1;
      func_0x000107c2bd1c(lVar1);
      goto LAB_1008edbfc;
    }
    if (iVar2 == 0x17) {
      param_3 = lVar1;
      func_0x000107c2bd18(lVar1);
      goto LAB_1008edbfc;
    }
  }
  param_3 = 1;
LAB_1008edbfc:
  func_0x000107c61170(lVar1);
  return param_3;
}



/* Entry: 1008edc68; end: 1008edc9f; -[SCDeckTransitionEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008edc84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008edc88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008edc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d790));
  return;
}



/* Entry: 1008edca0; end: 1008edd5f;  */

void FUN_1008edca0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c61174(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar2);
    func_0x000107c4e590(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008edd60; end: 1008eddb7;  */

void FUN_1008edd60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c41c50(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38),0,param_2);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008edda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1008eddb8; end: 1008ede53; -[SCRootContainer didPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:completed:] */

/* WARNING: Possible PIC construction at 0x0001008ede2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ede30) */

void FUN_1008eddb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4168c(param_1);
  func_0x000107c61180();
  func_0x000107c508d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008ede54; end: 1008ede57; -[SCActiveUserNGSNavigationRouter rootContainer:didPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:completed:] */

void FUN_1008ede54(void)

{
  return;
}



/* Entry: 1008ede58; end: 1008edea3;  */

void FUN_1008ede58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c3ff14(uVar2);
  func_0x000107c61180();
  func_0x000107c3b92c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1008edea4; end: 1008edeab; -[SCTransitionProperties completion] */

undefined8 FUN_1008edea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1008edeac; end: 1008edf83; -[SCDeckContainerTransitioner _handleTransitionCompletion:completed:] */

void FUN_1008edeac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,param_4);
  }
  func_0x000107c4ff84(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c40808();
  if (lVar1 != 0) {
    func_0x000107c3c8e4(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008edf84; end: 1008edfcb;  */

void FUN_1008edf84(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3c100(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008edfcc; end: 1008ee023; -[SCActiveUserNGSNavigationRouter _performPostNoninteractiveTransitionWork] */

/* WARNING: Possible PIC construction at 0x0001008edff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008edff4) */
/* WARNING: Removing unreachable block (ram,0x0001008ee008) */
/* WARNING: Removing unreachable block (ram,0x0001008ee014) */

void FUN_1008edfcc(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61184(*(undefined8 *)(param_1 + 0x1c8));
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008ee024; end: 1008ee13b; -[SCCurrentPageEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ee024(long param_1)

{
  func_0x0001000bc2e0(param_1 + _DAT_113097848,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_113097880));
  func_0x0001000bc2e0(param_1 + _DAT_113097888,0x112d373d8,&UNK_10d9014c0);
  func_0x0001000bc2e0(param_1 + _DAT_113097898,0x112d373d8,&UNK_10d9014c0);
  func_0x0001000bc2e0(param_1 + _DAT_1130978c0,0x112d373d8,&UNK_10d9014c0);
  func_0x0001000bc2e0(param_1 + _DAT_1130978e8,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1008ee13c; end: 1008ee14b; -[SCDeckTransitionEventData prevPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1008ee13c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11307d730);
}



/* Entry: 1008ee14c; end: 1008ee15b; -[SCAPagePageView getEventQoS] */

undefined8 FUN_1008ee14c(void)

{
  return 0;
}



/* Entry: 1008ee15c; end: 1008ee1bf; -[SCNNetworkTypesDeckTransitionEventListener onDeckTransitionEvent:nextPage:] */

void FUN_1008ee15c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3,param_4);
  return;
}



/* Entry: 1008ee1c0; end: 1008ee1ef;  */

void FUN_1008ee1c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  code *extraout_x8;
  long *plStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  long *aplStack_40 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_1 + 0x48) = param_3;
  lVar4 = param_1;
  FUN_10066887c();
  if ((int)lVar4 == 0) {
    return;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10067d9d4(aplStack_40,1);
  puStack_48 = puStack_30;
  *puStack_30 = &PTR_DAT_1108789a8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110878a10;
  puStack_30[4] = FUN_10067dc4c;
  puStack_30[5] = &PTR_FUN_110cd2cc0;
  puStack_30[6] = param_1;
  puStack_30 = (undefined8 *)0x0;
  plVar2 = puStack_48 + 3;
  iVar1 = (int)aplStack_40;
  plStack_50 = plVar2;
  FUN_10067db54();
  FUN_10060f340();
  if (iVar1 != 0) {
    func_0x000107c2c7a8(aplStack_40);
    plVar2 = aplStack_40[0];
    FUN_100669930();
    iVar1 = (int)plVar2;
    (*extraout_x8)();
    func_0x000107c35834();
    plVar2 = plStack_50;
    if (iVar1 == 0) {
      func_0x000107c2c7a8(aplStack_40);
      puStack_58 = puStack_48;
      plStack_60 = plStack_50;
      plStack_50 = (long *)0x0;
      puStack_48 = (undefined8 *)0x0;
      (**(code **)(*aplStack_40[0] + 0x10))(aplStack_40[0],&plStack_60);
      FUN_100576684(&plStack_60);
      func_0x000107c35834();
      goto LAB_10067daf4;
    }
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
LAB_10067daf4:
  FUN_10068f378(&plStack_50);
  func_0x0001006696e4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3580c();
  FUN_100576684();
  func_0x000107c35834();
  pplVar3 = &plStack_50;
  FUN_10068f378();
  func_0x000107c357f0();
  if (pplVar3[2] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008ee1f0; end: 1008ee1f3; -[SCRootContainer containerVC:didEndTransitionFrom:to:didComplete:] */

void FUN_1008ee1f0(void)

{
  return;
}



/* Entry: 1008ee1f4; end: 1008ee2e7;  */

void FUN_1008ee1f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_100c6efac;
    puStack_40 = &UNK_110842e18;
    func_0x000107c61174(lVar2);
    lStack_38 = lVar2;
    FUN_10007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
    func_0x000107c61170(lStack_38);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    puStack_88 = puVar1;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_100c6efbc;
    puStack_70 = &UNK_11084aaa8;
    func_0x000107c61174(lVar3);
    lStack_60 = lVar3;
    func_0x000107c61174(lVar2);
    lStack_68 = lVar2;
    FUN_10007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(lStack_60);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1008ee2e8; end: 1008ee2ef;  */

void FUN_1008ee2e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008ee2f0; end: 1008ee327;  */

/* WARNING: Possible PIC construction at 0x0001008ee314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ee318) */

void FUN_1008ee2f0(long param_1)

{
  func_0x000107c61120(param_1 + 0x38);
  func_0x000107c61120(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008ee328; end: 1008ee39f; -[SCDeckContainerBranchChangeTransition .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008ee340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ee358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ee370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ee388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ee374) */
/* WARNING: Removing unreachable block (ram,0x0001008ee35c) */
/* WARNING: Removing unreachable block (ram,0x0001008ee344) */
/* WARNING: Removing unreachable block (ram,0x0001008ee38c) */

void FUN_1008ee328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,0);
  return;
}



/* Entry: 1008ee3a0; end: 1008ee3e7; -[SCTransitionProperties .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008ee3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ee3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ee3bc) */
/* WARNING: Removing unreachable block (ram,0x0001008ee3d4) */

void FUN_1008ee3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1008ee3e8; end: 1008ee40f; -[SCAppSession handleAppBecomeActive] */

void FUN_1008ee3e8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c527c8(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_determineIfAppStartupComplete_1125b98a8);
  return;
}



/* Entry: 1008ee410; end: 1008ee417; -[SCAppSession setAppStatus:] */

void FUN_1008ee410(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1008ee418; end: 1008ee41f; -[SCAppSession appLaunchStatus] */

undefined8 FUN_1008ee418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1008ee420; end: 1008ee427; -[SCAppSession shouldCheckCameraStatus] */

undefined1 FUN_1008ee420(long param_1)

{
  return *(undefined1 *)(param_1 + 0x35);
}



/* Entry: 1008ee428; end: 1008ee443; -[SCAppSession didCameraBecomeRunning] */

bool FUN_1008ee428(long param_1)

{
  func_0x000107c3f22c();
  return param_1 == 1;
}



/* Entry: 1008ee444; end: 1008ee44b; -[SCAppSession cameraStatus] */

undefined8 FUN_1008ee444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1008ee44c; end: 1008ee45b; -[_TtC13SCSystemScope13SCSystemScope inAppNotificationInteractionEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ee44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091bb0));
  return;
}



/* Entry: 1008ee45c; end: 1008ee46b; -[_TtC13SCSystemScope13SCSystemScope applicationOpenFromQuickAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ee45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091bf0));
  return;
}



/* Entry: 1008ee46c; end: 1008ee867;  */

void FUN_1008ee46c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008ee868; end: 1008ee873;  */

void FUN_1008ee868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}


