/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10494d460; end: 10494d46b;  */

void FUN_10494d460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__handleResponse__112569670,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10494d46c; end: 10494d53f; +[FBSDKAuthenticationStatusUtility _handleResponse:] */

void FUN_10494d46c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c252ee0();
  if ((lVar1 == 200) &&
     (lVar1 = param_3, func_0x00010c13b700(param_3,param_2,PTR_s_allHeaderFields_11259da18),
     (int)lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010bf001c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126add78;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bf71e60(puVar3,param_2,lVar1,&PTR____CFConstantStringClassReference_110da24b8,puVar2
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0720c0();
    if ((int)puVar2 != 0) {
      func_0x00010be3d860(param_1);
    }
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494d540; end: 10494d693; +[FBSDKAuthenticationStatusUtility _requestURL] */

/* WARNING: Removing unreachable block (ram,0x00010494d638) */

void FUN_10494d540(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf10d80();
  func_0x00010bf5e0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c273280();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126add20;
    func_0x00010c22c4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c282cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    _objc_retain();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010beecd80();
    func_0x00010c186f00();
    func_0x00010bf10d80(param_1);
    func_0x00010c186fe0();
    func_0x00010c117260(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c187970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10494d694; end: 10494d6d7; +[FBSDKAuthenticationStatusUtility _invalidateCurrentSession] */

void FUN_10494d694(undefined8 param_1)

{
  func_0x00010beecd80();
  func_0x00010c186f00();
  func_0x00010bf10d80(param_1);
  func_0x00010c186fe0();
  func_0x00010c117260(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c187970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10494d6d8; end: 10494d7a7; -[FBSDKAuthenticationToken initWithTokenString:nonce:graphDomain:] */

undefined1 *
FUN_10494d6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar4 = &uStack_60;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e32e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar4 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x10),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x18),param_5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar4;
}



/* Entry: 10494d7a8; end: 10494d7b3; -[FBSDKAuthenticationToken initWithTokenString:nonce:] */

void FUN_10494d7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c053ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTokenString_nonce_graphD_1125f2a08,param_3,param_4,
             &PTR____CFConstantStringClassReference_110e61a78);
  return;
}



/* Entry: 10494d7b4; end: 10494d7bf; +[FBSDKAuthenticationToken currentAuthenticationToken] */

void FUN_10494d7b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf98);
  return;
}



/* Entry: 10494d7c0; end: 10494d83b; +[FBSDKAuthenticationToken setCurrentAuthenticationToken:] */

void FUN_10494d7c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  if (lRam000000011369cf98 != lVar1) {
    _objc_storeStrong(0x11369cf98,param_3);
    func_0x00010c272fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c940();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10494d83c; end: 10494d8df; -[FBSDKAuthenticationToken claims] */

void FUN_10494d83c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf44740(lVar1,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 3) {
    puVar3 = PTR_PTR_1126add78;
    func_0x00010bf09f40(PTR_PTR_1126add78,param_2,lVar1,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ade08;
    _objc_alloc(PTR_PTR_1126ade08);
    func_0x00010c00fba0();
    _objc_release(puVar3);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10494d8e0; end: 10494d8eb; +[FBSDKAuthenticationToken tokenCache] */

void FUN_10494d8e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfa0);
  return;
}



/* Entry: 10494d8ec; end: 10494d937; +[FBSDKAuthenticationToken setTokenCache:] */

void FUN_10494d8ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  if (lRam000000011369cfa0 != lVar1) {
    _objc_storeStrong(0x11369cfa0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10494d938; end: 10494d947; +[FBSDKAuthenticationToken resetTokenCache] */

void FUN_10494d938(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam000000011369cfa0;
  uRam000000011369cfa0 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10494d948; end: 10494d94f; +[FBSDKAuthenticationToken supportsSecureCoding] */

undefined8 FUN_10494d948(void)

{
  return 1;
}



/* Entry: 10494d950; end: 10494da43; -[FBSDKAuthenticationToken initWithCoder:] */

undefined8 FUN_10494d950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da2518);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da2538);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da2558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c053fe0(param_1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10494da44; end: 10494daeb; -[FBSDKAuthenticationToken encodeWithCoder:] */

void FUN_10494da44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c273280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110da2518);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0db0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110da2538);
  _objc_release(lVar1);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da2558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494daec; end: 10494daef; -[FBSDKAuthenticationToken copyWithZone:] */

void FUN_10494daec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10494daf0; end: 10494daf7; -[FBSDKAuthenticationToken tokenString] */

undefined8 FUN_10494daf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10494daf8; end: 10494daff; -[FBSDKAuthenticationToken nonce] */

undefined8 FUN_10494daf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10494db00; end: 10494db07; -[FBSDKAuthenticationToken graphDomain] */

undefined8 FUN_10494db00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10494db08; end: 10494db0f; -[FBSDKAuthenticationToken jti] */

undefined8 FUN_10494db08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10494db10; end: 10494db1b; -[FBSDKAuthenticationToken setJti:] */

void FUN_10494db10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10494db1c; end: 10494db63; -[FBSDKAuthenticationToken .cxx_destruct] */

void FUN_10494db1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10494db64; end: 10494dbd7; -[FBSDKBridgeAPIProtocolWebV1 init] */

undefined8 FUN_10494db64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ade10;
  func_0x00010c0d8420(PTR_PTR_1126ade10);
  puVar2 = PTR_PTR_1126add20;
  func_0x00010c22c4c0(PTR_PTR_1126add20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0108a0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10494dbd8; end: 10494dc7b; -[FBSDKBridgeAPIProtocolWebV1 initWithErrorFactory:internalUtility:] */

undefined1 *
FUN_10494dbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_48 = PTR_PTR_1126e32f0;
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



/* Entry: 10494dc7c; end: 10494df4f; -[FBSDKBridgeAPIProtocolWebV1 requestURLWithActionID:scheme:methodName:parameters:error:] */

undefined **
FUN_10494dc7c(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined **ppuVar9;
  long lStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_6;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = PTR_PTR_1126add78;
  ppuVar4 = param_3;
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
LAB_10494def4:
    puVar3 = unaff_x23;
    ppuVar9 = (undefined **)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    ppuVar4 = param_5;
    func_0x00010bf3f0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126add58;
    unaff_x24 = (undefined *)0x0;
    unaff_x23 = puVar1;
    if (puVar2 == (undefined *)0x0) goto LAB_10494def4;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110fca5b8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_70 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_78,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc19c0(puVar3,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    ppuStack_88 = &PTR____CFConstantStringClassReference_110da2578;
    unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_88,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
    func_0x00010c069660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar4;
    func_0x00010bf065c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    unaff_x26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010c00c560();
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,unaff_x26,
                        &PTR____CFConstantStringClassReference_110da25b8,
                        &PTR____CFConstantStringClassReference_110dc0e18);
    puVar1 = PTR_PTR_1126add78;
    ppuVar4 = unaff_x25;
    func_0x00010beec820(unaff_x25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,unaff_x26,ppuVar4,
                        &PTR____CFConstantStringClassReference_110db9598);
    _objc_release(ppuVar4);
    func_0x00010bef7f60(unaff_x26,param_2,param_6);
    func_0x00010c069660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110da25d8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110da25d8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e192d8;
    puVar8 = (undefined8 *)0x0;
    ppuVar9 = param_1;
    param_4 = ppuVar5;
    func_0x00010bf9f3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(param_1);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  ppuVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_98 = FUN_10494df50;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x26;
  ppuStack_d8 = unaff_x25;
  puStack_d0 = unaff_x24;
  puStack_c8 = puVar3;
  ppuStack_c0 = ppuVar9;
  puStack_b8 = param_6;
  ppuStack_b0 = param_5;
  ppuStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_4);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
  }
  puVar1 = PTR_PTR_1126add78;
  ppuVar9 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110db0dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fe0(puVar1,param_2,ppuVar9);
  _objc_release(ppuVar9);
  puVar3 = PTR_PTR_1126add78;
  if (puVar1 == (undefined *)0x0) {
    ppuVar9 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110da2578);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3f0e0(puVar3,param_2,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    lStack_100 = 0;
    puVar1 = PTR_PTR_1126add58;
    func_0x00010c0dff00(PTR_PTR_1126add58,param_2,puVar3,&lStack_100);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lStack_100;
    _objc_retain();
    if (puVar1 == (undefined *)0x0) {
      ppuVar9 = (undefined **)0x0;
      if ((puVar8 != (undefined8 *)0x0) && (lVar6 != 0)) {
        func_0x00010bf98ac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
        func_0x00010c069b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        ppuVar9 = (undefined **)0x0;
        *puVar8 = ppuVar7;
        goto LAB_10494e22c;
      }
    }
    else {
      puVar2 = puVar1;
      func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110fca5b8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = (undefined **)PTR_PTR_1126add78;
      func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      ppuVar9 = ppuVar5;
      func_0x00010c0720c0(ppuVar5,param_2,ppuVar4);
      if ((int)ppuVar9 == 0) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        ppuVar9 = param_4;
        func_0x00010c0d3c80(param_4);
        func_0x00010c12d3e0();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar9,param_2,puVar2,&PTR____CFConstantStringClassReference_110da2618)
        ;
        _objc_release(puVar2);
      }
LAB_10494e22c:
      _objc_release(ppuVar5);
    }
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(lVar6);
  }
  else if (puVar1 == (undefined *)0x1069) {
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110da25f8;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110daf8b8;
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_f0,&ppuStack_f8,1
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar8 != (undefined8 *)0x0) {
      ppuVar9 = param_4;
      func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e0a338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f0e0(puVar3,param_2,ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      func_0x00010bf98ac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x00010bf99200();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar8 = ppuVar9;
      _objc_release(ppuVar5);
      _objc_release(puVar3);
    }
    ppuVar9 = (undefined **)0x0;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    return (undefined **)ppuVar4[1];
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return ppuVar9;
}



/* Entry: 10494df50; end: 10494e297; -[FBSDKBridgeAPIProtocolWebV1 responseParametersForActionID:queryParameters:cancelled:error:] */

undefined *
FUN_10494df50(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  puVar2 = PTR_PTR_1126add78;
  puVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110db0dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fe0(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126add78;
  if (puVar2 != (undefined *)0x0) {
    if (puVar2 == (undefined *)0x1069) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110da25f8;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110daf8b8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68
                          ,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_6 != (undefined8 *)0x0) {
        puVar2 = param_4;
        func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e0a338);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3f0e0(puVar1,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        func_0x00010bf98ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010bf99200();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_6 = puVar2;
        _objc_release(param_1);
        _objc_release(puVar1);
      }
      puVar5 = (undefined *)0x0;
    }
    goto LAB_10494e24c;
  }
  puVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110da2578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lStack_70 = 0;
  puVar2 = PTR_PTR_1126add58;
  func_0x00010c0dff00(PTR_PTR_1126add58,param_2,puVar1,&lStack_70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lStack_70;
  _objc_retain();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    if ((param_6 != (undefined8 *)0x0) && (lVar3 != 0)) {
      func_0x00010bf98ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c069b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar5 = (undefined *)0x0;
      *param_6 = puVar4;
      goto LAB_10494e22c;
    }
  }
  else {
    puVar5 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110fca5b8);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126add78;
    func_0x00010bf3f0e0(PTR_PTR_1126add78,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010c0720c0(param_1,param_2,param_3);
    if ((int)puVar5 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = param_4;
      func_0x00010c0d3c80(param_4);
      func_0x00010c12d3e0();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110da2618);
      _objc_release(puVar4);
    }
LAB_10494e22c:
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar3);
LAB_10494e24c:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 8);
}



/* Entry: 10494e298; end: 10494e29f; -[FBSDKBridgeAPIProtocolWebV1 errorFactory] */

undefined8 FUN_10494e298(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10494e2a0; end: 10494e2a7; -[FBSDKBridgeAPIProtocolWebV1 internalUtility] */

undefined8 FUN_10494e2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10494e2a8; end: 10494e2d7; -[FBSDKBridgeAPIProtocolWebV1 .cxx_destruct] */

void FUN_10494e2a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10494e2d8; end: 10494e3cb; -[FBSDKBridgeAPIProtocolWebV2 init] */

undefined8 FUN_10494e2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ade10;
  func_0x00010c0d8420(PTR_PTR_1126ade10);
  puVar2 = PTR_PTR_1126ade18;
  _objc_alloc(PTR_PTR_1126ade18);
  func_0x00010bff3600();
  puVar3 = PTR_PTR_1126ade20;
  func_0x00010c22b6a0(PTR_PTR_1126ade20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126add20;
  func_0x00010c22c4c0(PTR_PTR_1126add20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044be0(param_1,param_2,puVar3,puVar2,puVar1,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10494e3cc; end: 10494e4eb; -[FBSDKBridgeAPIProtocolWebV2 initWithServerConfigurationProvider:nativeBridge:errorFactory:internalUtility:infoDictionaryProvider:] */

undefined8 *
FUN_10494e3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = param_3;
  _objc_retain();
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  uVar4 = param_6;
  _objc_retain(param_6);
  uVar5 = param_7;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e32f8;
  puVar6 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  if (puVar6 != (undefined8 *)0x0) {
    _objc_storeStrong(puVar6 + 1,param_3);
    _objc_storeStrong(puVar6 + 2,param_4);
    _objc_storeStrong(puVar6 + 3,param_5);
    _objc_storeStrong(puVar6 + 4,param_6);
    _objc_storeStrong(puVar6 + 5,param_7);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return puVar6;
}



/* Entry: 10494e4ec; end: 10494e667; -[FBSDKBridgeAPIProtocolWebV2 _redirectURLWithActionID:methodName:error:] */

void FUN_10494e4ec(undefined **param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110fca5b8;
    lStack_60 = param_3;
    _objc_retain(param_3);
    func_0x00010bf72080(puVar1,param_2,&lStack_60,&ppuStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126add58;
    func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110da2578;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010c069660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110da2598;
  ppuVar4 = param_1;
  ppuVar7 = param_4;
  func_0x00010bf065c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar4 = ppuVar5;
    if (ppuVar6 == (undefined **)0x0) {
      func_0x00010c069660(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c0f5800(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_4;
      func_0x00010bf9f3a0(param_4,param_2,&PTR____CFConstantStringClassReference_110e192d8,ppuVar6,
                          *(undefined8 *)PTR____NSDictionary0___11034ab50,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar6);
      _objc_release(param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10494e668; end: 10494e733; -[FBSDKBridgeAPIProtocolWebV2 _requestURLForDialogConfiguration:error:] */

void FUN_10494e668(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  if (lVar1 == 0) {
    func_0x00010c069660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf9f3a0(param_1,param_2,&PTR____CFConstantStringClassReference_110e192d8,lVar1,
                        *(undefined8 *)PTR____NSDictionary0___11034ab50,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10494e734; end: 10494eadb; -[FBSDKBridgeAPIProtocolWebV2 requestURLWithActionID:scheme:methodName:parameters:error:] */

void FUN_10494e734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain();
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010c15f080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf274a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf71d20(lVar2,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_7 == (long *)0x0) goto LAB_10494ea5c;
    func_0x00010bf98ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf99200();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar9 = 0;
    *param_7 = lVar8;
  }
  else {
    lVar8 = param_1;
    func_0x00010c0d5760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c136e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    if (lVar3 == 0) {
LAB_10494ea5c:
      lVar9 = 0;
      goto LAB_10494ea88;
    }
    lVar8 = param_1;
    func_0x00010be87f60(param_1,param_2,0,param_5,param_7);
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      lVar9 = 0;
      lVar10 = lVar3;
    }
    else {
      lVar10 = param_1;
      func_0x00010be91b80(param_1,param_2,lVar1,param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar4 = PTR_PTR_1126add58;
      if (lVar10 == 0) {
        lVar10 = 0;
        lVar9 = 0;
      }
      else {
        lVar9 = lVar10;
        func_0x00010c11d080(lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf720c0(puVar4,param_2,lVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0d3c80();
        _objc_release(puVar4);
        _objc_release(lVar9);
        puVar4 = PTR_PTR_1126add78;
        lVar9 = param_1;
        func_0x00010bfedc60(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x00010bfa1580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar4,param_2,puVar5,lVar3,
                            &PTR____CFConstantStringClassReference_110da2638);
        _objc_release(lVar3);
        _objc_release(lVar9);
        puVar4 = PTR_PTR_1126add78;
        lVar9 = lVar8;
        func_0x00010beec820(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar4,param_2,puVar5,lVar9,
                            &PTR____CFConstantStringClassReference_110da2658);
        _objc_release(lVar9);
        func_0x00010c069660();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar10;
        func_0x00010c1504a0(lVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar10;
        func_0x00010bfe4420(lVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar10;
        func_0x00010c0f5800(lVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_1;
        func_0x00010bdc3440(param_1,param_2,lVar3,lVar6,lVar7,puVar5,param_7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(param_1);
        _objc_release(puVar5);
      }
    }
    _objc_release(lVar8);
    param_1 = lVar10;
  }
  _objc_release(param_1);
LAB_10494ea88:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 10494eadc; end: 10494eb7b; -[FBSDKBridgeAPIProtocolWebV2 responseParametersForActionID:queryParameters:cancelled:error:] */

void FUN_10494eadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c13baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10494eb7c; end: 10494eb83; -[FBSDKBridgeAPIProtocolWebV2 serverConfigurationProvider] */

undefined8 FUN_10494eb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10494eb84; end: 10494eb8b; -[FBSDKBridgeAPIProtocolWebV2 nativeBridge] */

undefined8 FUN_10494eb84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10494eb8c; end: 10494eb93; -[FBSDKBridgeAPIProtocolWebV2 errorFactory] */

undefined8 FUN_10494eb8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10494eb94; end: 10494eb9b; -[FBSDKBridgeAPIProtocolWebV2 internalUtility] */

undefined8 FUN_10494eb94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10494eb9c; end: 10494eba3; -[FBSDKBridgeAPIProtocolWebV2 infoDictionaryProvider] */

undefined8 FUN_10494eb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10494eba4; end: 10494ebf7; -[FBSDKBridgeAPIProtocolWebV2 .cxx_destruct] */

void FUN_10494eba4(long param_1)

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



/* Entry: 10494ebf8; end: 10494ec03; +[FBSDKBridgeAPIRequest hasBeenConfigured] */

undefined1 FUN_10494ebf8(void)

{
  return uRam000000011369cfa8;
}



/* Entry: 10494ec04; end: 10494ec0f; +[FBSDKBridgeAPIRequest setHasBeenConfigured:] */

void FUN_10494ec04(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam000000011369cfa8 = param_3;
  return;
}



/* Entry: 10494ec10; end: 10494ec1b; +[FBSDKBridgeAPIRequest internalURLOpener] */

void FUN_10494ec10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfb0);
  return;
}



/* Entry: 10494ec1c; end: 10494ec2b; +[FBSDKBridgeAPIRequest setInternalURLOpener:] */

void FUN_10494ec1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cfb0,param_3);
  return;
}



/* Entry: 10494ec2c; end: 10494ec37; +[FBSDKBridgeAPIRequest internalUtility] */

void FUN_10494ec2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfb8);
  return;
}



/* Entry: 10494ec38; end: 10494ec47; +[FBSDKBridgeAPIRequest setInternalUtility:] */

void FUN_10494ec38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cfb8,param_3);
  return;
}



/* Entry: 10494ec48; end: 10494ec53; +[FBSDKBridgeAPIRequest settings] */

void FUN_10494ec48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfc0);
  return;
}



/* Entry: 10494ec54; end: 10494ec63; +[FBSDKBridgeAPIRequest setSettings:] */

void FUN_10494ec54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cfc0,param_3);
  return;
}



/* Entry: 10494ec64; end: 10494ed03; +[FBSDKBridgeAPIRequest configureWithInternalURLOpener:internalUtility:settings:] */

void FUN_10494ec64(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bfd49c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1ae5e0(param_1,param_2,param_3);
    func_0x00010c1ae600(param_1,param_2,param_4);
    func_0x00010c1fe440(param_1,param_2,param_5);
    func_0x00010c1a5a20(param_1,param_2,1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494ed04; end: 10494edef; +[FBSDKBridgeAPIRequest bridgeAPIRequestWithProtocolType:scheme:methodName:parameters:userInfo:] */

void FUN_10494ed04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  _objc_alloc(param_1);
  func_0x00010be83980(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ba00(uVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10494edf0; end: 10494f003; +[FBSDKBridgeAPIRequest protocolMap] */

undefined *
FUN_10494edf0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **ppuVar6;
  undefined *unaff_x26;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puRam000000011369cfc8 == (undefined *)0x0) {
    unaff_x19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110da2698;
    unaff_x20 = PTR_PTR_1126ade18;
    puStack_88 = unaff_x19;
    _objc_alloc();
    func_0x00010bff35e0();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110da26b8;
    unaff_x21 = PTR_PTR_1126ade18;
    puStack_98 = unaff_x20;
    _objc_alloc();
    func_0x00010bff35e0();
    unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = unaff_x21;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = unaff_x22;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dc8d78;
    unaff_x24 = PTR_PTR_1126ade28;
    puStack_80 = unaff_x23;
    func_0x00010c0d8420();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110ef18d8;
    unaff_x25 = PTR_PTR_1126ade30;
    puStack_b8 = unaff_x24;
    func_0x00010c0d8420();
    unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b0 = unaff_x25;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_78;
    param_4 = &puStack_88;
    param_5 = 2;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = unaff_x26;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puRam000000011369cfc8;
    puRam000000011369cfc8 = puVar1;
    _objc_release(puVar2);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(unaff_x19);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    puVar2 = puRam000000011369cfc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
    return puVar2;
  }
  puVar2 = puRam000000011369cfc8;
  ___stack_chk_fail();
  ppuVar6 = &puStack_130;
  pcStack_d8 = FUN_10494f004;
  ppuVar3 = param_3;
  puStack_120 = unaff_x26;
  puStack_118 = unaff_x25;
  puStack_110 = unaff_x24;
  puStack_108 = unaff_x23;
  puStack_100 = unaff_x22;
  puStack_f8 = unaff_x21;
  puStack_f0 = unaff_x20;
  puStack_e8 = unaff_x19;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    puStack_128 = PTR_PTR_1126e3300;
    puStack_130 = puVar2;
    _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined **)0x0) {
      _objc_storeStrong((undefined *)((long)ppuVar6 + 0x38),param_3);
      *(undefined ***)((long)ppuVar6 + 0x20) = param_4;
      uVar5 = param_5;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x28);
      *(undefined8 *)((long)ppuVar6 + 0x28) = uVar5;
      _objc_release(uVar4);
      uVar5 = param_6;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x10);
      *(undefined8 *)((long)ppuVar6 + 0x10) = uVar5;
      _objc_release(uVar4);
      uVar5 = param_7;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x18);
      *(undefined8 *)((long)ppuVar6 + 0x18) = uVar5;
      _objc_release(uVar4);
      uVar5 = param_8;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x30);
      *(undefined8 *)((long)ppuVar6 + 0x30) = uVar5;
      _objc_release(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + 8);
      *(undefined **)((long)ppuVar6 + 8) = puVar1;
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    _objc_retain(ppuVar6);
    puVar2 = (undefined *)ppuVar6;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  return (undefined *)ppuVar6;
}



/* Entry: 10494f004; end: 10494f1b3; -[FBSDKBridgeAPIRequest initWithProtocol:protocolType:scheme:methodName:parameters:userInfo:] */

undefined1 *
FUN_10494f004(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_60;
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    ppuVar6 = (undefined1 **)0x0;
  }
  else {
    puStack_58 = PTR_PTR_1126e3300;
    puStack_60 = param_1;
    _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined1 **)0x0) {
      _objc_storeStrong((undefined1 *)((long)ppuVar6 + 0x38),param_3);
      *(undefined8 *)((long)ppuVar6 + 0x20) = param_4;
      uVar5 = param_5;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x28);
      *(undefined8 *)((long)ppuVar6 + 0x28) = uVar5;
      _objc_release(uVar4);
      uVar5 = param_6;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x10);
      *(undefined8 *)((long)ppuVar6 + 0x10) = uVar5;
      _objc_release(uVar4);
      uVar5 = param_7;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x18);
      *(undefined8 *)((long)ppuVar6 + 0x18) = uVar5;
      _objc_release(uVar4);
      uVar5 = param_8;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x30);
      *(undefined8 *)((long)ppuVar6 + 0x30) = uVar5;
      _objc_release(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar6 + 8);
      *(undefined **)((long)ppuVar6 + 8) = puVar3;
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    _objc_retain(ppuVar6);
    param_1 = (undefined1 *)ppuVar6;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar1);
  _objc_release(param_1);
  return (undefined1 *)ppuVar6;
}



/* Entry: 10494f1b4; end: 10494f487; -[FBSDKBridgeAPIRequest requestURL:] */

void FUN_10494f1b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x38);
  lVar7 = param_1;
  func_0x00010beee740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1504a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0cc9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136e40(lVar8,param_2,lVar7,lVar2,lVar3,lVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010c069660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296b00();
    _objc_release(lVar7);
    puVar5 = PTR_PTR_1126add58;
    lVar7 = lVar8;
    func_0x00010c11d080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720c0(puVar5,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c00c560();
    puVar1 = PTR_PTR_1126add78;
    lVar7 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,puVar6,lVar2,&PTR____CFConstantStringClassReference_110fae058
                       );
    _objc_release(lVar2);
    _objc_release(lVar7);
    puVar1 = PTR_PTR_1126add78;
    lVar7 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf065a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,puVar6,lVar2,&PTR____CFConstantStringClassReference_110da2678
                       );
    _objc_release(lVar2);
    _objc_release(lVar7);
    func_0x00010bf39c40(param_1);
    func_0x00010c069660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c1504a0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bfe4420(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010c0f5800(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bdc3440(param_1,param_2,lVar2,lVar3,lVar4,puVar6,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_retain(lVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10494f488; end: 10494f48b; -[FBSDKBridgeAPIRequest copyWithZone:] */

void FUN_10494f488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10494f48c; end: 10494f603; +[FBSDKBridgeAPIRequest _protocolForType:scheme:] */

void FUN_10494f48c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar5 = param_1;
  func_0x00010c119700(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e00e0(uVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar5);
  uVar5 = uVar3;
  if (param_3 == 1) {
    _objc_retain(uVar3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010c0d8420(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c1f6900();
    func_0x00010c1d9820(puVar1,param_2,&PTR____CFConstantStringClassReference_110dacf38);
    func_0x00010bf39c40();
    func_0x00010c069640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bdc2b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf2cf00(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(param_1);
    if ((int)uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      _objc_retain(uVar3);
    }
    _objc_release(puVar1);
  }
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10494f604; end: 10494f60b; -[FBSDKBridgeAPIRequest actionID] */

undefined8 FUN_10494f604(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10494f60c; end: 10494f613; -[FBSDKBridgeAPIRequest methodName] */

undefined8 FUN_10494f60c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10494f614; end: 10494f61b; -[FBSDKBridgeAPIRequest parameters] */

undefined8 FUN_10494f614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10494f61c; end: 10494f623; -[FBSDKBridgeAPIRequest protocolType] */

undefined8 FUN_10494f61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10494f624; end: 10494f62b; -[FBSDKBridgeAPIRequest scheme] */

undefined8 FUN_10494f624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10494f62c; end: 10494f633; -[FBSDKBridgeAPIRequest userInfo] */

undefined8 FUN_10494f62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10494f634; end: 10494f63b; -[FBSDKBridgeAPIRequest protocol] */

undefined8 FUN_10494f634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10494f63c; end: 10494f647; -[FBSDKBridgeAPIRequest setProtocol:] */

void FUN_10494f63c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10494f648; end: 10494f6a7; -[FBSDKBridgeAPIRequest .cxx_destruct] */

void FUN_10494f648(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10494f6a8; end: 10494f71b; +[FBSDKBridgeAPIResponse bridgeAPIResponseWithRequest:error:] */

void FUN_10494f6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c03ece0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10494f71c; end: 10494f7df; +[FBSDKBridgeAPIResponse bridgeAPIResponseWithRequest:responseURL:sourceApplication:error:] */

void FUN_10494f71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c114d40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf210e0(param_1,param_2,param_3,param_4,param_5,puVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10494f7e0; end: 10494fa93; +[FBSDKBridgeAPIResponse bridgeAPIResponseWithRequest:responseURL:sourceApplication:osVersionComparer:error:] */

void FUN_10494f7e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 *param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_88;
  ulong auStack_80 [4];
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c119740();
  auStack_80[1] = 0;
  auStack_80[0] = 0xd;
  auStack_80[2] = 0;
  uVar2 = param_6;
  func_0x00010bfa16a0(param_6,param_2,auStack_80);
  _objc_release(param_6);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126add20;
    if (lVar1 == 1) {
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c07ce00();
    }
    else {
      if (lVar1 != 0) goto LAB_10494f8e0;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0728a0();
    }
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      if (param_7 == (undefined8 *)0x0) {
        param_1 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        _objc_alloc();
        func_0x00010c00e2e0();
        _objc_autorelease();
        param_1 = 0;
        *param_7 = puVar3;
      }
      goto LAB_10494fa10;
    }
  }
LAB_10494f8e0:
  puVar3 = PTR_PTR_1126add58;
  uVar5 = param_4;
  func_0x00010c11d080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf720c0(puVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar1 = param_3;
  func_0x00010c1196e0();
  _objc_retainAutoreleasedReturnValue();
  auStack_80[0] = auStack_80[0] & 0xffffffffffffff00;
  lVar6 = param_3;
  func_0x00010beee740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = 0;
  lVar7 = lVar1;
  func_0x00010c13baa0(lVar1,param_2,lVar6,puVar3,auStack_80,&uStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uStack_88;
  _objc_retain();
  _objc_release(lVar6);
  if (param_7 == (undefined8 *)0x0) {
    if (lVar7 != 0) goto LAB_10494f9d0;
    param_1 = 0;
  }
  else {
    _objc_retainAutorelease(uVar5);
    *param_7 = uVar5;
    if (lVar7 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc();
      func_0x00010c00e2e0();
      _objc_autorelease();
      param_1 = 0;
      *param_7 = puVar4;
    }
    else {
LAB_10494f9d0:
      _objc_alloc(param_1);
      func_0x00010c03ece0();
    }
  }
  _objc_release(lVar7);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(puVar3);
LAB_10494fa10:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10494fa94; end: 10494fae7; +[FBSDKBridgeAPIResponse bridgeAPIResponseCancelledWithRequest:] */

void FUN_10494fa94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c03ece0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10494fae8; end: 10494fbd7; -[FBSDKBridgeAPIResponse initWithRequest:responseParameters:cancelled:error:] */

undefined1 *
FUN_10494fae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_48 = PTR_PTR_1126e3308;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10494fbd8; end: 10494fbdb; -[FBSDKBridgeAPIResponse copyWithZone:] */

void FUN_10494fbd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10494fbdc; end: 10494fbe3; -[FBSDKBridgeAPIResponse isCancelled] */

undefined1 FUN_10494fbdc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10494fbe4; end: 10494fbeb; -[FBSDKBridgeAPIResponse error] */

undefined8 FUN_10494fbe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10494fbec; end: 10494fbf3; -[FBSDKBridgeAPIResponse request] */

undefined8 FUN_10494fbec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10494fbf4; end: 10494fbfb; -[FBSDKBridgeAPIResponse responseParameters] */

undefined8 FUN_10494fbf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10494fbfc; end: 10494fc37; -[FBSDKBridgeAPIResponse .cxx_destruct] */

void FUN_10494fbfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10494fc38; end: 10494fc43; +[FBSDKButton applicationActivationNotifier] */

void FUN_10494fc38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfd0);
  return;
}



/* Entry: 10494fc44; end: 10494fc53; +[FBSDKButton setApplicationActivationNotifier:] */

void FUN_10494fc44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cfd0,param_3);
  return;
}



/* Entry: 10494fc54; end: 10494fc5f; +[FBSDKButton eventLogger] */

void FUN_10494fc54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfd8);
  return;
}



/* Entry: 10494fc60; end: 10494fc6f; +[FBSDKButton setEventLogger:] */

void FUN_10494fc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cfd8,param_3);
  return;
}



/* Entry: 10494fc70; end: 10494fc7b; +[FBSDKButton accessTokenProvider] */

void FUN_10494fc70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfe0);
  return;
}



/* Entry: 10494fc7c; end: 10494fc87; +[FBSDKButton setAccessTokenProvider:] */

void FUN_10494fc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369cfe0 = param_3;
  return;
}



/* Entry: 10494fc88; end: 10494fce7; +[FBSDKButton configureWithApplicationActivationNotifier:eventLogger:accessTokenProvider:] */

void FUN_10494fc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010c169840(param_1);
  func_0x00010c1978e0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c160e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessTokenProvider__112635da0,param_5);
  return;
}



/* Entry: 10494fce8; end: 10494fd4b; -[FBSDKButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10494fce8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3310;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (long)_DAT_11270eca0;
    *(undefined1 *)((long)puVar1 + lVar2) = 1;
    func_0x00010bf46bc0(puVar1);
    *(undefined1 *)((long)puVar1 + lVar2) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10494fd4c; end: 10494fe0f; -[FBSDKButton awakeFromNib] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10494fd4c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3310;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_awakeFromNib_112525228);
  lVar1 = (long)_DAT_11270eca0;
  *(undefined1 *)(param_1 + lVar1) = 1;
  func_0x00010bf46bc0(param_1);
  *(undefined1 *)(param_1 + lVar1) = 0;
  lVar1 = param_1;
  func_0x00010c13b700();
  if ((int)lVar1 != 0) {
    func_0x00010c0f8f20(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf69660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(param_1);
  _objc_release(lVar1);
  return;
}



/* Entry: 10494fe10; end: 10494fe23; -[FBSDKButton setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10494fe10(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + _DAT_11270eca4) = param_3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf38010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_checkImplicitlyDisabled_1125ab9a8);
  return;
}



/* Entry: 10494fe24; end: 10494ff17; -[FBSDKButton imageRectForContentRect:] */

double FUN_10494fe24(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = param_5;
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_5;
    func_0x00010bf20c00();
    iVar1 = (int)uVar2;
    _CGRectIsEmpty();
    if (iVar1 == 0) {
      func_0x00010bfe7600(param_5);
      dVar7 = param_1 + dVar4;
      func_0x00010be34fc0(param_1,param_2,param_3,param_4,param_5);
      func_0x00010be5d120(param_5);
      _CGRectInset(dVar7,param_2 + dVar3,param_3 - (dVar4 + dVar6),param_4 - (dVar3 + dVar5),param_1
                   ,param_1);
      _CGRectGetHeight();
      return dVar7;
    }
  }
  return *(double *)PTR__CGRectZero_110347608;
}



/* Entry: 10494ff18; end: 10494ff73; -[FBSDKButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10494ff18(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11270eca0;
  if (*(char *)(param_1 + lVar1) != '\x01') {
    *(undefined1 *)(param_1 + lVar1) = 1;
    func_0x00010c23d5a0(0x7fefffffffffffff,0x7fefffffffffffff);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 10494ff74; end: 104950047; -[FBSDKButton sizeThatFits:] */

undefined1  [16] FUN_10494ff74(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_3;
  func_0x00010c074c20();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c2713e0(param_3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    dVar2 = param_1;
    dVar3 = param_2;
    func_0x00010c23d5e0(param_3,param_4,uVar1);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c2713e0(param_3,param_4,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d5e0(param_3,param_4,uVar1);
    _objc_release(uVar1);
    if (param_1 <= dVar2) {
      param_1 = dVar2;
    }
    if (param_2 <= dVar3) {
      param_2 = dVar3;
    }
  }
  else {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 104950048; end: 10495009f; -[FBSDKButton sizeToFit] */

void FUN_104950048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf20c00();
  uVar1 = 0x7fefffffffffffff;
  uVar2 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x7fefffffffffffff,0x7fefffffffffffff,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1739f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,uVar1,uVar2,param_3,PTR_s_setBounds__11263a898);
  return;
}



/* Entry: 1049500a0; end: 1049502cb; -[FBSDKButton titleRectForContentRect:] */

double FUN_1049500a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar2 = param_5;
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_5;
    func_0x00010bf20c00();
    iVar1 = (int)uVar2;
    _CGRectIsEmpty();
    if (iVar1 == 0) {
      dVar12 = param_1;
      uVar8 = param_2;
      uVar9 = param_3;
      uVar10 = param_4;
      func_0x00010bfe8880(param_1,param_2,param_3,param_4,param_5);
      dVar11 = param_1;
      func_0x00010be34fc0(param_1,param_2,param_3,param_4,param_5);
      func_0x00010be6efa0(param_5);
      _CGRectGetMaxX(dVar12,uVar8,uVar9,uVar10);
      dVar11 = dVar11 + dVar12;
      dVar12 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar12 = dVar12 - dVar11;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      dVar13 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      uVar2 = param_5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0d73a0();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        uVar2 = param_5;
        func_0x00010c271420();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c26b7a0();
        if (uVar3 == 1) {
          uVar3 = uVar2;
          func_0x00010c26b700(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010bfb3a80(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c099180(uVar2);
          dVar6 = dVar12;
          func_0x00010c26c840(dVar12,param_1,param_5,param_6,uVar3,uVar4,uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          dVar7 = dVar11;
          _CGRectGetWidth(dVar11,0,dVar12,param_1);
          dVar12 = (dVar7 - dVar6) * 0.5;
          if (dVar11 * 0.5 <= dVar12) {
            dVar12 = dVar11 * 0.5;
          }
          dVar13 = dVar13 - dVar12;
        }
        _objc_release(uVar2);
      }
      return dVar11 + dVar13;
    }
  }
  return *(double *)PTR__CGRectZero_110347608;
}



/* Entry: 1049502cc; end: 104950373; -[FBSDKButton logTapEventWithEventName:parameters:] */

void FUN_1049502cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40(param_1);
  func_0x00010beecd60();
  func_0x00010bf5df00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8d80(uVar1,param_2,param_3,param_4,1,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104950374; end: 104950407; -[FBSDKButton checkImplicitlyDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104950374(long param_1)

{
  long lVar1;
  uint uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if ((*(byte *)(param_1 + _DAT_11270eca4) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c0751e0();
    uVar2 = (uint)lVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = param_1;
  func_0x00010c071800();
  puStack_38 = PTR_PTR_1126e3310;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setEnabled__112642f38,uVar2);
  if (uVar2 != (uint)lVar1) {
    func_0x00010c069fa0(param_1);
    func_0x00010c1cbe20(param_1);
  }
  return;
}



/* Entry: 104950408; end: 10495048f; -[FBSDKButton configureButton] */

void FUN_104950408(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf698a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf68da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf69820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf478e0(param_1,param_2,uVar1,0,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104950490; end: 1049504b7; -[FBSDKButton configureWithIcon:title:backgroundColor:highlightedColor:] */

void FUN_104950490(void)

{
  func_0x00010bde5f20();
  return;
}



/* Entry: 1049504b8; end: 1049504c3; -[FBSDKButton configureWithIcon:title:backgroundColor:highlightedColor:selectedTitle:selectedIcon:selectedColor:selectedHighlightedColor:] */

void FUN_1049504b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde5f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__configureWithIcon_title_backgro_112557168);
  return;
}



/* Entry: 1049504c4; end: 1049504eb; -[FBSDKButton defaultBackgroundColor] */

void FUN_1049504c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb8181818181818,0x3fddddddddddddde,0x3fee5e5e5e5e5e5e,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 1049504ec; end: 104950513; -[FBSDKButton defaultDisabledColor] */

void FUN_1049504ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe7b7b7b7b7b7b8,0x3fe8383838383838,0x3fe9393939393939,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 104950514; end: 10495052f; -[FBSDKButton defaultFont] */

void FUN_104950514(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48,
             PTR__OBJC_CLASS___UIFont_1126aec38,PTR_s_systemFontOfSize_weight__112677600);
  return;
}



/* Entry: 104950530; end: 104950557; -[FBSDKButton defaultHighlightedColor] */

void FUN_104950530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb5151515151515,0x3fda5a5a5a5a5a5a,0x3feadadadadadadb,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}


