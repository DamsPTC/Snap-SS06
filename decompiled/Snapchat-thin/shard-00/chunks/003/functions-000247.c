/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100593844; end: 100593867;  */

void FUN_100593844(void)

{
  func_0x000107c610f4(PTR_PTR_1126df790);
  func_0x000107c46594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100593868; end: 1005938af; -[SIGModalDismissalPresentationStyle initWithDirection:] */

void FUN_100593868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705688;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 1005938b0; end: 1005939d3; -[SCDeckContainersSharedService initWithDeckContainerTransitioner:scPresentationPresenter:uiKitPresenterFactory:deckTransitionEventAnnouncer:circumstanceEngine:] */

undefined1 *
FUN_1005938b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112705540;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005939d4; end: 100593ba7; -[SCDeckContainerBase initWithPresenter:parentContainer:appearanceStyle:disappearanceStyle:page:pageInstanceId:deckContainersSharedService:] */

undefined1 *
FUN_1005939d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_112705528;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x38),param_4);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x1c) = param_7;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126df5b8;
    func_0x000107c610f4();
    func_0x000107c46054();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c4fc3c(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x000107c5d8a4(param_4);
    func_0x000107c5a2cc(puVar1);
    func_0x000107c4fbd0(param_4);
    *(bool *)((long)puVar1 + 0x1a) = param_4 == 0;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100593ba8; end: 100593c5b; -[SCDeckContainerLifecyleEventEmitter initWithContainer:] */

undefined1 * FUN_100593ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705538;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100593c5c; end: 100593c63; -[SCDeckContainerLifecyleEventEmitter registerLifecycleObserver:] */

void FUN_100593c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addPointer__11259c450);
  return;
}



/* Entry: 100593c64; end: 100593c6b; -[SCDeckContainerBase setUseUIKitForChildPresentation:] */

void FUN_100593c64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 100593c6c; end: 100593c7f; -[SCContainerViewController setSigTransitionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100593c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c748,param_3);
  return;
}



/* Entry: 100593c80; end: 100593c93; -[SCContainerViewController setUikitAppearanceMethodsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100593c80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c74c,param_3);
  return;
}



/* Entry: 100593c94; end: 100593cc3; -[SCDeckContainerBase setVisibleViewController:] */

void FUN_100593c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100593cc4; end: 100593cc7; -[SCDeckNoopBridgingSCUIContainer attachUI:] */

void FUN_100593cc4(void)

{
  return;
}



/* Entry: 100593cc8; end: 100593d53; -[SCRootContainer _logTransitionEventsWithAnnouncer:] */

/* WARNING: Possible PIC construction at 0x000100593d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100593d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100593d10) */
/* WARNING: Removing unreachable block (ram,0x000100593d34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100593cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61174(param_3);
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278c538);
  *(undefined **)(param_1 + _DAT_11278c538) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100593d54; end: 100593e27; -[SCDeckCurrentPageTrackerNotifier initWithListenerAndCurrentPageTracker:deckTransitionEventObservable:circumstanceEngine:] */

undefined1 *
FUN_100593d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112705520;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c3c6bc(puVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100593e28; end: 100593f17; -[SCDeckCurrentPageTrackerNotifier _setupSubscription] */

void FUN_100593e28(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100593f18; end: 100593fcf; -[SCDeckHierarchyContainerFactory initWithPrimaryRootContainer:] */

undefined1 * FUN_100593f18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1127054f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126df590;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar3);
    uVar4 = param_3;
    func_0x000107c6115c(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar2 + 8),uVar1);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 100593fd0; end: 100593fe7; -[SCDeckHierarchyImpl rootContainer] */

void FUN_100593fd0(long param_1)

{
  func_0x000107c61148(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100593fe8; end: 100593ffb; -[SCRootContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100593fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c53c,param_3);
  return;
}



/* Entry: 100593ffc; end: 1005940db; -[SCActiveUserNGSNavigationRouter _createTabBarBuilder] */

void FUN_100593ffc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126ce4b0;
  func_0x000107c5c660();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c3bae4(param_1);
  func_0x000107c5e58c(puVar2,param_2,lVar3);
  func_0x000107c611b0();
  func_0x000107c5e4ac(puVar2,param_2,*(undefined8 *)(param_1 + 0x140));
  func_0x000107c611b0();
  puVar4 = puVar2;
  func_0x000107c5e45c(puVar2,param_2,*(undefined8 *)(param_1 + 800));
  iVar1 = (int)puVar4;
  func_0x000107c611b0();
  FUN_100456ca0();
  uVar6 = 0x3ff8000000000000;
  if (iVar1 == 0) {
    uVar6 = 0x3ff0000000000000;
  }
  func_0x000107c5e6f8(uVar6,puVar2);
  func_0x000107c611b0();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c508d0(uVar5);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5c658();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1005940dc; end: 1005940f7; +[SCTabBarContainerConfigBuilder tabBarContainerConfig] */

void FUN_1005940dc(void)

{
  func_0x000107c610fc(PTR_PTR_1126ce4b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005940f8; end: 1005940ff; -[SCTabBarContainerConfigBuilder withGestureManagementEnabled:] */

void FUN_1005940f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 100594100; end: 100594137; -[SCTabBarContainerConfigBuilder withCircumstanceEngine:] */

long FUN_100594100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100594138; end: 10059413f; -[SCTabBarContainerConfigBuilder withBarStyle:] */

void FUN_100594138(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 100594140; end: 100594147; -[SCTabBarContainerConfigBuilder withNavBarElementsScalingFactor:] */

void FUN_100594140(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 100594148; end: 10059415b; -[SCDeckContainerBase tabBarContainerBuilderWithConfig:] */

void FUN_100594148(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df5e0,PTR_s_tabBarContainerBuilderWithConfig_112677770,param_3,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10059415c; end: 100594263; +[SCStandardContainerFactory tabBarContainerBuilderWithConfig:presenter:parentContainer:] */

void FUN_10059415c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c3ecc8(param_3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126df670;
  func_0x000107c610f4(PTR_PTR_1126df670);
  uVar2 = param_3;
  func_0x000107c4129c(param_3);
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c43e80(param_3);
  uVar4 = param_3;
  func_0x000107c3fa04(param_3);
  func_0x000107c61180();
  uVar5 = param_3;
  func_0x000107c3e660(param_3);
  func_0x000107c4d4a4(param_3);
  func_0x000107c4805c(puVar1,param_2,param_4,param_5,uVar2,uVar3,uVar4,uVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100594264; end: 1005942a7; -[SCTabBarContainerConfigBuilder build] */

void FUN_100594264(long param_1)

{
  func_0x000107c610f4(PTR_PTR_1126e1618);
  func_0x000107c47d00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005942a8; end: 1005943af; -[SCTabBarContainerConfig initWithPage:gestureManagementEnabled:barStyle:navBarElementsScalingFactor:circumstanceEngine:viewControllers:dataSource:] */

undefined1 *
FUN_1005942a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_11270b2d8;
  uStack_70 = param_2;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1005943b0; end: 1005943b7; -[SCTabBarContainerConfig dataSource] */

undefined8 FUN_1005943b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1005943b8; end: 1005943bf; -[SCTabBarContainerConfig gestureManagementEnabled] */

undefined1 FUN_1005943b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1005943c0; end: 1005943c7; -[SCTabBarContainerConfig circumstanceEngine] */

undefined8 FUN_1005943c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1005943c8; end: 1005943cf; -[SCTabBarContainerConfig barStyle] */

undefined8 FUN_1005943c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005943d0; end: 1005943d7; -[SCTabBarContainerConfig navBarElementsScalingFactor] */

undefined8 FUN_1005943d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005943d8; end: 100594503; -[SCTabBarContainerBuilder initWithPresenter:parentContainer:dataSource:gestureManagementEnabled:circumstanceEngine:barStyle:navBarElementsScalingFactor:] */

undefined1 *
FUN_1005943d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_112705588;
  uStack_70 = param_2;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = param_7;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
    func_0x000107c3c344(puVar1);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100594504; end: 1005945a3; -[SCTabBarContainerBuilder _reset] */

/* WARNING: Possible PIC construction at 0x000100594550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100594574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100594554) */
/* WARNING: Removing unreachable block (ram,0x000100594578) */

void FUN_100594504(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126df678;
  func_0x000107c610f4();
  func_0x000107c48060();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1005945a4; end: 100594733; -[SCTabBarContainer initWithPresenter:parentContainer:dataSource:gestureManagementEnabled:page:pageInstanceId:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1005945a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_4);
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  FUN_1005937d8();
  func_0x000107c61180();
  uVar1 = uVar4;
  FUN_100593844();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c41410();
  func_0x000107c61180();
  puStack_68 = PTR_PTR_112705578;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar3,PTR_s_initWithPresenter_parentContaine_1125ebcb0,param_3,param_4,uVar4,
                      uVar1,param_7,param_8,uVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar3 + (long)_DAT_11278c5b0) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar3 + (long)_DAT_11278c5b4) = param_6;
    lVar5 = (long)_DAT_11278c5b8;
    func_0x000107c61174(param_9);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_9;
    func_0x000107c61170(uVar4);
    lVar5 = (long)_DAT_11278c5bc;
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_5;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 100594734; end: 10059473b; -[SCDeckContainerBase deckContainersSharedService] */

undefined8 FUN_100594734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10059473c; end: 100594743; -[SCDeckContainerBase useUIKitForChildPresentation] */

undefined1 FUN_10059473c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 100594744; end: 10059476b; -[SCDeckContainerBase registerChildForDebuggingPurposes:] */

void FUN_100594744(long param_1)

{
  func_0x000107c3d7f8(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf431d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_compact_1125ae618);
  return;
}



/* Entry: 10059476c; end: 1005947a7; -[SCTabBarContainerConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100594784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100594788) */

void FUN_10059476c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1005947a8; end: 1005947e3; -[SCTabBarContainerConfigBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001005947c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005947c4) */

void FUN_1005947a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1005947e4; end: 100594807; -[SCActiveUserNGSNavigationRouter _pageFromViewType:] */

undefined4 FUN_1005947e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 1U < 7) {
    return *(undefined4 *)(&UNK_10dde15b8 + (param_3 + 1U) * 4);
  }
  return 0xb;
}



/* Entry: 100594808; end: 100594947; -[SCTabBarContainerBuilder addTabWithPage:] */

void FUN_100594808(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126c56d0;
  func_0x000107c4d504(PTR_PTR_1126c56d0);
  func_0x000107c61180();
  func_0x000107c52b94();
  func_0x000107c3d798(*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR_PTR_1126df680;
  func_0x000107c610f4(PTR_PTR_1126df680);
  func_0x000107c40808(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c48064(puVar2);
  func_0x000107c61144(auStack_48,puVar2);
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c52140(puVar1);
  func_0x000107c3d798(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100594948; end: 1005949a7; +[SIGNavigationBarButtonItem navigationBarTemplateWithEmptyImageView] */

void FUN_100594948(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1860;
  func_0x000107c610fc(PTR_PTR_1126e1860);
  puVar2 = PTR_PTR_1126c56d0;
  func_0x000107c610f4(PTR_PTR_1126c56d0);
  func_0x000107c494dc();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005949a8; end: 100594adb; -[SIGNavigationBarButtonItem initWithView:title:accessibilityLabel:tooltipOption:target:selector:] */

undefined1 *
FUN_1005949a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_11270b638;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x78),param_7);
    *(undefined8 *)((long)puVar1 + 0x80) = param_8;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100594adc; end: 100594ae3; -[SIGNavigationBarButtonItem setBadgeColor:] */

void FUN_100594adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 100594ae4; end: 100594c47; -[SIGTabBarItemContainer initWithPresenter:parentTabBarContainer:navigationBarItem:page:pageInstanceId:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100594ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  FUN_1005937d8();
  func_0x000107c61180();
  uVar1 = uVar4;
  FUN_100593844();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c41410();
  func_0x000107c61180();
  puStack_68 = PTR_PTR_112705580;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar3,PTR_s_initWithPresenter_parentContaine_1125ebcb0,param_3,param_4,uVar4,
                      uVar1,param_6,param_7,uVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11278c5d0;
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0((long)puVar3 + (long)_DAT_11278c5d4,param_4);
    *(undefined8 *)((long)puVar3 + (long)_DAT_11278c5d8) = param_8;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar3;
}



/* Entry: 100594c48; end: 100594ca3; -[SIGNavigationBarButtonItem setAction:] */

/* WARNING: Possible PIC construction at 0x000100594c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100594c8c) */

void FUN_100594c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + 0x78,0);
  *(undefined8 *)(param_1 + 0x80) = 0;
  func_0x000107c61184(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100594ca4; end: 100594cab; -[SCDeckContainerBase registerLifecycleObserver:] */

void FUN_100594ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_registerLifecycleObserver__112627478);
  return;
}



/* Entry: 100594cac; end: 100594f4b; -[SCTabBarContainerBuilder build] */

undefined8
FUN_100594cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  undefined *puVar4;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126df688;
  func_0x000107c610f4();
  uVar8 = *(undefined8 *)(param_5 + 0x30);
  puVar4 = puVar3;
  FUN_100594f4c();
  uVar1 = (uint)puVar4;
  FUN_10052a7e0();
  uVar15 = *(undefined8 *)(param_5 + 0x48);
  func_0x000107c47010(param_1,uVar15,puVar3,param_6,uVar8,uVar1 ^ 1,*(undefined8 *)(param_5 + 0x40),
                      0);
  func_0x000107c520f4();
  func_0x000107c5a050(puVar3,param_6,0);
  uVar8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar9 = *(long *)(param_5 + 0x20);
  func_0x000107c61174(lVar9);
  lVar5 = lVar9;
  func_0x000107c4080c(lVar9,param_6,&uStack_140,auStack_100,0x10);
  if (lVar5 != 0) {
    lVar11 = 0;
    lVar13 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar13) {
          func_0x000107c61128(lVar9);
        }
        uVar12 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        puVar4 = PTR_PTR_1126c8700;
        func_0x000107c610f4(PTR_PTR_1126c8700);
        puVar6 = PTR_PTR_1126ce598;
        func_0x000107c610f4(PTR_PTR_1126ce598);
        uVar7 = *(undefined8 *)(param_5 + 0x30);
        func_0x000107c4d9a4(uVar7,param_6,lVar11);
        func_0x000107c61180();
        func_0x000107c45918(puVar6,param_6,uVar7,0);
        func_0x000107c47004(puVar4,param_6,puVar3,puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c569cc(uVar12,param_6,puVar4);
        func_0x000107c4d4bc(uVar12);
        func_0x000107c61180();
        func_0x000107c591f8();
        func_0x000107c61170(uVar12);
        lVar11 = lVar11 + 1;
        func_0x000107c61170(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar9;
      func_0x000107c4080c(lVar9,param_6,&uStack_140,auStack_100,0x10);
    } while (lVar5 != 0);
  }
  func_0x000107c61170(lVar9);
  uVar7 = *(undefined8 *)(param_5 + 0x18);
  func_0x000107c61174(uVar7);
  puVar4 = PTR_PTR_1126df658;
  if (*(long *)(param_5 + 0x40) == 1) {
    func_0x000107c4d73c();
  }
  else {
    func_0x000107c5ba30(PTR_PTR_1126df658);
  }
  func_0x000107c53f94(uVar7,param_6,puVar4);
  func_0x000107c59b88(uVar7,param_6,*(undefined8 *)(param_5 + 0x20));
  puVar4 = PTR_PTR_1126df690;
  func_0x000107c610f4(PTR_PTR_1126df690);
  func_0x000107c45490();
  func_0x000107c53e08(uVar7,param_6,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c3c344(param_5);
  func_0x000107c61170(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return uVar8;
  }
  func_0x000107c60e78();
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar7 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c51724();
  iVar2 = (int)puVar4;
  uVar12 = uVar7;
  uVar16 = param_4;
  FUN_10052b600();
  dVar14 = (double)iVar2;
  FUN_10052b668(dVar14);
  FUN_10052b8c4(uVar7,param_4,uVar8,param_3,dVar14,uVar15,uVar12,uVar16);
  func_0x000107c61170(puVar3);
  return uVar7;
}



/* Entry: 100594f4c; end: 100594fe7;  */

undefined8
FUN_100594f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar3;
  
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar5 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c51724();
  iVar1 = (int)puVar3;
  uVar6 = uVar5;
  uVar7 = param_4;
  FUN_10052b600();
  dVar4 = (double)iVar1;
  FUN_10052b668(dVar4);
  FUN_10052b8c4(uVar5,param_4,param_1,param_3,dVar4,param_2,uVar6,uVar7);
  func_0x000107c61170(puVar2);
  return uVar5;
}



/* Entry: 100594fe8; end: 100595477; -[SIGNavigationBarView initWithItems:navBarHeight:barHeightStyle:barStyle:caretEnabled:scalingFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100594fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_5;
  func_0x000107c61174(param_5);
  puStack_c0 = PTR_PTR_11270b640;
  uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_c8;
  uStack_c8 = param_3;
  func_0x000107c61154(uVar17,uVar18,uVar19,uVar20,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar15 = (long)_DAT_1127950c4;
    *(undefined8 *)((long)puVar1 + lVar15) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127950c8) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127950cc) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127950d0) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127950d4) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127950d8) = param_2;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127950dc) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127950e0) = 0x3ff0000000000000;
    puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    func_0x000107c610f4();
    func_0x000107c48c2c();
    func_0x000107c54118();
    func_0x000107c3d6fc(puVar1);
    func_0x000107c52100(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar17,uVar18,uVar19,uVar20);
    uVar17 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127950e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127950e4) = puVar3;
    func_0x000107c61170(uVar17);
    func_0x000107c61174(puVar3);
    func_0x000107c5a050(puVar3);
    func_0x000107c3d89c(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f4();
    puVar5 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar7 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar3;
    puStack_b8 = puVar7;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar9 = puVar1;
    func_0x000107c4acb0(puVar1);
    func_0x000107c61180();
    puVar10 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar11 = puVar3;
    puStack_b0 = puVar10;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar12 = puVar1;
    func_0x000107c5ce8c(puVar1);
    func_0x000107c61180();
    puVar13 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar13;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c45788();
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    puVar6 = puVar3;
    func_0x000107c44d9c(puVar3);
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40290(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x000107c61180();
    func_0x000107c3d798(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    puVar5 = puVar1;
    func_0x000107c3b1dc();
    func_0x000107c61180();
    uVar17 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127950e8);
    *(undefined8 **)((long)puVar1 + (long)_DAT_1127950e8) = puVar5;
    func_0x000107c61170(uVar17);
    puVar6 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar5 = puVar1;
    func_0x000107c515ac();
    func_0x000107c61180();
    puVar7 = puVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c3d798(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c61170(puVar3);
    func_0x000107c3b1f0(puVar1);
    lVar15 = param_5;
    func_0x000107c3c52c(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  func_0x000107c60e78();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61174(lVar15);
  func_0x000107c610f4(puVar1);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5a050();
  lVar16 = (long)_DAT_1127950e4;
  func_0x000107c3d89c(*(undefined8 *)(param_5 + lVar16));
  puVar5 = puVar1;
  func_0x000107c44d9c(puVar1);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40290(0x4049000000000000);
  func_0x000107c61180();
  func_0x000107c3d798(lVar15);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  puVar5 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(param_5 + lVar16);
  func_0x000107c5cbe4(uVar17);
  func_0x000107c61180();
  uVar18 = NEON_fminnm(*(double *)(param_5 + _DAT_1127950c4) + -50.0,0x4030000000000000);
  puVar7 = puVar5;
  func_0x000107c40284(uVar18,puVar5);
  func_0x000107c61180();
  func_0x000107c3d798(lVar15);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar5);
  puVar5 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(param_5 + lVar16);
  func_0x000107c4acb0(uVar17);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40284(0x4030000000000000,puVar5);
  func_0x000107c61180();
  func_0x000107c3d798(lVar15);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar5);
  puVar5 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(param_5 + lVar16);
  func_0x000107c5ce8c(uVar17);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40284(0xc030000000000000,puVar5);
  func_0x000107c61180();
  func_0x000107c3d798(lVar15);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 100595478; end: 1005956a3; -[SIGNavigationBarView _createBackgroundPillViewWithConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100595478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5a050();
  lVar5 = (long)_DAT_1127950e4;
  func_0x000107c3d89c(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  puVar2 = puVar1;
  func_0x000107c44d9c(puVar1);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40290(0x4049000000000000);
  func_0x000107c61180();
  func_0x000107c3d798(param_3,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c5cbe4(uVar4);
  func_0x000107c61180();
  uVar6 = NEON_fminnm(*(double *)(param_1 + _DAT_1127950c4) + -50.0,0x4030000000000000);
  puVar3 = puVar2;
  func_0x000107c40284(uVar6,puVar2,param_2,uVar4);
  func_0x000107c61180();
  func_0x000107c3d798(param_3,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c4acb0(uVar4);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40284(0x4030000000000000,puVar2,param_2,uVar4);
  func_0x000107c61180();
  func_0x000107c3d798(param_3,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c5ce8c(uVar4);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40284(0xc030000000000000,puVar2,param_2,uVar4);
  func_0x000107c61180();
  func_0x000107c3d798(param_3,param_2,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005956a4; end: 100595787; -[SIGNavigationBarView _createCaretViewWithCaretEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005956a4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f4();
    func_0x000107c469a4(0,0,0x4022000000000000,0x4022000000000000);
    lVar3 = (long)_DAT_1127950f0;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    func_0x000107c61170(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c450cc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61180();
    func_0x000107c55258(*(undefined8 *)(param_1 + lVar3));
    func_0x000107c61170(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c59e10(*(undefined8 *)(param_1 + lVar3));
    func_0x000107c61170(puVar1);
    func_0x000107c53840(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127950e4),PTR_s_addSubview__11259c880,
               *(undefined8 *)(param_1 + lVar3));
    return;
  }
  return;
}



/* Entry: 100595788; end: 100595aff; -[SIGNavigationBarView _setButtonItems:] */

/* WARNING: Possible PIC construction at 0x000100595864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059589c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100595964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100595984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100595a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100595a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100595a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100595ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100595b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100595ab4) */
/* WARNING: Removing unreachable block (ram,0x000100595afc) */
/* WARNING: Removing unreachable block (ram,0x000100595b24) */
/* WARNING: Removing unreachable block (ram,0x000100595acc) */
/* WARNING: Removing unreachable block (ram,0x000100595a8c) */
/* WARNING: Removing unreachable block (ram,0x000100595a5c) */
/* WARNING: Removing unreachable block (ram,0x000100595a68) */
/* WARNING: Removing unreachable block (ram,0x000100595a38) */
/* WARNING: Removing unreachable block (ram,0x000100595988) */
/* WARNING: Removing unreachable block (ram,0x000100595990) */
/* WARNING: Removing unreachable block (ram,0x000100595968) */
/* WARNING: Removing unreachable block (ram,0x000100595994) */
/* WARNING: Removing unreachable block (ram,0x0001005959ac) */
/* WARNING: Removing unreachable block (ram,0x00010059599c) */
/* WARNING: Removing unreachable block (ram,0x0001005959a4) */
/* WARNING: Removing unreachable block (ram,0x0001005959b0) */
/* WARNING: Removing unreachable block (ram,0x0001005959c0) */
/* WARNING: Removing unreachable block (ram,0x0001005959c4) */
/* WARNING: Removing unreachable block (ram,0x0001005959c8) */
/* WARNING: Removing unreachable block (ram,0x000100595970) */
/* WARNING: Removing unreachable block (ram,0x0001005958a0) */
/* WARNING: Removing unreachable block (ram,0x000100595a84) */
/* WARNING: Removing unreachable block (ram,0x0001005958e4) */
/* WARNING: Removing unreachable block (ram,0x00010059590c) */
/* WARNING: Removing unreachable block (ram,0x000100595910) */
/* WARNING: Removing unreachable block (ram,0x000100595920) */
/* WARNING: Removing unreachable block (ram,0x000100595928) */
/* WARNING: Removing unreachable block (ram,0x00010059594c) */
/* WARNING: Removing unreachable block (ram,0x000100595950) */
/* WARNING: Removing unreachable block (ram,0x000100595868) */
/* WARNING: Removing unreachable block (ram,0x00010059587c) */
/* WARNING: Removing unreachable block (ram,0x000100595b48) */
/* WARNING: Removing unreachable block (ram,0x000100595b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100595788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_130 [128];
  undefined8 uStack_b0;
  
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  plStack_1e8 = (long *)0x0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar2 = *(long *)(param_1 + _DAT_1127950ec);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_1f0,auStack_130,0x10);
  if (lVar1 != 0) {
    if (*plStack_1e0 != *plStack_1e0) {
      func_0x000107c61128(lVar2);
    }
    lVar2 = *plStack_1e8;
    func_0x000107c4a764(lVar2);
    func_0x000107c61180();
    func_0x000107c4ffa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100595b00; end: 100595b63; -[SIGNavigationBarButtonItem addObserver:] */

/* WARNING: Possible PIC construction at 0x000100595b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100595b48) */

void FUN_100595b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    param_3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
  }
  else {
    func_0x000107c3d7f8(*(long *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100595b64; end: 100595bff; +[SIGNavigationBarButton navigationBarButtonWithItem:labelSigTypeStyle:iconImageViewSize:buttonWithLabelTopOffset:horizontalOffset:labelTopOffset:scalingFactor:] */

void FUN_100595b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1850;
  func_0x000107c61174(param_8);
  func_0x000107c610f4(puVar1);
  func_0x000107c46fbc(param_1,param_4,param_2,param_3,param_5);
  func_0x000107c61170(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100595c00; end: 100596047; -[SIGNavigationBarButton initWithItem:labelSigTypeStyle:iconImageViewSize:labelTopOffset:buttonWithLabelTopOffset:horizontalOffset:scalingFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100595c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  func_0x000107c61174(param_8);
  puStack_98 = PTR_PTR_11270b628;
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_a0;
  uStack_a0 = param_6;
  func_0x000107c61154(uVar6,uVar7,uVar8,uVar9,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112794fc4;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_8;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fc8) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fcc) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fd0) = param_2;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fd4) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fd8) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fdc) = param_5;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c55528(puVar1);
    lVar5 = param_8;
    func_0x000107c3cf00(param_8);
    func_0x000107c61180();
    func_0x000107c520f4(puVar1);
    func_0x000107c61170(lVar5);
    lVar5 = param_8;
    func_0x000107c3cf04(param_8);
    func_0x000107c61180();
    func_0x000107c520fc(puVar1);
    func_0x000107c61170(lVar5);
    func_0x000107c52100(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_112794fe0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c5a050(*(undefined8 *)((long)puVar1 + lVar5));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x000107c4aba4(uVar2);
    func_0x000107c61180();
    func_0x000107c539d4(0x402a000000000000);
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x000107c61170(puVar3);
    func_0x000107c526c0(0,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x000107c5a378(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x000107c3d89c(puVar1);
    lVar5 = param_8;
    func_0x000107c5de64();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794fe4);
    *(long *)((long)puVar1 + (long)_DAT_112794fe4) = lVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c3d89c(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    func_0x000107c61174(param_8);
    func_0x000107c610f4();
    func_0x000107c469a4(uVar6,uVar7,uVar8,uVar9);
    func_0x000107c5a050();
    func_0x000107c56ba8(puVar3);
    func_0x000107c59c74(puVar3);
    lVar5 = param_8;
    func_0x000107c5cab0(param_8);
    func_0x000107c61180();
    func_0x000107c61170(param_8);
    func_0x000107c59c6c(puVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c5a100(puVar3);
    func_0x000107c526c0(0x3fe47ae147ae147b,puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c59c78(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c52518(puVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794fe8);
    *(undefined **)((long)puVar1 + (long)_DAT_112794fe8) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c3d89c(puVar1);
    lVar5 = param_8;
    func_0x000107c3e620();
    if (lVar5 != 0) {
      func_0x000107c3c628(puVar1);
    }
    func_0x000107c3ac90(puVar1);
    func_0x000107c3d7b4(param_8);
    func_0x000107c3d8b8(puVar1);
    lVar5 = param_8;
    func_0x000107c4ec20();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar5 != 0) {
      func_0x000107c3d8b8(puVar1);
    }
    lVar5 = param_8;
    func_0x000107c4ec24();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar5 != 0) {
      func_0x000107c3d8b8(puVar1);
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794fec) = 0;
  }
  func_0x000107c61170(param_8);
  return puVar1;
}



/* Entry: 100596048; end: 10059604f; -[SIGNavigationBarButtonItem accessibilityIdentifier] */

undefined8 FUN_100596048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100596050; end: 100596057; -[SIGNavigationBarButtonItem accessibilityLabel] */

undefined8 FUN_100596050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100596058; end: 10059605f; -[SIGNavigationBarButtonItem view] */

undefined8 FUN_100596058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100596060; end: 100596067; -[SIGNavigationBarButtonItem title] */

undefined8 FUN_100596060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100596068; end: 10059606f; -[SIGNavigationBarButtonItem badgeCount] */

undefined8 FUN_100596068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100596070; end: 100596af7; -[SIGNavigationBarButton _activateAllConstraints] */

/* WARNING: Possible PIC construction at 0x000100596b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100596b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100596b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100596b5c) */
/* WARNING: Removing unreachable block (ram,0x000100596b68) */
/* WARNING: Removing unreachable block (ram,0x000100596b34) */
/* WARNING: Removing unreachable block (ram,0x000100596b98) */
/* WARNING: Removing unreachable block (ram,0x000100596bc4) */
/* WARNING: Removing unreachable block (ram,0x000100596bb4) */
/* WARNING: Removing unreachable block (ram,0x000107c3cb7c) */
/* WARNING: Removing unreachable block (ram,0x00010bed3dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100596070(ulong param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = (long)_DAT_112794ff0;
  lVar4 = *(long *)(param_1 + lVar23);
  func_0x000107c40808();
  if (lVar4 != 0) {
    func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610fc();
  uVar16 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar5;
  func_0x000107c61170(uVar16);
  uVar12 = param_1;
  func_0x000107c4a3b4();
  iVar2 = (int)uVar12;
  lVar24 = (long)_DAT_112794ff4;
  lVar4 = *(long *)(param_1 + lVar24);
  if (lVar4 != 0) {
    lVar21 = (long)_DAT_112794fc4;
    uVar16 = *(undefined8 *)(param_1 + lVar21);
    func_0x000107c3dea8(uVar16);
    func_0x000107c61180();
    func_0x000107c59cb4(lVar4);
    func_0x000107c61170(uVar16);
    uVar19 = *(undefined8 *)(param_1 + lVar24);
    uVar16 = *(undefined8 *)(param_1 + lVar21);
    func_0x000107c3deac(uVar16);
    func_0x000107c61180();
    func_0x000107c55154(uVar19);
    func_0x000107c61170(uVar16);
    uVar16 = *(undefined8 *)(param_1 + lVar24);
    func_0x000107c4a3b4(param_1);
    uVar12 = param_1;
    func_0x000107c4e1d8(param_1);
    func_0x000107c61180();
    func_0x000107c58de0(uVar16);
    func_0x000107c61170(uVar12);
    func_0x000107c544ac(*(undefined8 *)(param_1 + lVar24));
    uVar17 = *(undefined8 *)(param_1 + lVar23);
    uVar6 = *(undefined8 *)(param_1 + lVar24);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar12 = param_1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar16 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + lVar24);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar14 = param_1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar19 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + lVar24);
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar9 = param_1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar22 = uVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_1 + lVar24);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar11 = param_1;
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    uVar13 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d7a0(uVar17);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar6);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c3ca88(param_1);
    uVar12 = *(ulong *)(param_1 + lVar24);
    func_0x000107c5ac2c();
    if ((uVar12 & 1) != 0) goto LAB_100596ab4;
  }
  func_0x000107c3ca88(param_1);
  if (iVar2 == 0) {
LAB_1005963c8:
    uVar16 = *(undefined8 *)(param_1 + (long)_DAT_112794fcc);
  }
  else {
    uVar12 = *(ulong *)(param_1 + (long)_DAT_112794fc4);
    func_0x000107c5ae3c();
    uVar16 = 0x403a000000000000;
    if ((uVar12 & 1) == 0) goto LAB_1005963c8;
  }
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  lVar21 = (long)_DAT_112794fe0;
  uVar13 = *(undefined8 *)(param_1 + lVar21);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar19 = uVar13;
  func_0x000107c40290(0x4048000000000000);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + lVar21);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar22 = uVar6;
  func_0x000107c40290(uVar16);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + lVar21);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000107c3f75c(param_1);
  func_0x000107c61180();
  uVar16 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d7a0(uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  lVar25 = (long)_DAT_112794fc4;
  lVar24 = *(long *)(param_1 + lVar25);
  func_0x000107c5cab0();
  func_0x000107c61180();
  lVar4 = lVar24;
  func_0x000107c4adac();
  uVar12 = param_1;
  if (lVar4 == 0) {
    func_0x000107c61170(lVar24);
LAB_100596584:
    uVar22 = *(undefined8 *)(param_1 + lVar23);
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    func_0x000107c3f764(uVar19);
    func_0x000107c61180();
    func_0x000107c3f764(param_1);
    func_0x000107c61180();
    uVar16 = uVar19;
    func_0x000107c40280(uVar19);
    func_0x000107c61180();
  }
  else {
    uVar14 = *(ulong *)(param_1 + lVar25);
    func_0x000107c44e10();
    func_0x000107c61170(lVar24);
    if ((uVar14 & 1) != 0) goto LAB_100596584;
    uVar14 = param_1;
    func_0x000107c4a3b4();
    if ((int)uVar14 == 0) {
LAB_1005965cc:
      uVar13 = *(undefined8 *)(param_1 + (long)_DAT_112794fd4);
    }
    else {
      iVar3 = (int)*(undefined8 *)(param_1 + lVar25);
      func_0x000107c5ae3c();
      if (iVar3 == 0) goto LAB_1005965cc;
      lVar24 = *(long *)(param_1 + lVar25);
      func_0x000107c5cab0();
      func_0x000107c61180();
      lVar4 = lVar24;
      func_0x000107c4adac();
      uVar13 = 0x4018000000000000;
      if (lVar4 == 0) {
        uVar13 = *(undefined8 *)(param_1 + (long)_DAT_112794fd4);
      }
      func_0x000107c61170(lVar24);
    }
    uVar22 = *(undefined8 *)(param_1 + lVar23);
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    func_0x000107c5cbe4(uVar19);
    func_0x000107c61180();
    func_0x000107c5cbe4(param_1);
    func_0x000107c61180();
    uVar16 = uVar19;
    func_0x000107c40284(uVar13,uVar19);
    func_0x000107c61180();
  }
  func_0x000107c3d798(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar19);
  uVar13 = *(undefined8 *)(param_1 + lVar23);
  lVar4 = (long)_DAT_112794fe4;
  uVar19 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c3f764(uVar19);
  func_0x000107c61180();
  uVar22 = *(undefined8 *)(param_1 + lVar21);
  func_0x000107c3f764(uVar22);
  func_0x000107c61180();
  uVar16 = uVar19;
  func_0x000107c40280(uVar19);
  func_0x000107c61180();
  func_0x000107c3d798(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar19);
  if (iVar2 == 0) {
LAB_1005966cc:
    uVar16 = *(undefined8 *)(param_1 + (long)_DAT_112794fcc);
  }
  else {
    uVar12 = *(ulong *)(param_1 + lVar25);
    func_0x000107c5ae3c();
    uVar16 = 0x4038000000000000;
    if ((uVar12 & 1) == 0) goto LAB_1005966cc;
  }
  lVar24 = (long)_DAT_112794fd8;
  dVar27 = *(double *)(param_1 + lVar24) * 0.5;
  iVar3 = (int)*(undefined8 *)(param_1 + lVar25);
  func_0x000107c44e10();
  dVar28 = dVar27 * 3.0;
  if (iVar3 == 0) {
    dVar28 = dVar27;
  }
  uVar10 = *(undefined8 *)(param_1 + lVar23);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000107c3f75c(param_1);
  func_0x000107c61180();
  uVar19 = uVar6;
  func_0x000107c40284(dVar28);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar22 = uVar7;
  func_0x000107c40290(uVar16);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar13 = uVar8;
  func_0x000107c40290(uVar16);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d7a0(uVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  lVar4 = (long)_DAT_112794fe8;
  if (*(long *)(param_1 + lVar4) != 0) {
    dVar26 = *(double *)(param_1 + lVar24);
    dVar27 = 2.0;
    if (dVar26 < 0.0) {
      dVar27 = 2.0 - dVar26;
    }
    dVar1 = 2.0;
    if (0.0 < dVar26) {
      dVar27 = 2.0;
      dVar1 = dVar26 + 2.0;
    }
    if (iVar2 == 0) {
LAB_1005968a8:
      uVar16 = *(undefined8 *)(param_1 + (long)_DAT_112794fd0);
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + lVar25);
      func_0x000107c5ae3c();
      if (iVar2 == 0) goto LAB_1005968a8;
      lVar25 = *(long *)(param_1 + lVar25);
      func_0x000107c5cab0();
      func_0x000107c61180();
      lVar24 = lVar25;
      func_0x000107c4adac();
      uVar16 = 0x4000000000000000;
      if (lVar24 == 0) {
        uVar16 = *(undefined8 *)(param_1 + (long)_DAT_112794fd0);
      }
      func_0x000107c61170(lVar25);
    }
    uVar20 = *(undefined8 *)(param_1 + lVar21);
    uVar18 = *(undefined8 *)(param_1 + lVar23);
    uVar7 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c61174(uVar20);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar19 = uVar20;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar22 = uVar7;
    func_0x000107c40284(uVar16);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar12 = param_1;
    func_0x000107c4acb0(param_1);
    func_0x000107c61180();
    uVar16 = uVar8;
    func_0x000107c40298(dVar1);
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar14 = param_1;
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    uVar13 = uVar10;
    func_0x000107c402a8(-dVar27);
    func_0x000107c61180();
    uVar17 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar9 = param_1;
    func_0x000107c3f75c(param_1);
    func_0x000107c61180();
    uVar6 = uVar17;
    func_0x000107c40284(dVar28);
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c3d7a0(uVar18);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar7);
  }
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c3ac94();
  uVar12 = param_1;
LAB_100596ab4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    func_0x000107c60e78();
    iVar2 = (int)*(undefined8 *)(uVar12 + (long)_DAT_112794ff4);
    func_0x000107c5ac2c();
    uVar16 = *(undefined8 *)(uVar12 + (long)_DAT_112794fe0);
    if (iVar2 == 0) {
      func_0x000107c550d8(uVar16);
      uVar16 = *(undefined8 *)(uVar12 + (long)_DAT_112794fe8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_setHidden__1126479f8,iVar2 != 0);
    return;
  }
  return;
}



/* Entry: 100596af8; end: 100596bcf; -[SIGNavigationBarButton _toggleCustomViewVisibility] */

/* WARNING: Possible PIC construction at 0x000100596b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100596b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100596b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100596b5c) */
/* WARNING: Removing unreachable block (ram,0x000100596b68) */
/* WARNING: Removing unreachable block (ram,0x000100596b34) */
/* WARNING: Removing unreachable block (ram,0x000100596b98) */
/* WARNING: Removing unreachable block (ram,0x000100596bc4) */
/* WARNING: Removing unreachable block (ram,0x000100596bb4) */
/* WARNING: Removing unreachable block (ram,0x000107c3cb7c) */
/* WARNING: Removing unreachable block (ram,0x00010bed3dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100596af8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112794ff4);
  func_0x000107c5ac2c();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794fe0);
  if (iVar1 == 0) {
    func_0x000107c550d8(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794fe8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setHidden__1126479f8,iVar1 != 0);
  return;
}



/* Entry: 100596bd0; end: 100596bd7; -[SIGNavigationBarButtonItem hideLabel] */

undefined1 FUN_100596bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 100596bd8; end: 100596e8b; -[SIGNavigationBarButton _activateBadgeViewConstraintsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100596bd8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112794ff8;
  lVar2 = param_2;
  if (*(long *)(param_2 + lVar15) != 0) {
    lVar16 = (long)_DAT_112794fe4;
    func_0x000107c3e650(*(undefined8 *)(param_2 + lVar16));
    lVar14 = (long)_DAT_112794fc4;
    lVar2 = *(long *)(param_2 + lVar14);
    dVar17 = param_1;
    func_0x000107c3de9c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      iVar13 = (int)*(undefined8 *)(param_2 + lVar14);
      func_0x000107c5ae40();
    }
    else {
      iVar13 = 0;
    }
    func_0x000107c61170(lVar2);
    lVar2 = *(long *)(param_2 + lVar14);
    func_0x000107c3de9c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (iVar13 == 0) {
      func_0x000107c3ae74(param_2);
    }
    else {
      func_0x000107c3ae84();
    }
    lVar14 = (long)dVar17;
    if (lVar2 == 0) {
      func_0x000107c3e628(*(undefined8 *)(param_2 + lVar16));
      param_1 = -dVar17;
      func_0x000107c3e624(*(undefined8 *)(param_2 + lVar16));
    }
    else {
      dVar17 = -param_1;
    }
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = *(long *)(param_2 + lVar15);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_2 + lVar16);
    func_0x000107c5cbe4(uVar3);
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c40284((double)(long)param_1,lVar2,param_3,uVar3);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_2 + lVar15);
    lStack_98 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_2 + lVar16);
    func_0x000107c5ce8c(uVar6);
    func_0x000107c61180();
    uVar7 = uVar5;
    func_0x000107c40284((double)(long)dVar17,uVar5,param_3,uVar6);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_2 + lVar15);
    uStack_90 = uVar7;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c40290((double)lVar14);
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_2 + lVar15);
    uStack_88 = uVar9;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c40290((double)lVar14);
    func_0x000107c61180();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar11;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_98,4);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1,param_3,puVar12);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar2;
  }
  func_0x000107c60e78();
  return *(long *)(lVar2 + 0x98);
}



/* Entry: 100596e8c; end: 100596e93; -[SIGNavigationBarButtonItem preActivationAction] */

undefined8 FUN_100596e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100596e94; end: 100596e9b; -[SIGNavigationBarButtonItem preActivationCancelAction] */

undefined8 FUN_100596e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 100596e9c; end: 100596f1f; -[SIGNavigationBarButton setTooltipPresenter:] */

/* WARNING: Possible PIC construction at 0x000100596ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100596ee8) */
/* WARNING: Removing unreachable block (ram,0x000100596eec) */
/* WARNING: Removing unreachable block (ram,0x000100596f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100596e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  param_1 = param_1 + _DAT_112795008;
  func_0x000107c61148(param_1);
  func_0x000107c49cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100596f20; end: 100596f8f; -[SIGNavigationBarButton _dismissTooltip] */

/* WARNING: Possible PIC construction at 0x000100596f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100596f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100596f20(long param_1)

{
  if (*(long *)(param_1 + _DAT_112795004) != 0) {
    param_1 = param_1 + _DAT_112795008;
    func_0x000107c61148(param_1);
    func_0x000107c4209c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100596f90; end: 1005971db; -[SIGNavigationBarButton _presentTooltip] */

/* WARNING: Possible PIC construction at 0x000100596fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100596ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005970a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005970b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005970d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005970fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005971a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100597198) */
/* WARNING: Removing unreachable block (ram,0x00010059712c) */
/* WARNING: Removing unreachable block (ram,0x0001005970d4) */
/* WARNING: Removing unreachable block (ram,0x000100597100) */
/* WARNING: Removing unreachable block (ram,0x000100597118) */
/* WARNING: Removing unreachable block (ram,0x0001005970d8) */
/* WARNING: Removing unreachable block (ram,0x0001005970bc) */
/* WARNING: Removing unreachable block (ram,0x0001005970ac) */
/* WARNING: Removing unreachable block (ram,0x000100597038) */
/* WARNING: Removing unreachable block (ram,0x00010059703c) */
/* WARNING: Removing unreachable block (ram,0x00010059701c) */
/* WARNING: Removing unreachable block (ram,0x000100597020) */
/* WARNING: Removing unreachable block (ram,0x000100596ff8) */
/* WARNING: Removing unreachable block (ram,0x000100596ffc) */
/* WARNING: Removing unreachable block (ram,0x000100596fdc) */
/* WARNING: Removing unreachable block (ram,0x0001005971c4) */
/* WARNING: Removing unreachable block (ram,0x000100596fe0) */
/* WARNING: Removing unreachable block (ram,0x0001005971a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100596f90(long param_1)

{
  if (*(long *)(param_1 + _DAT_112795004) != 0) {
    func_0x000107c3b530(param_1);
  }
  func_0x000107c5e3f8(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005971dc; end: 10059736f; -[SIGNavigationBarView _calculateCaretViewVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1005971dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = (long)_DAT_1127950ec;
  lVar4 = *(long *)(param_1 + lVar5);
  func_0x000107c61174(lVar4);
  lVar3 = lVar4;
  func_0x000107c4080c(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          func_0x000107c61128(lVar4);
        }
        lVar1 = *(long *)(lStack_128 + lVar7 * 8);
        func_0x000107c4a764();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c5cab0();
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(lVar1);
        if (lVar2 != 0) {
          *(undefined1 *)(param_1 + _DAT_112795108) = 1;
          func_0x000107c550d8(*(undefined8 *)(param_1 + _DAT_1127950f0),param_2,1);
          func_0x000107c61170();
          goto LAB_100597334;
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar4;
      func_0x000107c4080c(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  func_0x000107c61170(lVar4);
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x000107c40808();
  *(bool *)(param_1 + _DAT_112795108) = lVar3 == 0;
  lVar4 = *(long *)(param_1 + _DAT_1127950f0);
  func_0x000107c550d8();
LAB_100597334:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar4;
  }
  func_0x000107c60e78();
  return *(long *)(lVar4 + _DAT_112794fc4);
}



/* Entry: 100597370; end: 10059737f; -[SIGNavigationBarButton item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100597370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794fc4);
}



/* Entry: 100597380; end: 10059774f; -[SIGNavigationBarView _setupSubviewsAutolayout] */

/* WARNING: Possible PIC construction at 0x000100597488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005974d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059755c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059756c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005975d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005975e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005975fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059760c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005976a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005976e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005976f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005976e4) */
/* WARNING: Removing unreachable block (ram,0x0001005976a8) */
/* WARNING: Removing unreachable block (ram,0x000100597698) */
/* WARNING: Removing unreachable block (ram,0x000100597610) */
/* WARNING: Removing unreachable block (ram,0x000100597600) */
/* WARNING: Removing unreachable block (ram,0x0001005975ec) */
/* WARNING: Removing unreachable block (ram,0x0001005975dc) */
/* WARNING: Removing unreachable block (ram,0x000100597570) */
/* WARNING: Removing unreachable block (ram,0x000100597560) */
/* WARNING: Removing unreachable block (ram,0x0001005974d4) */
/* WARNING: Removing unreachable block (ram,0x000100597578) */
/* WARNING: Removing unreachable block (ram,0x0001005974e4) */
/* WARNING: Removing unreachable block (ram,0x0001005974f4) */
/* WARNING: Removing unreachable block (ram,0x0001005974f8) */
/* WARNING: Removing unreachable block (ram,0x00010059748c) */
/* WARNING: Removing unreachable block (ram,0x0001005976f4) */
/* WARNING: Removing unreachable block (ram,0x00010059745c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100597380(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127950ec;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x000107c40808();
  if (lVar1 == 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127950e4);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x000107c40808();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c4aa28(uVar4);
    func_0x000107c61180();
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c50890(uVar3);
    func_0x000107c61180();
    func_0x000107c40280(uVar4,param_2,uVar3);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c4d9a4(uVar4,param_2,0);
    func_0x000107c61180();
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c4ace0(uVar3);
    func_0x000107c61180();
    func_0x000107c40280(uVar4,param_2,uVar3);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 100597750; end: 1005977d3; -[SIGNavigationBarViewTransitionContext initWithBarItem:transitionStyle:] */

undefined1 *
FUN_100597750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270b4d0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005977d4; end: 10059789f; -[SIGFooterItemConfig initWithItemView:transitionContext:] */

undefined1 *
FUN_1005977d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270b4c8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = 1;
    if (*(long *)((long)puVar1 + 0x18) != 0) {
      func_0x000107c3d7b8();
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005978a0; end: 1005978df; -[SIGTabBarItemContainer setNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005978a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278c5e0;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005978e0; end: 1005978ef; -[SIGTabBarItemContainer navigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005978e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5e0);
}



/* Entry: 1005978f0; end: 100597943; -[SIGFooterItemConfig setShowContentBehindFooter:] */

void FUN_1005978f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x11) = param_3;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_10b84fb28;
  puStack_20 = &UNK_110d62990;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 100597944; end: 1005979d3; -[SIGFooterItemConfig forEachObserver:] */

/* WARNING: Possible PIC construction at 0x0001005979ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005979b0) */

void FUN_100597944(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x000107c40808(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c4eaf0(lVar1);
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005979d4; end: 1005979db; +[SCPanTransitionOptions standardSpacingBetweenPages] */

undefined8 FUN_1005979d4(void)

{
  return 4;
}



/* Entry: 1005979dc; end: 1005979eb; -[SCTabBarContainer setDefaultPanTransitionOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005979dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278c5c4) = param_3;
  return;
}



/* Entry: 1005979ec; end: 1005979f7; -[SCTabBarContainer setTabContainers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005979ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1005979f8; end: 100597a6b; -[SCTabBarContainerDataSource initWith:] */

undefined1 * FUN_1005979f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705590;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100597a6c; end: 100597aab; -[SCTabBarContainer setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100597a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278c5bc;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100597aac; end: 100597aeb;  */

undefined4 FUN_100597aac(void)

{
  if (lRam00000001137fc198 != -1) {
    FUN_10002a2fc(0x1137fc198,&PTR___NSConcreteGlobalBlock_110d667d8);
  }
  return uRam00000001137fc050;
}



/* Entry: 100597aec; end: 100597b6f;  */

undefined8 FUN_100597aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1960;
  func_0x000107c61174(0);
  func_0x000107c61174(param_2);
  func_0x000107c5a9f0(puVar1);
  func_0x000107c61180();
  func_0x000107c436e4(param_1);
  func_0x000107c61170(0);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100597b70; end: 100597b97;  */

void FUN_100597b70(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  FUN_100597aec(&PTR____CFConstantStringClassReference_110f98998);
  uRam00000001137fc050 = uVar1;
  return;
}



/* Entry: 100597b98; end: 100597b9f; -[SCPlusFeatureGatingImpl defaultTab] */

void FUN_100597b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x158),PTR_s_target_112678178);
  return;
}



/* Entry: 100597ba0; end: 100597baf; -[SIGTabBarItemContainer navigationBarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100597ba0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5d0);
}



/* Entry: 100597bb0; end: 100597c27; -[SIGNavigationBarButtonItem setLongPressAction:] */

void FUN_100597bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61184();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  func_0x000107c61170(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100597cb8;
  puStack_30 = &UNK_110d62ca0;
  lStack_28 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_48);
  return;
}



/* Entry: 100597c28; end: 100597cb7; -[SIGNavigationBarButtonItem forEachObserver:] */

/* WARNING: Possible PIC construction at 0x000100597c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100597c94) */

void FUN_100597c28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x000107c40808(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c4eaf0(lVar1);
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100597cb8; end: 100597d07;  */

void FUN_100597cb8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_112613318);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4e4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100597d08; end: 100597dd7; -[SIGNavigationBarButton navigationBarButtonItem:didChangeLongPressAction:] */

/* WARNING: Possible PIC construction at 0x000100597d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100597dac) */
/* WARNING: Removing unreachable block (ram,0x000100597d7c) */
/* WARNING: Removing unreachable block (ram,0x000100597db8) */
/* WARNING: Removing unreachable block (ram,0x000100597d80) */
/* WARNING: Removing unreachable block (ram,0x000100597dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100597d08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar2 = (long)_DAT_11279500c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x000107c4c0ac(*(undefined8 *)(param_1 + _DAT_112794fc4));
    func_0x000107c61180();
  }
  else {
    func_0x000107c54514(lVar1,param_2,0);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100597dd8; end: 100597ddf; -[SIGNavigationBarButtonItem longPressAction] */

undefined8 FUN_100597dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 100597de0; end: 100597e5b; -[SIGFooterItem initWithItemConfig:] */

undefined1 * FUN_100597de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270b4c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = 0x3ff0000000000000;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100597e5c; end: 100597e93; -[SCSwipeViewContainerViewController setFooterItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100597e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b2c);
  *(undefined8 *)(param_1 + _DAT_112776b2c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100597e94; end: 100597fa7; -[SCActiveUserNGSNavigationRouter _scheduleMapTabTooltipObservation] */

void FUN_100597e94(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126aeec0;
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126bf070;
  func_0x000107c4d514(PTR_PTR_1126bf070);
  func_0x000107c61180();
  func_0x000107c4c280(puVar3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e2d4(puVar1);
  func_0x000107c611b0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100597fa8; end: 100597faf; +[SCAttributedMapTask navigationItemBadgeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100597fa8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b568) = 10;
  *(undefined8 *)(lVar1 + _DAT_11309b570) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b578) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b580) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100597fb0; end: 10059801b; -[SCTabBarContainerBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100597fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100597ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100597fe4) */
/* WARNING: Removing unreachable block (ram,0x000100597fcc) */
/* WARNING: Removing unreachable block (ram,0x000100597ffc) */

void FUN_100597fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}


