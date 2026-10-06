/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e8778c; end: 104e877bb; -[SCPostRegContactPermissionRequestDefaultLogger .cxx_destruct] */

void FUN_104e8778c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e877bc; end: 104e8785f; -[SCUserContactPermissionRequestLogger initWithGrapheneRegistry:contactPermissionEventsLogger:] */

undefined1 *
FUN_104e877bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4a08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e87860; end: 104e87873; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewDidAppear] */

void FUN_104e87860(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportMetricsWithDimension_valu_1125818e0,
             &PTR____CFConstantStringClassReference_110daedd8,
             &PTR____CFConstantStringClassReference_110db6d98);
  return;
}



/* Entry: 104e87874; end: 104e87887; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewConfirmationPromptDisplayed] */

void FUN_104e87874(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportMetricsWithDimension_valu_1125818e0,
             &PTR____CFConstantStringClassReference_110daedd8,
             &PTR____CFConstantStringClassReference_110db86d8);
  return;
}



/* Entry: 104e87888; end: 104e8788b; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewConfirmationPromptSkipContactSync] */

void FUN_104e87888(void)

{
  return;
}



/* Entry: 104e8788c; end: 104e8788f; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewConfirmationPromptFindFriends] */

void FUN_104e8788c(void)

{
  return;
}



/* Entry: 104e87890; end: 104e8793b; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewPermissionGrantedWithIsDeviceLevel:] */

/* WARNING: Possible PIC construction at 0x000104e87904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e87908) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104e87890(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3a80();
  _objc_release(uVar1);
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db86b8;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8698;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportMetricsWithDimension_valu_1125818e0,ppuVar2,
             &PTR____CFConstantStringClassReference_110db86f8);
  return;
}



/* Entry: 104e8793c; end: 104e879e7; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewPermissionDeniedWithIsDeviceLevel:] */

/* WARNING: Possible PIC construction at 0x000104e879b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e879b4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104e8793c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3a60();
  _objc_release(uVar1);
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db86b8;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8698;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportMetricsWithDimension_valu_1125818e0,ppuVar2,
             &PTR____CFConstantStringClassReference_110db8718);
  return;
}



/* Entry: 104e879e8; end: 104e87a1b; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewTapContinueButton] */

void FUN_104e879e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e87a1c; end: 104e87a1f; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewInterrupted] */

void FUN_104e87a1c(void)

{
  return;
}



/* Entry: 104e87a20; end: 104e87a5b; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewGoToSettings] */

void FUN_104e87a20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e87a5c; end: 104e87a97; -[SCUserContactPermissionRequestLogger contactPermissionRequestViewCancelGoToSettings] */

void FUN_104e87a5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e87a98; end: 104e87b77; -[SCUserContactPermissionRequestLogger _reportMetricsWithDimension:value:] */

void FUN_104e87a98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b17f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf4a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb94e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  func_0x00010bfec2a0(lVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e87b78; end: 104e87bb3; -[SCUserContactPermissionRequestLogger .cxx_destruct] */

void FUN_104e87b78(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e87bb4; end: 104e87d6f; -[SCContactPermissionRequestUIRouteActions initWithUIContainer:contactPermissionInfoProvider:contactPermissionManager:contactPermissionRequestLogger:applicationLifecycleEvents:contactPermissionViewControllerGenerator:contactPermissionDialogPresenterGenerator:requestSource:circumstanceEngine:] */

undefined1 *
FUN_104e87bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e4a10;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e87d70; end: 104e87dff; -[SCContactPermissionRequestUIRouteActions showContactPermissionRequestPageWithDelegate:isExplicitUserLevelPermissionDialogNeeded:isConfirmSkipDialogNeeded:isGoToSystemSettingsDialogNeeded:] */

void FUN_104e87d70(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00010bdeb800();
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af160;
  _objc_opt_new(PTR_PTR_1126af160);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104e87e00; end: 104e87e6f; -[SCContactPermissionRequestUIRouteActions showContactPermissionDialogWithDelegate:isExplicitUserLevelPermissionDialogNeeded:isConfirmSkipDialogNeeded:isGoToSystemSettingsDialogNeeded:] */

void FUN_104e87e00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bdeb800();
  lVar2 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c10ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_present_1126205a0);
  return;
}



/* Entry: 104e87e70; end: 104e87f23; -[SCContactPermissionRequestUIRouteActions _createBusinessLogicWithDelegate:isExplicitUserLevelPermissionDialogNeeded:isConfirmSkipDialogNeeded:isGoToSystemSettingsDialogNeeded:] */

void FUN_104e87e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b17f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00a560();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e87f24; end: 104e87fb3; -[SCContactPermissionRequestUIRouteActions .cxx_destruct] */

void FUN_104e87f24(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104e87fb4; end: 104e880e7; -[SCContactPermissionRequestViewController initWithScreen:styleHelper:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104e87fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e4a18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112715340;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112715344;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c1c8b80();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112715348;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b20(puVar1);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_11271534c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e880e8; end: 104e880ef; -[SCContactPermissionRequestViewController cardTransitionShouldBeginWithView:touchLocation:] */

undefined8 FUN_104e880e8(void)

{
  return 1;
}



/* Entry: 104e880f0; end: 104e880f3; -[SCContactPermissionRequestViewController cardToExpandTransition] */

void FUN_104e880f0(void)

{
  return;
}



/* Entry: 104e880f4; end: 104e88147; -[SCContactPermissionRequestViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e880f4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 104e88148; end: 104e881f3; -[SCContactPermissionRequestViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e88148(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112715340);
    puVar1 = PTR_PTR_1126b1800;
    func_0x00010c269340(PTR_PTR_1126b1800);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2,param_2,puVar1);
  }
  else {
    if (param_4 != 0) goto LAB_104e881e0;
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ec0(param_1);
    func_0x00010c14dc60(puVar1,param_2,param_1);
  }
  _objc_release(puVar1);
LAB_104e881e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e881f4; end: 104e88293; -[SCContactPermissionRequestViewController viewDidLoad] */

void FUN_104e881f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4a18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104e88294; end: 104e8833b; -[SCContactPermissionRequestViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e88294(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4a18;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11271533c) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e8833c; end: 104e8833f; -[SCContactPermissionRequestViewController preferredStatusBarStyle] */

undefined8 FUN_104e8833c(long param_1)

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



/* Entry: 104e88340; end: 104e883ef; -[SCContactPermissionRequestViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e88340(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112715340);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e883f0; end: 104e88437;  */

void FUN_104e883f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e88438; end: 104e8846f; -[SCContactPermissionRequestViewController _setViewModel:] */

void FUN_104e88438(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010c22fe20();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be050b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayUserLevelContactAccessDi_11255edc8)
    ;
    return;
  }
  return;
}



/* Entry: 104e88470; end: 104e884bb; -[SCContactPermissionRequestViewController _initSubviews] */

void FUN_104e88470(undefined8 param_1)

{
  func_0x00010be398c0();
  func_0x00010be39d40(param_1);
  func_0x00010be39900(param_1);
  func_0x00010be3a260(param_1);
  func_0x00010be3a900(param_1);
  func_0x00010be39cc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__installPullToDismiss_11256cd58);
  return;
}



/* Entry: 104e884bc; end: 104e8856b; -[SCContactPermissionRequestViewController _initContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e884bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_112715350;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112715344);
  func_0x00010bf68da0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 104e8856c; end: 104e88863; -[SCContactPermissionRequestViewController _initHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8856c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  long lStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar21 = (long)_DAT_112715354;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c219b60(uVar19,param_2,0);
  func_0x000105c65d1c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf5eee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(uVar19);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar21),param_2,
                      &PTR____CFConstantStringClassReference_110db8738);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf5eee0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf5eee0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf5eee0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf5eee0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar19);
  lVar22 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar22),param_2,*(undefined8 *)(param_1 + lVar21));
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar21);
  lStack_80 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar21);
  uStack_78 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(uVar4);
  lVar21 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104e88864;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_f0 = uVar2;
  uStack_e8 = uVar7;
  uStack_e0 = uVar19;
  uStack_d8 = uVar6;
  puStack_d0 = puVar1;
  uStack_c8 = uVar5;
  lStack_c0 = lVar10;
  uStack_b8 = uVar4;
  lStack_b0 = lVar3;
  uStack_a8 = uVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112715358;
  uVar19 = *(undefined8 *)(lVar21 + lVar3);
  *(undefined **)(lVar21 + lVar3) = puVar9;
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar21 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000105c65d34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar21 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar21 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  dVar23 = 15.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar21 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar21 + lVar3),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(lVar21 + lVar3),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(lVar21 + lVar3),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(lVar21 + lVar3),param_2,1);
  lVar22 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(lVar21 + lVar22),param_2,*(undefined8 *)(lVar21 + lVar3));
  puStack_140 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(lVar21 + lVar3);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar21 + _DAT_112715354);
  lStack_120 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar19;
  func_0x00010bf493a0(lVar10,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar21 + lVar3);
  lStack_130 = lVar10;
  lStack_118 = lVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar21 + lVar22);
  uStack_138 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar21 + lVar3);
  uStack_110 = uVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar21 + lVar22);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112715344;
  func_0x00010bf69860(*(undefined8 *)(lVar21 + lVar20));
  uVar19 = uVar6;
  func_0x00010bf493c0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar21 + lVar3);
  uStack_108 = uVar19;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar21 + lVar22);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar21 + lVar20));
  dVar23 = -dVar23;
  uVar2 = uVar8;
  func_0x00010bf493c0(dVar23,uVar8,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_118,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_140,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar19);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_138);
  _objc_release(lStack_130);
  _objc_release(uStack_128);
  lVar10 = lStack_120;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_104e88bd0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  uStack_1a0 = uVar7;
  uStack_198 = uVar6;
  uStack_190 = uVar5;
  uStack_188 = uVar19;
  uStack_180 = uVar4;
  lStack_178 = lVar20;
  puStack_170 = puVar1;
  uStack_168 = uVar11;
  uStack_160 = uVar8;
  uStack_158 = uVar2;
  ppuStack_150 = &puStack_a0;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110db8758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar9,param_2,0);
  func_0x00010c21e900(puVar9,param_2,1);
  lVar3 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar3),param_2,puVar9);
  puStack_1d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar10 + _DAT_112715358);
  puStack_1c8 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112715344;
  uStack_1d0 = uVar19;
  func_0x00010bf69780(*(undefined8 *)(lVar10 + lVar21));
  func_0x00010bf493c0(-dVar23,puVar1,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  puStack_1c0 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar10 + lVar3);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493a0(puVar12,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar9;
  puStack_1b8 = puVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar10 + _DAT_11271535c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69780(*(undefined8 *)(lVar10 + lVar21));
  puVar15 = puVar14;
  func_0x00010bf493c0(puVar14,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = puVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1c0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d8,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar2);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar19);
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release(uStack_1d0);
  _objc_release(puStack_1c8);
  puVar17 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_104e88e3c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = PTR_PTR_1126af270;
  puStack_240 = puVar14;
  puStack_238 = puVar13;
  uStack_230 = uVar19;
  puStack_228 = puVar12;
  uStack_220 = uVar2;
  puStack_218 = puVar1;
  puStack_210 = puVar15;
  lStack_208 = lVar21;
  puStack_200 = puVar16;
  puStack_1f8 = puVar9;
  ppuStack_1f0 = &ppuStack_150;
  _objc_opt_new();
  lVar10 = (long)_DAT_11271535c;
  uVar19 = *(undefined8 *)(puVar17 + lVar10);
  *(undefined **)(puVar17 + lVar10) = puVar18;
  _objc_release(uVar19);
  func_0x00010c1cfce0(*(undefined8 *)(puVar17 + lVar10),param_2,0);
  uStack_258 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_250 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_250,&uStack_258,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_280 = puVar12;
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(puVar17 + lVar10),param_2,puVar12);
  func_0x00010c162900(*(undefined8 *)(puVar17 + lVar10),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar17 + lVar10),param_2,1);
  dVar23 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(puVar17 + lVar10),param_2,puVar1);
  _objc_release(puVar1);
  uVar19 = *(undefined8 *)(puVar17 + lVar10);
  func_0x00010c160fc0(uVar19,param_2,&PTR____CFConstantStringClassReference_110db8778);
  func_0x000105c65d4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(puVar17 + lVar10),param_2,uVar19);
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar17 + lVar10),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar17 + lVar10),param_2,puVar1);
  _objc_release(puVar1);
  uVar19 = *(undefined8 *)(puVar17 + lVar10);
  func_0x000105c65e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar19,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(puVar17 + lVar10),param_2,puVar17);
  func_0x00010c219b60(*(undefined8 *)(puVar17 + lVar10),param_2,0);
  lVar21 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(puVar17 + lVar21),param_2,*(undefined8 *)(puVar17 + lVar10));
  puStack_2a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(puVar17 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(puVar17 + lVar21);
  uStack_288 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_290 = uVar19;
  func_0x00010bf493a0(uVar2,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar17 + lVar10);
  uStack_298 = uVar2;
  uStack_278 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar17 + lVar21);
  uStack_2a8 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112715344;
  func_0x00010bf69fa0(*(undefined8 *)(puVar17 + lVar3));
  dVar23 = -dVar23;
  func_0x00010bf493c0(dVar23,uVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar17 + lVar10);
  uStack_270 = uVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar17 + lVar21);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar17 + lVar3));
  uVar19 = uVar6;
  func_0x00010bf493c0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar17 + lVar10);
  uStack_268 = uVar19;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar17 + lVar21);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar17 + lVar3));
  dVar23 = -dVar23;
  uVar2 = uVar8;
  func_0x00010bf493c0(dVar23,uVar8,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_260 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_278,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2a0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar19);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_2a8);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  puVar9 = puStack_280;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_104e89258;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR_PTR_1126aec40;
  uStack_300 = uVar19;
  uStack_2f8 = uVar4;
  lStack_2f0 = lVar3;
  puStack_2e8 = puVar1;
  uStack_2e0 = uVar11;
  uStack_2d8 = uVar8;
  uStack_2d0 = uVar2;
  uStack_2c8 = uVar7;
  ppuStack_2c0 = &ppuStack_1f0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112715360;
  uVar19 = *(undefined8 *)(puVar9 + lVar3);
  *(undefined **)(puVar9 + lVar3) = puVar12;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(puVar9 + lVar3);
  func_0x00010befbd60(uVar19,param_2,puVar9,PTR_s__continueButtonTapped_112557b90,0x40);
  uVar2 = *(undefined8 *)(puVar9 + lVar3);
  func_0x000105c65e3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar19,0);
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(puVar9 + lVar3),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar9 + lVar3),param_2,
                      &PTR____CFConstantStringClassReference_110dae558);
  func_0x00010c21e900(*(undefined8 *)(puVar9 + lVar3),param_2,1);
  lVar22 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(puVar9 + lVar22),param_2,*(undefined8 *)(puVar9 + lVar3));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar21 = *(long *)(puVar9 + lVar3);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar9 + lVar22);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar21;
  func_0x00010bf493a0(lVar21,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar9 + lVar3);
  lStack_318 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar9 + lVar22);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(puVar9 + _DAT_112715344));
  uVar19 = uVar4;
  func_0x00010bf493c0(-dVar23,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_310 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_318,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar19);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar10);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar21 + _DAT_112715348);
  uVar2 = *(undefined8 *)(lVar21 + _DAT_112715350);
  func_0x00010c261580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4,param_2,uVar19);
  _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e88864; end: 104e88bcf; -[SCContactPermissionRequestViewController _initTopLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e88864(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar19 = (long)_DAT_112715358;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000105c65d34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  dVar22 = 15.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar19),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar19),param_2,1);
  lVar20 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar19));
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_112715354);
  lStack_90 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar18;
  func_0x00010bf493a0(lVar2,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  lStack_a0 = lVar2;
  lStack_88 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  uStack_a8 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112715344;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar21));
  uVar18 = uVar5;
  func_0x00010bf493c0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar18;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar21));
  dVar22 = -dVar22;
  uVar13 = uVar7;
  func_0x00010bf493c0(dVar22,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(uStack_98);
  lVar2 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_104e88bd0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  uStack_110 = uVar6;
  uStack_108 = uVar5;
  uStack_100 = uVar3;
  uStack_f8 = uVar18;
  uStack_f0 = uVar4;
  lStack_e8 = lVar21;
  puStack_e0 = puVar1;
  uStack_d8 = uVar8;
  uStack_d0 = uVar7;
  uStack_c8 = uVar13;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110db8758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar9,param_2,0);
  func_0x00010c21e900(puVar9,param_2,1);
  lVar20 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar20),param_2,puVar9);
  puStack_148 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + _DAT_112715358);
  puStack_138 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112715344;
  uStack_140 = uVar18;
  func_0x00010bf69780(*(undefined8 *)(lVar2 + lVar19));
  func_0x00010bf493c0(-dVar22,puVar1,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  puStack_130 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  puStack_128 = puVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + _DAT_11271535c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69780(*(undefined8 *)(lVar2 + lVar19));
  puVar14 = puVar12;
  func_0x00010bf493c0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_130,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_148,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar18);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(uStack_140);
  _objc_release(puStack_138);
  puVar16 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_104e88e3c;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR_PTR_1126af270;
  puStack_1b0 = puVar12;
  puStack_1a8 = puVar11;
  uStack_1a0 = uVar18;
  puStack_198 = puVar10;
  uStack_190 = uVar13;
  puStack_188 = puVar1;
  puStack_180 = puVar14;
  lStack_178 = lVar19;
  puStack_170 = puVar15;
  puStack_168 = puVar9;
  ppuStack_160 = &puStack_c0;
  _objc_opt_new();
  lVar2 = (long)_DAT_11271535c;
  uVar18 = *(undefined8 *)(puVar16 + lVar2);
  *(undefined **)(puVar16 + lVar2) = puVar17;
  _objc_release(uVar18);
  func_0x00010c1cfce0(*(undefined8 *)(puVar16 + lVar2),param_2,0);
  uStack_1c8 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1c0 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1c0,&uStack_1c8,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar10;
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(puVar16 + lVar2),param_2,puVar10);
  func_0x00010c162900(*(undefined8 *)(puVar16 + lVar2),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar16 + lVar2),param_2,1);
  dVar22 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(puVar16 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(puVar16 + lVar2);
  func_0x00010c160fc0(uVar18,param_2,&PTR____CFConstantStringClassReference_110db8778);
  func_0x000105c65d4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(puVar16 + lVar2),param_2,uVar18);
  _objc_release(uVar18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar16 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar16 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(puVar16 + lVar2);
  func_0x000105c65e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar18,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(puVar16 + lVar2),param_2,puVar16);
  func_0x00010c219b60(*(undefined8 *)(puVar16 + lVar2),param_2,0);
  lVar19 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(puVar16 + lVar19),param_2,*(undefined8 *)(puVar16 + lVar2));
  puStack_210 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar13 = *(undefined8 *)(puVar16 + lVar2);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar16 + lVar19);
  uStack_1f8 = uVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar18;
  func_0x00010bf493a0(uVar13,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar16 + lVar2);
  uStack_208 = uVar13;
  uStack_1e8 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar16 + lVar19);
  uStack_218 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112715344;
  func_0x00010bf69fa0(*(undefined8 *)(puVar16 + lVar20));
  dVar22 = -dVar22;
  func_0x00010bf493c0(dVar22,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar16 + lVar2);
  uStack_1e0 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar16 + lVar19);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar20));
  uVar18 = uVar5;
  func_0x00010bf493c0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar16 + lVar2);
  uStack_1d8 = uVar18;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar16 + lVar19);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar20));
  dVar22 = -dVar22;
  uVar13 = uVar7;
  func_0x00010bf493c0(dVar22,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1d0 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1e8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_210,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uStack_218);
  _objc_release(uStack_208);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  puVar9 = puStack_1f0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_104e89258;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aec40;
  uStack_270 = uVar18;
  uStack_268 = uVar4;
  lStack_260 = lVar20;
  puStack_258 = puVar1;
  uStack_250 = uVar8;
  uStack_248 = uVar7;
  uStack_240 = uVar13;
  uStack_238 = uVar6;
  ppuStack_230 = &ppuStack_160;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112715360;
  uVar18 = *(undefined8 *)(puVar9 + lVar20);
  *(undefined **)(puVar9 + lVar20) = puVar10;
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(puVar9 + lVar20);
  func_0x00010befbd60(uVar18,param_2,puVar9,PTR_s__continueButtonTapped_112557b90,0x40);
  uVar13 = *(undefined8 *)(puVar9 + lVar20);
  func_0x000105c65e3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar13,param_2,uVar18,0);
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(puVar9 + lVar20),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar9 + lVar20),param_2,
                      &PTR____CFConstantStringClassReference_110dae558);
  func_0x00010c21e900(*(undefined8 *)(puVar9 + lVar20),param_2,1);
  lVar21 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(puVar9 + lVar21),param_2,*(undefined8 *)(puVar9 + lVar20));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar19 = *(long *)(puVar9 + lVar20);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar9 + lVar21);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar19;
  func_0x00010bf493a0(lVar19,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar9 + lVar20);
  lStack_288 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar9 + lVar21);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(puVar9 + _DAT_112715344));
  uVar18 = uVar4;
  func_0x00010bf493c0(-dVar22,uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_280 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_288,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar18);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar19 + _DAT_112715348);
  uVar13 = *(undefined8 *)(lVar19 + _DAT_112715350);
  func_0x00010c261580(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar13;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4,param_2,uVar18);
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 104e88bd0; end: 104e88e3b; -[SCContactPermissionRequestViewController _initGiraffe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e88bd0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110db8758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_3,0);
  func_0x00010c21e900(puVar1,param_3,1);
  lVar19 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar19),param_3,puVar1);
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112715358);
  puStack_88 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112715344;
  uStack_90 = uVar3;
  func_0x00010bf69780(*(undefined8 *)(param_2 + lVar18));
  func_0x00010bf493c0(-param_1,puVar2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_80 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + _DAT_11271535c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69780(*(undefined8 *)(param_2 + lVar18));
  puVar8 = puVar6;
  func_0x00010bf493c0(puVar6,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98,param_3,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uStack_90);
  _objc_release(puStack_88);
  puVar10 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_104e88e3c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR_PTR_1126af270;
  puStack_100 = puVar6;
  puStack_f8 = puVar5;
  uStack_f0 = uVar3;
  puStack_e8 = puVar4;
  uStack_e0 = uVar7;
  puStack_d8 = puVar2;
  puStack_d0 = puVar8;
  lStack_c8 = lVar18;
  puStack_c0 = puVar9;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar18 = (long)_DAT_11271535c;
  uVar3 = *(undefined8 *)(puVar10 + lVar18);
  *(undefined **)(puVar10 + lVar18) = puVar11;
  _objc_release(uVar3);
  func_0x00010c1cfce0(*(undefined8 *)(puVar10 + lVar18),param_3,0);
  uStack_118 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xc3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_110 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_110,&uStack_118,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar4;
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(puVar10 + lVar18),param_3,puVar4);
  func_0x00010c162900(*(undefined8 *)(puVar10 + lVar18),param_3,0);
  func_0x00010c213040(*(undefined8 *)(puVar10 + lVar18),param_3,1);
  dVar22 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(puVar10 + lVar18),param_3,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar10 + lVar18);
  func_0x00010c160fc0(uVar3,param_3,&PTR____CFConstantStringClassReference_110db8778);
  func_0x000105c65d4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(puVar10 + lVar18),param_3,uVar3);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar10 + lVar18),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar10 + lVar18),param_3,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar10 + lVar18);
  func_0x000105c65e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar3,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(puVar10 + lVar18),param_3,puVar10);
  func_0x00010c219b60(*(undefined8 *)(puVar10 + lVar18),param_3,0);
  lVar19 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(puVar10 + lVar19),param_3,*(undefined8 *)(puVar10 + lVar18));
  puStack_160 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(puVar10 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar10 + lVar19);
  uStack_148 = uVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_150 = uVar3;
  func_0x00010bf493a0(uVar7,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar10 + lVar18);
  uStack_158 = uVar7;
  uStack_138 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar10 + lVar19);
  uStack_168 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112715344;
  func_0x00010bf69fa0(*(undefined8 *)(puVar10 + lVar20));
  dVar22 = -dVar22;
  func_0x00010bf493c0(dVar22,uVar12,param_3,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar10 + lVar18);
  uStack_130 = uVar12;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar10 + lVar19);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar10 + lVar20));
  uVar3 = uVar14;
  func_0x00010bf493c0(uVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar10 + lVar18);
  uStack_128 = uVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar10 + lVar19);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar10 + lVar20));
  dVar22 = -dVar22;
  uVar7 = uVar16;
  func_0x00010bf493c0(dVar22,uVar16,param_3,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_138,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_160,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uStack_168);
  _objc_release(uStack_158);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  puVar2 = puStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_104e89258;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126aec40;
  uStack_1c0 = uVar3;
  uStack_1b8 = uVar13;
  lStack_1b0 = lVar20;
  puStack_1a8 = puVar1;
  uStack_1a0 = uVar17;
  uStack_198 = uVar16;
  uStack_190 = uVar7;
  uStack_188 = uVar15;
  ppuStack_180 = &puStack_b0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112715360;
  uVar3 = *(undefined8 *)(puVar2 + lVar20);
  *(undefined **)(puVar2 + lVar20) = puVar4;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + lVar20);
  func_0x00010befbd60(uVar3,param_3,puVar2,PTR_s__continueButtonTapped_112557b90,0x40);
  uVar7 = *(undefined8 *)(puVar2 + lVar20);
  func_0x000105c65e3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar7,param_3,uVar3,0);
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar20),param_3,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar2 + lVar20),param_3,
                      &PTR____CFConstantStringClassReference_110dae558);
  func_0x00010c21e900(*(undefined8 *)(puVar2 + lVar20),param_3,1);
  lVar21 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar21),param_3,*(undefined8 *)(puVar2 + lVar20));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar19 = *(long *)(puVar2 + lVar20);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar2 + lVar21);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar19;
  func_0x00010bf493a0(lVar19,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar2 + lVar20);
  lStack_1d8 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + lVar21);
  func_0x00010bf1ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(puVar2 + _DAT_112715344));
  uVar3 = uVar13;
  func_0x00010bf493c0(-dVar22,uVar13,param_3,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1d0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_1d8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(lVar18);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(lVar19 + _DAT_112715348);
  uVar7 = *(undefined8 *)(lVar19 + _DAT_112715350);
  func_0x00010c261580(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar13,param_3,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 104e88e3c; end: 104e89257; -[SCContactPermissionRequestViewController _initPrivacyPolicyLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e88e3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  lVar12 = (long)_DAT_11271535c;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar12),param_2,0);
  uStack_78 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar3;
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(param_1 + lVar12),param_2,puVar3);
  func_0x00010c162900(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar12),param_2,1);
  dVar16 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar12),param_2,puVar1);
  _objc_release(puVar1);
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c160fc0(uVar11,param_2,&PTR____CFConstantStringClassReference_110db8778);
  func_0x000105c65d4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar12),param_2,uVar11);
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12),param_2,puVar1);
  _objc_release(puVar1);
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  func_0x000105c65e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar11,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12),param_2,param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  lVar13 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar13),param_2,*(undefined8 *)(param_1 + lVar12));
  puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_a8 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar11;
  func_0x00010bf493a0(uVar4,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_b8 = uVar4;
  uStack_98 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_c8 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112715344;
  func_0x00010bf69fa0(*(undefined8 *)(param_1 + lVar14));
  dVar16 = -dVar16;
  func_0x00010bf493c0(dVar16,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  uStack_90 = uVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar14));
  uVar11 = uVar7;
  func_0x00010bf493c0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  uStack_88 = uVar11;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar14));
  dVar16 = -dVar16;
  uVar4 = uVar9;
  func_0x00010bf493c0(dVar16,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  puVar2 = puStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_104e89258;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aec40;
  uStack_120 = uVar11;
  uStack_118 = uVar6;
  lStack_110 = lVar14;
  puStack_108 = puVar1;
  uStack_100 = uVar10;
  uStack_f8 = uVar9;
  uStack_f0 = uVar4;
  uStack_e8 = uVar8;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112715360;
  uVar11 = *(undefined8 *)(puVar2 + lVar14);
  *(undefined **)(puVar2 + lVar14) = puVar3;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(puVar2 + lVar14);
  func_0x00010befbd60(uVar11,param_2,puVar2,PTR_s__continueButtonTapped_112557b90,0x40);
  uVar4 = *(undefined8 *)(puVar2 + lVar14);
  func_0x000105c65e3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4,param_2,uVar11,0);
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar14),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar2 + lVar14),param_2,
                      &PTR____CFConstantStringClassReference_110dae558);
  func_0x00010c21e900(*(undefined8 *)(puVar2 + lVar14),param_2,1);
  lVar15 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar15),param_2,*(undefined8 *)(puVar2 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = *(long *)(puVar2 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar2 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar13;
  func_0x00010bf493a0(lVar13,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar2 + lVar14);
  lStack_138 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar2 + lVar15);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(puVar2 + _DAT_112715344));
  uVar11 = uVar6;
  func_0x00010bf493c0(-dVar16,uVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_138,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(lVar13 + _DAT_112715348);
  uVar4 = *(undefined8 *)(lVar13 + _DAT_112715350);
  func_0x00010c261580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar6,param_2,uVar11);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104e89258; end: 104e89473; -[SCContactPermissionRequestViewController _initContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e89258(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112715360;
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  *(undefined **)(param_2 + lVar9) = puVar1;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010befbd60(uVar7,param_3,param_2,PTR_s__continueButtonTapped_112557b90,0x40);
  uVar8 = *(undefined8 *)(param_2 + lVar9);
  func_0x000105c65e3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar8,param_3,uVar7,0);
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar9),param_3,0);
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar9),param_3,
                      &PTR____CFConstantStringClassReference_110dae558);
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar9),param_3,1);
  lVar10 = (long)_DAT_112715350;
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar10),param_3,*(undefined8 *)(param_2 + lVar9));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_2 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0(lVar2,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar9);
  lStack_68 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(param_2 + _DAT_112715344));
  uVar7 = uVar4;
  func_0x00010bf493c0(-param_1,uVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112715348);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_112715350);
  func_0x00010c261580(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4,param_3,uVar7);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 104e89474; end: 104e894eb; -[SCContactPermissionRequestViewController _installPullToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e89474(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112715348);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112715350);
  func_0x00010c261580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e894ec; end: 104e89537; -[SCContactPermissionRequestViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e894ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715340);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010c1361e0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e89538; end: 104e89583; -[SCContactPermissionRequestViewController _userLevelContactPermissionGranted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e89538(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715340);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bfcdb80(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e89584; end: 104e895cf; -[SCContactPermissionRequestViewController _userLevelContactPermissionDenied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e89584(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715340);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bf6d8c0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e895d0; end: 104e89643; -[SCContactPermissionRequestViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_104e895d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010bebbc40(param_1,param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e89644; end: 104e896d3; -[SCContactPermissionRequestViewController _showViewController:animated:] */

void FUN_104e89644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c10eda0(param_1,param_2,param_3,param_4,0);
  }
  else {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e896d4; end: 104e896e3; -[SCContactPermissionRequestViewController dismissInformationSettingsView:] */

void FUN_104e896d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104e896e4; end: 104e8973f; -[SCContactPermissionRequestViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e896e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715340);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010c269340(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e89740; end: 104e89837; -[SCContactPermissionRequestViewController _displayUserLevelContactAccessDialog] */

void FUN_104e89740(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000105c65e24();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e89838;
  puStack_48 = &UNK_110849200;
  _objc_copyWeak(auStack_40,auStack_38);
  puVar2 = puVar1;
  FUN_104e870a0(puVar1,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e89838; end: 104e89873;  */

void FUN_104e89838(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bee6e00();
  }
  else {
    func_0x00010bee6e20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e89874; end: 104e89923; -[SCContactPermissionRequestViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e89874(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271534c,0);
  _objc_storeStrong(param_1 + _DAT_112715348,0);
  _objc_storeStrong(param_1 + _DAT_112715360,0);
  _objc_storeStrong(param_1 + _DAT_11271535c,0);
  _objc_storeStrong(param_1 + _DAT_112715358,0);
  _objc_storeStrong(param_1 + _DAT_112715354,0);
  _objc_storeStrong(param_1 + _DAT_112715350,0);
  _objc_storeStrong(param_1 + _DAT_112715344,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715340,0);
  return;
}



/* Entry: 104e89924; end: 104e899ef; -[SCDefaultContactPermissionRequestDialogPresenter initWithScreen:uiContainer:circumstanceEngine:] */

undefined1 *
FUN_104e89924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4a20;
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



/* Entry: 104e899f0; end: 104e89a3b; -[SCDefaultContactPermissionRequestDialogPresenter present] */

void FUN_104e899f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bec1580();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010c1361e0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e89a3c; end: 104e89ae3; -[SCDefaultContactPermissionRequestDialogPresenter _startRenderingViewModels] */

void FUN_104e89a3c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e89ae4; end: 104e89b2b;  */

void FUN_104e89ae4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e89b2c; end: 104e89b83; -[SCDefaultContactPermissionRequestDialogPresenter _setViewModel:] */

void FUN_104e89b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c22fe20();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c22f780();
    if ((int)uVar1 != 0) {
      func_0x00010be04360(param_1);
    }
  }
  else {
    func_0x00010be050a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e89b84; end: 104e89c73; -[SCDefaultContactPermissionRequestDialogPresenter _displayUserLevelContactAccessDialog] */

void FUN_104e89b84(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000105c65e24();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e89c74;
  puStack_48 = &UNK_110849200;
  _objc_copyWeak(auStack_40,auStack_38);
  puVar2 = puVar1;
  FUN_104e870a0(puVar1,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7af80(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e89c74; end: 104e89caf;  */

void FUN_104e89c74(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bee6e00();
  }
  else {
    func_0x00010bee6e20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e89cb0; end: 104e89ee3; -[SCDefaultContactPermissionRequestDialogPresenter _displayContactsEnableDialog] */

void FUN_104e89cb0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8798,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dace78;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dace78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar4 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf1f440();
  if ((uVar4 & 1) == 0) {
    func_0x000105c65ddc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105c65df4();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x000105c65dc4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  func_0x00010be7af80(param_1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
  _objc_release(puVar3);
  uVar8 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 8);
  puVar2 = PTR_PTR_1126b1800;
  func_0x00010bf8fb40(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e89ee4; end: 104e89fbf;  */

void FUN_104e89ee4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bf8fb40(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e89fc0; end: 104e89fc7; -[SCDefaultContactPermissionRequestDialogPresenter _presentDialog:] */

void FUN_104e89fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_attachUI__1125a0c08);
  return;
}



/* Entry: 104e89fc8; end: 104e8a00b; -[SCDefaultContactPermissionRequestDialogPresenter _userLevelContactPermissionGranted] */

void FUN_104e89fc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bfcdb80(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8a00c; end: 104e8a04f; -[SCDefaultContactPermissionRequestDialogPresenter _userLevelContactPermissionDenied] */

void FUN_104e8a00c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bf6d8c0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8a050; end: 104e8a08b; -[SCDefaultContactPermissionRequestDialogPresenter .cxx_destruct] */

void FUN_104e8a050(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e8a08c; end: 104e8a0db; -[SCIOS18ContactPermissionGuideView init] */

undefined1 * FUN_104e8a08c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4a28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e8a0dc; end: 104e8a0ef; -[SCIOS18ContactPermissionGuideView intrinsicContentSize] */

undefined1  [16] FUN_104e8a0dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4081100000000000;
  auVar1._0_8_ = 0x4070400000000000;
  return auVar1;
}



/* Entry: 104e8a0f0; end: 104e8a0ff; -[SCIOS18ContactPermissionGuideView setContactsImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8a0f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112715370),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 104e8a100; end: 104e8a10f; -[SCIOS18ContactPermissionGuideView setPointerImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8a100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112715374),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 104e8a110; end: 104e8b367; -[SCIOS18ContactPermissionGuideView _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8a110(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined8 uVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined *puVar60;
  undefined8 uVar61;
  undefined *puVar62;
  undefined8 uVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined8 uVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined8 uVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined8 uVar72;
  undefined *puVar73;
  undefined *puVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined *puVar78;
  undefined *puVar79;
  undefined *puVar80;
  undefined *puVar81;
  undefined *puVar82;
  undefined *puVar83;
  undefined *puVar84;
  undefined *puVar85;
  undefined *puVar86;
  undefined *puVar87;
  undefined *puVar88;
  undefined8 uVar89;
  undefined *puVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined *puVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined *puVar98;
  long lVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  double dVar107;
  double dVar108;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  
  lVar99 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c17d4c0(param_5,param_6,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar103 = (long)_DAT_112715378;
  uVar100 = *(undefined8 *)(param_5 + lVar103);
  *(undefined **)(param_5 + lVar103) = puVar1;
  _objc_release(uVar100);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c380(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar103));
  _objc_release(puVar1);
  uVar100 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c08c0e0(uVar100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar100);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar100 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c08c0e0(uVar100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar100);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar103));
  func_0x00010befbb60(param_5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar1);
  func_0x00010c219b60(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar103));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar102 = (long)_DAT_112715370;
  uVar100 = *(undefined8 *)(param_5 + lVar102);
  *(undefined **)(param_5 + lVar102) = puVar1;
  _objc_release(uVar100);
  func_0x00010c182220(*(undefined8 *)(param_5 + lVar102));
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar102));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar103));
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar103));
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  puVar1 = puVar4;
  func_0x000105c65efc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar1);
  func_0x00010c1cfce0(puVar4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f60(0x4038000000000000,*(undefined8 *)PTR__UIFontWeightBold_110345c30,
                      PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar4);
  _objc_release(puVar1);
  func_0x00010c213040(puVar4);
  func_0x00010c165e20(puVar4);
  func_0x00010c219b60(puVar4);
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar103));
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  lVar105 = (long)_DAT_11271537c;
  uVar100 = *(undefined8 *)(param_5 + lVar105);
  *(undefined **)(param_5 + lVar105) = puVar1;
  _objc_release(uVar100);
  uVar101 = *(undefined8 *)(param_5 + lVar105);
  func_0x000105c65f14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar101);
  _objc_release(uVar100);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar100 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010c271420(uVar100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar100);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c266e60(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar105));
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_5 + lVar105));
  uVar100 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010c08c0e0(uVar100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar100);
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar105));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar103));
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  puVar1 = puVar5;
  func_0x000105c65ecc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar5);
  _objc_release(puVar1);
  dVar107 = *(double *)PTR__UIFontWeightSemibold_110345c48;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f60(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c266e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar1);
  func_0x00010c213040(puVar5);
  func_0x00010c181cc0(0x3f800000,puVar5);
  func_0x00010c219b60(puVar5);
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar103));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar106 = (long)_DAT_112715374;
  uVar100 = *(undefined8 *)(param_5 + lVar106);
  *(undefined **)(param_5 + lVar106) = puVar1;
  _objc_release(uVar100);
  func_0x00010c182220(*(undefined8 *)(param_5 + lVar106));
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar106));
  func_0x00010befbb60(param_5);
  uVar100 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar101 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar100;
  func_0x00010bf493e0(0x3fb0e10e10e10e11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar101);
  _objc_release(uVar100);
  dVar108 = 5.65581687602019e-315;
  func_0x00010c1e3380(0x443b8000,uVar6);
  uVar100 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar100;
  func_0x00010bf49580(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar100);
  func_0x00010c1e3380(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = param_5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(param_5);
  func_0x00010c0699c0(param_5);
  lVar10 = lVar8;
  func_0x00010bf493e0(dVar107 / dVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar104 = param_5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar28;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010bf493e0(0x3fd47ae147ae147b);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_5 + lVar102);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_5 + lVar102);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_5 + lVar102);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar36;
  func_0x00010bf493e0(0x3ff3d70a3d70a3d7);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_5 + lVar102);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar39;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_5 + lVar102);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar42;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar45;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar47;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar50;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar53;
  func_0x00010bf493c0(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar56 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = uVar56;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = uVar59;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar62 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar64 = puVar62;
  func_0x00010bf493c0(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar65 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar66 = *(undefined8 *)(param_5 + lVar103);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar67 = puVar65;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar68 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar69 = *(undefined8 *)(param_5 + lVar102);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar70 = puVar68;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar71 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar72 = *(undefined8 *)(param_5 + lVar105);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar73 = puVar71;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar74 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar75 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar76 = puVar74;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar77 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar78 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar79 = puVar77;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar80 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar81 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar82 = puVar80;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar83 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar84 = puVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar85 = puVar83;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar86 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar87 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar88 = puVar86;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar89 = *(undefined8 *)(param_5 + lVar106);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar90 = puVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar91 = uVar89;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar92 = *(undefined8 *)(param_5 + lVar106);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar93 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar94 = uVar92;
  func_0x00010bf493c0(0xc044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar95 = *(undefined8 *)(param_5 + lVar106);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar101 = uVar95;
  func_0x00010bf49420(0x4061800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar96 = *(undefined8 *)(param_5 + lVar106);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar97 = *(undefined8 *)(param_5 + lVar106);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar100 = uVar96;
  func_0x00010bf493e0(0x3ff170a3d70a3d71);
  _objc_retainAutoreleasedReturnValue();
  puVar98 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar98);
  _objc_release(uVar100);
  _objc_release(uVar97);
  _objc_release(uVar96);
  _objc_release(uVar101);
  _objc_release(uVar95);
  _objc_release(uVar94);
  _objc_release(puVar93);
  _objc_release(uVar92);
  _objc_release(uVar91);
  _objc_release(puVar90);
  _objc_release(uVar89);
  _objc_release(puVar88);
  _objc_release(puVar87);
  _objc_release(puVar86);
  _objc_release(puVar85);
  _objc_release(puVar84);
  _objc_release(puVar83);
  _objc_release(puVar82);
  _objc_release(puVar81);
  _objc_release(puVar80);
  _objc_release(puVar79);
  _objc_release(puVar78);
  _objc_release(puVar77);
  _objc_release(puVar76);
  _objc_release(puVar75);
  _objc_release(puVar74);
  _objc_release(puVar73);
  _objc_release(uVar72);
  _objc_release(puVar71);
  _objc_release(puVar70);
  _objc_release(uVar69);
  _objc_release(puVar68);
  _objc_release(puVar67);
  _objc_release(uVar66);
  _objc_release(puVar65);
  _objc_release(puVar64);
  _objc_release(uVar63);
  _objc_release(puVar62);
  _objc_release(uVar61);
  _objc_release(puVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(puVar52);
  _objc_release(uVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(uVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(puVar34);
  _objc_release(uVar33);
  _objc_release(puVar32);
  _objc_release(uVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(lVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar104);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar99) {
    return;
  }
  ___stack_chk_fail();
  puStack_4b8 = PTR_PTR_1126e4a28;
  puStack_4c0 = puVar2;
  _objc_msgSendSuper2(&puStack_4c0,PTR_s_layoutSubviews_112600e60);
  lVar104 = (long)_DAT_112715378;
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + lVar104));
  dVar108 = param_3 * 0.18461538461538463;
  uVar100 = *(undefined8 *)(puVar2 + lVar104);
  func_0x00010c08c0e0(uVar100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar108);
  _objc_release(uVar100);
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + lVar104));
  uVar100 = *(undefined8 *)(puVar2 + lVar104);
  func_0x00010c08c0e0(uVar100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(param_3 * 0.046153846153846156);
  _objc_release(uVar100);
  lVar104 = (long)_DAT_11271537c;
  func_0x00010c08cdc0(*(undefined8 *)(puVar2 + lVar104));
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + lVar104));
  uVar100 = *(undefined8 *)(puVar2 + lVar104);
  func_0x00010c08c0e0(uVar100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4 * 0.25);
  _objc_release(uVar100);
  return;
}



/* Entry: 104e8b368; end: 104e8b473; -[SCIOS18ContactPermissionGuideView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8b368(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e4a28;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_112715378;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  dVar3 = param_3 * 0.18461538461538463;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar3);
  _objc_release(uVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(param_3 * 0.046153846153846156);
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11271537c;
  func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4 * 0.25);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e8b474; end: 104e8b4e3; -[SCIOS18ContactPermissionGuideView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8b474(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715380,0);
  _objc_storeStrong(param_1 + _DAT_11271537c,0);
  _objc_storeStrong(param_1 + _DAT_112715374,0);
  _objc_storeStrong(param_1 + _DAT_112715370,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715378,0);
  return;
}



/* Entry: 104e8b4e4; end: 104e8b5b7; -[SCPostRegContactPermissionRequestViewController initWithScreen:styleHelper:omitSkipButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104e8b4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e4a30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112715384;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112715388;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271538c) = param_5;
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e8b5b8; end: 104e8b6bf; -[SCPostRegContactPermissionRequestViewController viewDidLoad] */

void FUN_104e8b5b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4a30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(uVar2);
  func_0x00010beb0d80(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104e8b6c0; end: 104e8b6c7; -[SCPostRegContactPermissionRequestViewController loadScrollView] */

undefined8 FUN_104e8b6c0(void)

{
  return 0;
}



/* Entry: 104e8b6c8; end: 104e8b74b; -[SCPostRegContactPermissionRequestViewController _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8b6c8(long param_1)

{
  long lVar1;
  
  func_0x00010be39900();
  func_0x00010be39cc0(param_1);
  func_0x00010be3a240(param_1);
  func_0x00010be3a700(param_1);
  func_0x00010be3a880(param_1);
  if ((*(byte *)(param_1 + _DAT_11271538c) & 1) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be39f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initLegacySkipButton_11256c170);
  return;
}



/* Entry: 104e8b74c; end: 104e8b7fb; -[SCPostRegContactPermissionRequestViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8b74c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112715384);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e8b7fc; end: 104e8b843;  */

void FUN_104e8b7fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8b844; end: 104e8b89b; -[SCPostRegContactPermissionRequestViewController _setViewModel:] */

void FUN_104e8b844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c22fe20();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c22f4e0();
    if ((int)uVar1 != 0) {
      func_0x00010be04320(param_1);
    }
  }
  else {
    func_0x00010be050a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e8b89c; end: 104e8bb9b; -[SCPostRegContactPermissionRequestViewController _initContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8b89c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112715390;
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar3;
  _objc_release(uVar15);
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  func_0x000105c65e3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar18);
  _objc_release(uVar15);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar20));
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar9;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar18);
  _objc_release(lVar20);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(lVar21);
  _objc_release(lVar17);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar21 = (long)_DAT_112715394;
  uVar15 = *(undefined8 *)(lVar5 + lVar21);
  *(undefined **)(lVar5 + lVar21) = puVar3;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(lVar5 + lVar21));
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar21));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar5 + lVar21));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar21));
  _objc_release(puVar3);
  func_0x00010c213040(*(undefined8 *)(lVar5 + lVar21));
  uVar15 = *(undefined8 *)(lVar5 + lVar21);
  func_0x00010c160fc0(uVar15);
  func_0x000105c65d1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar5 + lVar21));
  _objc_release(uVar15);
  lVar4 = lVar5;
  func_0x00010bf4dce0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(lVar5 + lVar21));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = *(long *)(lVar5 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar14;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar5 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar5 + _DAT_112715398);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  dVar23 = -4.0;
  uVar15 = uVar9;
  func_0x00010bf493c0(0xc010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar5 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112715388;
  func_0x00010bf69860(*(undefined8 *)(lVar5 + lVar22));
  uVar18 = uVar12;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar5 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar5 + lVar22));
  uVar8 = uVar13;
  func_0x00010bf493c0(-dVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(lVar20);
  _objc_release(lVar21);
  _objc_release(uVar13);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar19 = (long)_DAT_112715398;
  uVar15 = *(undefined8 *)(lVar14 + lVar19);
  *(undefined **)(lVar14 + lVar19) = puVar3;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(lVar14 + lVar19));
  func_0x00010c21ad00(*(undefined8 *)(lVar14 + lVar19));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar14 + lVar19));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar14 + lVar19));
  _objc_release(puVar3);
  func_0x00010c213040(*(undefined8 *)(lVar14 + lVar19));
  lVar4 = lVar14;
  func_0x00010be3d580(lVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar14 + lVar19));
  _objc_release(lVar4);
  lVar4 = lVar14;
  func_0x00010bf4dce0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(lVar14 + lVar19));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(lVar14 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar14 + _DAT_11271539c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  dVar23 = -60.0;
  uVar15 = uVar9;
  func_0x00010bf493c0(0xc04e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar14 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010c29bf00(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112715388;
  func_0x00010bf69860(*(undefined8 *)(lVar14 + lVar21));
  uVar18 = uVar12;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar14 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar14 + lVar21));
  uVar8 = uVar13;
  func_0x00010bf493c0(-dVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(uVar13);
  _objc_release(uVar18);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e249f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e249f8,
                      &PTR____CFConstantStringClassReference_110e249d8,0);
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



/* Entry: 104e8bb9c; end: 104e8bf37; -[SCPostRegContactPermissionRequestViewController _initTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8bb9c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar20 = (long)_DAT_112715394;
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar3;
  _objc_release(uVar17);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar20));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar20));
  _objc_release(puVar3);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar20));
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c160fc0(uVar17);
  func_0x000105c65d1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar20));
  _objc_release(uVar17);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar5;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112715398);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = -4.0;
  uVar17 = uVar7;
  func_0x00010bf493c0(0xc010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112715388;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar21));
  uVar11 = uVar9;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar21));
  uVar14 = uVar12;
  func_0x00010bf493c0(-dVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar18);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar17);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar19 = (long)_DAT_112715398;
  uVar17 = *(undefined8 *)(lVar5 + lVar19);
  *(undefined **)(lVar5 + lVar19) = puVar3;
  _objc_release(uVar17);
  func_0x00010c1cfce0(*(undefined8 *)(lVar5 + lVar19));
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar19));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar5 + lVar19));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar19));
  _objc_release(puVar3);
  func_0x00010c213040(*(undefined8 *)(lVar5 + lVar19));
  lVar4 = lVar5;
  func_0x00010be3d580(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar5 + lVar19));
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf4dce0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(lVar5 + lVar19));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(lVar5 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar5 + _DAT_11271539c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = -60.0;
  uVar17 = uVar7;
  func_0x00010bf493c0(0xc04e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar5 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c29bf00(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112715388;
  func_0x00010bf69860(*(undefined8 *)(lVar5 + lVar20));
  uVar11 = uVar9;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar5 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar5 + lVar20));
  uVar14 = uVar12;
  func_0x00010bf493c0(-dVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(uVar9);
  _objc_release(uVar17);
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e249f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e249f8,
                      &PTR____CFConstantStringClassReference_110e249d8,0);
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



/* Entry: 104e8bf38; end: 104e8c253; -[SCPostRegContactPermissionRequestViewController _initSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8bf38(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar16 = (long)_DAT_112715398;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar3;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar16));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar3);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar16));
  lVar4 = param_1;
  func_0x00010be3d580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar16));
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271539c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  dVar18 = -60.0;
  uVar15 = uVar5;
  func_0x00010bf493c0(0xc04e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112715388;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar17));
  uVar9 = uVar7;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar17));
  uVar12 = uVar10;
  func_0x00010bf493c0(-dVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar16);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e249f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e249f8,
                      &PTR____CFConstantStringClassReference_110e249d8,0);
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



/* Entry: 104e8c254; end: 104e8c257; -[SCPostRegContactPermissionRequestViewController _interstitialText] */

void FUN_104e8c254(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e249f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e249f8,
                      &PTR____CFConstantStringClassReference_110e249d8,0);
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



/* Entry: 104e8c258; end: 104e8c6d3; -[SCPostRegContactPermissionRequestViewController _initPrivacyPolicyDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8c258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  lVar13 = (long)_DAT_1127153a0;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar13),param_2,0);
  uStack_78 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x86);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar3;
  _objc_release(puVar1);
  func_0x00010c1bdd60(*(undefined8 *)(param_1 + lVar13),param_2,puVar3);
  func_0x00010c162900(*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar13),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar13),param_2,puVar1);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c160fc0(uVar12,param_2,&PTR____CFConstantStringClassReference_110db8778);
  func_0x000105c65d4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar13),param_2,uVar12);
  _objc_release(uVar12);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar13),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar13),param_2,puVar1);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  func_0x000105c65e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(uVar12,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar13),param_2,param_1);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar13),param_2,1);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11271539c);
  uStack_a8 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar12;
  func_0x00010bf493c0(0x403e000000000000,uVar5,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_b8 = uVar5;
  uStack_98 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112715390);
  uStack_c0 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = -8.0;
  uStack_c8 = uVar12;
  func_0x00010bf49520(0xc020000000000000,uVar6,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_90 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112715388;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar15));
  uVar12 = uVar7;
  func_0x00010bf493c0(uVar7,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_88 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar15));
  uVar5 = uVar8;
  func_0x00010bf493c0(-dVar16,uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  puVar2 = puStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_104e8c6d4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  uStack_130 = uVar7;
  uStack_128 = uVar6;
  lStack_120 = lVar14;
  puStack_118 = puVar1;
  lStack_110 = lVar9;
  lStack_108 = lVar13;
  uStack_100 = uVar8;
  uStack_f8 = uVar12;
  uStack_f0 = uVar5;
  lStack_e8 = lVar4;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110db8758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar3,param_2,puVar1);
  lVar14 = (long)_DAT_11271539c;
  uVar12 = *(undefined8 *)(puVar2 + lVar14);
  *(undefined **)(puVar2 + lVar14) = puVar3;
  _objc_release(uVar12);
  _objc_release(puVar1);
  func_0x00010c182220(*(undefined8 *)(puVar2 + lVar14),param_2,1);
  puVar1 = puVar2;
  func_0x00010bf4dce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar14),param_2,0);
  puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = *(long *)(puVar2 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010bf493a0(lVar13,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar2 + lVar14);
  lStack_148 = lVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010c14d8a0(0x437a0000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_148,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_150,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar14 = lVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_104e8c924;
  puVar10 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puStack_190 = puVar11;
  lStack_188 = lVar4;
  puStack_180 = puVar3;
  puStack_178 = puVar1;
  puStack_170 = puVar2;
  lStack_168 = lVar13;
  ppuStack_160 = &puStack_e0;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127153a4;
  uVar12 = *(undefined8 *)(lVar14 + lVar13);
  *(undefined **)(lVar14 + lVar13) = puVar10;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar14 + lVar13);
  func_0x00010befbd60(uVar12,param_2,lVar14,PTR_s__skipButtonPressed_1125268c8,0x40);
  uVar5 = *(undefined8 *)(lVar14 + lVar13);
  func_0x000105c65e6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar5,param_2,uVar12,0);
  _objc_release(uVar12);
  func_0x00010c160fc0(*(undefined8 *)(lVar14 + lVar13),param_2,
                      &PTR____CFConstantStringClassReference_110db8818);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(*(undefined8 *)(lVar14 + lVar13),param_2,puVar1,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar14 + lVar13);
  func_0x00010c271420(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar12);
  _objc_release(puVar2);
  uVar12 = *(undefined8 *)(lVar14 + lVar13);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar12,param_2,puVar2);
  _objc_release(puVar2);
  lVar4 = lVar14;
  func_0x00010bf4dce0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_104e8cae8;
  puStack_1a0 = &UNK_1108471b0;
  lStack_198 = lVar14;
  func_0x00010c0bbfc0(*(undefined8 *)(lVar14 + lVar13),param_2,&puStack_1b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8c6d4; end: 104e8c923; -[SCPostRegContactPermissionRequestViewController _initGiraffe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8c6d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110db8758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  lVar10 = (long)_DAT_11271539c;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar7);
  _objc_release(puVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar10),param_2,1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10),param_2,0);
  puStack_80 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  lStack_78 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c14d8a0(0x437a0000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_80,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar10 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_104e8c924;
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puStack_c0 = puVar1;
  lStack_b8 = lVar5;
  lStack_b0 = lVar9;
  lStack_a8 = lVar3;
  lStack_a0 = param_1;
  lStack_98 = lVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127153a4;
  uVar7 = *(undefined8 *)(lVar10 + lVar9);
  *(undefined **)(lVar10 + lVar9) = puVar2;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(lVar10 + lVar9);
  func_0x00010befbd60(uVar7,param_2,lVar10,PTR_s__skipButtonPressed_1125268c8,0x40);
  uVar8 = *(undefined8 *)(lVar10 + lVar9);
  func_0x000105c65e6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar8,param_2,uVar7,0);
  _objc_release(uVar7);
  func_0x00010c160fc0(*(undefined8 *)(lVar10 + lVar9),param_2,
                      &PTR____CFConstantStringClassReference_110db8818);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(*(undefined8 *)(lVar10 + lVar9),param_2,puVar1,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar10 + lVar9);
  func_0x00010c271420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar7);
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(lVar10 + lVar9);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar7,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = lVar10;
  func_0x00010bf4dce0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104e8cae8;
  puStack_d0 = &UNK_1108471b0;
  lStack_c8 = lVar10;
  func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar9),param_2,&puStack_e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8c924; end: 104e8cae7; -[SCPostRegContactPermissionRequestViewController _initLegacySkipButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8c924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_1127153a4;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010befbd60(uVar4,param_2,param_1,PTR_s__skipButtonPressed_1125268c8,0x40);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x000105c65e6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar5,param_2,uVar4,0);
  _objc_release(uVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110db8818);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar6),param_2,puVar1,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e8cae8;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8cae8; end: 104e8ccbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8cae8(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69560(*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112715388));
  (**(code **)(lVar6 + 0x10))(param_1 + 6.0,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e8ccbc; end: 104e8cd07; -[SCPostRegContactPermissionRequestViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8ccbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715384);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010c1361e0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8cd08; end: 104e8cd53; -[SCPostRegContactPermissionRequestViewController _skipButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8cd08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715384);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010c269340(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8cd54; end: 104e8cd9f; -[SCPostRegContactPermissionRequestViewController _userLevelContactPermissionGranted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8cd54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715384);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bfcdb80(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8cda0; end: 104e8cdeb; -[SCPostRegContactPermissionRequestViewController _userLevelContactPermissionDenied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8cda0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715384);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bf6d8c0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8cdec; end: 104e8ce5f; -[SCPostRegContactPermissionRequestViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_104e8cdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010bebbc40(param_1,param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8ce60; end: 104e8ceef; -[SCPostRegContactPermissionRequestViewController _showViewController:animated:] */

void FUN_104e8ce60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c10eda0(param_1,param_2,param_3,param_4,0);
  }
  else {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e8cef0; end: 104e8ceff; -[SCPostRegContactPermissionRequestViewController dismissInformationSettingsView:] */

void FUN_104e8cef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104e8cf00; end: 104e8cff7; -[SCPostRegContactPermissionRequestViewController _displayUserLevelContactAccessDialog] */

void FUN_104e8cf00(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000105c65e24();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e8cff8;
  puStack_48 = &UNK_110849200;
  _objc_copyWeak(auStack_40,auStack_38);
  puVar2 = puVar1;
  FUN_104e870a0(puVar1,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e8cff8; end: 104e8d033;  */

void FUN_104e8cff8(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bee6e00();
  }
  else {
    func_0x00010bee6e20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8d034; end: 104e8d2ab; -[SCPostRegContactPermissionRequestViewController _displayConfirmSkipDialog] */

void FUN_104e8d034(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_80;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105c65dac();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e8d2ac;
  puStack_90 = &UNK_1108482a8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105c65e6c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_80;
  _objc_copyWeak(auStack_b0,puVar7);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000105c65d94();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c211b40(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  puVar1 = auStack_80;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar7);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bde61a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8d2ac; end: 104e8d32b;  */

void FUN_104e8d2ac(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde61a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8d32c; end: 104e8d377; -[SCPostRegContactPermissionRequestViewController _confirmToSkipContactSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8d32c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715384);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bf48040(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8d378; end: 104e8d3c3; -[SCPostRegContactPermissionRequestViewController _confirmToFindFriends] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8d378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715384);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010bf48020(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8d3c4; end: 104e8d4a3; -[SCPostRegContactPermissionRequestViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8d3c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127153a0,0);
  _objc_storeStrong(param_1 + _DAT_11271539c,0);
  _objc_storeStrong(param_1 + _DAT_112715390,0);
  _objc_storeStrong(param_1 + _DAT_112715398,0);
  _objc_storeStrong(param_1 + _DAT_112715394,0);
  _objc_storeStrong(param_1 + _DAT_1127153a4,0);
  _objc_storeStrong(param_1 + _DAT_1127153a8,0);
  _objc_storeStrong(param_1 + _DAT_1127153ac,0);
  _objc_storeStrong(param_1 + _DAT_1127153b0,0);
  _objc_storeStrong(param_1 + _DAT_1127153b4,0);
  _objc_storeStrong(param_1 + _DAT_112715388,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715384,0);
  return;
}



/* Entry: 104e8d4a4; end: 104e8d597; -[SCPostRegIOS18ContactPermissionRequestViewController initWithScreen:contactsImage:pointerImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104e8d4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e4a38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127153b8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127153bc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127153c0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e8d598; end: 104e8d5e7; -[SCPostRegIOS18ContactPermissionRequestViewController viewDidLoad] */

void FUN_104e8d598(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4a38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0d80(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104e8d5e8; end: 104e8e563; -[SCPostRegIOS18ContactPermissionRequestViewController _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8d5e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined *puVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined *puVar39;
  undefined *puVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined *puVar44;
  undefined *puVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined *puVar49;
  undefined *puVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  undefined *puVar54;
  undefined *puVar55;
  long lVar56;
  long lVar57;
  undefined *puVar58;
  undefined *puVar59;
  long lVar60;
  long lVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined *puVar72;
  undefined *puVar73;
  undefined *puVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined *puVar78;
  undefined *puVar79;
  undefined *puVar80;
  undefined *puVar81;
  undefined *puVar82;
  undefined *puVar83;
  undefined1 *puVar84;
  undefined1 *puVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c1cfce0();
  puVar2 = puVar1;
  func_0x00010c21ad00(puVar1);
  func_0x000105c65eb4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1);
  func_0x00010c219b60(puVar1);
  func_0x00010c181f00(0x447a0000,puVar1);
  func_0x00010c181cc0(0x447a0000,puVar1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  func_0x00010c1cfce0();
  func_0x00010c213040(puVar4);
  func_0x00010c181f00(0x447a0000,puVar4);
  func_0x00010c181cc0(0x447a0000,puVar4);
  func_0x00010c219b60(puVar4);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  uVar87 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_a0 = uVar87;
  func_0x00010c266e60();
  _objc_retainAutoreleasedReturnValue();
  uVar86 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar5 = puVar2;
  uStack_98 = uVar86;
  puStack_90 = puVar2;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_c0 = uVar87;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  uStack_b8 = uVar86;
  puStack_b0 = puVar2;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  puVar2 = puVar5;
  func_0x000105c65ecc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar2);
  puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  puVar2 = puVar6;
  func_0x000105c65ee4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar2);
  func_0x00010bf069e0(puVar5);
  func_0x00010c16b720(puVar4);
  puVar9 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0(puVar9);
  puVar2 = puVar9;
  func_0x00010befbd60(puVar9);
  func_0x000105c65e3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar9);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar9);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60(puVar10);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar11 = PTR_PTR_1126b1808;
  _objc_opt_new();
  puVar12 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar11);
  func_0x00010c181f00(0x42480000,puVar11);
  func_0x00010c181cc0(0x42480000,puVar11);
  func_0x00010c219b60(puVar11);
  func_0x00010befbb60(puVar10);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  puStack_150 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar17;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar1;
  puStack_148 = puVar21;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar4;
  puStack_140 = puVar26;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar4;
  puStack_138 = puVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar30;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar4;
  puStack_130 = puVar34;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar9;
  puStack_128 = puVar39;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar40;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar9;
  puStack_120 = puVar44;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar45;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar9;
  puStack_118 = puVar49;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = lVar51;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar52;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar50;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar55 = puVar10;
  puStack_110 = puVar54;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar56;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar58 = puVar55;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar59 = puVar10;
  puStack_108 = puVar58;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = lVar60;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar62 = puVar59;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar63 = puVar10;
  puStack_100 = puVar62;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar64 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar65 = puVar63;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar66 = puVar10;
  puStack_f8 = puVar65;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar67 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar68 = puVar66;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar69 = puVar11;
  puStack_f0 = puVar68;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar70 = puVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar71 = puVar69;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar72 = puVar11;
  puStack_e8 = puVar71;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar73 = puVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar74 = puVar72;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar75 = puVar11;
  puStack_e0 = puVar74;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar76 = puVar10;
  func_0x00010c274200(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar77 = puVar75;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar78 = puVar11;
  puStack_d8 = puVar77;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar79 = puVar10;
  func_0x00010bf1ff80(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar80 = puVar78;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar81 = puVar11;
  puStack_d0 = puVar80;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar82 = puVar81;
  func_0x00010bf49580(0x4070400000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar83 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar82;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar83);
  _objc_release(puVar82);
  _objc_release(puVar81);
  _objc_release(puVar80);
  _objc_release(puVar79);
  _objc_release(puVar78);
  _objc_release(puVar77);
  _objc_release(puVar76);
  _objc_release(puVar75);
  _objc_release(puVar74);
  _objc_release(puVar73);
  _objc_release(puVar72);
  _objc_release(puVar71);
  _objc_release(puVar70);
  _objc_release(puVar69);
  _objc_release(puVar68);
  _objc_release(puVar67);
  _objc_release(puVar66);
  _objc_release(puVar65);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(puVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(puVar55);
  _objc_release(puVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(puVar13);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_initWeak(auStack_158,param_1);
  uVar86 = *(undefined8 *)(param_1 + _DAT_1127153bc);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_104e8e564;
  puStack_170 = &UNK_110855f90;
  puVar84 = auStack_160;
  _objc_copyWeak(puVar84,auStack_158);
  puStack_168 = puVar11;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar86);
  _objc_release(puVar84);
  uVar86 = *(undefined8 *)(param_1 + _DAT_1127153c0);
  puVar84 = auStack_190;
  puVar85 = auStack_158;
  _objc_copyWeak(puVar84,puVar85);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar86);
  _objc_release(puVar84);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume();
  _objc_retain(puVar85);
  puVar1 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bea2e40();
  _objc_release(puVar85);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


