/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fee0ac; end: 105fee0e3;  */

void FUN_105fee0ac(void)

{
  func_0x000105fee14c();
  return;
}



/* Entry: 105fee0e4; end: 105fee1f7;  */

void FUN_105fee0e4(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee1f8; end: 105fee1ff; -[SCCMapLiveUpgradeSharingAudience__Enum init] */

void FUN_105fee1f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105fee200; end: 105fee207; -[SCLiveUpgradeDisplayState__Enum init] */

void FUN_105fee200(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105fee208; end: 105fee23f; -[SCCMapLiveUpgradeBitmojiDisplay initWithAvatarId:displayName:] */

void FUN_105fee208(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeef8;
  uStack_20 = param_1;
  func_0x000105fee3cc(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fee240; end: 105fee24f; +[SCCMapLiveUpgradeBitmojiDisplay valdiMarshallableObjectDescriptor] */

void FUN_105fee240(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_avatarId_110906d48;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee250; end: 105fee283; -[SCCMapLiveUpgradeLiveUpgradeContext init] */

void FUN_105fee250(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eef00;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105fee284; end: 105fee297; +[SCCMapLiveUpgradeLiveUpgradeContext valdiMarshallableObjectDescriptor] */

void FUN_105fee284(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906d90;
  param_1[1] = &PTR_DAT_110906dc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee298; end: 105fee2c7; -[SCCMapLiveUpgradeLiveUpgradeQuickPickerContext initWithSuggestedUsers:allFriends:liveUpgradePickerActionHandler:] */

void FUN_105fee298(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fee3bc(PTR_PTR_1126eef08);
  func_0x000105fee3cc(auStack_20);
  return;
}



/* Entry: 105fee2c8; end: 105fee2db; +[SCCMapLiveUpgradeLiveUpgradeQuickPickerContext valdiMarshallableObjectDescriptor] */

void FUN_105fee2c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906dd0;
  param_1[1] = &PTR_DAT_110906e30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee2dc; end: 105fee30b; -[SCCMapLiveUpgradeLiveUpgradeQuickPickerViewModel initWithSelectedAudience:sharingLiveCellUsers:allowlistUsers:blocklistUsers:] */

void FUN_105fee2dc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fee3bc(PTR_PTR_1126eef10);
  func_0x000105fee3cc(auStack_20);
  return;
}



/* Entry: 105fee30c; end: 105fee31f; +[SCCMapLiveUpgradeLiveUpgradeQuickPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fee30c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906e48;
  param_1[1] = &PTR_DAT_110906ec0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee320; end: 105fee34f; -[SCCMapLiveUpgradeLiveUpgradeViewModel initWithDisplayState:] */

void FUN_105fee320(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fee3bc(PTR_PTR_1126eef18);
  func_0x000105fee3cc(auStack_20);
  return;
}



/* Entry: 105fee350; end: 105fee363; +[SCCMapLiveUpgradeLiveUpgradeViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fee350(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110906ed8;
  param_1[1] = &PTR_DAT_110906f50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee364; end: 105fee39b; -[SCCMapLiveUpgradePickerUserInfo initWithUserId:displayName:] */

void FUN_105fee364(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fee3bc(PTR_PTR_1126eef20);
  func_0x000105fee3cc(auStack_20);
  return;
}



/* Entry: 105fee39c; end: 105fee3e7; +[SCCMapLiveUpgradePickerUserInfo valdiMarshallableObjectDescriptor] */

void FUN_105fee39c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110906f68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fee3e8; end: 105fee407; -[SCInAppNotificationLegacyContainerPresentationObserver .cxx_destruct] */

void FUN_105fee3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105fee408; end: 105fee44f;  */

void FUN_105fee408(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c6e78;
  func_0x00010bf41540(PTR_PTR_1126c6e78,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105fee450; end: 105fee583;  */

void FUN_105fee450(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c6e80;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar5 = param_4;
  func_0x00010c27dd80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf416c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c09f9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fec0(param_4);
  uVar7 = param_1;
  uVar8 = param_2;
  func_0x00010bf95080(param_4);
  _objc_release(param_4);
  func_0x00010c055960(param_1,param_2,uVar7,uVar8,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126c6e78;
  func_0x00010bfcdaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fee584; end: 105fee5cb;  */

void FUN_105fee584(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c6e78;
  func_0x00010bfe94a0(PTR_PTR_1126c6e78,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105fee5cc; end: 105fee61f; -[SIGLegacyContainerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fee5cc(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1);
  puStack_28 = PTR_PTR_1126eef30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105fee620; end: 105fee67f; -[SIGLegacyContainerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fee620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126eef30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 105fee680; end: 105fee6df; -[SIGLegacyContainerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fee680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126eef30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 105fee6e0; end: 105fee753; -[SIGLegacyContainerViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fee6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126eef30;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 105fee754; end: 105fee7a7; -[SIGLegacyContainerViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fee754(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1);
  puStack_28 = PTR_PTR_1126eef30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 105fee7a8; end: 105fee99b; -[SIGLegacyContainerViewController presentViewController:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fee7a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_2 + _DAT_11273c900));
  lVar2 = param_2;
  func_0x00010bf61c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_60,lVar2);
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_2);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105fee99c;
  puStack_a0 = &UNK_110907068;
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_70 = param_1;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_copyWeak(auStack_80,auStack_58);
  _objc_copyWeak(auStack_78,auStack_60);
  _objc_retain(param_6);
  puStack_c0 = PTR_PTR_1126eef30;
  lStack_c8 = param_2;
  uStack_90 = param_6;
  _objc_msgSendSuper2(&lStack_c8,PTR_s_presentViewController_animated_c_112621588,param_4,param_5,
                      &puStack_b8);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105fee99c; end: 105feea9f;  */

void FUN_105fee99c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  
  _objc_copyWeak(auStack_28,param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf17a40();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1cbd20();
  _objc_release(lVar3);
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    puVar4 = auStack_28;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c1cbfa0();
    _objc_release(puVar4);
  }
  puVar4 = auStack_28;
  _objc_loadWeakRetained(puVar4);
  func_0x00010be8fb80();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105feeaa0; end: 105feeb37;  */

void FUN_105feeaa0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 105feeb38; end: 105feecd3; -[SIGLegacyContainerViewController dismissViewControllerAnimated:completion:] */

void FUN_105feeb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c10f940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf61c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,uVar3);
  _objc_release(uVar3);
  _objc_initWeak(auStack_60,param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105feecd4;
  puStack_88 = &UNK_110907098;
  _objc_copyWeak(auStack_78,auStack_60);
  uStack_68 = param_1;
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_5);
  puStack_a8 = PTR_PTR_1126eef30;
  uStack_b0 = param_2;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_4,
                      &puStack_a0);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 105feecd4; end: 105feedbb;  */

void FUN_105feecd4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1cbd20();
  _objc_release(lVar3);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    puVar4 = auStack_28;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c1cbfa0();
    _objc_release(puVar4);
  }
  puVar4 = auStack_28;
  _objc_loadWeakRetained(puVar4);
  func_0x00010be8fb80();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105feedbc; end: 105feedc3; -[SIGLegacyContainerViewController present:usingStyle:] */

void FUN_105feedbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_present_usingStyle_completion__1126205c0,param_3,param_4,0);
  return;
}



/* Entry: 105feedc4; end: 105feeecf; -[SIGLegacyContainerViewController _activeRootPathSnapshot] */

void FUN_105feedc4(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  if (param_1 != 0) {
    lVar5 = -5;
    lVar6 = param_1;
    do {
      lVar3 = lVar6;
      _objc_opt_class(lVar6);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,lVar3);
      _objc_release(lVar3);
      lVar3 = lVar6;
      func_0x00010bf38f00();
      _objc_retainAutoreleasedReturnValue();
      param_1 = lVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar3);
      if (param_1 == 0) break;
      bVar1 = lVar5 != 0;
      lVar5 = lVar5 + 1;
      lVar6 = param_1;
    } while (bVar1);
    if (param_1 != 0) {
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110dde298);
    }
  }
  puVar4 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e35ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105feeed0; end: 105fef06f; -[SIGLegacyContainerViewController presentInteractively:usingStyle:completion:] */

void FUN_105feeed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105fef070;
  puStack_80 = &UNK_1108aeb50;
  uStack_60 = param_1;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(param_6);
  uVar2 = param_2;
  uStack_70 = param_6;
  func_0x00010beeb740(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR_PTR_1126eef30;
  puVar3 = &uStack_a8;
  uStack_a8 = param_2;
  _objc_msgSendSuper2(puVar3,PTR_s_presentInteractively_usingStyle__112620c40,param_4,param_5,uVar2)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fef070; end: 105fef0db;  */

void FUN_105fef070(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fef0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    return;
  }
  return;
}



/* Entry: 105fef0dc; end: 105fef117; -[SIGLegacyContainerViewController pageViewName] */

undefined8 FUN_105fef0dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f2220();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105fef118; end: 105fef193; -[SIGLegacyContainerViewController mightDismissWithStyle:] */

void FUN_105fef118(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_mightDismissWithStyle__112610ef0);
  if ((uVar2 & 1) != 0) {
    func_0x00010c0cd360(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fef194; end: 105fef1e3; -[SIGLegacyContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fef194(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c8fc,0);
  _objc_storeStrong(param_1 + _DAT_11273c8f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c900,0);
  return;
}



/* Entry: 105fef1e4; end: 105fef29f; -[SCScanResultsMessageViewModelProvider initWithContentDelivery:] */

undefined1 * FUN_105fef1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eef38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c6e98;
    _objc_alloc();
    func_0x00010c002e80();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fef2a0; end: 105fef33b; -[SCScanResultsMessageViewModelProvider end] */

void FUN_105fef2a0(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fef33c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 105fef33c; end: 105fef347;  */

void FUN_105fef33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105fef348; end: 105fef38b; -[SCScanResultsMessageViewModelProvider dealloc] */

void FUN_105fef348(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0();
  puStack_28 = PTR_PTR_1126eef38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105fef38c; end: 105fef3b3; -[SCScanResultsMessageViewModelProvider scanResultViewModels] */

void FUN_105fef38c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fef3b4; end: 105fef53f; -[SCScanResultsMessageViewModelProvider configureWithContext:] */

void FUN_105fef3b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0cfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar5);
    lVar1 = param_3;
    func_0x00010beeee20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fef540; end: 105fef587;  */

void FUN_105fef540(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fef588; end: 105fef65b; -[SCScanResultsMessageViewModelProvider _handleSnapcodeMetadata:] */

void FUN_105fef588(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 5) {
    puVar2 = PTR_PTR_1126b31f0;
    _objc_alloc(PTR_PTR_1126b31f0);
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_48);
    lVar1 = lStack_48;
    _objc_release(lVar3);
    if (lVar1 == 0) {
      puVar4 = puVar2;
      func_0x00010c0cb140(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2c400(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fef65c; end: 105fef773; -[SCScanResultsMessageViewModelProvider _handleMessage:] */

void FUN_105fef65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be373e0(0x4008000000000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105fef774; end: 105fef7c7;  */

void FUN_105fef774(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fef7c8; end: 105fefa13; -[SCScanResultsMessageViewModelProvider _presentDialogWithMessage:image:] */

void FUN_105fef7c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fefa14;
  puStack_88 = &UNK_1108482a8;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c420();
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = auStack_78;
  _objc_copyWeak(auStack_a8,puVar5);
  _objc_retain(puVar3);
  func_0x00010bf6ad20(uVar6);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2d280();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fefa14; end: 105fefa8f;  */

void FUN_105fefa14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fefa90; end: 105fefa93;  */

void FUN_105fefa90(void)

{
  return;
}



/* Entry: 105fefa94; end: 105fefac7; -[SCScanResultsMessageViewModelProvider _handleOkay:] */

void FUN_105fefa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf84b00(param_3,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf84030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissParentScopes__1125be9b0,5);
  return;
}



/* Entry: 105fefac8; end: 105fefacf; -[SCScanResultsMessageViewModelProvider _attachUI:] */

void FUN_105fefac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_attachUI__1125a0c08);
  return;
}



/* Entry: 105fefad0; end: 105fefadb; -[SCScanResultsMessageViewModelProvider _detachUI] */

void FUN_105fefad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105fefadc; end: 105fefc0b; -[SCScanResultsMessageViewModelProvider _imageFutureWithImageURL:scale:] */

void FUN_105fefadc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bfe6bc0(param_1,uVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bfb0d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105fefc0c;
  puStack_60 = &UNK_11084d858;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3,param_3,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105fefc0c; end: 105fefc17;  */

void FUN_105fefc0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105fefc18; end: 105fefc6b; -[SCScanResultsMessageViewModelProvider .cxx_destruct] */

void FUN_105fefc18(long param_1)

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



/* Entry: 105fefc6c; end: 105fefd47; -[SCScanResultsQRCodeTextViewModelProvider initWithAssetProvider:performer:] */

undefined1 *
FUN_105fefc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eef40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fefd48; end: 105fefe1f; -[SCScanResultsQRCodeTextViewModelProvider initWithContentDelivery:] */

undefined8 FUN_105fefd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105fefe20;
  puStack_40 = &UNK_110907118;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4560(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105fefe20; end: 105fefe4f;  */

void FUN_105fefe20(void)

{
  _objc_alloc(PTR_PTR_1126c6e98);
  func_0x00010c002e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fefe50; end: 105fefe7b; -[SCScanResultsQRCodeTextViewModelProvider end] */

void FUN_105fefe50(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fefe7c; end: 105fefea3; -[SCScanResultsQRCodeTextViewModelProvider scanResultViewModels] */

void FUN_105fefe7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fefea4; end: 105feffdf; -[SCScanResultsQRCodeTextViewModelProvider configureWithContext:] */

void FUN_105fefea4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    lVar2 = param_3;
    func_0x00010bf15ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105feffe0; end: 105ff0027;  */

void FUN_105feffe0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26420();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff0028; end: 105ff0097; -[SCScanResultsQRCodeTextViewModelProvider _handleBarcodeResult:] */

void FUN_105ff0028(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c265b00();
  if (lVar1 == 0x10) {
    lVar1 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be31f00(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ff0098; end: 105ff047f; -[SCScanResultsQRCodeTextViewModelProvider _handleText:] */

void FUN_105ff0098(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6ea0;
  func_0x00010c28f5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bfe7d20();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar12;
    _objc_release();
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4330;
    func_0x000105ff5f04();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_70 = uVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_80,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105ff0480;
    puStack_98 = &UNK_110841fb0;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    ppuVar5 = &puStack_b0;
    lStack_90 = param_3;
    _objc_retainBlock();
    puVar3 = PTR_PTR_1126aef30;
    ppuStack_c0 = ppuVar5;
    func_0x00010c25d9a0(PTR_PTR_1126aef30);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126aef38;
    _objc_alloc(PTR_PTR_1126aef38);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = ppuStack_c0;
    func_0x00010c0048e0(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar7 = PTR_PTR_1126aef40;
    _objc_alloc(PTR_PTR_1126aef40);
    puVar2 = puVar7;
    func_0x000105ff5eec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020120(puVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126aef48;
    puVar8 = PTR_PTR_1126c6ea8;
    _objc_alloc(PTR_PTR_1126c6ea8);
    func_0x00010c061da0();
    func_0x00010c11cde0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126aef58;
    _objc_alloc(PTR_PTR_1126aef58);
    puVar9 = puVar8;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b920(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(ppuStack_c0);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puStack_b8);
    _objc_release(uStack_c8);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  lVar11 = param_3;
  __Unwind_Resume();
  pcStack_d8 = FUN_105ff0480;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105ff0524;
  puStack_108 = &UNK_110841fb0;
  puStack_f0 = puVar1;
  lStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_f8,lVar11 + 0x28);
  uVar12 = *(undefined8 *)(lVar11 + 0x20);
  _objc_retain(uVar12);
  uStack_100 = uVar12;
  func_0x0001000d76cc("APPSTORE",&puStack_120);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_f8);
  return;
}



/* Entry: 105ff0480; end: 105ff0523;  */

void FUN_105ff0480(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105ff0524;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ff0524; end: 105ff0557;  */

void FUN_105ff0524(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde9c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff0558; end: 105ff05ab; -[SCScanResultsQRCodeTextViewModelProvider _copyText:] */

void FUN_105ff0558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  _objc_retain(param_3);
  func_0x00010bfbedc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff05ac; end: 105ff05ff; -[SCScanResultsQRCodeTextViewModelProvider .cxx_destruct] */

void FUN_105ff05ac(long param_1)

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



/* Entry: 105ff0600; end: 105ff075b; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider initWithLensMetadataFetcher:mainLensCarouselManagerStream:cameraHardwareServices:contentDelivery:] */

undefined1 *
FUN_105ff0600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eef48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c6e98;
    _objc_alloc();
    func_0x00010c002e80();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ff075c; end: 105ff0783; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider scanResultViewModels] */

void FUN_105ff075c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ff0784; end: 105ff0933; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider configureWithContext:] */

void FUN_105ff0784(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c090c80();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105ff0934;
    puStack_68 = &UNK_110857258;
    _objc_copyWeak(auStack_60,auStack_58);
    uVar1 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar3 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff0934; end: 105ff09c3;  */

void FUN_105ff0934(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b3a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff09c4; end: 105ff0a2f; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _handleLensCarouselManager:] */

void FUN_105ff09c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1bafa0(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010c2450a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30920(param_1,param_2,uVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ff0a30; end: 105ff0a9b; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _handleSnapcodeMetadata:] */

void FUN_105ff0a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c206020(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010c090c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30920(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ff0a9c; end: 105ff0da3; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _handleSnapcodeMetadata:lensCarouselManager:] */

void FUN_105ff0a9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (((lVar1 == 0xf) && (param_3 != 0)) && (param_4 != 0)) {
    puVar2 = PTR_PTR_1126bc1a0;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_68);
    lVar1 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126c6eb0;
    if (lVar1 == 0) {
      puVar4 = PTR_PTR_1126c6eb0;
      func_0x00010be7ff00(PTR_PTR_1126c6eb0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c6eb0;
      func_0x00010be4f1e0(PTR_PTR_1126c6eb0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be97ba0(puVar9,param_2,puVar4,puVar5,lVar6,lVar7,puVar8,
                          &PTR___NSConcreteGlobalBlock_110907178);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar9);
      puVar4 = PTR_PTR_1126aef58;
      _objc_alloc(PTR_PTR_1126aef58);
      puVar5 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b920(puVar4,param_2,puVar5,0xfffffffffffffffc,*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar5);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar4);
      puVar5 = PTR_PTR_1126c6eb8;
      _objc_alloc(PTR_PTR_1126c6eb8);
      puVar8 = puVar2;
      func_0x00010c094540(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010bf5ac40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c024980(puVar5,param_2,puVar8,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar8);
      lVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be121a0(param_1,param_2,puVar5,param_4,lVar6,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar9);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff0da4; end: 105ff0da7;  */

void FUN_105ff0da4(void)

{
  return;
}



/* Entry: 105ff0da8; end: 105ff0fef; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _fetchLensMetadataWithFetchIdentifier:lensCarouselManager:decodedUuid:scannableId:] */

void FUN_105ff0da8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_88,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_80 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105ff0ff0;
  puStack_b0 = &UNK_11085b4f0;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_4);
  uStack_a8 = param_4;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(param_6);
  puVar5 = auStack_88;
  uStack_98 = param_6;
  _objc_copyWeak(auStack_d0);
  func_0x00010bfa7f00(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bf529e0();
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  if (puVar4 == (undefined1 *)0x0) {
    func_0x00010bdfa2c0(param_3);
  }
  else {
    puVar4 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc7700(param_3);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105ff0ff0; end: 105ff1083;  */

void FUN_105ff0ff0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010bdfa2c0(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc7700(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ff1084; end: 105ff10af;  */

void FUN_105ff1084(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff10b0; end: 105ff13e7; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _addMetadataToScanResultsAndAdjustDevicePosition:lensCarouselManager:decodedUuid:scannableId:] */

void FUN_105ff10b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bdfa2c0(param_1);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126c6eb0;
  uVar2 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6eb0;
  func_0x00010be7ff00(PTR_PTR_1126c6eb0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be97ba0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aef58;
  _objc_alloc(PTR_PTR_1126aef58);
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b920(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  func_0x00010bdc9300(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe6ba0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  uVar7 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar2);
  func_0x00010bdf98c0(param_1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff13e8; end: 105ff141b;  */

void FUN_105ff13e8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf98c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff141c; end: 105ff1427;  */

void FUN_105ff141c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105ff1428; end: 105ff1547; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _deflateResultsAndDisplayLensMetadata:lensCarouselManager:] */

void FUN_105ff1428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010be7c240(param_1,param_2,puVar2,param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010beeee20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84020();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bdc9300(param_1,param_2,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c6ec0;
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_alloc(puVar1);
  func_0x00010bff0c20();
  uVar4 = uVar5;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bef0060(uVar4,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff1548; end: 105ff15eb; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _presentLensCarouselWithLensesObservable:lensCarouselManager:] */

void FUN_105ff1548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c6ec0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff0c20();
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bef0060(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff15ec; end: 105ff185b; +[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _rowViewModelWithTitle:buttonTitle:decodedUuid:scannableId:image:actionHandler:] */

void FUN_105ff15ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0048e0(puVar2);
  _objc_release(param_8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  puVar3 = PTR_PTR_1126aef30;
  func_0x00010c25d9a0(PTR_PTR_1126aef30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar4);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aef48;
  puVar5 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c2453a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x10),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105ff185c; end: 105ff1863; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _deleteLoadingCard] */

void FUN_105ff185c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105ff1864; end: 105ff1877; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _adjustDevicePositionForLensMetadata:] */

void FUN_105ff1864(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befd8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_adjustDevicePositionWithCameraAP_11259cfd8,
             *(undefined8 *)(param_1 + 0x40),0);
  return;
}



/* Entry: 105ff1878; end: 105ff187b; +[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _previewString] */

void FUN_105ff1878(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e36078;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e36078,
                      &PTR____CFConstantStringClassReference_110e36038,0);
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



/* Entry: 105ff187c; end: 105ff187f; +[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _loadingString] */

void FUN_105ff187c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e36098;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e36098,
                      &PTR____CFConstantStringClassReference_110e36038,0);
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



/* Entry: 105ff1880; end: 105ff188b; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider lensCarouselManager] */

void FUN_105ff1880(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 105ff188c; end: 105ff1893; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider setLensCarouselManager:] */

void FUN_105ff188c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105ff1894; end: 105ff189f; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider snapcodeMetadata] */

void FUN_105ff1894(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 105ff18a0; end: 105ff18a7; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider setSnapcodeMetadata:] */

void FUN_105ff18a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105ff18a8; end: 105ff1943; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider .cxx_destruct] */

void FUN_105ff18a8(long param_1)

{
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



/* Entry: 105ff1944; end: 105ff1b0b; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff1944(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c6eb0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273c960;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar6;
  func_0x00010c095060();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11273c968;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010c0b6a20(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11273c964;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010bf299a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11273c96c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar5 = lVar10;
  func_0x00010bf4c240(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024ec0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273c958);
  *(undefined **)(param_1 + _DAT_11273c958) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar6);
  param_1 = param_1 + _DAT_11273c95c;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff1b0c; end: 105ff1b77; -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff1b0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273c96c);
  _objc_destroyWeak(param_1 + _DAT_11273c968);
  _objc_destroyWeak(param_1 + _DAT_11273c964);
  _objc_destroyWeak(param_1 + _DAT_11273c960);
  _objc_destroyWeak(param_1 + _DAT_11273c95c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c958,0);
  return;
}



/* Entry: 105ff1b78; end: 105ff1dbf; -[SCScanResultsSnapcodeUnlockLensViewModelProvider initWithContentDelivery:lensUnlocker:cameraHardwareServicesAPI:mainLensCarouselManagerStream:logger:browserScopeExposer:] */

undefined8 *
FUN_105ff1b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126eef50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c6e98;
    _objc_alloc();
    func_0x00010c002e80();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 10,param_5);
    _objc_retain(param_7);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = param_6;
    func_0x00010c090c80(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ff1dc0; end: 105ff1e0f;  */

void FUN_105ff1dc0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 0x28,param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ff1e10; end: 105ff1e3b; -[SCScanResultsSnapcodeUnlockLensViewModelProvider end] */

void FUN_105ff1e10(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


