/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106812c30; end: 106812e2b;  */

void FUN_106812c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f5ba18);
    if ((int)uVar2 == 0) goto LAB_106812e00;
    puVar5 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa2bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e60ed8,uVar2);
    _objc_release(uVar2);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1420a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235ae0();
  }
  else {
    puVar5 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa2bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e60ed8,uVar2);
    _objc_release(uVar2);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0d6c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1420a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106812e2c;
    puStack_58 = &UNK_110848bd8;
    uStack_50 = uVar2;
    _objc_retain(uVar6);
    uStack_48 = uVar6;
    func_0x00010c2379c0(uVar4,param_2,uVar6,&puStack_70);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_48);
  }
  _objc_release(uVar2);
LAB_106812e00:
  func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_2,1);
  _objc_release(uVar1);
  return;
}



/* Entry: 106812e2c; end: 106812f0f;  */

void FUN_106812e2c(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0d6b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    _objc_opt_respondsToSelector(uVar3,PTR_s_handleQuickAction__1125d2270);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((uVar2 & 1) != 0) {
      _objc_retain(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      func_0x00010c0f9680(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106812f10; end: 106812f1b;  */

void FUN_106812f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleQuickAction__1125d2270,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106812f1c; end: 106812f9f; -[SCActiveUserNavigationWorkflow handleApplicationWillEnterForegroundFromMessageIntent:] */

void FUN_106812f1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c1e09a0(param_1,param_2,1);
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236cc0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106812fa0; end: 106812faf; -[SCActiveUserNavigationWorkflow setDisposableObserverLifecycle:] */

void FUN_106812fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&UNK_10f39a6fc,param_3,1);
  return;
}



/* Entry: 106812fb0; end: 106812fdf; -[SCActiveUserNavigationWorkflow didTapProfileHeaderButton] */

void FUN_106812fb0(undefined8 param_1)

{
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2389e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106812fe0; end: 10681301b; -[SCActiveUserNavigationWorkflow didTapSearchHeaderButton] */

void FUN_106812fe0(undefined8 param_1)

{
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10681301c; end: 10681304b; -[SCActiveUserNavigationWorkflow didTapAddFriendsHeaderButton] */

void FUN_10681301c(undefined8 param_1)

{
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10681304c; end: 1068130bb; -[SCActiveUserNavigationWorkflow didTapNotificationCenterButtonWithBellIconLastSeenTimestamp:bellIconIsBadged:] */

void FUN_10681304c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238b60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068130bc; end: 106813373; -[SCActiveUserNavigationWorkflow handleInAppNotificationPressed:] */

void FUN_1068130bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  func_0x00010c1b1c20(param_3);
  func_0x00010be56840(param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c11c420();
  if (uVar2 == 0x53) {
    uVar2 = param_1;
    func_0x00010c1420a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08f9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = uVar3;
    func_0x00010010fab4(uVar3,PTR_DAT_1126a5660);
    uVar2 = uVar3;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 != 0) {
      func_0x00010bf7cd40(uVar3);
    }
    uVar3 = param_1;
    func_0x00010c0f9c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf38240();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c11c420();
  if (uVar2 == 0x55) {
    uVar2 = param_1;
    func_0x00010bf30c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9a00();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c11c420();
  if (uVar2 == 100) {
    uVar2 = param_1;
    func_0x00010c0b9640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09f5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1440();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c11c420();
  if (uVar2 == 0x65) {
    uVar2 = param_1;
    func_0x00010c0b9640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09f280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1440();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c11c420();
  if ((uVar2 < 0x23) && ((1L << (uVar2 & 0x3f) & 0x630000000U) != 0)) {
    uVar2 = param_1;
    func_0x00010c2689c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd2c60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) goto LAB_10681335c;
  }
  func_0x00010c293280(param_1);
LAB_10681335c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106813374; end: 1068134a3; -[SCActiveUserNavigationWorkflow handleInAppNotificationDismissed:reason:] */

void FUN_106813374(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11c420();
  if ((uVar1 < 0x23) && ((1L << (uVar1 & 0x3f) & 0x630000000U) != 0)) {
    func_0x00010c2689c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2c40();
  }
  else {
    uVar1 = param_3;
    func_0x00010c11c420();
    if (uVar1 == 100) {
      func_0x00010c0b9640(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c09f5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd13e0();
      _objc_release(uVar2);
    }
    else {
      uVar1 = param_3;
      func_0x00010c11c420();
      if (uVar1 != 0x65) goto LAB_1068133f8;
      func_0x00010c0b9640(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c09f280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd13e0();
    }
  }
  _objc_release(uVar3);
  _objc_release(param_1);
LAB_1068133f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068134a4; end: 1068134a7; -[SCActiveUserNavigationWorkflow handleInAppNotificationDisplayInterrupted:reason:] */

void FUN_1068134a4(void)

{
  return;
}



/* Entry: 1068134a8; end: 1068135a7; -[SCActiveUserNavigationWorkflow _logNotificationTapped:] */

void FUN_1068134a8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x00010c1d0560();
  ppuVar3 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x00010c1d0560(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110dd1b98);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar2,param_2,puVar5,&PTR____CFConstantStringClassReference_110dd1bd8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be50ac0(param_1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068135a8; end: 10681376b; -[SCActiveUserNavigationWorkflow _logBlizzardInAppNotificationTap:] */

void FUN_1068135a8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ce5d8;
  _objc_alloc_init(PTR_PTR_1126ce5d8);
  lVar2 = param_4;
  func_0x00010c0dc140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce180(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c11c460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce740(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf0a2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a400(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c26a060(param_4);
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2124e0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    lVar2 = param_4;
    dVar5 = param_1;
    func_0x00010bf5a700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(lVar2);
    _objc_release(puVar3);
    func_0x00010c222d00(puVar1,param_3,(long)((param_1 - dVar5) * 1000.0));
  }
  func_0x00010c293fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10681376c; end: 10681381f; -[SCActiveUserNavigationWorkflow _getJsonFromDictionary:] */

void FUN_10681376c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar3 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    puVar3 = puVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106813820; end: 10681382b; -[SCActiveUserNavigationWorkflow navigateToChatViewAnimated:] */

void FUN_106813820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_navigateToChatViewAnimated_deepL_112613208,param_3,0,0);
  return;
}



/* Entry: 10681382c; end: 106813947; -[SCActiveUserNavigationWorkflow navigateToChatViewAnimated:deepLinkURL:pannableCellController:] */

void FUN_10681382c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c08ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08ee40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    if (param_4 == 0) {
      lVar3 = param_1;
      func_0x00010c08ee00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = param_1;
    func_0x00010c08ee60(param_1);
    func_0x00010c08ee20(param_1);
    func_0x00010c236cc0(lVar1,param_2,lVar2,lVar3,lVar4,param_1,0,param_5,0);
    if (param_4 == 0) {
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106813948; end: 106813a4b; -[SCActiveUserNavigationWorkflow navigateToChatViewAnimated:inExistingContext:] */

void FUN_106813948(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c08ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08ee40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08ee00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c08ee60(param_1);
    func_0x00010c08ee20(param_1);
    func_0x00010c236cc0(lVar1,param_2,lVar2,lVar3,lVar4,param_1,0,0,param_4);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106813a4c; end: 106813b43; -[SCActiveUserNavigationWorkflow presentChatViewWithPannableCellController:] */

void FUN_106813a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010c08ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08ee40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08ee00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c08ee60(param_1);
    func_0x00010c08ee20(param_1);
    lVar5 = lVar1;
    func_0x00010c236ca0(lVar1,param_2,lVar2,lVar3,lVar4,param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106813b44; end: 106813bc3; -[SCActiveUserNavigationWorkflow setConversationByChatIdentifier:deepLinkURL:chatPageSource:navigationAction:] */

void FUN_106813b44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_3 != 0) {
    _objc_retain(param_4);
    func_0x00010c1ba500(param_1);
    func_0x00010c1ba4c0(param_1);
    _objc_release(param_4);
    func_0x00010c1ba520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1ba4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setLegacyCurrentConversationEntr_11264c360,param_6);
    return;
  }
  return;
}



/* Entry: 106813bc4; end: 106813bef; +[SCGrapheneNavigationMetric cameraOpenOnForeground] */

void FUN_106813bc4(void)

{
  _objc_alloc(PTR_PTR_1126ce538);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106813bf0; end: 106813c8f; -[SCGrapheneNavigationMetric description] */

void FUN_106813bf0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e60f18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e60f18,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f35c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106813c90; end: 106813dd3; -[SCGrapheneRegistry navigationGraphene] */

void FUN_106813c90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106813d18;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4670 != -1) {
    func_0x00010002a2fc(0x1136c4670,&puStack_48);
  }
  uVar1 = uRam00000001136c4668;
  _objc_retain(uRam00000001136c4668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106813dd4; end: 106813e47; -[SCGrapheneAddFriendsDeeplinkMetric2 init] */

undefined1 * FUN_106813dd4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f35d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106813e48; end: 106813fbb;  */

undefined * FUN_106813e48(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39a7a4;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110941b40,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_106813fbc;
  puStack_a8 = PTR_PTR_1126f35d8;
  puStack_b0 = puVar2;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 106813fbc; end: 10681402f; -[SCGrapheneNavTransitionBlockedMetric2 init] */

undefined1 * FUN_106813fbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f35d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106814030; end: 1068141a3;  */

undefined * FUN_106814030(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39a7da;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110941ba0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_1068141a4;
  puStack_a8 = PTR_PTR_1126f35e0;
  puStack_b0 = puVar2;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 1068141a4; end: 106814217; -[SCGrapheneSpotlightDfDeeplinkMetric2 init] */

undefined1 * FUN_1068141a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f35e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106814218; end: 10681421f; -[FadeOutTransitionAnimator transitionDuration:] */

undefined8 FUN_106814218(void)

{
  return 0x3fe0000000000000;
}



/* Entry: 106814220; end: 1068143bf; -[FadeOutTransitionAnimator animateTransition:] */

void FUN_106814220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c29c220(param_4,param_3,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c29c220(param_4,param_3,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf4b2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  func_0x00010c15cda0(uVar6,param_3,uVar5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_2,param_3,param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068143c0;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1068143cc;
  puStack_98 = &UNK_110841f20;
  uStack_90 = param_4;
  uStack_68 = uVar3;
  _objc_retain(param_4);
  _objc_retain(uVar3);
  func_0x00010bf03420(param_1,puVar1,param_3,&puStack_88,&puStack_b0);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 1068143c0; end: 1068143cb;  */

void FUN_1068143c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1068143cc; end: 1068143f7;  */

void FUN_1068143cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 1068143f8; end: 106814513; -[SCActivityFeedPresenter initWithActivityFeedScopeExposer:viewController:businessProfileAndUserData:snapIdFromPushNotification:onLoadEventId:] */

undefined1 *
FUN_1068143f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f35e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106814514; end: 106814553; -[SCActivityFeedPresenter presentActivityFeedWithProfileId:sourceType:bellIconLastSeenTimestamp:bellIconIsBadged:] */

void FUN_106814514(void)

{
  func_0x00010c235a20();
  return;
}



/* Entry: 106814554; end: 10681477f; -[SCActivityFeedPresenter showActivityFeedForBusinessProfileAndUserData:notification:sourceType:] */

void FUN_106814554(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **in_stack_ffffffffffffff80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    lVar1 = param_4;
    func_0x00010c292820(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c292820(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar1 = param_4;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      in_stack_ffffffffffffff80 = &PTR____CFConstantStringClassReference_110e60f58;
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110db9f38);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar1);
    }
    func_0x00010c235a20(param_1,param_2,lVar2,lVar3,param_3,lVar4,puVar7,param_5,
                        (ulong)in_stack_ffffffffffffff80 & 0xffffffffffffff00,0,0);
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106814780; end: 1068149cb; -[SCActivityFeedPresenter showActivityFeedForProfileId:snapId:businessProfileAndUserData:onLoadEventId:notificationType:sourceType:animated:bellIconLastSeenTimestamp:bellIconIsBadged:] */

void FUN_106814780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = auStack_68;
    _objc_initWeak(puVar2,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    uStack_70 = param_9;
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068149cc; end: 106814a27;  */

void FUN_1068149cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2359e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x68));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106814a28; end: 106814d23; -[SCActivityFeedPresenter showActivityFeedContinuationForProfileId:snapId:businessProfileAndUserData:onLoadEventId:notificationType:sourceType:animated:bellIconLastSeenTimestamp:bellIconIsBadged:] */

void FUN_106814a28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c1cb780(lVar3,param_2,1,0);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126aead0;
    _objc_alloc();
    func_0x00010c02e500();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ce5e0;
    _objc_alloc(PTR_PTR_1126ce5e0);
    func_0x00010c058740();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106814d24; end: 106814d2b;  */

undefined1 FUN_106814d24(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106814d2c; end: 106814d73; -[SCActivityFeedPresenter activityFeedDidComplete] */

void FUN_106814d2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106814d74; end: 106814e4f; -[SCActivityFeedPresenter activityFeedNeedsRemoval] */

void FUN_106814d74(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_38,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uStack_40 = param_1;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010bf6f440(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106814e50; end: 106814eab;  */

void FUN_106814e50(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bef1520(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106814eac; end: 106814eb7; -[SCActivityFeedPresenter pushToValdiMarshaller:] */

void FUN_106814eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 106814eb8; end: 106814f1f; -[SCActivityFeedPresenter .cxx_destruct] */

void FUN_106814eb8(long param_1)

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



/* Entry: 106814f20; end: 106815017; -[SCAdsTabHandlers initWithBusinessIAPServices:adPreviewScopeExposer:viewController:] */

undefined1 *
FUN_106814f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f35f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010bf24e80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ce5e8;
    _objc_alloc();
    func_0x00010bff1b00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106815018; end: 106815087; -[SCAdsTabHandlers openEmailApp] */

void FUN_106815018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110db1578);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106815088; end: 10681508f; -[SCAdsTabHandlers businessIAPService] */

undefined8 FUN_106815088(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106815090; end: 1068150bf; -[SCAdsTabHandlers setBusinessIAPService:] */

void FUN_106815090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068150c0; end: 1068150c7; -[SCAdsTabHandlers adPreviewDisplayer] */

undefined8 FUN_1068150c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068150c8; end: 1068150f7; -[SCAdsTabHandlers setAdPreviewDisplayer:] */

void FUN_1068150c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1068150f8; end: 106815127; -[SCAdsTabHandlers .cxx_destruct] */

void FUN_1068150f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106815128; end: 1068151c3; -[SCBusinessAdPreviewDisplayer initWithAdPreviewScopeExposer:viewController:] */

undefined1 *
FUN_106815128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f35f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068151c4; end: 1068152c7; -[SCBusinessAdPreviewDisplayer displayAdPreviewWithEntityId:entityType:onClosed:] */

void FUN_1068151c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c071800();
  if (iVar1 != 0) {
    uVar5 = param_5;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar5);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126ce5f0;
    _objc_alloc(PTR_PTR_1126ce5f0);
    func_0x00010c0100a0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068152c8; end: 1068152fb; -[SCBusinessAdPreviewDisplayer didCloseAdPreview] */

void FUN_1068152c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeAdPreview_112555f00);
  return;
}



/* Entry: 1068152fc; end: 10681532f; -[SCBusinessAdPreviewDisplayer adPreviewDidFail] */

void FUN_1068152fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeAdPreview_112555f00);
  return;
}



/* Entry: 106815330; end: 10681533b; -[SCBusinessAdPreviewDisplayer pushToValdiMarshaller:] */

undefined8 FUN_106815330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df160;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010af9e688();
  return param_3;
}



/* Entry: 10681533c; end: 106815393; -[SCBusinessAdPreviewDisplayer _closeAdPreview] */

void FUN_10681533c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106815394;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106815394; end: 10681539b;  */

void FUN_106815394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeScope_112580e18);
  return;
}



/* Entry: 10681539c; end: 1068153ef; -[SCBusinessAdPreviewDisplayer _removeScope] */

void FUN_10681539c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1068153f0; end: 106815433; -[SCBusinessAdPreviewDisplayer .cxx_destruct] */

void FUN_1068153f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106815434; end: 1068156cb; -[SCImpalaLocalStoryStore initWithMyStoriesDataCoordinator:storiesThumbnailCoordinator:snapProProfilesProvider:circumstanceEngine:storiesSnapReadReceiptCoordinator:] */

long FUN_106815434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_7;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    lVar3 = param_1;
    func_0x00010be088c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,lVar3);
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined **)(param_1 + 0xc0) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1068156cc;
    puStack_60 = &UNK_110842e18;
    _objc_retain(param_1);
    lStack_58 = param_1;
    func_0x00010be721c0(param_1,param_2,&puStack_78);
    _objc_release(lStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1068156cc; end: 1068156ff;  */

void FUN_1068156cc(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb8) = 1;
  func_0x00010beaeec0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010beaea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupOwnedStoryStateObservation_112589428);
  return;
}



/* Entry: 106815700; end: 10681575f; -[SCImpalaLocalStoryStore _performOnLocalStoryStoreQueueAndWait:] */

void FUN_106815700(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106815760; end: 10681592b; -[SCImpalaLocalStoryStore tearDown] */

void FUN_106815760(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106815820;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010be721c0(param_1,param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 10681592c; end: 106815a07; -[SCImpalaLocalStoryStore rehydrate] */

void FUN_10681592c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1068159d4;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010be721c0(param_1,param_2,&puStack_48);
  return;
}



/* Entry: 106815a08; end: 106815a67; -[SCImpalaLocalStoryStore dealloc] */

void FUN_106815a08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x60));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x90));
  puStack_28 = PTR_PTR_1126f3600;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106815a68; end: 106815aaf; -[SCImpalaLocalStoryStore observeStorySnapshot] */

void FUN_106815a68(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bec4e80();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf8ed40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c272120(*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106815ab0; end: 106815ab7; -[SCImpalaLocalStoryStore observeOwnedStoryState] */

void FUN_106815ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 106815ab8; end: 106815b1f; -[SCImpalaLocalStoryStore observeSpotlightPostingProgressWithOnPostingStart:onPostingComplete:] */

void FUN_106815ab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106815b20; end: 106815b7b; -[SCImpalaLocalStoryStore retrySpotlightUploadWithClientId:] */

void FUN_106815b20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fa00();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106815b7c; end: 106815c8f; -[SCImpalaLocalStoryStore deleteFailedSpotlightUploadWithClientId:] */

void FUN_106815b7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106815c1c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106815c90; end: 106815e8f; -[SCImpalaLocalStoryStore _storyIdForSpotlightClientId:] */

void FUN_106815c90(long param_1,undefined *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined1 **ppuStack_3c0;
  code *pcStack_3b8;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined1 *puStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  code *pcStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined1 *puStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_280;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar10 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar10);
  puVar7 = &uStack_1b0;
  puVar8 = auStack_f0;
  uVar9 = 0x10;
  lVar11 = lVar10;
  func_0x00010bf52a60();
  lStack_1f8 = lVar11;
  if (lVar11 != 0) {
    lVar11 = *plStack_1a0;
    lStack_200 = lVar11;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        lVar14 = *(long *)(lStack_1a8 + lVar18 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar11 = lVar14;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = auStack_170;
        uVar9 = 0x10;
        lVar13 = lVar11;
        func_0x00010bf52a60();
        if (lVar13 != 0) {
          lVar17 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar17) {
                _objc_enumerationMutation(lVar11);
              }
              uVar1 = *(ulong *)(lStack_1e8 + lVar12 * 8);
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar1;
              puVar7 = param_3;
              func_0x00010c0720c0();
              _objc_release(uVar1);
              if ((uVar15 & 1) != 0) {
                func_0x00010c259cc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar11);
                goto LAB_106815e40;
              }
              lVar12 = lVar12 + 1;
            } while (lVar13 != lVar12);
            puVar8 = auStack_170;
            uVar9 = 0x10;
            lVar13 = lVar11;
            func_0x00010bf52a60();
          } while (lVar13 != 0);
        }
        _objc_release(lVar11);
        lVar11 = lStack_200;
        lVar18 = lVar18 + 1;
      } while (lVar18 != lStack_1f8);
      puVar7 = &uStack_1b0;
      puVar8 = auStack_f0;
      uVar9 = 0x10;
      lVar18 = lVar10;
      func_0x00010bf52a60();
      lStack_1f8 = lVar18;
    } while (lVar18 != 0);
  }
  lVar14 = 0;
LAB_106815e40:
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_106815e90;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_398 = puVar8;
  _objc_retain(puVar8);
  uStack_3a0 = uVar9;
  _objc_retain(uVar9);
  lVar10 = param_3[7];
  puStack_3a8 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  _objc_retain(lVar11);
  lVar10 = lVar11;
  func_0x00010bf52a60();
  if (lVar10 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    lVar18 = *plStack_330;
    do {
      lVar13 = 0;
      uVar1 = uVar15;
      do {
        if (*plStack_330 != lVar18) {
          _objc_enumerationMutation(lVar11);
        }
        uVar16 = *(ulong *)(lStack_338 + lVar13 * 8);
        uVar15 = uVar16;
        func_0x00010bf25000();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar15;
        func_0x00010beed480();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        _objc_release(uVar15);
        puVar4 = PTR_PTR_1126b0f68;
        uVar15 = uVar1;
        if ((int)uVar3 != 0) {
          _objc_retain(uVar16);
          _objc_opt_class();
          uVar2 = uVar16;
          _objc_opt_isKindOfClass();
          uVar15 = uVar16;
          if ((uVar2 & 1) == 0) {
            uVar15 = 0;
          }
          _objc_retain(uVar15);
          _objc_release(uVar16);
          _objc_release(uVar1);
          param_2 = puVar4;
        }
        lVar13 = lVar13 + 1;
        uVar1 = uVar15;
      } while (lVar10 != lVar13);
      lVar10 = lVar11;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar11);
  uVar1 = uVar15;
  func_0x00010c259c00(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puStack_398;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_368 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_360 = 0xc2000000;
  pcStack_358 = FUN_10681618c;
  puStack_350 = &UNK_110941c30;
  puStack_348 = puStack_398;
  _objc_retain(puStack_398);
  func_0x00010c2a14c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = puStack_3a8[1];
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uStack_3a0;
  puStack_390 = puVar4;
  uStack_388 = 0xc2000000;
  pcStack_380 = FUN_1068162dc;
  puStack_378 = &UNK_110859310;
  uStack_370 = uStack_3a0;
  _objc_retain(uStack_3a0);
  func_0x00010c11d940(uVar5);
  _objc_release(uVar5);
  _objc_release(uStack_370);
  _objc_release(puStack_348);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(lVar11);
  puVar6 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_280) {
    ___stack_chk_fail();
    uStack_3d0 = uVar9;
    pcStack_3b8 = FUN_10681618c;
    puStack_3c8 = puVar7;
    ppuStack_3c0 = &puStack_210;
    _objc_retain(param_2);
    puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3f8 = 0xc2000000;
    pcStack_3f0 = FUN_106816228;
    puStack_3e8 = &UNK_11084aaa8;
    uVar9 = puVar6[4];
    _objc_retain(uVar9);
    puStack_3e0 = param_2;
    uStack_3d8 = uVar9;
    _objc_retain(param_2);
    func_0x000100162d98("APPSTORE",&puStack_400);
    _objc_release(puStack_3e0);
    _objc_release(uStack_3d8);
    _objc_release(param_2);
    return;
  }
  return;
}



/* Entry: 106815e90; end: 10681618b; -[SCImpalaLocalStoryStore observeLivePublicStoryWithBusinessProfileId:onChange:onPending:] */

void FUN_106815e90(long param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_198 = param_4;
  _objc_retain(param_4);
  uStack_1a0 = param_5;
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x38);
  lStack_1a8 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    lVar9 = *plStack_130;
    do {
      lVar11 = 0;
      uVar7 = uVar12;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        uVar13 = *(ulong *)(lStack_138 + lVar11 * 8);
        uVar12 = uVar13;
        func_0x00010bf25000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x00010beed480();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar12);
        puVar6 = PTR_PTR_1126b0f68;
        uVar12 = uVar7;
        if ((int)uVar5 != 0) {
          _objc_retain(uVar13);
          _objc_opt_class();
          uVar4 = uVar13;
          _objc_opt_isKindOfClass();
          uVar12 = uVar13;
          if ((uVar4 & 1) == 0) {
            uVar12 = 0;
          }
          _objc_retain(uVar12);
          _objc_release(uVar13);
          _objc_release(uVar7);
          param_2 = puVar6;
        }
        lVar11 = lVar11 + 1;
        uVar7 = uVar12;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  uVar7 = uVar12;
  func_0x00010c259c00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_198;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_10681618c;
  puStack_150 = &UNK_110941c30;
  uStack_148 = uStack_198;
  _objc_retain(uStack_198);
  func_0x00010c2a14c0(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(lStack_1a8 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uStack_1a0;
  puStack_190 = puVar6;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1068162dc;
  puStack_178 = &UNK_110859310;
  uStack_170 = uStack_1a0;
  _objc_retain(uStack_1a0);
  func_0x00010c11d940(uVar8);
  _objc_release(uVar8);
  _objc_release(uStack_170);
  _objc_release(uStack_148);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(lVar3);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uStack_1d0 = uVar10;
    pcStack_1b8 = FUN_10681618c;
    lStack_1c8 = param_3;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(param_2);
    puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f8 = 0xc2000000;
    pcStack_1f0 = FUN_106816228;
    puStack_1e8 = &UNK_11084aaa8;
    uVar10 = *(undefined8 *)(lVar3 + 0x20);
    _objc_retain(uVar10);
    puStack_1e0 = param_2;
    uStack_1d8 = uVar10;
    _objc_retain(param_2);
    func_0x000100162d98("APPSTORE",&puStack_200);
    _objc_release(puStack_1e0);
    _objc_release(uStack_1d8);
    _objc_release(param_2);
    return;
  }
  return;
}



/* Entry: 10681618c; end: 106816227;  */

void FUN_10681618c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106816228;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 106816228; end: 1068162db;  */

void FUN_106816228(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25a380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1068162dc; end: 1068163bb;  */

void FUN_1068162dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10681637c;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = param_2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 1068163bc; end: 10681648f; -[SCImpalaLocalStoryStore didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_1068163bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106816490; end: 1068164d7;  */

void FUN_106816490(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (*(char *)(param_1 + 0xa8) == '\x01')) && (*(long *)(param_1 + 0xa0) != 0))
  {
    func_0x00010bf8dfa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068164d8; end: 106816747; -[SCImpalaLocalStoryStore didUpdateMyStoriesDataRequest:] */

void FUN_1068164d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106816748;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(uVar2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1068167fc;
  puStack_c0 = &UNK_110859c28;
  uStack_88 = uVar2;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(uVar2);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1068168d0;
  puStack_f0 = &UNK_110853300;
  uStack_b8 = uVar2;
  _objc_copyWeak(auStack_e0,auStack_78);
  _objc_retain(uVar2);
  uStack_e8 = uVar2;
  _objc_copyWeak(auStack_110,auStack_78);
  _objc_retain(uVar2);
  _objc_retain(uVar2);
  func_0x00010c0be260(param_3);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_110);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106816748; end: 1068168cf;  */

void FUN_106816748(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1068167c0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = lVar1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1068168d0; end: 106816987;  */

void FUN_1068168d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_5 == 2) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106816988;
    puStack_48 = &UNK_110841f80;
    lStack_40 = lVar1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106816988; end: 106816ae7;  */

void FUN_106816988(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c2290c0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(lVar1 + 0xa8) & 1) == 0) && (*(long *)(lVar1 + 0x98) != 0)) {
    func_0x00010bea13c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
    *(long *)(*(long *)(param_1 + 0x20) + 0x98) = lVar1;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf8dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s_emitOwnedStoryStateForSequences__1125c1198,
               *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98));
    return;
  }
  return;
}



/* Entry: 106816ae8; end: 106816c8b;  */

void FUN_106816ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c11d5e0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106816c8c; end: 106816d43;  */

void FUN_106816c8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2ea40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106816d44; end: 106816e4f; -[SCImpalaLocalStoryStore _handleQueriedStoryPlaybackSequence:storyId:clientId:] */

void FUN_106816d44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_retainBlock();
  lVar1 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_4,0);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf4b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be855e0(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106816e50; end: 10681703f; -[SCImpalaLocalStoryStore _createThumbnailInfoForPlaybackInfo:clientId:] */

void FUN_106816e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  uVar3 = uVar1;
  func_0x00010c086560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c085300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x000108ea5f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  uVar4 = uVar1;
  func_0x00010c27dd80(uVar1);
  func_0x0001084f2c4c();
  uVar6 = uVar1;
  func_0x00010c083e00(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa840(puVar5,param_2,uVar3,0,puVar2,uVar4,uVar6,0,0,0,puVar7,0,0);
  _objc_release(puVar7);
  uVar4 = param_3;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c08fa60();
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106817040; end: 1068172ab; -[SCImpalaLocalStoryStore _createFriendStoryThumbnailInfoForPlaybackInfo:] */

void FUN_106817040(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  lVar3 = lVar1;
  func_0x00010c086560(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c085300(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar2,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar5 = PTR_PTR_1126ce5f8;
    _objc_alloc();
    lVar3 = lVar1;
    func_0x00010bf4cce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4cd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf4cd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003920(puVar5,param_2,lVar3,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = lVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if ((lVar4 == 0) && (puVar5 == (undefined *)0x0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126c6940;
    _objc_alloc(PTR_PTR_1126c6940);
    lVar3 = lVar1;
    func_0x00010c28f340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051fe0(puVar8,param_2,lVar3,puVar2,puVar5);
    _objc_release(lVar3);
  }
  func_0x00010bdedf40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x000108ea5f00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068172ac; end: 106817683; -[SCImpalaLocalStoryStore _createFriendStoryMediaInfoForPlaybackInfo:] */

void FUN_1068172ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfca8;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010c086560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c085300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126cbca8;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08f8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c4440();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0ef640();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bf1eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c26d900();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bf1eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfb11c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  func_0x00010bf1eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c260e20();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar1;
  func_0x00010c0802a0();
  func_0x00010c022600(puVar5,param_2,uVar4,uVar7,uVar9,uVar11,uVar13,uVar15,uVar16 & 0xff);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar17 = PTR_PTR_1126c3390;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c27dd80();
  func_0x0001084f2c4c();
  uVar7 = uVar1;
  func_0x00010c083e00();
  uVar8 = uVar1;
  func_0x00010bf06600();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf7f0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar10 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9c720(uVar10);
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bf1f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bfb26c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa840(puVar17,param_2,uVar4,uVar3,puVar2,uVar6,uVar7 & 0xffffffff,0,uVar8,uVar9,
                      puVar18,puVar5,0);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar18);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 106817684; end: 10681786b; -[SCImpalaLocalStoryStore _queryThumbnailForThumbnailInfo:storyId:completion:] */

void FUN_106817684(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,param_4,0);
    }
  }
  else {
    func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c11da60(uVar1);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10681786c; end: 106817e27; -[SCImpalaLocalStoryStore _snapWithManagementInfo:businessProfileId:] */

void FUN_10681786c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cc4d8;
    _objc_alloc();
    func_0x00010c01e3e0();
    puVar2 = PTR_PTR_1126cc4e0;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010bf12320();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    func_0x00010bf30da0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_3;
    func_0x00010bef2d20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_3;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    func_0x00010bf4e880();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_3;
    func_0x00010c094820();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_3;
    func_0x00010c281620();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010bf10040();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_3;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_3;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_3;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = param_3;
    func_0x00010c15e560();
    puVar24 = param_3;
    func_0x00010c141c40();
    puVar25 = param_3;
    func_0x00010c0d2260();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = param_3;
    func_0x00010bf9a280();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = param_3;
    func_0x00010bf1f6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = param_3;
    func_0x00010c24b240();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = param_3;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = param_3;
    func_0x00010bf28d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24be20();
    puVar31 = param_3;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ede0();
    puVar32 = param_3;
    func_0x00010bf5b120();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = param_3;
    func_0x00010bf5b140();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = param_3;
    func_0x00010c0c5b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b820();
    puVar35 = param_3;
    func_0x00010bf5b3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = param_3;
    func_0x00010bf42120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0a00();
    puVar37 = param_3;
    func_0x00010c262140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044c20(puVar2,param_2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9,puVar10,
                        puVar11,puVar12,puVar13,puVar14,puVar15,puVar16,puVar17,puVar18,puVar19,
                        puVar20,puVar21,puVar22,puVar23,(char)puVar24);
    _objc_release(puVar37);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106817e28; end: 1068180eb; -[SCImpalaLocalStoryStore _enrichSequencesWithManagementInfo:] */

void FUN_106817e28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_1a0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        lVar11 = *(long *)(lStack_1a8 + lVar9 * 8);
        lVar3 = lVar11;
        func_0x00010c25b340(lVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        func_0x00010bf0a0e0(puVar5,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        lVar3 = lVar11;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar10 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar10) {
                _objc_enumerationMutation(lVar3);
              }
              uVar6 = param_1;
              func_0x00010bebd540(param_1,param_2,*(undefined8 *)(lStack_1e8 + lVar12 * 8),0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5,param_2,uVar6);
              _objc_release(uVar6);
              lVar12 = lVar12 + 1;
            } while (lVar4 != lVar12);
            lVar4 = lVar3;
            func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        puVar7 = PTR_PTR_1126b1338;
        _objc_alloc(PTR_PTR_1126b1338);
        lVar3 = lVar11;
        func_0x00010c259cc0(lVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar11;
        func_0x00010c25b720(lVar11);
        func_0x00010c297440(lVar11);
        func_0x00010c04dbe0(puVar7,param_2,lVar3,lVar4,puVar5,lVar11);
        _objc_release(lVar3);
        func_0x00010befa120(puVar2,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar5);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar1);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010be721c0();
  return;
}



/* Entry: 1068180ec; end: 10681813b; -[SCImpalaLocalStoryStore setupPlaybackSequencesObservation] */

void FUN_1068180ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10681813c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be721c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10681813c; end: 106818143;  */

void FUN_10681813c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaeed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupPlaybackSequencesObservati_112589558);
  return;
}



/* Entry: 106818144; end: 1068181d3; -[SCImpalaLocalStoryStore _setupPlaybackSequencesObservationOnQueue] */

void FUN_106818144(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar2);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x68));
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar2);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beaeeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPlaybackSequencesObservati_112589550);
  return;
}



/* Entry: 1068181d4; end: 106818223; -[SCImpalaLocalStoryStore setupPlaybackSequencesObservationIfNeeded] */

void FUN_1068181d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106818224;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be721c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 106818224; end: 10681822b;  */

void FUN_106818224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaeeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupPlaybackSequencesObservati_112589550);
  return;
}



/* Entry: 10681822c; end: 10681852f; -[SCImpalaLocalStoryStore _setupPlaybackSequencesObservationIfNeededOnQueue] */

void FUN_10681822c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  if ((*(char *)(param_1 + 0xb8) == '\x01') &&
     (lVar1 = param_1, func_0x00010bec4e80(), (int)lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    if (*(long *)(param_1 + 0x58) == 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0d4b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar2);
      if (lVar1 != 0) {
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_106818530;
        puStack_48 = &UNK_110842c58;
        _objc_copyWeak(auStack_40,auStack_38);
        lVar2 = lVar1;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x58);
        *(long *)(param_1 + 0x58) = lVar2;
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_40);
      }
      _objc_release(lVar1);
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0d4b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar2);
      if (lVar1 != 0) {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        uStack_78 = 0x1068185a8;
        puStack_70 = &UNK_110842c58;
        _objc_copyWeak(auStack_68,auStack_38);
        lVar2 = lVar1;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x60);
        *(long *)(param_1 + 0x60) = lVar2;
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar1);
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0d4b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar2);
      if (lVar1 != 0) {
        _objc_copyWeak(auStack_90,auStack_38);
        lVar2 = lVar1;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        *(long *)(param_1 + 0x68) = lVar2;
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_90);
      }
      _objc_release(lVar1);
    }
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106818530; end: 106818697;  */

void FUN_106818530(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar1;
    _objc_release(uVar2);
    func_0x00010bf8ddc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106818698; end: 1068186e7; -[SCImpalaLocalStoryStore setupOwnedStoryStateObservation] */

void FUN_106818698(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1068186e8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be721c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1068186e8; end: 1068186ef;  */

void FUN_1068186e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupOwnedStoryStateObservation_112589428);
  return;
}


