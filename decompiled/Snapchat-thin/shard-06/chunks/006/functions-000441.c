/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c6ad48; end: 104c6adbf; -[SCBillboardMicrophonePermissionActionHandler handleOnTapActionWithContext:] */

void FUN_104c6ad48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e2fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf38260(uVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c6adc0; end: 104c6adcb; -[SCBillboardMicrophonePermissionActionHandler .cxx_destruct] */

void FUN_104c6adc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6adcc; end: 104c6ae6f; -[SCBillboardNotificationPermissionActionHandler initWithNotificationsPermissionRequester:application:] */

undefined1 *
FUN_104c6adcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3740;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c6ae70; end: 104c6ae77; -[SCBillboardNotificationPermissionActionHandler actionHandlerType] */

undefined8 FUN_104c6ae70(void)

{
  return 7;
}



/* Entry: 104c6ae78; end: 104c6af6b; -[SCBillboardNotificationPermissionActionHandler handleOnTapActionWithContext:] */

void FUN_104c6ae78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4340();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104c6af6c;
    puStack_40 = &UNK_110842508;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c135f60(uVar2,param_2,&puStack_58);
    _objc_release(uVar2);
    _objc_release(lStack_38);
  }
  else {
    func_0x00010c14d6a0(*(undefined8 *)(param_1 + 0x10));
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104c6af6c; end: 104c6af7f;  */

void FUN_104c6af6c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104c6af78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104c6af80; end: 104c6afaf; -[SCBillboardNotificationPermissionActionHandler .cxx_destruct] */

void FUN_104c6af80(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6afb0; end: 104c6b123; -[SCBillboardPermissionRequestActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6afb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ae6f0;
  _objc_alloc(PTR_PTR_1126ae6f0);
  lVar5 = (long)_DAT_11270fa78;
  lVar2 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030360(puVar1,param_2,lVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  FUN_104c6b124(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126ae6f8;
  _objc_alloc(PTR_PTR_1126ae6f8);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010c0f9c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035520(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar5);
  FUN_104c6b124(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c6b124; end: 104c6b147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b124(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11270fa7c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c6b148; end: 104c6b17f; -[SCBillboardPermissionRequestActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b148(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270fa78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fa7c);
  return;
}



/* Entry: 104c6b180; end: 104c6b223; -[SCBillboardPhoneReverificationActionHandler initWithMobileSettingsScopeExposer:mobileSettingsScopeServices:] */

undefined1 *
FUN_104c6b180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3748;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c6b224; end: 104c6b22b; -[SCBillboardPhoneReverificationActionHandler actionHandlerType] */

undefined8 FUN_104c6b224(void)

{
  return 8;
}



/* Entry: 104c6b22c; end: 104c6b2cf; -[SCBillboardPhoneReverificationActionHandler handleOnTapActionWithContext:] */

void FUN_104c6b22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c0d6ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf24220(uVar2,param_2,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c6b2d0; end: 104c6b31f; -[SCBillboardPhoneReverificationActionHandler mobileSettingsDidComplete] */

void FUN_104c6b2d0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104c6b320; end: 104c6b35b; -[SCBillboardPhoneReverificationActionHandler .cxx_destruct] */

void FUN_104c6b320(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6b35c; end: 104c6b40b; -[SCBillboardPhoneReverificationActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b35c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae700;
  _objc_alloc(PTR_PTR_1126ae700);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11270fa8c);
  lVar2 = param_1 + _DAT_11270fa90;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c02c440(puVar1,param_2,uVar3,lVar2);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270fa94;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c6b40c; end: 104c6b453; -[SCBillboardPhoneReverificationActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b40c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270fa90);
  _objc_storeStrong(param_1 + _DAT_11270fa8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fa94);
  return;
}



/* Entry: 104c6b454; end: 104c6b4ef; -[SCBillboardPhoneVerificationActionHandler initWithFindFriendsScopeExposer:findFriendsScopeServices:] */

undefined1 *
FUN_104c6b454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c6b4f0; end: 104c6b4f7; -[SCBillboardPhoneVerificationActionHandler actionHandlerType] */

undefined8 FUN_104c6b4f0(void)

{
  return 5;
}



/* Entry: 104c6b4f8; end: 104c6b5eb; -[SCBillboardPhoneVerificationActionHandler handleOnTapActionWithContext:] */

void FUN_104c6b4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ae600;
  _objc_alloc(PTR_PTR_1126ae600);
  func_0x00010c01fb20();
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010bf23c80(lVar3,param_2,uVar1,puVar2,param_1,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c6b5ec; end: 104c6b63b; -[SCBillboardPhoneVerificationActionHandler findFriendsWorkflowCompleted] */

void FUN_104c6b5ec(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104c6b63c; end: 104c6b673; -[SCBillboardPhoneVerificationActionHandler .cxx_destruct] */

void FUN_104c6b63c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6b674; end: 104c6b723; -[SCBillboardPhoneVerificationActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae708;
  _objc_alloc(PTR_PTR_1126ae708);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11270faa4);
  lVar2 = param_1 + _DAT_11270faa8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c013380(puVar1,param_2,uVar3,lVar2);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270faac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c6b724; end: 104c6b76b; -[SCBillboardPhoneVerificationActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b724(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270faa8);
  _objc_storeStrong(param_1 + _DAT_11270faa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270faac);
  return;
}



/* Entry: 104c6b76c; end: 104c6b7df; -[SCBillboardSuicidePreventionActionHandler initWithSelfHarmResourcesScopeExposer:] */

undefined1 * FUN_104c6b76c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3758;
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



/* Entry: 104c6b7e0; end: 104c6b7e7; -[SCBillboardSuicidePreventionActionHandler actionHandlerType] */

undefined8 FUN_104c6b7e0(void)

{
  return 6;
}



/* Entry: 104c6b7e8; end: 104c6b88f; -[SCBillboardSuicidePreventionActionHandler handleOnTapActionWithContext:] */

void FUN_104c6b7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae710;
  _objc_alloc(PTR_PTR_1126ae710);
  uVar1 = param_3;
  func_0x00010c0d6ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0582c0(puVar2,param_2,uVar1,param_1);
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c6b890; end: 104c6b8df; -[SCBillboardSuicidePreventionActionHandler didComplete] */

void FUN_104c6b890(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104c6b8e0; end: 104c6b90f; -[SCBillboardSuicidePreventionActionHandler .cxx_destruct] */

void FUN_104c6b8e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6b910; end: 104c6b993; -[SCBillboardSuicidePreventionActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b910(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae718;
  _objc_alloc(PTR_PTR_1126ae718);
  func_0x00010c044140();
  param_1 = param_1 + _DAT_11270fabc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c6b994; end: 104c6b9cf; -[SCBillboardSuicidePreventionActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6b994(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270fab8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fabc);
  return;
}



/* Entry: 104c6b9d0; end: 104c6ba43; -[SCGrapheneRankingRequestorMetric2 init] */

undefined1 * FUN_104c6b9d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3760;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c6ba44; end: 104c6bbd7;  */

void FUN_104c6ba44(double param_1,long param_2,char *param_3,undefined1 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842538,&uStack_80,(long)(param_1 * 1000.0));
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = (undefined1 *)puVar5;
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  puVar6 = param_4;
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    plVar8 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_e0,pcVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842588,&uStack_100,param_4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar4;
  puVar7 = puVar6;
  _objc_retain(pcVar4);
  if (pcVar1 != (char *)0x0) {
    plVar8 = *(long **)(pcVar1 + 8);
    pcVar2 = "\x02";
    (**(code **)(*plVar8 + 0x28))();
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_160,pcVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      pcVar2 = "\x02";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108425d8,&uStack_180,puVar6);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar7 = (undefined1 *)puVar5;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar7 = (undefined1 *)puVar5;
      }
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    plVar8 = *(long **)(pcVar1 + 8);
    pcVar4 = "\x02";
    (**(code **)(*plVar8 + 0x28))();
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_1e0,pcVar1);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      pcVar4 = "\x02";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842628,&uStack_200,puVar7);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pcVar4);
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar1);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c6bbd8; end: 104c6bd4b;  */

void FUN_104c6bbd8(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842588,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    pcVar4 = "\x02";
    (**(code **)(*plVar8 + 0x28))();
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_e0,pcVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      pcVar4 = "\x02";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108425d8,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    pcVar1 = "\x02";
    (**(code **)(*plVar8 + 0x28))();
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_160,pcVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      pcVar1 = "\x02";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842628,&uStack_180,puVar7);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pcVar1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain(pcVar2);
  _objc_retain(pcVar1);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c6bd4c; end: 104c6bedf;  */

void FUN_104c6bd4c(long param_1,char *param_2,undefined1 *param_3)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_60,pcVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      pcVar2 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108425d8,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar6 = (undefined1 *)puVar7;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar6 = (undefined1 *)puVar7;
      }
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    pcVar5 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_e0,pcVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      pcVar5 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110842628,&uStack_100,puVar6);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
    }
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pcVar5);
  puVar4 = PTR_PTR_1126ae720;
  _objc_retain(pcVar3);
  _objc_retain(pcVar5);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104c6bee0; end: 104c6c073;  */

void FUN_104c6bee0(long param_1,char *param_2,undefined8 param_3)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_60,pcVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      pcVar2 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110842628,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pcVar2);
  puVar4 = PTR_PTR_1126ae720;
  _objc_retain(pcVar3);
  _objc_retain(pcVar2);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104c6c074; end: 104c6c133;  */

void FUN_104c6c074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c6c134; end: 104c6c2a7;  */

void FUN_104c6c134(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f98e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar4,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar4,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar4,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcfa00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126ae730;
  _objc_alloc(PTR_PTR_1126ae730);
  func_0x00010c058f80();
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104c6c2a8; end: 104c6c31b; -[SCBillboardGrpcServiceImpl initWithBillboardService:] */

undefined1 * FUN_104c6c2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3768;
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



/* Entry: 104c6c31c; end: 104c6c4db; -[SCBillboardGrpcServiceImpl requestRankingForChannel:] */

void FUN_104c6c31c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae738;
  func_0x00010c0cb140(PTR_PTR_1126ae738);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae740;
  _objc_opt_new(PTR_PTR_1126ae740);
  func_0x00010befc800();
  func_0x00010c17ac00(puVar2);
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c16c6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(puVar1);
  uStack_60 = param_3;
  func_0x00010bfc95c0(uVar6);
  _objc_release(uVar6);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104c6c4dc; end: 104c6c54b;  */

void FUN_104c6c4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a440();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c6c54c; end: 104c6c6ff; -[SCBillboardGrpcServiceImpl _handleGetRankingResponse:error:requestRankingPromise:channel:] */

void FUN_104c6c54c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined *param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae758;
  puVar2 = PTR_PTR_1126ae750;
  if ((param_3 == 0) || (param_4 != 0)) {
    _objc_retain(param_5);
    func_0x00010c0db140(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_5,param_2,puVar2);
    goto LAB_104c6c6d4;
  }
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  lVar3 = param_3;
  if (param_6 == 3) {
    func_0x00010c0f0940(param_3);
    _objc_retainAutoreleasedReturnValue();
LAB_104c6c624:
    puVar2 = PTR_PTR_1126ae758;
    _objc_retain();
    _objc_opt_new();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104c6c70c;
    puStack_50 = &UNK_110842718;
    _objc_retain();
    puStack_48 = puVar2;
    func_0x00010bf97e80(lVar3,param_2,&puStack_68);
    _objc_release(lVar3);
    _objc_release(puStack_48);
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
  else {
    if (param_6 == 2) {
      func_0x00010bfbb5a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104c6c624;
    }
    puVar2 = puVar1;
    if (param_6 == 1) {
      func_0x00010bfac280(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104c6c624;
    }
  }
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(param_5,param_2,puVar1);
  _objc_release(param_5);
  param_5 = puVar1;
LAB_104c6c6d4:
  _objc_release(param_5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c6c700; end: 104c6c70b; -[SCBillboardGrpcServiceImpl .cxx_destruct] */

void FUN_104c6c700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6c70c; end: 104c6c7cb;  */

void FUN_104c6c70c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c105ce0();
  if ((uint)uVar2 < 0x35) {
    puVar1 = PTR_PTR_1126ae760;
    _objc_opt_new(PTR_PTR_1126ae760);
    uVar2 = param_2;
    func_0x00010bf2c200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177860(puVar1);
    _objc_release(uVar2);
    func_0x00010c1df9e0(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2c260(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c6c7cc; end: 104c6c8c7; -[SCBillboardCooldownCapManager initWithCircumstanceEngine:preferences:featureSettingsService:grapheneRegistry:] */

undefined1 *
FUN_104c6c7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e3770;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c6c8c8; end: 104c6ca2f; -[SCBillboardCooldownCapManager isEligibleFromCooldownCapRules:readOnlyBillboardSignals:identifier:] */

undefined1 *
FUN_104c6c8c8(int param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  puVar5 = param_4;
  uVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar7 = param_3;
  func_0x00010bf529e0();
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    puVar5 = auStack_d8;
    uVar6 = 0x10;
    puVar7 = param_3;
    func_0x00010bf52a60();
    if (puVar7 != (undefined1 *)0x0) {
      lVar9 = *plStack_110;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          puVar4 = *(undefined8 **)(lStack_118 + (long)puVar10 * 8);
          puVar5 = param_4;
          uVar6 = param_5;
          iVar1 = param_1;
          func_0x00010be3ff40();
          if (iVar1 == 0) {
            puVar7 = (undefined1 *)0x0;
            goto LAB_104c6c9cc;
          }
          puVar10 = puVar10 + 1;
        } while (puVar7 != puVar10);
        puVar5 = auStack_d8;
        uVar6 = 0x10;
        puVar7 = param_3;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined1 *)0x0);
    }
    puVar7 = (undefined1 *)0x1;
LAB_104c6c9cc:
    _objc_release(param_3);
    puVar10 = (undefined1 *)puVar4;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(puVar10);
  _objc_retain(uVar8);
  _objc_retain(uVar6);
  puVar7 = puVar10;
  func_0x00010c2570e0();
  if ((int)puVar7 == 0) {
    puVar2 = puVar10;
    func_0x00010bf51b60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8a5a0(uVar8,uVar6,puVar2,1);
    _objc_release(puVar2);
  }
  puVar2 = puVar10;
  func_0x00010bf51b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 == (undefined1 *)0x0) {
    puVar7 = puVar10;
    func_0x00010bf51b60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8aa00(uVar8,uVar6,puVar7,1);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar8);
    param_3 = (undefined1 *)0x0;
    puVar7 = puVar10;
  }
  else {
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(puVar10);
    if ((int)puVar7 == 0) {
LAB_104c6cc20:
      param_3 = (undefined1 *)0x0;
      goto LAB_104c6cc24;
    }
    puVar7 = puVar10;
    func_0x00010bfdafc0();
    if ((int)puVar7 == 0) {
LAB_104c6cba4:
      puVar7 = puVar5;
      func_0x00010bf51e00(puVar5);
      puVar2 = param_3;
      func_0x00010be3ff60();
      _objc_release(puVar7);
      if (((ulong)puVar2 & 1) != 0) {
        param_3 = (undefined1 *)0x1;
        goto LAB_104c6cc24;
      }
      puVar7 = param_3;
      func_0x00010be87ea0();
      if ((int)puVar7 == 0) goto LAB_104c6cc20;
    }
    else {
      puVar7 = puVar10;
      func_0x00010c124820();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010bf25e00();
      _objc_release(puVar7);
      if ((int)puVar2 == 0) goto LAB_104c6cba4;
      func_0x00010be87ea0(param_3);
    }
    puVar7 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010be3ff60(param_3);
  }
  _objc_release(puVar7);
LAB_104c6cc24:
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar10);
  return param_3;
}



/* Entry: 104c6ca30; end: 104c6cc57; -[SCBillboardCooldownCapManager _isEligibleFromCooldownCapRule:readOnlyBillboardSignals:identifier:] */

ulong FUN_104c6ca30(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c2570e0();
  if ((int)lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010bf51b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8a5a0(uVar5,param_5,lVar2,1);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bf51b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar1 = param_3;
    func_0x00010bf51b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8aa00(uVar5,param_5,lVar1,1);
    _objc_release(lVar1);
    _objc_release(param_5);
    _objc_release(uVar5);
    param_1 = 0;
    lVar1 = param_3;
  }
  else {
    _objc_release(param_5);
    _objc_release(uVar5);
    _objc_release(param_3);
    if ((int)lVar1 == 0) {
LAB_104c6cc20:
      param_1 = 0;
      goto LAB_104c6cc24;
    }
    lVar1 = param_3;
    func_0x00010bfdafc0();
    if ((int)lVar1 == 0) {
LAB_104c6cba4:
      lVar1 = param_4;
      func_0x00010bf51e00(param_4);
      uVar4 = param_1;
      func_0x00010be3ff60();
      _objc_release(lVar1);
      if ((uVar4 & 1) != 0) {
        param_1 = 1;
        goto LAB_104c6cc24;
      }
      uVar4 = param_1;
      func_0x00010be87ea0();
      if ((int)uVar4 == 0) goto LAB_104c6cc20;
    }
    else {
      lVar1 = param_3;
      func_0x00010c124820();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf25e00();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) goto LAB_104c6cba4;
      func_0x00010be87ea0(param_1);
    }
    lVar1 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010be3ff60(param_1);
  }
  _objc_release(lVar1);
LAB_104c6cc24:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104c6cc58; end: 104c6d2b7; -[SCBillboardCooldownCapManager _isEligibleFromCooldownCapRuleInternal:modifiableBillboardSignals:identifier:] */

long FUN_104c6cc58(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c2570e0(param_3);
  uVar2 = param_3;
  func_0x00010bf51b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar8 = param_1;
  func_0x00010bfc3b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfca1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = PTR_PTR_1126ae780;
  _objc_retain(param_4);
  _objc_retain(lVar8);
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar5);
  func_0x00010bfea820(lVar8);
  func_0x00010c1779e0(param_4);
  func_0x00010bf3c820(lVar8);
  func_0x00010c177900(param_4);
  func_0x00010bf836a0(lVar8);
  func_0x00010c177940(param_4);
  func_0x00010bf3c820(lVar8);
  func_0x00010bf836a0(lVar8);
  func_0x00010c177a00(param_4);
  func_0x00010bfb16c0();
  func_0x00010c1779a0(param_4);
  func_0x00010c088f60();
  func_0x00010c177a60(param_4);
  func_0x00010bfb0f80();
  func_0x00010c177960(param_4);
  func_0x00010c088640();
  func_0x00010c177a20(param_4);
  func_0x00010bfb10e0();
  func_0x00010c177980(param_4);
  func_0x00010c0889c0();
  func_0x00010c177a40(param_4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb0f80(lVar8);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb10e0(lVar8);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6d7c8();
  func_0x00010c1779c0(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c088640(lVar8);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0889c0(lVar8);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104c6d8e8();
  func_0x00010c177a80(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf4fde0(lVar8);
  _objc_release(lVar8);
  func_0x00010c177920(param_4);
  func_0x00010bfea820(lVar3);
  func_0x00010c1fd460(param_4);
  func_0x00010bf3c820(lVar3);
  func_0x00010c1fd220(param_4);
  func_0x00010bf836a0(lVar3);
  func_0x00010c1fd300(param_4);
  func_0x00010bf3c820(lVar3);
  func_0x00010bf836a0(lVar3);
  func_0x00010c1fd480(param_4);
  func_0x00010bfb16c0();
  func_0x00010c1fd3c0(param_4);
  func_0x00010c088f60();
  func_0x00010c1fd520(param_4);
  func_0x00010bfb0f80();
  func_0x00010c1fd380(param_4);
  func_0x00010c088640();
  func_0x00010c1fd4e0(param_4);
  func_0x00010bfb10e0();
  func_0x00010c1fd3a0(param_4);
  func_0x00010c0889c0();
  func_0x00010c1fd500(param_4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb0f80(lVar3);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb10e0(lVar3);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6d7c8();
  func_0x00010c1fd3e0(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c088640(lVar3);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0889c0(lVar3);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104c6d8e8();
  func_0x00010c1fd540(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf4fde0(lVar3);
  func_0x00010c1fd2c0(param_4);
  func_0x00010c170140(puVar4);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  lVar8 = *(long *)(param_1 + 8);
  uVar11 = 0;
  uVar10 = uVar2;
  func_0x00010bf1f440();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return lVar8;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  func_0x00010c2570e0(uVar10);
  uVar2 = uVar10;
  func_0x00010c124820();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c124780();
  uVar1 = (uint)uVar9;
  if (1 < uVar1) {
    if (uVar1 != 0xfbadbeef) {
      if (uVar1 == 2) {
        func_0x00010bfc3b80(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_4 = 0;
      }
      goto LAB_104c6d39c;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x20);
    uVar9 = uVar10;
    func_0x00010bf51b60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8b090(uVar13,uVar11,uVar9,1);
    _objc_release(uVar9);
  }
  func_0x00010bfca1e0(param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_104c6d39c:
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return param_4;
}



/* Entry: 104c6d2b8; end: 104c6d3d7; -[SCBillboardCooldownCapManager _getRecycleBasedStorageUnitWithRule:identifier:] */

void FUN_104c6d2b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2570e0(param_3);
  uVar2 = param_3;
  func_0x00010c124820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c124780();
  uVar1 = (uint)uVar3;
  if (1 < uVar1) {
    if (uVar1 != 0xfbadbeef) {
      if (uVar1 == 2) {
        func_0x00010bfc3b80(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_1 = 0;
      }
      goto LAB_104c6d39c;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = param_3;
    func_0x00010bf51b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8b090(uVar4,param_4,uVar3,1);
    _objc_release(uVar3);
  }
  func_0x00010bfca1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_104c6d39c:
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c6d3d8; end: 104c6d7c7; -[SCBillboardCooldownCapManager _getRecycleBasedTimeWithRule:baseStorageUnit:identifier:] */

/* WARNING: Possible PIC construction at 0x000104c6d730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c6d5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c6d680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c6d538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c6d684) */
/* WARNING: Removing unreachable block (ram,0x000104c6d734) */
/* WARNING: Removing unreachable block (ram,0x000104c6d53c) */
/* WARNING: Removing unreachable block (ram,0x000104c6d5b8) */
/* WARNING: Removing unreachable block (ram,0x000104c6d740) */

undefined *
FUN_104c6d3d8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined *unaff_x24;
  undefined *puVar14;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  undefined8 ***pppuVar15;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_118;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)auStack_c0;
  pppuVar15 = (undefined8 ***)&stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = param_3;
  func_0x00010c124820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c124760();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar11 = param_4;
  switch((ulong)puVar2 & 0xffffffff) {
  case 0:
code_r0x000104c6d488:
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    unaff_x24 = param_3;
    func_0x00010bf51b60();
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8ae60(uVar10,param_5,unaff_x24,1);
    _objc_release(unaff_x24);
    goto LAB_104c6d4bc;
  case 1:
    func_0x00010bfb16c0();
    puVar14 = unaff_x24;
    break;
  case 2:
    func_0x00010bfb0f80();
    puVar14 = unaff_x24;
    break;
  case 3:
    func_0x00010bfb10e0();
    puVar14 = unaff_x24;
    break;
  case 4:
    func_0x00010bfb0f80(param_4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar14;
    func_0x00010bfb10e0(param_4);
    unaff_x25 = puVar11;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0x104c6d53c;
    unaff_x26 = param_3;
    goto FUN_104c6d7c8;
  case 5:
    func_0x00010bfb16c0(param_4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_90 = puVar14;
    func_0x00010bfb0f80(param_4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_88 = unaff_x25;
    func_0x00010bfb10e0(param_4);
    unaff_x26 = puVar11;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = unaff_x26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0x104c6d684;
    unaff_x27 = param_3;
    goto FUN_104c6d7c8;
  case 6:
    func_0x00010c088f60();
    puVar14 = unaff_x24;
    break;
  case 7:
    func_0x00010c088640();
    puVar14 = unaff_x24;
    break;
  case 8:
    func_0x00010c0889c0();
    puVar14 = unaff_x24;
    break;
  case 9:
    func_0x00010c088640(param_4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a0 = puVar14;
    func_0x00010c0889c0(param_4);
    unaff_x25 = puVar11;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = unaff_x25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0x104c6d5b8;
    unaff_x26 = puVar2;
    goto SUB_104c6d8e8;
  case 10:
    func_0x00010c088f60(param_4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b8 = puVar14;
    func_0x00010c088640(param_4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = unaff_x25;
    func_0x00010c0889c0(param_4);
    unaff_x26 = puVar11;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = unaff_x26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0x104c6d734;
    puVar1 = (undefined8 *)auStack_c0;
    unaff_x27 = puVar2;
    goto SUB_104c6d8e8;
  default:
    if ((int)puVar2 == -0x4524111) goto code_r0x000104c6d488;
LAB_104c6d4bc:
    puVar11 = (undefined *)0x0;
    puVar14 = unaff_x24;
  }
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar11;
  }
  uVar10 = 0x104c6d7c8;
  ___stack_chk_fail();
FUN_104c6d7c8:
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d0 = pppuVar15;
  uStack_c8 = uVar10;
  _objc_retain();
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  puStack_1d0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    param_4 = (undefined *)0x0;
  }
  else {
    param_4 = (undefined *)0x0;
    puVar11 = (undefined *)*puStack_1d0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_1d0 != puVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar9 = *(undefined **)(lStack_1d8 + (long)puVar14 * 8);
        if ((param_4 == (undefined *)0x0) ||
           (puVar3 = puVar9, func_0x00010c0b4fe0(), (long)puVar3 < (long)param_4)) {
          param_4 = puVar9;
          func_0x00010c0b4fe0();
        }
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar2 = param_3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    param_5 = 0;
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return param_4;
  }
  uVar10 = 0x104c6d8e8;
  ___stack_chk_fail();
  puVar1 = &uStack_1e0;
  pppuVar15 = &ppuStack_d0;
SUB_104c6d8e8:
  puVar7 = (undefined1 *)((long)puVar1 + -0x120);
  *(undefined8 *)((long)puVar1 + -0x50) = unaff_x28;
  *(undefined **)((long)puVar1 + -0x48) = unaff_x27;
  *(undefined **)((long)puVar1 + -0x40) = puVar14;
  *(undefined **)((long)puVar1 + -0x38) = puVar11;
  *(undefined **)((long)puVar1 + -0x30) = puVar9;
  *(undefined8 *)((long)puVar1 + -0x28) = param_5;
  *(undefined **)((long)puVar1 + -0x20) = param_4;
  *(undefined **)((long)puVar1 + -0x18) = param_3;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar15;
  *(undefined8 *)((long)puVar1 + -8) = uVar10;
  *(undefined8 *)((long)puVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  *(undefined8 *)((long)puVar1 + -0x118) = 0;
  *(undefined8 *)((long)puVar1 + -0x120) = 0;
  *(undefined8 *)((long)puVar1 + -0x108) = 0;
  *(undefined8 *)((long)puVar1 + -0x110) = 0;
  *(undefined8 *)((long)puVar1 + -0xf8) = 0;
  *(undefined8 *)((long)puVar1 + -0x100) = 0;
  *(undefined8 *)((long)puVar1 + -0xe8) = 0;
  *(undefined8 *)((long)puVar1 + -0xf0) = 0;
  puVar6 = (undefined1 *)((long)puVar1 + -0xd8);
  uVar10 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)0x0;
    puVar11 = (undefined *)**(undefined8 **)((long)puVar1 + -0x110);
    do {
      puVar14 = (undefined *)0x0;
      do {
        if ((undefined *)**(undefined8 **)((long)puVar1 + -0x110) != puVar11) {
          _objc_enumerationMutation(puVar2);
        }
        puVar9 = *(undefined **)(*(long *)((long)puVar1 + -0x118) + (long)puVar14 * 8);
        if ((puVar8 == (undefined *)0x0) ||
           (puVar4 = puVar9, func_0x00010c0b4fe0(), (long)puVar8 < (long)puVar4)) {
          puVar8 = puVar9;
          func_0x00010c0b4fe0();
        }
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar6 = (undefined1 *)((long)puVar1 + -0xd8);
      uVar10 = 0x10;
      puVar3 = puVar2;
      puVar7 = (undefined1 *)((long)puVar1 + -0x120);
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
    param_5 = 0;
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x58)) {
    return puVar8;
  }
  ___stack_chk_fail();
  *(undefined **)((long)puVar1 + -0x170) = unaff_x26;
  *(undefined **)((long)puVar1 + -0x168) = unaff_x25;
  *(undefined **)((long)puVar1 + -0x160) = puVar14;
  *(undefined **)((long)puVar1 + -0x158) = puVar11;
  *(undefined **)((long)puVar1 + -0x150) = puVar9;
  *(undefined8 *)((long)puVar1 + -0x148) = param_5;
  *(undefined **)((long)puVar1 + -0x140) = puVar8;
  *(undefined **)((long)puVar1 + -0x138) = puVar2;
  *(undefined1 **)((long)puVar1 + -0x130) = (undefined1 *)((long)puVar1 + -0x10);
  *(code **)((long)puVar1 + -0x128) = FUN_104c6da08;
  _objc_retain(puVar7);
  _objc_retain(uVar10);
  _objc_retain(puVar6);
  func_0x00010c2570e0(puVar7);
  uVar12 = *(undefined8 *)(puVar3 + 0x20);
  puVar5 = puVar7;
  func_0x00010bf51b60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c8ac30(uVar12,uVar10,puVar5,1);
  _objc_release(puVar5);
  func_0x00010c1247a0(puVar6);
  func_0x00010c1e91c0(puVar6);
  puVar14 = PTR_PTR_1126ae768;
  _objc_opt_new(PTR_PTR_1126ae768);
  puVar5 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  func_0x00010c20c0a0(puVar14);
  _objc_release(puVar5);
  puVar6 = puVar7;
  func_0x00010c124820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c124860();
  _objc_release(puVar6);
  uVar13 = (uint)puVar5;
  if ((int)uVar13 < 2) {
    if (1 < uVar13) {
      if (uVar13 != 0xfbadbeef) goto LAB_104c6db9c;
      uVar12 = *(undefined8 *)(puVar3 + 0x20);
      puVar6 = puVar7;
      func_0x00010bf51b60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_104c8b2c0(uVar12,uVar10,puVar6,1);
      _objc_release(puVar6);
    }
    func_0x00010c14ad00(puVar3);
  }
  else {
    if (uVar13 != 2) {
      if (uVar13 != 3) goto LAB_104c6db9c;
      func_0x00010c14ad00(puVar3);
    }
    func_0x00010c14a220(puVar3);
  }
LAB_104c6db9c:
  _objc_release(puVar14);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return puVar7;
}



/* Entry: 104c6d7c8; end: 104c6da07;  */

undefined1 * FUN_104c6d7c8(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar9 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar9 == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        puVar8 = *(undefined1 **)(lVar12 * 8);
        if ((puVar7 == (undefined1 *)0x0) ||
           (puVar1 = puVar8, func_0x00010c0b4fe0(), (long)puVar1 < (long)puVar7)) {
          func_0x00010c0b4fe0();
          puVar7 = puVar8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
      lVar9 = param_1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar7 = auStack_1f8;
  uVar5 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    lVar9 = *plStack_230;
    do {
      lVar6 = 0;
      do {
        if (*plStack_230 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        puVar7 = *(undefined1 **)(lStack_238 + lVar6 * 8);
        if ((puVar8 == (undefined1 *)0x0) ||
           (puVar1 = puVar7, func_0x00010c0b4fe0(), (long)puVar8 < (long)puVar1)) {
          func_0x00010c0b4fe0();
          puVar8 = puVar7;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      puVar7 = auStack_1f8;
      uVar5 = 0x10;
      lVar2 = param_1;
      puVar4 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  _objc_retain(puVar7);
  func_0x00010c2570e0(puVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  puVar8 = (undefined1 *)puVar4;
  func_0x00010bf51b60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c8ac30(uVar10,uVar5,puVar8,1);
  _objc_release(puVar8);
  func_0x00010c1247a0(puVar7);
  func_0x00010c1e91c0(puVar7);
  puVar3 = PTR_PTR_1126ae768;
  _objc_opt_new(PTR_PTR_1126ae768);
  puVar8 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release(puVar7);
  func_0x00010c20c0a0(puVar3);
  _objc_release(puVar8);
  puVar7 = (undefined1 *)puVar4;
  func_0x00010c124820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c124860();
  _objc_release(puVar7);
  uVar11 = (uint)puVar8;
  if ((int)uVar11 < 2) {
    if (1 < uVar11) {
      if (uVar11 != 0xfbadbeef) goto LAB_104c6db9c;
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      puVar7 = (undefined1 *)puVar4;
      func_0x00010bf51b60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_104c8b2c0(uVar10,uVar5,puVar7,1);
      _objc_release(puVar7);
    }
    func_0x00010c14ad00(param_1);
  }
  else {
    if (uVar11 != 2) {
      if (uVar11 != 3) goto LAB_104c6db9c;
      func_0x00010c14ad00(param_1);
    }
    func_0x00010c14a220(param_1);
  }
LAB_104c6db9c:
  _objc_release(puVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return (undefined1 *)puVar4;
}



/* Entry: 104c6da08; end: 104c6dbc7; -[SCBillboardCooldownCapManager _recycleStorageUnitWithRule:storageMetadata:identifier:] */

void FUN_104c6da08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2570e0(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bf51b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c8ac30(uVar3,param_5,uVar1,1);
  _objc_release(uVar1);
  func_0x00010c1247a0(param_4);
  func_0x00010c1e91c0(param_4);
  puVar2 = PTR_PTR_1126ae768;
  _objc_opt_new(PTR_PTR_1126ae768);
  uVar1 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010c20c0a0(puVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c124820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c124860();
  _objc_release(uVar1);
  uVar4 = (uint)uVar3;
  if ((int)uVar4 < 2) {
    if (1 < uVar4) {
      if (uVar4 != 0xfbadbeef) goto LAB_104c6db9c;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = param_3;
      func_0x00010bf51b60(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_104c8b2c0(uVar3,param_5,uVar1,1);
      _objc_release(uVar1);
    }
    func_0x00010c14ad00(param_1);
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 != 3) goto LAB_104c6db9c;
      func_0x00010c14ad00(param_1);
    }
    func_0x00010c14a220(param_1);
  }
LAB_104c6db9c:
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c6dbc8; end: 104c6dd5b; -[SCBillboardCooldownCapManager _recycleStorageForRule:identifier:] */

undefined8
FUN_104c6dbc8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar7 = param_4;
  func_0x00010bfdafc0();
  if ((int)uVar7 == 0) {
    uVar7 = 0;
    goto LAB_104c6dd28;
  }
  lVar1 = param_2;
  func_0x00010be21fa0(param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be21fc0(param_2,param_3,param_4,lVar1,param_5);
  lVar3 = lVar1;
  func_0x00010c2571c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c124820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1247a0();
  func_0x00010c1247e0();
  uVar7 = uVar4;
  func_0x00010c1247c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c296de0();
  _objc_release(uVar7);
  if (lVar2 == 0) {
LAB_104c6dce8:
    uVar7 = 0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar6);
    if (param_1 < (double)(lVar2 + (int)uVar5)) goto LAB_104c6dce8;
    func_0x00010be87ec0(param_2,param_3,param_4,lVar3,param_5);
    uVar7 = 1;
  }
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
LAB_104c6dd28:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 104c6dd5c; end: 104c6de7f; -[SCBillboardCooldownCapManager getClientStorageUnit:identifier:] */

void FUN_104c6dd5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be5a060(param_1);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR_PTR_1126ae768;
    _objc_opt_class(PTR_PTR_1126ae768);
    puVar1 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ae768;
      _objc_opt_new(PTR_PTR_1126ae768);
      func_0x00010c14a220(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c6de80; end: 104c6df37; -[SCBillboardCooldownCapManager saveClientStorageUnit:withStorageId:identifier:] */

void FUN_104c6de80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010be5a060(param_1,param_2,&PTR____CFConstantStringClassReference_110dab238,param_5);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab298);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_2,param_3,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c6df38; end: 104c6e11b; -[SCBillboardCooldownCapManager getServerStorageUnit:identifier:] */

/* WARNING: Removing unreachable block (ram,0x000104c6e04c) */

void FUN_104c6df38(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be5a060(param_1);
LAB_104c6e0f0:
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      func_0x00010be3bb20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      if (param_1 == 0) goto LAB_104c6e0f0;
    }
    puVar5 = PTR_PTR_1126ae768;
    _objc_alloc(PTR_PTR_1126ae768);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar5);
    _objc_retain(0);
    _objc_release(puVar4);
    _objc_release(0);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104c6e11c; end: 104c6e1eb; -[SCBillboardCooldownCapManager _initializeServerStorage:identifier:] */

void FUN_104c6e11c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126ae768;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c14ad00(param_1);
  _objc_release(param_4);
  _objc_release(puVar1);
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c296ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104c6e1ec; end: 104c6e3c3; -[SCBillboardCooldownCapManager saveServerStorageUnit:withStorageId:identifier:] */

void FUN_104c6e1ec(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010be5a060(param_1);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      FUN_104c8a2e0(uVar6,&PTR____CFConstantStringClassReference_110dab278,
                    &PTR____CFConstantStringClassReference_110dab258,puVar5,1);
      _objc_release(puVar5);
    }
    else {
      puVar5 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c08fa60(puVar4);
      func_0x00010c0df840(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      FUN_104c8a0b0(uVar6,puVar2,puVar3,1);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar1);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19ab60();
      _objc_release(uVar6);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c6e3c4; end: 104c6e4c7; -[SCBillboardCooldownCapManager updateImpressionPropertiesWithStorageId:campaignCOFName:] */

void FUN_104c6e3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfc3b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6e4c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a220(param_1);
  _objc_release(uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfca1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6e4c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ad00(param_1);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c6e4c8; end: 104c6e547;  */

void FUN_104c6e4c8(long param_1)

{
  long lVar1;
  
  _objc_retain();
  if (param_1 != 0) {
    func_0x00010bfea820(param_1);
    func_0x00010c1ab220(param_1);
    func_0x00010c1b7e60(param_1);
    lVar1 = param_1;
    func_0x00010bfb16c0();
    if (lVar1 != 0) {
      func_0x00010bfb16c0(param_1);
    }
    func_0x00010c19d1e0(param_1);
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c6e548; end: 104c6e64b; -[SCBillboardCooldownCapManager updateClickPropertiesWithStorageId:campaignCOFName:] */

void FUN_104c6e548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfc3b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6e64c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a220(param_1);
  _objc_release(uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfca1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6e64c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ad00(param_1);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c6e64c; end: 104c6e6d7;  */

void FUN_104c6e64c(long param_1)

{
  long lVar1;
  
  _objc_retain();
  if (param_1 != 0) {
    func_0x00010bf3c820(param_1);
    func_0x00010c17c920(param_1);
    func_0x00010c1b79a0(param_1);
    lVar1 = param_1;
    func_0x00010bfb0f80();
    if (lVar1 != 0) {
      func_0x00010bfb0f80(param_1);
    }
    func_0x00010c19ce60(param_1);
    func_0x00010c183900(param_1);
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c6e6d8; end: 104c6e7db; -[SCBillboardCooldownCapManager updateDismissPropertiesWithStorageId:campaignCOFName:] */

void FUN_104c6e6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfc3b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6e7dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a220(param_1);
  _objc_release(uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfca1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104c6e7dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ad00(param_1);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c6e7dc; end: 104c6e86f;  */

void FUN_104c6e7dc(long param_1)

{
  long lVar1;
  
  _objc_retain();
  if (param_1 != 0) {
    func_0x00010bf836a0(param_1);
    func_0x00010c18f520(param_1);
    func_0x00010bf4fde0(param_1);
    func_0x00010c183900(param_1);
    func_0x00010c1b7b80(param_1);
    lVar1 = param_1;
    func_0x00010bfb10e0();
    if (lVar1 != 0) {
      func_0x00010bfb10e0(param_1);
    }
    func_0x00010c19cee0(param_1);
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c6e870; end: 104c6e87f; -[SCBillboardCooldownCapManager _logUnexpectedStorageIdWithStorageType:identifier:] */

char * FUN_104c6e870(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_400;
  undefined *puStack_3f8;
  undefined8 *puStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar13 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  pcVar6 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar17 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar16 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    uVar13 = 1;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    puVar17 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_104c8aa00;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar2;
  pcVar10 = pcVar6;
  uVar14 = uVar13;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar17;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar8 = "";
    unaff_x23 = acStack_138;
    pcVar10 = acStack_138;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar1 = 0;
    puVar17 = auStack_118;
    uVar14 = uVar13;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_104c8ac30;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar8;
  pcVar11 = pcVar10;
  uVar13 = uVar14;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar17;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar16 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar11 = acStack_1d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar1 = 0;
    puVar17 = auStack_1b8;
    uVar13 = uVar14;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar2 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c8ae60;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar4;
  pcVar3 = pcVar11;
  uVar14 = uVar13;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar17;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar10;
  pcStack_1f8 = pcVar8;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  _objc_retain(pcVar11);
  puVar17 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar16 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar6 = "";
    unaff_x23 = acStack_278;
    pcVar3 = acStack_278;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar1 = 0;
    puVar17 = auStack_258;
    uVar14 = uVar13;
    do {
      if ((&cStack_229)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar4);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_104c8b090;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar6;
  pcVar10 = pcVar3;
  uVar13 = uVar14;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar17;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar11;
  pcStack_298 = pcVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar3);
  puVar17 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar16 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar2);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar8 = "";
    unaff_x23 = acStack_318;
    pcVar10 = acStack_318;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar1 = 0;
    puVar17 = auStack_2f8;
    uVar13 = uVar14;
    do {
      if ((&cStack_2c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar6);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_328 = FUN_104c8b2c0;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar10;
  uVar14 = uVar13;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar17;
  pcStack_348 = pcVar2;
  pcStack_340 = pcVar3;
  pcStack_338 = pcVar6;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar8);
  cVar9 = (char)pcVar11;
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_398,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_380,pcVar2);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar12 = &uStack_3b8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108449c0);
    puStack_3a0 = &uStack_3b8;
    func_0x00010007e5dc(&puStack_3a0);
    lVar1 = 0;
    puVar17 = auStack_398;
    uVar14 = uVar13;
    do {
      if ((&cStack_369)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar1));
      }
      cVar9 = (char)puVar12;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar2 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  ppcVar7 = &pcStack_400;
  pcStack_3c8 = FUN_104c8b4f0;
  puStack_3f0 = puVar17;
  pcStack_3e8 = pcVar2;
  pcStack_3e0 = pcVar10;
  pcStack_3d8 = pcVar8;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(uVar14);
  puStack_3f8 = PTR_PTR_1126e37e0;
  pcStack_400 = pcVar6;
  _objc_msgSendSuper2(&pcStack_400,PTR_s_init_1125d9248);
  if (ppcVar7 != (char **)0x0) {
    *(char *)((long)ppcVar7 + 8) = cVar9;
    uVar13 = uVar14;
    func_0x00010bf51e00();
    uVar15 = *(undefined8 *)((long)ppcVar7 + 0x10);
    *(undefined8 *)((long)ppcVar7 + 0x10) = uVar13;
    _objc_release(uVar15);
  }
  _objc_release(uVar14);
  return (char *)ppcVar7;
}



/* Entry: 104c6e880; end: 104c6e8c7; -[SCBillboardCooldownCapManager .cxx_destruct] */

void FUN_104c6e880(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6e8c8; end: 104c6ee5b; -[SCBillboardCampaignServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6e8c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126ae788;
  _objc_alloc_init();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11270fad8);
  *(undefined **)(param_1 + _DAT_11270fad8) = puVar1;
  _objc_release(uVar13);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104c6ee5c;
  puStack_90 = &UNK_110842748;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11270fadc);
  *(undefined **)(param_1 + _DAT_11270fadc) = puVar2;
  _objc_release(uVar13);
  lVar3 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11270fae4);
  *(undefined **)(param_1 + _DAT_11270fae4) = puVar2;
  _objc_release(uVar13);
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104c6ee9c;
  puStack_b8 = &UNK_110842778;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x104c6eedc;
  puStack_e0 = &UNK_1108427a8;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x104c6ef1c;
  puStack_108 = &UNK_1108427d8;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x104c6ef5c;
  puStack_138 = &UNK_110842808;
  _objc_copyWeak(auStack_128,auStack_80);
  puStack_130 = puVar6;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae720;
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x104c6efa4;
  puStack_180 = &UNK_110842838;
  _objc_copyWeak(auStack_158,auStack_80);
  puStack_178 = puVar2;
  puStack_170 = puVar7;
  puStack_168 = puVar6;
  puStack_160 = puVar8;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae720;
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x104c6eff0;
  puStack_1b8 = &UNK_110842868;
  _objc_copyWeak(auStack_1a0,auStack_80);
  puStack_1b0 = puVar9;
  puStack_1a8 = puVar6;
  func_0x00010bf11fe0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae720;
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x104c6f038;
  puStack_1f8 = &UNK_110842898;
  _objc_copyWeak(auStack_1d8,auStack_80);
  puStack_1f0 = puVar9;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar6;
  func_0x00010bf11fe0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_218,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126ae798;
  _objc_alloc(PTR_PTR_1126ae798);
  func_0x00010c011520();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_218);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104c6ee5c; end: 104c6f0cb;  */

void FUN_104c6ee5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c6f0cc; end: 104c6f15b; -[SCBillboardCampaignServiceProvider _createProtoCOFReader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6f0cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae7a0;
  _objc_alloc(PTR_PTR_1126ae7a0);
  lVar2 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe7e0(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_11270fad8));
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c6f15c; end: 104c6f463; -[SCBillboardCampaignServiceProvider _createBillboardFHPCampaignDataProviderWithDataProvider:cooldownCapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6f15c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae7a8;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11270fae8;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c25d220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11270faec;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11270faf0;
  lVar10 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar12 = lVar17;
  func_0x00010bfb9cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11270faf4;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11270fafc;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11270fb00;
  _objc_loadWeakRetained();
  lVar16 = param_1;
  func_0x00010c08d2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008b20(puVar2);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar17);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c6f464; end: 104c6f4a3;  */

void FUN_104c6f464(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c6f4a4; end: 104c6f683; -[SCBillboardCampaignServiceProvider _createBillboardFSTCampaignDataProviderWithDataProvider:localStorage:cooldownCapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6f4a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126ae7b0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11270fadc);
  lVar5 = param_1 + _DAT_11270fae8;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c25d220();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11270fad8);
  lVar7 = param_1 + _DAT_11270fb04;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c2a2220();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11270faec;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeb480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008b40(puVar1,param_2,uVar2,lVar4,uVar11,lVar6,uVar12,param_4,lVar8,lVar10,param_1,
                      param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c6f684; end: 104c6f91b; -[SCBillboardCampaignServiceProvider _createBillboardPACCampaignDataProviderWithDataProvider:cooldownCapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6f684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae7b8;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11270fae8;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c25d220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11270faf4;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11270faec;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11270fb08;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008b00(puVar2);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c6f91c; end: 104c6f95b;  */

void FUN_104c6f91c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c6f95c; end: 104c6f9f3; -[SCBillboardCampaignServiceProvider _createBillboardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6f95c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae7c0;
  _objc_alloc(PTR_PTR_1126ae7c0);
  param_1 = param_1 + _DAT_11270fb0c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae7c8;
  _objc_alloc_init(PTR_PTR_1126ae7c8);
  func_0x00010c05f200(puVar1,param_2,lVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c6f9f4; end: 104c6fe5b; -[SCBillboardCampaignServiceProvider _createCampaignDataProviderWithLocalStorage:billboardGrpcService:cooldownCapManager:rankingStrategyCalculator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6f9f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae7d0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11270faf4;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11270fb10;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08d2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11270fb14;
  lVar9 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar11 = lVar25;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11270fb18;
  lVar12 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar14 = lVar26;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11270fb1c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11270fb20;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11270fb24;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11270fb28;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010bebc100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11270fb2c;
  _objc_loadWeakRetained();
  lVar24 = param_1;
  func_0x00010c0f50a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffeb20();
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar26);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c6fe5c; end: 104c6fe9b;  */

void FUN_104c6fe5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdee800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c6fe9c; end: 104c6ffaf; -[SCBillboardCampaignServiceProvider _createCooldownCapManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6fe9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126ae7d8;
  _objc_alloc(PTR_PTR_1126ae7d8);
  lVar2 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11270fb30;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11270faf4;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae7e0;
  _objc_opt_new(PTR_PTR_1126ae7e0);
  func_0x00010bffeb00(puVar1,param_2,lVar3,lVar5,lVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c6ffb0; end: 104c7004f; -[SCBillboardCampaignServiceProvider _createBillboardGrpcService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6ffb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae7e8;
  _objc_alloc(PTR_PTR_1126ae7e8);
  lVar2 = param_1 + _DAT_11270fb34;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_11270fb24;
  _objc_loadWeakRetained(param_1);
  lVar3 = lVar2;
  FUN_104c6c074(lVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7700(puVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c70050; end: 104c700b3; -[SCBillboardCampaignServiceProvider _createRankingStrategyCalculatorWithCooldownCapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c70050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae7f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03b8a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c700b4; end: 104c70143; -[SCBillboardCampaignServiceProvider _createHoldoutDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c700b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae7f8;
  _objc_alloc(PTR_PTR_1126ae7f8);
  lVar2 = param_1 + _DAT_11270fae0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe7e0(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_11270fad8));
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c70144; end: 104c701d3; -[SCBillboardCampaignServiceProvider _createLocalStorage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c70144(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae800;
  _objc_alloc(PTR_PTR_1126ae800);
  lVar2 = param_1 + _DAT_11270fb30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038120(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_11270fad8));
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c701d4; end: 104c702ef; -[SCBillboardCampaignServiceProvider _signalProvidersFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c701d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11270fb44);
  }
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bf9d5c0(uVar3);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c702f0; end: 104c7033b;  */

void FUN_104c702f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae808;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c7033c; end: 104c70437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c7033c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  if (lVar2 != 0) {
    puVar4 = (undefined *)(lVar2 + _DAT_11270fb38);
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010bf22660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar1 = puVar5;
    }
    _objc_retain(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(lVar2 + _DAT_11270fb3c);
    *(undefined **)(lVar2 + _DAT_11270fb3c) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar6);
    func_0x00010befa160(uVar3);
    _objc_release(puVar1);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104c70438; end: 104c705bf; -[SCBillboardCampaignServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c70438(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270faf8,0);
  _objc_storeStrong(param_1 + _DAT_11270fb44,0);
  _objc_destroyWeak(param_1 + _DAT_11270fafc);
  _objc_destroyWeak(param_1 + _DAT_11270fb38);
  _objc_destroyWeak(param_1 + _DAT_11270fb2c);
  _objc_destroyWeak(param_1 + _DAT_11270fb28);
  _objc_destroyWeak(param_1 + _DAT_11270fb04);
  _objc_destroyWeak(param_1 + _DAT_11270fb20);
  _objc_destroyWeak(param_1 + _DAT_11270fb34);
  _objc_destroyWeak(param_1 + _DAT_11270fb30);
  _objc_destroyWeak(param_1 + _DAT_11270fb14);
  _objc_destroyWeak(param_1 + _DAT_11270fb0c);
  _objc_destroyWeak(param_1 + _DAT_11270fb24);
  _objc_destroyWeak(param_1 + _DAT_11270fb1c);
  _objc_destroyWeak(param_1 + _DAT_11270faf0);
  _objc_destroyWeak(param_1 + _DAT_11270faf4);
  _objc_destroyWeak(param_1 + _DAT_11270fb18);
  _objc_destroyWeak(param_1 + _DAT_11270fae8);
  _objc_destroyWeak(param_1 + _DAT_11270fb08);
  _objc_destroyWeak(param_1 + _DAT_11270fae0);
  _objc_destroyWeak(param_1 + _DAT_11270faec);
  _objc_destroyWeak(param_1 + _DAT_11270fb00);
  _objc_destroyWeak(param_1 + _DAT_11270fb10);
  _objc_destroyWeak(param_1 + _DAT_11270fb40);
  _objc_storeStrong(param_1 + _DAT_11270fb3c,0);
  _objc_storeStrong(param_1 + _DAT_11270fae4,0);
  _objc_storeStrong(param_1 + _DAT_11270fadc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270fad8,0);
  return;
}



/* Entry: 104c705c0; end: 104c708cb;  */

void FUN_104c705c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104c74ac4;
  uStack_60 = 0x104c74ad4;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_104c74ac4;
  uStack_90 = 0x104c74ad4;
  uStack_88 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_104c74ac4;
  uStack_c0 = 0x104c74ad4;
  uStack_b8 = 0;
  uVar3 = param_1;
  func_0x00010bfe7e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c10e0();
  _objc_release(uVar3);
  lVar4 = puStack_a8[5];
  if (lVar4 == 0) {
    lVar4 = param_2;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    puVar1 = puStack_78;
    puVar2 = PTR_PTR_1126ae850;
    if (lVar5 == 0) {
      uVar3 = puStack_78[5];
      _objc_retain(uVar3);
      lVar5 = puVar1[5];
      puVar1[5] = uVar3;
    }
    else {
      lVar5 = param_2;
      func_0x00010bfe5b40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28fae0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puStack_78[5];
      puStack_78[5] = puVar2;
      _objc_release(uVar3);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = puStack_78[5];
    if (lVar4 == 0) {
      lVar4 = param_2;
      func_0x00010bf8e2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      puVar1 = puStack_d8;
      puVar2 = PTR_PTR_1126ae850;
      if (lVar5 == 0) {
        uVar3 = puStack_d8[5];
        _objc_retain(uVar3);
        lVar5 = puVar1[5];
        puVar1[5] = uVar3;
      }
      else {
        lVar5 = param_2;
        func_0x00010bf8e2c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8ea60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puStack_d8[5];
        puStack_d8[5] = puVar2;
        _objc_release(uVar3);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = puStack_d8[5];
    }
  }
  _objc_retain(lVar4);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104c708cc; end: 104c70f8b; -[SCBillboardFHPCampaignDataProviderImpl initWithDataProvider:circumstanceEngine:billboardLogger:stringFetcher:userSessionContext:friendsFeedDataCoordinator:friendsFeedActiveSignalProvider:featureSettingsService:grapheneRegistry:fhpUIConfigScopeExposer:fhpUIConfigFactoryServices:performer:billboardUserJourneyLogger:cooldownCapManager:] */

undefined8 *
FUN_104c708cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
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
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_80 = PTR_PTR_1126e3778;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar12 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar12);
    _objc_retain(param_3);
    uVar12 = puVar1[0xe];
    puVar1[0xe] = param_3;
    _objc_release(uVar12);
    _objc_retain(param_4);
    uVar12 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104c70f8c;
    puStack_98 = &UNK_1108429c8;
    _objc_retain(param_4);
    uStack_90 = param_4;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar12);
    _objc_retain(param_5);
    uVar12 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar12);
    _objc_retain(param_6);
    uVar12 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar12);
    _objc_retain(param_7);
    uVar12 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar12);
    _objc_retain(param_10);
    uVar12 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar12);
    _objc_retain(param_11);
    uVar12 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar12);
    _objc_retain(param_14);
    uVar12 = puVar1[8];
    puVar1[8] = param_14;
    _objc_release(uVar12);
    _objc_retain(param_15);
    uVar12 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar12);
    _objc_retain(param_16);
    uVar12 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126ae818;
    _objc_alloc();
    func_0x00010bffe840();
    uVar12 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar12);
    *(undefined1 *)(puVar1 + 0xb) = 1;
    _objc_initWeak(auStack_b8,puVar1);
    uVar12 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bfba080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x104c70ff8;
    puStack_c8 = &UNK_110842c58;
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar12);
    uVar12 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bf49880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf870e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x104c71070;
    puStack_f0 = &UNK_110842c58;
    _objc_copyWeak(auStack_e8,auStack_b8);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar12);
    lVar7 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      lVar7 = param_9;
      func_0x00010c269d40(param_9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfa3c60();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_110,auStack_b8);
      lVar11 = lVar10;
      func_0x00010c25ff60(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_destroyWeak(auStack_110);
    }
    uVar12 = puVar1[0x10];
    puVar1[0x10] = 0;
    _objc_release(uVar12);
    uVar12 = puVar1[0x11];
    puVar1[0x11] = 0;
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar12 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar12 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar12);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 104c70f8c; end: 104c71107;  */

void FUN_104c70f8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf05fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c71108; end: 104c7110f; -[SCBillboardFHPCampaignDataProviderImpl campaignDataSourceObservable] */

void FUN_104c71108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_campaignDataSourceObservable_1125a8978);
  return;
}



/* Entry: 104c71110; end: 104c7120f; -[SCBillboardFHPCampaignDataProviderImpl getFeedHeaderPromptCampaignInfoForRequestor:] */

void FUN_104c71110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(puVar1);
  uStack_40 = param_3;
  func_0x00010c2a13c0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c71210; end: 104c71247;  */

void FUN_104c71210(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebfa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c71248; end: 104c713c3; -[SCBillboardFHPCampaignDataProviderImpl _startCampaignInfoRequestWithPromise:requestor:] */

void FUN_104c71248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x104c713fc;
    puStack_a0 = &UNK_110842a68;
    ppuVar3 = &puStack_b8;
    _objc_copyWeak(auStack_90,auStack_48);
    _objc_retain(param_3);
    uStack_98 = param_3;
    uStack_88 = param_4;
    func_0x00010c09ad40(uVar2);
    uVar2 = uStack_98;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104c713c4;
    puStack_68 = &UNK_110842a68;
    ppuVar3 = &puStack_80;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar2);
    uVar2 = uStack_60;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(ppuVar3 + 5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104c713c4; end: 104c71433;  */

void FUN_104c713c4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1d960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c71434; end: 104c7156b; -[SCBillboardFHPCampaignDataProviderImpl _getCampaignInfoWithCampaignInfoPromise:requestor:] */

void FUN_104c71434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be157e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104c7156c;
  puStack_70 = &UNK_110842a98;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(lVar1);
  ppuVar2 = &puStack_88;
  lStack_60 = lVar1;
  uStack_50 = param_4;
  _objc_retainBlock(ppuVar2);
  func_0x00010bfc8fa0(*(undefined8 *)(param_1 + 0x70));
  _objc_release(ppuVar2);
  _objc_release(lStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104c7156c; end: 104c715c3;  */

void FUN_104c7156c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c715c4; end: 104c71723; -[SCBillboardFHPCampaignDataProviderImpl _calculateFirstEligibleCampaignWithRanking:campaignInfoPromise:readOnlyBillboardSignals:requestor:] */

void FUN_104c715c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab338;
  if (*(char *)(param_1 + 0x58) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab358;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc38c0(uVar5,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071680();
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf2c260(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1d9e0(param_1,param_2,param_4,uVar2,0,puVar4,param_5,(uint)uVar3 ^ 1,uVar5,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104c71724; end: 104c7172b; -[SCBillboardFHPCampaignDataProviderImpl isDisplayingFHPCampaign] */

void FUN_104c71724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 104c7172c; end: 104c7173b; -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsRemoved] */

void FUN_104c7172c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_next__112614028,PTR____kCFBooleanFalse_11034ab60)
  ;
  return;
}



/* Entry: 104c7173c; end: 104c718fb; -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsDisplayedWithCampaign:] */

void FUN_104c7173c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286700(uVar5,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ae828;
    func_0x00010bfea780(PTR_PTR_1126ae828);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07900(param_1,param_2,param_3,puVar4);
    _objc_release(puVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90),param_2,PTR____kCFBooleanTrue_11034ab68);
    lVar1 = param_3;
    func_0x00010bf3f4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c262860(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_104c767fc();
      _objc_release(uVar5);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e6f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6180(uVar5,param_2,lVar1,2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


