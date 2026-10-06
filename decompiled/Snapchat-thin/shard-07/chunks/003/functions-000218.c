/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053e36e8; end: 1053e3717; -[SCConfigRepositoryNetworkDefaultImpl _isInternalServerError:] */

bool FUN_1053e36e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c067fc0(param_3);
    return param_3 - 0xdU < 2;
  }
  return false;
}



/* Entry: 1053e3718; end: 1053e3a57; -[SCConfigRepositoryNetworkDefaultImpl _handleSuccessfulHttpRequest:response:data:isPrelogin:requestStartTime:isFullSync:previousEtag:cofAppState:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001053e3850) */

void FUN_1053e3718(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,uint param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,long param_12)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  
  dVar9 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_12);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_5);
  func_0x00010bfafc40(uVar8);
  lVar2 = param_5;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  dVar9 = dVar9 - param_1;
  if (lVar3 == 0) {
LAB_1053e37e8:
    uVar4 = param_6;
    func_0x00010c08fa60();
    if (4 < uVar4) {
      func_0x00010c08fa60(param_6);
      uVar4 = param_6;
      func_0x00010c25eac0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b7848;
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain(0);
      puVar7 = puVar5;
      func_0x00010bf46260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(puVar7);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(0);
      func_0x00010bfbbb20(puVar5);
      func_0x00010bf3f6e0(dVar9,uVar8);
      _objc_release(uVar8);
      (**(code **)(param_12 + 0x10))(param_12,puVar5,param_7 ^ 1);
      _objc_release(puVar5);
      _objc_release(uVar4);
      goto LAB_1053e3a0c;
    }
    func_0x00010be084a0(dVar9,param_2);
  }
  else {
    iVar1 = 0x10db1158;
    func_0x00010c0720c0();
    if (iVar1 != 0) goto LAB_1053e37e8;
    lVar6 = param_2;
    func_0x00010be41360();
    if ((int)lVar6 != 0) {
      func_0x00010c1394a0(*(undefined8 *)(param_2 + 0x30));
    }
    func_0x00010be084a0(dVar9,param_2);
    func_0x00010c067ec0(lVar3);
  }
  func_0x00010be598e0(param_2);
LAB_1053e3a0c:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_6);
  return;
}



/* Entry: 1053e3a58; end: 1053e3b8b; -[SCConfigRepositoryNetworkDefaultImpl _handleFailedHttpRequestWithClientError:isPrelogin:isFullSync:requestStartTime:etag:appState:] */

void FUN_1053e3a58(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  dVar4 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010bfafc40(uVar3,param_3,0);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f6c0(dVar4 - param_1);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf87dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf3ec40(param_4);
  func_0x00010bf3f6a0(uVar1,param_3,uVar3,uVar2,param_6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = param_4;
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010be598e0(param_2,param_3,1,param_8,param_5,param_7,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1053e3b8c; end: 1053e3c43; -[SCConfigRepositoryNetworkDefaultImpl _emitSyncRequestSuccess:isPrelogin:isFullSync:requestDurationSec:serverErrorCode:] */

void FUN_1053e3b8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long in_x5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f6c0(param_1);
  _objc_release(uVar1);
  if (in_x5 != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053e3c44; end: 1053e3cfb; -[SCConfigRepositoryNetworkDefaultImpl _logSyncEventErrorWithEventStatus:appState:isPreLogin:previousEtag:errorCode:] */

void FUN_1053e3c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b86e0;
  _objc_retain(param_6);
  _objc_alloc_init(puVar1);
  func_0x00010c197ae0();
  func_0x00010c1b36e0(puVar1,param_2,param_5);
  func_0x00010c1b11e0(puVar1,param_2,param_4 != 0);
  func_0x00010c1e25a0(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c199fc0(puVar1,param_2,param_7);
  func_0x00010be598c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e3cfc; end: 1053e3dd7; -[SCConfigRepositoryNetworkDefaultImpl _logSyncEvent:] */

void FUN_1053e3cfc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b86e8;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c197720(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b86f0;
  _objc_alloc_init(PTR_PTR_1126b86f0);
  func_0x00010c17df80();
  _objc_release(param_4);
  func_0x00010c17dea0(puVar1,param_3,puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c500();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e3dd8; end: 1053e3e37; -[SCConfigRepositoryNetworkDefaultImpl .cxx_destruct] */

void FUN_1053e3dd8(long param_1)

{
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



/* Entry: 1053e3e38; end: 1053e3e43; -[SCConfigAuth snapTokenProvider] */

void FUN_1053e3e38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 1053e3e44; end: 1053e3e4b; -[SCConfigAuth setSnapTokenProvider:] */

void FUN_1053e3e44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1053e3e4c; end: 1053e3e53; -[SCConfigAuth setSessionContextChangeHandler:] */

void FUN_1053e3e4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1053e3e54; end: 1053e3e83; -[SCConfigAuth .cxx_destruct] */

void FUN_1053e3e54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e3e84; end: 1053e3f27; -[SCRegistrationAuth initWithSnapTokenProvider:verificationContext:] */

undefined1 *
FUN_1053e3e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8160;
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



/* Entry: 1053e3f28; end: 1053e3f33; -[SCRegistrationAuth snapTokenProvider] */

void FUN_1053e3f28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 1053e3f34; end: 1053e3f3b; -[SCRegistrationAuth setSnapTokenProvider:] */

void FUN_1053e3f34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1053e3f3c; end: 1053e3f47; -[SCRegistrationAuth verificationContext] */

void FUN_1053e3f3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 1053e3f48; end: 1053e3f4f; -[SCRegistrationAuth setVerificationContext:] */

void FUN_1053e3f48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1053e3f50; end: 1053e3f7f; -[SCRegistrationAuth .cxx_destruct] */

void FUN_1053e3f50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e3f80; end: 1053e3faf;  */

void FUN_1053e3f80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e3f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 1053e3fb0; end: 1053e4083; -[SCConfigUserAuthenticationImpl userDidRegistrationAuth:] */

void FUN_1053e3fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c298300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be040();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053e4084; end: 1053e40b7;  */

void FUN_1053e4084(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e4094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 1053e40b8; end: 1053e4103; -[SCConfigUserAuthenticationImpl userDidDeauth] */

void FUN_1053e40b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e40f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1053e4104; end: 1053e4123; -[SCConfigUserAuthenticationImpl isAuthed] */

bool FUN_1053e4104(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 1053e4124; end: 1053e427b; -[SCConfigUserAuthenticationImpl getAuthAsync:failureQueue:successBlock:failureBlock:] */

void FUN_1053e4124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    func_0x00010c2438c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053e427c;
  puStack_50 = &UNK_110848438;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1053e4288;
  puStack_78 = &UNK_110859a38;
  uStack_70 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bfa48e0(lVar2,param_2,6,param_3,param_4,&puStack_68,&puStack_90);
  _objc_release(lVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e427c; end: 1053e4293;  */

void FUN_1053e427c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053e4284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1053e4294; end: 1053e430b; -[SCConfigUserAuthenticationImpl .cxx_destruct] */

void FUN_1053e4294(long param_1)

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



/* Entry: 1053e430c; end: 1053e4323;  */

void FUN_1053e430c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053e4314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1053e4324; end: 1053e432f; -[SCUserSessionContextChangeHandlerImpl .cxx_destruct] */

void FUN_1053e4324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e4330; end: 1053e443b; -[SCDocObjectContactTempSnapchatterMutator initWithDocObjectContext:grapheneRegistry:] */

undefined1 *
FUN_1053e4330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e8170;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053e443c; end: 1053e456b; -[SCDocObjectContactTempSnapchatterMutator upsertContactTempSnapchatter:completionQueue:completionHandler:] */

void FUN_1053e443c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e456c; end: 1053e45a3;  */

void FUN_1053e456c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee6120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e45a4; end: 1053e46d3; -[SCDocObjectContactTempSnapchatterMutator upsertContactTempSnapchatters:completionQueue:completionHandler:] */

void FUN_1053e45a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e46d4; end: 1053e470b;  */

void FUN_1053e46d4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee6140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e470c; end: 1053e47eb; -[SCDocObjectContactTempSnapchatterMutator _upsertContactTempSnapchatter:completionQueue:completionHandler:] */

void FUN_1053e470c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010be5a380(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1053e47ec;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e47ec; end: 1053e484b;  */

void FUN_1053e47ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10571b298(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053e484c; end: 1053e4937; -[SCDocObjectContactTempSnapchatterMutator _upsertContactTempSnapchatters:completionQueue:completionHandler:] */

void FUN_1053e484c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010be5a3a0(param_1,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1053e4938;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e4938; end: 1053e4a73;  */

void FUN_1053e4938(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      FUN_10571b298(uVar3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be5a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1053e4a74; end: 1053e4a7b; -[SCDocObjectContactTempSnapchatterMutator _logUpsert] */

void FUN_1053e4a74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logUpsertsWithCount__112574288,1);
  return;
}



/* Entry: 1053e4a7c; end: 1053e4aff; -[SCDocObjectContactTempSnapchatterMutator _logUpsertsWithCount:] */

void FUN_1053e4a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b86f8;
  func_0x00010c28f040(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(uVar2,param_2,puVar3,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053e4b00; end: 1053e4b3b; -[SCDocObjectContactTempSnapchatterMutator .cxx_destruct] */

void FUN_1053e4b00(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e4b3c; end: 1053e4c37; -[SCGrpcContactTempSnapchatterInviter initWithUNIFriendAction:contactTempSnapchatterMutator:contactTempSnapchatterFetcher:grapheneRegistry:] */

undefined1 *
FUN_1053e4b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e8178;
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



/* Entry: 1053e4c38; end: 1053e4d8f; -[SCGrpcContactTempSnapchatterInviter inviteContactTempSnapchatters:completionQueue:completionHandler:] */

void FUN_1053e4c38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf529e0(param_3);
  func_0x00010be54f00(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfae1c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e4d90; end: 1053e4de3;  */

void FUN_1053e4d90(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3dac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e4de4; end: 1053e4fa7; -[SCGrpcContactTempSnapchatterInviter _inviteContactTempSnapchatters:completionQueue:completionHandler:] */

void FUN_1053e4de4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1053e4fa8;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_48 = param_6;
    func_0x00010007380c(param_5,&puStack_68);
    _objc_release(uStack_48);
  }
  else {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x28) = param_1;
    _objc_initWeak(auStack_70,param_2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010bdf27e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c06a820(uVar2);
    _objc_release(param_2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053e4fa8; end: 1053e4fc7;  */

void FUN_1053e4fa8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e4fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,0);
    return;
  }
  return;
}



/* Entry: 1053e4fc8; end: 1053e5037;  */

void FUN_1053e4fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f380();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e5038; end: 1053e5237; -[SCGrpcContactTempSnapchatterInviter _createRequestWithContactTempSnapchatters:] */

void FUN_1053e5038(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_260;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8700;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  uVar7 = 0x10;
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126b8708;
      _objc_opt_new();
      uVar7 = uVar10;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x000100576d08();
      if ((int)uVar6 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR_PTR_1126afad0;
        _objc_alloc_init();
        func_0x00010c1a85a0();
        func_0x00010c1c0fe0(puVar11);
      }
      func_0x00010c19fd60(puVar5);
      _objc_release(puVar11);
      _objc_release(uVar7);
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(puVar5);
      _objc_release(uVar10);
      func_0x00010befa120(puVar3);
      _objc_release(puVar5);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    uVar7 = 0x10;
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c1d8fa0(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(uVar7);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be54f20(param_3);
  if (param_6 == (undefined *)0x0) {
    puStack_260 = PTR___dispatch_main_q_11034be20;
    _objc_retain();
  }
  else {
    _objc_retain(param_6);
    puStack_260 = param_6;
  }
  uVar6 = uVar7;
  func_0x00010050471c(uVar7,&PTR___NSConcreteGlobalBlock_110884318,
                      &PTR___NSConcreteGlobalBlock_110884358);
  puVar2 = puVar5;
  func_0x00010c261c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100504554();
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bfa0300();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x000100504554();
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  _objc_retain(param_7);
  func_0x00010c28f0a0(uVar10);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(uVar6);
  _objc_release(puStack_260);
  _objc_release(param_6);
  _objc_release(uVar7);
  return;
}



/* Entry: 1053e5238; end: 1053e5463; -[SCGrpcContactTempSnapchatterInviter _handleResponse:error:contactTempSnapchatters:completionQueue:completionHandler:] */

void FUN_1053e5238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_110;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be54f20(param_1);
  if (param_6 == (undefined *)0x0) {
    puStack_110 = PTR___dispatch_main_q_11034be20;
    _objc_retain();
  }
  else {
    _objc_retain(param_6);
    puStack_110 = param_6;
  }
  uVar1 = param_5;
  func_0x00010050471c(param_5,&PTR___NSConcreteGlobalBlock_110884318,
                      &PTR___NSConcreteGlobalBlock_110884358);
  uVar4 = param_3;
  func_0x00010c261c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x000100504554();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bfa0300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000100504554();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010c28f0a0(uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(puStack_110);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1053e5464; end: 1053e546b;  */

void FUN_1053e5464(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1053e546c; end: 1053e5493;  */

void FUN_1053e546c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1053e5494; end: 1053e567f;  */

void FUN_1053e5494(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe2ee0();
  uVar2 = param_2;
  func_0x00010c0b5940(param_2);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0b5ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1053e5680; end: 1053e571f; -[SCGrpcContactTempSnapchatterInviter _logInviteWithResponse:error:contactTempSnapchatters:] */

void FUN_1053e5680(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010be55120(param_1);
  }
  else {
    func_0x00010bf529e0(param_5);
    func_0x00010be54ea0(param_1,param_2,param_4,param_5);
  }
  uVar1 = param_3;
  func_0x00010c261c40(param_3);
  func_0x00010be54ee0(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bfa0320(param_3);
  _objc_release(param_3);
  func_0x00010be54ec0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053e5720; end: 1053e57af; -[SCGrpcContactTempSnapchatterInviter _logLatency] */

void FUN_1053e5720(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  
  _CACurrentMediaTime();
  dVar4 = *(double *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b86f8;
  func_0x00010c06a8a0(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar2,param_3,puVar3,(long)(param_1 - dVar4));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053e57b0; end: 1053e5843; -[SCGrpcContactTempSnapchatterInviter _logInviteWithCount:] */

void FUN_1053e57b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b86f8;
  func_0x00010c06a580(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(uVar2,param_2,puVar3,param_3);
  func_0x00010bef9180(uVar2,param_2,puVar3,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053e5844; end: 1053e58d7; -[SCGrpcContactTempSnapchatterInviter _logInviteSuccessWithCount:] */

void FUN_1053e5844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b86f8;
  func_0x00010c06aa00(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(uVar2,param_2,puVar3,param_3);
  func_0x00010bef9180(uVar2,param_2,puVar3,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053e58d8; end: 1053e596b; -[SCGrpcContactTempSnapchatterInviter _logInviteFailWithCount:] */

void FUN_1053e58d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b86f8;
  func_0x00010c06a740(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(uVar2,param_2,puVar3,param_3);
  func_0x00010bef9180(uVar2,param_2,puVar3,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053e596c; end: 1053e5b37; -[SCGrpcContactTempSnapchatterInviter _logInviteError:count:] */

void FUN_1053e596c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b86f8;
  func_0x00010c06a700(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9558,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b86f8;
  func_0x00010c06a720(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_3;
  func_0x00010bf3ec40(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9558,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar1,param_2,puVar5);
  func_0x00010bfec320(uVar1,param_2,puVar6,param_4);
  func_0x00010bef9180(uVar1,param_2,puVar6,param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053e5b38; end: 1053e5b7f; -[SCGrpcContactTempSnapchatterInviter .cxx_destruct] */

void FUN_1053e5b38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e5b80; end: 1053e5c9f; -[SCDocObjectContactTempSnapchatterFetcher initWithDocObjectContext:] */

undefined1 * FUN_1053e5b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e8180;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053e5ca0; end: 1053e612b; -[SCDocObjectContactTempSnapchatterFetcher filterNotPersistedContactTempSnapchatters:completionQueue:completionHandler:] */

void FUN_1053e5ca0(undefined8 *param_1,undefined **param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined **appuStack_200 [9];
  undefined8 auStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    unaff_x22 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110884408);
    lVar3 = param_1[1];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b8710);
    if (lVar3 == 0) {
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_190,lVar3);
    }
    puVar4 = &uStack_201;
    FUN_10571ae38(puVar4);
    _objc_retain(unaff_x22);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    lVar5 = unaff_x22;
    func_0x00010bf529e0(unaff_x22);
    func_0x0001004c2bb4(&uStack_220,lVar5);
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(unaff_x22);
    lVar5 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar8 = *plStack_140;
      do {
        lVar9 = 0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(unaff_x22);
          }
          uVar7 = *(undefined8 *)(lStack_148 + lVar9 * 8);
          _objc_retain(uVar7);
          uStack_110 = uVar7;
          func_0x0001004c2d3c(&uStack_220,&uStack_110);
          _objc_release(uStack_110);
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        lVar5 = unaff_x22;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x22);
    func_0x0001004c2e3c(appuStack_200,0xc,puVar4,&uStack_220);
    puStack_108 = (undefined8 *)0x0;
    puStack_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    uStack_150 = uStack_150 & 0xffffffff00000000;
    puVar6 = &uStack_190;
    func_0x0001000e77a0(puVar6,appuStack_200,&puStack_108,&uStack_150);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar6;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puStack_108 != (undefined8 *)0x0) {
      puStack_100 = puStack_108;
      __ZdlPv();
    }
    plVar2 = plStack_198;
    appuStack_200[0] = &PTR_FUN_110862700;
    plStack_198 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_108 = auStack_1b8;
    func_0x000100105004(&puStack_108);
    puStack_108 = &uStack_220;
    func_0x000100105004(&puStack_108);
    func_0x0001000e76e0(&uStack_168);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(lVar3);
    param_1 = unaff_x24;
    func_0x000100817178(unaff_x24,&PTR___NSConcreteGlobalBlock_110884428);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    pcStack_238 = FUN_1053e616c;
    puStack_230 = &UNK_110884448;
    puStack_228 = param_1;
    _objc_retain();
    lVar3 = param_3;
    func_0x000100504554(param_3,&puStack_248);
    puStack_278 = puVar1;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_1053e6208;
    puStack_260 = &UNK_1107d0af0;
    _objc_retain(param_5);
    lStack_258 = lVar3;
    lStack_250 = param_5;
    _objc_retain(lVar3);
    param_2 = &puStack_278;
    func_0x00010007380c(param_4);
    _objc_release(lStack_258);
    _objc_release(lStack_250);
    _objc_release(lVar3);
    _objc_release(puStack_228);
    _objc_release(param_1);
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_release(puStack_228);
    _objc_release(param_1);
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume(lVar3);
    if ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 1053e612c; end: 1053e616b;  */

void FUN_1053e612c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e616c; end: 1053e6207;  */

void FUN_1053e616c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  _objc_retain(param_2);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  uVar1 = 0;
  if (iVar3 == 0) {
    uVar1 = param_2;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053e6208; end: 1053e6217;  */

void FUN_1053e6208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053e6214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1053e6218; end: 1053e6247; -[SCDocObjectContactTempSnapchatterFetcher .cxx_destruct] */

void FUN_1053e6218(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e6248; end: 1053e62af; -[SCFeatureSettingsItemCache removeFeatureSettingWithItemId:] */

void FUN_1053e6248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1053e62b0; end: 1053e62bb; -[SCFeatureSettingsItemCache .cxx_destruct] */

void FUN_1053e62b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e62bc; end: 1053e6323; -[SCFeatureSettingsItemIdMappingCache init] */

undefined1 * FUN_1053e62bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8190;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053e6324; end: 1053e6387; -[SCFeatureSettingsItemIdMappingCache itemIdForFeatureSettingName:] */

void FUN_1053e6324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053e6388; end: 1053e6403; -[SCFeatureSettingsItemIdMappingCache setItemId:forFeatureSettingName:] */

void FUN_1053e6388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1053e6404; end: 1053e640f; -[SCFeatureSettingsItemIdMappingCache .cxx_destruct] */

void FUN_1053e6404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e6410; end: 1053e6497; -[SCFeatureSettingsGrapheneMetricsReporter reportFeatureSettingMissingInSupProto:] */

void FUN_1053e6410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8718;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfbb460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e6498; end: 1053e64a3; -[SCFeatureSettingsGrapheneMetricsReporter .cxx_destruct] */

void FUN_1053e6498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e64a4; end: 1053e658f; -[SCFeatureSettingsUserPropertiesService performChanges:queue:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e64a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112722cb8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053e6590;
  puStack_68 = &UNK_1108451b8;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e6590; end: 1053e6727;  */

void FUN_1053e6590(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_1053e6728();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1053e6860;
  puStack_a0 = &UNK_110884478;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puStack_90 = &uStack_80;
  uStack_88 = uVar6;
  puStack_78 = &uStack_80;
  _objc_retain(uVar5);
  ppuVar3 = &puStack_b8;
  uStack_98 = uVar5;
  _objc_retainBlock();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1053e689c;
  puStack_d8 = &UNK_1108844a8;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puStack_c8 = &uStack_80;
  uStack_c0 = uVar6;
  _objc_retain(uVar5);
  ppuVar4 = &puStack_f0;
  uStack_d0 = uVar5;
  _objc_retainBlock();
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1053e6a60;
  puStack_118 = &UNK_1108844d8;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_110 = uVar6;
  uStack_108 = uVar5;
  ppuStack_100 = ppuVar3;
  ppuStack_f8 = ppuVar4;
  FUN_1053e6900(uVar2,&puStack_130);
  _objc_release(uStack_108);
  _objc_release(ppuVar4);
  _objc_release(uStack_d0);
  _objc_release(ppuVar3);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar2);
  return;
}



/* Entry: 1053e6728; end: 1053e685f;  */

void FUN_1053e6728(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_retain();
  func_0x00010bf60460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(puVar2);
  _objc_release(puVar1);
  (**(code **)(param_1 + 0x10))(param_1);
  _objc_release(param_1);
  FUN_1053e84e8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf51e00();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1053e6860; end: 1053e689b;  */

void FUN_1053e6860(long param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((*(ulong *)(param_1 + 0x30) == (ulong)(uVar2 + 1)) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001053e6894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1053e689c; end: 1053e68ff;  */

void FUN_1053e689c(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  _objc_retain(param_2);
  puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((*(ulong *)(param_1 + 0x30) == (ulong)(uVar2 + 1)) && (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053e6900; end: 1053e6a5f;  */

void FUN_1053e6900(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar3 = uVar6;
      func_0x00010bfb1920(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2827c0();
      func_0x00010c089820(uVar6);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_2 + 0x10))(param_2,uVar4,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bea3de0(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1053e6a60; end: 1053e6a9b;  */

void FUN_1053e6a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bea3de0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,param_3,1,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1053e6a9c; end: 1053e6bdb; -[SCFeatureSettingsUserPropertiesService performChangesToServer:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e6a9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112722cb8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1053e6bdc;
  puStack_88 = &UNK_1108845c8;
  lStack_80 = param_1;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_3;
  uStack_60 = param_7;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e6bdc; end: 1053e6e47;  */

void FUN_1053e6bdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_1053e6728();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1053e6e48;
  uStack_80 = 0x1053e6e58;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1053e6e60;
  puStack_e8 = &UNK_110883410;
  puStack_b8 = &uStack_c0;
  puStack_98 = &uStack_a0;
  _objc_retain(uVar2);
  uStack_d8 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uStack_e0 = uVar2;
  _objc_retain(uVar7);
  ppuVar3 = &puStack_100;
  uStack_d0 = uVar7;
  puStack_c8 = &uStack_a0;
  _objc_retainBlock();
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1053e6ef8;
  puStack_140 = &UNK_110884538;
  puStack_118 = &uStack_c0;
  puStack_110 = &uStack_a0;
  uStack_108 = uVar6;
  _objc_retain(uVar2);
  uStack_130 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uStack_138 = uVar2;
  _objc_retain(uVar7);
  ppuVar4 = &puStack_158;
  uStack_128 = uVar7;
  ppuStack_120 = ppuVar3;
  _objc_retainBlock();
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1053e6fd4;
  puStack_180 = &UNK_110884568;
  ppuVar5 = &puStack_198;
  ppuStack_178 = ppuVar3;
  puStack_170 = &uStack_a0;
  puStack_168 = &uStack_c0;
  uStack_160 = uVar6;
  _objc_retainBlock();
  puStack_1e0 = puVar1;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_1053e7058;
  puStack_1c8 = &UNK_110884598;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c0 = uVar7;
  uStack_1b8 = uVar8;
  _objc_retain(uVar6);
  uStack_1b0 = uVar6;
  ppuStack_1a8 = ppuVar4;
  ppuStack_1a0 = ppuVar5;
  FUN_1053e6900(uVar2,&puStack_1e0);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_128);
  _objc_release(uStack_138);
  _objc_release(ppuVar3);
  _objc_release(uStack_d0);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar2);
  return;
}



/* Entry: 1053e6e48; end: 1053e6e5f;  */

void FUN_1053e6e48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053e6e60; end: 1053e6edf;  */

void FUN_1053e6e60(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1053e6ee0;
  puStack_30 = &UNK_110884508;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  FUN_1053e6900(*(undefined8 *)(param_1 + 0x20),&puStack_48);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  }
  return;
}



/* Entry: 1053e6ee0; end: 1053e6ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e6ee0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112722cb0),
             PTR_s_removeFeatureSettingWithItemId__112628b48,param_2);
  return;
}



/* Entry: 1053e6ef8; end: 1053e6fb7;  */

void FUN_1053e6ef8(long param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*(ulong *)(param_1 + 0x50) == (ulong)(uVar2 + 1)) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e6f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
      return;
    }
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1053e6fb8;
    puStack_30 = &UNK_110884508;
    uStack_28 = *(undefined8 *)(param_1 + 0x28);
    FUN_1053e6900(*(undefined8 *)(param_1 + 0x20),&puStack_48);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
  }
  return;
}



/* Entry: 1053e6fb8; end: 1053e6fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e6fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c285b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112722cb0),
             PTR_s_updateFeatureSettingWithItemId_v_11267f0f8,param_2,param_3);
  return;
}



/* Entry: 1053e6fd4; end: 1053e7057;  */

void FUN_1053e6fd4(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = param_2;
  _objc_release(uVar5);
  puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*(ulong *)(param_1 + 0x38) == (ulong)(uVar2 + 1)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053e7058; end: 1053e7093;  */

void FUN_1053e7058(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bea3de0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,param_3,0,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1053e7094; end: 1053e7147;  */

void FUN_1053e7094(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bd869d0(param_2,&PTR___NSConcreteGlobalBlock_110884618,
                        &PTR___NSConcreteGlobalBlock_110884638);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1053e7148; end: 1053e71f3;  */

void FUN_1053e7148(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1053e71f4;
    puStack_40 = &UNK_110884658;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x00010bd869d0(param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_110884688);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
    return;
  }
  return;
}



/* Entry: 1053e71f4; end: 1053e7283;  */

void FUN_1053e71f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0844e0(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053e7284; end: 1053e7293; -[SCFeatureSettingsUserPropertiesService hasSyncedLogInResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e7284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdd170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112722cac),PTR_s_hasSyncedLogInResponse_1125d4e18);
  return;
}



/* Entry: 1053e7294; end: 1053e72a3; -[SCFeatureSettingsUserPropertiesService observeLoginComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e7294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112722cac),PTR_s_observeLoginComplete_112615d68);
  return;
}



/* Entry: 1053e72a4; end: 1053e7307; -[SCFeatureSettingsUserPropertiesService setFeatureSetting:value:] */

void FUN_1053e72a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be45d60(param_1,param_2,param_3);
  if ((int)uVar1 != -0x4524111) {
    func_0x00010c19ab60(param_1,param_2,(long)(int)uVar1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053e7308; end: 1053e7313; -[SCFeatureSettingsUserPropertiesService setFeatureSettingWithItemId:value:] */

void FUN_1053e7308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setFeatureSettingWithItemId_valu_112644500,param_3,param_4,0,0);
  return;
}



/* Entry: 1053e7314; end: 1053e7523; -[SCFeatureSettingsUserPropertiesService setFeatureSettingWithItemId:value:queue:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e7314(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1f3c0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if ((int)puVar7 == 0) {
    uVar10 = *(undefined8 *)(param_1 + _DAT_112722cb8);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1053e7524;
    puStack_a8 = &UNK_110875f70;
    lStack_a0 = param_1;
    uStack_80 = param_3;
    _objc_retain(param_4);
    puStack_98 = param_4;
    _objc_retain(param_5);
    uStack_90 = param_5;
    _objc_retain(param_6);
    uStack_88 = param_6;
    func_0x00010c0f8240(uVar10,param_2,&puStack_c0);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    puVar4 = puStack_98;
  }
  else {
    FUN_1053e84e8();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar5;
    puStack_70 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uVar10 = *(undefined8 *)(param_4 + 0x38);
  uVar2 = *(undefined8 *)(param_4 + 0x40);
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1053e7610;
  puStack_130 = &UNK_110849530;
  uVar9 = *(undefined8 *)(param_4 + 0x30);
  _objc_retain(uVar10);
  puStack_170 = puVar4;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1053e762c;
  puStack_158 = &UNK_110859a38;
  uVar8 = *(undefined8 *)(param_4 + 0x38);
  uStack_128 = uVar10;
  _objc_retain(uVar8);
  uStack_150 = uVar8;
  func_0x00010bea3de0(uVar1,param_2,uVar2,uVar3,1,uVar9,uVar9,&puStack_148,&puStack_170);
  _objc_release(uStack_150);
  _objc_release(uStack_128);
  return;
}



/* Entry: 1053e7524; end: 1053e760f;  */

void FUN_1053e7524(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e7610;
  puStack_70 = &UNK_110849530;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  puStack_b0 = puVar5;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1053e762c;
  puStack_98 = &UNK_110859a38;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  _objc_retain(uVar6);
  uStack_90 = uVar6;
  func_0x00010bea3de0(uVar2,param_2,uVar3,uVar4,1,uVar7,uVar7,&puStack_88,&puStack_b0);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1053e7610; end: 1053e7647;  */

void FUN_1053e7610(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e7624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0);
    return;
  }
  return;
}



/* Entry: 1053e7648; end: 1053e76ab; -[SCFeatureSettingsUserPropertiesService setLargerValueFeatureSetting:value:] */

void FUN_1053e7648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be45d60(param_1,param_2,param_3);
  if ((int)uVar1 != -0x4524111) {
    func_0x00010c1b7620(param_1,param_2,(long)(int)uVar1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053e76ac; end: 1053e76b7; -[SCFeatureSettingsUserPropertiesService setLargerValueFeatureSettingWithItemId:value:] */

void FUN_1053e76ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setLargerValueFeatureSettingWith_11264b7b8,param_3,param_4,0,0);
  return;
}



/* Entry: 1053e76b8; end: 1053e77a7; -[SCFeatureSettingsUserPropertiesService setLargerValueFeatureSettingWithItemId:value:queue:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e76b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112722cb8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e77a8;
  puStack_70 = &UNK_110875f70;
  lStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f8240(uVar1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


