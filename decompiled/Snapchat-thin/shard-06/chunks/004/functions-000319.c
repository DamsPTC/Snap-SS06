/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10493cf4c; end: 10493cfb3; +[FBSDKTypeUtility dictionary:enumerateKeysAndObjectsUsingBlock:] */

void FUN_10493cf4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf71fc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010bf97ce0(param_1,param_2,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10493cfb4; end: 10493d01b; +[FBSDKTypeUtility numberValue:] */

void FUN_10493cfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  func_0x00010be65840(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10493d01c; end: 10493d097; +[FBSDKTypeUtility integerValue:] */

ulong FUN_10493d01c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_10493d080;
    }
  }
  uVar2 = param_3;
  func_0x00010c067fc0(param_3);
LAB_10493d080:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10493d098; end: 10493d117; +[FBSDKTypeUtility doubleValue:] */

undefined8 FUN_10493d098(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_4;
  func_0x00010c075f00(param_4,param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_4;
    func_0x00010c075f00(param_4,param_3,puVar1);
    uVar3 = 0;
    if ((int)uVar2 == 0) goto LAB_10493d0fc;
  }
  func_0x00010bf885a0(param_4);
  uVar3 = param_1;
LAB_10493d0fc:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 10493d118; end: 10493d17f; +[FBSDKTypeUtility stringValueOrNil:] */

void FUN_10493d118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  func_0x00010be65840(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10493d180; end: 10493d1db; +[FBSDKTypeUtility objectValue:] */

undefined8 FUN_10493d180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain();
  func_0x00010bf39c40(puVar2);
  uVar3 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  uVar1 = 0;
  if ((int)uVar3 == 0) {
    uVar1 = param_3;
  }
  _objc_retainAutoreleaseReturnValue(uVar1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10493d1dc; end: 10493d29b; +[FBSDKTypeUtility coercedToStringValue:] */

void FUN_10493d1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  uVar3 = param_3;
  if ((int)uVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSURL_1126ae598);
      uVar2 = param_3;
      func_0x00010c075f00(param_3,param_2,puVar1);
      if ((int)uVar2 == 0) {
        uVar3 = 0;
      }
      else {
        func_0x00010beec820(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c25d700(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10493d29c; end: 10493d31b; +[FBSDKTypeUtility timeIntervalValue:] */

undefined8 FUN_10493d29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_4;
  func_0x00010c075f00(param_4,param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_4;
    func_0x00010c075f00(param_4,param_3,puVar1);
    uVar3 = 0;
    if ((int)uVar2 == 0) goto LAB_10493d300;
  }
  func_0x00010bf885a0(param_4);
  uVar3 = param_1;
LAB_10493d300:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 10493d31c; end: 10493d3a3; +[FBSDKTypeUtility unsignedIntegerValue:] */

ulong FUN_10493d31c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain();
  func_0x00010bf39c40(puVar1);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    func_0x00010c067fe0(param_1,param_2,param_3);
    _objc_release(param_3);
    param_1 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  else {
    param_1 = param_3;
    func_0x00010c2827c0(param_3);
    _objc_release(param_3);
  }
  return param_1;
}



/* Entry: 10493d3a4; end: 10493d437; +[FBSDKTypeUtility coercedToURLValue:] */

void FUN_10493d3a4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar1 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  if ((int)puVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar1 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)puVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = param_3;
    _objc_retain(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493d438; end: 10493d50f; +[FBSDKTypeUtility dataWithJSONObject:options:error:] */

void FUN_10493d438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,param_4,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10493d510; end: 10493d603; +[FBSDKTypeUtility JSONObjectWithData:options:error:] */

void FUN_10493d510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar1 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,param_4,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493d604; end: 10493d64f; +[FBSDKTypeUtility _objectValue:ofClass:] */

undefined8 FUN_10493d604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_3;
  func_0x00010c075f00();
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retainAutoreleaseReturnValue(uVar1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10493d650; end: 10493d6e7; -[FBSDKURLSession initWithDelegate:delegateQueue:] */

undefined1 *
FUN_10493d650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e32a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar1);
    func_0x00010c18b6c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10493d6e8; end: 10493d873; -[FBSDKURLSession executeURLRequest:completionHandler:] */

void FUN_10493d6e8(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c296600();
  if ((uVar1 & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10493d800;
    puStack_50 = &UNK_11084a9e8;
    puVar2 = param_3;
    _objc_retain();
    uVar3 = param_4;
    puStack_48 = puVar2;
    uStack_40 = param_1;
    _objc_retain();
    uStack_38 = uVar3;
    func_0x00010c289d00(param_1,param_2,&puStack_68);
    _objc_release(uStack_38);
    puVar2 = puStack_48;
  }
  else {
    puVar2 = PTR_PTR_1126add98;
    _objc_alloc(PTR_PTR_1126add98);
    func_0x00010c15fac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ec40(puVar2,param_2,param_3,param_1,param_4);
    _objc_release(param_1);
    func_0x00010c24d960(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10493d874; end: 10493d937; -[FBSDKURLSession updateSessionWithBlock:] */

void FUN_10493d874(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c296600();
  puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
    func_0x00010bf6a380(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1606c0(puVar4,param_2,puVar2,lVar3,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd860(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10493d938; end: 10493d977; -[FBSDKURLSession invalidateAndCancel] */

void FUN_10493d938(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fd870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSession__11265d040,0);
  return;
}



/* Entry: 10493d978; end: 10493d9ab; -[FBSDKURLSession valid] */

bool FUN_10493d978(long param_1)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10493d9ac; end: 10493d9b7; -[FBSDKURLSession session] */

void FUN_10493d9ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10493d9b8; end: 10493d9bf; -[FBSDKURLSession setSession:] */

void FUN_10493d9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10493d9c0; end: 10493d9d7; -[FBSDKURLSession delegate] */

void FUN_10493d9c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10493d9d8; end: 10493d9e3; -[FBSDKURLSession setDelegate:] */

void FUN_10493d9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10493d9e4; end: 10493d9eb; -[FBSDKURLSession delegateQueue] */

undefined8 FUN_10493d9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10493d9ec; end: 10493d9f7; -[FBSDKURLSession setDelegateQueue:] */

void FUN_10493d9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10493d9f8; end: 10493da2f; -[FBSDKURLSession .cxx_destruct] */

void FUN_10493d9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10493da30; end: 10493da9b; -[FBSDKURLSessionTask init] */

undefined1 * FUN_10493da30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e32b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10493da9c; end: 10493db87; -[FBSDKURLSessionTask initWithRequest:fromSession:completionHandler:] */

long FUN_10493da9c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfee200();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c136760(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1ec0a0(param_2,param_3,(long)(param_1 * 1000.0));
    _objc_release(lVar1);
    uVar2 = param_5;
    func_0x00010bfa1600(param_5,param_3,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212780(param_2,param_3,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 10493db88; end: 10493dbc3; -[FBSDKURLSessionTask state] */

undefined8 FUN_10493db88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26a540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa17a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10493dbc4; end: 10493dbf3; -[FBSDKURLSessionTask start] */

void FUN_10493dbc4(undefined8 param_1)

{
  func_0x00010c26a540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10493dbf4; end: 10493dc33; -[FBSDKURLSessionTask cancel] */

void FUN_10493dbf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c26a540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa15a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHandler__112646f08,0);
  return;
}



/* Entry: 10493dc34; end: 10493dc3b; -[FBSDKURLSessionTask task] */

undefined8 FUN_10493dc34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10493dc3c; end: 10493dc47; -[FBSDKURLSessionTask setTask:] */

void FUN_10493dc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10493dc48; end: 10493dc4f; -[FBSDKURLSessionTask requestStartDate] */

undefined8 FUN_10493dc48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10493dc50; end: 10493dc57; -[FBSDKURLSessionTask handler] */

undefined8 FUN_10493dc50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10493dc58; end: 10493dc5f; -[FBSDKURLSessionTask setHandler:] */

void FUN_10493dc58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10493dc60; end: 10493dc67; -[FBSDKURLSessionTask requestStartTime] */

undefined8 FUN_10493dc60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10493dc68; end: 10493dc6f; -[FBSDKURLSessionTask setRequestStartTime:] */

void FUN_10493dc68(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10493dc70; end: 10493dc77; -[FBSDKURLSessionTask loggerSerialNumber] */

undefined8 FUN_10493dc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10493dc78; end: 10493dc7f; -[FBSDKURLSessionTask setLoggerSerialNumber:] */

void FUN_10493dc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10493dc80; end: 10493dcbb; -[FBSDKURLSessionTask .cxx_destruct] */

void FUN_10493dc80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10493dcbc; end: 10493dd1b;  */

void FUN_10493dcbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfedc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_infoDictionary_1125d90d8);
  return;
}



/* Entry: 10493dd1c; end: 10493ddb7; +[FBSDKAEMManager shared] */

void FUN_10493dd1c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x10493dd90;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369ce60 != -1) {
    func_0x00010002a2fc(0x11369ce60,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce58);
  return;
}



/* Entry: 10493ddb8; end: 10493de93; -[FBSDKAEMManager configureWithSwizzler:aemReporter:eventLogger:crashHandler:featureChecker:appEventsUtility:] */

void FUN_10493ddb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c210b00(param_1,param_2,param_3);
  func_0x00010c1663c0(param_1,param_2,param_4);
  func_0x00010c1978e0(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c184ee0(param_1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c19a920(param_1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c168a00(param_1,param_2,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10493de94; end: 10493df2b; -[FBSDKAEMManager enableAutoSetup:] */

void FUN_10493de94(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10493df2c;
    puStack_38 = &UNK_110845ce0;
    if (lRam000000011369ce68 != -1) {
      uStack_30 = param_1;
      uStack_28 = param_3;
      func_0x00010002a2fc(0x11369ce68,&puStack_50);
    }
  }
  return;
}



/* Entry: 10493df2c; end: 10493e05b;  */

void FUN_10493df2c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010c229ca0();
  }
  else {
    func_0x00010c2283c0(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}



/* Entry: 10493e05c; end: 10493e097;  */

void FUN_10493e05c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf53ee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10493e098; end: 10493e0bb; -[FBSDKAEMManager setupWithProxy] */

void FUN_10493e098(undefined8 param_1)

{
  func_0x00010c228480();
                    /* WARNING: Could not recover jumptable at 0x00010c229430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupSceneDelegateProxies_112667f30);
  return;
}



/* Entry: 10493e0bc; end: 10493e1ab; -[FBSDKAEMManager setupAppDelegateProxy] */

void FUN_10493e0bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010bf39c40();
  puVar1 = PTR_s_application_openURL_options__11259f730;
  if (puVar2 != (undefined *)0x0 && puVar3 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x00010c13b700();
    if ((int)puVar4 != 0) {
      puVar4 = puVar3;
      _class_getInstanceMethod(puVar3,puVar1);
      puVar1 = puVar4;
      _method_getImplementation();
      *(undefined **)(param_1 + 0x38) = puVar1;
      _method_setImplementation(puVar4,FUN_10493e1ac);
    }
    puVar1 = PTR_s_application_continueUserActivity_11259f718;
    puVar4 = puVar2;
    func_0x00010c13b700();
    if ((int)puVar4 != 0) {
      _class_getInstanceMethod(puVar3,puVar1);
      puVar1 = puVar3;
      _method_getImplementation();
      *(undefined **)(param_1 + 0x40) = puVar1;
      _method_setImplementation(puVar3,0x10493e2e8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10493e1ac; end: 10493e467;  */

undefined8
FUN_10493e1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  pcVar1 = (code *)PTR_PTR_1126adda0;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befe580();
  func_0x00010bf8ef20();
  func_0x00010befe580(pcVar1);
  func_0x00010bfcff60();
  pcVar2 = pcVar1;
  func_0x00010bf051c0(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a1e0();
  _objc_release(pcVar2);
  func_0x00010c0a14e0(pcVar1);
  pcVar2 = pcVar1;
  func_0x00010c0ed3c0();
  if (pcVar2 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = pcVar1;
    func_0x00010c0ed3c0();
    uVar3 = param_1;
    (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(pcVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10493e468; end: 10493e67b; -[FBSDKAEMManager setupSceneDelegateProxies] */

void FUN_10493e468(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x2;
  func_0x000100029b9c(2,0xd,0,0);
  if ((int)puVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_retain();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        uVar4 = *(undefined8 *)((long)puVar9 * 8);
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf39c40();
        _objc_release(uVar4);
        func_0x00010c229400(param_1);
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    lVar5 = param_1;
    func_0x00010bfc9cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        _NSClassFromString(*(undefined8 *)(lVar8 * 8));
        func_0x00010c229400(param_1);
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40();
  _objc_release(puVar9);
  _objc_release(puVar3);
  func_0x00010c265a00(puVar2);
  func_0x00010c265920();
  func_0x00010c265a00(puVar2);
  func_0x00010c265920();
  func_0x00010c229420(puVar2);
  return;
}



/* Entry: 10493e67c; end: 10493e78f; -[FBSDKAEMManager setup] */

void FUN_10493e67c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c265a00(param_1);
  func_0x00010c265920();
  func_0x00010c265a00(param_1);
  func_0x00010c265920();
  func_0x00010c229420(param_1);
  return;
}



/* Entry: 10493e790; end: 10493e8eb;  */

void FUN_10493e790(long param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(in_x4);
  func_0x00010befe580(uVar1);
  func_0x00010bf8ef20();
  func_0x00010befe580(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfcff60();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf051c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a1e0();
  _objc_release(in_x4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logAutoSetupStatus_source__112605f48,1,
             &PTR____CFConstantStringClassReference_110da08b8);
  return;
}



/* Entry: 10493e8ec; end: 10493eb1f; -[FBSDKAEMManager setupScene:] */

void FUN_10493e8ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_3 != 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0xd,0,0);
    if (iVar1 != 0) {
      uVar2 = param_1;
      func_0x00010c265a00(param_1);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar3 = param_3;
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265920(uVar2);
      _objc_release(puVar4);
      _objc_release(lVar3);
      uVar2 = param_1;
      func_0x00010c265a00(param_1);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar3 = param_3;
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265920(uVar2);
      _objc_release(puVar4);
      _objc_release(lVar3);
      func_0x00010c265a00(param_1);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265920(param_1);
      _objc_release(puVar4);
      _objc_release(param_3);
    }
  }
  return;
}



/* Entry: 10493eb20; end: 10493ecc7;  */

/* WARNING: Possible PIC construction at 0x00010493ec80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010493ec84) */
/* WARNING: Removing unreachable block (ram,0x00010493ecc4) */
/* WARNING: Removing unreachable block (ram,0x00010493eca4) */

void FUN_10493eb20(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain();
  func_0x00010befe580(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf8ef20();
  _objc_retain();
  lVar2 = in_x4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(in_x4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010befe580(uVar3);
      uVar4 = uVar5;
      func_0x00010bdc2b80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcff60(uVar3);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf051c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2b80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14a1e0(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = in_x4;
    func_0x00010bf52a60();
  }
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010c0a14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logAutoSetupStatus_source__112605f48,1,
             &PTR____CFConstantStringClassReference_110da0938);
  return;
}



/* Entry: 10493ecc8; end: 10493ed97;  */

void FUN_10493ecc8(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(in_x4);
  func_0x00010befe580(uVar2);
  func_0x00010bf8ef20();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010befe580(uVar1);
  uVar2 = in_x4;
  func_0x00010c2a4680(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcff60(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf051c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = in_x4;
  func_0x00010c2a4680(in_x4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  func_0x00010c14a1e0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logAutoSetupStatus_source__112605f48,1,
             &PTR____CFConstantStringClassReference_110da0978);
  return;
}



/* Entry: 10493ed98; end: 10493ef47;  */

undefined ** FUN_10493ed98(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  int iVar11;
  undefined **in_x5;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *apuStack_220 [16];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010befe580(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf8ef20();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  ppuVar1 = in_x5;
  func_0x00010bdc2dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar15 = *plStack_120;
    do {
      ppuVar16 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar14 = *(undefined8 *)(lStack_128 + (long)ppuVar16 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010befe580(uVar3);
        uVar4 = uVar14;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfcff60(uVar3,param_2,uVar4);
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf051c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14a1e0(uVar4,param_2,uVar14);
        _objc_release(uVar14);
        _objc_release(uVar4);
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar2 != ppuVar16);
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60(ppuVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  func_0x00010c0a14e0(*(undefined8 *)(param_1 + 0x20),param_2,1,
                      &PTR____CFConstantStringClassReference_110da09b8);
  _objc_release(in_x5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return in_x5;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10493ef48;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c0d8420();
  puVar5 = PTR_PTR_1126add78;
  puVar13 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0(puVar5,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126add78;
  puStack_268 = puVar5;
  func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da0a18);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  func_0x00010bf71fc0(puVar13,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126add78;
  puVar10 = puVar12;
  puStack_270 = puVar12;
  func_0x00010c0e00e0(puVar12,param_2,&PTR____CFConstantStringClassReference_110da0a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0a0(puVar5,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  _objc_retain();
  iVar11 = (int)&uStack_260;
  ppuVar1 = apuStack_220;
  puVar10 = puVar5;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    puVar12 = (undefined *)*puStack_250;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_250 != puVar12) {
          _objc_enumerationMutation(puVar5);
        }
        puVar6 = PTR_PTR_1126add78;
        func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,
                            *(undefined8 *)(lStack_258 + (long)puVar13 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126add78;
        puVar7 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d860(puVar8,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        if (puVar8 != (undefined *)0x0) {
          func_0x00010befa120(ppuVar2,param_2,puVar8);
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar13 = puVar13 + 1;
      } while (puVar10 != puVar13);
      iVar11 = (int)&uStack_260;
      ppuVar1 = apuStack_220;
      puVar10 = puVar5;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  ppuVar16 = ppuVar2;
  func_0x00010bf51e00(ppuVar2);
  _objc_release(puVar5);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  ppuVar9 = ppuVar2;
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
    return ppuVar16;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_10493f1dc;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = &PTR_PTR_1107b9220;
  if (iVar11 == 0) {
    ppuVar16 = &PTR_PTR_1107b9228;
  }
  puVar10 = *ppuVar16;
  puStack_2a0 = puVar5;
  puStack_298 = puVar13;
  puStack_290 = puVar12;
  ppuStack_288 = ppuVar2;
  ppuStack_280 = &puStack_140;
  _objc_retain(puVar10);
  _objc_retain();
  func_0x00010bf99fe0(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_2b0 = ppuVar1;
  }
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_2b0,&ppuStack_2b8,1
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a60(ppuVar9,param_2,puVar10,puVar13);
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(ppuVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  return (undefined **)ppuVar1[1];
}



/* Entry: 10493ef48; end: 10493f1db; -[FBSDKAEMManager getSceneDelegates] */

undefined ** FUN_10493ef48(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420();
  puVar2 = PTR_PTR_1126add78;
  puVar12 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0(puVar2,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126add78;
  puStack_138 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da0a18);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010bf71fc0(puVar12,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126add78;
  puVar8 = puVar11;
  puStack_140 = puVar11;
  func_0x00010c0e00e0(puVar11,param_2,&PTR____CFConstantStringClassReference_110da0a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0a0(puVar2,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  _objc_retain();
  iVar10 = (int)&uStack_130;
  ppuVar9 = apuStack_f0;
  puVar8 = puVar2;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    puVar11 = (undefined *)*puStack_120;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_120 != puVar11) {
          _objc_enumerationMutation(puVar2);
        }
        puVar3 = PTR_PTR_1126add78;
        func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,
                            *(undefined8 *)(lStack_128 + (long)puVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126add78;
        puVar4 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d860(puVar5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (puVar5 != (undefined *)0x0) {
          func_0x00010befa120(ppuVar1,param_2,puVar5);
        }
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar12 = puVar12 + 1;
      } while (puVar8 != puVar12);
      iVar10 = (int)&uStack_130;
      ppuVar9 = apuStack_f0;
      puVar8 = puVar2;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  ppuVar6 = ppuVar1;
  func_0x00010bf51e00(ppuVar1);
  _objc_release(puVar2);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  ppuVar7 = ppuVar1;
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10493f1dc;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR_PTR_1107b9220;
  if (iVar10 == 0) {
    ppuVar6 = &PTR_PTR_1107b9228;
  }
  puVar8 = *ppuVar6;
  puStack_170 = puVar2;
  puStack_168 = puVar12;
  puStack_160 = puVar11;
  ppuStack_158 = ppuVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain();
  func_0x00010bf99fe0(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_180 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_180 = ppuVar9;
  }
  ppuStack_188 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_180,&ppuStack_188,1
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a60(ppuVar7,param_2,puVar8,puVar12);
  _objc_release(puVar8);
  _objc_release(puVar12);
  _objc_release(ppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  return (undefined **)ppuVar9[1];
}



/* Entry: 10493f1dc; end: 10493f2eb; -[FBSDKAEMManager logAutoSetupStatus:source:] */

undefined ** FUN_10493f1dc(undefined8 param_1,undefined8 param_2,int param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR_PTR_1107b9220;
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_1107b9228;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
  _objc_retain();
  func_0x00010bf99fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_40 = param_4;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a60(param_1,param_2,puVar2,puVar3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_4;
  }
  ___stack_chk_fail();
  return (undefined **)param_4[1];
}



/* Entry: 10493f2ec; end: 10493f2f3; -[FBSDKAEMManager swizzler] */

undefined8 FUN_10493f2ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10493f2f4; end: 10493f2ff; -[FBSDKAEMManager setSwizzler:] */

void FUN_10493f2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10493f300; end: 10493f307; -[FBSDKAEMManager aemReporter] */

undefined8 FUN_10493f300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10493f308; end: 10493f313; -[FBSDKAEMManager setAemReporter:] */

void FUN_10493f308(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10493f314; end: 10493f31b; -[FBSDKAEMManager eventLogger] */

undefined8 FUN_10493f314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10493f31c; end: 10493f327; -[FBSDKAEMManager setEventLogger:] */

void FUN_10493f31c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10493f328; end: 10493f32f; -[FBSDKAEMManager crashHandler] */

undefined8 FUN_10493f328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10493f330; end: 10493f33b; -[FBSDKAEMManager setCrashHandler:] */

void FUN_10493f330(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10493f33c; end: 10493f343; -[FBSDKAEMManager featureChecker] */

undefined8 FUN_10493f33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10493f344; end: 10493f34f; -[FBSDKAEMManager setFeatureChecker:] */

void FUN_10493f344(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10493f350; end: 10493f357; -[FBSDKAEMManager appEventsUtility] */

undefined8 FUN_10493f350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10493f358; end: 10493f363; -[FBSDKAEMManager setAppEventsUtility:] */

void FUN_10493f358(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10493f364; end: 10493f36b; -[FBSDKAEMManager originalAppDelegateOpenURLIMP] */

undefined8 FUN_10493f364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10493f36c; end: 10493f373; -[FBSDKAEMManager setOriginalAppDelegateOpenURLIMP:] */

void FUN_10493f36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10493f374; end: 10493f37b; -[FBSDKAEMManager originalAppDelegateContinueUserActivityIMP] */

undefined8 FUN_10493f374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10493f37c; end: 10493f383; -[FBSDKAEMManager setOriginalAppDelegateContinueUserActivityIMP:] */

void FUN_10493f37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10493f384; end: 10493f3e3; -[FBSDKAEMManager .cxx_destruct] */

void FUN_10493f384(long param_1)

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



/* Entry: 10493f3e4; end: 10493f4df; -[FBSDKATEPublisherFactory initWithDataStore:graphRequestFactory:settings:deviceInformationProvider:] */

undefined1 *
FUN_10493f3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar5 = &uStack_70;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  uVar4 = param_6;
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e32b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar5 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar5 + 0x10),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar5 + 0x18),param_5);
    _objc_storeStrong((undefined1 *)((long)puVar5 + 0x20),param_6);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar5;
}



/* Entry: 10493f4e0; end: 10493f5c7; -[FBSDKATEPublisherFactory createPublisherWithAppID:] */

void FUN_10493f4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126adda8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bfcde20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c227f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf64720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3440(puVar1,param_2,param_3,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10493f5c8; end: 10493f5cf; -[FBSDKATEPublisherFactory dataStore] */

undefined8 FUN_10493f5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10493f5d0; end: 10493f5db; -[FBSDKATEPublisherFactory setDataStore:] */

void FUN_10493f5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10493f5dc; end: 10493f5e3; -[FBSDKATEPublisherFactory graphRequestFactory] */

undefined8 FUN_10493f5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10493f5e4; end: 10493f5ef; -[FBSDKATEPublisherFactory setGraphRequestFactory:] */

void FUN_10493f5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10493f5f0; end: 10493f5f7; -[FBSDKATEPublisherFactory settings] */

undefined8 FUN_10493f5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10493f5f8; end: 10493f603; -[FBSDKATEPublisherFactory setSettings:] */

void FUN_10493f5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10493f604; end: 10493f60b; -[FBSDKATEPublisherFactory deviceInformationProvider] */

undefined8 FUN_10493f604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10493f60c; end: 10493f617; -[FBSDKATEPublisherFactory setDeviceInformationProvider:] */

void FUN_10493f60c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10493f618; end: 10493f65f; -[FBSDKATEPublisherFactory .cxx_destruct] */

void FUN_10493f618(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10493f660; end: 10493f93b; -[FBSDKAccessToken initWithTokenString:permissions:declinedPermissions:expiredPermissions:appID:userID:expirationDate:refreshDate:dataAccessExpirationDate:] */

undefined8 *
FUN_10493f660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined *param_9,undefined *param_10,undefined *param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e32c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[8];
    puVar1[8] = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar5);
    uVar5 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_8;
    func_0x00010bf51e00();
    uVar4 = puVar1[9];
    puVar1[9] = uVar5;
    _objc_release(uVar4);
    puVar2 = param_9;
    func_0x00010bf51e00();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87060();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar2;
      _objc_retain();
    }
    uVar5 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar2 = param_10;
    func_0x00010bf51e00();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar2;
      _objc_retain();
    }
    uVar5 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar2 = param_11;
    func_0x00010bf51e00();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87060();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar2;
      _objc_retain();
    }
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
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



/* Entry: 10493f93c; end: 10493f99f; -[FBSDKAccessToken hasGranted:] */

undefined8 FUN_10493f93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0f9dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10493f9a0; end: 10493fa0f; -[FBSDKAccessToken isDataAccessExpired] */

bool FUN_10493f9a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bf63660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf433a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return lVar2 == -1;
}



/* Entry: 10493fa10; end: 10493fa7f; -[FBSDKAccessToken isExpired] */

bool FUN_10493fa10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf433a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return lVar2 == -1;
}



/* Entry: 10493fa80; end: 10493fa8b; +[FBSDKAccessToken tokenCache] */

void FUN_10493fa80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce70);
  return;
}



/* Entry: 10493fa8c; end: 10493fad7; +[FBSDKAccessToken setTokenCache:] */

void FUN_10493fa8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  if (lRam000000011369ce70 != lVar1) {
    _objc_storeStrong(0x11369ce70,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10493fad8; end: 10493fae7; +[FBSDKAccessToken resetTokenCache] */

void FUN_10493fad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126add30,PTR_s_setTokenCache__112663510,0);
  return;
}



/* Entry: 10493fae8; end: 10493faf3; +[FBSDKAccessToken currentAccessToken] */

void FUN_10493fae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce78);
  return;
}



/* Entry: 10493faf4; end: 10493fb3f; +[FBSDKAccessToken tokenString] */

void FUN_10493faf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add30;
  func_0x00010bf5df00(PTR_PTR_1126add30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493fb40; end: 10493fb4f; +[FBSDKAccessToken setCurrentAccessToken:] */

void FUN_10493fb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c186f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126add30,PTR_s_setCurrentAccessToken_shouldDisp_11263f5e8,param_3,1);
  return;
}



/* Entry: 10493fb50; end: 10493fd43; +[FBSDKAccessToken setCurrentAccessToken:shouldDispatchNotif:] */

void FUN_10493fb50(ulong param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  
  lVar1 = param_3;
  _objc_retain();
  if (lRam000000011369ce78 == lVar1) goto LAB_10493fd28;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(PTR_PTR_1126add78);
  func_0x00010bf71e80(PTR_PTR_1126add78);
  lVar3 = lRam000000011369ce78;
  func_0x00010c292360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c292360(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  if ((int)lVar5 == 0) {
    _objc_release(lVar4);
    _objc_release(lVar3);
LAB_10493fc48:
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar7);
  }
  else {
    uVar6 = param_1;
    func_0x00010c06fb60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((uVar6 & 1) == 0) goto LAB_10493fc48;
  }
  _objc_storeStrong(0x11369ce78,param_3);
  if (lVar1 == 0) {
    puVar7 = PTR_PTR_1126add20;
    func_0x00010c22c4c0(PTR_PTR_1126add20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bd00();
    _objc_release(puVar7);
  }
  uVar6 = param_1;
  func_0x00010c272fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160dc0();
  _objc_release(uVar6);
  if (param_4 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40(param_1);
    func_0x00010c1049a0(puVar7);
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
LAB_10493fd28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10493fd44; end: 10493fd8f; +[FBSDKAccessToken isCurrentAccessTokenActive] */

uint FUN_10493fd44(long param_1)

{
  long lVar1;
  uint uVar2;
  
  func_0x00010bf5df00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c072440(param_1);
    uVar2 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10493fd90; end: 10493feab; +[FBSDKAccessToken refreshCurrentAccessTokenWithCompletion:] */

void FUN_10493fd90(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126add30;
  func_0x00010bf5df00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    if (param_3 == 0) goto LAB_10493fe98;
    func_0x00010bf98ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf99200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    (**(code **)(param_3 + 0x10))(param_3,0,0,puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126add30;
    func_0x00010bfcde00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf56540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar1 != (undefined *)0x0) {
      func_0x00010bfcde40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befae00();
      _objc_release(param_1);
      func_0x00010c24d960(puVar1);
    }
  }
  _objc_release(puVar1);
LAB_10493fe98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10493feac; end: 10493feb7; +[FBSDKAccessToken graphRequestConnectionFactory] */

void FUN_10493feac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce80);
  return;
}


