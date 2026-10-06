/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060f33cc; end: 1060f343f; -[BTJSON asString] */

void FUN_1060f33cc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060f3440; end: 1060f34b3; -[BTJSON asArray] */

void FUN_1060f3440(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060f34b4; end: 1060f357b; -[BTJSON asNumber] */

void FUN_1060f34b4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf66840(&uStack_48,param_1);
    }
    func_0x00010bf667c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060f357c; end: 1060f35d7; -[BTJSON asURL] */

void FUN_1060f357c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f35d8; end: 1060f3717; -[BTJSON asStringArray] */

void FUN_1060f35d8(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar4 == 0) {
      _objc_release(param_1);
      _objc_retain(param_1);
      uVar4 = param_1;
LAB_1060f36d4:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
        ___stack_chk_fail();
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar4 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar2);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          _objc_retain(param_1);
          uVar4 = param_1;
        }
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
      return;
    }
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(uVar6 * 8);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_opt_isKindOfClass(uVar5,puVar2);
      if ((uVar5 & 1) == 0) {
        _objc_release(param_1);
        uVar4 = 0;
        goto LAB_1060f36d4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
    uVar4 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1060f3718; end: 1060f377b; -[BTJSON asDictionary] */

void FUN_1060f3718(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_1);
    uVar2 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f377c; end: 1060f37df; -[BTJSON asIntegerOrZero] */

ulong FUN_1060f377c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c067fc0(param_1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1060f37e0; end: 1060f3887; -[BTJSON asEnum:orDefault:] */

ulong FUN_1060f37e0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) != 0) {
      param_4 = uVar1;
      func_0x00010c067fc0(uVar1);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return param_4;
}



/* Entry: 1060f3888; end: 1060f38d7; -[BTJSON isString] */

uint FUN_1060f3888(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1060f38d8; end: 1060f3927; -[BTJSON isNumber] */

uint FUN_1060f38d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1060f3928; end: 1060f3977; -[BTJSON isArray] */

uint FUN_1060f3928(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1060f3978; end: 1060f39c7; -[BTJSON isObject] */

uint FUN_1060f3978(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1060f39c8; end: 1060f3a4b; -[BTJSON isBool] */

ulong FUN_1060f39c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c071ae0();
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1060f3a4c; end: 1060f3a8f; -[BTJSON isTrue] */

undefined8 FUN_1060f3a4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c071ae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1060f3a90; end: 1060f3ad3; -[BTJSON isFalse] */

undefined8 FUN_1060f3a90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c071ae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1060f3ad4; end: 1060f3b23; -[BTJSON isNull] */

uint FUN_1060f3ad4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1060f3b24; end: 1060f3bbf; -[BTJSON chainedErrorOrErrorWithCode:userInfo:] */

void FUN_1060f3b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f3bc0; end: 1060f3bc3; -[BTJSON description] */

void FUN_1060f3bc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf660b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_debugDescription_1125b71d0);
  return;
}



/* Entry: 1060f3bc4; end: 1060f3c33; -[BTJSON debugDescription] */

void FUN_1060f3bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3fbb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f3c34; end: 1060f3c63; -[BTJSON setValue:] */

void FUN_1060f3c34(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060f3c64; end: 1060f3c6b; -[BTJSON subscripts] */

undefined8 FUN_1060f3c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060f3c6c; end: 1060f3c9b; -[BTJSON setSubscripts:] */

void FUN_1060f3c6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060f3c9c; end: 1060f3ccb; -[BTJSON .cxx_destruct] */

void FUN_1060f3c9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060f3ccc; end: 1060f3d3f; +[BTKeychain setString:forKey:] */

undefined8
FUN_1060f3ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1894c0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1060f3d40; end: 1060f3d9b; +[BTKeychain stringForKey:] */

void FUN_1060f3d40(long param_1)

{
  undefined *puVar1;
  
  func_0x00010bf63b00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f3d9c; end: 1060f3dcb; +[BTKeychain keychainKeyForKey:] */

void FUN_1060f3d9c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e3fbd8);
  return;
}



/* Entry: 1060f3dcc; end: 1060f3fa7; +[BTKeychain setData:forKey:] */

bool FUN_1060f3dcc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    bVar1 = false;
    goto LAB_1060f3f88;
  }
  func_0x00010c086d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar2);
  func_0x00010c1d0560(puVar2);
  puVar3 = puVar2;
  _SecItemCopyMatching(puVar2,0);
  if ((int)puVar3 == 0) {
    if (param_3 == 0) {
      _SecItemDelete(puVar2);
LAB_1060f3f74:
      bVar1 = true;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      _SecItemUpdate(puVar2,puVar3);
      bVar1 = (int)puVar4 == 0;
      _objc_release(puVar3);
    }
  }
  else if ((int)puVar3 == -0x62d4) {
    if (param_3 == 0) goto LAB_1060f3f74;
    _objc_retain(puVar2);
    func_0x00010c1d0560(puVar2);
    func_0x00010c1d0560(puVar2);
    puVar3 = puVar2;
    _SecItemAdd(puVar2,0);
    _objc_release(puVar2);
    bVar1 = (int)puVar3 == 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar2);
  _objc_release(param_1);
LAB_1060f3f88:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1060f3fa8; end: 1060f40ab; +[BTKeychain dataForKey:] */

void FUN_1060f3fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  func_0x00010c086d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar2);
  func_0x00010c1d0560(puVar2);
  func_0x00010c1d0560(puVar2);
  uStack_38 = 0;
  puVar3 = puVar2;
  _SecItemCopyMatching(puVar2,&uStack_38);
  uVar1 = uStack_38;
  uVar4 = 0;
  if ((int)puVar3 == 0) {
    _objc_retain(uStack_38);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1060f40ac; end: 1060f4133; +[BTLogger sharedLogger] */

void FUN_1060f40ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1060f4134;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c2ea0 != -1) {
    func_0x00010002a2fc(0x1136c2ea0,&puStack_48);
  }
  uVar1 = uRam00000001136c2e98;
  _objc_retain(uRam00000001136c2e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060f4134; end: 1060f415b;  */

void FUN_1060f4134(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_new();
  uVar1 = uRam00000001136c2e98;
  uRam00000001136c2e98 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060f415c; end: 1060f419b; -[BTLogger init] */

void FUN_1060f415c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126efaa0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 4;
  }
  return;
}



/* Entry: 1060f419c; end: 1060f41cb; -[BTLogger log:] */

void FUN_1060f419c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0a98e0(param_1,param_2,4,param_3,&stack0x00000000);
  return;
}



/* Entry: 1060f41cc; end: 1060f41fb; -[BTLogger critical:] */

void FUN_1060f41cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0a98e0(param_1,param_2,1,param_3,&stack0x00000000);
  return;
}



/* Entry: 1060f41fc; end: 1060f422b; -[BTLogger error:] */

void FUN_1060f41fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0a98e0(param_1,param_2,2,param_3,&stack0x00000000);
  return;
}



/* Entry: 1060f422c; end: 1060f425b; -[BTLogger warning:] */

void FUN_1060f422c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0a98e0(param_1,param_2,3,param_3,&stack0x00000000);
  return;
}



/* Entry: 1060f425c; end: 1060f428b; -[BTLogger info:] */

void FUN_1060f425c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0a98e0(param_1,param_2,4,param_3,&stack0x00000000);
  return;
}



/* Entry: 1060f428c; end: 1060f42bb; -[BTLogger debug:] */

void FUN_1060f428c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0a98e0(param_1,param_2,5,param_3,&stack0x00000000);
  return;
}



/* Entry: 1060f42bc; end: 1060f43c7; -[BTLogger logLevel:format:arguments:] */

void FUN_1060f42bc(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c098a00();
  if (param_3 <= uVar1) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c013d00();
    uVar1 = param_1;
    func_0x00010c0a1bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      _objc_opt_class();
      func_0x00010c098a60();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&PTR____CFConstantStringClassReference_110e3fc18);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c0a1bc0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_1 + 0x10))();
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060f43c8; end: 1060f43eb; +[BTLogger levelString:] */

undefined * FUN_1060f43c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return (&PTR_PTR_11090e690)[param_3 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 1060f43ec; end: 1060f43f3; -[BTLogger level] */

undefined8 FUN_1060f43ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060f43f4; end: 1060f43fb; -[BTLogger setLevel:] */

void FUN_1060f43f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1060f43fc; end: 1060f4403; -[BTLogger logBlock] */

undefined8 FUN_1060f43fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060f4404; end: 1060f440b; -[BTLogger setLogBlock:] */

void FUN_1060f4404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f440c; end: 1060f4417; -[BTLogger .cxx_destruct] */

void FUN_1060f440c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1060f4418; end: 1060f44f3; -[BTPaymentMethodNonce initWithNonce:localizedDescription:type:] */

undefined1 *
FUN_1060f4418(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    ppuVar1 = (undefined1 **)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126efaa8;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined1 **)0x0) {
      func_0x00010c1cdaa0(ppuVar1);
      func_0x00010c1bf560(ppuVar1);
      func_0x00010c21acc0(ppuVar1);
    }
    _objc_retain(ppuVar1);
    param_1 = (undefined1 *)ppuVar1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar1;
}



/* Entry: 1060f44f4; end: 1060f44ff; -[BTPaymentMethodNonce initWithNonce:localizedDescription:] */

void FUN_1060f44f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithNonce_localizedDescripti_1125e98d8,param_3,param_4,
             &PTR____CFConstantStringClassReference_110db54d8);
  return;
}



/* Entry: 1060f4500; end: 1060f4527; -[BTPaymentMethodNonce initWithNonce:localizedDescription:type:isDefault:] */

void FUN_1060f4500(long param_1)

{
  undefined1 in_w5;
  
  func_0x00010c02fb80();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 8) = in_w5;
  }
  return;
}



/* Entry: 1060f4528; end: 1060f452f; -[BTPaymentMethodNonce nonce] */

undefined8 FUN_1060f4528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060f4530; end: 1060f4537; -[BTPaymentMethodNonce setNonce:] */

void FUN_1060f4530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4538; end: 1060f453f; -[BTPaymentMethodNonce localizedDescription] */

undefined8 FUN_1060f4538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060f4540; end: 1060f4547; -[BTPaymentMethodNonce setLocalizedDescription:] */

void FUN_1060f4540(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4548; end: 1060f454f; -[BTPaymentMethodNonce type] */

undefined8 FUN_1060f4548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060f4550; end: 1060f4557; -[BTPaymentMethodNonce setType:] */

void FUN_1060f4550(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4558; end: 1060f455f; -[BTPaymentMethodNonce isDefault] */

undefined1 FUN_1060f4558(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1060f4560; end: 1060f4567; -[BTPaymentMethodNonce setIsDefault:] */

void FUN_1060f4560(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1060f4568; end: 1060f45a3; -[BTPaymentMethodNonce .cxx_destruct] */

void FUN_1060f4568(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1060f45a4; end: 1060f461f; -[BTPaymentMethodNonceParser isTypeAvailable:] */

bool FUN_1060f45a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc1940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1060f4620; end: 1060f4663; -[BTPaymentMethodNonceParser allTypes] */

void FUN_1060f4620(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc1940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060f4664; end: 1060f482b; -[BTPaymentMethodNonceParser parseJSON:withParsingBlockForType:] */

void FUN_1060f4664(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdc1940();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
  if (param_3 != 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar7 = puVar1;
      (**(code **)(puVar1 + 0x10))(puVar1,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060f4800;
    }
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c080000();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      puVar7 = PTR_PTR_1126c8028;
      _objc_alloc(PTR_PTR_1126c8028);
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c081960();
      func_0x00010c02fba0(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_1060f4800;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_1060f4800:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060f482c; end: 1060f485b; -[BTPaymentMethodNonceParser setJSONParsingBlocks:] */

void FUN_1060f482c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060f485c; end: 1060f4867; -[BTPaymentMethodNonceParser .cxx_destruct] */

void FUN_1060f485c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060f4868; end: 1060f49b7; -[BTPostalAddress copyWithZone:] */

undefined * FUN_1060f4868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8030;
  _objc_alloc_init(PTR_PTR_1126c8030);
  uVar2 = param_1;
  func_0x00010c122c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8960(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c25ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e6e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9da80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1991a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c09e300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf480(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf532a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184980(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c105600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df560(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c125a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e96a0(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 1060f49b8; end: 1060f4b37; -[BTPostalAddress debugDescription] */

void FUN_1060f49b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c122c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c25ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf9da80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c125a80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c105600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf532a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110e3fc98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1060f4b38; end: 1060f4b3f; -[BTPostalAddress recipientName] */

undefined8 FUN_1060f4b38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060f4b40; end: 1060f4b47; -[BTPostalAddress setRecipientName:] */

void FUN_1060f4b40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4b48; end: 1060f4b4f; -[BTPostalAddress streetAddress] */

undefined8 FUN_1060f4b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060f4b50; end: 1060f4b57; -[BTPostalAddress setStreetAddress:] */

void FUN_1060f4b50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4b58; end: 1060f4b5f; -[BTPostalAddress extendedAddress] */

undefined8 FUN_1060f4b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060f4b60; end: 1060f4b67; -[BTPostalAddress setExtendedAddress:] */

void FUN_1060f4b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4b68; end: 1060f4b6f; -[BTPostalAddress locality] */

undefined8 FUN_1060f4b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060f4b70; end: 1060f4b77; -[BTPostalAddress setLocality:] */

void FUN_1060f4b70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4b78; end: 1060f4b7f; -[BTPostalAddress countryCodeAlpha2] */

undefined8 FUN_1060f4b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060f4b80; end: 1060f4b87; -[BTPostalAddress setCountryCodeAlpha2:] */

void FUN_1060f4b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4b88; end: 1060f4b8f; -[BTPostalAddress postalCode] */

undefined8 FUN_1060f4b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060f4b90; end: 1060f4b97; -[BTPostalAddress setPostalCode:] */

void FUN_1060f4b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4b98; end: 1060f4b9f; -[BTPostalAddress region] */

undefined8 FUN_1060f4b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060f4ba0; end: 1060f4ba7; -[BTPostalAddress setRegion:] */

void FUN_1060f4ba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f4ba8; end: 1060f4c13; -[BTPostalAddress .cxx_destruct] */

void FUN_1060f4ba8(long param_1)

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



/* Entry: 1060f4c14; end: 1060f4c8f; -[BTTokenizationService isTypeAvailable:] */

bool FUN_1060f4c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c273340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1060f4c90; end: 1060f4cd3; -[BTTokenizationService allTypes] */

void FUN_1060f4c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c273340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060f4cd4; end: 1060f4ce3; -[BTTokenizationService tokenizeType:withAPIClient:completion:] */

void FUN_1060f4cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2733f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_tokenizeType_options_withAPIClie_11267a720,param_3,0,param_4,param_5);
  return;
}



/* Entry: 1060f4ce4; end: 1060f4f2f; -[BTTokenizationService tokenizeType:options:withAPIClient:completion:] */

void FUN_1060f4ce4(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c273340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar6;
    (**(code **)(param_6 + 0x10))(param_6,0);
    _objc_release(puVar6);
  }
  else {
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if (param_4 != (undefined *)0x0) {
      puVar2 = param_4;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,param_5,puVar2,param_6);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar7 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1060f4f30; end: 1060f4f5f; -[BTTokenizationService setTokenizationBlocks:] */

void FUN_1060f4f30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060f4f60; end: 1060f4f6b; -[BTTokenizationService .cxx_destruct] */

void FUN_1060f4f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060f4f6c; end: 1060f542b; +[BTURLUtils queryStringWithDictionary:] */

void FUN_1060f4f6c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar4 != 0) {
    uVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar19 = *(undefined8 *)(uVar16 * 8);
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c25d100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar19);
      uVar6 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      if ((uVar8 & 1) == 0) {
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar8 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar7);
        if ((uVar8 & 1) == 0) {
          puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
          _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
          uVar8 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar7);
          if ((uVar8 & 1) == 0) {
            uVar8 = uVar6;
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = param_1;
            func_0x00010c25d100();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ba0(puVar3);
            _objc_release(uVar19);
            _objc_release(uVar8);
          }
          else {
            func_0x00010bf06ba0(puVar3);
          }
        }
        else {
          _objc_retain(uVar6);
          uVar8 = uVar6;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (uVar8 != 0) {
            uVar17 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(uVar6);
              }
              uVar18 = *(undefined8 *)(uVar17 * 8);
              func_0x00010bf6e340(uVar18);
              _objc_retainAutoreleasedReturnValue();
              uVar19 = param_1;
              func_0x00010c25d100();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar6;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar10;
              func_0x00010bf6e340();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = param_1;
              func_0x00010c25d100();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf06ba0(puVar3);
              _objc_release(uVar9);
              _objc_release(uVar11);
              _objc_release(uVar10);
              _objc_release(uVar19);
              _objc_release(uVar18);
              uVar17 = uVar17 + 1;
            } while (uVar8 != uVar17);
            uVar8 = uVar6;
            func_0x00010bf52a60();
          }
          _objc_release(uVar6);
        }
      }
      else {
        _objc_retain(uVar6);
        uVar8 = uVar6;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (uVar8 != 0) {
          uVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(uVar6);
            }
            uVar9 = *(undefined8 *)(uVar17 * 8);
            func_0x00010bf6e340(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = param_1;
            func_0x00010c25d100();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ba0(puVar3);
            _objc_release(uVar19);
            _objc_release(uVar9);
            uVar17 = uVar17 + 1;
          } while (uVar8 != uVar17);
          uVar8 = uVar6;
          func_0x00010bf52a60();
        }
        _objc_release(uVar6);
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar4);
    uVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = puVar3;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c08fa60(puVar3);
    func_0x00010bf6b860(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar13);
        }
        uVar9 = *(undefined8 *)((long)puVar15 * 8);
        uVar5 = uVar9;
        func_0x00010c296d80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar5;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4f60(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar12);
        _objc_release(uVar9);
        _objc_release(uVar19);
        _objc_release(uVar5);
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar3 = puVar13;
      func_0x00010bf52a60();
    }
    _objc_release(puVar13);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puVar13 = puVar12;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      _objc_retain(puVar13);
      func_0x00010bdc3100(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c0d3c80();
      _objc_release(puVar3);
      func_0x00010c12b740(puVar7);
      puVar3 = puVar13;
      func_0x00010c25cda0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060f542c; end: 1060f560b; +[BTURLUtils queryParametersForURL:] */

void FUN_1060f542c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar9 = *plStack_120;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + (long)puVar7 * 8);
        uVar5 = uVar8;
        func_0x00010c296d80(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4f60(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_2,uVar6,uVar8);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar7 = puVar7 + 1;
      } while (puVar4 != puVar7);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar4 = puVar2;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    _objc_retain(puVar4);
    func_0x00010bdc3100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    func_0x00010c12b740(puVar2,param_2,&PTR____CFConstantStringClassReference_110e3fdb8);
    puVar3 = puVar4;
    func_0x00010c25cda0(puVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060f560c; end: 1060f569f; +[BTURLUtils stringByURLEncodingAllCharactersInString:] */

void FUN_1060f560c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010bdc3100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c12b740(puVar2,param_2,&PTR____CFConstantStringClassReference_110e3fdb8);
  uVar3 = param_3;
  func_0x00010c25cda0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060f56a0; end: 1060f5793; +[BTUILocalizedString localizationBundle] */

void FUN_1060f56a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  if (puVar2 == (undefined *)0x0) {
    _objc_opt_class(param_1);
    func_0x00010bf249e0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060f5768;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010bf24ca0(PTR__OBJC_CLASS___NSBundle_1126aea78,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_1060f5768:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f5794; end: 1060f579f; +[BTUILocalizedString localizationTable] */

undefined ** FUN_1060f5794(void)

{
  return &PTR____CFConstantStringClassReference_110e3fe18;
}



/* Entry: 1060f57a0; end: 1060f5823; +[BTUILocalizedString CARD_TYPE_AMERICAN_EXPRESS] */

void FUN_1060f57a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3fe38,
                      &PTR____CFConstantStringClassReference_110e3fe58,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5824; end: 1060f58a7; +[BTUILocalizedString CARD_TYPE_DINERS_CLUB] */

void FUN_1060f5824(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3fe78,
                      &PTR____CFConstantStringClassReference_110e3fe98,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f58a8; end: 1060f592b; +[BTUILocalizedString CARD_TYPE_DISCOVER] */

void FUN_1060f58a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3feb8,
                      &PTR____CFConstantStringClassReference_110df1158,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f592c; end: 1060f59af; +[BTUILocalizedString CARD_TYPE_MASTER_CARD] */

void FUN_1060f592c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3fed8,
                      &PTR____CFConstantStringClassReference_110e3ea58,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f59b0; end: 1060f5a33; +[BTUILocalizedString CARD_TYPE_VISA] */

void FUN_1060f59b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3fef8,
                      &PTR____CFConstantStringClassReference_110e3ea78,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5a34; end: 1060f5ab7; +[BTUILocalizedString CARD_TYPE_JCB] */

void FUN_1060f5a34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3ff18,
                      &PTR____CFConstantStringClassReference_110e3e078,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5ab8; end: 1060f5b3b; +[BTUILocalizedString CARD_TYPE_MAESTRO] */

void FUN_1060f5ab8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3ff38,
                      &PTR____CFConstantStringClassReference_110e3eab8,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5b3c; end: 1060f5bbf; +[BTUILocalizedString CARD_TYPE_UNION_PAY] */

void FUN_1060f5b3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3ff58,
                      &PTR____CFConstantStringClassReference_110e3ead8,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5bc0; end: 1060f5c43; +[BTUILocalizedString CARD_TYPE_LASER] */

void FUN_1060f5bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3ff78,
                      &PTR____CFConstantStringClassReference_110e3ea98,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5c44; end: 1060f5cc7; +[BTUILocalizedString CARD_TYPE_SOLO] */

void FUN_1060f5c44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3ff98,
                      &PTR____CFConstantStringClassReference_110e3eb38,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5cc8; end: 1060f5d4b; +[BTUILocalizedString CARD_TYPE_SWITCH] */

void FUN_1060f5cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3ffb8,
                      &PTR____CFConstantStringClassReference_110e3eb58,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


