/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10496f59c; end: 10496f673; -[FBSDKKeychainStore dictionaryForKey:] */

void FUN_10496f59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bf63b00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126addf0;
    func_0x00010bf569a0(PTR_PTR_1126addf0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = puVar1;
    func_0x00010bf67020(puVar1,param_2,puVar2,
                        *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10496f674; end: 10496f6ef; -[FBSDKKeychainStore setString:forKey:accessibility:] */

undefined8
FUN_10496f674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1894e0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10496f6f0; end: 10496f74b; -[FBSDKKeychainStore stringForKey:] */

void FUN_10496f6f0(long param_1)

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



/* Entry: 10496f74c; end: 10496f883; -[FBSDKKeychainStore setData:forKey:accessibility:] */

bool FUN_10496f74c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c11d440();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      uVar4 = param_1;
      func_0x000104957e68();
      iVar2 = 0;
      if ((int)uVar4 != -0x62d4) {
        iVar2 = (int)uVar4;
      }
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09d720(PTR_PTR_1126addf8);
      func_0x00010c1d0560(puVar3);
      uVar4 = param_1;
      FUN_104957d90(param_1,puVar3);
      iVar2 = (int)uVar4;
      if (iVar2 == -0x62d4) {
        if (param_5 != 0) {
          func_0x00010c09d5e0(PTR_PTR_1126addf8);
          func_0x00010c1d0560(param_1);
        }
        func_0x00010c09d720(PTR_PTR_1126addf8);
        func_0x00010c1d0560(param_1);
        uVar4 = param_1;
        func_0x000104957dd8(param_1,0);
        iVar2 = (int)uVar4;
      }
      _objc_release(puVar3);
    }
    bVar1 = iVar2 == 0;
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10496f884; end: 10496f97b; -[FBSDKKeychainStore dataForKey:] */

void FUN_10496f884(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_10496f920;
  }
  func_0x00010c11d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d700(PTR_PTR_1126addf8);
  func_0x00010c1d0560(param_1);
  func_0x00010c09d6c0(PTR_PTR_1126addf8);
  func_0x00010c09d6a0(PTR_PTR_1126addf8);
  func_0x00010c1d0560(param_1);
  lStack_38 = 0;
  uVar1 = param_1;
  func_0x000104957e20(param_1,&lStack_38);
  if (((int)uVar1 == 0) && (lStack_38 != 0)) {
    lVar2 = lStack_38;
    _CFGetTypeID();
    lVar3 = lVar2;
    _CFDataGetTypeID();
    if (lVar2 != lVar3) goto LAB_10496f90c;
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64b00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    _CFRelease(lStack_38);
  }
  else {
LAB_10496f90c:
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_1);
LAB_10496f920:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10496f97c; end: 10496fa7b; -[FBSDKKeychainStore queryForKey:] */

void FUN_10496f97c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126add78;
  puVar2 = PTR_PTR_1126addf8;
  func_0x00010c09d680(PTR_PTR_1126addf8);
  puVar3 = PTR_PTR_1126addf8;
  func_0x00010c09d660(PTR_PTR_1126addf8);
  func_0x00010bf71e80(puVar4,param_2,puVar1,puVar2,puVar3);
  puVar4 = PTR_PTR_1126add78;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126addf8;
  func_0x00010c09d640(PTR_PTR_1126addf8);
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar6,puVar2);
  puVar4 = PTR_PTR_1126add78;
  puVar2 = PTR_PTR_1126addf8;
  func_0x00010c09d620(PTR_PTR_1126addf8);
  func_0x00010bf71e80(puVar4,param_2,puVar1,param_3,puVar2);
  _objc_release(param_3);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar4 = PTR_PTR_1126addf8;
    func_0x00010c09d5c0(PTR_PTR_1126addf8);
    func_0x00010c1d0560(puVar1,param_2,lVar5,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10496fa7c; end: 10496fa83; -[FBSDKKeychainStore service] */

undefined8 FUN_10496fa7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10496fa84; end: 10496fa8b; -[FBSDKKeychainStore accessGroup] */

undefined8 FUN_10496fa84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496fa8c; end: 10496fabb; -[FBSDKKeychainStore .cxx_destruct] */

void FUN_10496fa8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10496fabc; end: 10496fb5f; -[FBSDKLocation initWithId:name:] */

undefined1 *
FUN_10496fabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e33e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 10496fb60; end: 10496fc7b; +[FBSDKLocation locationFromDictionary:] */

void FUN_10496fb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126add78;
  func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126add78;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf6f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d860(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126add78;
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d860(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = (undefined *)0x0;
    if ((puVar2 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
      puVar4 = PTR_PTR_1126add70;
      _objc_alloc(PTR_PTR_1126add70);
      func_0x00010c01b2c0();
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10496fc7c; end: 10496fcf7; -[FBSDKLocation hash] */

undefined8 * FUN_10496fc7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  puVar6 = (undefined8 *)PTR_PTR_1126addb0;
  uStack_30 = uVar2;
  func_0x00010bfdeb20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (puVar6 == puVar3) {
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar4 = PTR_PTR_1126add70;
    func_0x00010bf39c40(PTR_PTR_1126add70);
    puVar5 = puVar3;
    func_0x00010c075f00(puVar3,param_2,puVar4);
    if ((int)puVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      func_0x00010c071e00(puVar6,param_2,puVar3);
    }
  }
  _objc_release(puVar3);
  return puVar6;
}



/* Entry: 10496fcf8; end: 10496fd6f; -[FBSDKLocation isEqual:] */

long FUN_10496fcf8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126add70;
    func_0x00010bf39c40(PTR_PTR_1126add70);
    lVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)lVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071e00(param_1,param_2,param_3);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10496fd70; end: 10496fe0f; -[FBSDKLocation isEqualToLocation:] */

undefined8 FUN_10496fd70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar3,param_2,uVar1);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10496fe10; end: 10496fe13; -[FBSDKLocation copyWithZone:] */

void FUN_10496fe10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10496fe14; end: 10496fe1b; +[FBSDKLocation supportsSecureCoding] */

undefined8 FUN_10496fe14(void)

{
  return 1;
}



/* Entry: 10496fe1c; end: 10496fe77; -[FBSDKLocation encodeWithCoder:] */

void FUN_10496fe1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110da4d38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496fe78; end: 10496ff2f; -[FBSDKLocation initWithCoder:] */

undefined8 FUN_10496fe78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da4d18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da4d38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01b2c0(param_1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10496ff30; end: 10496ff37; -[FBSDKLocation id] */

undefined8 FUN_10496ff30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10496ff38; end: 10496ff3f; -[FBSDKLocation name] */

undefined8 FUN_10496ff38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496ff40; end: 10496ff6f; -[FBSDKLocation .cxx_destruct] */

void FUN_10496ff40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10496ff70; end: 10497006b; -[FBSDKLogger initWithLoggingBehavior:] */

undefined1 * FUN_10496ff70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e33f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ade50;
    func_0x00010c22bfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0b3980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf4b900();
    *(char *)((long)puVar2 + 8) = (char)puVar5;
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x18),param_3);
    if (*(char *)((long)puVar2 + 8) == '\x01') {
      puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c0d8420();
      uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
      *(undefined **)((long)puVar2 + 0x20) = puVar3;
      _objc_release(uVar6);
      puVar3 = PTR_PTR_1126add38;
      func_0x00010bfbffe0();
      *(undefined **)((long)puVar2 + 0x10) = puVar3;
    }
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10497006c; end: 104970073; -[FBSDKLogger contents] */

void FUN_10497006c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104970074; end: 1049700bf; -[FBSDKLogger setContents:] */

void FUN_104970074(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25da60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1049700c0; end: 1049700d7; -[FBSDKLogger appendString:] */

void FUN_1049700c0(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__11259f5e0);
    return;
  }
  return;
}



/* Entry: 1049700d8; end: 10497015f; -[FBSDKLogger appendFormat:] */

void FUN_1049700d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(param_1 + 8) == '\x01') {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c013d00();
    _objc_release(param_3);
    func_0x00010bf070e0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 104970160; end: 1049701df; -[FBSDKLogger appendKey:value:] */

void FUN_104970160(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain();
  if ((*(char *)(param_1 + 8) == '\x01') && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bf06ba0(*(undefined8 *)(param_1 + 0x20),param_2,
                        &PTR____CFConstantStringClassReference_110da4d58);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049701e0; end: 1049703d7; -[FBSDKLogger emitToNSLog] */

undefined * FUN_1049701e0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
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
  puVar5 = param_1;
  if (param_1[8] == '\x01') {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = lRam000000011369d458;
    func_0x00010c0865c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          lVar3 = lRam000000011369d458;
          func_0x00010c0e00e0(lRam000000011369d458,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c08fa60(uVar4);
          func_0x00010c130f80(uVar9,param_2,uVar8,lVar3,2,0,uVar4);
          _objc_release(lVar3);
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    puVar5 = *(undefined **)(param_1 + 0x20);
    _objc_retain();
    uVar6 = *(ulong *)(param_1 + 0x20);
    func_0x00010c08fa60();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (10000 < uVar6) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c260c20(uVar4,param_2,10000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da4d78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar4);
      puVar5 = puVar7;
    }
    _NSLog(&PTR____CFConstantStringClassReference_110da4d98);
    func_0x00010c20e7c0(*(undefined8 *)(param_1 + 0x20),param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_release(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter();
  puVar7 = (undefined *)((long)puRam000000011309f438 + 1);
  puRam000000011309f438 = puVar7;
  _objc_sync_exit(puVar5);
  _objc_release(puVar5);
  return puVar7;
}



/* Entry: 1049703d8; end: 10497041f; +[FBSDKLogger generateSerialNumber] */

long FUN_1049703d8(undefined8 param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = lRam000000011309f438 + 1;
  lRam000000011309f438 = lVar1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104970420; end: 104970497; +[FBSDKLogger singleShotLogEntry:logEntry:] */

void FUN_104970420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add38;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0277c0();
  _objc_release(param_3);
  func_0x00010c0a58e0(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104970498; end: 10497052f; -[FBSDKLogger logEntry:] */

void FUN_104970498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ade50;
  func_0x00010c22bfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b3980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b900();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    func_0x00010bf070e0(param_1,param_2,param_3);
    func_0x00010bf8e120(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104970530; end: 1049706f7; +[FBSDKLogger singleShotLogEntry:timestampTag:formatString:] */

void FUN_104970530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ade50;
  func_0x00010c22bfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b3980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b900();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c013d00();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lRam000000011369d460;
    func_0x00010c0e00e0(lRam000000011369d460,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    if (lVar4 != 0) {
      puVar3 = PTR_PTR_1126add20;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0();
      func_0x00010c282800();
      _objc_release(puVar3);
      func_0x00010c12d3e0(lRam000000011369d460,param_2,puVar2);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110da4db8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010c23cd40(param_1,param_2,param_3,puVar3);
    }
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1049706f8; end: 104970877; +[FBSDKLogger registerCurrentTime:withTag:] */

void FUN_1049706f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ade50;
  _objc_retain(param_3);
  func_0x00010c22bfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b3980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    if (puRam000000011369d460 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010c0d8420();
      puVar1 = puRam000000011369d460;
      puRam000000011369d460 = puVar2;
      _objc_release(puVar1);
    }
    puVar1 = puRam000000011369d460;
    func_0x00010bf529e0();
    if ((undefined *)0x3e7 < puVar1) {
      func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4eb8
                          ,&PTR____CFConstantStringClassReference_110da4dd8);
    }
    puVar1 = PTR_PTR_1126add20;
    func_0x00010c22c4c0(PTR_PTR_1126add20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf604c0();
    _objc_release(puVar1);
    puVar2 = puRam000000011369d460;
    puVar1 = PTR_PTR_1126add78;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,puVar2,puVar4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104970878; end: 104970943; +[FBSDKLogger registerStringToReplace:replaceWith:] */

void FUN_104970878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ade50;
  func_0x00010c22bfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b3980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    if (puRam000000011369d458 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010c0d8420();
      puVar1 = puRam000000011369d458;
      puRam000000011369d458 = puVar2;
      _objc_release(puVar1);
    }
    func_0x00010c220220(puRam000000011369d458,param_2,param_4,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104970944; end: 10497094b; -[FBSDKLogger loggerSerialNumber] */

undefined8 FUN_104970944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10497094c; end: 104970953; -[FBSDKLogger setLoggerSerialNumber:] */

void FUN_10497094c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 104970954; end: 10497095b; -[FBSDKLogger loggingBehavior] */

undefined8 FUN_104970954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10497095c; end: 104970963; -[FBSDKLogger setLoggingBehavior:] */

void FUN_10497095c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104970964; end: 10497096b; -[FBSDKLogger isActive] */

undefined1 FUN_104970964(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10497096c; end: 104970973; -[FBSDKLogger setActive:] */

void FUN_10497096c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104970974; end: 10497097b; -[FBSDKLogger internalContents] */

undefined8 FUN_104970974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10497097c; end: 1049709ab; -[FBSDKLogger .cxx_destruct] */

void FUN_10497097c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1049709ac; end: 1049709f7; -[FBSDKLoggerFactory createLoggerWithLoggingBehavior:] */

void FUN_1049709ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0277c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1049709f8; end: 104970a7f; -[FBSDKLoginTooltip initWithText:enabled:] */

undefined1 *
FUN_1049709f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  puStack_38 = PTR_PTR_1126e33f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104970a80; end: 104970a87; -[FBSDKLoginTooltip isEnabled] */

undefined1 FUN_104970a80(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104970a88; end: 104970a8f; -[FBSDKLoginTooltip text] */

undefined8 FUN_104970a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104970a90; end: 104970a9b; -[FBSDKLoginTooltip .cxx_destruct] */

void FUN_104970a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104970a9c; end: 104970ab7; +[FBSDKMath ceilForSize:] */

undefined1  [16] FUN_104970a9c(double param_1,double param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (double)(float)(int)param_1;
  auVar1._8_8_ = (double)(float)(int)param_2;
  return auVar1;
}



/* Entry: 104970ab8; end: 104970ad3; +[FBSDKMath floorForSize:] */

undefined1  [16] FUN_104970ab8(double param_1,double param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (double)(float)(int)param_1;
  auVar1._8_8_ = (double)(float)(int)param_2;
  return auVar1;
}



/* Entry: 104970ad4; end: 104970ad7; +[FBSDKMath hashWithInteger:] */

void FUN_104970ad4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdeb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hashWithPointer__1125d5498);
  return;
}



/* Entry: 104970ad8; end: 104970adf; +[FBSDKMath hashWithInteger:andInteger:] */

void FUN_104970ad8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdeb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_hashWithLong__1125d5490,param_4 | param_3 << 0x20);
  return;
}



/* Entry: 104970ae0; end: 104970b3f; +[FBSDKMath hashWithIntegerArray:count:] */

undefined8 FUN_104970ae0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
    while (param_4 = param_4 + -1, param_4 != 0) {
      param_3 = param_3 + 1;
      uVar1 = param_1;
      func_0x00010bfdeb00(param_1,param_2,uVar2,*param_3);
      uVar2 = uVar1;
    }
  }
  return uVar2;
}



/* Entry: 104970b40; end: 104970b63; +[FBSDKMath hashWithLong:] */

ulong FUN_104970b40(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = ~param_3 + param_3 * 0x40000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
  return uVar1 ^ uVar1 >> 0x16;
}



/* Entry: 104970b64; end: 104970b8f; +[FBSDKMath hashWithPointer:] */

long FUN_104970b64(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 * 0x200000 - 1;
  uVar1 = (uVar1 ^ uVar1 >> 0x18) * 0x109;
  uVar1 = (uVar1 ^ uVar1 >> 0xe) * 0x15;
  return (uVar1 ^ uVar1 >> 0x1c) * 0x80000001;
}



/* Entry: 104970b90; end: 104970c33; -[FBSDKMeasurementEventListener initWithEventLogger:sourceApplicationTracker:] */

undefined1 *
FUN_104970b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3400;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 104970c34; end: 104970c9f; -[FBSDKMeasurementEventListener registerForAppLinkMeasurementEvents] */

void FUN_104970c34(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104970ca0;
  puStack_20 = &UNK_110842e18;
  if (lRam000000011369d468 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x11369d468,&puStack_38);
  }
  return;
}



/* Entry: 104970ca0; end: 104970cf7;  */

void FUN_104970ca0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104970cf8; end: 1049710db; -[FBSDKMeasurementEventListener logFBAppEventForNotification:] */

long FUN_104970cf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_138;
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
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar4 = param_1;
      func_0x00010c247600(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206d20();
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
  }
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar1);
        }
        uVar13 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        uStack_138 = 0;
        puVar6 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
        func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                            &PTR____CFConstantStringClassReference_110da4f38,0,&uStack_138);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uStack_138;
        _objc_retain(uStack_138);
        uVar7 = uVar13;
        func_0x00010c08fa60(uVar13);
        puVar8 = puVar6;
        func_0x00010c25cfa0(puVar6,param_2,uVar13,0,0,uVar7,
                            &PTR____CFConstantStringClassReference_110db3638);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                            &PTR____CFConstantStringClassReference_110dc1198);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c25d0a0(puVar8,param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar9);
        puVar8 = PTR_PTR_1126add78;
        lVar11 = lVar2;
        func_0x00010c0e00e0(lVar2,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010bf71e80(puVar8,param_2,puVar5,lVar11,puVar10);
        _objc_release(lVar11);
        _objc_release(puVar10);
        _objc_release(puVar6);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  func_0x00010bf99fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR____CFConstantStringClassReference_110da4ef8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110da4ef8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8d60(param_1,param_2,ppuVar12,puVar5,1);
  _objc_release(ppuVar12);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 8);
}



/* Entry: 1049710dc; end: 1049710e3; -[FBSDKMeasurementEventListener eventLogger] */

undefined8 FUN_1049710dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1049710e4; end: 1049710ef; -[FBSDKMeasurementEventListener setEventLogger:] */

void FUN_1049710e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 1049710f0; end: 1049710f7; -[FBSDKMeasurementEventListener sourceApplicationTracker] */

undefined8 FUN_1049710f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049710f8; end: 104971103; -[FBSDKMeasurementEventListener setSourceApplicationTracker:] */

void FUN_1049710f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104971104; end: 104971133; -[FBSDKMeasurementEventListener .cxx_destruct] */

void FUN_104971104(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104971134; end: 1049711cf; +[FBSDKMetadataIndexer shared] */

void FUN_104971134(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x1049711a8;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369d470 != -1) {
    func_0x00010002a2fc(0x11369d470,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d478);
  return;
}



/* Entry: 1049711d0; end: 104971273; -[FBSDKMetadataIndexer initWithUserDataStore:swizzler:] */

long FUN_1049711d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar3);
  pcVar2 = "com.facebook.appevents.MetadataIndexer";
  _dispatch_queue_create("com.facebook.appevents.MetadataIndexer",0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(char **)(param_1 + 0x18) = pcVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  _objc_storeStrong(param_1 + 0x28,param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104971274; end: 104971393; -[FBSDKMetadataIndexer enable] */

void FUN_104971274(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ade48;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c22ff20();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104971394;
    puStack_40 = &UNK_110842e18;
    if (lRam000000011369d480 != -1) {
      uStack_38 = param_1;
      func_0x00010002a2fc(0x11369d480,&puStack_58);
    }
  }
  return;
}



/* Entry: 104971394; end: 104971413;  */

void FUN_104971394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ade20;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf274a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc0c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c229ce0(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104971414; end: 1049714b7; -[FBSDKMetadataIndexer setupWithRules:] */

void FUN_104971414(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1049714b8;
    puStack_38 = &UNK_110841f80;
    lVar1 = param_3;
    uStack_30 = param_1;
    _objc_retain();
    lStack_28 = lVar1;
    if (lRam000000011369d488 != -1) {
      func_0x00010002a2fc(0x11369d488,&puStack_50);
    }
    _objc_release(lStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049714b8; end: 10497163f;  */

void FUN_1049714b8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **unaff_x21;
  long unaff_x22;
  undefined **unaff_x23;
  undefined8 *puVar10;
  undefined **unaff_x24;
  undefined8 uVar11;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined **unaff_x28;
  long lVar12;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  code *pcStack_4a8;
  undefined *puStack_4a0;
  undefined8 *puStack_498;
  long lStack_490;
  undefined **ppuStack_488;
  undefined8 *puStack_480;
  undefined **ppuStack_478;
  undefined1 ***pppuStack_470;
  code *pcStack_468;
  undefined *puStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_410 [128];
  long lStack_390;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  long lStack_350;
  undefined **ppuStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined *puStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_210 [128];
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf497c0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bfef660(*(undefined8 *)(param_1 + 0x20));
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  ppuVar1 = *(undefined ***)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain();
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*puStack_110;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x22 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        func_0x00010c0e00e0(unaff_x22,param_2,*(undefined8 *)(lStack_118 + (long)unaff_x24 * 8));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (unaff_x22 != 0) {
          _objc_release(ppuVar1);
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c2919c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x21 = *(undefined ***)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1954e0(uVar11,param_2,unaff_x21);
          _objc_release(unaff_x21);
          _objc_release(uVar11);
          ppuVar1 = *(undefined ***)(param_1 + 0x20);
          func_0x00010c228f60();
          goto LAB_104971608;
        }
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar2 != unaff_x24);
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60(ppuVar1,param_2,&uStack_120,auStack_d8,0x10);
      unaff_x21 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release();
LAB_104971608:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104971640;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c0d8420();
  puVar9 = ppuVar1[2];
  ppuVar1[2] = puVar3;
  _objc_release(puVar9);
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  puVar3 = ppuVar1[1];
  _objc_retain();
  puStack_318 = puVar3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x22 = *plStack_2c0;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_2c0 != unaff_x22) {
          _objc_enumerationMutation(puStack_318);
        }
        unaff_x24 = *(undefined ***)(lStack_2c8 + (long)puVar9 * 8);
        unaff_x25 = ppuVar1;
        func_0x00010c2919c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x25;
        func_0x00010bfc6780();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        ppuVar2 = unaff_x23;
        func_0x00010c08fa60();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puVar8 = PTR_PTR_1126add78;
        if (ppuVar2 != (undefined **)0x0) {
          unaff_x26 = ppuVar1[2];
          unaff_x28 = unaff_x23;
          func_0x00010bf44740(unaff_x23,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0a0c0(puVar4,param_2,unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(puVar8,param_2,unaff_x26,puVar4,unaff_x24);
          _objc_release(puVar4);
          _objc_release(unaff_x28);
          unaff_x25 = (undefined **)puVar8;
          unaff_x27 = puVar4;
        }
        _objc_release(unaff_x23);
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = puStack_318;
      func_0x00010bf52a60(puStack_318,param_2,&uStack_2d0,auStack_210,0x10);
      unaff_x21 = (undefined **)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puStack_318);
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  puVar9 = ppuVar1[1];
  _objc_retain();
  puVar5 = &uStack_310;
  puVar3 = puVar9;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x26 = (undefined *)*plStack_300;
    do {
      unaff_x27 = (undefined *)0x0;
      do {
        if ((undefined *)*plStack_300 != unaff_x26) {
          _objc_enumerationMutation(puVar9);
        }
        unaff_x22 = *(long *)(lStack_308 + (long)unaff_x27 * 8);
        unaff_x23 = (undefined **)ppuVar1[2];
        func_0x00010c0e00e0(unaff_x23,param_2,unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar8 = PTR_PTR_1126add78;
        if (unaff_x23 == (undefined **)0x0) {
          unaff_x24 = (undefined **)ppuVar1[2];
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010c0d8420();
          func_0x00010bf71e80(puVar8,param_2,unaff_x24,unaff_x25,unaff_x22);
          _objc_release(unaff_x25);
          unaff_x23 = (undefined **)puVar8;
        }
        unaff_x27 = unaff_x27 + 1;
      } while (puVar3 != unaff_x27);
      puVar5 = &uStack_310;
      puVar3 = puVar9;
      func_0x00010bf52a60();
      unaff_x21 = (undefined **)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_1049718ec;
  lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_458 = puVar3;
  ppuStack_380 = unaff_x28;
  puStack_378 = unaff_x27;
  puStack_370 = unaff_x26;
  ppuStack_368 = unaff_x25;
  ppuStack_360 = unaff_x24;
  ppuStack_358 = unaff_x23;
  lStack_350 = unaff_x22;
  ppuStack_348 = unaff_x21;
  puStack_340 = puVar9;
  ppuStack_338 = ppuVar1;
  ppuStack_330 = &puStack_130;
  _objc_retain();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  puVar6 = puVar5;
  func_0x00010bf52a60();
  if (puVar6 != (undefined8 *)0x0) {
    lVar12 = *plStack_440;
    ppuVar1 = &PTR_PTR_1126ad000;
    unaff_x21 = &PTR____CFConstantStringClassReference_110f148f8;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_440 != lVar12) {
          _objc_enumerationMutation(puVar5);
        }
        puVar3 = PTR_PTR_1126add78;
        uVar11 = *(undefined8 *)(lStack_448 + (long)puVar10 * 8);
        puVar7 = puVar5;
        func_0x00010c0e00e0(puVar5,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71fc0(puVar3,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar9 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f148f8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010c08fa60();
        if (puVar8 == (undefined *)0x0) {
          _objc_release(puVar9);
        }
        else {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfa5f8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar9);
          if (puVar8 != (undefined *)0x0) {
            func_0x00010bf71e80(PTR_PTR_1126add78,param_2,*(undefined8 *)(puStack_458 + 8),puVar3,
                                uVar11);
          }
        }
        _objc_release(puVar3);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar6 != puVar10);
      puVar6 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_450,auStack_410,0x10);
      unaff_x22 = 0;
    } while (puVar6 != (undefined8 *)0x0);
  }
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_390) {
    return;
  }
  ___stack_chk_fail();
  pcStack_468 = FUN_104971aa8;
  puStack_4b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_4b0 = 0xc2000000;
  pcStack_4a8 = FUN_104971b88;
  puStack_4a0 = &UNK_1108de198;
  ppuVar2 = &puStack_4b8;
  puStack_498 = puVar6;
  lStack_490 = unaff_x22;
  ppuStack_488 = unaff_x21;
  puStack_480 = puVar5;
  ppuStack_478 = ppuVar1;
  pppuStack_470 = &ppuStack_330;
  _objc_retainBlock(ppuVar2);
  puVar5 = puVar6;
  func_0x00010c265a00(puVar6);
  puVar3 = PTR_s_didMoveToWindow_112527020;
  puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c265920(puVar5,param_2,puVar3,puVar9,ppuVar2,
                      &PTR____CFConstantStringClassReference_110da5018);
  func_0x00010c265a00(puVar6);
  puVar9 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  func_0x00010c265920(puVar6,param_2,puVar3,puVar9,ppuVar2,
                      &PTR____CFConstantStringClassReference_110da5038);
  _objc_release(ppuVar2);
  return;
}



/* Entry: 104971640; end: 1049718eb; -[FBSDKMetadataIndexer initStore] */

void FUN_104971640(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **unaff_x21;
  long unaff_x22;
  undefined **unaff_x23;
  undefined8 *puVar9;
  undefined *unaff_x24;
  undefined8 uVar10;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined **unaff_x28;
  long lVar11;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined8 *puStack_378;
  long lStack_370;
  undefined **ppuStack_368;
  undefined8 *puStack_360;
  undefined **ppuStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [128];
  long lStack_270;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined *puStack_240;
  undefined **ppuStack_238;
  long lStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420();
  puVar8 = param_1[2];
  param_1[2] = puVar1;
  _objc_release(puVar8);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  puVar1 = param_1[1];
  _objc_retain();
  puStack_1f8 = puVar1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x22 = *plStack_1a0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != unaff_x22) {
          _objc_enumerationMutation(puStack_1f8);
        }
        unaff_x24 = *(undefined **)(lStack_1a8 + (long)puVar8 * 8);
        unaff_x25 = param_1;
        func_0x00010c2919c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x25;
        func_0x00010bfc6780();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        ppuVar2 = unaff_x23;
        func_0x00010c08fa60();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puVar7 = PTR_PTR_1126add78;
        if (ppuVar2 != (undefined **)0x0) {
          unaff_x26 = param_1[2];
          unaff_x28 = unaff_x23;
          func_0x00010bf44740(unaff_x23,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0a0c0(puVar3,param_2,unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(puVar7,param_2,unaff_x26,puVar3,unaff_x24);
          _objc_release(puVar3);
          _objc_release(unaff_x28);
          unaff_x25 = (undefined **)puVar7;
          unaff_x27 = puVar3;
        }
        _objc_release(unaff_x23);
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar1 = puStack_1f8;
      func_0x00010bf52a60(puStack_1f8,param_2,&uStack_1b0,auStack_f0,0x10);
      unaff_x21 = (undefined **)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puStack_1f8);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  puVar8 = param_1[1];
  _objc_retain();
  puVar4 = &uStack_1f0;
  puVar1 = puVar8;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x26 = (undefined *)*plStack_1e0;
    do {
      unaff_x27 = (undefined *)0x0;
      do {
        if ((undefined *)*plStack_1e0 != unaff_x26) {
          _objc_enumerationMutation(puVar8);
        }
        unaff_x22 = *(long *)(lStack_1e8 + (long)unaff_x27 * 8);
        unaff_x23 = (undefined **)param_1[2];
        func_0x00010c0e00e0(unaff_x23,param_2,unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = PTR_PTR_1126add78;
        if (unaff_x23 == (undefined **)0x0) {
          unaff_x24 = param_1[2];
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010c0d8420();
          func_0x00010bf71e80(puVar7,param_2,unaff_x24,unaff_x25,unaff_x22);
          _objc_release(unaff_x25);
          unaff_x23 = (undefined **)puVar7;
        }
        unaff_x27 = unaff_x27 + 1;
      } while (puVar1 != unaff_x27);
      puVar4 = &uStack_1f0;
      puVar1 = puVar8;
      func_0x00010bf52a60();
      unaff_x21 = (undefined **)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_1049718ec;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_338 = puVar1;
  ppuStack_260 = unaff_x28;
  puStack_258 = unaff_x27;
  puStack_250 = unaff_x26;
  ppuStack_248 = unaff_x25;
  puStack_240 = unaff_x24;
  ppuStack_238 = unaff_x23;
  lStack_230 = unaff_x22;
  ppuStack_228 = unaff_x21;
  puStack_220 = puVar8;
  ppuStack_218 = param_1;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    lVar11 = *plStack_320;
    param_1 = &PTR_PTR_1126ad000;
    unaff_x21 = &PTR____CFConstantStringClassReference_110f148f8;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        puVar1 = PTR_PTR_1126add78;
        uVar10 = *(undefined8 *)(lStack_328 + (long)puVar9 * 8);
        puVar6 = puVar4;
        func_0x00010c0e00e0(puVar4,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71fc0(puVar1,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar8 = puVar1;
        func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f148f8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010c08fa60();
        if (puVar7 == (undefined *)0x0) {
          _objc_release(puVar8);
        }
        else {
          puVar7 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfa5f8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar8);
          if (puVar7 != (undefined *)0x0) {
            func_0x00010bf71e80(PTR_PTR_1126add78,param_2,*(undefined8 *)(puStack_338 + 8),puVar1,
                                uVar10);
          }
        }
        _objc_release(puVar1);
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (puVar5 != puVar9);
      puVar5 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_330,auStack_2f0,0x10);
      unaff_x22 = 0;
    } while (puVar5 != (undefined8 *)0x0);
  }
  puVar5 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_104971aa8;
  puStack_398 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_390 = 0xc2000000;
  pcStack_388 = FUN_104971b88;
  puStack_380 = &UNK_1108de198;
  ppuVar2 = &puStack_398;
  puStack_378 = puVar5;
  lStack_370 = unaff_x22;
  ppuStack_368 = unaff_x21;
  puStack_360 = puVar4;
  ppuStack_358 = param_1;
  ppuStack_350 = &puStack_210;
  _objc_retainBlock(ppuVar2);
  puVar4 = puVar5;
  func_0x00010c265a00(puVar5);
  puVar1 = PTR_s_didMoveToWindow_112527020;
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c265920(puVar4,param_2,puVar1,puVar8,ppuVar2,
                      &PTR____CFConstantStringClassReference_110da5018);
  func_0x00010c265a00(puVar5);
  puVar8 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  func_0x00010c265920(puVar5,param_2,puVar1,puVar8,ppuVar2,
                      &PTR____CFConstantStringClassReference_110da5038);
  _objc_release(ppuVar2);
  return;
}



/* Entry: 1049718ec; end: 104971aa7; -[FBSDKMetadataIndexer constructRules:] */

void FUN_1049718ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **unaff_x19;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  lStack_138 = param_1;
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    unaff_x19 = &PTR_PTR_1126ad000;
    unaff_x21 = &PTR____CFConstantStringClassReference_110f148f8;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126add78;
        uVar8 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        lVar2 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71fc0(puVar3,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        puVar4 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f148f8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c08fa60();
        if (puVar5 == (undefined *)0x0) {
          _objc_release(puVar4);
        }
        else {
          puVar5 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfa5f8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if (puVar5 != (undefined *)0x0) {
            func_0x00010bf71e80(PTR_PTR_1126add78,param_2,*(undefined8 *)(lStack_138 + 8),puVar3,
                                uVar8);
          }
        }
        _objc_release(puVar3);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_104971aa8;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_104971b88;
  puStack_180 = &UNK_1108de198;
  ppuVar6 = &puStack_198;
  lStack_178 = lVar1;
  uStack_170 = unaff_x22;
  ppuStack_168 = unaff_x21;
  lStack_160 = param_3;
  ppuStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retainBlock(ppuVar6);
  lVar9 = lVar1;
  func_0x00010c265a00(lVar1);
  puVar3 = PTR_s_didMoveToWindow_112527020;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c265920(lVar9,param_2,puVar3,puVar4,ppuVar6,
                      &PTR____CFConstantStringClassReference_110da5018);
  func_0x00010c265a00(lVar1);
  puVar4 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  func_0x00010c265920(lVar1,param_2,puVar3,puVar4,ppuVar6,
                      &PTR____CFConstantStringClassReference_110da5038);
  _objc_release(ppuVar6);
  return;
}



/* Entry: 104971aa8; end: 104971b87; -[FBSDKMetadataIndexer setupMetadataIndexing] */

void FUN_104971aa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104971b88;
  puStack_40 = &UNK_1108de198;
  ppuVar2 = &puStack_58;
  uStack_38 = param_1;
  _objc_retainBlock(ppuVar2);
  uVar3 = param_1;
  func_0x00010c265a00(param_1);
  puVar1 = PTR_s_didMoveToWindow_112527020;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c265920(uVar3,param_2,puVar1,puVar4,ppuVar2,
                      &PTR____CFConstantStringClassReference_110da5018);
  func_0x00010c265a00(param_1);
  puVar4 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  func_0x00010c265920(param_1,param_2,puVar1,puVar4,ppuVar2,
                      &PTR____CFConstantStringClassReference_110da5038);
  _objc_release(ppuVar2);
  return;
}



/* Entry: 104971b88; end: 104971d5b;  */

void FUN_104971b88(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bf39c40();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 == 0) {
      lVar3 = param_2;
      func_0x00010bf481c0();
      _objc_release(lVar2);
      if ((int)lVar3 == 0) goto LAB_104971d38;
      puVar4 = PTR_PTR_1126ade58;
      func_0x00010bfcb180();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ade58;
      func_0x00010bfc6320();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bf38540();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfc6be0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfc6ae0();
      uVar8 = 0;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104971d5c;
      puStack_88 = &UNK_11094eca0;
      uStack_80 = *(undefined8 *)(param_1 + 0x20);
      puStack_78 = puVar4;
      puStack_70 = puVar5;
      uStack_68 = uVar6;
      uStack_60 = uVar7;
      uStack_58 = uVar1;
      _objc_retain(uVar6);
      _objc_retain(puVar5);
      _objc_retain(puVar4);
      func_0x00010007380c(uVar8,&puStack_a0);
      _objc_release(uVar8);
      _objc_release(uStack_68);
      _objc_release(puStack_70);
      _objc_release(puStack_78);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
  }
  _objc_release();
LAB_104971d38:
  _objc_release(param_2);
  return;
}



/* Entry: 104971d5c; end: 104971d73;  */

void FUN_104971d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc7950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_getMetadataWithText_placeholder__1125cf7f8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 104971d74; end: 104971e3f; -[FBSDKMetadataIndexer getSiblingViewsOfView:] */

void FUN_104971d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ade58;
  func_0x00010bfc8820(PTR_PTR_1126ade58,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc3960(PTR_PTR_1126ade58,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_104971e18;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_104971e18:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104971e40; end: 104972067; -[FBSDKMetadataIndexer getLabelsOfView:] */

undefined8 * FUN_104971e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  puVar1 = PTR_PTR_1126ade58;
  func_0x00010bfc6320(PTR_PTR_1126ade58,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0db460(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar11,lVar2);
  }
  lVar3 = param_1;
  func_0x00010bfca500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar9 = &uStack_130;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
        func_0x00010bf39c40(PTR__OBJC_CLASS___UILabel_1126aec30);
        uVar5 = uVar12;
        func_0x00010c075f00(uVar12,param_2,puVar1);
        if ((int)uVar5 != 0) {
          puVar1 = PTR_PTR_1126ade58;
          func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010c0db460(param_1,param_2,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          lVar7 = lVar6;
          func_0x00010c08fa60();
          if (lVar7 != 0) {
            func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar11,lVar6);
          }
          _objc_release(lVar6);
        }
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      puVar9 = &uStack_130;
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  puVar8 = puVar11;
  func_0x00010bf51e00(puVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  puVar11 = puVar9;
  func_0x00010c075f00(puVar9,param_2,puVar1);
  if (((ulong)puVar11 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UITextView_1126afb88);
    puVar11 = puVar9;
    func_0x00010c075f00(puVar9,param_2,puVar1);
    if ((int)puVar11 == 0) {
      puVar11 = (undefined8 *)0x0;
      goto LAB_1049720cc;
    }
  }
  puVar11 = puVar9;
  func_0x00010c07d600(puVar9);
LAB_1049720cc:
  _objc_release(puVar9);
  return puVar11;
}



/* Entry: 104972068; end: 1049720e3; -[FBSDKMetadataIndexer checkSecureTextEntry:] */

ulong FUN_104972068(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UITextView_1126afb88);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_1049720cc;
    }
  }
  uVar2 = param_3;
  func_0x00010c07d600(param_3);
LAB_1049720cc:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1049720e4; end: 10497215f; -[FBSDKMetadataIndexer getKeyboardType:] */

ulong FUN_1049720e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UITextView_1126afb88);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_104972148;
    }
  }
  uVar2 = param_3;
  func_0x00010c086c60(param_3);
LAB_104972148:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104972160; end: 10497253f; -[FBSDKMetadataIndexer getMetadataWithText:placeholder:labels:secureTextEntry:inputType:] */

void FUN_104972160(undefined1 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **unaff_x24;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined **ppuStack_1a0;
  undefined1 *puStack_198;
  long lStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  ulong uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  long lStack_138;
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
  puVar5 = param_4;
  _objc_retain();
  uStack_150 = param_5;
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c0db520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c0db460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (((((param_6 & 1) == 0) && (puVar2 = puVar4, func_0x00010bf4bb00(), ((ulong)puVar2 & 1) == 0))
      && (puVar2 = puVar1, func_0x00010c08fa60(), puVar2 != (undefined1 *)0x0)) &&
     ((puVar2 = puVar1, func_0x00010c08fa60(), puVar2 < (undefined1 *)0x65 &&
      (puVar2 = puVar4, func_0x00010c08fa60(), puVar2 < (undefined1 *)0x64)))) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 8);
    _objc_retain();
    puVar5 = auStack_f0;
    lStack_158 = lVar3;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lStack_138 = *plStack_120;
      unaff_x24 = &PTR____CFConstantStringClassReference_110dfa5f8;
      puStack_160 = param_1;
      puStack_148 = puVar1;
      puStack_140 = puVar4;
      do {
        param_3 = 0;
        do {
          if (*plStack_120 != lStack_138) {
            _objc_enumerationMutation(lStack_158);
          }
          param_6 = *(ulong *)(lStack_128 + param_3 * 8);
          puVar4 = *(undefined1 **)(param_1 + 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          param_4 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = param_1;
          func_0x00010bf381e0();
          if ((int)puVar5 == 0) {
            puVar5 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = param_1;
            func_0x00010bf38200();
            _objc_release(puVar5);
            _objc_release(param_4);
            if ((int)puVar2 != 0) goto LAB_104972344;
          }
          else {
            _objc_release(param_4);
LAB_104972344:
            _objc_retain();
            uVar6 = param_6;
            func_0x00010c0720c0();
            param_4 = puVar1;
            if ((int)uVar6 != 0) {
              puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
              func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar1;
              func_0x00010bf44700();
              _objc_retainAutoreleasedReturnValue();
              param_4 = puVar5;
              func_0x00010bf446e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar1);
              _objc_release(puVar5);
              _objc_release(puVar7);
              param_1 = puStack_160;
            }
            puVar5 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar5;
            func_0x00010c0720c0();
            if ((int)puVar1 == 0) {
              puVar1 = puVar4;
              func_0x00010c0e00e0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = param_1;
              func_0x00010bf38220();
              _objc_release(puVar1);
              _objc_release(puVar5);
              if ((int)puVar2 != 0) goto LAB_104972468;
            }
            else {
              _objc_release(puVar5);
LAB_104972468:
              puVar5 = param_1;
              func_0x00010c11a0c0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf37c00(param_1);
              _objc_release(puVar5);
            }
            _objc_release(param_4);
            puVar1 = puStack_148;
          }
          _objc_release(puVar4);
          puVar4 = puStack_140;
          param_3 = param_3 + 1;
        } while (lVar3 != param_3);
        puVar5 = auStack_f0;
        lVar3 = lStack_158;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lStack_158);
  }
  _objc_release(uStack_150);
  _objc_release(puVar4);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_104972540;
    ppuStack_1a0 = unaff_x24;
    puStack_198 = param_4;
    lStack_190 = param_3;
    puStack_188 = puVar1;
    puStack_180 = param_1;
    uStack_178 = param_6;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar7 = PTR_PTR_1126add08;
    func_0x00010bdc25e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_1a8,*(undefined8 *)(puVar4 + 0x10));
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x104972658;
    puStack_1d0 = &UNK_110850cf8;
    puStack_1c8 = puVar7;
    _objc_retain(puVar7);
    _objc_copyWeak(auStack_1b0,auStack_1a8);
    puStack_1c0 = puVar5;
    puStack_1b8 = puVar4;
    _objc_retain(puVar5);
    ppuVar8 = &puStack_1e8;
    _objc_retainBlock(ppuVar8);
    func_0x00010007380c(*(undefined8 *)(puVar4 + 0x18),ppuVar8);
    _objc_release(ppuVar8);
    _objc_release(puStack_1c0);
    _objc_destroyWeak(auStack_1b0);
    _objc_release(puStack_1c8);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_1a8);
    return;
  }
  return;
}



/* Entry: 104972540; end: 10497288f; -[FBSDKMetadataIndexer checkAndAppendData:forKey:] */

void FUN_104972540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain();
  puVar1 = PTR_PTR_1126add08;
  func_0x00010bdc25e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x10));
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104972658;
  puStack_70 = &UNK_110850cf8;
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_60 = param_4;
  lStack_58 = param_1;
  _objc_retain(param_4);
  ppuVar2 = &puStack_88;
  _objc_retainBlock(ppuVar2);
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x18),ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_release(puStack_68);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104972890; end: 1049729cf; -[FBSDKMetadataIndexer checkMetadataLabels:matchRuleK:] */

bool FUN_104972890(ulong param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  puVar3 = auStack_d8;
  lVar13 = param_3;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar12 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar10 = *(undefined8 **)(lStack_118 + lVar14 * 8);
        uVar2 = param_1;
        puVar3 = param_4;
        func_0x00010bf381e0();
        if ((uVar2 & 1) != 0) {
          bVar1 = true;
          goto LAB_10497297c;
        }
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      puVar3 = auStack_d8;
      lVar13 = param_3;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  bVar1 = false;
LAB_10497297c:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return bVar1;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)puVar10;
  puVar7 = puVar3;
  _objc_retain();
  _objc_retain();
  puVar4 = (undefined1 *)puVar10;
  func_0x00010c08fa60();
  bVar1 = false;
  if ((puVar3 != (undefined1 *)0x0) && (puVar4 != (undefined1 *)0x0)) {
    puVar4 = puVar3;
    func_0x00010bf44740(puVar3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain();
    puVar7 = auStack_1f8;
    puVar5 = puVar4;
    func_0x00010bf52a60();
    bVar1 = false;
    if (puVar5 != (undefined1 *)0x0) {
      lVar13 = *plStack_230;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar13) {
            _objc_enumerationMutation(puVar4);
          }
          puVar11 = *(undefined8 **)(lStack_238 + (long)puVar15 * 8);
          puVar6 = (undefined1 *)puVar10;
          func_0x00010bf4bb00();
          if (((ulong)puVar6 & 1) != 0) {
            bVar1 = true;
            goto LAB_104972ad8;
          }
          puVar15 = puVar15 + 1;
        } while (puVar5 != puVar15);
        puVar7 = auStack_1f8;
        puVar5 = puVar4;
        puVar11 = &uStack_240;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined1 *)0x0);
      bVar1 = false;
    }
LAB_104972ad8:
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar5 = (undefined1 *)puVar11;
  }
  _objc_release(puVar3);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  puVar3 = puVar5;
  func_0x00010c08fa60();
  bVar1 = false;
  if ((puVar7 != (undefined1 *)0x0) && (puVar3 != (undefined1 *)0x0)) {
    puVar8 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    _objc_alloc(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    func_0x00010c034740();
    puVar3 = puVar5;
    func_0x00010c08fa60(puVar5);
    puVar9 = puVar8;
    func_0x00010c0defc0(puVar8,param_2,puVar5,0,0,puVar3);
    bVar1 = puVar9 == (undefined *)0x1;
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  return bVar1;
}



/* Entry: 1049729d0; end: 104972b33; -[FBSDKMetadataIndexer checkMetadataHint:matchRuleK:] */

bool FUN_1049729d0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar5 = param_4;
  _objc_retain();
  _objc_retain();
  puVar2 = param_3;
  func_0x00010c08fa60();
  bVar1 = false;
  if ((param_4 != (undefined1 *)0x0) && (puVar2 != (undefined1 *)0x0)) {
    puVar2 = param_4;
    func_0x00010bf44740(param_4,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain();
    puVar5 = auStack_d8;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    bVar1 = false;
    if (puVar3 != (undefined1 *)0x0) {
      lVar9 = *plStack_110;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          puVar8 = *(undefined8 **)(lStack_118 + (long)puVar10 * 8);
          puVar4 = param_3;
          func_0x00010bf4bb00();
          if (((ulong)puVar4 & 1) != 0) {
            bVar1 = true;
            goto LAB_104972ad8;
          }
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar5 = auStack_d8;
        puVar3 = puVar2;
        puVar8 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
      bVar1 = false;
    }
LAB_104972ad8:
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar8;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  puVar2 = puVar3;
  func_0x00010c08fa60();
  bVar1 = false;
  if ((puVar5 != (undefined1 *)0x0) && (puVar2 != (undefined1 *)0x0)) {
    puVar6 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    _objc_alloc(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    func_0x00010c034740();
    puVar2 = puVar3;
    func_0x00010c08fa60(puVar3);
    puVar7 = puVar6;
    func_0x00010c0defc0(puVar6,param_2,puVar3,0,0,puVar2);
    bVar1 = puVar7 == (undefined *)0x1;
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  return bVar1;
}



/* Entry: 104972b34; end: 104972be7; -[FBSDKMetadataIndexer checkMetadataText:matchRuleV:] */

bool FUN_104972b34(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain();
  lVar2 = param_3;
  func_0x00010c08fa60();
  bVar1 = false;
  if ((param_4 != 0) && (lVar2 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    _objc_alloc(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    func_0x00010c034740();
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    puVar4 = puVar3;
    func_0x00010c0defc0(puVar3,param_2,param_3,0,0,lVar2);
    bVar1 = puVar4 == (undefined *)0x1;
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104972be8; end: 104972caf; -[FBSDKMetadataIndexer normalizeField:] */

void FUN_104972be8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                        &PTR____CFConstantStringClassReference_110da5078,1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c08fa60(param_3);
    ppuVar3 = ppuVar2;
    func_0x00010c25cfa0(ppuVar2,param_2,param_3,0,0,lVar1,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104972cb0; end: 104972d4b; -[FBSDKMetadataIndexer normalizeValue:] */

void FUN_104972cb0(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010c25d0a0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104972d4c; end: 104972f1f; -[FBSDKMetadataIndexer pruneValue:forKey:] */

void FUN_104972d4c(undefined8 param_1,undefined8 param_2,undefined **param_3,ulong param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain();
  _objc_retain();
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_104972eb4;
  }
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e6fb58);
  if ((int)uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e703b8);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = param_4,
       func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e703d8),
       (int)uVar2 != 0)) {
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c0989a0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_3;
      func_0x00010bf44700(param_3,param_2,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar4;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(ppuVar4);
      param_3 = ppuVar5;
LAB_104972e8c:
      _objc_release(ppuVar3);
      goto LAB_104972e98;
    }
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e703f8);
    if ((int)uVar2 != 0) {
      ppuVar5 = param_3;
      func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_3;
      param_3 = ppuVar5;
      goto LAB_104972e8c;
    }
  }
  else {
    ppuVar5 = param_3;
    func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e192d8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e192d8;
    if ((((ulong)ppuVar5 & 1) == 0) &&
       (ppuVar5 = param_3,
       func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f14898),
       ((ulong)ppuVar5 & 1) == 0)) {
      ppuVar5 = param_3;
      func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da1598);
      if ((int)ppuVar5 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ecc298;
      }
    }
LAB_104972e98:
    _objc_release(param_3);
    param_3 = ppuVar1;
  }
  _objc_retain(param_3);
  ppuVar1 = param_3;
LAB_104972eb4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104972f20; end: 104972f27; -[FBSDKMetadataIndexer rules] */

undefined8 FUN_104972f20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104972f28; end: 104972f2f; -[FBSDKMetadataIndexer store] */

undefined8 FUN_104972f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104972f30; end: 104972f37; -[FBSDKMetadataIndexer serialQueue] */

undefined8 FUN_104972f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104972f38; end: 104972f3f; -[FBSDKMetadataIndexer userDataStore] */

undefined8 FUN_104972f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104972f40; end: 104972f47; -[FBSDKMetadataIndexer swizzler] */

undefined8 FUN_104972f40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104972f48; end: 104972f9b; -[FBSDKMetadataIndexer .cxx_destruct] */

void FUN_104972f48(long param_1)

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



/* Entry: 104972f9c; end: 104972f9f;  */

long * FUN_104972f9c(long *param_1)

{
  long lVar1;
  
  func_0x000104978374(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104972fa0; end: 10497303b; +[FBSDKModelManager shared] */

void FUN_104972fa0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x104973014;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369d4c8 != -1) {
    func_0x00010002a2fc(0x11369d4c8,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d4d0);
  return;
}



/* Entry: 10497303c; end: 1049731db; -[FBSDKModelManager configureWithFeatureChecker:graphRequestFactory:fileManager:store:getAppID:dataExtractor:gateKeeperManager:suggestedEventsIndexer:featureExtractor:] */

void FUN_10497303c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  uVar2 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar1);
  _objc_storeStrong(param_1 + 0x38,param_8);
  _objc_storeStrong(param_1 + 0x40,param_9);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar2);
  _objc_storeStrong(param_1 + 0x50,param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049731dc; end: 104973247; -[FBSDKModelManager enable] */

void FUN_1049731dc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104973248;
  puStack_20 = &UNK_11087bb00;
  if (lRam000000011369d4d8 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x11369d4d8,&puStack_38);
  }
  return;
}



/* Entry: 104973248; end: 10497361f;  */

void FUN_104973248(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((puVar3 != (undefined *)0x0) &&
     (puVar2 = puVar3, func_0x00010c0720c0(), ((ulong)puVar2 & 1) == 0)) goto LAB_104973550;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puRam000000011369d490;
  puRam000000011369d490 = puVar4;
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bfa1640();
  _objc_release(uVar5);
  if ((uVar10 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bface80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa15e0();
    _objc_release(uVar6);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c2573e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lRam000000011369d498;
  lRam000000011369d498 = lVar11;
  _objc_release(lVar9);
  _objc_release(lVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2573e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar9 = lRam000000011369d498;
  func_0x00010bf529e0();
  if (lVar9 == 0) {
LAB_104973430:
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar11 = *(long *)(param_1 + 0x20);
    func_0x00010bfc24c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    (**(code **)(lVar11 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfcde20(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010bf56600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c251a80(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar8);
    _objc_release(puVar2);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfa1d00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c071820();
    if ((uVar10 & 1) == 0) {
      _objc_release(uVar5);
      goto LAB_104973430;
    }
    uVar10 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf39c40();
    func_0x00010c082f20();
    _objc_release(uVar5);
    if ((uVar10 & 1) == 0) goto LAB_104973430;
    func_0x00010bf37e80(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(uVar6);
LAB_104973550:
  _objc_release(puVar3);
  return;
}



/* Entry: 104973620; end: 1049738b3;  */

void FUN_104973620(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain();
  if (param_4 == 0) {
    puVar1 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = puVar2;
    func_0x00010c075f00();
    if ((int)puVar3 != 0) {
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010bf39c40();
      func_0x00010bf51560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x00010c0d3c80();
        lVar4 = lRam000000011369d498;
        lRam000000011369d498 = lVar6;
        _objc_release(lVar4);
        lVar4 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bf39c40();
        func_0x00010c114f00();
        _objc_release(lVar4);
        lVar4 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar4);
        lVar6 = lVar4;
        func_0x00010c2573e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa1780();
        _objc_release(lVar6);
        _objc_release(lVar4);
        lVar4 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar4);
        lVar6 = lVar4;
        func_0x00010c2573e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa1780(lVar6);
        _objc_release(puVar3);
        _objc_release(lVar6);
        _objc_release(lVar4);
      }
      _objc_release(lVar5);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010bf37e80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1049738b4; end: 104973b27; -[FBSDKModelManager getRulesForKey:] */

void FUN_1049738b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = uRam000000011369d498;
  puVar2 = PTR_PTR_1126add78;
  puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010bf71e60(puVar2,param_2,uVar1,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da5138);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = lRam000000011369d490;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da5138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da5158);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ce00(lVar4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar3);
      if (lVar4 != 0) {
        func_0x00010bf63820(param_1);
        func_0x00010bfa1620();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126add78;
        func_0x00010bdc1900(PTR_PTR_1126add78,param_2,param_1,0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        _objc_release(lVar4);
        _objc_release(puVar2);
        goto LAB_104973a28;
      }
    }
  }
  _objc_release(puVar2);
  puVar5 = (undefined *)0x0;
LAB_104973a28:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104973b28; end: 104973d2b; -[FBSDKModelManager getWeightsForKey:] */

void FUN_104973b28(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (lRam000000011369d498 == 0 || lRam000000011369d490 == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_104973cac;
  }
  ppuVar1 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da5198);
  if ((int)ppuVar1 != 0) {
    _objc_release(param_3);
    param_3 = &PTR____CFConstantStringClassReference_110da5198;
  }
  lVar4 = lRam000000011369d498;
  puVar2 = PTR_PTR_1126add78;
  puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010bf71e60(puVar2,param_2,lVar4,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_104973c90:
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da5138);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = lRam000000011369d490;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 == (undefined *)0x0) goto LAB_104973c90;
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da5138);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da51b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce00(lVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    if (lVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64aa0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar4,1,0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
LAB_104973cac:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


