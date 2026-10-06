/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b25db48; end: 10b25dbef; -[SCRequestConcurrencyCounter numOfRunningLargeInContextDownloadTasks] */

undefined8 FUN_10b25db48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b25dbf0;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10b25dbf0; end: 10b25dc57;  */

void FUN_10b25dbf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe18;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be65740(puVar2,param_2,uVar1,&PTR___NSConcreteGlobalBlock_110ccbc30);
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b25dc58; end: 10b25dd13;  */

uint FUN_10b25dc58(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c136d60();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4f040();
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      lVar3 = param_2;
      func_0x00010c134680(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c081c40();
      uVar5 = (uint)lVar4 ^ 1;
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 10b25dd14; end: 10b25de3b; +[SCRequestConcurrencyCounter _numberOfTasksInArray:thatMatch:] */

long FUN_10b25dd14(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_4;
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(lVar6 * 8));
        lVar5 = lVar5 + (uVar3 & 0xffffffff);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    if (*(long *)(param_3 + 0x38) == -1) {
      *(undefined8 *)(param_3 + 0x38) = 0;
    }
    if (*(long *)(param_3 + 0x40) == -1) {
      *(undefined8 *)(param_3 + 0x40) = 0;
    }
    if (*(long *)(param_3 + 0x48) == -1) {
      *(undefined8 *)(param_3 + 0x48) = 0;
    }
    if (*(long *)(param_3 + 0x50) == -1) {
      *(undefined8 *)(param_3 + 0x50) = 0;
      return param_3;
    }
    return param_3;
  }
  return lVar5;
}



/* Entry: 10b25de3c; end: 10b25de83; -[SCRequestConcurrencyCounter _safeCheckCountersAfterUnregisterTask:] */

void FUN_10b25de3c(long param_1)

{
  if (*(long *)(param_1 + 0x38) == -1) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x40) == -1) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x48) == -1) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long *)(param_1 + 0x50) != -1) {
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10b25de84; end: 10b25de8b; -[SCRequestConcurrencyCounter numOfAnalyticTasks] */

undefined8 FUN_10b25de84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b25de8c; end: 10b25de93; -[SCRequestConcurrencyCounter setNumOfAnalyticTasks:] */

void FUN_10b25de8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b25de94; end: 10b25de9b; -[SCRequestConcurrencyCounter numOfMetadataTasks] */

undefined8 FUN_10b25de94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b25de9c; end: 10b25dea3; -[SCRequestConcurrencyCounter setNumOfMetadataTasks:] */

void FUN_10b25de9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b25dea4; end: 10b25deab; -[SCRequestConcurrencyCounter numOfUploadTasks] */

undefined8 FUN_10b25dea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b25deac; end: 10b25deb3; -[SCRequestConcurrencyCounter setNumOfUploadTasks:] */

void FUN_10b25deac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b25deb4; end: 10b25debb; -[SCRequestConcurrencyCounter numOfSmallDLTasks] */

undefined8 FUN_10b25deb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b25debc; end: 10b25dec3; -[SCRequestConcurrencyCounter setNumOfSmallDLTasks:] */

void FUN_10b25debc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b25dec4; end: 10b25decb; -[SCRequestConcurrencyCounter numOfLargeDLTasks] */

undefined8 FUN_10b25dec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b25decc; end: 10b25ded3; -[SCRequestConcurrencyCounter setNumOfLargeDLTasks:] */

void FUN_10b25decc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b25ded4; end: 10b25dedb; -[SCRequestConcurrencyCounter numOfBatchSmallDLTasks] */

undefined8 FUN_10b25ded4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b25dedc; end: 10b25dee3; -[SCRequestConcurrencyCounter setNumOfBatchSmallDLTasks:] */

void FUN_10b25dedc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b25dee4; end: 10b25deeb; -[SCRequestConcurrencyCounter numOfStreamingChunkRequests] */

undefined8 FUN_10b25dee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b25deec; end: 10b25def3; -[SCRequestConcurrencyCounter setNumOfStreamingChunkRequests:] */

void FUN_10b25deec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b25def4; end: 10b25df2f; -[SCRequestConcurrencyCounter .cxx_destruct] */

void FUN_10b25def4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25df30; end: 10b25dfbb; -[SCDisplayContext appendContext:] */

void FUN_10b25df30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4f6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_retain(param_1);
  func_0x00010c004800(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b25dfbc; end: 10b25e063; -[SCDisplayContext appendContexts:] */

void FUN_10b25dfbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    _objc_retain(param_1);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4f6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_retain(param_1);
    func_0x00010c004800(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b25e064; end: 10b25e0ef; -[SCDisplayContext removeContext:] */

void FUN_10b25e064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4f6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  func_0x00010c12d360(uVar2,param_2,param_3);
  _objc_release(param_3);
  _objc_retain(param_1);
  func_0x00010c004800(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b25e0f0; end: 10b25e1c7; -[SCDisplayContext isEqual:] */

ulong FUN_10b25e0f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar4 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126dfe20;
    _objc_opt_class(PTR_PTR_1126dfe20);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010bf4f6c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf4f6c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b25e1c8; end: 10b25e203; -[SCDisplayContext hash] */

undefined8 FUN_10b25e1c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4f6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b25e204; end: 10b25e233; -[SCDisplayContext setContexts:] */

void FUN_10b25e204(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b25e234; end: 10b25e23f; -[SCDisplayContext isUserBlocking] */

byte FUN_10b25e234(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 10b25e240; end: 10b25e247; -[SCDisplayContext setIsUserBlocking:] */

void FUN_10b25e240(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b25e248; end: 10b25e2b3; +[SCDisplayContextFactory appendContext:toDisplayContext:] */

void FUN_10b25e248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf06a80(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c082500(param_4);
  _objc_release(param_4);
  func_0x00010c1b56a0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25e2b4; end: 10b25e31f; +[SCDisplayContextFactory appendContexts:toDisplayContext:] */

void FUN_10b25e2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf06aa0(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c082500(param_4);
  _objc_release(param_4);
  func_0x00010c1b56a0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25e320; end: 10b25e38b; +[SCDisplayContextFactory removeContext:fromDisplayContext:] */

void FUN_10b25e320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c12ba20(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c082500(param_4);
  _objc_release(param_4);
  func_0x00010c1b56a0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25e38c; end: 10b25e3c3;  */

void FUN_10b25e38c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b25e3c4; end: 10b25e3d7;  */

void FUN_10b25e3c4(void)

{
  return;
}



/* Entry: 10b25e3d8; end: 10b25e443; -[SCNetworkClientDeprecationInterceptor isReadyToShowNotification] */

bool FUN_10b25e3d8(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  dVar2 = param_1 - dRam00000001137f4438;
  if (20.0 < dVar2) {
    dRam00000001137f4438 = param_1;
  }
  return 20.0 < dVar2;
}



/* Entry: 10b25e444; end: 10b25e4eb; -[SCNetworkClientDeprecationInterceptor hasAllFieldRequiredForDeprecation:] */

undefined * FUN_10b25e444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110f5faf8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dd9438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b25e4ec; end: 10b25e4f7; -[SCNetworkClientDeprecationInterceptor copyWithZone:] */

void FUN_10b25e4ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_init_11034d1b8)(PTR_PTR_1126dfe28);
  return;
}



/* Entry: 10b25e4f8; end: 10b25e503; -[SCNetworkRateLimitedInterceptor copyWithZone:] */

void FUN_10b25e4f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_init_11034d1b8)(PTR_PTR_1126dfe30);
  return;
}



/* Entry: 10b25e504; end: 10b25e50b; +[SCBandwidthEstimateDebugger shared] */

undefined8 FUN_10b25e504(void)

{
  return 0;
}



/* Entry: 10b25e50c; end: 10b25e5ef; -[SCBandwidthEstimateDebugger initWithTimeInterval:] */

undefined1 * FUN_10b25e50c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705f48;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f73dde5;
    _dispatch_queue_create(&UNK_10f73dde5,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    puVar3 = PTR_PTR_1126b3130;
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b25e5f0; end: 10b25e703; -[SCBandwidthEstimateDebugger start] */

void FUN_10b25e5f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  func_0x00010bef9ae0(*(undefined8 *)(param_1 + 0x20),param_2,0x80000000000);
  func_0x00010c21b960(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create
            (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  _dispatch_source_set_timer
            (*(undefined8 *)(param_1 + 0x10),0,(long)(*(double *)(param_1 + 0x18) * 1000000000.0),0)
  ;
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b25e704;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _dispatch_source_set_event_handler(uVar2,&puStack_60);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x10));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b25e704; end: 10b25e72f;  */

void FUN_10b25e704(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a59c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b25e730; end: 10b25e773; -[SCBandwidthEstimateDebugger stop] */

void FUN_10b25e730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c12d040(*(undefined8 *)(param_1 + 0x20),param_2,0x80000000000);
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b25e774; end: 10b25e77f; -[SCBandwidthEstimateDebugger setNativeNetworkManager:] */

void FUN_10b25e774(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10b25e780; end: 10b25e823; -[SCBandwidthEstimateDebugger logEstimate] */

void FUN_10b25e780(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf88860(lVar2);
  func_0x00010c0df720((double)lVar2 / 1048576.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06dc0(uVar1,param_2,puVar3,0x80000000000,0);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c28d9a0(lVar2);
  func_0x00010c0df720((double)lVar2 / 1048576.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06dc0(uVar1,param_2,puVar3,0x80000000000,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b25e824; end: 10b25e873; -[SCBandwidthEstimateDebugger .cxx_destruct] */

void FUN_10b25e824(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25e874; end: 10b25e9cb; +[SCNetworkInterfaceUtils getIpAddressesOfRemoteHost:] */

void FUN_10b25e874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 uStack_51;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _CFHostCreateWithName(lVar2,param_3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    _CFHostStartInfoResolution();
    uStack_51 = (undefined1)lVar3;
    if ((int)lVar3 != 0) {
      lVar3 = lVar2;
      _CFHostGetAddressing(lVar2,&uStack_51);
      lVar7 = lVar3;
      _CFArrayGetCount();
      if (0 < lVar7) {
        lVar7 = 0;
        do {
          lVar4 = lVar3;
          _CFArrayGetValueAtIndex(lVar3,lVar7);
          _CFDataGetBytePtr();
          if (lVar4 != 0) {
            lVar5 = param_1;
            if (*(char *)(lVar4 + 1) == '\x1e') {
              func_0x00010c25d3a0();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              if (*(char *)(lVar4 + 1) != '\x02') goto LAB_10b25e974;
              func_0x00010c25d380();
              _objc_retainAutoreleasedReturnValue();
            }
            if (lVar5 != 0) {
              func_0x00010befa120(puVar1);
            }
            _objc_release(lVar5);
          }
LAB_10b25e974:
          lVar7 = lVar7 + 1;
          lVar4 = lVar3;
          _CFArrayGetCount();
        } while (lVar7 < lVar4);
      }
    }
    _CFRelease(lVar2);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b25e9cc; end: 10b25ea43; +[SCNetworkInterfaceUtils stringFromAddress4:] */

undefined1 * FUN_10b25e9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_76 [46];
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 auStack_28 [16];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = auStack_28;
  lVar1 = 2;
  _inet_ntop(2,param_4 + 4,puVar4,0x10);
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar4 = auStack_28;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_10b25ea44;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = auStack_76;
    lVar1 = 0x1e;
    puStack_40 = &stack0xfffffffffffffff0;
    _inet_ntop(0x1e,puVar4 + 8,puVar5,0x2e);
    puVar2 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar5 = auStack_76;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      ppuVar3 = &puStack_b0;
      _objc_retain(puVar5);
      puStack_a8 = PTR_PTR_112705f50;
      puStack_b0 = puVar2;
      _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
      if (ppuVar3 != (undefined **)0x0) {
        _CACurrentMediaTime();
        *(undefined8 *)((long)ppuVar3 + 8) = param_1;
        puVar4 = puVar5;
        func_0x00010c2827c0();
        *(undefined1 **)((long)ppuVar3 + 0x10) = puVar4;
      }
      _objc_release(puVar5);
      return (undefined1 *)ppuVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 10b25ea44; end: 10b25eabb; +[SCNetworkInterfaceUtils stringFromAddress6:] */

undefined1 * FUN_10b25ea44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_46 [46];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = auStack_46;
  lVar1 = 0x1e;
  _inet_ntop(0x1e,param_4 + 8,puVar5,0x2e);
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar5 = auStack_46;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_80;
  _objc_retain(puVar5);
  puStack_78 = PTR_PTR_112705f50;
  puStack_80 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _CACurrentMediaTime();
    *(undefined8 *)((long)ppuVar3 + 8) = param_1;
    puVar4 = puVar5;
    func_0x00010c2827c0();
    *(undefined1 **)((long)ppuVar3 + 0x10) = puVar4;
  }
  _objc_release(puVar5);
  return (undefined1 *)ppuVar3;
}



/* Entry: 10b25eabc; end: 10b25eb2f; -[SCUploadBandwidthEstimatorRecord initWithTotalBytesSent:] */

undefined1 *
FUN_10b25eabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112705f50;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b25eb30; end: 10b25eb37; -[SCUploadBandwidthEstimatorRecord firstByteSentTime] */

undefined8 FUN_10b25eb30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b25eb38; end: 10b25eb3f; -[SCUploadBandwidthEstimatorRecord setFirstByteSentTime:] */

void FUN_10b25eb38(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10b25eb40; end: 10b25eb47; -[SCUploadBandwidthEstimatorRecord totalBytesSentInTheSession] */

undefined8 FUN_10b25eb40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b25eb48; end: 10b25eb4f; -[SCUploadBandwidthEstimatorRecord setTotalBytesSentInTheSession:] */

void FUN_10b25eb48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b25eb50; end: 10b25eba7; -[SCBandwidthEstimatorExperiment networkConnectivityStatusDidChange:] */

void FUN_10b25eb50(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b25eba8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 10b25eba8; end: 10b25ebaf;  */

void FUN_10b25eba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetFiltering_1125824a8);
  return;
}



/* Entry: 10b25ebb0; end: 10b25ebdb; -[SCBandwidthEstimatorExperiment currentDownloadBandwidthClassAsString] */

void FUN_10b25ebb0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfe40;
  func_0x00010bf27000();
                    /* WARNING: Could not recover jumptable at 0x00010bf888b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_downloadBandwidthClassAsString__1125bfbd0,param_1);
  return;
}



/* Entry: 10b25ebdc; end: 10b25ecab; -[SCBandwidthEstimatorExperiment startUploadBandwidthEstimationWithRequestKey:totalBytesExpectedToSend:bytesLeft:] */

void FUN_10b25ebdc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b25ecac;
    puStack_70 = &UNK_110876440;
    lStack_68 = param_1;
    _objc_retain(param_3);
    lStack_60 = param_3;
    lStack_58 = lVar1;
    uStack_50 = param_4;
    uStack_48 = param_5;
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b25ecac; end: 10b25ed93;  */

void FUN_10b25ecac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bee2e60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38),1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb6b00();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126b6f88;
    func_0x00010bf27800(PTR_PTR_1126b6f88);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126dfe48;
    _objc_alloc(PTR_PTR_1126dfe48);
    func_0x00010c054840();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb3c60();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee2df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateUploadBandwidthEstimatorW_112596520,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 10b25ed94; end: 10b25ee13; -[SCBandwidthEstimatorExperiment _shouldStartUploadBandwidthEstimationWithRequestKey:totalBytesExpectedToSend:bytesLeft:] */

bool FUN_10b25ed94(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c28ebc0();
    bVar1 = param_1 != 0x32000;
    bVar3 = 0x31fff < param_1;
    bVar3 = (((0x19000 < param_4 && bVar1) && (param_4 < 0x19001 || bVar3)) && param_5 != 0xc800) &&
            (((0x19000 < param_4 && bVar1) && (param_4 < 0x19001 || bVar3)) && param_5 + -0xc800 < 0
            ) == (((0x19000 < param_4 && bVar1) && (param_4 < 0x19001 || bVar3)) &&
                 SBORROW8(param_5,0xc800));
  }
  else {
    bVar3 = false;
  }
  _objc_release(lVar2);
  return bVar3;
}



/* Entry: 10b25ee14; end: 10b25eecb; -[SCBandwidthEstimatorExperiment _shouldFinishUploadBandwidthEstimationEarlyWithRequestKey:] */

bool FUN_10b25ee14(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x30);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    dVar4 = param_1;
    func_0x00010c0e00e0(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb0e80();
    bVar3 = 999 < (ulong)(long)((param_1 - dVar4) * 1000.0);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return bVar3;
}



/* Entry: 10b25eecc; end: 10b25ef0b; -[SCBandwidthEstimatorExperiment onConnectivityChanged:] */

void FUN_10b25eecc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfd80;
  func_0x00010bf48f20(PTR_PTR_1126dfd80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b25ef0c; end: 10b25ef0f; -[SCBandwidthEstimatorExperiment onDownstreamBandwidthChanged:bandwidthKbps:] */

void FUN_10b25ef0c(void)

{
  return;
}



/* Entry: 10b25ef10; end: 10b25efef; -[SCBandwidthEstimatorExperiment nativeDownloadBandwidthWithTTL:] */

long FUN_10b25ef10(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = param_2 + 0x58;
  dVar3 = param_1;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = -1;
  }
  else if (param_1 == 0.0) {
    param_2 = param_2 + 0x58;
    _objc_loadWeakRetained(param_2);
    lVar2 = param_2;
    func_0x00010bfc5280();
    _objc_release(param_2);
  }
  else {
    _os_unfair_lock_lock(param_2 + 0x18);
    _CACurrentMediaTime();
    if (param_1 + *(double *)(param_2 + 0x78) <= dVar3) {
      *(double *)(param_2 + 0x78) = dVar3;
      lVar2 = param_2 + 0x58;
      _objc_loadWeakRetained();
      lVar1 = lVar2;
      func_0x00010bfc5280();
      *(long *)(param_2 + 0x80) = lVar1;
      _objc_release(lVar2);
    }
    lVar2 = *(long *)(param_2 + 0x80);
    _os_unfair_lock_unlock(param_2 + 0x18);
  }
  return lVar2;
}



/* Entry: 10b25eff0; end: 10b25eff7; -[SCBandwidthEstimatorExperiment downloadBandwidth] */

void FUN_10b25eff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),param_1,PTR_s_nativeDownloadBandwidthWithTTL__112613060
            );
  return;
}



/* Entry: 10b25eff8; end: 10b25f04f; -[SCBandwidthEstimatorExperiment httpRTT] */

long FUN_10b25eff8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc7da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe4ce0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10b25f050; end: 10b25f0a7; -[SCBandwidthEstimatorExperiment transportRTT] */

long FUN_10b25f050(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc7da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27af20();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10b25f0a8; end: 10b25f107; -[SCBandwidthEstimatorExperiment networkRequestCount:] */

long FUN_10b25f0a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc7da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d7e40();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10b25f108; end: 10b25f167; -[SCBandwidthEstimatorExperiment networkRequestErrorCount:] */

long FUN_10b25f108(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc7da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d7e60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10b25f168; end: 10b25f193; -[SCBandwidthEstimatorExperiment currentDownloadBandwidthClass] */

void FUN_10b25f168(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfe40;
  func_0x00010bf88860();
                    /* WARNING: Could not recover jumptable at 0x00010bfc2d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_getBandwidthClass__1125ce508,param_1);
  return;
}



/* Entry: 10b25f194; end: 10b25f1bf; -[SCBandwidthEstimatorExperiment nqeDownloadBandwidthClass] */

void FUN_10b25f194(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfe40;
  func_0x00010c0dd920();
                    /* WARNING: Could not recover jumptable at 0x00010bfc2d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_getBandwidthClass__1125ce508,param_1);
  return;
}



/* Entry: 10b25f1c0; end: 10b25f20f; -[SCBandwidthEstimatorExperiment currentConnectionClassification] */

undefined8 FUN_10b25f1c0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf27000();
  uVar1 = 3;
  if (0x45fff < param_1) {
    uVar1 = 5;
  }
  uVar2 = 4;
  if (0x86 < param_1 >> 10) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (0x18 < param_1 >> 0xb) {
    uVar1 = uVar2;
  }
  uVar2 = 6;
  if (0 < (long)param_1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10b25f210; end: 10b25f2e7; -[SCBandwidthEstimatorExperiment getNetworkQueueStateWithCompletion:] */

void FUN_10b25f210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b25f2e8; end: 10b25f35f;  */

void FUN_10b25f2e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = lVar1 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar3;
    func_0x00010bfc7fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b25f360; end: 10b25f367; -[SCBandwidthEstimatorExperiment uploadBandwidth] */

undefined8 FUN_10b25f360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b25f368; end: 10b25f36f; -[SCBandwidthEstimatorExperiment uploadWorkload] */

undefined8 FUN_10b25f368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b25f370; end: 10b25f377; -[SCBandwidthEstimatorExperiment setUploadWorkload:] */

void FUN_10b25f370(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10b25f378; end: 10b25f3eb; -[SCBandwidthEstimatorExperiment .cxx_destruct] */

void FUN_10b25f378(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b25f3ec; end: 10b25f41f; +[SCConnectionClassManagerV2 downloadBandwidthClassAsString:] */

undefined ** FUN_10b25f3ec(ulong param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bfc2d80();
  if (param_1 < 7) {
    ppuVar1 = (undefined **)(&PTR_PTR_110ccbcd0)[param_1];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  }
  return ppuVar1;
}



/* Entry: 10b25f420; end: 10b25f45b; -[SCNativeNetworkDeckObserver .cxx_destruct] */

void FUN_10b25f420(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25f45c; end: 10b25f463; -[SCNetworkConnectivityRecord timeStamp] */

undefined8 FUN_10b25f45c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b25f464; end: 10b25f46b; -[SCNetworkConnectivityRecord setTimeStamp:] */

void FUN_10b25f464(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10b25f46c; end: 10b25f473; -[SCNetworkConnectivityRecord newStatus] */

undefined8 FUN_10b25f46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b25f474; end: 10b25f47b; -[SCNetworkConnectivityRecord setNewStatus:] */

void FUN_10b25f474(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b25f47c; end: 10b25f4bf; -[SCNetworkConnectivityLogger dealloc] */

void FUN_10b25f47c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec38c0();
  puStack_28 = PTR_PTR_112705f70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b25f4c0; end: 10b25f6ff; -[SCNetworkConnectivityLogger connectivityReportWithStartTime:endTime:] */

void FUN_10b25f4c0(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_1 < param_2) {
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10b25f700;
    uStack_90 = 0x10b25f710;
    uStack_88 = 0;
    dVar9 = 1.60807493534087e-314;
    func_0x00010c0f8240(*(undefined8 *)(param_3 + 0x10));
    _CACurrentMediaTime();
    lVar4 = puStack_a8[5];
    dVar10 = dVar9;
    func_0x00010bf529e0();
    lVar2 = lVar4 + -1;
    if (-1 < lVar4 + -1) {
      do {
        if (dVar9 <= param_1) break;
        uVar5 = puStack_a8[5];
        func_0x00010c0dfd20(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f900();
        puVar6 = PTR_PTR_1126bfb10;
        if (param_2 <= dVar9) {
          dVar9 = param_2;
        }
        dVar12 = param_1;
        if (param_1 <= dVar10) {
          dVar12 = dVar10;
        }
        dVar11 = dVar10;
        if (dVar12 < dVar9) {
          func_0x00010c0d90e0(uVar5);
          func_0x00010c25d340(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c2827c0();
          dVar11 = (dVar9 - dVar12) * 1000.0;
          func_0x00010c0df840(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        _objc_release(uVar5);
        bVar1 = 0 < lVar2;
        lVar2 = lVar2 + -1;
        dVar9 = dVar10;
        dVar10 = dVar11;
      } while (bVar1);
    }
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b25f700; end: 10b25f717;  */

void FUN_10b25f700(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b25f718; end: 10b25f75b;  */

void FUN_10b25f718(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b25f75c; end: 10b25f967; -[SCNetworkConnectivityLogger connectivityChangesWithStartTime:endTime:] */

void FUN_10b25f75c(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_2 <= param_1) {
    _objc_retain(puVar3);
    puVar6 = puVar3;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10b25f700;
    uStack_70 = 0x10b25f710;
    uStack_68 = 0;
    dVar8 = 1.60807493534087e-314;
    func_0x00010c0f8240(*(undefined8 *)(param_3 + 0x10));
    _CACurrentMediaTime();
    lVar4 = puStack_88[5];
    dVar9 = dVar8;
    func_0x00010bf529e0();
    lVar2 = lVar4 + -1;
    if (-1 < lVar4 + -1) {
      do {
        if (dVar8 <= param_1) break;
        uVar5 = puStack_88[5];
        func_0x00010c0dfd20(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f900();
        puVar6 = PTR_PTR_1126bfb10;
        dVar10 = dVar8;
        if (param_2 <= dVar8) {
          dVar10 = param_2;
        }
        dVar8 = param_1;
        if (param_1 <= dVar9) {
          dVar8 = dVar9;
        }
        if (dVar8 < dVar10) {
          func_0x00010c0d90e0(uVar5);
          func_0x00010c25d340(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar6);
        }
        _objc_release(uVar5);
        bVar1 = 0 < lVar2;
        lVar2 = lVar2 + -1;
        dVar8 = dVar9;
        dVar9 = dVar10;
      } while (bVar1);
    }
    puVar7 = puVar3;
    func_0x00010c140180(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b25f968; end: 10b25f9ab;  */

void FUN_10b25f968(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b25f9ac; end: 10b25fa7f; -[SCNetworkConnectivityLogger getCurrentWifiSSID] */

void FUN_10b25f9ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b25f700;
  uStack_30 = 0x10b25f710;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b25fa80;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(ppuStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25fa80; end: 10b25fab3;  */

void FUN_10b25fa80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b25fab4; end: 10b25fabb;  */

void FUN_10b25fab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateWifiSSID_112596ab0);
  return;
}



/* Entry: 10b25fabc; end: 10b25fb3b;  */

void FUN_10b25fabc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf07b60();
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x2) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b6728;
    func_0x00010bf60d80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b25fb3c; end: 10b25fb93; -[SCNetworkConnectivityLogger _stopScanWifiSSID] */

void FUN_10b25fb3c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b25fb94;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f9420(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 10b25fb94; end: 10b25fbd7;  */

void FUN_10b25fb94(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x20) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b25fbd8; end: 10b25fbdf; -[SCNetworkConnectivityLogger lastNetworkStatusChangedTimeStamp] */

undefined8 FUN_10b25fbd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b25fbe0; end: 10b25fc3f; -[SCNetworkConnectivityLogger .cxx_destruct] */

void FUN_10b25fbe0(long param_1)

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



/* Entry: 10b25fc40; end: 10b25fc63; +[SCReachability stringForNetworkReachability:] */

undefined * FUN_10b25fc40(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 1U < 6) {
    return (&PTR_PTR_110ccbd88)[param_3 + 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 10b25fc64; end: 10b25fc83; +[SCReachability SOJUSharedNetworkReachabilityForReachability:] */

undefined8 FUN_10b25fc64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return *(undefined8 *)(&UNK_10e56fb70 + param_3 * 8);
  }
  return 0;
}



/* Entry: 10b25fc84; end: 10b25fca3; +[SCReachability SCANetworkReachabilityForConnectivity:] */

undefined8 FUN_10b25fc84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return *(undefined8 *)(&UNK_10e56fb98 + param_3 * 8);
  }
  return 3;
}


