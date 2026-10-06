/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067b8698; end: 1067b879f; -[SCBirthdayPageComposerHandlersImpl openUserReplyCameraWithUserId:] */

void FUN_1067b8698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b87a0; end: 1067b87e7;  */

void FUN_1067b87a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b87e8; end: 1067b8983; -[SCBirthdayPageComposerHandlersImpl _openUserReplyCameraWithUserId:] */

void FUN_1067b87e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar3 = PTR_PTR_1126ae6c0;
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c294300(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e5a0(puVar1,param_2,puVar3,0x21,0xb,0,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0b50;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf500(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23680(uVar6,param_2,puVar3,puVar4,param_1,2,0,0,0,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar6,param_1);
  _objc_release(uVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067b8984; end: 1067b8a8b; -[SCBirthdayPageComposerHandlersImpl openUserProfileWithUserId:] */

void FUN_1067b8984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b8a8c; end: 1067b8ad3;  */

void FUN_1067b8a8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b8ad4; end: 1067b8bc7; -[SCBirthdayPageComposerHandlersImpl _launchFriendProfileWithSnapchatter:] */

void FUN_1067b8ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_90 = 0xd8;
  uStack_88 = 0;
  uStack_78 = 0x11;
  uStack_80 = 0xffffffffcf5d0adf;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0159e0(puVar1,param_2,&uStack_90,uVar3,param_3,param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b8bc8; end: 1067b8bdb; -[SCBirthdayPageComposerHandlersImpl pageDismissHandler] */

void FUN_1067b8bc8(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067b8bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067b8bdc; end: 1067b8be7; -[SCBirthdayPageComposerHandlersImpl pushToValdiMarshaller:] */

undefined8 FUN_1067b8bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b0472c8(param_3,param_1);
  func_0x00010b0472c0();
  func_0x00010b04728c();
  func_0x00010b04729c();
  return param_3;
}



/* Entry: 1067b8be8; end: 1067b8bef; -[SCBirthdayPageComposerHandlersImpl chatScopeDidDismiss:] */

void FUN_1067b8be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1067b8bf0; end: 1067b8bf7; -[SCBirthdayPageComposerHandlersImpl dismissCameraScope:] */

void FUN_1067b8bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1067b8bf8; end: 1067b8bfb; -[SCBirthdayPageComposerHandlersImpl captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1067b8bf8(void)

{
  return;
}



/* Entry: 1067b8bfc; end: 1067b8c03; -[SCBirthdayPageComposerHandlersImpl friendProfileDidDismiss:] */

void FUN_1067b8bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1067b8c04; end: 1067b8c7b; -[SCBirthdayPageComposerHandlersImpl .cxx_destruct] */

void FUN_1067b8c04(long param_1)

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



/* Entry: 1067b8c7c; end: 1067b8c87; -[SCBirthdayPageComposerProvidersImpl pushToValdiMarshaller:] */

undefined8 FUN_1067b8c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b0472c8(param_3,param_1);
  func_0x00010b0472c0();
  func_0x00010b04728c();
  func_0x00010b04729c();
  return param_3;
}



/* Entry: 1067b8c88; end: 1067b8c8f; -[SCBirthdayPageComposerProvidersImpl friendStore] */

undefined8 FUN_1067b8c88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067b8c90; end: 1067b8cbf; -[SCBirthdayPageComposerProvidersImpl setFriendStore:] */

void FUN_1067b8c90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067b8cc0; end: 1067b8cc7; -[SCBirthdayPageComposerProvidersImpl userInfoProvider] */

undefined8 FUN_1067b8cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067b8cc8; end: 1067b8cf7; -[SCBirthdayPageComposerProvidersImpl setUserInfoProvider:] */

void FUN_1067b8cc8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067b8cf8; end: 1067b8cff; -[SCBirthdayPageComposerProvidersImpl friendmojiProvider] */

undefined8 FUN_1067b8cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067b8d00; end: 1067b8d2f; -[SCBirthdayPageComposerProvidersImpl setFriendmojiProvider:] */

void FUN_1067b8d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067b8d30; end: 1067b8d37; -[SCBirthdayPageComposerProvidersImpl blizzardLogger] */

undefined8 FUN_1067b8d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067b8d38; end: 1067b8d67; -[SCBirthdayPageComposerProvidersImpl setBlizzardLogger:] */

void FUN_1067b8d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067b8d68; end: 1067b8d6f; -[SCBirthdayPageComposerProvidersImpl cofStore] */

undefined8 FUN_1067b8d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067b8d70; end: 1067b8d9f; -[SCBirthdayPageComposerProvidersImpl setCofStore:] */

void FUN_1067b8d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067b8da0; end: 1067b8df3; -[SCBirthdayPageComposerProvidersImpl .cxx_destruct] */

void FUN_1067b8da0(long param_1)

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



/* Entry: 1067b8df4; end: 1067b8f13; -[SCBirthdayPageContainerViewController initWithValdiRuntimeProvider:pageContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067b8df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f3240;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127504dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127504e0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c189400();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127504e4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b8f14; end: 1067b90a7; -[SCBirthdayPageContainerViewController loadValdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b8f14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_1127504e8;
  lVar2 = param_1;
  if (*(long *)(param_1 + lVar8) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_1127504dc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127504e0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ce030;
    _objc_alloc(PTR_PTR_1126ce030);
    func_0x00010c019a60();
    lVar1 = param_1;
    func_0x00010bf1a760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d86a0(puVar7,param_2,lVar1);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ce038;
    _objc_alloc();
    func_0x00010c061d40();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar4;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127504e4);
    uStack_60 = *(undefined8 *)(param_1 + lVar8);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067a20(uVar5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f1ce0();
  if (lVar2 - 1U < 3) {
    ppuVar6 = (undefined **)(&PTR_PTR_11093c688)[lVar2 - 1U];
  }
  else {
    ppuVar6 = &PTR_PTR_1133bb420;
  }
  puVar7 = *ppuVar6;
  _objc_retain(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067b90a8; end: 1067b90f7; -[SCBirthdayPageContainerViewController birthdayPageLoggingSource] */

void FUN_1067b90a8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  func_0x00010c0f1ce0();
  if (param_1 - 1U < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_11093c688)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR_PTR_1133bb420;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067b90f8; end: 1067b93c3; -[SCBirthdayPageContainerViewController addValdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b90f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127504e8;
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_98 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_a8 = uVar2;
  uStack_88 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_b8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_c8 = uVar4;
  uStack_80 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bef79e0(lVar1);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uStack_c8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  _objc_release(uStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1067b93c4;
  lStack_f0 = lVar3;
  uStack_e8 = uVar5;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c09c620();
  func_0x00010befc7e0(lVar1);
  puStack_f8 = PTR_PTR_1126f3240;
  lStack_100 = lVar1;
  _objc_msgSendSuper2(&lStack_100,PTR_s_viewWillAppear__1126853f0,puVar9);
  return;
}



/* Entry: 1067b93c4; end: 1067b9417; -[SCBirthdayPageContainerViewController viewWillAppear:] */

void FUN_1067b93c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c09c620();
  func_0x00010befc7e0(param_1);
  puStack_28 = PTR_PTR_1126f3240;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 1067b9418; end: 1067b9467; -[SCBirthdayPageContainerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b9418(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3240;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_1127504e8));
  return;
}



/* Entry: 1067b9468; end: 1067b946b; -[SCBirthdayPageContainerViewController cardToExpandTransition] */

void FUN_1067b9468(void)

{
  return;
}



/* Entry: 1067b946c; end: 1067b94ef; -[SCBirthdayPageContainerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1067b946c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf806a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_3 + (long)_DAT_1127504e8);
    if ((param_5 != uVar1) ||
       (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) == 0)) {
      uVar2 = 1;
      goto LAB_1067b94d4;
    }
  }
  uVar2 = 0;
LAB_1067b94d4:
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 1067b94f0; end: 1067b94fb; -[SCBirthdayPageContainerViewController cardTransitionWillBeginWithView:] */

void FUN_1067b94f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1067b94fc; end: 1067b94ff; -[SCBirthdayPageContainerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_1067b94fc(void)

{
  return;
}



/* Entry: 1067b9500; end: 1067b950b; -[SCBirthdayPageContainerViewController defaultProjectNameV2] */

undefined ** FUN_1067b9500(void)

{
  return &PTR____CFConstantStringClassReference_110e5f358;
}



/* Entry: 1067b950c; end: 1067b9517; -[SCBirthdayPageContainerViewController defaultSubProjectName] */

undefined ** FUN_1067b950c(void)

{
  return &PTR____CFConstantStringClassReference_110e5f4d8;
}



/* Entry: 1067b9518; end: 1067b951f; -[SCBirthdayPageContainerViewController pageViewName] */

undefined8 FUN_1067b9518(void)

{
  return 0x18;
}



/* Entry: 1067b9520; end: 1067b952f; -[SCBirthdayPageContainerViewController pageSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067b9520(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127504d4);
}



/* Entry: 1067b9530; end: 1067b953f; -[SCBirthdayPageContainerViewController setPageSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b9530(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127504d4) = param_3;
  return;
}



/* Entry: 1067b9540; end: 1067b9553; -[SCBirthdayPageContainerViewController disablePullDownToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1067b9540(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127504d8) & 1;
}



/* Entry: 1067b9554; end: 1067b9563; -[SCBirthdayPageContainerViewController setDisablePullDownToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b9554(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127504d8) = param_3;
  return;
}



/* Entry: 1067b9564; end: 1067b95c3; -[SCBirthdayPageContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b9564(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127504e4,0);
  _objc_storeStrong(param_1 + _DAT_1127504e8,0);
  _objc_storeStrong(param_1 + _DAT_1127504e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127504dc,0);
  return;
}



/* Entry: 1067b95c4; end: 1067b979f; -[SCBirthdayPageHandlersImpl initWithNavigationServices:friendProfileScopeExposer:chatScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:snapchatterDataFetcher:birthdayPagePresenter:chatScopeServices:] */

undefined1 *
FUN_1067b95c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126f3248;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar4);
  }
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



/* Entry: 1067b97a0; end: 1067b986f; -[SCBirthdayPageHandlersImpl openChatWithUserId:] */

void FUN_1067b97a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067b9870;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b9870; end: 1067b98a3;  */

void FUN_1067b9870(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b98a4; end: 1067b99a7; -[SCBirthdayPageHandlersImpl _launchChatWithUserId:] */

void FUN_1067b98a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b3520;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffdd20();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22b00(uVar5,param_2,puVar2,puVar1,param_1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,uVar5,param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067b99a8; end: 1067b9aaf; -[SCBirthdayPageHandlersImpl openUserReplyCameraWithUserId:] */

void FUN_1067b99a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b9ab0; end: 1067b9af7;  */

void FUN_1067b9ab0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b9af8; end: 1067b9c93; -[SCBirthdayPageHandlersImpl _openUserReplyCameraWithUserId:] */

void FUN_1067b9af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar3 = PTR_PTR_1126ae6c0;
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c294300(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e5a0(puVar1,param_2,puVar3,0x21,0xb,0,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0b50;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf500(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23680(uVar6,param_2,puVar3,puVar4,param_1,2,0,0,0,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar6,param_1);
  _objc_release(uVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067b9c94; end: 1067b9d9b; -[SCBirthdayPageHandlersImpl openUserProfileWithUserId:] */

void FUN_1067b9c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b9d9c; end: 1067b9de3;  */

void FUN_1067b9d9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b9de4; end: 1067b9ed7; -[SCBirthdayPageHandlersImpl _launchFriendProfileWithSnapchatter:] */

void FUN_1067b9de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_90 = 0xd8;
  uStack_88 = 0;
  uStack_78 = 0x11;
  uStack_80 = 0xffffffffcf5d0adf;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0159e0(puVar1,param_2,&uStack_90,uVar3,param_3,param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b9ed8; end: 1067b9f03; -[SCBirthdayPageHandlersImpl pageDismissHandler] */

void FUN_1067b9ed8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf832a0(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067b9f04; end: 1067b9f0f; -[SCBirthdayPageHandlersImpl pushToValdiMarshaller:] */

undefined8 FUN_1067b9f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b0472c8(param_3,param_1);
  func_0x00010b0472c0();
  func_0x00010b04728c();
  func_0x00010b04729c();
  return param_3;
}



/* Entry: 1067b9f10; end: 1067b9f17; -[SCBirthdayPageHandlersImpl chatScopeDidDismiss:] */

void FUN_1067b9f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1067b9f18; end: 1067b9f1f; -[SCBirthdayPageHandlersImpl dismissCameraScope:] */

void FUN_1067b9f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1067b9f20; end: 1067b9f23; -[SCBirthdayPageHandlersImpl captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1067b9f20(void)

{
  return;
}



/* Entry: 1067b9f24; end: 1067b9f2b; -[SCBirthdayPageHandlersImpl friendProfileDidDismiss:] */

void FUN_1067b9f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1067b9f2c; end: 1067b9fa3; -[SCBirthdayPageHandlersImpl .cxx_destruct] */

void FUN_1067b9f2c(long param_1)

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



/* Entry: 1067b9fa4; end: 1067ba01b; -[SCBirthdayPagePresenterImpl initBirthdayProviderBlock:] */

undefined1 * FUN_1067b9fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067ba01c; end: 1067ba12f; -[SCBirthdayPagePresenterImpl presentBirthdayPageWithUIContainer:pageSource:] */

void FUN_1067ba01c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1067ba0bc;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    uStack_38 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(uStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1067ba130; end: 1067ba1e7; -[SCBirthdayPagePresenterImpl dismissBirthdayPage] */

void FUN_1067ba130(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 8) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    uStack_28 = 0x1067ba190;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 1067ba1e8; end: 1067ba1f7;  */

void FUN_1067ba1e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ba1f8; end: 1067ba227; -[SCBirthdayPagePresenterImpl .cxx_destruct] */

void FUN_1067ba1f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ba228; end: 1067ba233; -[SCBirthdayPageProvidersImpl pushToValdiMarshaller:] */

undefined8 FUN_1067ba228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b0472c8(param_3,param_1);
  func_0x00010b0472c0();
  func_0x00010b04728c();
  func_0x00010b04729c();
  return param_3;
}



/* Entry: 1067ba234; end: 1067ba23b; -[SCBirthdayPageProvidersImpl friendStore] */

undefined8 FUN_1067ba234(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067ba23c; end: 1067ba26b; -[SCBirthdayPageProvidersImpl setFriendStore:] */

void FUN_1067ba23c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067ba26c; end: 1067ba273; -[SCBirthdayPageProvidersImpl userInfoProvider] */

undefined8 FUN_1067ba26c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067ba274; end: 1067ba2a3; -[SCBirthdayPageProvidersImpl setUserInfoProvider:] */

void FUN_1067ba274(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067ba2a4; end: 1067ba2ab; -[SCBirthdayPageProvidersImpl friendmojiProvider] */

undefined8 FUN_1067ba2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067ba2ac; end: 1067ba2db; -[SCBirthdayPageProvidersImpl setFriendmojiProvider:] */

void FUN_1067ba2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ba2dc; end: 1067ba2e3; -[SCBirthdayPageProvidersImpl blizzardLogger] */

undefined8 FUN_1067ba2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067ba2e4; end: 1067ba313; -[SCBirthdayPageProvidersImpl setBlizzardLogger:] */

void FUN_1067ba2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ba314; end: 1067ba31b; -[SCBirthdayPageProvidersImpl cofStore] */

undefined8 FUN_1067ba314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067ba31c; end: 1067ba34b; -[SCBirthdayPageProvidersImpl setCofStore:] */

void FUN_1067ba31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ba34c; end: 1067ba39f; -[SCBirthdayPageProvidersImpl .cxx_destruct] */

void FUN_1067ba34c(long param_1)

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



/* Entry: 1067ba3a0; end: 1067ba48f; -[SCBirthdayPageServiceProvider provide] */

void FUN_1067ba3a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ce040;
  _objc_alloc(PTR_PTR_1126ce040);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff78c0(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067ba490; end: 1067ba4df;  */

void FUN_1067ba490(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c10fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067ba4e0; end: 1067ba57b; -[SCBirthdayPageServiceProvider birthdayPageContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ba4e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ce048;
  _objc_alloc(PTR_PTR_1126ce048);
  lVar2 = param_1 + _DAT_112750528;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060000(puVar1,param_2,lVar3,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067ba57c; end: 1067ba65b; -[SCBirthdayPageServiceProvider presenterImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ba57c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ce050;
  _objc_alloc(PTR_PTR_1126ce050);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfee460(puVar1);
  _objc_storeWeak(param_1 + _DAT_11275052c,puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067ba65c; end: 1067ba6ab;  */

void FUN_1067ba65c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf1a700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067ba6ac; end: 1067ba763; -[SCBirthdayPageServiceProvider pageContext] */

void FUN_1067ba6ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067ba764; end: 1067ba7a3;  */

void FUN_1067ba764(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1a720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067ba7a4; end: 1067bac23; -[SCBirthdayPageServiceProvider birthdayPageContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ba7a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126ce058;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112750530;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112750560;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_112750540;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11275052c;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112750544;
  _objc_loadWeakRetained();
  func_0x00010c02eaa0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar2 = param_1 + _DAT_112750548;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11275054c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112750550;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b1548;
  _objc_alloc(PTR_PTR_1126b1548);
  func_0x00010c046040();
  lVar7 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112750554;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112750558;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf3f640();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126ce060;
  _objc_alloc_init(PTR_PTR_1126ce060);
  lVar2 = lVar4;
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar9);
  _objc_release(lVar2);
  func_0x00010c21e800(puVar9);
  lVar2 = lVar7;
  func_0x00010c269d40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0660(puVar9);
  _objc_release(lVar2);
  func_0x00010c171b20(puVar9);
  func_0x00010c17df40(puVar9);
  lVar2 = param_1 + _DAT_112750528;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar13 = PTR_PTR_1126ce020;
  _objc_alloc();
  func_0x00010c040b80();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1067bac24;
  puStack_78 = &UNK_110841f80;
  lStack_70 = param_1;
  puStack_68 = puVar13;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  puVar14 = PTR_PTR_1126ce068;
  _objc_alloc(PTR_PTR_1126ce068);
  func_0x00010c02ee60();
  _objc_release(puStack_68);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(puVar9);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(puVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1067bac24; end: 1067bace7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067bac24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b0b50;
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112750530;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf500(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1c1bc0(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1067bace8; end: 1067bad23; -[SCBirthdayPageServiceProvider end] */

void FUN_1067bace8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3258;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067bad24; end: 1067bae03; -[SCBirthdayPageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067bad24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750560);
  _objc_storeStrong(param_1 + _DAT_11275053c,0);
  _objc_storeStrong(param_1 + _DAT_112750538,0);
  _objc_storeStrong(param_1 + _DAT_112750534,0);
  _objc_destroyWeak(param_1 + _DAT_112750544);
  _objc_destroyWeak(param_1 + _DAT_112750550);
  _objc_destroyWeak(param_1 + _DAT_11275054c);
  _objc_destroyWeak(param_1 + _DAT_112750548);
  _objc_destroyWeak(param_1 + _DAT_112750540);
  _objc_destroyWeak(param_1 + _DAT_112750558);
  _objc_destroyWeak(param_1 + _DAT_112750530);
  _objc_destroyWeak(param_1 + _DAT_112750554);
  _objc_destroyWeak(param_1 + _DAT_112750528);
  _objc_destroyWeak(param_1 + _DAT_11275055c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275052c);
  return;
}



/* Entry: 1067bae04; end: 1067baf7f; -[SCBirthdayPageHandler initWithNavigationDelegate:friendProfileScopeLauncher:chatScopeLauncher:chatCameraScopeLauncher:chatCameraScopeServices:snapchatterDataFetcher:chatScopeServices:] */

undefined1 *
FUN_1067bae04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f3260;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067baf80; end: 1067bb04f; -[SCBirthdayPageHandler openChatWithUserId:] */

void FUN_1067baf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067bb050;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067bb050; end: 1067bb083;  */

void FUN_1067bb050(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067bb084; end: 1067bb187; -[SCBirthdayPageHandler _launchChatWithUserId:] */

void FUN_1067bb084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b3520;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffdd20();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22b00(uVar5,param_2,puVar2,puVar1,param_1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,uVar5,param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067bb188; end: 1067bb28f; -[SCBirthdayPageHandler openUserReplyCameraWithUserId:] */

void FUN_1067bb188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067bb290; end: 1067bb2d7;  */

void FUN_1067bb290(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067bb2d8; end: 1067bb473; -[SCBirthdayPageHandler _openUserReplyCameraWithUserId:] */

void FUN_1067bb2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar3 = PTR_PTR_1126ae6c0;
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c294300(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e5a0(puVar1,param_2,puVar3,0x21,0xb,0,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0b50;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf500(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23680(uVar6,param_2,puVar3,puVar4,param_1,2,0,0,0,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar6,param_1);
  _objc_release(uVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067bb474; end: 1067bb57b; -[SCBirthdayPageHandler openUserProfileWithUserId:] */

void FUN_1067bb474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067bb57c; end: 1067bb5c3;  */

void FUN_1067bb57c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067bb5c4; end: 1067bb6b7; -[SCBirthdayPageHandler _launchFriendProfileWithSnapchatter:] */

void FUN_1067bb5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_90 = 0xd8;
  uStack_88 = 0;
  uStack_78 = 0x11;
  uStack_80 = 0xffffffffcf5d0adf;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0159e0(puVar1,param_2,&uStack_90,uVar3,param_3,param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1067bb6b8; end: 1067bb6c3; -[SCBirthdayPageHandler pushToValdiMarshaller:] */

undefined8 FUN_1067bb6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b0472c8(param_3,param_1);
  func_0x00010b0472c0();
  func_0x00010b04728c();
  func_0x00010b04729c();
  return param_3;
}



/* Entry: 1067bb6c4; end: 1067bb6cb; -[SCBirthdayPageHandler chatScopeDidDismiss:] */

void FUN_1067bb6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}


