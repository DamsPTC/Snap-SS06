/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c67388; end: 104c673cf; -[SCBillboardBirthdayPartyActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c67388(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f964,0);
  _objc_destroyWeak(param_1 + _DAT_11270f968);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f96c);
  return;
}



/* Entry: 104c673d0; end: 104c674eb; -[SCBillboardContactSyncActionHandler initWithFindFriendsScopeExposer:findFriendsScopeServices:contactPermissionResumeScopeExposer:contactPermissionResumeScopeServices:contactPermissionInfoProvider:] */

undefined1 *
FUN_104c673d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e36c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c674ec; end: 104c674f3; -[SCBillboardContactSyncActionHandler actionHandlerType] */

undefined8 FUN_104c674ec(void)

{
  return 1;
}



/* Entry: 104c674f4; end: 104c676cb; -[SCBillboardContactSyncActionHandler handleOnTapActionWithContext:] */

void FUN_104c674f4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar2;
  _objc_release(uVar6);
  lVar2 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c265ce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) goto LAB_104c676a4;
  lVar4 = lVar3;
  func_0x00010beef1e0();
  iVar1 = (int)lVar4;
  if (1 < iVar1) {
    lVar4 = param_3;
    if (iVar1 == 4) {
      func_0x00010c27ece0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae5f8;
      func_0x00010bfe4f40(PTR_PTR_1126ae5f8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 3) {
      func_0x00010c27ece0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae5f8;
      func_0x00010c266d80(PTR_PTR_1126ae5f8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 2) goto LAB_104c676a4;
      func_0x00010c27ece0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae5f8;
      func_0x00010c0e9440(PTR_PTR_1126ae5f8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be0cc40(param_1,param_2,lVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    goto LAB_104c676a4;
  }
  if (iVar1 == -0x4524111) {
LAB_104c6758c:
    func_0x00010c263e20();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28bb20();
    _objc_release(uVar6);
  }
  else if (iVar1 != 0) {
    if (iVar1 != 1) goto LAB_104c676a4;
    goto LAB_104c6758c;
  }
  func_0x00010be0ce60(param_1,param_2,param_3);
LAB_104c676a4:
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c676cc; end: 104c6771b; -[SCBillboardContactSyncActionHandler findFriendsWorkflowCompleted] */

void FUN_104c676cc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
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



/* Entry: 104c6771c; end: 104c6775f; -[SCBillboardContactSyncActionHandler contactPermissionResumeWorkflowSkipped] */

void FUN_104c6771c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104c67750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104c67760; end: 104c677a3; -[SCBillboardContactSyncActionHandler contactPermissionResumeWorkflowOSSettingsOpened] */

void FUN_104c67760(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104c67794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104c677a4; end: 104c677e7; -[SCBillboardContactSyncActionHandler _exposeContactPermissionResumeScopeWithUIContainer:contactPermissionResumeFlow:] */

void FUN_104c677a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf23c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c677e8; end: 104c67923; -[SCBillboardContactSyncActionHandler _exposeFindFriendsScopeWithActionContext:] */

void FUN_104c677e8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c263e20();
  uVar2 = param_3;
  func_0x00010c263e20();
  if (uVar2 < 4) {
    uVar6 = *(undefined8 *)(&UNK_10dd8a5e0 + uVar2 * 8);
  }
  else {
    uVar6 = 7;
  }
  puVar3 = PTR_PTR_1126ae600;
  _objc_alloc(PTR_PTR_1126ae600);
  if (uVar1 - 1 < 3) {
    uVar7 = *(undefined8 *)(&PTR_PTR_1108422f0)[uVar1 - 1];
    _objc_retain(uVar7);
  }
  else {
    uVar7 = 0;
  }
  func_0x00010c01fb20(puVar3,param_2,0,0,uVar7,0);
  _objc_release(uVar7);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf23c80(lVar4,param_2,uVar1,puVar3,param_1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c67924; end: 104c6797f; -[SCBillboardContactSyncActionHandler .cxx_destruct] */

void FUN_104c67924(long param_1)

{
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



/* Entry: 104c67980; end: 104c67a97; -[SCBillboardContactSyncActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c67980(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126ae608;
  _objc_alloc(PTR_PTR_1126ae608);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11270f988);
  lVar2 = param_1 + _DAT_11270f98c;
  _objc_loadWeakRetained(lVar2);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11270f990);
  lVar3 = param_1 + _DAT_11270f994;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_11270f998;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0133a0(puVar1,param_2,uVar6,lVar2,uVar7,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270f99c;
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



/* Entry: 104c67a98; end: 104c67b07; -[SCBillboardContactSyncActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c67a98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f990,0);
  _objc_destroyWeak(param_1 + _DAT_11270f98c);
  _objc_storeStrong(param_1 + _DAT_11270f988,0);
  _objc_destroyWeak(param_1 + _DAT_11270f994);
  _objc_destroyWeak(param_1 + _DAT_11270f998);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f99c);
  return;
}



/* Entry: 104c67b08; end: 104c67b7b; -[SCBillboardEmailVerificationActionHandler initWithEmailSettingsScopeExposer:] */

undefined1 * FUN_104c67b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e36d0;
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



/* Entry: 104c67b7c; end: 104c67b83; -[SCBillboardEmailVerificationActionHandler actionHandlerType] */

undefined8 FUN_104c67b7c(void)

{
  return 4;
}



/* Entry: 104c67b84; end: 104c67c2b; -[SCBillboardEmailVerificationActionHandler handleOnTapActionWithContext:] */

void FUN_104c67b84(long param_1,undefined8 param_2,undefined8 param_3)

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
  puVar2 = PTR_PTR_1126ae610;
  _objc_alloc(PTR_PTR_1126ae610);
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



/* Entry: 104c67c2c; end: 104c67c7b; -[SCBillboardEmailVerificationActionHandler emailSettingsDidComplete] */

void FUN_104c67c2c(long param_1)

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



/* Entry: 104c67c7c; end: 104c67cab; -[SCBillboardEmailVerificationActionHandler .cxx_destruct] */

void FUN_104c67c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c67cac; end: 104c67d2f; -[SCBillboardEmailVerificationActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c67cac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae618;
  _objc_alloc(PTR_PTR_1126ae618);
  func_0x00010c00f460();
  param_1 = param_1 + _DAT_11270f9ac;
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



/* Entry: 104c67d30; end: 104c67d6b; -[SCBillboardEmailVerificationActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c67d30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f9a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f9ac);
  return;
}



/* Entry: 104c67d6c; end: 104c67ddf; -[SCBillboardFriendCheckupActionHandler initWithMyFriendsScopeExposer:] */

undefined1 * FUN_104c67d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e36d8;
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



/* Entry: 104c67de0; end: 104c67de7; -[SCBillboardFriendCheckupActionHandler actionHandlerType] */

undefined8 FUN_104c67de0(void)

{
  return 10;
}



/* Entry: 104c67de8; end: 104c67e93; -[SCBillboardFriendCheckupActionHandler handleOnTapActionWithContext:] */

void FUN_104c67de8(long param_1,undefined8 param_2,undefined8 param_3)

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
  puVar2 = PTR_PTR_1126ae620;
  _objc_alloc(PTR_PTR_1126ae620);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0575e0(puVar2,param_2,uVar1,param_1,2);
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c67e94; end: 104c67ee3; -[SCBillboardFriendCheckupActionHandler didDismissMyFriends] */

void FUN_104c67e94(long param_1)

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



/* Entry: 104c67ee4; end: 104c67f13; -[SCBillboardFriendCheckupActionHandler .cxx_destruct] */

void FUN_104c67ee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c67f14; end: 104c67f97; -[SCBillboardFriendCheckupActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c67f14(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae628;
  _objc_alloc(PTR_PTR_1126ae628);
  func_0x00010c02d160();
  param_1 = param_1 + _DAT_11270f9bc;
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



/* Entry: 104c67f98; end: 104c67fd3; -[SCBillboardFriendCheckupActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c67f98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f9b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f9bc);
  return;
}



/* Entry: 104c67fd4; end: 104c67fdb; -[SCBillboardDoNothingActionHandler actionHandlerType] */

undefined8 FUN_104c67fd4(void)

{
  return 0x14;
}



/* Entry: 104c67fdc; end: 104c6801b; -[SCBillboardDoNothingActionHandler handleOnTapActionWithContext:] */

void FUN_104c67fdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c6801c; end: 104c68023; -[SCBillboardOpenOSSettingsActionHandler actionHandlerType] */

undefined8 FUN_104c6801c(void)

{
  return 0x16;
}



/* Entry: 104c68024; end: 104c680af; -[SCBillboardOpenOSSettingsActionHandler handleOnTapActionWithContext:] */

void FUN_104c68024(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
  _objc_release(puVar1);
  lVar2 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e2fa0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c680b0; end: 104c68153; -[SCBillboardOpenURLActionHandler initWithWebBrowsingScopeExposer:webBrowserDeepLinkHandler:] */

undefined1 *
FUN_104c680b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e36e0;
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



/* Entry: 104c68154; end: 104c6815b; -[SCBillboardOpenURLActionHandler actionHandlerType] */

undefined8 FUN_104c68154(void)

{
  return 0xb;
}



/* Entry: 104c6815c; end: 104c683f3; -[SCBillboardOpenURLActionHandler handleOnTapActionWithContext:] */

void FUN_104c6815c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e9b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c0e2fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar3 = lVar2;
    func_0x00010bdc2b80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010c2b9b80(puVar6,param_2,0xf);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar7 = puVar6;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104c683f4;
    puStack_70 = &UNK_110842308;
    puVar8 = puVar4;
    puStack_68 = puVar4;
    _objc_retain(puVar4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar7,param_2,&puStack_88,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    lVar3 = param_3;
    func_0x00010c27ece0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf22ba0(puVar7,param_2,puVar5,puVar6,lVar3,param_1,0,uVar9,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(lVar3);
    _objc_release(puVar7);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puStack_68);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104c683f4; end: 104c6840b;  */

void FUN_104c683f4(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 104c6840c; end: 104c6845b; -[SCBillboardOpenURLActionHandler webBrowserDidDismiss:] */

void FUN_104c6840c(long param_1)

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



/* Entry: 104c6845c; end: 104c68497; -[SCBillboardOpenURLActionHandler .cxx_destruct] */

void FUN_104c6845c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c68498; end: 104c6860b; -[SCBillboardGenericActionHandlersEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c68498(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae640;
  _objc_opt_new(PTR_PTR_1126ae640);
  lVar2 = param_1;
  FUN_104c6860c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126ae648;
  _objc_alloc(PTR_PTR_1126ae648);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11270f9cc);
  lVar2 = param_1 + _DAT_11270f9d0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2a30a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062dc0(puVar4,param_2,uVar6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  FUN_104c6860c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ae650;
  _objc_opt_new(PTR_PTR_1126ae650);
  FUN_104c6860c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c6860c; end: 104c6862f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6860c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11270f9d4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c68630; end: 104c68677; -[SCBillboardGenericActionHandlersEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c68630(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f9cc,0);
  _objc_destroyWeak(param_1 + _DAT_11270f9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f9d4);
  return;
}



/* Entry: 104c68678; end: 104c686db; -[SCBillboardLensCollectionActionLogger init] */

undefined1 * FUN_104c68678(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e36e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae658;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c686dc; end: 104c68773;  */

void FUN_104c686dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    _objc_retain(param_2);
    func_0x00010c08fa60();
    uVar1 = param_2;
    func_0x00010c260c00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    FUN_104c68f08(*(undefined8 *)(param_1 + 8),param_4,param_3,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104c68774; end: 104c6877f; -[SCBillboardLensCollectionActionLogger .cxx_destruct] */

void FUN_104c68774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c68780; end: 104c6888b; -[SCBillboardLensCollectionCameraActionHandler initWithLensModularCameraPresenter:navigationDelegate:lensesCollectionModularCameraPresenter:namespaceLensDataProvider:] */

undefined1 *
FUN_104c68780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e36f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae5b8;
    _objc_alloc();
    func_0x00010c0251c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae660;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 8) != 0) {
      FUN_104c68e90(*(undefined8 *)(*(long *)((long)puVar1 + 8) + 8),1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c6888c; end: 104c68893; -[SCBillboardLensCollectionCameraActionHandler actionHandlerType] */

undefined8 FUN_104c6888c(void)

{
  return 0x19;
}



/* Entry: 104c68894; end: 104c6889f; +[SCBillboardLensCollectionCameraActionHandler sourceForSurface:] */

void FUN_104c68894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2477b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae5b8,PTR_s_sourceForSurface__11266f810);
  return;
}



/* Entry: 104c688a0; end: 104c68be7; -[SCBillboardLensCollectionCameraActionHandler handleOnTapActionWithContext:] */

void FUN_104c688a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar10 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010c0e93c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar10 = uVar3;
  func_0x00010bf2a560(uVar3);
  puVar1 = PTR_PTR_1126ae668;
  func_0x00010c263e20(param_3);
  func_0x00010c2477a0(puVar1);
  uVar4 = uVar3;
  func_0x00010c095180();
  lVar9 = *(long *)(param_1 + 8);
  iVar2 = (int)uVar4;
  iVar8 = (int)uVar10;
  uVar10 = uVar3;
  uVar4 = uVar3;
  if (iVar2 == 6) {
    uVar5 = uVar3;
    func_0x00010c0d54e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d54e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_104c686dc(lVar9,uVar6,iVar8 == 4,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = uVar3;
    func_0x00010bf2a560();
    if ((int)uVar5 == 3) {
      func_0x00010c290fa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar10 = 0;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d54e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d54e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0e2fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd18e0(uVar7);
    _objc_release(uVar6);
  }
  else {
    uVar5 = param_3;
    if (iVar2 == 2) {
      uVar6 = uVar3;
      func_0x00010c0915a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_104c686dc(lVar9,uVar6,iVar8 == 4,1);
      _objc_release(uVar6);
      uVar6 = uVar3;
      func_0x00010bf2a560();
      if ((int)uVar6 == 3) {
        func_0x00010c290fa0(uVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar10 = 0;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0915a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e2fa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd1620(uVar6);
    }
    else {
      if (iVar2 != 1) {
        if (lVar9 != 0) {
          FUN_104c6912c(*(undefined8 *)(lVar9 + 8),1);
        }
        goto LAB_104c68bc0;
      }
      uVar6 = uVar3;
      func_0x00010c08fb40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      FUN_104c686dc(lVar9,uVar7,iVar8 == 4,0);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c08fb40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290fa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e2fa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd27c0(uVar6);
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
LAB_104c68bc0:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c68be8; end: 104c68c17; -[SCBillboardLensCollectionCameraActionHandler .cxx_destruct] */

void FUN_104c68be8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c68c18; end: 104c68dbf; -[SCBillboardLensCollectionCameraActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c68c18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126ae668;
  _objc_alloc(PTR_PTR_1126ae668);
  lVar11 = (long)_DAT_11270f9e4;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c095680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11270f9e8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar7 = lVar11;
  func_0x00010c091660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11270f9ec;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c0d5420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0251c0(puVar1,param_2,lVar4,lVar6,lVar8,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270f9f0;
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



/* Entry: 104c68dc0; end: 104c68e1b; -[SCBillboardLensCollectionCameraActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c68dc0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270f9ec);
  _objc_destroyWeak(param_1 + _DAT_11270f9e4);
  _objc_destroyWeak(param_1 + _DAT_11270f9e8);
  _objc_destroyWeak(param_1 + _DAT_11270f9f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f9f0);
  return;
}



/* Entry: 104c68e1c; end: 104c68e8f; -[SCGrapheneFhpLensCollectionHandlerMetricsMetric2 init] */

undefined1 * FUN_104c68e1c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e36f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c68e90; end: 104c68f07;  */

void FUN_104c68e90(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110842338,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104c68f08; end: 104c6912b;  */

/* WARNING: Removing unreachable block (ram,0x000104c69104) */

void FUN_104c68f08(long param_1,undefined8 *param_2,int param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)param_2;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar3 = &UNK_110842388;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110842388,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar4 = 0;
    do {
      if ((&cStack_59)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar4 != -0x48);
  }
  pcVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_2 = (undefined8 *)((long)param_2 + -0x18);
    } while (param_2 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    pcStack_c8 = FUN_104c6912c;
    if (pcVar2 != (char *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      pcStack_e0 = pcVar1;
      pcStack_d8 = param_4;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                (*(long **)(pcVar2 + 8),&UNK_1108423d8,&uStack_100,puVar3);
      func_0x00010007e5dc(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 104c6912c; end: 104c691a3;  */

void FUN_104c6912c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108423d8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104c691a4; end: 104c69217; -[SCBillboardOpenDeeplinkActionHandler initWithDeepLinkHandling:] */

undefined1 * FUN_104c691a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3700;
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



/* Entry: 104c69218; end: 104c6921f; -[SCBillboardOpenDeeplinkActionHandler actionHandlerType] */

undefined8 FUN_104c69218(void)

{
  return 0xf;
}



/* Entry: 104c69220; end: 104c693c3; -[SCBillboardOpenDeeplinkActionHandler handleOnTapActionWithContext:] */

void FUN_104c69220(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0e2fa0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e9120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010bf684c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c115880(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c263e20(param_3);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72040(puVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_110e68ad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c263e20(param_3);
      func_0x00010bee6480(param_1,param_2,lVar3);
      func_0x00010bfd1bc0(uVar7,param_2,lVar4,puVar6,param_1,0);
      _objc_release(uVar7);
    }
    _objc_release(puVar6);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c693c4; end: 104c693c7; -[SCBillboardOpenDeeplinkActionHandler processedUrlForDeeplinking:] */

void FUN_104c693c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf5230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createURLWithAppendedReferrer__11255ae28);
  return;
}



/* Entry: 104c693c8; end: 104c6951f; -[SCBillboardOpenDeeplinkActionHandler _createURLWithAppendedReferrer:] */

void FUN_104c693c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      _objc_alloc();
      func_0x00010c057bc0();
      if (puVar2 == (undefined *)0x0) {
        _objc_retain(puVar1);
        puVar5 = puVar1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
        _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
        func_0x00010c02dc20();
        puVar5 = puVar2;
        func_0x00010c11d4e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        }
        func_0x00010befa120(puVar4,param_2,puVar3);
        func_0x00010c1e6460(puVar2,param_2,puVar4);
        puVar5 = puVar2;
        func_0x00010bdc2b80(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
      goto LAB_104c69500;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_104c69500:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104c69520; end: 104c6953f; -[SCBillboardOpenDeeplinkActionHandler _urlSourceTypeWithSurface:] */

undefined8 FUN_104c69520(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return *(undefined8 *)(&UNK_10dd8a600 + param_3 * 8);
  }
  return 0x96;
}



/* Entry: 104c69540; end: 104c6954b; -[SCBillboardOpenDeeplinkActionHandler .cxx_destruct] */

void FUN_104c69540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6954c; end: 104c6960b; -[SCBillboardOpenDeeplinkActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6954c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae678;
  _objc_alloc(PTR_PTR_1126ae678);
  lVar2 = param_1 + _DAT_11270fa00;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009a80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11270fa04;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c1018e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c6960c; end: 104c69643; -[SCBillboardOpenDeeplinkActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6960c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270fa00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fa04);
  return;
}



/* Entry: 104c69644; end: 104c696e7; -[SCBillboardOpenDwebTrayActionHandler initWithDwebExplainerTrayScopeExposer:dwebExplainerTrayScopeServices:] */

undefined1 *
FUN_104c69644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3708;
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



/* Entry: 104c696e8; end: 104c696ef; -[SCBillboardOpenDwebTrayActionHandler actionHandlerType] */

undefined8 FUN_104c696e8(void)

{
  return 0x10;
}



/* Entry: 104c696f0; end: 104c697b7; -[SCBillboardOpenDwebTrayActionHandler handleOnTapActionWithContext:] */

void FUN_104c696f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c263e20();
  _objc_release(param_3);
  uVar3 = 9;
  if (lVar2 != 3) {
    uVar3 = 0;
  }
  func_0x00010bf22d40(uVar4,param_2,lVar1,0,uVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104c697b8; end: 104c69807; -[SCBillboardOpenDwebTrayActionHandler dWebExplainerTrayDidDismiss] */

void FUN_104c697b8(long param_1)

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



/* Entry: 104c69808; end: 104c6980f; -[SCBillboardOpenDwebTrayActionHandler numberOfUsersPresentOnWeb] */

undefined8 FUN_104c69808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104c69810; end: 104c69817; -[SCBillboardOpenDwebTrayActionHandler numberOfUsersPresent] */

undefined8 FUN_104c69810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104c69818; end: 104c69853; -[SCBillboardOpenDwebTrayActionHandler .cxx_destruct] */

void FUN_104c69818(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c69854; end: 104c69903; -[SCBillboardOpenDwebTrayActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c69854(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae680;
  _objc_alloc(PTR_PTR_1126ae680);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11270fa1c);
  lVar2 = param_1 + _DAT_11270fa20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c00ebe0(puVar1,param_2,uVar3,lVar2);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270fa24;
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



/* Entry: 104c69904; end: 104c6994b; -[SCBillboardOpenDwebTrayActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c69904(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270fa20);
  _objc_storeStrong(param_1 + _DAT_11270fa1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fa24);
  return;
}



/* Entry: 104c6994c; end: 104c699af; -[SCBillboardLensReplyActionLogger init] */

undefined1 * FUN_104c6994c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae688;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c699b0; end: 104c69a2f;  */

void FUN_104c699b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    _objc_retain(param_2);
    func_0x00010c08fa60();
    uVar1 = param_2;
    func_0x00010c260c00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    FUN_104c69f18(*(undefined8 *)(param_1 + 8),uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104c69a30; end: 104c69a3b; -[SCBillboardLensReplyActionLogger .cxx_destruct] */

void FUN_104c69a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c69a3c; end: 104c69b17; -[SCBillboardOpenReplyCameraActionHandler initWithLensModularCameraPresenter:navigationDelegate:] */

undefined1 *
FUN_104c69a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3718;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae5b8;
    _objc_alloc();
    func_0x00010c0251c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae690;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 0x10) != 0) {
      FUN_104c69ea0(*(undefined8 *)(*(long *)((long)puVar1 + 0x10) + 8),1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c69b18; end: 104c69b1f; -[SCBillboardOpenReplyCameraActionHandler actionHandlerType] */

undefined8 FUN_104c69b18(void)

{
  return 0x18;
}



/* Entry: 104c69b20; end: 104c69ca3; -[SCBillboardOpenReplyCameraActionHandler handleOnTapActionWithContext:] */

void FUN_104c69b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beedca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e96a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = uVar3;
  func_0x00010c08fb40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  FUN_104c699b0(uVar6,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ae698;
  _objc_opt_new(PTR_PTR_1126ae698);
  uVar2 = uVar3;
  func_0x00010c294420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ecc0(puVar5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae6a0;
  func_0x00010c263e20(param_3);
  _objc_opt_self(puVar1);
  func_0x00010c2477a0(PTR_PTR_1126ae5b8);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar2 = uVar3;
  func_0x00010c08fb40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e2fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd27c0(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104c69ca4; end: 104c69cd3; -[SCBillboardOpenReplyCameraActionHandler .cxx_destruct] */

void FUN_104c69ca4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c69cd4; end: 104c69de7; -[SCBillboardOpenReplyCameraActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c69cd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126ae6a0;
  _objc_alloc(PTR_PTR_1126ae6a0);
  lVar2 = param_1 + _DAT_11270fa34;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c095680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11270fa38;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0251a0(puVar1,param_2,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270fa3c;
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



/* Entry: 104c69de8; end: 104c69e2b; -[SCBillboardOpenReplyCameraActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c69de8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270fa34);
  _objc_destroyWeak(param_1 + _DAT_11270fa38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fa3c);
  return;
}



/* Entry: 104c69e2c; end: 104c69e9f; -[SCGrapheneFhpLensReplyHandlerMetricsMetric2 init] */

undefined1 * FUN_104c69e2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3720;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c69ea0; end: 104c69f17;  */

void FUN_104c69ea0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110842458,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104c69f18; end: 104c6a08b;  */

char * FUN_104c69f18(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108424a8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar2 = (undefined1 *)puVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = (undefined1 *)puVar3;
    }
  }
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  if (puVar2 + -1 < (undefined1 *)0x3) {
    return *(char **)(&UNK_10dd8a620 + (long)(puVar2 + -1) * 8);
  }
  return (char *)0xffffffffffffffff;
}



/* Entry: 104c6a08c; end: 104c6a0af; +[SCBillboardACLensPresenterHelper sourceForSurface:] */

undefined8 FUN_104c6a08c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10dd8a620 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 104c6a0b0; end: 104c6a1a3; -[SCBillboardACLensPresenterHelper initWithLensModularCameraPresenter:navigationDelegate:lensesCollectionModularCameraPresenter:namespaceLensDataProvider:] */

undefined1 *
FUN_104c6a0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e3728;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
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



/* Entry: 104c6a1a4; end: 104c6a303; -[SCBillboardACLensPresenterHelper handleLensCollectionPresentationWithSource:lensCollectionId:userData:postToStory:onComplete:] */

void FUN_104c6a1a4(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
  }
  else {
    ppuVar2 = param_4;
    func_0x00010c08fa60();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab158;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = param_4;
    }
    _objc_retain(ppuVar1);
    lVar3 = param_1;
    func_0x00010be8f1a0(param_1,param_2,param_3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10baa0(uVar6,param_2,lVar5,ppuVar1,0,lVar3,0);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(param_1);
    }
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
    _objc_release(lVar3);
    _objc_release(ppuVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104c6a304; end: 104c6a5b3; -[SCBillboardACLensPresenterHelper handleSingleLensPresentationWithSource:lensData:userData:postToStory:onComplete:] */

void FUN_104c6a304(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined *param_5,long param_6,long param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_6;
  lVar10 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be8f1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
  }
  else {
    ppuVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar8,param_2,ppuVar2);
    if ((int)puVar8 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dab178;
    }
    else {
      ppuVar3 = param_4;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar2 = param_4;
    func_0x00010c094500(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar8,param_2,ppuVar2);
    if ((int)puVar8 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dab198;
    }
    else {
      ppuVar4 = param_4;
      func_0x00010c094500();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
    puVar8 = PTR_PTR_1126ae6a8;
    func_0x00010c0fdac0(PTR_PTR_1126ae6a8,param_2,ppuVar3,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126ae6b0;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c025e20(puVar11,param_2,puVar5,puVar8);
    _objc_release(puVar5);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar6 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = 0;
    param_3 = lVar7;
    param_5 = puVar5;
    param_6 = lVar1;
    func_0x00010c10b600(uVar12,param_2,lVar7,puVar5,lVar1,0);
    _objc_release(puVar5);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(param_1);
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(lVar10);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (param_4[4] == (undefined *)0x0)) {
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 0x10))(lVar10);
    }
  }
  else {
    ppuVar2 = param_4;
    func_0x00010be8f1a0(param_4,param_2,param_5,param_6,lVar9);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      if (lVar10 != 0) {
        (**(code **)(lVar10 + 0x10))(lVar10);
      }
    }
    else {
      puVar8 = param_4[4];
      func_0x00010c092480(puVar8,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_4[3];
      param_4 = param_4 + 1;
      _objc_loadWeakRetained(param_4);
      ppuVar3 = param_4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10b620(puVar11,param_2,ppuVar4,puVar8,ppuVar2,0,0);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(param_4);
      if (lVar10 != 0) {
        (**(code **)(lVar10 + 0x10))(lVar10);
      }
      _objc_release(puVar8);
    }
    _objc_release(ppuVar2);
  }
  _objc_release(lVar10);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c6a5b4; end: 104c6a72b; -[SCBillboardACLensPresenterHelper handleNamespacePresentation:source:userData:postToStory:onComplete:] */

void FUN_104c6a5b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010be8f1a0(param_1,param_2,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c092480(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10b620(uVar5,param_2,lVar4,uVar2,lVar1,0,0);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(param_1);
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c6a72c; end: 104c6a95f; -[SCBillboardACLensPresenterHelper _replyParamsWithSource:userData:postToStory:] */

void FUN_104c6a72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  if (param_5 == 0) {
    lVar1 = param_4;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ae6c0;
    if (lVar2 == 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_104c6a934;
    }
    lVar1 = param_4;
    func_0x00010c292e20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294300(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126ae6c8;
    _objc_alloc(PTR_PTR_1126ae6c8);
    lVar1 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c292e20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e6c0(puVar8,param_2,0,&PTR____CFConstantStringClassReference_110daafd8,lVar1,
                        lVar2,0,0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar9 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126ae6c0;
    func_0x00010c25bbc0(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8,0
                        ,0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    uVar9 = 2;
  }
  puVar4 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x0001091ef76c(param_3);
  func_0x00010c03e5a0(puVar4,param_2,puVar3,param_3,0x20,uVar9,puVar8);
  puVar5 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar6 = PTR_PTR_1126ae6e0;
  _objc_opt_new(PTR_PTR_1126ae6e0);
  func_0x00010c2a9260();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2c40(puVar6,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar3);
LAB_104c6a934:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104c6a960; end: 104c6a9a3; -[SCBillboardACLensPresenterHelper .cxx_destruct] */

void FUN_104c6a960(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104c6a9a4; end: 104c6aa47; -[SCBillboardOpenSettingsActionHandler initWithSettingsScopeExposer:settingsScopeServices:] */

undefined1 *
FUN_104c6a9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3730;
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



/* Entry: 104c6aa48; end: 104c6aa4f; -[SCBillboardOpenSettingsActionHandler actionHandlerType] */

undefined8 FUN_104c6aa48(void)

{
  return 0xc;
}



/* Entry: 104c6aa50; end: 104c6aaf7; -[SCBillboardOpenSettingsActionHandler handleOnTapActionWithContext:] */

void FUN_104c6aa50(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf22f40(uVar2,param_2,param_1,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c6aaf8; end: 104c6ab47; -[SCBillboardOpenSettingsActionHandler settingsScopeWantsDismiss] */

void FUN_104c6aaf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c6ab48; end: 104c6ab97; -[SCBillboardOpenSettingsActionHandler settingsScopeDidDismiss] */

void FUN_104c6ab48(long param_1)

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



/* Entry: 104c6ab98; end: 104c6abd3; -[SCBillboardOpenSettingsActionHandler .cxx_destruct] */

void FUN_104c6ab98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c6abd4; end: 104c6ac83; -[SCBillboardOpenSettingsActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6abd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae6e8;
  _objc_alloc(PTR_PTR_1126ae6e8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11270fa60);
  lVar2 = param_1 + _DAT_11270fa64;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0458a0(puVar1,param_2,uVar3,lVar2);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270fa68;
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



/* Entry: 104c6ac84; end: 104c6accb; -[SCBillboardOpenSettingsActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6ac84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270fa60,0);
  _objc_destroyWeak(param_1 + _DAT_11270fa64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fa68);
  return;
}



/* Entry: 104c6accc; end: 104c6ad3f; -[SCBillboardMicrophonePermissionActionHandler initWithPermissionRequestService:] */

undefined1 * FUN_104c6accc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3738;
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



/* Entry: 104c6ad40; end: 104c6ad47; -[SCBillboardMicrophonePermissionActionHandler actionHandlerType] */

undefined8 FUN_104c6ad40(void)

{
  return 9;
}


