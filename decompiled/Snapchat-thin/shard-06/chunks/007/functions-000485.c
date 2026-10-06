/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d45930; end: 104d45933; -[SCPreRegistrationVerificationEventLogger logRegistrationUserSuccess:] */

void FUN_104d45930(void)

{
  return;
}



/* Entry: 104d45934; end: 104d459a7; -[SCUnverifiedUserStorageService initWithPreferences:] */

undefined1 * FUN_104d45934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3fd8;
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



/* Entry: 104d459a8; end: 104d45a4f; -[SCUnverifiedUserStorageService setEmail:] */

void FUN_104d459a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be20fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126afc00;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c127ca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f3e0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be73610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__persistUser_11257a720);
  return;
}



/* Entry: 104d45a50; end: 104d45a93; -[SCUnverifiedUserStorageService email] */

void FUN_104d45a50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be20fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d45a94; end: 104d45b3b; -[SCUnverifiedUserStorageService setRegistrationPhoneNumber:] */

void FUN_104d45a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be20fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126afc00;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf8d6c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f3e0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be73610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__persistUser_11257a720);
  return;
}



/* Entry: 104d45b3c; end: 104d45b7f; -[SCUnverifiedUserStorageService registrationPhoneNumber] */

void FUN_104d45b3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be20fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c127ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d45b80; end: 104d45b8b; -[SCUnverifiedUserStorageService clear] */

void FUN_104d45b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setUnverifiedUser__112664a50,0);
  return;
}



/* Entry: 104d45b8c; end: 104d45b97; -[SCUnverifiedUserStorageService _persistUser] */

void FUN_104d45b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setUnverifiedUser__112664a50,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104d45b98; end: 104d45c0f; -[SCUnverifiedUserStorageService _getOrCreate] */

void FUN_104d45b98(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c282ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126afc00;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar1);
    func_0x00010be73600(param_1);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104d45c10; end: 104d45c3f; -[SCUnverifiedUserStorageService .cxx_destruct] */

void FUN_104d45c10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d45c40; end: 104d45c8f; -[SCPreRegistrationVerificationStateTransition initWithShouldShowPrivacyPolicyOnFirstScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d45c40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3fe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112711bec) = param_3;
  }
  return;
}



/* Entry: 104d45c90; end: 104d45ccb; -[SCPreRegistrationVerificationStateTransition nextStateConfigFromState:action:context:] */

void FUN_104d45c90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3fe0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_nextStateConfigFromState_action__1126141c0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d45ccc; end: 104d45f57; -[SCPreRegistrationVerificationStateTransition stateConfigForState:context:] */

void FUN_104d45ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0be040(param_4);
  puStack_58 = PTR_PTR_1126e3fe0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_stateConfigForState_context__112672370,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  puVar2 = puVar1;
  func_0x00010c29c000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0ec860();
  _objc_release(puVar2);
  uStack_68 = (ulong)puVar3 | 1;
  func_0x00010c0bda20(param_3);
  puVar4 = PTR_PTR_1126afc38;
  _objc_alloc(PTR_PTR_1126afc38);
  puVar2 = puVar1;
  func_0x00010c29c000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c276d00();
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007320(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126afc40;
  _objc_alloc(PTR_PTR_1126afc40);
  puVar2 = puVar1;
  func_0x00010c252440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c040(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d45f58; end: 104d45f63;  */

void FUN_104d45f58(void)

{
  return;
}



/* Entry: 104d45f64; end: 104d4607b;  */

void FUN_104d45f64(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010be802e0();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(ulong *)(lVar2 + 0x18) = *(ulong *)(lVar2 + 0x18) | uVar1;
  return;
}



/* Entry: 104d4607c; end: 104d4608f; -[SCPreRegistrationVerificationStateTransition _privacyPolicyTextOptionForEmailEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d4607c(long param_1)

{
  return (ulong)*(byte *)(param_1 + _DAT_112711bec) << 4;
}



/* Entry: 104d46090; end: 104d460a3; -[SCPreRegistrationVerificationStateTransition _privacyPolicyTextOptionForPhoneEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d46090(long param_1)

{
  return (ulong)*(byte *)(param_1 + _DAT_112711bec) << 4;
}



/* Entry: 104d460a4; end: 104d460e3; -[SCUserVerificationDefaultStateTransition init] */

void FUN_104d460a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126e3fe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 3;
  }
  return;
}



/* Entry: 104d460e4; end: 104d4620f; -[SCUserVerificationDefaultStateTransition nextStateConfigFromState:action:context:] */

void FUN_104d460e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = 0;
  if (param_4 < 3) {
    if (param_4 == 1) {
      uVar1 = param_1;
      func_0x00010bec2560(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 2) {
      uVar1 = param_1;
      func_0x00010bec25e0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_4 == 3) {
    uVar1 = param_1;
    func_0x00010bec25a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 4) {
    uVar1 = param_1;
    func_0x00010bec2600(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 5) {
    uVar1 = param_1;
    func_0x00010bec25c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c252520(param_1,param_2,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d46210; end: 104d463b7; -[SCUserVerificationDefaultStateTransition _stateForExitActionFromCurrentState:] */

void FUN_104d46210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104d463b8;
  uStack_40 = 0x104d463c8;
  uStack_38 = 0;
  func_0x00010c0bda20(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d463b8; end: 104d463cf;  */

void FUN_104d463b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d463d0; end: 104d465ef;  */

void FUN_104d463d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010beec3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d465f0; end: 104d465f7;  */

void FUN_104d465f0(void)

{
  return;
}



/* Entry: 104d465f8; end: 104d4679f; -[SCUserVerificationDefaultStateTransition _stateForSubmitActionFromCurrentState:] */

void FUN_104d465f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104d463b8;
  uStack_40 = 0x104d463c8;
  uStack_38 = 0;
  func_0x00010c0bda20(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d467a0; end: 104d469bf;  */

void FUN_104d467a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010c0fada0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d469c0; end: 104d469c7;  */

void FUN_104d469c0(void)

{
  return;
}



/* Entry: 104d469c8; end: 104d46b23; -[SCUserVerificationDefaultStateTransition _stateForSkipActionFromCurrentState:] */

void FUN_104d469c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d463b8;
  uStack_30 = 0x104d463c8;
  uStack_28 = 0;
  func_0x00010c0bda20(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d46b24; end: 104d46b33;  */

void FUN_104d46b24(void)

{
  return;
}



/* Entry: 104d46b34; end: 104d46c1f;  */

void FUN_104d46b34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010bf880e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d46c20; end: 104d46c2b;  */

void FUN_104d46c20(void)

{
  return;
}



/* Entry: 104d46c2c; end: 104d46db7; -[SCUserVerificationDefaultStateTransition _stateForSwitchActionFromCurrentState:] */

void FUN_104d46c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104d463b8;
  uStack_40 = 0x104d463c8;
  uStack_38 = 0;
  func_0x00010c0bda20(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d46db8; end: 104d46e3f;  */

void FUN_104d46db8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010c0fadc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d46e40; end: 104d46e43;  */

void FUN_104d46e40(void)

{
  return;
}



/* Entry: 104d46e44; end: 104d46e87;  */

void FUN_104d46e44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010c0fadc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d46e88; end: 104d46e8b;  */

void FUN_104d46e88(void)

{
  return;
}



/* Entry: 104d46e8c; end: 104d46ecb;  */

void FUN_104d46e8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bec2620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d46ecc; end: 104d46ecf;  */

void FUN_104d46ecc(void)

{
  return;
}



/* Entry: 104d46ed0; end: 104d46f0f;  */

void FUN_104d46ed0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bec2620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d46f10; end: 104d46f17;  */

void FUN_104d46f10(void)

{
  return;
}



/* Entry: 104d46f18; end: 104d47053; -[SCUserVerificationDefaultStateTransition _stateForSkipVerificationActionFromCurrentState:] */

void FUN_104d46f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d463b8;
  uStack_30 = 0x104d463c8;
  uStack_28 = 0;
  func_0x00010c0bda20(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d47054; end: 104d47063;  */

void FUN_104d47054(void)

{
  return;
}



/* Entry: 104d47064; end: 104d470eb;  */

void FUN_104d47064(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010bf880e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d470ec; end: 104d470fb;  */

void FUN_104d470ec(void)

{
  return;
}



/* Entry: 104d470fc; end: 104d4734b; -[SCUserVerificationDefaultStateTransition stateConfigForState:context:] */

void FUN_104d470fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0be040(param_4);
  func_0x00010c0bda20(param_3);
  puVar1 = PTR_PTR_1126afc38;
  _objc_alloc(PTR_PTR_1126afc38);
  puVar2 = puVar1;
  func_0x000108b9a834();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007320(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126afc40;
  _objc_alloc(PTR_PTR_1126afc40);
  func_0x00010c04c040();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d4734c; end: 104d473e7;  */

void FUN_104d4734c(void)

{
  return;
}



/* Entry: 104d473e8; end: 104d47443;  */

void FUN_104d473e8(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be44220();
  if (iVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar2 + 0x18) = *(ulong *)(lVar2 + 0x18) | 4;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be44200();
  if (iVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar2 + 0x18) = *(ulong *)(lVar2 + 0x18) | 8;
  }
  return;
}



/* Entry: 104d47444; end: 104d4746f;  */

void FUN_104d47444(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ulong *)(lVar1 + 0x18) = *(ulong *)(lVar1 + 0x18) & 0xfffffffffffffffd;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ulong *)(lVar1 + 0x18) = *(ulong *)(lVar1 + 0x18) | 1;
  return;
}



/* Entry: 104d47470; end: 104d474d3;  */

void FUN_104d47470(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(ulong *)(lVar2 + 0x18) = *(ulong *)(lVar2 + 0x18) & 0xfffffffffffffffd;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(ulong *)(lVar2 + 0x18) = *(ulong *)(lVar2 + 0x18) | 1;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be44220();
  if (iVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar2 + 0x18) = *(ulong *)(lVar2 + 0x18) | 4;
  }
  return;
}



/* Entry: 104d474d4; end: 104d474db;  */

void FUN_104d474d4(void)

{
  return;
}



/* Entry: 104d474dc; end: 104d474eb; -[SCUserVerificationDefaultStateTransition _isStateFromPhoneFirstCountrySkippable] */

bool FUN_104d474dc(long param_1)

{
  return *(long *)(param_1 + 8) == 6;
}



/* Entry: 104d474ec; end: 104d474ff; -[SCUserVerificationDefaultStateTransition _isStateFromPhoneFirstCountrySwitchable] */

bool FUN_104d474ec(long param_1)

{
  return (*(ulong *)(param_1 + 8) & 0xfffffffffffffffd) != 4;
}



/* Entry: 104d47500; end: 104d47577; -[SCUserVerificationDefaultStateTransition _stateForSwitchActionOnPhoneEntryAndVerifiyPage] */

void FUN_104d47500(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 3) {
    func_0x00010bf8d8a0(PTR_PTR_1126afc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 2) {
    func_0x00010bf8d860(PTR_PTR_1126afc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 1) {
    func_0x00010bf8d840(PTR_PTR_1126afc48);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d47578; end: 104d4757f; -[SCUserVerificationDefaultStateTransition verificationFlowMethod] */

undefined8 FUN_104d47578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d47580; end: 104d47587; -[SCUserVerificationDefaultStateTransition setVerificationFlowMethod:] */

void FUN_104d47580(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104d47588; end: 104d47773; -[SCUserVerificationWorkflow initWithRouter:delegate:verificationFlowMethod:context:stateTransition:resumeRegistrationStorage:codeVerificationService:redirectToRegInfoProvider:applicationLifecycleEvents:userVerificationEventLogger:] */

undefined8 *
FUN_104d47588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e3ff0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d47774; end: 104d477a7; -[SCUserVerificationWorkflow beginWorkflow] */

void FUN_104d47774(undefined8 param_1)

{
  func_0x00010be778c0();
  func_0x00010bdfbc40(param_1);
  func_0x00010be7cca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be65b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeApplicationLifecycleEven_112577080);
  return;
}



/* Entry: 104d477a8; end: 104d47833; -[SCUserVerificationWorkflow emailCompleted:] */

void FUN_104d477a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010be73100(param_1,param_2,param_3,1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126af978;
  if (lVar1 == 0) {
    func_0x00010c0db160();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf8db20(PTR_PTR_1126af978,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar3);
  func_0x00010bec68c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d47834; end: 104d4785b; -[SCUserVerificationWorkflow emailSwitchedWithEmail:] */

void FUN_104d47834(undefined8 param_1)

{
  func_0x00010be73100();
                    /* WARNING: Could not recover jumptable at 0x00010c25fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subscreenSwitched_112675940);
  return;
}



/* Entry: 104d4785c; end: 104d478a3; -[SCUserVerificationWorkflow emailRerouteToLoginWithEmail:] */

void FUN_104d4785c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c294100();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d478a4; end: 104d4797f; -[SCUserVerificationWorkflow emailCompletedWithEmail:magicCodeAdaptor:] */

void FUN_104d478a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af120;
  _objc_retain(param_4);
  func_0x00010bf8db60(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17aae0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1740();
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238a00(uVar3,param_2,puVar1,uVar2,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d47980; end: 104d47bb7; -[SCUserVerificationWorkflow phoneEntryCompletedWithPhoneNumber:magicCodeAdaptor:] */

void FUN_104d47980(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c252440();
  puVar5 = PTR_PTR_1126aed98;
  if (lVar1 == 2) {
    func_0x00010be73420(param_1,param_2,param_3);
    puVar5 = PTR_PTR_1126af980;
    _objc_alloc(PTR_PTR_1126af980);
    func_0x00010c01f720();
    puVar6 = PTR_PTR_1126af978;
    if (param_3 == 0) {
      func_0x00010c0db160();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0fb320(PTR_PTR_1126af978,param_2,param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar6;
    _objc_release(uVar7);
    func_0x00010c0ac3a0(*(undefined8 *)(param_1 + 0x50),param_2,0);
    func_0x00010bec68e0(param_1);
  }
  else {
    if (param_4 == 0) {
      func_0x00010be73420(param_1,param_2,param_3);
      func_0x00010bec68c0(param_1);
      goto LAB_104d47b7c;
    }
    lVar1 = param_3;
    func_0x00010c0faf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0faf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5dc0(puVar5,param_2,lVar2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126af120;
    func_0x00010c0fb340(PTR_PTR_1126af120,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17aae0();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1740();
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238a00(uVar8,param_2,puVar6,uVar7,param_1);
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
LAB_104d47b7c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d47bb8; end: 104d47bdb; -[SCUserVerificationWorkflow phoneEntrySwitchedWithPhoneNumber:] */

void FUN_104d47bb8(undefined8 param_1)

{
  func_0x00010be73420();
                    /* WARNING: Could not recover jumptable at 0x00010c25fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subscreenSwitched_112675940);
  return;
}



/* Entry: 104d47bdc; end: 104d47c57; -[SCUserVerificationWorkflow phoneEntryRerouteToLogInWithPhoneNumber:] */

void FUN_104d47bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be73420(param_1,param_2,param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c0faf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c294120(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d47c58; end: 104d47c5f; -[SCUserVerificationWorkflow phoneEntrySelectedCountryCodePickerWithDelegate:] */

void FUN_104d47c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showCountryCodePickerWithDelegat_11266b570);
  return;
}



/* Entry: 104d47c60; end: 104d47c67; -[SCUserVerificationWorkflow phoneEntryFinishedCountryCodePicker] */

void FUN_104d47c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeCountryCodePicker_1126288f0);
  return;
}



/* Entry: 104d47c68; end: 104d47c73; -[SCUserVerificationWorkflow phoneEntryLinkSelectedWithURL:] */

void FUN_104d47c68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,param_3,
             param_1);
  return;
}



/* Entry: 104d47c74; end: 104d47ce3; -[SCUserVerificationWorkflow _subscreenFinished] */

void FUN_104d47c74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 104d47ce4; end: 104d47d53; -[SCUserVerificationWorkflow _subscreenSkipVerification] */

void FUN_104d47ce4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 104d47d54; end: 104d47ec7; -[SCUserVerificationWorkflow phoneVerificationSucceededWithVerifyResponse:phoneVerifyToken:authSessionPayload:] */

void FUN_104d47d54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126af980;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar7 = param_3;
  func_0x00010c081b60(param_3);
  _objc_release(param_3);
  func_0x00010c01f720(puVar1,param_2,uVar7,0);
  lVar2 = param_1;
  func_0x00010be211a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af990;
  _objc_alloc(PTR_PTR_1126af990);
  lVar4 = lVar2;
  func_0x00010c0faf60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035aa0(puVar3,param_2,lVar5,2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010be73420(param_1,param_2,puVar3);
  puVar6 = PTR_PTR_1126af978;
  func_0x00010c0fb320(PTR_PTR_1126af978,param_2,puVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar6;
  _objc_release(uVar7);
  func_0x00010c12da40(*(undefined8 *)(param_1 + 8));
  func_0x00010bec68c0(param_1);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d47ec8; end: 104d47eef; -[SCUserVerificationWorkflow phoneCodeExited] */

void FUN_104d47ec8(long param_1)

{
  func_0x00010c12da40(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c25fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subscreenExited_112675908);
  return;
}



/* Entry: 104d47ef0; end: 104d48013; -[SCUserVerificationWorkflow phoneCodeSkipVerification] */

void FUN_104d47ef0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010be211a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126af980;
    _objc_alloc(PTR_PTR_1126af980);
    func_0x00010c01f720();
    puVar4 = PTR_PTR_1126af990;
    _objc_alloc(PTR_PTR_1126af990);
    lVar1 = lVar2;
    func_0x00010c0faf60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035aa0(puVar4,param_2,lVar1,2,0,0);
    _objc_release(lVar1);
    func_0x00010be73420(param_1,param_2,puVar4);
    puVar5 = PTR_PTR_1126af978;
    func_0x00010c0fb320(PTR_PTR_1126af978,param_2,puVar4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar5;
    _objc_release(uVar6);
    func_0x00010c12da40(*(undefined8 *)(param_1 + 8));
    func_0x00010c0ac3a0(*(undefined8 *)(param_1 + 0x50),param_2,0);
    func_0x00010bec68c0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d48014; end: 104d4803b; -[SCUserVerificationWorkflow phoneCodeSwitched] */

void FUN_104d48014(long param_1)

{
  func_0x00010c12da40(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c25fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subscreenSwitched_112675940);
  return;
}



/* Entry: 104d4803c; end: 104d4808b; -[SCUserVerificationWorkflow endWorkflow] */

void FUN_104d4803c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  lVar1 = param_1;
  func_0x00010bee8300();
  func_0x00010c0adea0(uVar2,param_2,lVar1);
  func_0x00010bee3340(param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c294160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4808c; end: 104d480f3; -[SCUserVerificationWorkflow subscreenExited] */

void FUN_104d4808c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c29c000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec860();
  _objc_release(uVar1);
  if (((uint)uVar2 >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didConfirmExitAlert_1125baa20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c237590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showExitConfirmationWithDelegate_11266b788,param_1);
  return;
}



/* Entry: 104d480f4; end: 104d48163; -[SCUserVerificationWorkflow subscreenSkipped] */

void FUN_104d480f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 104d48164; end: 104d481d3; -[SCUserVerificationWorkflow subscreenSwitched] */

void FUN_104d48164(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 104d481d4; end: 104d48243; -[SCUserVerificationWorkflow didConfirmExitAlert] */

void FUN_104d481d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 104d48244; end: 104d48247; -[SCUserVerificationWorkflow didDismissExitAlert] */

void FUN_104d48244(void)

{
  return;
}



/* Entry: 104d48248; end: 104d482ef; -[SCUserVerificationWorkflow codeVerificationFinished:] */

void FUN_104d48248(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af360;
  _objc_opt_class(PTR_PTR_1126af360);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c12d260(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  uVar3 = uVar1;
  func_0x00010bf1faa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c294140(param_1);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d482f0; end: 104d482f7; -[SCUserVerificationWorkflow codeVerificationExited] */

void FUN_104d482f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeNGOCodeVerificationPage_112628eb8);
  return;
}



/* Entry: 104d482f8; end: 104d482ff; -[SCUserVerificationWorkflow codeVerificationExitedWithUnretryableError] */

void FUN_104d482f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeNGOCodeVerificationPage_112628eb8);
  return;
}



/* Entry: 104d48300; end: 104d48463; -[SCUserVerificationWorkflow _presentNextScreen] */

void FUN_104d48300(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bda20();
  _objc_release(uVar1);
  return;
}



/* Entry: 104d48464; end: 104d48983;  */

void FUN_104d48464(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(lVar1 + 8);
  func_0x00010be211a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c29c000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237300(uVar5,param_2,lVar3,uVar4,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d48984; end: 104d489b3;  */

void FUN_104d48984(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2940e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d489b4; end: 104d489bb;  */

void FUN_104d489b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endWorkflow_1125c30c0);
  return;
}



/* Entry: 104d489bc; end: 104d48b33; -[SCUserVerificationWorkflow _prefillEmailOrPhoneFromLoginReroute] */

void FUN_104d489bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    if (lVar1 != 0) {
      puVar4 = PTR_PTR_1126af990;
      _objc_alloc(PTR_PTR_1126af990);
      puVar5 = PTR_PTR_1126af2d8;
      _objc_alloc(PTR_PTR_1126af2d8);
      lVar3 = lVar1;
      func_0x00010c0cf4a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bf53280(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf536a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02c420(puVar5,param_2,lVar3,lVar7);
      func_0x00010c035aa0(puVar4,param_2,puVar5,0,0,0);
      _objc_release(puVar5);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
      func_0x00010be73420(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
  }
  else {
    func_0x00010be73100(param_1,param_2,lVar2,0);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d48b34; end: 104d48c13; -[SCUserVerificationWorkflow _determineStartState] */

void FUN_104d48b34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c220c40(*(undefined8 *)(param_1 + 0x38),param_2,lVar1);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec2270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startWithEmailOnly_11258e240);
      return;
    }
    if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bec2290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startWithEmailPreferred_11258e248);
      return;
    }
    if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bec22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__startWithEmailPreferredPhoneByp_11258e250);
      return;
    }
  }
  else if (lVar1 < 5) {
    if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bec22d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startWithPhonePreferred_11258e258);
      return;
    }
    if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bec22f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startWithPhoneRequired_11258e260);
      return;
    }
  }
  else {
    if (lVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bf95c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_endWorkflow_1125c30c0);
      return;
    }
    if (lVar1 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010bec2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startWithPhoneSkippableOnly_11258e268);
      return;
    }
  }
  return;
}



/* Entry: 104d48c14; end: 104d48c7f; -[SCUserVerificationWorkflow _startWithEmailOnly] */

void FUN_104d48c14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010bf8d880(PTR_PTR_1126afc48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252520(uVar3,param_2,puVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d48c80; end: 104d48d73; -[SCUserVerificationWorkflow _startWithEmailPreferred] */

void FUN_104d48c80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010be211a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c252440();
  if ((lVar1 == 1) || (lVar1 = lVar2, func_0x00010c252440(), lVar1 == 2)) {
    lVar1 = lVar2;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_104d48d60;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puVar3 = PTR_PTR_1126afc48;
    func_0x00010c0fada0(PTR_PTR_1126afc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puVar3 = PTR_PTR_1126afc48;
    func_0x00010bf8d840(PTR_PTR_1126afc48);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c252520(uVar5,param_2,puVar3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  _objc_release(uVar4);
  _objc_release(puVar3);
LAB_104d48d60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d48d74; end: 104d48ddf; -[SCUserVerificationWorkflow _startWithEmailPreferredPhoneBypassed] */

void FUN_104d48d74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010bf8d860(PTR_PTR_1126afc48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252520(uVar3,param_2,puVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d48de0; end: 104d48e4b; -[SCUserVerificationWorkflow _startWithPhonePreferred] */

void FUN_104d48de0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010c0fadc0(PTR_PTR_1126afc48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252520(uVar3,param_2,puVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d48e4c; end: 104d48eb7; -[SCUserVerificationWorkflow _startWithPhoneRequired] */

void FUN_104d48e4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010c0fadc0(PTR_PTR_1126afc48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252520(uVar3,param_2,puVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d48eb8; end: 104d48f23; -[SCUserVerificationWorkflow _startWithPhoneSkippableOnly] */

void FUN_104d48eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126afc48;
  func_0x00010c0fadc0(PTR_PTR_1126afc48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252520(uVar3,param_2,puVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d48f24; end: 104d48fbf; -[SCUserVerificationWorkflow _observeApplicationLifecycleEvents] */

void FUN_104d48f24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2a6a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104d48fc0; end: 104d49003;  */

void FUN_104d48fc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8de0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d49004; end: 104d4900b; -[SCUserVerificationWorkflow webBrowserDidDismiss:] */

void FUN_104d49004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissWebBrowser_1125beca8);
  return;
}



/* Entry: 104d4900c; end: 104d490e7; -[SCUserVerificationWorkflow _persistEmail:state:] */

void FUN_104d4900c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be211a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af988;
    _objc_alloc(PTR_PTR_1126af988);
    func_0x00010c00f420();
    func_0x00010c194080(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126af840;
    _objc_alloc(PTR_PTR_1126af840);
    func_0x00010c03dc20();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed660();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d490e8; end: 104d491a7; -[SCUserVerificationWorkflow _persistPhoneNumber:] */

void FUN_104d490e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be211a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db1c0();
    puVar2 = PTR_PTR_1126af840;
    _objc_alloc(PTR_PTR_1126af840);
    func_0x00010c03dc20();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed660();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d491a8; end: 104d49297; -[SCUserVerificationWorkflow _getOrCreateRegistrationUser] */

void FUN_104d491a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = *(undefined **)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c127dc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126af968;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar4;
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126af848;
    func_0x00010bf69c80(PTR_PTR_1126af848);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e98e0(puVar4,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1e98e0(puVar4,param_2,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d49298; end: 104d49347; -[SCUserVerificationWorkflow _verificationChannel] */

undefined8 FUN_104d49298(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_1;
  func_0x00010be211a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be3ff80(param_1,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0faf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be42a00(param_1,param_2,uVar4);
  _objc_release(uVar4);
  bVar2 = (int)param_1 != 0;
  uVar4 = 0xffffffffffffffff;
  if (bVar2) {
    uVar4 = 1;
  }
  uVar1 = 2;
  if (!bVar2) {
    uVar1 = 0;
  }
  if ((int)uVar5 == 0) {
    uVar1 = uVar4;
  }
  _objc_release(uVar3);
  return uVar1;
}


