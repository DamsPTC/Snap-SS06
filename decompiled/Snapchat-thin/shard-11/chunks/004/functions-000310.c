/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085ee538; end: 1085ee81b; -[SCTV3SessionWrapper _refreshRemoteParticipants:] */

void FUN_1085ee538(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)((long)puVar11 * 8);
        func_0x00010c2923e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar4);
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      puVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lVar5 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c12a2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar4 = *(undefined8 *)(lVar12 * 8);
        func_0x00010c244240(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(uVar4);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    puVar7 = puVar2;
    puVar3 = puVar11;
    func_0x00010c072060();
    if (((ulong)puVar7 & 1) == 0) {
      puVar7 = PTR_PTR_1126da678;
      _objc_alloc(PTR_PTR_1126da678);
      puVar3 = puVar2;
      func_0x00010bf00560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0342e0(puVar7);
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0xf0);
      puVar8 = PTR_PTR_1126da608;
      func_0x00010c2885c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar11);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf282e0();
  _objc_release(puVar3);
  uVar10 = (uint)puVar2;
  if ((bool)param_3[0x101] == (uVar10 == 4 || (uVar10 & 0xfffffffd) == 1)) {
    return;
  }
  if ((uVar10 < 5) && ((1 << (ulong)(uVar10 & 0x1f) & 0x1aU) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be89130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__registerAsScreenCaptureDelegate_11257fde8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__removeAsScreenCaptureDelegate_112580720);
  return;
}



/* Entry: 1085ee81c; end: 1085ee8c3; -[SCTV3SessionWrapper _updateScreenCaptureDelegate:] */

void FUN_1085ee81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf282e0();
  _objc_release(param_3);
  uVar2 = (uint)uVar1;
  if ((bool)*(char *)(param_1 + 0x101) == (uVar2 == 4 || (uVar2 & 0xfffffffd) == 1)) {
    return;
  }
  if ((uVar2 < 5) && ((1 << (ulong)(uVar2 & 0x1f) & 0x1aU) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be89130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerAsScreenCaptureDelegate_11257fde8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAsScreenCaptureDelegate_112580720);
  return;
}



/* Entry: 1085ee8c4; end: 1085ee94f; -[SCTV3SessionWrapper _updateCallIsInProgress:] */

void FUN_1085ee8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf282e0();
  iVar1 = (int)uVar2;
  _objc_release(param_3);
  if ((bool)*(char *)(param_1 + 0xd0) == (iVar1 == 4)) {
    return;
  }
  *(bool *)(param_1 + 0xd0) = iVar1 == 4;
  if (iVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be68230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCallStarted_112577a28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be68210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCallEnded_112577a20);
  return;
}



/* Entry: 1085ee950; end: 1085ee957; -[SCTV3SessionWrapper _onCallStarted] */

void FUN_1085ee950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_start_112671080);
  return;
}



/* Entry: 1085ee958; end: 1085ee95f; -[SCTV3SessionWrapper _onCallEnded] */

void FUN_1085ee958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_stop_112673008);
  return;
}



/* Entry: 1085ee960; end: 1085ee967; -[SCTV3SessionWrapper _showVideoPrivacyNotification] */

void FUN_1085ee960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_enqueueNotification_1125c3268);
  return;
}



/* Entry: 1085ee968; end: 1085ee977; -[SCTV3SessionWrapper _clearLensIdToRestore] */

void FUN_1085ee968(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ee978; end: 1085ee97f; -[SCTV3SessionWrapper talkContext] */

undefined8 FUN_1085ee978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1085ee980; end: 1085ee987; -[SCTV3SessionWrapper lensToRestore] */

undefined8 FUN_1085ee980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1085ee988; end: 1085ee98f; -[SCTV3SessionWrapper participantColorCache] */

undefined8 FUN_1085ee988(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1085ee990; end: 1085ee997; -[SCTV3SessionWrapper localScreenShareInfoObservable] */

undefined8 FUN_1085ee990(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1085ee998; end: 1085ee99f; -[SCTV3SessionWrapper callIntent] */

undefined8 FUN_1085ee998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1085ee9a0; end: 1085ee9a7; -[SCTV3SessionWrapper callPageConfig] */

undefined8 FUN_1085ee9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1085ee9a8; end: 1085ee9af; -[SCTV3SessionWrapper cameraType] */

undefined8 FUN_1085ee9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1085ee9b0; end: 1085ee9b7; -[SCTV3SessionWrapper setCameraType:] */

void FUN_1085ee9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 1085ee9b8; end: 1085ee9c3; -[SCTV3SessionWrapper callingSessionState] */

void FUN_1085ee9b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x128,1);
  return;
}



/* Entry: 1085ee9c4; end: 1085ee9cb; -[SCTV3SessionWrapper setCallingSessionState:] */

void FUN_1085ee9c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1085ee9cc; end: 1085eeb5b; -[SCTV3SessionWrapper .cxx_destruct] */

void FUN_1085ee9cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 1085eeb5c; end: 1085eeb63; -[SCTV3SessionWrapperToken uiState] */

undefined4 FUN_1085eeb5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1085eeb64; end: 1085eeb6b; -[SCTV3SessionWrapperToken setUiState:] */

void FUN_1085eeb64(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 1085eeb6c; end: 1085eeb73; -[SCTV3SessionWrapperToken isLocalVideoPaused] */

undefined1 FUN_1085eeb6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1085eeb74; end: 1085eeb7b; -[SCTV3SessionWrapperToken setIsLocalVideoPaused:] */

void FUN_1085eeb74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1085eeb7c; end: 1085eebef; -[SCTalkCoreDispatcherImpl initWithPerformer:] */

undefined1 * FUN_1085eeb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd060;
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



/* Entry: 1085eebf0; end: 1085eec37; +[SCTalkCoreDispatcherImpl dispatcherWithPerformer:] */

void FUN_1085eebf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c034960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085eec38; end: 1085eec87; -[SCTalkCoreDispatcherImpl dispatchAsync:] */

void FUN_1085eec38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085eec88; end: 1085eed2f; -[SCTalkCoreDispatcherImpl dispatchSync:] */

void FUN_1085eec88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06fc80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27da4();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085eed30; end: 1085eed63; -[SCTalkCoreDispatcherImpl assertQueue] */

void FUN_1085eed30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085eed64; end: 1085eed6b; -[SCTalkCoreDispatcherImpl performer] */

void FUN_1085eed64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1085eed6c; end: 1085eed77; -[SCTalkCoreDispatcherImpl .cxx_destruct] */

void FUN_1085eed6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085eed78; end: 1085eee23; -[SCPlatformCallingManagerProvider initWithActiveUserScopedValdiRuntimeServices:errorReporter:] */

undefined1 *
FUN_1085eed78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085eee24; end: 1085ef08f; -[SCPlatformCallingManagerProvider getPlatformCallingManagerFuture] */

undefined1 * FUN_1085eee24(long param_1,undefined1 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **unaff_x23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  _os_unfair_lock_lock(param_1 + 0x10);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  puVar12 = PTR_PTR_1126ae558;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110ee54d8;
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(puVar11);
    unaff_x23 = ppuVar1;
  }
  else {
    puVar12 = *(undefined **)(param_1 + 8);
    if (puVar12 == (undefined *)0x0) {
      puVar11 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar12 = puVar11;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar12;
      _objc_release(uVar7);
      _os_unfair_lock_unlock(param_1 + 0x10);
      _objc_initWeak(auStack_60,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1085ef090;
      puStack_80 = &UNK_110a5a150;
      unaff_x23 = &puStack_98;
      puVar8 = auStack_60;
      _objc_copyWeak(auStack_70);
      _objc_retain(puVar11);
      puStack_78 = puVar11;
      puStack_68 = param_2;
      func_0x00010bfc9d20(uVar7);
      _objc_release(uVar7);
      puVar12 = puVar11;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_60);
      _objc_release();
      goto LAB_1085eef20;
    }
    _objc_retain(puVar12);
  }
  puVar11 = (undefined *)(param_1 + 0x10);
  _os_unfair_lock_unlock();
LAB_1085eef20:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  _objc_retain(puVar8);
  puVar12 = puVar11 + 0x28;
  _objc_loadWeakRetained();
  if (puVar12 == (undefined *)0x0) goto LAB_1085ef1ec;
  _os_unfair_lock_lock(puVar12 + 0x10);
  if (puVar12[0x28] == '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar11 = *(undefined **)(puVar11 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  else {
    puVar3 = PTR_PTR_1126da680;
    func_0x00010bfbc0e0(PTR_PTR_1126da680);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfc8de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(puVar11 + 0x20));
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  while( true ) {
    _os_unfair_lock_unlock(puVar12 + 0x10);
LAB_1085ef1ec:
    _objc_release(puVar12);
    puVar5 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) break;
    ___stack_chk_fail();
    if ((int)puVar9 != 1) {
      _os_unfair_lock_unlock(puVar12 + 0x10);
      __Unwind_Resume();
      _os_unfair_lock_lock(puVar5 + 0x10);
      lVar10 = *(long *)(puVar5 + 8);
      _os_unfair_lock_unlock(puVar5 + 0x10);
      return (undefined1 *)(ulong)(lVar10 != 0);
    }
    _objc_begin_catch();
    _objc_retain();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = puVar5;
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c1328a0(*(undefined8 *)(puVar12 + 0x20));
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar11 = *(undefined **)(puVar11 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar11);
    _objc_release(puVar4);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)(puVar12 + 8);
    *(undefined8 *)(puVar12 + 8) = 0;
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_end_catch();
  }
  return puVar5;
}



/* Entry: 1085ef090; end: 1085ef373;  */

ulong FUN_1085ef090(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  iVar7 = (int)param_2;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar9 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar9 == 0) goto LAB_1085ef1ec;
  _os_unfair_lock_lock(lVar9 + 0x10);
  if (*(char *)(lVar9 + 0x28) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_1 = *(long *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126da680;
    func_0x00010bfbc0e0(PTR_PTR_1126da680);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfc8de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  while( true ) {
    _os_unfair_lock_unlock(lVar9 + 0x10);
LAB_1085ef1ec:
    _objc_release(lVar9);
    uVar4 = param_2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) break;
    ___stack_chk_fail();
    if (iVar7 != 1) {
      _os_unfair_lock_unlock(lVar9 + 0x10);
      __Unwind_Resume();
      _os_unfair_lock_lock(uVar4 + 0x10);
      lVar9 = *(long *)(uVar4 + 8);
      _os_unfair_lock_unlock(uVar4 + 0x10);
      return (ulong)(lVar9 != 0);
    }
    _objc_begin_catch();
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar5 = uVar4;
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c1328a0(*(undefined8 *)(lVar9 + 0x20));
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_1 = *(long *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_1);
    _objc_release(puVar3);
    _objc_release(puVar1);
    uVar6 = *(undefined8 *)(lVar9 + 8);
    *(undefined8 *)(lVar9 + 8) = 0;
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_end_catch();
  }
  return uVar4;
}



/* Entry: 1085ef374; end: 1085ef3af; -[SCPlatformCallingManagerProvider isPlatformCallingManagerCreated] */

bool FUN_1085ef374(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  _os_unfair_lock_unlock(param_1 + 0x10);
  return lVar1 != 0;
}



/* Entry: 1085ef3b0; end: 1085ef423; -[SCPlatformCallingManagerProvider dispose] */

void FUN_1085ef3b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010c1328a0(*(undefined8 *)(param_1 + 0x20),param_2,0x261,
                        &PTR____CFConstantStringClassReference_110ee5538);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1085ef424; end: 1085ef45f; -[SCPlatformCallingManagerProvider .cxx_destruct] */

void FUN_1085ef424(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ef460; end: 1085ef5e7; -[SCTalkCoreProvider initWithUserId:talkCoreDispatcher:preferences:activeUserScopedValdiRuntimeServices:errorReporter:presenceServiceDelegate:platformPresenceServiceProvider:] */

undefined1 *
FUN_1085ef460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fd070;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126da688;
    _objc_alloc();
    func_0x00010bff0e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
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



/* Entry: 1085ef5e8; end: 1085ef643; -[SCTalkCoreProvider dispose] */

void FUN_1085ef5e8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x28));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c07a260();
  if (iVar1 != 0) {
    func_0x00010c142ca0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a5aaa8);
  }
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085ef644; end: 1085ef64b;  */

void FUN_1085ef644(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1085ef64c; end: 1085ef67f; -[SCTalkCoreProvider dealloc] */

void FUN_1085ef64c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fd070;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085ef680; end: 1085ef727; -[SCTalkCoreProvider runWithTalkCoreTS:] */

void FUN_1085ef680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfc8e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1085ef728;
    puStack_30 = &UNK_110a5aac8;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x00010c297260(lVar1,param_2,&puStack_48,0);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ef728; end: 1085ef73b;  */

void FUN_1085ef728(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001085ef738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 1085ef73c; end: 1085ef84f; -[SCTalkCoreProvider ensureTalkCoreIsInitializedWithTSDuplexInitDelay] */

void FUN_1085ef73c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c07a260();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0647d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_initializeActiveConversationsObs_1125f6c00);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = 0;
  _dispatch_time(0,1000000000);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0f98a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085ef850;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000107c27d84(uVar2,uVar4,&puStack_60);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1085ef850; end: 1085ef87b;  */

void FUN_1085ef850(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ef87c; end: 1085ef92f; -[SCTalkCoreProvider _ensureTalkCoreIsInitialized] */

void FUN_1085ef87c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_2;
  func_0x00010c142ca0(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1085ef930; end: 1085ef963;  */

void FUN_1085ef930(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0647c0(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ef964; end: 1085ef9cf; -[SCTalkCoreProvider .cxx_destruct] */

void FUN_1085ef964(long param_1)

{
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



/* Entry: 1085ef9d0; end: 1085efacf; -[SCTalkFuture initWithFuture:] */

undefined8 * FUN_1085ef9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fd078;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085efad0; end: 1085efb13;  */

void FUN_1085efad0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085efb14; end: 1085efb5b; +[SCTalkFuture fromSCFuture:] */

void FUN_1085efb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c016a20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085efb5c; end: 1085efb83; -[SCTalkFuture value] */

void FUN_1085efb5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085efb84; end: 1085efbab; -[SCTalkFuture future] */

void FUN_1085efb84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085efbac; end: 1085efbdb; -[SCTalkFuture .cxx_destruct] */

void FUN_1085efbac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085efbdc; end: 1085efcc7; -[SCTalkIntentDonator initWithStartCallIntentDonator:identityServices:] */

undefined1 *
FUN_1085efbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd080;
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
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085efcc8; end: 1085efcfb;  */

void FUN_1085efcc8(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085efcfc; end: 1085efd7b; -[SCTalkIntentDonator sessionWrapper:updatedState:] */

void FUN_1085efcfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c2688a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c252440(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be30da0(param_1,param_2,param_3,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085efd7c; end: 1085efed7; -[SCTalkIntentDonator _handleStateUpdateForTalkContext:sessionState:] */

void FUN_1085efd7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf282e0();
  _objc_release(lVar3);
  if ((int)lVar2 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0e00e0(puVar4,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
      puVar5 = puVar4;
      func_0x00010bf1f3c0(puVar4);
      func_0x00010be05b40(param_1,param_2,param_3,puVar5);
    }
  }
  else {
    if ((int)lVar2 != 1) goto LAB_1085efeb0;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) goto LAB_1085efeb0;
    lVar3 = param_4;
    func_0x00010bf28140(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x0001085f8688();
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2 == 2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,uVar1);
  }
  _objc_release(puVar4);
LAB_1085efeb0:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085efed8; end: 1085f0093; -[SCTalkIntentDonator _donateStartCallIntentForTalkContext:isVideoCall:] */

void FUN_1085efed8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf51800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  uStack_68 = param_2;
  uStack_60 = param_4;
  func_0x00010bf85e80(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f0094; end: 1085f033b;  */

void FUN_1085f0094(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1085f033c;
    uStack_88 = 0x1085f034c;
    uStack_80 = 0;
    uStack_c8 = 0;
    uStack_b8 = 0x2020000000;
    uStack_b0 = 0;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_1085f0354;
    puStack_e8 = &UNK_110876070;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_d8 = &uStack_a8;
    puStack_c0 = &uStack_c8;
    puStack_a0 = &uStack_a8;
    _objc_retain(uVar2);
    puStack_128 = puVar3;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_1085f03a4;
    puStack_110 = &UNK_110842b58;
    puStack_108 = &uStack_a8;
    uStack_e0 = uVar2;
    puStack_d0 = &uStack_c8;
    func_0x00010c0be200(uVar5);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3f80;
    func_0x00010bf1a980(PTR_PTR_1126d3f80);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf880c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_copyWeak(auStack_138,param_1 + 0x30);
    uStack_130 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_138);
    _objc_release(uVar5);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085f033c; end: 1085f0353;  */

void FUN_1085f033c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1085f0354; end: 1085f03a3;  */

void FUN_1085f0354(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1085f03a4; end: 1085f03db;  */

void FUN_1085f03a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085f03dc; end: 1085f03df;  */

void FUN_1085f03dc(void)

{
  return;
}



/* Entry: 1085f03e0; end: 1085f0427; -[SCTalkIntentDonator .cxx_destruct] */

void FUN_1085f03e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085f0428; end: 1085f088b; -[SCTalkManager initWithUserId:cameraServices:chatTransportServices:identityServices:circumstanceEngine:performer:localFrameProvider:incomingCallRequestObservable:callKitServices:audioManager:callOpsDataProvider:talkCoreProvider:talkSessionProvider:notificationPayloadDecryptor:rendererManagerBridge:audioSession:errorReporter:] */

undefined8 *
FUN_1085f0428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
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
  _objc_retain(param_17);
  _objc_retain();
  _objc_retain(param_19);
  puStack_80 = PTR_PTR_1126fd088;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[9];
    puVar1[9] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[10];
    puVar1[10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    func_0x00010c2217a0(puVar1[4]);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = puVar1[8];
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1085f088c;
    puStack_a0 = &UNK_110a5ab78;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c0e33e0(uVar2);
    uVar2 = puVar1[6];
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c0e33e0(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 1085f088c; end: 1085f0923;  */

void FUN_1085f088c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef9980(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f0924; end: 1085f0957; -[SCTalkManager dealloc] */

void FUN_1085f0924(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fd088;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085f0958; end: 1085f095f; -[SCTalkManager identityServices] */

void FUN_1085f0958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1085f0960; end: 1085f0967; -[SCTalkManager chatTransportServices] */

void FUN_1085f0960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1085f0968; end: 1085f09d3; -[SCTalkManager invalidate] */

void FUN_1085f0968(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085f09d4; end: 1085f09db; -[SCTalkManager audioManager] */

void FUN_1085f09d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 1085f09dc; end: 1085f0aa3; -[SCTalkManager createSessionForConvoId:convoMetadata:dependencies:delegate:completion:] */

void FUN_1085f09dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    func_0x00010bf595a0(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085f0aa4; end: 1085f0bb7; -[SCTalkManager createModularCallSessionForTalkContext:callIntent:selectedLensInfoObservable:appliedLensObservable:sharedLensController:delegate:sourceType:completion:] */

void FUN_1085f0aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    func_0x00010bf57200(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    (**(code **)(param_11 + 0x10))(param_11,0);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085f0bb8; end: 1085f0c2f; -[SCTalkManager createPipCallSessionForTalkContext:completion:] */

void FUN_1085f0bb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    func_0x00010bf57840(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085f0c30; end: 1085f0d17; -[SCTalkManager createHeadlessSessionForTalkContext:callIntent:remoteUserIds:delegate:sourceType:withCallKit:completion:] */

void FUN_1085f0c30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    func_0x00010bf56780(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    (**(code **)(param_9 + 0x10))(param_9,0);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085f0d18; end: 1085f0d1f; -[SCTalkManager isSessionActiveForTalkContext:] */

void FUN_1085f0d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_isSessionActiveForTalkContext__1125fd0a0);
  return;
}



/* Entry: 1085f0d20; end: 1085f0ec7; -[SCTalkManager acquirePermissionToStartCall:forTalkContext:sourceType:alertDialogUiContainer:completionBlock:] */

void FUN_1085f0d20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf5e540(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_2;
  _objc_retain(param_7);
  uStack_70 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010bf96860(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1085f0ec8; end: 1085f0fab;  */

void FUN_1085f0ec8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1085f0fac;
    puStack_50 = &UNK_110a5abd8;
    _objc_copyWeak(auStack_40,param_1 + 0x38);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    ppuVar2 = &puStack_68;
    uStack_48 = uVar3;
    _objc_retainBlock(ppuVar2);
    func_0x00010bdc4160(lVar1);
    _objc_release(ppuVar2);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1085f0fac; end: 1085f104f;  */

void FUN_1085f0fac(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if (param_2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1085f1050;
    puStack_38 = &UNK_11084a9b8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_28 = (undefined1)param_3;
    uStack_30 = uVar1;
    func_0x000100c749e0(0x3e99999a,"APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001085f104c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1085f1050; end: 1085f1063;  */

void FUN_1085f1050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085f1060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085f1064; end: 1085f119b; -[SCTalkManager acquirePermissionToPublishMedia:forTalkContext:alertDialogUiContainer:completionBlock:] */

void FUN_1085f1064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1085f119c;
  puStack_78 = &UNK_110a5abd8;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_2;
  _objc_retain(param_6);
  uStack_70 = param_6;
  _objc_retainBlock(&puStack_90);
  func_0x00010bdc4160(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1085f119c; end: 1085f11ab;  */

void FUN_1085f119c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001085f11a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1085f11ac; end: 1085f159b; -[SCTalkManager _acquirePermissionToPublishMedia:forTalkContext:alertDialogUiContainer:loggedCompletionBlock:] */

void FUN_1085f11ac(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  if (param_3 == 0) {
    pcVar10 = *(code **)(param_6 + 0x10);
    uVar2 = 1;
LAB_1085f13b4:
    (*pcVar10)(param_6,0,uVar2);
    goto LAB_1085f153c;
  }
  func_0x000108616cb8();
  if ((int)uVar1 == 0) {
    func_0x000108616c68();
    if ((uVar1 & 1) == 0) {
      FUN_108616d08();
      pcVar10 = *(code **)(param_6 + 0x10);
      uVar2 = 0;
      goto LAB_1085f13b4;
    }
    lVar3 = *(long *)(param_1 + 0x70);
    func_0x00010c160780();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
LAB_1085f1388:
      (**(code **)(param_6 + 0x10))(param_6,0,1);
    }
    else {
      lVar6 = lVar5;
      func_0x00010c2688a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf4e8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_4;
      func_0x00010bf4e8a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c0720c0();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      if ((int)lVar9 != 0) goto LAB_1085f1388;
      lVar6 = lVar5;
      func_0x00010c2688a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf5e540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_initWeak(auStack_c0,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010bf517c0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf51800(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar7);
      _objc_retain(param_5);
      _objc_copyWeak(auStack_c8,auStack_c0);
      _objc_retain(lVar5);
      _objc_retain(param_6);
      func_0x00010bf85e80(uVar2);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar6);
      _objc_release(uVar2);
      _objc_release(param_6);
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_c8);
      _objc_release(param_5);
      _objc_release(lVar7);
      _objc_destroyWeak(auStack_c0);
      _objc_release(lVar7);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1085f159c;
    puStack_a0 = &UNK_110a5ac08;
    lStack_98 = param_1;
    lStack_78 = param_3;
    _objc_retain(param_4);
    lStack_90 = param_4;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(param_6);
    uStack_80 = param_6;
    uStack_70 = param_2;
    func_0x00010c136400(uVar2);
    _objc_release(uVar2);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    lVar4 = lStack_90;
  }
  _objc_release(lVar4);
LAB_1085f153c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1085f159c; end: 1085f16ab;  */

void FUN_1085f159c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1085f165c;
  puStack_58 = &UNK_1108e3258;
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  _objc_retain(uVar2);
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1085f16ac; end: 1085f171b;  */

bool FUN_1085f16ac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c296d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 1085f171c; end: 1085f1887;  */

void FUN_1085f171c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126da690;
  _objc_alloc(PTR_PTR_1126da690);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074920();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  func_0x00010c01f100(puVar1);
  _objc_release(uVar2);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 1085f1888; end: 1085f1967;  */

void FUN_1085f1888(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_copyWeak(auStack_40,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010bf6f440(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1085f1968; end: 1085f1a23;  */

void FUN_1085f1968(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c288f80(uVar1);
    _objc_release(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001085f1a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0);
  return;
}



/* Entry: 1085f1a24; end: 1085f1a3b;  */

void FUN_1085f1a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085f1a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085f1a3c; end: 1085f1a97; -[SCTalkManager createVideoFrameProvider] */

void FUN_1085f1a3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126da420;
  _objc_alloc(PTR_PTR_1126da420);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e220(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085f1a98; end: 1085f1bab; -[SCTalkManager processIncomingCallRequestAsNotification:completion:] */

void FUN_1085f1a98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = param_2;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  func_0x00010c142ca0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f1bac; end: 1085f1d77;  */

void FUN_1085f1bac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126da698;
  _objc_alloc(PTR_PTR_1126da698);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15df40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c268940(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005420(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1531c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bdf8b40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a5c0(puVar1);
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(lVar5);
  uVar2 = param_2;
  func_0x00010c114d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e3040(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085f1d78; end: 1085f1e67;  */

void FUN_1085f1d78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar4 = param_2;
    func_0x00010bf1f3c0(param_2);
    pcVar5 = *(code **)(lVar3 + 0x10);
  }
  else {
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1328a0(*(undefined8 *)(lVar1 + 0x80));
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
      _objc_release(puVar2);
      goto LAB_1085f1e3c;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar3 + 0x10);
    uVar4 = 0;
  }
  (*pcVar5)(lVar3,uVar4);
LAB_1085f1e3c:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f1e68; end: 1085f1f1b; -[SCTalkManager processRingingTimeout:completion:] */

void FUN_1085f1e68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085f1f1c;
  puStack_48 = &UNK_110a5acd8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c142ca0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f1f1c; end: 1085f1feb;  */

void FUN_1085f1f1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c115320(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0e3040(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085f1fec; end: 1085f2073; -[SCTalkManager onIncomingCallRequestFailedToPresent:] */

void FUN_1085f1fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1085f2074;
  puStack_30 = &UNK_110a5ad08;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c142ca0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f2074; end: 1085f2143;  */

void FUN_1085f2074(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126da698;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15df40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c268940(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005420(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0e4860(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085f2144; end: 1085f220b; -[SCTalkManager incomingCallRequestObservable] */

void FUN_1085f2144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_2;
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085f220c; end: 1085f229f;  */

void FUN_1085f220c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf968c0(uVar1);
    puVar2 = *(undefined **)(param_1 + 0x58);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ea0(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085f22a0; end: 1085f22c7; -[SCTalkManager cameraServices] */

void FUN_1085f22a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085f22c8; end: 1085f22cf; -[SCTalkManager localFrameProvider] */

void FUN_1085f22c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_target_112678178);
  return;
}


