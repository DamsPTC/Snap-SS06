/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005867fc; end: 0058685b; +[SCExtensionNetworkingAPIClient isRequestSuccess:error:] */

bool FUN_005867fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_3);
  if ((param_4 == 0) && (lVar1 = param_3, func_0x00791ca0(), 199 < lVar1)) {
    lVar1 = param_3;
    func_0x00791ca0(param_3);
    bVar2 = lVar1 < 300;
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 0058685c; end: 005868ef; +[SCExtensionNetworkingAPIClient connectedToWifi] */

void FUN_0058685c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_30 = 0;
  uStack_38 = 0x210;
  uVar1 = 0;
  _SCNetworkReachabilityCreateWithAddress(0,&uStack_38);
  uVar2 = uVar1;
  _SCNetworkReachabilityGetFlags();
  _CFRelease(uVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail((int)uVar2 != 0 && (uStack_3c & 0x40002) == 2);
  _objc_retain(param_3);
  func_0x007908e0(PTR_PTR_00ac3058);
  uVar2 = uRam0000000000b62978;
  uRam0000000000b62978 = param_3;
  _objc_release(uVar2);
  uRam0000000000b62970 = 1;
  return;
}



/* Entry: 005868f0; end: 0058693f; +[SCExtensionNetworkingAPIClient setBlizzardLogger:] */

void FUN_005868f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x007908e0(PTR_PTR_00ac3058,param_2,param_3);
  uVar1 = uRam0000000000b62978;
  uRam0000000000b62978 = param_3;
  _objc_release(uVar1);
  uRam0000000000b62970 = 1;
  return;
}



/* Entry: 00586940; end: 0058697f; +[SCExtensionNetworkingAPIClient enableGrpcLogging] */

void FUN_00586940(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac3060;
  _objc_alloc();
  func_0x00784d60();
  uVar1 = puRam0000000000b62980;
  puRam0000000000b62980 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00586980; end: 005869e7; +[SCExtensionNetworkingAPIClient enableDefaultRetryOnFailure:] */

void FUN_00586980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00782660();
  uRam0000000000b62968 = (undefined1)uVar1;
  func_0x0078bc60(param_4);
  uVar1 = param_4;
  uRam0000000000b1e858 = param_1;
  func_0x00788fe0();
  _objc_release(param_4);
  uRam0000000000b1e860 = uVar1;
  return;
}



/* Entry: 005869e8; end: 00586a07; +[SCExtensionNetworkingAPIClient enableNetworkClientConfiguration:] */

void FUN_005869e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x007898a0();
  uRam0000000000b1e790 = param_3;
  return;
}



/* Entry: 00586a08; end: 00586a13; +[SCExtensionNetworkingAPIClient isLoggingEnabled] */

undefined1 FUN_00586a08(void)

{
  return uRam0000000000b62970;
}



/* Entry: 00586a14; end: 00586c93; -[SCExtensionNetworkingAPIClient _initWithBaseURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00586a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac3ee0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithBaseURL__00ab7148,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
    func_0x00793380(PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d9a0(puVar1);
    _objc_release(puVar2);
    func_0x0078d9a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLocale_00ac2990;
    func_0x00781320(PTR__OBJC_CLASS___NSLocale_00ac2990);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x007884c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d9a0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURLSessionConfiguration_00ac3068;
    func_0x00782d40(PTR__OBJC_CLASS___NSURLSessionConfiguration_00ac3068);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00(PTR__OBJC_CLASS___NSBundle_00ac2c38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x0078c000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00790520(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x0078e3e0(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_00ac3070;
    _objc_opt_new();
    lVar7 = (long)_DAT_00ac52e4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar5);
    func_0x0078f160(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x0078ede0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___NSURLSession_00ac3078;
    func_0x0078c920(PTR__OBJC_CLASS___NSURLSession_00ac3078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790480(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_00ac3080;
    _objc_alloc();
    uVar5 = param_3;
    func_0x0077e1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x007878e0();
    func_0x00784d00();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac52e8);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac52e8) = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
    func_0x0078fe00(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00586c94; end: 00586d6f; -[SCExtensionNetworkingAPIClient requestWithMethod:path:parameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00586c94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  uVar3 = *(undefined8 *)(param_1 + _DAT_00ac52e8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x007932a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x0077e1c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac3ee0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_requestWithMethod_path_parameter_00abdb38,param_3,uVar1,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(plVar2);
  return;
}



/* Entry: 00586d70; end: 00586d7b; -[SCExtensionNetworkingAPIClient makeNoAuthGetRequestWithURL:additionalHttpHeaders:completionBlock:] */

void FUN_00586d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00788d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_makeNoAuthGetRequestWithURL_addi_00abd050,param_3,param_4,0,param_5);
  return;
}



/* Entry: 00586d7c; end: 00586d97; -[SCExtensionNetworkingAPIClient makeNoAuthGetRequestWithURL:additionalHttpHeaders:timeoutInMs:completionBlock:] */

void FUN_00586d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0077d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__makeNoAuthRequestWithURL_reques_00aba1c8,param_3,
             &PTR____CFConstantStringClassReference_00a29c40,param_4,0,param_5,param_6);
  return;
}



/* Entry: 00586d98; end: 00586db3; -[SCExtensionNetworkingAPIClient makeNoAuthPutRequestWithURL:additionalHttpHeaders:data:completionBlock:] */

void FUN_00586d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0077d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__makeNoAuthRequestWithURL_reques_00aba1c8,param_3,
             &PTR____CFConstantStringClassReference_00a29c60,param_4,param_5,0,param_6);
  return;
}



/* Entry: 00586db4; end: 00586dbf; -[SCExtensionNetworkingAPIClient makeNoAuthPostRequestWithURL:additionalHttpHeaders:data:completionBlock:] */

void FUN_00586db4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00788d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_makeNoAuthPostRequestWithURL_add_00abd060);
  return;
}



/* Entry: 00586dc0; end: 00586ddb; -[SCExtensionNetworkingAPIClient makeNoAuthPostRequestWithURL:additionalHttpHeaders:data:timeoutInMs:completionBlock:] */

void FUN_00586dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x0077d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__makeNoAuthRequestWithURL_reques_00aba1c8,param_3,
             &PTR____CFConstantStringClassReference_00a29c80,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 00586ddc; end: 00586ebb; -[SCExtensionNetworkingAPIClient makeNoAuthPostRequestUsingRetryStrategy:URL:additionalHttpHeaders:data:timeoutInMs:completionBlock:] */

void FUN_00586ddc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_3 == 1) {
    func_0x0077d3a0(param_1,param_2,param_4,&PTR____CFConstantStringClassReference_00a29c80,param_5,
                    param_6,param_7,param_8);
  }
  else if (param_3 == 0) {
    func_0x0077d360(param_1,param_2,param_4,&PTR____CFConstantStringClassReference_00a29c80,param_5,
                    param_6,param_7,param_8);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 00586ebc; end: 00586ed3; -[SCExtensionNetworkingAPIClient _makeNoAuthRequestWithURL:requestType:additionalHttpHeaders:data:timeoutInMs:completionBlock:] */

void FUN_00586ebc(undefined8 param_1)

{
  if (cRam0000000000b62968 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0077d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__makeRetriableNoAuthRequestWithU_00aba1e0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__makeNoRetryNoAuthRequestWithURL_00aba1d0);
  return;
}



/* Entry: 00586ed4; end: 0058703f; -[SCExtensionNetworkingAPIClient _makeNoRetryNoAuthRequestWithURL:requestType:additionalHttpHeaders:data:timeoutInMs:completionBlock:] */

void FUN_00586ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,ulong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x0078b8a0(param_1,param_2,param_4,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_7 != 0) {
    func_0x00790b00((double)param_7 / 1000.0,uVar1);
  }
  lVar2 = param_6;
  func_0x007882e0();
  if (lVar2 != 0) {
    func_0x0078e380(uVar1,param_2,param_6);
  }
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_00587040;
  puStack_60 = &UNK_009e32b8;
  uStack_58 = uVar1;
  _objc_retain(uVar1);
  uVar3 = param_5;
  func_0x00782b60(param_5,param_2,&puStack_78);
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x007827e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077c600(param_1,param_2,uVar1,uVar4,param_8);
  _objc_release(param_8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_5);
  return;
}



/* Entry: 00587040; end: 0058704b;  */

void FUN_00587040(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00791170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__00abf168,param_3,
             param_2);
  return;
}



/* Entry: 0058704c; end: 005871cb; -[SCExtensionNetworkingAPIClient _makeRetriableNoAuthRequestWithURL:requestType:additionalHttpHeaders:data:timeoutInMs:completionBlock:] */

void FUN_0058704c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,ulong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x0078b8a0(param_1,param_2,param_4,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_7 != 0) {
    func_0x00790b00((double)param_7 / 1000.0,uVar1);
  }
  lVar2 = param_6;
  func_0x007882e0();
  if (lVar2 != 0) {
    func_0x0078e380(uVar1,param_2,param_6);
  }
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_005871cc;
  puStack_60 = &UNK_009e32b8;
  uStack_58 = uVar1;
  _objc_retain(uVar1);
  uVar3 = param_5;
  func_0x00782b60(param_5,param_2,&puStack_78);
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x007827e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078bc00(uRam0000000000b1e858,param_1,param_2,uVar1,uVar4,uRam0000000000b1e860,0,param_8);
  _objc_release(param_8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_5);
  return;
}



/* Entry: 005871cc; end: 005871d7;  */

void FUN_005871cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00791170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__00abf168,param_3,
             param_2);
  return;
}



/* Entry: 005871d8; end: 005871fb; -[SCExtensionNetworkingAPIClient makeNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:completionBlock:] */

void FUN_005871d8(undefined8 param_1)

{
  if (cRam0000000000b62968 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0077d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__makeRetriableNoAuthDownloadToDi_00aba1d8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__makeNoAuthDownloadToDiskRequest_00aba1c0);
  return;
}



/* Entry: 005871fc; end: 00587353; -[SCExtensionNetworkingAPIClient _makeNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:extensionRequestParams:completionBlock:] */

void FUN_005871fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x0078b8a0(param_1,param_2,&PTR____CFConstantStringClassReference_00a29c40,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    func_0x00790b00((double)param_5 / 1000.0,uVar1);
  }
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_00587354;
  puStack_60 = &UNK_009e32b8;
  uStack_58 = uVar1;
  _objc_retain(uVar1);
  uVar2 = param_4;
  func_0x00782b60(param_4,param_2,&puStack_78);
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x007827e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077c880(param_1,param_2,uVar1,uVar3,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 00587354; end: 0058735f;  */

void FUN_00587354(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00791170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__00abf168,param_3,
             param_2);
  return;
}



/* Entry: 00587360; end: 005874cb; -[SCExtensionNetworkingAPIClient _makeRetriableNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:extensionRequestParams:completionBlock:] */

void FUN_00587360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x0078b8a0(param_1,param_2,&PTR____CFConstantStringClassReference_00a29c40,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    func_0x00790b00((double)param_5 / 1000.0,uVar1);
  }
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_005874cc;
  puStack_60 = &UNK_009e32b8;
  uStack_58 = uVar1;
  _objc_retain(uVar1);
  uVar2 = param_4;
  func_0x00782b60(param_4,param_2,&puStack_78);
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x007827e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078bc20(uRam0000000000b1e858,param_1,param_2,uVar1,uVar3,uRam0000000000b1e860,0,param_6,
                  param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 005874cc; end: 005874d7;  */

void FUN_005874cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00791170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__00abf168,param_3,
             param_2);
  return;
}



/* Entry: 005874d8; end: 0058752f; -[SCExtensionNetworkingAPIClient makePostRequestWithEndpoint:parameters:authToken:username:userId:successBlock:] */

void FUN_005874d8(void)

{
  if (cRam0000000000b62968 == '\x01') {
    func_0x00788dc0();
  }
  else {
    func_0x00788da0();
  }
  return;
}



/* Entry: 00587530; end: 005877ef; -[SCExtensionNetworkingAPIClient makePostRequestWithEndpoint:parameters:additionalHttpHeaders:authToken:username:userId:successBlock:] */

void FUN_00587530(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
  func_0x0077f600(PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x0077e4e0(ppuVar1);
  _objc_release(puVar2);
  func_0x0077e4e0(ppuVar1);
  _objc_release(param_4);
  uVar3 = param_1;
  func_0x0078b8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00782b60(param_5);
  _objc_release(param_5);
  if (param_3 != 0) {
    ppuVar4 = ppuVar1;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    param_5 = ppuVar4;
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      param_5 = &PTR____CFConstantStringClassReference_00a212a0;
      FUN_005aef44(&PTR____CFConstantStringClassReference_00a212a0,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar3);
      func_0x00782b60(param_5);
      _objc_release(uVar3);
      _objc_release(param_5);
    }
  }
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_5;
  func_0x007827e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  if (cRam0000000000b62968 == '\x01') {
    func_0x0078bc00(uRam0000000000b1e858,param_1);
  }
  else {
    func_0x0077c600(param_1);
  }
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 005877f0; end: 00587807;  */

void FUN_005877f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00791170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__00abf168,param_3,
             param_2);
  return;
}



/* Entry: 00587808; end: 00587a9f; -[SCExtensionNetworkingAPIClient makeRetriablePostRequestWithEndpoint:parameters:additionalHttpHeaders:authToken:username:userId:successBlock:] */

void FUN_00587808(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
  func_0x0077f600(PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x0077e4e0(ppuVar1);
  _objc_release(puVar2);
  func_0x0077e4e0(ppuVar1);
  _objc_release(param_4);
  uVar3 = param_1;
  func_0x0078b8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00782b60(param_5);
  _objc_release(param_5);
  if (param_3 != 0) {
    ppuVar4 = ppuVar1;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    param_5 = ppuVar4;
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      param_5 = &PTR____CFConstantStringClassReference_00a212a0;
      FUN_005aef44(&PTR____CFConstantStringClassReference_00a212a0,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar3);
      func_0x00782b60(param_5);
      _objc_release(uVar3);
      _objc_release(param_5);
    }
  }
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_5;
  func_0x007827e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078bc00(uRam0000000000b1e858,param_1);
  _objc_release(param_9);
  _objc_release(ppuVar4);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00587aa0; end: 00587ab7;  */

void FUN_00587aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00791170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__00abf168,param_3,
             param_2);
  return;
}



/* Entry: 00587ab8; end: 00587e13; -[SCExtensionNetworkingAPIClient makePostRequestWithEndpoint:data:isMultipart:parameters:additionalHttpHeaders:authToken:username:userId:successBlock:] */

void FUN_00587ab8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                 undefined8 param_6,undefined **param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_11);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
  func_0x0077f600(PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  func_0x0077e4e0(ppuVar1);
  _objc_release(puVar2);
  func_0x0077e4e0(ppuVar1);
  _objc_release(param_6);
  uVar3 = param_1;
  if (param_5 == 0) {
    func_0x0078b8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e380();
  }
  else {
    _objc_retain(param_4);
    func_0x007896c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  _objc_retain(uVar3);
  func_0x00782b60(param_7);
  _objc_release(param_7);
  if (param_3 != 0) {
    ppuVar4 = ppuVar1;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    param_7 = ppuVar4;
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      param_7 = &PTR____CFConstantStringClassReference_00a212a0;
      FUN_005aef44(&PTR____CFConstantStringClassReference_00a212a0,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar3);
      func_0x00782b60(param_7);
      _objc_release(uVar3);
      _objc_release(param_7);
    }
  }
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_7;
  func_0x007827e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  if (cRam0000000000b62968 == '\x01') {
    func_0x0078bc00(uRam0000000000b1e858,param_1);
  }
  else {
    func_0x0077c600(param_1);
  }
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00587e14; end: 00587e4b;  */

void FUN_00587e14(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_2,PTR_s_appendPartWithFileData_name_file_00aba8c0,*(undefined8 *)(param_1 + 0x20)
             ,&PTR____CFConstantStringClassReference_00a29cc0,
             &PTR____CFConstantStringClassReference_00a29cc0,
             &PTR____CFConstantStringClassReference_00a29ce0);
  return;
}



/* Entry: 00587e4c; end: 00587efb; -[SCExtensionNetworkingAPIClient addInfo:task:] */

void FUN_00587e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0078b7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar1 = param_4;
  func_0x00792760(param_4);
  _objc_release(param_4);
  func_0x00789d40(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(param_1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00587efc; end: 00587f8b; -[SCExtensionNetworkingAPIClient removeInfoForTask:] */

void FUN_00587efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x0078b7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar1 = param_3;
  func_0x00792760(param_3);
  _objc_release(param_3);
  func_0x00789d40(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b4a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00587f8c; end: 0058802f; -[SCExtensionNetworkingAPIClient infoForTask:] */

void FUN_00587f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x0078b7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar1 = param_3;
  func_0x00792760(param_3);
  _objc_release(param_3);
  func_0x00789d40(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789ea0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00588030; end: 00588033; -[SCExtensionNetworkingAPIClient updateSession:] */

void FUN_00588030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00790490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setSession__00abee30);
  return;
}



/* Entry: 00588034; end: 00588043; -[SCExtensionNetworkingAPIClient dispatchWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00588034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac52e4),PTR_s_addOperationWithBlock__00aba6f0);
  return;
}



/* Entry: 00588044; end: 0058804f; +[SCExtensionNetworkingAPIClient disableLogging] */

void FUN_00588044(void)

{
  uRam0000000000b62970 = 0;
  return;
}



/* Entry: 00588050; end: 00588117; -[SCExtensionNetworkingAPIClient URLSession:didReceiveChallenge:completionHandler:] */

void FUN_00588050(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_x3;
  long in_x4;
  
  _objc_retain(in_x3);
  puVar3 = PTR_PTR_00ac3088;
  _objc_retain(in_x4);
  uVar1 = in_x3;
  func_0x0078ab40(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x007844a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00787bc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)puVar3 == 0) {
    (**(code **)(in_x4 + 0x10))(in_x4,1,0);
  }
  else {
    func_0x00782160(PTR_PTR_00ac3090);
  }
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(in_x3);
  return;
}



/* Entry: 00588118; end: 00588477; -[SCExtensionNetworkingAPIClient logTaskStarted:request:taskId:extensionRequestParams:requestCompleteBlock:downloadCompleteBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00588118(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_00ac3098;
  _objc_alloc();
  lVar2 = param_5;
  func_0x0077baa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puVar4 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x0077b960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00786440(param_1);
  }
  else {
    lVar6 = param_5;
    func_0x0077b960(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x007882e0();
    func_0x00786440(param_1);
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x007904c0(puVar1);
  _objc_release(puVar4);
  func_0x0078e840(puVar1);
  func_0x0078fd60(puVar1);
  func_0x0078fd80(puVar1);
  func_0x0078db80(puVar1);
  func_0x0078e800(puVar1);
  if (param_7 != 0) {
    lVar2 = param_7;
    func_0x00792c40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790bc0(puVar1);
    _objc_release(lVar2);
    func_0x0078b880(param_7);
    func_0x0078fec0(puVar1);
    func_0x00780ca0(param_7);
    func_0x0078d6a0(puVar1);
  }
  _objc_initWeak(auStack_78,param_2);
  uVar7 = *(undefined8 *)(param_2 + _DAT_00ac52e4);
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x0077e7e0(uVar7);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 00588478; end: 00588513;  */

void FUN_00588478(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x0077e680();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00588514; end: 00588d0b; -[SCExtensionNetworkingAPIClient URLSession:task:didFinishCollectingMetrics:] */

void FUN_00588514(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00792d60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00780e80();
  lVar6 = lVar6 + -1;
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a485c0);
  _objc_release(puVar2);
  if (lVar6 < 1) {
    dVar8 = 0.0;
  }
  else {
    lVar7 = 0;
    dVar8 = 0.0;
    do {
      lVar3 = param_6;
      func_0x00792d60(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00789e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x0078ba80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00783200(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00792900(lVar3,param_3,lVar5);
      dVar8 = dVar8 + param_1;
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    dVar8 = dVar8 * 1000.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(dVar8,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a485e0);
  _objc_release(puVar2);
  lVar7 = param_6;
  func_0x00792d60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar6;
  func_0x007898c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_00ac2f90;
    func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48600);
    _objc_release(puVar2);
  }
  else {
    func_0x0078f4e0(puVar1,param_3,lVar7,&PTR____CFConstantStringClassReference_00a48600);
  }
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x00787ce0(lVar6);
  func_0x00789be0(puVar2,param_3,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48620);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x0078b9a0(lVar6);
  func_0x00789c80(puVar2,param_3,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48640);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x00782420(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00783200(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48660);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x00782400(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00782420(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48680);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x00780a00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00780a20(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a486a0);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x0078c4e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x0078c500(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a486c0);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x0078b780(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x0078b840(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a30540);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x0078bac0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x0078b780(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a486e0);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x0078ba80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x0078bac0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48700);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x0078bac0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00783200(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  dVar8 = dVar8 * 1000.0;
  func_0x00789d40(puVar2,param_3,(long)dVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48720);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar7 = lVar6;
  func_0x0078ba80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00783200(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900(lVar7,param_3,lVar3);
  func_0x00789d40(puVar2,param_3,(long)(dVar8 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_00a48740);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  func_0x00784960(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e9a0();
  lVar7 = lVar6;
  func_0x0078ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x007904a0(param_2,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_5);
  return;
}



/* Entry: 00588d0c; end: 0058915b; -[SCExtensionNetworkingAPIClient URLSession:task:didCompleteWithError:] */

/* WARNING: Removing unreachable block (ram,0x00588e98) */
/* WARNING: Removing unreachable block (ram,0x00588f58) */

void FUN_00588d0c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00784960();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) goto LAB_00589108;
  func_0x0078b3c0(param_1);
  func_0x0078dca0(puVar1);
  puVar2 = param_4;
  func_0x0078ba00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0;
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar6 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar2);
  func_0x0078ffe0(puVar1);
  _CACurrentMediaTime();
  func_0x0078e140(puVar1);
  puVar2 = puVar1;
  func_0x0078ba60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00780e80();
  _objc_release(puVar2);
  puVar2 = puVar1;
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    func_0x0078ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00789e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar10 = puVar1;
    func_0x0078ba60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00780ea0();
    while (puVar4 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
      do {
        func_0x007882e0(*(undefined8 *)((long)puVar9 * 8));
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar10;
      func_0x00780ea0();
    }
    _objc_release(puVar10);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781640(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078ba60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = 0x10;
    puVar4 = puVar2;
    func_0x00780ea0();
    while (puVar4 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
      do {
        func_0x0077eea0(puVar3);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      lVar7 = 0x10;
      puVar4 = puVar2;
      func_0x00780ea0();
    }
  }
  _objc_release(puVar2);
  func_0x00780ee0(param_4);
  func_0x0078d7e0(puVar1);
  func_0x00780ec0(param_4);
  func_0x0078d7c0(puVar1);
  puVar2 = puVar1;
  func_0x00787720();
  puVar4 = puVar1;
  if ((int)puVar2 == 0) {
    puVar2 = puVar1;
    func_0x0078b760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x0078b760();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0;
      _objc_retain(puVar6);
      _objc_opt_class(puVar5);
      puVar10 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar5);
      puVar2 = puVar6;
      if (((ulong)puVar10 & 1) == 0) {
        puVar2 = (undefined1 *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar6);
      (**(code **)(puVar4 + 0x10))(puVar4,puVar2,puVar3,param_5);
      goto LAB_005890d8;
    }
  }
  else {
    func_0x00782460();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00788600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0;
    _objc_retain(puVar6);
    _objc_opt_class(puVar5);
    puVar9 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar5);
    puVar10 = puVar6;
    if (((ulong)puVar9 & 1) == 0) {
      puVar10 = (undefined1 *)0x0;
    }
    _objc_retain(puVar10);
    _objc_release(puVar6);
    (**(code **)(puVar4 + 0x10))(puVar4,puVar2,puVar10,param_5);
    _objc_release(puVar10);
LAB_005890d8:
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  func_0x00788780(PTR_PTR_00ac3058);
  _objc_release(puVar3);
  _objc_release(puVar6);
LAB_00589108:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  func_0x00784960(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00793400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar7 != 0) {
    puVar1 = param_4;
    func_0x0078ba60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e720();
    _objc_release(puVar1);
  }
  _objc_release(puVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar7);
  return;
}



/* Entry: 0058915c; end: 00589217; -[SCExtensionNetworkingAPIClient URLSession:dataTask:didReceiveData:] */

void FUN_0058915c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00784960(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00793400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_5 != 0) {
    uVar1 = param_1;
    func_0x0078ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e720();
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_5);
  return;
}



/* Entry: 00589218; end: 00589227; -[SCExtensionNetworkingAPIClient URLSession:dataTask:didReceiveResponse:completionHandler:] */

void FUN_00589218(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x00589224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))(in_x5,1);
  return;
}



/* Entry: 00589228; end: 0058922b; -[SCExtensionNetworkingAPIClient URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:] */

void FUN_00589228(void)

{
  return;
}



/* Entry: 0058922c; end: 0058922f; -[SCExtensionNetworkingAPIClient URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:] */

void FUN_0058922c(void)

{
  return;
}



/* Entry: 00589230; end: 0058937b; -[SCExtensionNetworkingAPIClient URLSession:downloadTask:didFinishDownloadingToURL:] */

/* WARNING: Removing unreachable block (ram,0x00589318) */

void FUN_00589230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  func_0x00784960(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000000b629d8 != -1) {
    _dispatch_once(0xb629d8,&PTR___NSConcreteGlobalBlock_00a02550);
  }
  uVar1 = uRam0000000000b629e0;
  uVar3 = uRam0000000000b629e0;
  _objc_retain(uRam0000000000b629e0);
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x0077bac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x007895e0(puVar2);
  _objc_release(in_x4);
  _objc_retain(0);
  func_0x0078ec60(param_1);
  _objc_release(0);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 0058937c; end: 0058954f; -[SCExtensionNetworkingAPIClient retriableDataTaskSendRequest:taskId:retryIntervalSecs:maxRetries:currentTryNumber:completionBlock:] */

void FUN_0058937c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar1 = param_4;
  func_0x0077b9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x0077baa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x007929c0(param_4);
  func_0x00789c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(param_1,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_c8 = PTR___NSConcreteStackBlock_00999f30;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_00589550;
  puStack_b0 = &UNK_00a02460;
  uStack_a8 = param_2;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_8;
  uStack_88 = param_7;
  uStack_80 = param_6;
  uStack_78 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_8);
  func_0x0077c600(param_2,param_3,param_4,param_5,&puStack_c8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_90);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_8);
  return;
}



/* Entry: 00589550; end: 005896e3;  */

void FUN_00589550(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (*(ulong *)(param_1 + 0x48) <= *(ulong *)(param_1 + 0x40))) {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == 0) goto LAB_005896b4;
    puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0;
    _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar4 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    (**(code **)(lVar6 + 0x10))(lVar6,uVar4,param_3,param_4);
  }
  else {
    uVar1 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x50) * 1000.0));
    puStack_98 = PTR___NSConcreteStackBlock_00999f30;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_005896e4;
    puStack_80 = &UNK_00a02430;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = uVar5;
    uStack_70 = uVar4;
    _objc_retain(uVar7);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    auVar8 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x40),*(undefined1 (*) [16])(param_1 + 0x40),
                      8,1);
    uStack_48 = auVar8._8_8_;
    uStack_50 = auVar8._0_8_;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = uVar7;
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    _dispatch_after(uVar1,PTR___dispatch_main_q_00999fc0,&puStack_98);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    uVar4 = uStack_70;
  }
  _objc_release(uVar4);
LAB_005896b4:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 005896e4; end: 00589703;  */

void FUN_005896e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(double *)(param_1 + 0x40) + *(double *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_retriableDataTaskSendRequest_tas_00abdc10,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x50) + 1,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 00589704; end: 00589747;  */

void FUN_00589704(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  return;
}



/* Entry: 00589748; end: 0058994b; -[SCExtensionNetworkingAPIClient retriableDownloadTaskRequest:taskId:retryIntervalSecs:maxRetries:currentTryNumber:extensionRequestParams:completionBlock:] */

void FUN_00589748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_4;
  func_0x0077b9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x0077baa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x007929c0(param_4);
  func_0x00789c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(param_1,PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_d0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_0058994c;
  puStack_b8 = &UNK_00a024c0;
  uStack_b0 = param_2;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  uStack_98 = param_8;
  uStack_90 = param_9;
  uStack_88 = param_7;
  uStack_80 = param_6;
  uStack_78 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_9);
  func_0x0077c880(param_2,param_3,param_4,param_5,param_8,&puStack_d0);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_9);
  return;
}



/* Entry: 0058994c; end: 00589af7;  */

void FUN_0058994c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (*(ulong *)(param_1 + 0x50) <= *(ulong *)(param_1 + 0x48))) {
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 == 0) goto LAB_00589ac8;
    puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0;
    _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    (**(code **)(lVar6 + 0x10))(lVar6,param_2,uVar4,param_4);
  }
  else {
    uVar1 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x58) * 1000.0));
    puStack_a0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_00589af8;
    puStack_88 = &UNK_00a02490;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = uVar5;
    uStack_78 = uVar4;
    _objc_retain(uVar7);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x48),*(undefined1 (*) [16])(param_1 + 0x48),
                      8,1);
    uStack_48 = auVar9._8_8_;
    uStack_50 = auVar9._0_8_;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = uVar7;
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = uVar8;
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    _dispatch_after(uVar1,PTR___dispatch_main_q_00999fc0,&puStack_a0);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    uVar4 = uStack_78;
  }
  _objc_release(uVar4);
LAB_00589ac8:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 00589af8; end: 00589b1b;  */

void FUN_00589af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078bc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x20),PTR_s_retriableDownloadTaskRequest_tas_00abdc18,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x50),*(long *)(param_1 + 0x58) + 1,
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 00589b1c; end: 00589b67;  */

void FUN_00589b1c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  return;
}



/* Entry: 00589b68; end: 00589d3b; -[SCExtensionNetworkingAPIClient _dataTaskWithRequest:taskId:completionBlock:] */

void FUN_00589b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x0077b9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x0077baa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x007929c0(param_3);
  func_0x00789c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  func_0x00787a20();
  uVar1 = param_1;
  func_0x0078c8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar3 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_00999f30;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_00589d3c;
    puStack_68 = &UNK_00a024f0;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_5);
    uVar2 = uVar1;
    uStack_58 = param_5;
    func_0x00781560(uVar1,param_2,param_3,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x0078bb80(uVar2);
    _objc_release(uVar2);
    _objc_release(uStack_58);
    uVar2 = uStack_60;
  }
  else {
    uVar2 = uVar1;
    func_0x00781540(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00788a60(param_1,param_2,uVar2,param_3,param_4,0,param_5,0);
    func_0x0078bb80(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00589d3c; end: 00589e83;  */

void FUN_00589d3c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0;
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077b9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077baa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x007929c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00789c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00791ca0(uVar1);
  func_0x00789c80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x10))(lVar7,uVar1,param_2,param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00589e84; end: 0058a06b; -[SCExtensionNetworkingAPIClient _downloadTaskWithRequest:taskId:extensionRequestParams:downloadCompleteBlock:] */

void FUN_00589e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x0077b9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x0077baa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x007929c0(param_3);
  func_0x00789c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  func_0x00787a20();
  uVar1 = param_1;
  func_0x0078c8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar3 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_00999f30;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_0058a06c;
    puStack_68 = &UNK_00a02520;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_6);
    uVar2 = uVar1;
    uStack_58 = param_6;
    func_0x007824a0(uVar1,param_2,param_3,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x0078bb80(uVar2);
    _objc_release(uVar2);
    _objc_release(uStack_58);
    uVar2 = uStack_60;
  }
  else {
    uVar2 = uVar1;
    func_0x00782480(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00788a60(param_1,param_2,uVar2,param_3,param_4,param_5,0,param_6);
    func_0x0078bb80(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0058a06c; end: 0058a1b3;  */

void FUN_0058a06c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0;
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_00ac30a0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077b9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077baa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x007929c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00789c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00791ca0(uVar1);
  func_0x00789c80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x10))(lVar7,param_2,uVar1,param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0058a1b4; end: 0058a1cb; -[SCExtensionNetworkingAPIClient makeNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:extensionRequestParams:completionBlock:] */

void FUN_0058a1b4(undefined8 param_1)

{
  if (cRam0000000000b62968 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0077d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__makeRetriableNoAuthDownloadToDi_00aba1d8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__makeNoAuthDownloadToDiskRequest_00aba1c0);
  return;
}



/* Entry: 0058a1cc; end: 0058a1db; -[SCExtensionNetworkingAPIClient session] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058a1cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac52ec);
}



/* Entry: 0058a1dc; end: 0058a21b; -[SCExtensionNetworkingAPIClient setSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac52ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058a21c; end: 0058a22b; -[SCExtensionNetworkingAPIClient requestInfoKeyedByTasks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058a21c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac52f0);
}



/* Entry: 0058a22c; end: 0058a26b; -[SCExtensionNetworkingAPIClient setRequestInfoKeyedByTasks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac52f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058a26c; end: 0058a2cb; -[SCExtensionNetworkingAPIClient .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a26c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac52f0,0);
  _objc_storeStrong(param_1 + _DAT_00ac52ec,0);
  _objc_storeStrong(param_1 + _DAT_00ac52e4,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac52e8,0);
  return;
}



/* Entry: 0058a2cc; end: 0058a38f;  */

void FUN_0058a2cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00784a00(puVar2,param_2,puVar4,1);
  uVar1 = puRam0000000000b629e0;
  puRam0000000000b629e0 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_00ac2d00;
  puVar3 = puRam0000000000b629e0;
  func_0x0078a400(puRam0000000000b629e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00781160(puVar2,param_2,puVar3,1,0,0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 0058a390; end: 0058a417; -[SCExtensionNetworkingRequestRouter initWithBaseURL:isCustomEndpoint:] */

undefined1 *
FUN_0058a390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3ee8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0058a418; end: 0058a55b; -[SCExtensionNetworkingRequestRouter urlForEndpoint:] */

void FUN_0058a418(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x0077bc80(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    _objc_retain(puVar1);
  }
  else {
    _objc_opt_class();
    func_0x00783820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x0078a400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00780c20(param_1,param_2,puVar2);
    _objc_release(puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(puVar1);
    }
    else {
      func_0x0077e1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x007844a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00791f80(puVar4,param_2,puVar2,&PTR____CFConstantStringClassReference_00a29d20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x0077bc60(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 0058a55c; end: 0058a5af; +[SCExtensionNetworkingRequestRouter flexEndpoints] */

void FUN_0058a55c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b629f0 != -1) {
    _dispatch_once(0xb629f0,&PTR___NSConcreteGlobalBlock_00a02570);
  }
  uVar1 = uRam0000000000b629e8;
  _objc_retain(uRam0000000000b629e8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0058a5b0; end: 0058a5eb;  */

void FUN_0058a5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  func_0x00791360(PTR__OBJC_CLASS___NSSet_00ac2a68,param_2,
                  &PTR__OBJC_CLASS___NSConstantArray_00a59520);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b629e8;
  puRam0000000000b629e8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058a5ec; end: 0058a5f7; -[SCExtensionNetworkingRequestRouter .cxx_destruct] */

void FUN_0058a5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0058a5f8; end: 0058a627; +[SCExtensionAPIClientLogger setSystemBlizzardLogger:] */

void FUN_0058a5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = uRam0000000000b629f8;
  uRam0000000000b629f8 = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058a628; end: 0058b72f; +[SCExtensionAPIClientLogger logBlizzardNetworkRequest:] */

void FUN_0058a628(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  int iVar19;
  
  _objc_retain(param_4);
  ppuVar1 = param_4;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) goto LAB_0058b620;
  func_0x00791c20(param_4);
  _objc_release(ppuVar1);
  if (param_1 == 0.0 || lRam0000000000b629f8 == 0) goto LAB_0058b620;
  func_0x00791c20(param_4);
  func_0x00783740(param_4);
  ppuVar2 = param_4;
  func_0x0078b720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_4;
  func_0x0078ba00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_4;
  func_0x00793400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac30a8;
  _objc_opt_new(PTR_PTR_00ac30a8);
  ppuVar1 = param_4;
  func_0x0078ba00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar1;
  func_0x0077eac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x0078ed20(puVar5);
  ppuVar1 = ppuVar4;
  func_0x00789f00(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ee60(puVar5);
  _objc_release(ppuVar1);
  func_0x0078f240(puVar5);
  ppuVar1 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar1;
  FUN_0058b730();
  if (((ulong)ppuVar7 & 1) == 0) {
    _objc_release(ppuVar1);
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2a340;
  }
  func_0x0078f980(puVar5);
  ppuVar7 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  FUN_0058b730();
  _objc_release(ppuVar7);
  if ((int)ppuVar8 != 0) {
    ppuVar7 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078e2a0(puVar5);
    _objc_release(ppuVar7);
  }
  ppuVar7 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  FUN_0058b730();
  _objc_release(ppuVar7);
  if ((int)ppuVar8 != 0) {
    ppuVar7 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078db20(puVar5);
    _objc_release(ppuVar7);
  }
  ppuVar7 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  FUN_0058b730();
  _objc_release(ppuVar7);
  if ((int)ppuVar8 != 0) {
    ppuVar7 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078d600(puVar5);
    _objc_release(ppuVar7);
  }
  ppuVar7 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  FUN_0058b730();
  _objc_release(ppuVar7);
  if ((int)ppuVar8 != 0) {
    ppuVar7 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078d620(puVar5);
    _objc_release(ppuVar7);
  }
  ppuVar7 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  FUN_0058b730();
  _objc_release(ppuVar7);
  if ((int)ppuVar8 != 0) {
    ppuVar7 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790360(puVar5);
    _objc_release(ppuVar7);
  }
  ppuVar7 = ppuVar2;
  func_0x0077baa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x007844a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar8);
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar10 = ppuVar3;
    func_0x0077eac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    ppuVar10 = &PTR____CFConstantStringClassReference_00a48820;
    func_0x00780080();
    if (ppuVar10 == (undefined **)0x0) {
LAB_0058aad8:
      func_0x007878e0(ppuVar9);
    }
    else {
      ppuVar10 = &PTR____CFConstantStringClassReference_00a48840;
      func_0x00780080();
      if (ppuVar10 == (undefined **)0x0) goto LAB_0058aad8;
      ppuVar10 = &PTR____CFConstantStringClassReference_00a48860;
      func_0x00780080();
      if (ppuVar10 == (undefined **)0x0) {
        if (ppuVar9 != (undefined **)0x0) {
          if (lRam0000000000b62a18 != -1) {
            _dispatch_once(0xb62a18,&PTR___NSConcreteGlobalBlock_00a025b0);
          }
          func_0x00780c20(uRam0000000000b62a10);
        }
      }
      else {
        ppuVar10 = &PTR____CFConstantStringClassReference_00a48880;
        func_0x00780080();
        if (ppuVar10 == (undefined **)0x0) {
          if (ppuVar9 == (undefined **)0x0) goto LAB_0058aaec;
          ppuVar10 = ppuVar9;
          func_0x0078ae00();
          if (ppuVar10 == (undefined **)0x7fffffffffffffff) {
            func_0x0058b78c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00780c20();
          }
          else {
            ppuVar17 = ppuVar9;
            func_0x00792460(ppuVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
            func_0x00793ac0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar17;
            func_0x00791fe0(ppuVar17);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar18);
            _objc_release(ppuVar17);
            func_0x0058b78c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00780c20();
            _objc_release(ppuVar17);
          }
        }
        else {
          ppuVar10 = ppuVar3;
          func_0x0077eac0(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00789f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        _objc_release(ppuVar10);
      }
    }
LAB_0058aaec:
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar3);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar6;
  func_0x00789f00(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790400(puVar5);
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar6;
  func_0x00789f00(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00788b40();
  func_0x00790440(puVar5);
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 != (undefined **)0x0) {
    _objc_retain(ppuVar7);
  }
  _objc_release(ppuVar7);
  func_0x0078d3a0(puVar5);
  _objc_release(ppuVar7);
  func_0x0078d380(puVar5);
  ppuVar7 = ppuVar6;
  func_0x00789f00(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d200(puVar5);
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar2;
  func_0x007935e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00787b20();
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar8 = ppuVar7;
    func_0x007827e0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fde0(puVar5);
  }
  else {
    _SCUUID();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar8;
    func_0x007827e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fde0(puVar5);
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar8);
  ppuVar8 = param_4;
  func_0x00792740(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790940(puVar5);
  _objc_release(ppuVar8);
  ppuVar8 = param_4;
  func_0x00791be0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fd00(puVar5);
  _objc_release(ppuVar8);
  ppuVar8 = ppuVar2;
  func_0x0077baa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar8;
  func_0x007844a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x0078e560(puVar5);
  ppuVar8 = param_4;
  func_0x0078a400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f6c0(puVar5);
  _objc_release(ppuVar8);
  ppuVar8 = ppuVar3;
  func_0x0077baa0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x0077e1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e120(puVar5);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  ppuVar8 = ppuVar2;
  func_0x0077baa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x0078ac60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  if (ppuVar9 != (undefined **)0x0) {
    func_0x0078fa40(puVar5);
  }
  ppuVar8 = ppuVar2;
  func_0x0077b9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e5a0(puVar5);
  _objc_release(ppuVar8);
  func_0x0078b820(param_4);
  func_0x0078fca0(puVar5);
  func_0x00780ee0(param_4);
  func_0x0078fd40(puVar5);
  ppuVar8 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar8;
  FUN_0058b730();
  _objc_release(ppuVar8);
  if ((int)ppuVar17 != 0) {
    ppuVar8 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fce0(puVar5);
    _objc_release(ppuVar8);
  }
  func_0x00787cc0(param_4);
  func_0x0078e900(puVar5);
  func_0x0078bbc0(param_4);
  func_0x00790000(puVar5);
  ppuVar17 = ppuVar2;
  func_0x0077eaa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar17;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_00a2a360;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar8 = ppuVar11;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar11);
  _objc_release(ppuVar17);
  ppuVar11 = ppuVar2;
  func_0x0077eaa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR____CFConstantStringClassReference_00a2a360;
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar17 = ppuVar12;
  }
  _objc_retain(ppuVar17);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  puVar18 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fc40(puVar5);
  _objc_release(puVar18);
  ppuVar11 = param_4;
  func_0x00782d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790880(puVar5);
  _objc_release(ppuVar11);
  func_0x00791ca0(ppuVar3);
  func_0x00790660(puVar5);
  ppuVar11 = param_4;
  func_0x00782d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = param_4;
    func_0x00782d80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00780460();
    func_0x0078dce0(puVar5);
    _objc_release(ppuVar11);
  }
  ppuVar11 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00790920(puVar5);
  _objc_release(ppuVar11);
  ppuVar11 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00791080(puVar5);
  _objc_release(ppuVar11);
  ppuVar11 = ppuVar3;
  func_0x0077eac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar13 = ppuVar11;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar12);
    ppuVar13 = ppuVar12;
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  func_0x0078f720(puVar5);
  ppuVar11 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790cc0(puVar5);
    _objc_release(ppuVar11);
  }
  ppuVar11 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790ce0(puVar5);
    _objc_release(ppuVar11);
  }
  ppuVar11 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
    func_0x0078e8c0(puVar5);
  }
  else {
    ppuVar12 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00787200();
    func_0x0078e8c0(puVar5);
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar11);
  func_0x0078f260(puVar5);
  func_0x0077e280(param_4);
  func_0x00791040(puVar5);
  ppuVar11 = ppuVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = ppuVar4;
    func_0x00789f00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fcc0(puVar5);
    _objc_release(ppuVar11);
  }
  ppuVar11 = ppuVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 != (undefined **)0x0) {
    func_0x00788b40(ppuVar11);
    func_0x0078ff60(puVar5);
  }
  func_0x00780ec0(param_4);
  func_0x0078bbc0(param_4);
  func_0x0078ffa0(puVar5);
  func_0x0077fe20(param_4);
  ppuVar12 = param_4;
  func_0x00780ec0();
  ppuVar14 = param_4;
  func_0x0078bbc0();
  ppuVar15 = param_4;
  func_0x00782d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar6);
  ppuVar16 = ppuVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar16 == (undefined **)0x0) {
    iVar19 = (int)ppuVar12 - (int)ppuVar14;
  }
  else if (ppuVar15 == (undefined **)0x0) {
    ppuVar12 = ppuVar6;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar12 == (undefined **)0x0) {
      iVar19 = -1;
    }
    else {
      ppuVar12 = ppuVar6;
      func_0x00789f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar12;
      func_0x007930e0();
      iVar19 = (int)ppuVar14;
      _objc_release(ppuVar12);
    }
  }
  else {
    iVar19 = -1;
  }
  _objc_release(ppuVar16);
  _objc_release(ppuVar6);
  _objc_release(ppuVar15);
  if (iVar19 != -1) {
    func_0x0078ffc0(puVar5);
  }
  ppuVar14 = ppuVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR____CFConstantStringClassReference_00a2a360;
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar12 = ppuVar14;
  }
  _objc_retain(ppuVar12);
  _objc_release(ppuVar14);
  ppuVar15 = ppuVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR____CFConstantStringClassReference_00a2a360;
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar14 = ppuVar15;
  }
  _objc_retain(ppuVar14);
  _objc_release(ppuVar15);
  puVar18 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  func_0x0078ff80(puVar5);
  _objc_release(puVar18);
  ppuVar14 = param_4;
  func_0x00792c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar14 = param_4;
    func_0x00792c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790bc0(puVar5);
    _objc_release(ppuVar14);
  }
  ppuVar14 = param_4;
  func_0x0078b880();
  if (0 < (long)ppuVar14) {
    func_0x0078b880(param_4);
    func_0x00790c80(puVar5);
  }
  ppuVar14 = param_4;
  func_0x00780ca0();
  if (ppuVar14 != (undefined **)0x0) {
    func_0x00780ca0(param_4);
    func_0x0078d6a0(puVar5);
  }
  func_0x00788ac0(lRam0000000000b629f8);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar13);
  _objc_release(ppuVar17);
  _objc_release(ppuVar8);
  _objc_release(ppuVar9);
  _objc_release(ppuVar10);
  _objc_release(ppuVar7);
  _objc_release(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
LAB_0058b620:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 0058b730; end: 0058b7df;  */

uint FUN_0058b730(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_00ac2f90;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain();
    _objc_opt_class(puVar1);
    lVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    _objc_release(param_1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 0058b7e0; end: 0058b857;  */

void FUN_0058b7e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  func_0x00791360(PTR__OBJC_CLASS___NSSet_00ac2a68,param_2,
                  &PTR__OBJC_CLASS___NSConstantArray_00a59538);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b62a08;
  puRam0000000000b62a08 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058b858; end: 0058b98b; -[SCExtensionAPIRequestInfo initWithPath:taskId:startTime:startDate:requestSize:] */

undefined1 *
FUN_0058b858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_00ac3ef0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0058b98c; end: 0058b993; -[SCExtensionAPIRequestInfo addUserInfoEntriesFromDictionary:] */

void FUN_0058b98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_addEntriesFromDictionary__00aba630);
  return;
}



/* Entry: 0058b994; end: 0058b9ab; -[SCExtensionAPIRequestInfo userInfo] */

void FUN_0058b994(long param_1)

{
  func_0x00780e20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0058b9ac; end: 0058b9b3; -[SCExtensionAPIRequestInfo path] */

undefined8 FUN_0058b9ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0058b9b4; end: 0058b9bb; -[SCExtensionAPIRequestInfo requestTypeStr] */

undefined8 FUN_0058b9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0058b9bc; end: 0058b9c3; -[SCExtensionAPIRequestInfo taskId] */

undefined8 FUN_0058b9bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0058b9c4; end: 0058b9cb; -[SCExtensionAPIRequestInfo startTime] */

undefined8 FUN_0058b9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 0058b9cc; end: 0058b9d3; -[SCExtensionAPIRequestInfo startDate] */

undefined8 FUN_0058b9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 0058b9d4; end: 0058b9db; -[SCExtensionAPIRequestInfo requestSize] */

undefined8 FUN_0058b9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 0058b9dc; end: 0058b9e3; -[SCExtensionAPIRequestInfo completionQueue] */

undefined8 FUN_0058b9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 0058b9e4; end: 0058b9eb; -[SCExtensionAPIRequestInfo responseData] */

undefined8 FUN_0058b9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 0058b9ec; end: 0058ba1b; -[SCExtensionAPIRequestInfo setResponseData:] */

void FUN_0058b9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058ba1c; end: 0058ba23; -[SCExtensionAPIRequestInfo request] */

undefined8 FUN_0058ba1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 0058ba24; end: 0058ba53; -[SCExtensionAPIRequestInfo setRequest:] */

void FUN_0058ba24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058ba54; end: 0058ba5b; -[SCExtensionAPIRequestInfo response] */

undefined8 FUN_0058ba54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 0058ba5c; end: 0058ba8b; -[SCExtensionAPIRequestInfo setResponse:] */

void FUN_0058ba5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058ba8c; end: 0058ba93; -[SCExtensionAPIRequestInfo error] */

undefined8 FUN_0058ba8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 0058ba94; end: 0058bac3; -[SCExtensionAPIRequestInfo setError:] */

void FUN_0058ba94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058bac4; end: 0058bacb; -[SCExtensionAPIRequestInfo location] */

undefined8 FUN_0058bac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 0058bacc; end: 0058bafb; -[SCExtensionAPIRequestInfo setLocation:] */

void FUN_0058bacc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058bafc; end: 0058bb03; -[SCExtensionAPIRequestInfo sessionTaskStartDate] */

undefined8 FUN_0058bafc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 0058bb04; end: 0058bb33; -[SCExtensionAPIRequestInfo setSessionTaskStartDate:] */

void FUN_0058bb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058bb34; end: 0058bb3b; -[SCExtensionAPIRequestInfo sessionTaskEndDate] */

undefined8 FUN_0058bb34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 0058bb3c; end: 0058bb6b; -[SCExtensionAPIRequestInfo setSessionTaskEndDate:] */

void FUN_0058bb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}


