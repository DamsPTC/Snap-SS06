/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a5daac; end: 104a5db1f; -[GTMSessionUploadFetcher setCancellationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5daac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  _objc_retainBlock();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11270f76c);
  *(undefined8 *)(param_1 + _DAT_11270f76c) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5db20; end: 104a5db6b; -[GTMSessionUploadFetcher cancellationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5db20(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f76c);
  _objc_retainBlock(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5db6c; end: 104a5dbc7; -[GTMSessionUploadFetcher beginFetchForRetry] */

void FUN_104a5db6c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf1eb00();
  func_0x00010c1ac8c0(param_1);
  func_0x00010c19b640(param_1);
  puStack_28 = PTR_PTR_1126e35d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_beginFetchForRetry_1125a39d8);
  return;
}



/* Entry: 104a5dbc8; end: 104a5dc27; -[GTMSessionUploadFetcher destroyUploadRetryTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5dbc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  lVar2 = (long)_DAT_11270f770;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5dc28; end: 104a5ddb3; -[GTMSessionUploadFetcher beginFetchWithCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5dc28(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf1eb00(param_1);
  func_0x00010c1ac8c0(param_1);
  if (*(double *)(param_1 + (long)_DAT_11270f72c) <= 0.0) {
    *(undefined8 *)(param_1 + (long)_DAT_11270f72c) = 0x3ff0000000000000;
  }
  if (*(double *)(param_1 + (long)_DAT_11270f728) <= 0.0) {
    *(undefined8 *)(param_1 + (long)_DAT_11270f728) = 0x4082c00000000000;
  }
  if (*(double *)(param_1 + (long)_DAT_11270f724) <= 0.0) {
    *(undefined8 *)(param_1 + (long)_DAT_11270f724) = 0x4000000000000000;
  }
  uVar1 = param_1;
  func_0x00010bf28660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b680(param_1);
  _objc_release(uVar1);
  func_0x00010c17fbe0(param_1);
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010c07c7c0();
  if ((int)uVar1 == 0) {
    func_0x00010c19b640(param_1);
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104a5ddb4;
    puStack_40 = &UNK_1108b71b0;
    puStack_60 = PTR_PTR_1126e35d0;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = param_1;
    uStack_38 = param_1;
    _objc_msgSendSuper2(&uStack_68,PTR_s_beginFetchWithCompletionHandler__1125a39e8,&puStack_58);
  }
  else {
    uVar1 = param_1;
    func_0x00010c079ba0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c118b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c5c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 104a5ddb4; end: 104a5df17;  */

void FUN_104a5ddb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain();
  func_0x00010c19b640(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c26b620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c07c7c0();
  if (((uVar2 & 1) == 0) && (lVar1 == 0)) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (param_3 == 0) {
      func_0x00010bf17e00();
      goto LAB_104a5def0;
    }
    func_0x00010c13fa20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_104a5def0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (lVar1 != 0) {
      func_0x00010bfbbdc0(uVar3);
      uVar4 = param_2;
      _objc_retain();
      lVar1 = param_3;
      _objc_retain();
      func_0x00010bfbf280(uVar3);
      _objc_release(lVar1);
      _objc_release(uVar4);
      goto LAB_104a5def0;
    }
  }
  func_0x00010c06acc0(uVar3);
LAB_104a5def0:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104a5df18; end: 104a5df2b;  */

void FUN_104a5df18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invokeFinalCallbackWithData_erro_1125f8540,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 104a5df2c; end: 104a5e11f; -[GTMSessionUploadFetcher beginChunkFetches] */

void FUN_104a5df2c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f040(param_1);
  uVar2 = param_1;
  _objc_opt_class();
  func_0x00010c28e7a0();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  if (((uVar2 & 0xfffffffffffffffe) == 2) || (uVar4 == 0)) {
    uVar2 = param_1;
    func_0x00010bf892c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c08fa60();
    if (uVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = param_1;
    func_0x00010c108dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    in_x4 = 1;
    func_0x00010c06acc0(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ce40(param_1);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104980();
    func_0x00010c063c00(param_1);
    func_0x00010c1ac8e0(param_1);
    uVar2 = param_1;
    func_0x00010c079ba0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c28e360(param_1);
    }
  }
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar2 = uVar1;
    func_0x00010bfbbdc0();
                    /* WARNING: Could not recover jumptable at 0x00010c06ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_invokeDelegateWithDidSendBytes_t_1125f8528,in_x4,in_x5,uVar2 + in_x6);
    return;
  }
  return;
}



/* Entry: 104a5e120; end: 104a5e163; -[GTMSessionUploadFetcher URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:] */

void FUN_104a5e120(long param_1)

{
  long lVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  
  lVar1 = param_1;
  func_0x00010bfbbdc0();
                    /* WARNING: Could not recover jumptable at 0x00010c06ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_invokeDelegateWithDidSendBytes_t_1125f8528,in_x4,in_x5,lVar1 + in_x6);
  return;
}



/* Entry: 104a5e164; end: 104a5e16b; -[GTMSessionUploadFetcher shouldReleaseCallbacksUponCompletion] */

undefined8 FUN_104a5e164(void)

{
  return 0;
}



/* Entry: 104a5e16c; end: 104a5e2db; -[GTMSessionUploadFetcher invokeFinalCallbackWithData:error:shouldInvalidateLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5e16c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11270f758);
    *(undefined8 *)(param_1 + _DAT_11270f758) = 0;
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + _DAT_11270f768);
  _objc_retain();
  lVar3 = *(long *)(param_1 + _DAT_11270f764);
  _objc_retainBlock();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar4 = param_1;
  func_0x00010c293aa0(param_1);
  func_0x00010c128760(param_1,param_2,(uint)lVar4 ^ 1);
  if (lVar2 != 0 && lVar3 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104a5e2dc;
    puStack_60 = &UNK_11084a9e8;
    lVar4 = lVar3;
    _objc_retain();
    uVar1 = param_3;
    lStack_48 = lVar4;
    _objc_retain();
    uVar5 = param_4;
    uStack_58 = uVar1;
    _objc_retain();
    uStack_50 = uVar5;
    func_0x00010c06ad00(param_1,param_2,lVar2,0,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_48);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a5e2dc; end: 104a5e2ef;  */

void FUN_104a5e2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a5e2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104a5e2f0; end: 104a5e37f; -[GTMSessionUploadFetcher releaseUploadAndBaseCallbacks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5e2f0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f768);
  *(undefined8 *)(param_1 + _DAT_11270f768) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f764);
  *(undefined8 *)(param_1 + _DAT_11270f764) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f748);
  *(undefined8 *)(param_1 + _DAT_11270f748) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11270f76c);
    *(undefined8 *)(param_1 + _DAT_11270f76c) = 0;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1284b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_releaseCallbacks_112627b48);
  return;
}



/* Entry: 104a5e380; end: 104a5e413; -[GTMSessionUploadFetcher stopFetchReleasingCallbacks:] */

void FUN_104a5e380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf6f100();
  lVar1 = param_1;
  func_0x00010bfabae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_1) {
    func_0x00010c19b640(param_1);
  }
  puStack_38 = PTR_PTR_1126e35d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_stopFetchReleasingCallbacks__1126731f0,param_3);
  if ((int)param_3 != 0) {
    func_0x00010c128760(param_1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104a5e414; end: 104a5e45f; -[GTMSessionUploadFetcher uploadNextChunkWithOffset:] */

void FUN_104a5e414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28e380(param_1,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a5e460; end: 104a5e547; -[GTMSessionUploadFetcher sendQueryForUploadOffsetWithFetcherProperties:] */

void FUN_104a5e460(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c28dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172d00(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_1;
  func_0x00010bf41e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ef20(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9f58);
  func_0x00010c1ec280(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3e5f8,
                      &PTR____CFConstantStringClassReference_110da9d58);
  func_0x00010c19b640(param_1,param_2,uVar1);
  func_0x00010bf18120(uVar1,param_2,param_1,PTR_s_queryFetcher_finishedWithData_er_1125256c0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a5e548; end: 104a5e753; -[GTMSessionUploadFetcher queryFetcher:finishedWithData:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5e548(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010c19b640(param_1,param_2,0);
  lVar1 = param_3;
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_opt_class();
  func_0x00010c28e7a0();
  if (param_5 == 0) {
    lVar5 = lVar1;
    func_0x00010c0dff20(lVar1,param_2,&PTR____CFConstantStringClassReference_110da9e18);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 3) || ((lVar2 == 1 && (lVar5 == 0)))) {
      lVar3 = param_4;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        ppuStack_68 = &PTR____CFConstantStringClassReference_110dbf1f8;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        lStack_60 = param_4;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_60,&ppuStack_68
                            ,1);
        _objc_retainAutoreleasedReturnValue();
      }
      param_5 = param_1;
      func_0x00010c108dc0(param_1,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (param_5 != 0) goto LAB_104a5e680;
    }
    lVar3 = lVar5;
    func_0x00010c0b4ca0();
    lVar4 = param_1;
    func_0x00010bfbbdc0();
    if ((lVar2 == 2) || ((lVar4 <= lVar3 && (lVar4 != -1)))) {
      lVar3 = param_3;
      func_0x00010bf39460(param_1,param_2,param_3,param_4,0);
    }
    else {
      func_0x00010c13f040(param_1,param_2,lVar1);
      func_0x00010c28e360(param_1,param_2,lVar3);
    }
  }
  else {
    lVar5 = 0;
LAB_104a5e680:
    lVar3 = param_3;
    func_0x00010bf39460(param_1,param_2,param_3,param_4,param_5);
    _objc_release(param_5);
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar3);
  _objc_sync_enter(param_3);
  *(undefined1 *)(param_3 + _DAT_11270f774) = 1;
  _objc_sync_exit(param_3);
  _objc_release(param_3);
  lVar1 = param_3;
  func_0x00010c28dd20(param_3,param_2,lVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172d00(lVar1,param_2,puVar6);
  _objc_release(puVar6);
  lVar2 = param_3;
  func_0x00010bf41e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ef20(lVar1,param_2,&PTR____CFConstantStringClassReference_110da9f78);
  func_0x00010c1ec280(lVar1,param_2,&PTR____CFConstantStringClassReference_110daf8b8,
                      &PTR____CFConstantStringClassReference_110da9d58);
  func_0x00010c19b640(param_3,param_2,lVar1);
  lVar5 = lVar1;
  _objc_retain(lVar1);
  func_0x00010bf18100();
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  return;
}



/* Entry: 104a5e754; end: 104a5e95f; -[GTMSessionUploadFetcher sendCancelUploadWithFetcherProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5e754(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_sync_enter(param_1);
  *(undefined1 *)(param_1 + _DAT_11270f774) = 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar1 = param_1;
  func_0x00010c28dd20(param_1,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172d00(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bf41e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ef20(lVar1,param_2,&PTR____CFConstantStringClassReference_110da9f78);
  func_0x00010c1ec280(lVar1,param_2,&PTR____CFConstantStringClassReference_110daf8b8,
                      &PTR____CFConstantStringClassReference_110da9d58);
  func_0x00010c19b640(param_1,param_2,lVar1);
  lVar4 = lVar1;
  _objc_retain(lVar1);
  func_0x00010bf18100();
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 104a5e960; end: 104a5eabf; -[GTMSessionUploadFetcher uploadNextChunkWithOffset:fetcherProperties:] */

void FUN_104a5e960(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_1;
  func_0x00010c28dd20(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c7e0(param_1,param_2,lVar1);
  lVar2 = param_1;
  func_0x00010c284540(param_1,param_2,lVar1,param_3);
  lVar3 = param_1;
  func_0x00010c28de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = param_1;
  func_0x00010bfbbdc0();
  if ((((param_3 == 0) && (lVar4 != -1)) && (lVar4 <= lVar2)) && (lVar3 != 0)) {
    lVar2 = param_1;
    func_0x00010c28de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172d20(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010bf17de0(param_1,param_2,lVar1,0);
  }
  else {
    func_0x00010c20ef80(param_1,param_2,1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104a5eac0;
    puStack_70 = &UNK_1107c0428;
    lVar4 = lVar1;
    lStack_68 = param_1;
    lStack_58 = param_3;
    lStack_50 = lVar2;
    _objc_retain();
    lStack_60 = lVar4;
    uStack_48 = lVar3 != 0;
    func_0x00010bfbf280(param_1,param_2,param_3,lVar2,&puStack_88);
    _objc_release(lStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104a5eac0; end: 104a5ebaf;  */

void FUN_104a5eac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104a5ebb0;
  puStack_78 = &UNK_110977be8;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = param_3;
  _objc_retain();
  uStack_38 = *(undefined1 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  uStack_60 = param_2;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 104a5ebb0; end: 104a5ee33;  */

/* WARNING: Possible PIC construction at 0x000104a5edd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a5edd8) */

void FUN_104a5ebb0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010c20ef80(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c28db00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0x40), _objc_release(), 0 < lVar2)) {
    func_0x00010c21cd40(*(undefined8 *)(param_1 + 0x20));
    if (*(long *)(param_1 + 0x40) <= *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48)) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c284540();
      if (lVar2 == 0) {
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc_init(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x00010c172d00(*(undefined8 *)(param_1 + 0x28));
        _objc_release(puVar6);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        goto code_r0x00010bf17de0;
      }
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = *(undefined **)(param_1 + 0x30);
  if (puVar3 == (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x38);
    _objc_retain();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c28da60(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c06acc0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c2be540();
    uVar5 = 0;
    _objc_retain(0);
    if (iVar1 == 0) {
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar3 = *(undefined **)(param_1 + 0x30);
      goto LAB_104a5edb0;
    }
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172d20(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = puVar6;
  }
  else {
LAB_104a5edb0:
    func_0x00010bf51e00(puVar3);
    func_0x00010c172d00(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
code_r0x00010bf17de0:
                    /* WARNING: Could not recover jumptable at 0x00010bf17df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar5,PTR_s_beginChunkFetcher_offset__1125a3920,uVar7,uVar8);
  return;
}



/* Entry: 104a5ee34; end: 104a5f03f; -[GTMSessionUploadFetcher beginUploadRetryTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5ee34(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar1 & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104a5f040;
    puStack_50 = &UNK_110842e18;
    puStack_48 = param_1;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
    return;
  }
  func_0x00010bf6f100(param_1);
  lVar4 = (long)_DAT_11270f720;
  if (*(double *)(param_1 + lVar4) == 0.0) {
    func_0x00010bf39440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18120();
  }
  else {
    puVar1 = param_1;
    _objc_retain();
    _objc_sync_enter();
    dVar5 = *(double *)(puVar1 + _DAT_11270f728);
    if (dVar5 <= 0.0) {
      dVar5 = 1.79769313486232e+308;
    }
    dVar6 = *(double *)(param_1 + lVar4);
    if (dVar5 <= *(double *)(param_1 + lVar4)) {
      dVar6 = dVar5;
    }
    *(double *)(param_1 + lVar4) = dVar6;
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c270940(dVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11270f770;
    uVar3 = *(undefined8 *)(puVar1 + lVar4);
    *(undefined **)(puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c216ce0(0x3ff0000000000000,*(undefined8 *)(puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
    _objc_release(puVar2);
    _objc_sync_exit(puVar1);
    _objc_release(puVar1);
    param_1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104980();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5f040; end: 104a5f047;  */

void FUN_104a5f040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf18ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_beginUploadRetryTimer_1125a3d60);
  return;
}



/* Entry: 104a5f048; end: 104a5f107; -[GTMSessionUploadFetcher uploadRetryTimerFired:] */

void FUN_104a5f048(undefined8 param_1)

{
  func_0x00010bf6f100();
  func_0x00010c15fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa3a0();
  _objc_release(param_1);
  return;
}



/* Entry: 104a5f108; end: 104a5f153; -[GTMSessionUploadFetcher uploadRetryTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5f108(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f770);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5f154; end: 104a5f19f; -[GTMSessionUploadFetcher maxUploadRetryInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a5f154(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f728);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5f1a0; end: 104a5f1f7; -[GTMSessionUploadFetcher setMaxUploadRetryInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5f1a0(double param_1,long param_2)

{
  _objc_retain();
  _objc_sync_enter();
  if (param_1 <= 0.0) {
    param_1 = 600.0;
  }
  *(double *)(param_2 + _DAT_11270f728) = param_1;
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a5f1f8; end: 104a5f24b; -[GTMSessionUploadFetcher setMinUploadRetryInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5f1f8(double param_1,long param_2)

{
  _objc_retain();
  _objc_sync_enter();
  if (param_1 <= 0.0) {
    param_1 = 1.0;
  }
  *(double *)(param_2 + _DAT_11270f72c) = param_1;
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a5f24c; end: 104a5f297; -[GTMSessionUploadFetcher minUploadRetryInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a5f24c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f72c);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5f298; end: 104a5f387; -[GTMSessionUploadFetcher beginChunkFetcher:offset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5f298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c1876a0(param_1);
  func_0x00010c17c520(param_1);
  func_0x00010c19b640(param_1);
  uVar1 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1b7960(param_1);
  _objc_release(uVar1);
  if (*(double *)(param_1 + _DAT_11270f720) < *(double *)(param_1 + _DAT_11270f728)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf18ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_beginUploadRetryTimer_1125a3d60);
    return;
  }
  lVar2 = param_1;
  func_0x00010c28da60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06acc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104a5f388; end: 104a5f3df; -[GTMSessionUploadFetcher attachSendProgressBlockToChunkFetcher:] */

void FUN_104a5f388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104a5f3e0;
  puStack_20 = &UNK_1107c0458;
  uStack_18 = param_1;
  func_0x00010c1fc300(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 104a5f3e0; end: 104a5f44b;  */

void FUN_104a5f3e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf1eb00(lVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf5f600(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfbbdc0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c06ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invokeDelegateWithDidSendBytes_t_1125f8528,
             param_2,lVar1 + param_3 + lVar2,lVar3 + lVar1);
  return;
}



/* Entry: 104a5f44c; end: 104a5f6bb; -[GTMSessionUploadFetcher uploadSessionIdentifierMetadata] */

void FUN_104a5f44c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  lVar2 = param_1;
  func_0x00010c28de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110da9c58);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bfbbdc0(param_1);
  func_0x00010c0df7c0(puVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110da9c78);
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010c28e120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c28e120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110da9c98);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c28e140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c28e140(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110da9cb8);
    _objc_release(lVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bf39480(param_1);
  func_0x00010c0df7c0(puVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110da9cd8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bf5f600(param_1);
  func_0x00010c0df7c0(puVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110da9cf8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf01a40();
  func_0x00010c0df6e0(puVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110da9d18);
  _objc_release(puVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a5f6bc; end: 104a5fa3b; -[GTMSessionUploadFetcher uploadFetcherWithProperties:isQueryFetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5f6bc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c28e120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  func_0x00010c137160(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4fc0();
  lVar3 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf01a40();
  func_0x00010c1674e0(puVar2,param_2,lVar4);
  if (lVar3 == 0) {
    func_0x00010c1674e0(puVar2,param_2,*(undefined1 *)(param_1 + _DAT_11270f754));
  }
  lVar4 = lVar3;
  func_0x00010c296ee0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e2d8f8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c2201e0(puVar2,param_2,lVar4,&PTR____CFConstantStringClassReference_110e2d8f8);
  }
  func_0x00010c2201e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da9df8,
                      &PTR____CFConstantStringClassReference_110da9dd8);
  func_0x00010c270500(lVar3);
  func_0x00010c215b60(puVar2);
  puVar6 = PTR_PTR_1126ae190;
  func_0x00010bfabbe0(PTR_PTR_1126ae190,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf28660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175be0(puVar6,param_2,lVar5);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c160680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fdf20(puVar6,param_2,lVar5);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf46580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180aa0(puVar6,param_2,lVar5);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf01860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167400(puVar6,param_2,lVar5);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf01260(param_1);
  func_0x00010c167180(puVar6,param_2,lVar5);
  lVar5 = param_1;
  func_0x00010bf011e0(param_1);
  func_0x00010c167140(puVar6,param_2,lVar5);
  lVar5 = param_1;
  func_0x00010c255f80(param_1);
  func_0x00010c20bf00(puVar6,param_2,lVar5);
  func_0x00010c21dc40(puVar6,param_2,param_4 ^ 1);
  lVar5 = param_1;
  func_0x00010c28de00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar5 != 0) && ((param_4 & 1) == 0)) {
    lVar7 = param_1;
    func_0x00010c28fe40();
    _objc_release(lVar5);
    if ((int)lVar7 == 0) goto LAB_104a5f928;
    lVar5 = param_1;
    func_0x00010c28e680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58ce0(puVar6,param_2,lVar5);
  }
  _objc_release(lVar5);
LAB_104a5f928:
  uVar8 = param_3;
  func_0x00010c0d3c80(param_3);
  func_0x00010c1e5020(puVar6,param_2,uVar8);
  _objc_release(uVar8);
  puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e50a0(puVar6,param_2,puVar9,&PTR____CFConstantStringClassReference_110da9e78);
  _objc_release(puVar9);
  lVar5 = param_1;
  func_0x00010c07c960(param_1);
  func_0x00010c1eda00(puVar6,param_2,lVar5);
  func_0x00010c0c2bc0(param_1);
  func_0x00010c1c35e0(puVar6);
  lVar5 = param_1;
  func_0x00010c07c960();
  if ((int)lVar5 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104a5fa3c;
    puStack_78 = &UNK_1107c0488;
    uStack_68 = (undefined1)param_4;
    lStack_70 = param_1;
    func_0x00010c1ed8e0(puVar6,param_2,&puStack_90);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104a5fa3c; end: 104a5fb4b;  */

void FUN_104a5fa3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104a5fb4c;
  puStack_60 = &UNK_11086d2d8;
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined1 *)(param_1 + 0x28);
  _objc_retain();
  ppuVar1 = &puStack_78;
  uStack_50 = param_4;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c13f400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,param_2);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3,ppuVar1);
  }
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a5fb4c; end: 104a5fb97;  */

void FUN_104a5fb4c(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    func_0x00010c2008a0(*(undefined8 *)(param_1 + 0x20),param_2,
                        (*(byte *)(param_1 + 0x30) ^ 0xff) & 1);
    func_0x00010c1876a0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x000104a5fb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 104a5fb98; end: 104a60043; -[GTMSessionUploadFetcher chunkFetcher:finishedWithData:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5fb98(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  uStack_80 = param_5;
  _objc_retain();
  func_0x00010c19b640(param_2);
  uVar3 = param_4;
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  _objc_opt_class();
  func_0x00010c28e7a0();
  uVar10 = uVar15 & 0xfffffffffffffffe;
  uVar4 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf001a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uVar13;
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uStack_88;
  func_0x00010c071ae0();
  uVar5 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010c296ee0();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar13;
  _objc_release(uVar5);
  bVar2 = uStack_90 != 0;
  uVar5 = uStack_90;
  func_0x00010c0b4ca0();
  uVar12 = (uint)bVar2;
  uVar1 = uVar12 | (uint)uVar4 | (uint)(uVar10 == 2);
  uVar13 = (ulong)uVar1;
  if ((param_6 == 0) && ((uVar12 != 0 || (uVar4 & 1) != 0) || (uVar10 == 2) != 0)) {
    uVar4 = param_4;
    func_0x00010c13b8c0();
    _objc_retainAutoreleasedReturnValue();
    param_6 = uVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (param_6 == 0) {
      func_0x00010bf5f600(param_2);
    }
    else {
      func_0x00010c0b4ca0(param_6);
    }
    uVar11 = uStack_80;
    if (uVar10 == 2) {
      if (uVar15 == 3) {
        uVar15 = uStack_80;
        func_0x00010c08fa60();
        if (uVar15 == 0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          ppuStack_78 = &PTR____CFConstantStringClassReference_110dbf1f8;
          uStack_70 = uVar11;
          puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uStack_80;
        }
        _objc_release(uVar11);
        uVar15 = param_2;
        func_0x00010c108dc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        uVar11 = 0;
      }
      else {
LAB_104a5fed8:
        func_0x00010c191420(param_2);
        func_0x00010c252ee0(param_4);
        func_0x00010c20a3c0(param_2);
        uVar15 = 0;
      }
      uStack_80 = uVar11;
      func_0x00010c06acc0(param_2);
      _objc_release(param_6);
      param_6 = uVar15;
LAB_104a5ffb4:
      func_0x00010bf6ef80(param_2);
      _objc_release(param_6);
      uVar10 = uVar11;
      goto LAB_104a5ffc4;
    }
    lVar8 = *(long *)(param_2 + (long)_DAT_11270f744);
    if (((*(long *)(param_2 + (long)_DAT_11270f738) == 0) && (lVar8 == 0)) ||
       ((lVar8 < *(long *)(param_2 + (long)_DAT_11270f778) && (0 < lVar8)))) goto LAB_104a5fed8;
    func_0x00010c1876a0(param_2);
    uVar15 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6ef80(param_2);
    func_0x00010c28e380(param_2);
    _objc_release(uVar15);
  }
  else {
    uVar4 = param_6;
    func_0x00010bf3ec40();
    uVar10 = param_2;
    func_0x00010c231380();
    if ((((uint)uVar10 ^ 1) & uVar1) == 1) {
      uVar11 = param_6;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010c071ae0();
      _objc_release(uVar11);
      if (((((int)uVar13 == 0) || (uVar4 == 0x194)) || (99 < uVar4 - 400)) ||
         ((uVar15 != 1 || ((long)uVar5 < 1)))) {
        func_0x00010c06acc0(param_2);
        goto LAB_104a5ffb4;
      }
    }
    func_0x00010c2008a0(param_2);
    func_0x00010bf6ef80(param_2);
    _objc_retain();
    _objc_sync_enter();
    func_0x00010c0d9fe0(param_2);
    *(undefined8 *)(param_2 + (long)_DAT_11270f720) = param_1;
    _objc_sync_exit(param_2);
    _objc_release(param_2);
    uVar10 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c5c0(param_2);
    _objc_release(uVar10);
  }
  _objc_release(param_6);
LAB_104a5ffc4:
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_2);
  uVar15 = param_4;
  __Unwind_Resume();
  pcStack_98 = FUN_104a60044;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = uVar3;
  uStack_c8 = param_2;
  uStack_c0 = uVar13;
  uStack_b8 = (ulong)bVar2;
  uStack_b0 = uVar10;
  uStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_sync_enter();
  lVar14 = (long)_DAT_11270f730;
  lVar8 = *(long *)(uVar15 + lVar14);
  if (*(long *)(uVar15 + (long)_DAT_11270f734) == lVar8) {
    *(undefined8 *)(uVar15 + (long)_DAT_11270f734) = 0;
    _objc_release();
    lVar8 = *(long *)(uVar15 + lVar14);
  }
  func_0x00010c255f60(lVar8);
  uVar5 = *(ulong *)(uVar15 + lVar14);
  func_0x00010bf1eaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c071ae0();
  if ((uVar4 & 1) == 0) {
    puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = 0;
    func_0x00010c12cc60();
    _objc_release(puVar16);
  }
  uVar6 = *(undefined8 *)(uVar15 + lVar14);
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(uVar15 + (long)_DAT_11270f77c);
  *(undefined8 *)(uVar15 + (long)_DAT_11270f77c) = uVar6;
  _objc_release(uVar9);
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110da9e78;
  puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_e0 = puVar16;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5020(*(undefined8 *)(uVar15 + lVar14));
  _objc_release(puVar7);
  _objc_release(puVar16);
  func_0x00010c1ed8e0(*(undefined8 *)(uVar15 + lVar14));
  func_0x00010c1fc300(*(undefined8 *)(uVar15 + lVar14));
  uVar6 = *(undefined8 *)(uVar15 + lVar14);
  *(undefined8 *)(uVar15 + lVar14) = 0;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_sync_exit(uVar15);
  uVar4 = uVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uVar15);
  uVar5 = uVar4;
  __Unwind_Resume();
  pcStack_f8 = FUN_104a60230;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_104a6033c;
  uStack_140 = 0x104a6034c;
  uVar13 = uVar5;
  uStack_130 = uVar3;
  lStack_128 = lVar14;
  puStack_120 = puVar7;
  puStack_118 = puVar16;
  uStack_110 = uVar4;
  uStack_108 = uVar15;
  ppuStack_100 = &puStack_a0;
  func_0x00010bf39440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  uStack_138 = uVar13;
  func_0x00010bf6b060(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ad00(uVar5);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  return;
}



/* Entry: 104a60044; end: 104a6022f; -[GTMSessionUploadFetcher destroyChunkFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60044(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter();
  lVar9 = (long)_DAT_11270f730;
  lVar7 = *(long *)(param_1 + lVar9);
  if (*(long *)(param_1 + _DAT_11270f734) == lVar7) {
    *(undefined8 *)(param_1 + _DAT_11270f734) = 0;
    _objc_release();
    lVar7 = *(long *)(param_1 + lVar9);
  }
  func_0x00010c255f60(lVar7);
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010bf1eaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11270f77c);
  *(undefined8 *)(param_1 + _DAT_11270f77c) = uVar4;
  _objc_release(uVar8);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5020(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c1ed8e0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1fc300(*(undefined8 *)(param_1 + lVar9));
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = 0;
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  lVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_104a6033c;
  uStack_b0 = 0x104a6034c;
  lVar6 = lVar7;
  func_0x00010bf39440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  lStack_a8 = lVar6;
  func_0x00010bf6b060(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ad00(lVar7);
  _objc_release(lVar9);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(lStack_a8);
  return;
}



/* Entry: 104a60230; end: 104a6033b; -[GTMSessionUploadFetcher invokeDelegateWithDidSendBytes:totalBytesSent:totalBytesExpectedToSend:] */

void FUN_104a60230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_104a6033c;
  uStack_50 = 0x104a6034c;
  uVar1 = param_1;
  func_0x00010bf39440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_48 = uVar1;
  func_0x00010bf6b060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ad00(param_1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  return;
}



/* Entry: 104a6033c; end: 104a60353;  */

void FUN_104a6033c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104a60354; end: 104a603b3;  */

void FUN_104a60354(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c15c580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40));
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a603b4; end: 104a60403; -[GTMSessionUploadFetcher retrieveUploadChunkGranularityFromResponseHeaders:] */

void FUN_104a603b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110da9d38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b4ca0();
  func_0x00010c21cd80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a60404; end: 104a60447; -[GTMSessionUploadFetcher isPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104a60404(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + _DAT_11270f780);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a60448; end: 104a6048f; -[GTMSessionUploadFetcher pauseFetching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60448(long param_1)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + _DAT_11270f780) = 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_destroyChunkFetcher_1125b9588);
  return;
}



/* Entry: 104a60490; end: 104a6050b; -[GTMSessionUploadFetcher resumeFetching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60490(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  cVar1 = *(char *)(param_1 + _DAT_11270f780);
  *(undefined1 *)(param_1 + _DAT_11270f780) = 0;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (cVar1 == '\x01') {
    lVar2 = param_1;
    func_0x00010c118b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c5c0(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104a6050c; end: 104a605ff; -[GTMSessionUploadFetcher stopFetching] */

void FUN_104a6050c(long param_1)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf6ef80();
  lVar1 = param_1;
  func_0x00010c28e120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf28660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104a60600;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c06ad00(param_1);
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b7e0(param_1);
    _objc_release(lVar1);
    func_0x00010c21ce40(param_1);
  }
  puStack_50 = PTR_PTR_1126e35d0;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_stopFetching_112673200);
  return;
}



/* Entry: 104a60600; end: 104a60677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60600(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_sync_enter();
  bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_11270f774);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  if ((bVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c27bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_triggerCancellationHandlerForFet_11267c990,0,0,0)
  ;
  return;
}



/* Entry: 104a60678; end: 104a60737; -[GTMSessionUploadFetcher triggerCancellationHandlerForFetch:data:error:] */

bool FUN_104a60678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf2f620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    func_0x00010c178220(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 104a60738; end: 104a609e7; -[GTMSessionUploadFetcher updateChunkFetcher:forChunkAtOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104a60738(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  uVar12 = param_1;
  func_0x00010c28de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar11 = param_1;
  func_0x00010bf39480();
  uVar5 = param_1;
  func_0x00010bfbbdc0();
  uVar9 = uVar11;
  if (0x9fffff < (long)uVar11) {
    uVar9 = 0xa00000;
  }
  if (uVar12 != 0 && (param_4 == 0 && (-1 < (long)uVar5 && (long)uVar5 <= (long)uVar11))) {
    uVar9 = uVar11;
  }
  uVar12 = param_1;
  func_0x00010c28de80();
  if (0 < (long)uVar12) {
    uVar11 = uVar12;
    if ((long)uVar12 <= (long)uVar9) {
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar9 / uVar12;
      }
      uVar11 = uVar11 * uVar12;
    }
    uVar9 = uVar11;
    if (param_4 < (long)uVar5) {
      lVar3 = 0;
      if (uVar12 != 0) {
        lVar3 = param_4 / (long)uVar12;
      }
      param_4 = lVar3 * uVar12;
    }
  }
  uVar12 = uVar5 - param_4;
  bVar4 = (long)(uVar12 - 0x9c4) < (long)uVar9;
  ppuVar1 = &PTR____CFConstantStringClassReference_110da9ff8;
  if ((long)uVar12 < 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daa018;
  }
  uVar11 = uVar9;
  if (((long)uVar12 <= (long)uVar9 || bVar4) && -1 < (long)uVar5) {
    uVar11 = uVar12;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df2498;
  if (((long)uVar12 <= (long)uVar9 || bVar4) && -1 < (long)uVar5) {
    ppuVar2 = ppuVar1;
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c1ec280(param_3,param_2,ppuVar2,&PTR____CFConstantStringClassReference_110da9d58);
  func_0x00010c1ec280(param_3,param_2,puVar7,&PTR____CFConstantStringClassReference_110dd69f8);
  func_0x00010c1ec280(param_3,param_2,puVar8,&PTR____CFConstantStringClassReference_110da9db8);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + (long)_DAT_11270f744) != -1) {
    uVar9 = param_1;
    func_0x00010bfbbdc0(param_1);
    func_0x00010c0df7c0(puVar6,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec280(param_3,param_2,puVar10,&PTR____CFConstantStringClassReference_110da9d78);
    _objc_release(puVar10);
    _objc_release(puVar6);
  }
  func_0x00010bf41e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ef20(param_3,param_2,&PTR____CFConstantStringClassReference_110daa038);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_3);
  return uVar11;
}



/* Entry: 104a609e8; end: 104a60a5b; +[GTMSessionUploadFetcher removePointer:fromPointerArray:] */

void FUN_104a609e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      lVar2 = param_4;
      func_0x00010c102e00(param_4,param_2,lVar3);
      if (lVar2 == param_3) {
        func_0x00010c12dc20(param_4,param_2,lVar3);
        break;
      }
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104a60a5c; end: 104a60a9f; -[GTMSessionUploadFetcher useBackgroundSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104a60a5c(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + _DAT_11270f784);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a60aa0; end: 104a60b7f; -[GTMSessionUploadFetcher setUseBackgroundSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60aa0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  lVar2 = (long)_DAT_11270f784;
  if (*(byte *)(param_1 + lVar2) != param_3) {
    *(char *)(param_1 + lVar2) = (char)param_3;
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010c28dcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_sync_enter();
    if (*(char *)(param_1 + lVar2) == '\x01') {
      func_0x00010befaaa0(lVar1,param_2,param_1);
    }
    else {
      _objc_opt_class(param_1);
      func_0x00010c12dc00();
    }
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a60b80; end: 104a60b87; -[GTMSessionUploadFetcher canFetchWithBackgroundSession] */

undefined8 FUN_104a60b80(void)

{
  return 0;
}



/* Entry: 104a60b88; end: 104a60c6b; -[GTMSessionUploadFetcher responseHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60b88(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  puVar2 = param_1;
  func_0x00010bf39440();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar1 == (undefined1 *)0x0) {
    _objc_retain();
    _objc_sync_enter();
    puVar2 = *(undefined1 **)(param_1 + _DAT_11270f77c);
    if (puVar2 == (undefined1 *)0x0) {
      _objc_sync_exit(param_1);
      _objc_release(param_1);
      puStack_38 = PTR_PTR_1126e35d0;
      puStack_40 = param_1;
      _objc_msgSendSuper2(&puStack_40,PTR_s_responseHeaders_11262c850);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain();
      _objc_sync_exit(param_1);
      _objc_release(param_1);
      ppuVar3 = (undefined1 **)puVar2;
    }
  }
  else {
    ppuVar3 = (undefined1 **)puVar1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104a60c6c; end: 104a60cbb; -[GTMSessionUploadFetcher statusCodeUnsynchronized] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a60c6c(long param_1)

{
  long *plVar1;
  long lStack_20;
  undefined *puStack_18;
  
  plVar1 = *(long **)(param_1 + _DAT_11270f75c);
  if (plVar1 == (long *)0xffffffffffffffff) {
    plVar1 = &lStack_20;
    puStack_18 = PTR_PTR_1126e35d0;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_statusCodeUnsynchronized_112672608);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 104a60cbc; end: 104a60cfb; -[GTMSessionUploadFetcher setStatusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined8 *)(param_1 + _DAT_11270f75c) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a60cfc; end: 104a60d3f; -[GTMSessionUploadFetcher initialBodyLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a60cfc(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f788);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a60d40; end: 104a60d7f; -[GTMSessionUploadFetcher setInitialBodyLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined8 *)(param_1 + _DAT_11270f788) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a60d80; end: 104a60dc3; -[GTMSessionUploadFetcher initialBodySent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a60d80(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f78c);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a60dc4; end: 104a60e03; -[GTMSessionUploadFetcher setInitialBodySent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined8 *)(param_1 + _DAT_11270f78c) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a60e04; end: 104a60e4f; -[GTMSessionUploadFetcher uploadLocationURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60e04(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f758);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a60e50; end: 104a60ea7; -[GTMSessionUploadFetcher setUploadLocationURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a60e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f758);
  *(undefined8 *)(param_1 + _DAT_11270f758) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a60ea8; end: 104a60eef; -[GTMSessionUploadFetcher activeFetcher] */

void FUN_104a60ea8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfabae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = lVar1;
  }
  _objc_retain(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a60ef0; end: 104a60f4f; -[GTMSessionUploadFetcher isFetching] */

void FUN_104a60ef0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010bfabae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_28 = PTR_PTR_1126e35d0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_isFetching_1125fa570);
  }
  return;
}



/* Entry: 104a60f50; end: 104a610d7; -[GTMSessionUploadFetcher waitForCompletionWithTimeout:] */

undefined8 FUN_104a60f50(double param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  ulong uStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar8 = param_1;
  func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_waitForCompletionWithTimeout__112685ed0;
  do {
    while( true ) {
      while( true ) {
        uVar3 = param_2;
        func_0x00010bfabae0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 == 0) {
          uVar3 = param_2;
          func_0x00010c0800a0();
          if ((uVar3 & 1) == 0) {
            uVar7 = 1;
            goto LAB_104a610ac;
          }
        }
        else {
          _objc_release();
        }
        func_0x00010c26f3a0(puVar2);
        if (dVar8 < 0.0) goto LAB_104a610a0;
        uVar3 = param_2;
        func_0x00010c0800a0();
        if ((int)uVar3 == 0) break;
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        dVar8 = 0.001;
        func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c142a80();
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      uVar3 = param_2;
      func_0x00010bfabae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 != param_2) break;
      puStack_68 = PTR_PTR_1126e35d0;
      uVar3 = 0;
      dVar8 = param_1;
      uStack_70 = param_2;
      _objc_msgSendSuper2(&uStack_70,puVar1);
      if ((uVar3 & 1) == 0) goto LAB_104a610a0;
    }
    uVar3 = param_2;
    func_0x00010bfabae0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    dVar8 = param_1;
    func_0x00010c2a12a0();
    _objc_release(uVar3);
  } while ((uVar6 & 1) != 0);
LAB_104a610a0:
  uVar7 = 0;
LAB_104a610ac:
  _objc_release(puVar2);
  return uVar7;
}



/* Entry: 104a610d8; end: 104a610e7; -[GTMSessionUploadFetcher currentOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a610d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f778);
}



/* Entry: 104a610e8; end: 104a610f7; -[GTMSessionUploadFetcher setCurrentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a610e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11270f778) = param_3;
  return;
}



/* Entry: 104a610f8; end: 104a6110b; -[GTMSessionUploadFetcher allowsCellularAccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104a610f8(long param_1)

{
  return *(byte *)(param_1 + _DAT_11270f754) & 1;
}



/* Entry: 104a6110c; end: 104a6111b; -[GTMSessionUploadFetcher setAllowsCellularAccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6110c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11270f754) = param_3;
  return;
}



/* Entry: 104a6111c; end: 104a6112b; -[GTMSessionUploadFetcher delegateCompletionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6111c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f764,1);
  return;
}



/* Entry: 104a6112c; end: 104a6113b; -[GTMSessionUploadFetcher lastChunkRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6112c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f790,1);
  return;
}



/* Entry: 104a6113c; end: 104a61147; -[GTMSessionUploadFetcher setLastChunkRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6113c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a61148; end: 104a6115b; -[GTMSessionUploadFetcher isSubdataGenerating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104a61148(long param_1)

{
  return *(byte *)(param_1 + _DAT_11270f794) & 1;
}



/* Entry: 104a6115c; end: 104a6116b; -[GTMSessionUploadFetcher setSubdataGenerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6115c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11270f794) = param_3;
  return;
}



/* Entry: 104a6116c; end: 104a6117f; -[GTMSessionUploadFetcher shouldInitiateOffsetQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104a6116c(long param_1)

{
  return *(byte *)(param_1 + _DAT_11270f798) & 1;
}



/* Entry: 104a61180; end: 104a6118f; -[GTMSessionUploadFetcher setShouldInitiateOffsetQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a61180(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11270f798) = param_3;
  return;
}



/* Entry: 104a61190; end: 104a6119f; -[GTMSessionUploadFetcher uploadGranularity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a61190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f79c);
}



/* Entry: 104a611a0; end: 104a611af; -[GTMSessionUploadFetcher setUploadGranularity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a611a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11270f79c) = param_3;
  return;
}



/* Entry: 104a611b0; end: 104a611bf; -[GTMSessionUploadFetcher uploadRetryFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a611b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f724);
}



/* Entry: 104a611c0; end: 104a611cf; -[GTMSessionUploadFetcher setUploadRetryFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a611c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11270f724) = param_1;
  return;
}



/* Entry: 104a611d0; end: 104a612ff; -[GTMSessionUploadFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a611d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f790,0);
  _objc_storeStrong(param_1 + _DAT_11270f76c,0);
  _objc_storeStrong(param_1 + _DAT_11270f734,0);
  _objc_storeStrong(param_1 + _DAT_11270f77c,0);
  _objc_storeStrong(param_1 + _DAT_11270f770,0);
  _objc_storeStrong(param_1 + _DAT_11270f74c,0);
  _objc_storeStrong(param_1 + _DAT_11270f740,0);
  _objc_storeStrong(param_1 + _DAT_11270f748,0);
  _objc_storeStrong(param_1 + _DAT_11270f73c,0);
  _objc_storeStrong(param_1 + _DAT_11270f738,0);
  _objc_storeStrong(param_1 + _DAT_11270f758,0);
  _objc_storeStrong(param_1 + _DAT_11270f768,0);
  _objc_storeStrong(param_1 + _DAT_11270f764,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f730,0);
  return;
}



/* Entry: 104a61300; end: 104a6135b; -[GTMSessionFetcher parentUploadFetcher] */

void FUN_104a61300(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c118c60(param_1,param_2,&PTR____CFConstantStringClassReference_110da9e78);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0db200(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a6135c; end: 104a613a3; +[GTMGatherInputStream streamWithArray:] */

void FUN_104a6135c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c0085a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a613a4; end: 104a61437; -[GTMGatherInputStream initWithDataArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a613a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e35d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + (long)_DAT_11270f7a4),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11270f7a8),puVar2);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104a61438; end: 104a61463; -[GTMGatherInputStream open] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a61438(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11270f7ac) = 0;
  *(undefined8 *)(param_1 + _DAT_11270f7b0) = 0;
  *(undefined8 *)(param_1 + _DAT_11270f7b4) = 2;
  return;
}



/* Entry: 104a61464; end: 104a61477; -[GTMGatherInputStream close] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a61464(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11270f7b4) = 6;
  return;
}



/* Entry: 104a61478; end: 104a61497; -[GTMGatherInputStream delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a61478(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11270f7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a61498; end: 104a614af; -[GTMGatherInputStream setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a61498(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11270f7a8,lVar1);
  return;
}



/* Entry: 104a614b0; end: 104a61513; -[GTMGatherInputStream propertyForKey:] */

void FUN_104a614b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)PTR__NSStreamFileCurrentOffsetKey_11034aab8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)param_3 != 0) {
    func_0x00010beec760(param_1);
    func_0x00010c0df7c0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a61514; end: 104a61583; -[GTMGatherInputStream setProperty:forKey:] */

undefined8
FUN_104a61514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c071ae0(param_4,param_2,*(undefined8 *)PTR__NSStreamFileCurrentOffsetKey_11034aab8);
  if ((int)param_4 != 0) {
    uVar1 = param_3;
    func_0x00010c0b4ca0(param_3);
    func_0x00010c160b00(param_1,param_2,uVar1);
  }
  _objc_release(param_3);
  return param_4;
}



/* Entry: 104a61584; end: 104a61587; -[GTMGatherInputStream scheduleInRunLoop:forMode:] */

void FUN_104a61584(void)

{
  return;
}



/* Entry: 104a61588; end: 104a6158b; -[GTMGatherInputStream removeFromRunLoop:forMode:] */

void FUN_104a61588(void)

{
  return;
}



/* Entry: 104a6158c; end: 104a6159b; -[GTMGatherInputStream streamStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a6158c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f7b4);
}



/* Entry: 104a6159c; end: 104a615a3; -[GTMGatherInputStream streamError] */

undefined8 FUN_104a6159c(void)

{
  return 0;
}



/* Entry: 104a615a4; end: 104a616c3; -[GTMGatherInputStream read:maxLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104a615a4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = (long)_DAT_11270f7ac;
  lVar8 = (long)_DAT_11270f7a4;
  if (param_4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      uVar6 = *(ulong *)(param_1 + lVar7);
      uVar2 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf529e0();
      if (uVar2 <= uVar6) break;
      lVar3 = *(long *)(param_1 + lVar8);
      func_0x00010c0dfd20(lVar3,param_2,*(undefined8 *)(param_1 + lVar7));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      lVar9 = (long)_DAT_11270f7b0;
      uVar6 = lVar4 - *(long *)(param_1 + lVar9);
      uVar2 = param_4;
      if (uVar6 <= param_4) {
        uVar2 = uVar6;
      }
      func_0x00010bfc3360(lVar3,param_2,param_3 + lVar5,*(long *)(param_1 + lVar9),uVar2);
      lVar1 = *(long *)(param_1 + lVar9) + uVar2;
      *(long *)(param_1 + lVar9) = lVar1;
      if (lVar1 == lVar4) {
        *(undefined8 *)(param_1 + lVar9) = 0;
        *(long *)(param_1 + lVar7) = *(long *)(param_1 + lVar7) + 1;
      }
      lVar5 = uVar2 + lVar5;
      param_4 = param_4 - uVar2;
      _objc_release(lVar3);
    } while (param_4 != 0);
  }
  uVar6 = *(ulong *)(param_1 + lVar7);
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (uVar2 <= uVar6) {
    *(undefined8 *)(param_1 + _DAT_11270f7b4) = 5;
  }
  return lVar5;
}



/* Entry: 104a616c4; end: 104a616cb; -[GTMGatherInputStream getBuffer:length:] */

undefined8 FUN_104a616c4(void)

{
  return 0;
}



/* Entry: 104a616cc; end: 104a616d3; -[GTMGatherInputStream hasBytesAvailable] */

undefined8 FUN_104a616cc(void)

{
  return 1;
}



/* Entry: 104a616d4; end: 104a6172b; -[GTMGatherInputStream stream:handleEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a616d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11270f7a8;
  _objc_loadWeakRetained();
  if (lVar1 != param_1) {
    func_0x00010c25c440(lVar1,param_2,param_1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a6172c; end: 104a61877; -[GTMGatherInputStream absoluteOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104a6172c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + _DAT_11270f7a4);
  _objc_retain();
  lVar5 = lVar2;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar11 = *plStack_120;
    uVar9 = 0;
    do {
      lVar13 = 0;
      uVar1 = uVar9 + lVar5;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        if (*(ulong *)(param_1 + _DAT_11270f7ac) <= uVar9) goto LAB_104a61824;
        lVar3 = *(long *)(lStack_128 + lVar13 * 8);
        func_0x00010c08fa60();
        lVar8 = lVar3 + lVar8;
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      lVar5 = lVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      uVar9 = uVar1;
    } while (lVar5 != 0);
  }
LAB_104a61824:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return *(long *)(param_1 + _DAT_11270f7b0) + lVar8;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11270f7ac;
  *(undefined8 *)(lVar2 + lVar10) = 0;
  lVar3 = (long)_DAT_11270f7b0;
  *(ulong *)(lVar2 + lVar3) = (ulong)puVar6 & ((long)puVar6 >> 0x3f ^ 0xffffffffffffffffU);
  lVar12 = (long)_DAT_11270f7a4;
  lVar11 = *(long *)(lVar2 + lVar12);
  _objc_retain();
  lVar5 = lVar11;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar11);
      }
      lVar4 = *(long *)(lVar14 * 8);
      func_0x00010c08fa60();
      lVar7 = *(long *)(lVar2 + lVar3);
      if (lVar7 < lVar4) goto LAB_104a61974;
      *(long *)(lVar2 + lVar10) = *(long *)(lVar2 + lVar10) + 1;
      *(long *)(lVar2 + lVar3) = lVar7 - lVar4;
      lVar14 = lVar14 + 1;
    } while (lVar5 != lVar14);
    lVar5 = lVar11;
    func_0x00010bf52a60();
  }
LAB_104a61974:
  _objc_release(lVar11);
  lVar8 = *(long *)(lVar2 + lVar10);
  lVar5 = *(long *)(lVar2 + lVar12);
  func_0x00010bf529e0();
  if ((lVar8 == lVar5) && (0 < *(long *)(lVar2 + lVar3))) {
    *(undefined8 *)(lVar2 + lVar3) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return lVar5;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar5 + _DAT_11270f7a8);
  lVar5 = lVar5 + _DAT_11270f7a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar5,0);
  return lVar5;
}



/* Entry: 104a61878; end: 104a619db; -[GTMGatherInputStream setAbsoluteOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a61878(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11270f7ac;
  *(undefined8 *)(param_1 + lVar8) = 0;
  lVar7 = (long)_DAT_11270f7b0;
  *(ulong *)(param_1 + lVar7) = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
  lVar9 = (long)_DAT_11270f7a4;
  lVar1 = *(long *)(param_1 + lVar9);
  _objc_retain();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar1);
      }
      lVar2 = *(long *)(lVar10 * 8);
      func_0x00010c08fa60();
      lVar5 = *(long *)(param_1 + lVar7);
      if (lVar5 < lVar2) goto LAB_104a61974;
      *(long *)(param_1 + lVar8) = *(long *)(param_1 + lVar8) + 1;
      *(long *)(param_1 + lVar7) = lVar5 - lVar2;
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar1;
    func_0x00010bf52a60();
  }
LAB_104a61974:
  _objc_release(lVar1);
  lVar6 = *(long *)(param_1 + lVar8);
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010bf529e0();
  if ((lVar6 == lVar3) && (0 < *(long *)(param_1 + lVar7))) {
    *(undefined8 *)(param_1 + lVar7) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar3 + _DAT_11270f7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + _DAT_11270f7a4,0);
  return;
}


