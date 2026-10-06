/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a352f8; end: 104a35547;  */

void FUN_104a352f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a1600;
  puRam00000001136a1600 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8458,puVar3);
  func_0x00010c1d0640(puRam00000001136a1600,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110db9618);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8778,puVar3);
  func_0x00010c1d0640(puRam00000001136a1600,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110db9558);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8678,puVar3);
  func_0x00010c1d0640(puRam00000001136a1600,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110e18ef8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8698,puVar3,
                      &PTR___NSConcreteGlobalBlock_1107bf360);
  func_0x00010c1d0640(puRam00000001136a1600,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110e18f18);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da86b8,puVar3);
  func_0x00010c1d0640(puRam00000001136a1600,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8658);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da86d8,puVar3);
  func_0x00010c1d0640(puRam00000001136a1600,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da24f8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8718,puVar3);
  func_0x00010c1d0640(puRam00000001136a1600,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110db95d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a35548; end: 104a355c7;  */

void FUN_104a35548(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = param_2;
    _objc_retain(param_2);
  }
  else {
    puVar2 = param_2;
    func_0x00010c0b4ca0(param_2);
    func_0x00010bf65600((double)(long)puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a355c8; end: 104a3566b; -[OIDAuthorizationResponse init] */

undefined1 * FUN_104a355c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined *puStack_88;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_initWithRequest_parameters__1125ed520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110da8438;
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  ppuVar4 = &puStack_90;
  _objc_retain();
  _objc_retain(puVar2);
  puStack_88 = PTR_PTR_1126e3540;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined ***)((long)ppuVar4 + 8) = ppuVar5;
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126ae338;
    puVar6 = (undefined1 *)ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bfac720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)((long)ppuVar4 + 0x48);
    *(undefined **)((long)ppuVar4 + 0x48) = puVar1;
    _objc_release(uVar7);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  return (undefined1 *)ppuVar4;
}



/* Entry: 104a3566c; end: 104a3575f; -[OIDAuthorizationResponse initWithRequest:parameters:] */

undefined1 *
FUN_104a3566c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain();
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3540;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae338;
    puVar2 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bfac720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a35760; end: 104a35763; -[OIDAuthorizationResponse copyWithZone:] */

void FUN_104a35760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a35764; end: 104a3576b; +[OIDAuthorizationResponse supportsSecureCoding] */

undefined8 FUN_104a35764(void)

{
  return 1;
}



/* Entry: 104a3576c; end: 104a35883; -[OIDAuthorizationResponse initWithCoder:] */

long FUN_104a3576c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae370;
  _objc_opt_class(PTR_PTR_1126ae370);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110deac78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ec80(param_1,param_2,uVar2,PTR____NSDictionary0__struct_11034ab58);
  puVar1 = PTR_PTR_1126ae338;
  if (param_1 != 0) {
    lVar3 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bfac720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf67320(puVar1,param_2,param_3,lVar3,param_1);
    _objc_release(lVar3);
    puVar1 = PTR_PTR_1126ae338;
    func_0x00010bdc19e0(PTR_PTR_1126ae338);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da83f8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a35884; end: 104a3591b; -[OIDAuthorizationResponse encodeWithCoder:] */

void FUN_104a35884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bf93020();
  puVar1 = PTR_PTR_1126ae338;
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bfac720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf932e0(puVar1,param_2,param_3,lVar2,param_1);
  _objc_release(lVar2);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a3591c; end: 104a35a0f; -[OIDAuthorizationResponse description] */

void FUN_104a3591c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae358;
  func_0x00010c124920(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae358;
  func_0x00010c124920(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da8798);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a35a10; end: 104a35a1b; -[OIDAuthorizationResponse tokenExchangeRequest] */

void FUN_104a35a10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_tokenExchangeRequestWithAddition_11267a640,0,0);
  return;
}



/* Entry: 104a35a1c; end: 104a35a23; -[OIDAuthorizationResponse tokenExchangeRequestWithAdditionalParameters:] */

void FUN_104a35a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_tokenExchangeRequestWithAddition_11267a640,param_3,0);
  return;
}



/* Entry: 104a35a24; end: 104a35b8f; -[OIDAuthorizationResponse tokenExchangeRequestWithAdditionalParameters:additionalHeaders:] */

void FUN_104a35a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain();
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110da8758,
                        &PTR____CFConstantStringClassReference_110da8758);
  }
  puVar2 = PTR_PTR_1126ae368;
  _objc_alloc(PTR_PTR_1126ae368);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c124b40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3d4a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3ef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0018a0(puVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110e18e78,uVar1,
                      uVar4,uVar5,uVar6,0,0,uVar7,param_3,param_4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a35b90; end: 104a35b97; -[OIDAuthorizationResponse request] */

undefined8 FUN_104a35b90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a35b98; end: 104a35b9f; -[OIDAuthorizationResponse authorizationCode] */

undefined8 FUN_104a35b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a35ba0; end: 104a35ba7; -[OIDAuthorizationResponse state] */

undefined8 FUN_104a35ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a35ba8; end: 104a35baf; -[OIDAuthorizationResponse accessToken] */

undefined8 FUN_104a35ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a35bb0; end: 104a35bb7; -[OIDAuthorizationResponse accessTokenExpirationDate] */

undefined8 FUN_104a35bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a35bb8; end: 104a35bbf; -[OIDAuthorizationResponse tokenType] */

undefined8 FUN_104a35bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a35bc0; end: 104a35bc7; -[OIDAuthorizationResponse idToken] */

undefined8 FUN_104a35bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a35bc8; end: 104a35bcf; -[OIDAuthorizationResponse scope] */

undefined8 FUN_104a35bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a35bd0; end: 104a35bd7; -[OIDAuthorizationResponse additionalParameters] */

undefined8 FUN_104a35bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a35bd8; end: 104a35c5b; -[OIDAuthorizationResponse .cxx_destruct] */

void FUN_104a35bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104a35c5c; end: 104a35c6f;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a35c5c(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107bf340;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107bf340);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107bf340);
  func_0x000107c61180();
  (*pcVar3)(0x1136a1608,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a35c70; end: 104a35d13; -[OIDServiceConfiguration init] */

void FUN_104a35c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_initWithAuthorizationEndpoint_to_1125db060;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bff5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104a35d14; end: 104a35d27; -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:registrationEndpoint:] */

void FUN_104a35d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAuthorizationEndpoint_to_1125db068,param_3,param_4,0,param_5,0,0)
  ;
  return;
}



/* Entry: 104a35d28; end: 104a35d37; -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:] */

void FUN_104a35d28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAuthorizationEndpoint_to_1125db068);
  return;
}



/* Entry: 104a35d38; end: 104a35d43; -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:registrationEndpoint:] */

void FUN_104a35d38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAuthorizationEndpoint_to_1125db068);
  return;
}



/* Entry: 104a35d44; end: 104a35d4b; -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:registrationEndpoint:endSessionEndpoint:] */

void FUN_104a35d44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAuthorizationEndpoint_to_1125db068);
  return;
}



/* Entry: 104a35d4c; end: 104a35e43; -[OIDServiceConfiguration initWithDiscoveryDocument:] */

undefined8 FUN_104a35d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf10ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c273000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c083fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c127a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf95420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5a80(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,param_3);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104a35e44; end: 104a35e47; -[OIDServiceConfiguration copyWithZone:] */

void FUN_104a35e44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a35e48; end: 104a35e4f; +[OIDServiceConfiguration supportsSecureCoding] */

undefined8 FUN_104a35e48(void)

{
  return 1;
}



/* Entry: 104a35e50; end: 104a360e3; -[OIDServiceConfiguration initWithCoder:] */

undefined * FUN_104a35e50(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da87b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da87d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar4 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da87f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar5 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8818);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar7 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar6,&PTR____CFConstantStringClassReference_110da8838);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar8 = (undefined *)0x0;
  if ((puVar2 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
    puVar6 = PTR_PTR_1126ae378;
    _objc_opt_class();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_98 = puVar6;
    _objc_opt_class();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar8;
    _objc_opt_class();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_88 = puVar6;
    _objc_opt_class();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar8;
    _objc_opt_class();
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    puStack_78 = puVar6;
    _objc_opt_class();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar8 = param_3;
    func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8858);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bff5a80(param_1,param_2,puVar2,puVar3,puVar4,puVar5,puVar7,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar1);
    puVar8 = param_1;
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010bf93020();
  func_0x00010bf93020(puVar6,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110da87d8);
  func_0x00010bf93020(puVar6,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da87f8);
  func_0x00010bf93020(puVar6,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110da8818);
  func_0x00010bf93020(puVar6,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110da8858);
  func_0x00010bf93020(puVar6,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110da8838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return puVar6;
}



/* Entry: 104a360e4; end: 104a3618f; -[OIDServiceConfiguration encodeWithCoder:] */

void FUN_104a360e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110da87d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da87f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110da8818);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110da8858);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110da8838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a36190; end: 104a361d3; -[OIDServiceConfiguration description] */

void FUN_104a36190(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da8878);
  return;
}



/* Entry: 104a361d4; end: 104a361db; -[OIDServiceConfiguration authorizationEndpoint] */

undefined8 FUN_104a361d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a361dc; end: 104a361e3; -[OIDServiceConfiguration issuer] */

undefined8 FUN_104a361dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a361e4; end: 104a361eb; -[OIDServiceConfiguration registrationEndpoint] */

undefined8 FUN_104a361e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a361ec; end: 104a361f3; -[OIDServiceConfiguration endSessionEndpoint] */

undefined8 FUN_104a361ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a361f4; end: 104a361fb; -[OIDServiceConfiguration discoveryDocument] */

undefined8 FUN_104a361f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a361fc; end: 104a3625b; -[OIDServiceConfiguration .cxx_destruct] */

void FUN_104a361fc(long param_1)

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



/* Entry: 104a3625c; end: 104a362ff; -[OIDAuthStatePendingAction initWithAction:andDispatchQueue:] */

undefined1 *
FUN_104a3625c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain();
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x10),param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104a36300; end: 104a36307; -[OIDAuthStatePendingAction action] */

undefined8 FUN_104a36300(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a36308; end: 104a3630f; -[OIDAuthStatePendingAction dispatchQueue] */

undefined8 FUN_104a36308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a36310; end: 104a3633f; -[OIDAuthStatePendingAction .cxx_destruct] */

void FUN_104a36310(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a36340; end: 104a36413; +[OIDAuthState authStateByPresentingAuthorizationRequest:externalUserAgent:callback:] */

void FUN_104a36340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR_PTR_1126ae380;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104a36414;
  puStack_48 = &UNK_1107bf3e8;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c10b340(puVar1,param_2,param_3,param_4,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a36414; end: 104a36617;  */

void FUN_104a36414(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_2 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13bd20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      puVar5 = PTR_PTR_1126ae388;
      _objc_alloc(PTR_PTR_1126ae388);
      func_0x00010bff5b00();
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar5,param_3);
    }
    else {
      puVar5 = param_2;
      func_0x00010c273020(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126ae380;
      puVar3 = param_2;
      _objc_retain();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain();
      func_0x00010c0f90e0(puVar1);
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104a36618; end: 104a366bb; -[OIDAuthState init] */

void FUN_104a36618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_initWithAuthorizationResponse_to_1125db090;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bff5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104a366bc; end: 104a366c3; -[OIDAuthState initWithAuthorizationResponse:] */

void FUN_104a366bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAuthorizationResponse_to_1125db090,param_3,0);
  return;
}



/* Entry: 104a366c4; end: 104a366cb; -[OIDAuthState initWithAuthorizationResponse:tokenResponse:] */

void FUN_104a366c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAuthorizationResponse_to_1125db098,param_3,param_4,0);
  return;
}



/* Entry: 104a366cc; end: 104a366db; -[OIDAuthState initWithRegistrationResponse:] */

void FUN_104a366cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAuthorizationResponse_to_1125db098,0,0,param_3);
  return;
}



/* Entry: 104a366dc; end: 104a367c7; -[OIDAuthState initWithAuthorizationResponse:tokenResponse:registrationResponse:] */

undefined1 *
FUN_104a366dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_38 = PTR_PTR_1126e3558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    if (param_5 != 0) {
      func_0x00010c28cc20(puVar1);
    }
    if (param_3 != 0) {
      func_0x00010c28c4a0(puVar1);
    }
    if (param_4 != 0) {
      func_0x00010c28cec0(puVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a367c8; end: 104a36957; -[OIDAuthState description] */

void FUN_104a367c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06cac0();
  puVar2 = PTR_PTR_1126ae358;
  func_0x00010c124920(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae358;
  lVar3 = param_1;
  func_0x00010beecce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124920(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010beecd40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae358;
  func_0x00010bfe5e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124920(puVar6,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da8998);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104a36958; end: 104a3695f; +[OIDAuthState supportsSecureCoding] */

undefined8 FUN_104a36958(void)

{
  return 1;
}



/* Entry: 104a36960; end: 104a36ad7; -[OIDAuthState initWithCoder:] */

long FUN_104a36960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae390;
  _objc_opt_class(PTR_PTR_1126ae390);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8938);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae398;
  _objc_opt_class(PTR_PTR_1126ae398);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8958);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar3);
  func_0x00010bff5b20(param_1,param_2,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = param_3;
    func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8978);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110db95d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da88f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0(param_3,param_2,&PTR____CFConstantStringClassReference_110da8918);
    *(char *)(param_1 + 0x18) = (char)uVar2;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a36ad8; end: 104a36bd7; -[OIDAuthState encodeWithCoder:] */

void FUN_104a36ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110da8958);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf3ec40(uVar2);
    func_0x00010bf99240(puVar3,param_2,lVar1,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf93020(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110da8978);
    _objc_release(puVar3);
  }
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110db95d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110da88f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da8918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a36bd8; end: 104a36c17; -[OIDAuthState accessToken] */

void FUN_104a36bd8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    func_0x00010beecce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a36c18; end: 104a36c57; -[OIDAuthState tokenType] */

void FUN_104a36c18(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    func_0x00010c2732e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a36c58; end: 104a36c97; -[OIDAuthState accessTokenExpirationDate] */

void FUN_104a36c58(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    func_0x00010beecd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a36c98; end: 104a36cd7; -[OIDAuthState idToken] */

void FUN_104a36c98(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    func_0x00010bfe5e00(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a36cd8; end: 104a36d8f; -[OIDAuthState isAuthorized] */

bool FUN_104a36cd8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010bf10ec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010beecce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_1;
      func_0x00010bfe5e00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x00010c125640(param_1);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = param_1 != 0;
        _objc_release();
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 104a36d90; end: 104a36e0f; -[OIDAuthState updateWithRegistrationResponse:] */

void FUN_104a36d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_storeStrong(param_1 + 0x40,param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf73670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didChangeState_1125ba740);
  return;
}



/* Entry: 104a36e10; end: 104a36f4f; -[OIDAuthState updateWithAuthorizationResponse:error:] */

void FUN_104a36e10(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  ppuVar2 = param_4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 == &PTR____CFConstantStringClassReference_110da8dd8) {
    func_0x00010c28c480(param_1);
  }
  else if (lVar1 != 0) {
    _objc_storeStrong(param_1 + 0x30,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar3);
    lVar4 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar6 = lVar1;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar5;
      _objc_release(uVar3);
    }
    else {
      lVar5 = lVar1;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar5;
    }
    _objc_release(lVar6);
    _objc_release(lVar4);
    func_0x00010bf73660(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a36f50; end: 104a3709f; -[OIDAuthState updateWithTokenResponse:error:] */

void FUN_104a36f50(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  if (*(long *)(param_1 + 0x48) != 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110da89b8);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar2);
  }
  ppuVar3 = param_4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar3 == &PTR____CFConstantStringClassReference_110da8db8) {
    func_0x00010c28c480(param_1);
  }
  else if (lVar1 != 0) {
    _objc_storeStrong(param_1 + 0x38,param_3);
    lVar4 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = lVar1;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar4;
      _objc_release(uVar2);
    }
    lVar4 = lVar1;
    func_0x00010c125640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = lVar1;
      func_0x00010c125640();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar4;
      _objc_release(uVar2);
    }
    func_0x00010bf73660(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a370a0; end: 104a3710b; -[OIDAuthState updateWithAuthorizationError:] */

void FUN_104a370a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeStrong(param_1 + 0x48,param_3);
  _objc_retain(param_3);
  func_0x00010bf73660(param_1);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf109e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a3710c; end: 104a37113; -[OIDAuthState tokenRefreshRequest] */

void FUN_104a3710c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2731b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tokenRefreshRequestWithAdditiona_11267a690,0)
  ;
  return;
}



/* Entry: 104a37114; end: 104a37277; -[OIDAuthState tokenRefreshRequestWithAdditionalParameters:] */

void FUN_104a37114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c11f040(PTR_PTR_1126ae328,param_2,&PTR____CFConstantStringClassReference_110da88d8);
  }
  puVar1 = PTR_PTR_1126ae368;
  _objc_alloc(PTR_PTR_1126ae368);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf3cf20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf3d4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0018a0(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110e18ed8,0,0,
                      uVar5,uVar7,0,*(undefined8 *)(param_1 + 0x20),0,param_3,0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a37278; end: 104a373f3; -[OIDAuthState tokenRefreshRequestWithAdditionalParameters:additionalHeaders:] */

void FUN_104a37278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c11f040(PTR_PTR_1126ae328,param_2,&PTR____CFConstantStringClassReference_110da88d8);
  }
  puVar1 = PTR_PTR_1126ae368;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf3cf20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf3d4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0018a0(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110e18ed8,0,0,
                      uVar5,uVar7,0,*(undefined8 *)(param_1 + 0x20),0,param_3,param_4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a373f4; end: 104a37557; -[OIDAuthState tokenRefreshRequestWithAdditionalHeaders:] */

void FUN_104a373f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c11f040(PTR_PTR_1126ae328,param_2,&PTR____CFConstantStringClassReference_110da88d8);
  }
  puVar1 = PTR_PTR_1126ae368;
  _objc_alloc(PTR_PTR_1126ae368);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf3cf20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c134680(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf3d4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0018a0(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110e18ed8,0,0,
                      uVar5,uVar7,0,*(undefined8 *)(param_1 + 0x20),0,0,param_3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a37558; end: 104a3758b; -[OIDAuthState didChangeState] */

void FUN_104a37558(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a3758c; end: 104a37597; -[OIDAuthState setNeedsTokenRefresh] */

void FUN_104a3758c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 104a37598; end: 104a3759f; -[OIDAuthState performActionWithFreshTokens:] */

void FUN_104a37598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performActionWithFreshTokens_add_11261ba78,param_3,0);
  return;
}



/* Entry: 104a375a0; end: 104a375ab; -[OIDAuthState performActionWithFreshTokens:additionalRefreshParameters:] */

void FUN_104a375a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performActionWithFreshTokens_add_11261ba80,param_3,param_4,
             PTR___dispatch_main_q_11034be20);
  return;
}



/* Entry: 104a375ac; end: 104a3780f; -[OIDAuthState performActionWithFreshTokens:additionalRefreshParameters:dispatchQueue:] */

void FUN_104a375ac(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010c081320();
  if ((int)puVar1 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar1 = PTR_PTR_1126ae328;
      func_0x00010bf991e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104a37880;
      puStack_88 = &UNK_11084aaa8;
      puVar2 = param_3;
      _objc_retain();
      puStack_80 = puVar1;
      puStack_78 = puVar2;
      _objc_retain(puVar1);
      func_0x00010007380c(param_5,&puStack_a0);
      _objc_release(puStack_80);
      puVar2 = puStack_78;
    }
    else {
      puVar1 = PTR_PTR_1126ae3a0;
      _objc_alloc(PTR_PTR_1126ae3a0);
      func_0x00010bfeffc0();
      puVar2 = *(undefined **)(param_1 + 0x10);
      _objc_retain(puVar2);
      _objc_sync_enter();
      if (*(long *)(param_1 + 8) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a100();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 8);
        *(undefined **)(param_1 + 8) = puVar3;
        _objc_release(uVar4);
        _objc_sync_exit(puVar2);
        _objc_release(puVar2);
        func_0x00010c2731a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f90e0(PTR_PTR_1126ae380);
        puVar2 = param_1;
      }
      else {
        func_0x00010befa120();
        _objc_sync_exit(puVar2);
      }
    }
    _objc_release(puVar2);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104a37810;
    puStack_58 = &UNK_11084aaa8;
    puVar1 = param_3;
    _objc_retain();
    puStack_50 = param_1;
    puStack_48 = puVar1;
    func_0x00010007380c(param_5,&puStack_70);
    puVar1 = puStack_48;
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a37810; end: 104a3787f;  */

void FUN_104a37810(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010beecce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104a37880; end: 104a37897;  */

void FUN_104a37880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a37894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a37898; end: 104a37b47;  */

void FUN_104a37898(long param_1,long param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
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
  _objc_retain();
  _objc_retain();
  if (param_2 == 0) {
    ppuVar5 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar5 == &PTR____CFConstantStringClassReference_110da8db8) {
      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
      func_0x00010c28c480(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar6 = *(long *)(param_1 + 0x20) + 0x58;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      _objc_release(uVar6);
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0x20) + 0x58;
        _objc_loadWeakRetained(lVar8);
        func_0x00010bf10a00();
        _objc_release(lVar8);
      }
    }
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
    func_0x00010c28cec0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain();
  _objc_sync_enter();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  _objc_release(uVar4);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain();
  lVar8 = lVar3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar8 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        uVar2 = uVar4;
        func_0x00010bf851e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = puVar1;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_104a37b48;
        puStack_160 = &UNK_110848ba8;
        uStack_150 = *(undefined8 *)(param_1 + 0x20);
        ppuVar5 = param_3;
        uStack_158 = uVar4;
        _objc_retain();
        ppuStack_148 = ppuVar5;
        func_0x00010007380c(uVar2,&puStack_178);
        _objc_release(uVar2);
        _objc_release(ppuStack_148);
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = lVar3;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_2 + 0x20);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010beecce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfe5e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(lVar8,uVar2,uVar4,*(undefined8 *)(param_2 + 0x30));
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 104a37b48; end: 104a37bd3;  */

void FUN_104a37b48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010beecce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a37bd4; end: 104a37c67; -[OIDAuthState isTokenFresh] */

bool FUN_104a37bd4(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    lVar2 = param_2;
    func_0x00010beecd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010beecce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_2 != 0;
    }
    else {
      func_0x00010beecd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      bVar1 = 60.0 < param_1;
    }
    _objc_release(param_2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104a37c68; end: 104a37c6f; -[OIDAuthState refreshToken] */

undefined8 FUN_104a37c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a37c70; end: 104a37c77; -[OIDAuthState scope] */

undefined8 FUN_104a37c70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a37c78; end: 104a37c7f; -[OIDAuthState lastAuthorizationResponse] */

undefined8 FUN_104a37c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a37c80; end: 104a37c87; -[OIDAuthState lastTokenResponse] */

undefined8 FUN_104a37c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a37c88; end: 104a37c8f; -[OIDAuthState lastRegistrationResponse] */

undefined8 FUN_104a37c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a37c90; end: 104a37c97; -[OIDAuthState authorizationError] */

undefined8 FUN_104a37c90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a37c98; end: 104a37caf; -[OIDAuthState stateChangeDelegate] */

void FUN_104a37c98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a37cb0; end: 104a37cbb; -[OIDAuthState setStateChangeDelegate:] */

void FUN_104a37cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 104a37cbc; end: 104a37cd3; -[OIDAuthState errorDelegate] */

void FUN_104a37cbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a37cd4; end: 104a37cdf; -[OIDAuthState setErrorDelegate:] */

void FUN_104a37cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 104a37ce0; end: 104a37d67; -[OIDAuthState .cxx_destruct] */

void FUN_104a37ce0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a37d68; end: 104a37e0b; -[OIDEndSessionRequest init] */

undefined1 * FUN_104a37d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_initWithConfiguration_idTokenHin_112525630;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110da8438;
  uVar6 = 0;
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  ppuVar4 = &puStack_a0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(in_x6);
  puStack_98 = PTR_PTR_1126e3560;
  puStack_a0 = puVar1;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined ***)((long)ppuVar4 + 8) = ppuVar5;
    _objc_release(uVar7);
    puVar1 = puVar2;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined **)((long)ppuVar4 + 0x18) = puVar1;
    _objc_release(uVar7);
    uVar7 = uVar6;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined8 *)((long)ppuVar4 + 0x10) = uVar7;
    _objc_release(uVar8);
    uVar7 = in_x5;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x20);
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar7;
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    uVar7 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined **)((long)ppuVar4 + 0x28) = puVar1;
    _objc_release(uVar7);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  return (undefined1 *)ppuVar4;
}



/* Entry: 104a37e0c; end: 104a37f6b; -[OIDEndSessionRequest initWithConfiguration:idTokenHint:postLogoutRedirectURL:state:additionalParameters:] */

undefined1 *
FUN_104a37e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e3560;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a37f6c; end: 104a38037; -[OIDEndSessionRequest initWithConfiguration:idTokenHint:postLogoutRedirectURL:additionalParameters:] */

undefined8
FUN_104a37f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bfc0300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001900(param_1,param_2,param_3,param_4,param_5,uVar1,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104a38038; end: 104a3803b; -[OIDEndSessionRequest copyWithZone:] */

void FUN_104a38038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a3803c; end: 104a38043; +[OIDEndSessionRequest supportsSecureCoding] */

undefined8 FUN_104a3803c(void)

{
  return 1;
}



/* Entry: 104a38044; end: 104a38247; -[OIDEndSessionRequest initWithCoder:] */

long FUN_104a38044(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126ae348;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(puVar1);
  lVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110df9f78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8a18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  lVar4 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da89f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar5 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110db9618);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_68 = puVar6;
  _objc_opt_class();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar8 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da83f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar9 = lVar2;
  func_0x00010c001900(param_1,param_2,lVar2,lVar3,lVar4,lVar5,lVar8);
  _objc_release(lVar8);
  _objc_release(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  func_0x00010bf93020();
  func_0x00010bf93020(lVar9,param_2,*(undefined8 *)(lVar2 + 0x18),
                      &PTR____CFConstantStringClassReference_110da8a18);
  func_0x00010bf93020(lVar9,param_2,*(undefined8 *)(lVar2 + 0x10),
                      &PTR____CFConstantStringClassReference_110da89f8);
  func_0x00010bf93020(lVar9,param_2,*(undefined8 *)(lVar2 + 0x20),
                      &PTR____CFConstantStringClassReference_110db9618);
  func_0x00010bf93020(lVar9,param_2,*(undefined8 *)(lVar2 + 0x28),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return lVar9;
}



/* Entry: 104a38248; end: 104a382df; -[OIDEndSessionRequest encodeWithCoder:] */

void FUN_104a38248(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da8a18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110da89f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110db9618);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a382e0; end: 104a38373; -[OIDEndSessionRequest description] */

void FUN_104a382e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8a38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a38374; end: 104a38383; +[OIDEndSessionRequest generateState] */

void FUN_104a38374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae358,PTR_s_randomURLSafeStringWithSize__1126256a8,0x20);
  return;
}



/* Entry: 104a38384; end: 104a38387; -[OIDEndSessionRequest externalUserAgentRequestURL] */

void FUN_104a38384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_endSessionRequestURL_1125c2eb8);
  return;
}



/* Entry: 104a38388; end: 104a3838f; -[OIDEndSessionRequest redirectScheme] */

void FUN_104a38388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_scheme_112631b48);
  return;
}


