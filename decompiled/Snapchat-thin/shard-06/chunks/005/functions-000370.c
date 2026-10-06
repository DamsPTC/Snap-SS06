/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a3dd84; end: 104a3dd8b; -[OIDAuthorizationRequest state] */

undefined8 FUN_104a3dd84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a3dd8c; end: 104a3dd93; -[OIDAuthorizationRequest nonce] */

undefined8 FUN_104a3dd8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a3dd94; end: 104a3dd9b; -[OIDAuthorizationRequest codeVerifier] */

undefined8 FUN_104a3dd94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a3dd9c; end: 104a3dda3; -[OIDAuthorizationRequest codeChallenge] */

undefined8 FUN_104a3dd9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104a3dda4; end: 104a3ddab; -[OIDAuthorizationRequest codeChallengeMethod] */

undefined8 FUN_104a3dda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104a3ddac; end: 104a3ddb3; -[OIDAuthorizationRequest additionalParameters] */

undefined8 FUN_104a3ddac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104a3ddb4; end: 104a3de5b; -[OIDAuthorizationRequest .cxx_destruct] */

void FUN_104a3ddb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104a3de5c; end: 104a3de8b; +[OIDRegistrationResponse fieldMap] */

void FUN_104a3de5c(void)

{
  if (lRam00000001136a1620 != -1) {
    FUN_104a3e6a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1618);
  return;
}



/* Entry: 104a3de8c; end: 104a3e157;  */

void FUN_104a3de8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a1618;
  puRam00000001136a1618 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8f58,puVar3);
  func_0x00010c1d0640(puRam00000001136a1618,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110db9578);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar4 = PTR_PTR_1126ae338;
  func_0x00010bf64f40(PTR_PTR_1126ae338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8f78,puVar3,puVar4)
  ;
  func_0x00010c1d0640(puRam00000001136a1618,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8ed8);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8f98,puVar3);
  func_0x00010c1d0640(puRam00000001136a1618,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da85d8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar4 = PTR_PTR_1126ae338;
  func_0x00010bf64f40(PTR_PTR_1126ae338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8fb8,puVar3,puVar4)
  ;
  func_0x00010c1d0640(puRam00000001136a1618,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8ef8);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8fd8,puVar3);
  func_0x00010c1d0640(puRam00000001136a1618,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8f18);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar4 = PTR_PTR_1126ae338;
  func_0x00010bdc2de0(PTR_PTR_1126ae338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8ff8,puVar3,puVar4)
  ;
  func_0x00010c1d0640(puRam00000001136a1618,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8f38);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da9018,puVar3);
  func_0x00010c1d0640(puRam00000001136a1618,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a3e158; end: 104a3e1fb; -[OIDRegistrationResponse init] */

undefined1 * FUN_104a3e158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
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
  puStack_88 = PTR_PTR_1126e3590;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined ***)((long)ppuVar4 + 8) = ppuVar5;
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126ae338;
    puVar7 = (undefined1 *)ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bfac720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar6 = *(undefined8 *)((long)ppuVar4 + 0x48);
    *(undefined **)((long)ppuVar4 + 0x48) = puVar1;
    _objc_release(uVar6);
    if (((*(long *)((long)ppuVar4 + 0x20) != 0) && (*(long *)((long)ppuVar4 + 0x28) == 0)) ||
       ((*(long *)((long)ppuVar4 + 0x38) != 0) == (*(long *)((long)ppuVar4 + 0x30) == 0))) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_104a3e304;
    }
  }
  puVar7 = (undefined1 *)ppuVar4;
  _objc_retain(ppuVar4);
LAB_104a3e304:
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  return puVar7;
}



/* Entry: 104a3e1fc; end: 104a3e337; -[OIDRegistrationResponse initWithRequest:parameters:] */

undefined1 *
FUN_104a3e1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain();
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3590;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae338;
    puVar5 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bfac720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    if (((*(long *)((long)puVar1 + 0x20) != 0) && (*(long *)((long)puVar1 + 0x28) == 0)) ||
       ((*(long *)((long)puVar1 + 0x38) != 0) == (*(long *)((long)puVar1 + 0x30) == 0))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_104a3e304;
    }
  }
  puVar5 = (undefined1 *)puVar1;
  _objc_retain(puVar1);
LAB_104a3e304:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 104a3e338; end: 104a3e33b; -[OIDRegistrationResponse copyWithZone:] */

void FUN_104a3e338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a3e33c; end: 104a3e343; +[OIDRegistrationResponse supportsSecureCoding] */

undefined8 FUN_104a3e33c(void)

{
  return 1;
}



/* Entry: 104a3e344; end: 104a3e45b; -[OIDRegistrationResponse initWithCoder:] */

long FUN_104a3e344(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae3d8;
  _objc_opt_class(PTR_PTR_1126ae3d8);
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



/* Entry: 104a3e45c; end: 104a3e4f3; -[OIDRegistrationResponse encodeWithCoder:] */

void FUN_104a3e45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae338;
  _objc_retain(param_3);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bfac720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf932e0(puVar1,param_2,param_3,lVar2,param_1);
  _objc_release(lVar2);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110deac78);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a3e4f4; end: 104a3e5db; -[OIDRegistrationResponse description] */

void FUN_104a3e4f4(long param_1,undefined8 param_2)

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
  func_0x00010c124920(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da9038);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a3e5dc; end: 104a3e5e3; -[OIDRegistrationResponse request] */

undefined8 FUN_104a3e5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a3e5e4; end: 104a3e5eb; -[OIDRegistrationResponse clientID] */

undefined8 FUN_104a3e5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a3e5ec; end: 104a3e5f3; -[OIDRegistrationResponse clientIDIssuedAt] */

undefined8 FUN_104a3e5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a3e5f4; end: 104a3e5fb; -[OIDRegistrationResponse clientSecret] */

undefined8 FUN_104a3e5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a3e5fc; end: 104a3e603; -[OIDRegistrationResponse clientSecretExpiresAt] */

undefined8 FUN_104a3e5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a3e604; end: 104a3e60b; -[OIDRegistrationResponse registrationAccessToken] */

undefined8 FUN_104a3e604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a3e60c; end: 104a3e613; -[OIDRegistrationResponse registrationClientURI] */

undefined8 FUN_104a3e60c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a3e614; end: 104a3e61b; -[OIDRegistrationResponse tokenEndpointAuthenticationMethod] */

undefined8 FUN_104a3e614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a3e61c; end: 104a3e623; -[OIDRegistrationResponse additionalParameters] */

undefined8 FUN_104a3e61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a3e624; end: 104a3e6a7; -[OIDRegistrationResponse .cxx_destruct] */

void FUN_104a3e624(long param_1)

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



/* Entry: 104a3e6a8; end: 104a3e6bb;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a3e6a8(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107bf568;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107bf568);
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
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107bf568);
  func_0x000107c61180();
  (*pcVar3)(0x1136a1620,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a3e6bc; end: 104a3e773; +[OIDAuthorizationService presentAuthorizationRequest:presentingViewController:callback:] */

void FUN_104a3e6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae360;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038ea0();
  _objc_release(param_4);
  func_0x00010c10b340(param_1,param_2,param_3,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a3e774; end: 104a3e833; +[OIDAuthorizationService presentAuthorizationRequest:presentingViewController:prefersEphemeralSession:callback:] */

void FUN_104a3e774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae360;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0392e0();
  _objc_release(param_4);
  func_0x00010c10b340(param_1,param_2,param_3,puVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a3e834; end: 104a3e8d7; -[OIDServiceDiscovery init] */

undefined * FUN_104a3e834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_initWithDictionary_error__1125e0b38;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110da8438;
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00010bf64920(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0206c0(puVar1);
  _objc_release(ppuVar2);
  return puVar1;
}



/* Entry: 104a3e8d8; end: 104a3e937; -[OIDServiceDiscovery initWithJSON:error:] */

undefined8
FUN_104a3e8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0206c0(param_1,param_2,param_3,param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a3e938; end: 104a3ea87; -[OIDServiceDiscovery initWithJSONData:error:] */

undefined8
FUN_104a3e938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  _objc_retain();
  puVar4 = PTR_PTR_1126ae328;
  if (puVar1 == (undefined *)0x0 || lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c09e4e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf991e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar4;
    _objc_release(lVar3);
    uVar6 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar5 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = PTR_PTR_1126ae328;
      func_0x00010bf991e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar6 = 0;
      *param_4 = puVar4;
    }
    else {
      func_0x00010c00c5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
    }
  }
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 104a3ea88; end: 104a3eb43; -[OIDServiceDiscovery initWithDictionary:error:] */

undefined1 * FUN_104a3ea88(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puVar2;
  
  ppuVar5 = &puStack_40;
  _objc_retain();
  puVar2 = param_1;
  _objc_opt_class();
  iVar1 = (int)puVar2;
  func_0x00010bf71f40();
  if (iVar1 == 0) {
    ppuVar5 = (undefined1 **)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126e3598;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar5 != (undefined1 **)0x0) {
      uVar3 = param_3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar5 + 8);
      *(undefined8 *)((long)ppuVar5 + 8) = uVar3;
      _objc_release(uVar4);
    }
    _objc_retain(ppuVar5);
    param_1 = (undefined1 *)ppuVar5;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar5;
}



/* Entry: 104a3eb44; end: 104a3eebf; +[OIDServiceDiscovery dictionaryHasRequiredFields:error:] */

long FUN_104a3eb44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [128];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [128];
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110da87f8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110da9078;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110da90b8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110da90f8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da9178;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110da91f8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110da9218;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_a8,7);
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  _objc_retain();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar5 = *plStack_1f0;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_1f0 != lVar5) {
          _objc_enumerationMutation(puVar1);
        }
        lVar8 = param_3;
        func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)(lStack_1f8 + (long)puVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 == 0) {
          puVar2 = puVar1;
          if (param_4 == (undefined8 *)0x0) {
            lVar5 = 0;
            goto LAB_104a3ee68;
          }
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110da9518);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126ae328;
          func_0x00010bf991e0(PTR_PTR_1126ae328,param_2,0xfffffffffffffffe,0,puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          lVar5 = 0;
          *param_4 = puVar4;
          goto LAB_104a3ee60;
        }
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_200,auStack_128,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  ppuStack_140 = &PTR____CFConstantStringClassReference_110da87f8;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110da90b8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110da90f8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_140,3);
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
  puVar4 = puVar2;
  func_0x00010bf52a60();
  puVar7 = puVar2;
  if (puVar4 == (undefined *)0x0) {
    lVar5 = 1;
  }
  else {
    lVar8 = *plStack_230;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_230 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
        lVar5 = param_3;
        func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)(lStack_238 + (long)puVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar3,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar5);
        if (puVar3 == (undefined *)0x0) {
          if (param_4 != (undefined8 *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110da9538);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126ae328;
            func_0x00010bf991e0(PTR_PTR_1126ae328,param_2,0xfffffffffffffffe,0,puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *param_4 = puVar6;
            _objc_release(puVar4);
          }
          lVar5 = 0;
          goto LAB_104a3ee60;
        }
        puVar6 = puVar6 + 1;
      } while (puVar4 != puVar6);
      puVar4 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_240,auStack_1c0,0x10);
      lVar5 = 1;
    } while (puVar4 != (undefined *)0x0);
  }
LAB_104a3ee60:
  _objc_release(puVar7);
LAB_104a3ee68:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return param_3;
  }
  return lVar5;
}



/* Entry: 104a3eec0; end: 104a3eec3; -[OIDServiceDiscovery copyWithZone:] */

void FUN_104a3eec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a3eec4; end: 104a3eecb; +[OIDServiceDiscovery supportsSecureCoding] */

undefined8 FUN_104a3eec4(void)

{
  return 1;
}



/* Entry: 104a3eecc; end: 104a3f06f; -[OIDServiceDiscovery initWithCoder:] */

undefined * FUN_104a3eecc(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = param_3;
  func_0x00010bf4bc00();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010bfff5a0();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar1;
    _objc_opt_class();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_68 = puVar2;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_60 = puVar1;
    _objc_opt_class();
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    puStack_58 = puVar2;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar1 = param_3;
    func_0x00010bf67040(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110da9058);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = puVar3;
  }
  _objc_release(param_3);
  lStack_78 = 0;
  puVar2 = puVar1;
  func_0x00010c00c5a0(param_1,param_2,puVar1,&lStack_78);
  puVar3 = (undefined *)0x0;
  if (lStack_78 == 0) {
    puVar3 = param_1;
    _objc_retain();
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  func_0x00010bf93020();
  func_0x00010bf932c0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 104a3f070; end: 104a3f0c3; -[OIDServiceDiscovery encodeWithCoder:] */

void FUN_104a3f070(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf932c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a3f0c4; end: 104a3f0cb; -[OIDServiceDiscovery discoveryDictionary] */

void FUN_104a3f0c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a3f0cc; end: 104a3f12b; -[OIDServiceDiscovery issuer] */

void FUN_104a3f0cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da87f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f12c; end: 104a3f18b; -[OIDServiceDiscovery authorizationEndpoint] */

void FUN_104a3f12c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f18c; end: 104a3f1eb; -[OIDServiceDiscovery deviceAuthorizationEndpoint] */

void FUN_104a3f18c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9098);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f1ec; end: 104a3f24b; -[OIDServiceDiscovery tokenEndpoint] */

void FUN_104a3f1ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da90b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f24c; end: 104a3f2ab; -[OIDServiceDiscovery userinfoEndpoint] */

void FUN_104a3f24c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da90d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f2ac; end: 104a3f30b; -[OIDServiceDiscovery jwksURL] */

void FUN_104a3f2ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da90f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f30c; end: 104a3f36b; -[OIDServiceDiscovery registrationEndpoint] */

void FUN_104a3f30c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f36c; end: 104a3f3cb; -[OIDServiceDiscovery endSessionEndpoint] */

void FUN_104a3f36c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f3cc; end: 104a3f3db; -[OIDServiceDiscovery scopesSupported] */

void FUN_104a3f3cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9158);
  return;
}



/* Entry: 104a3f3dc; end: 104a3f3eb; -[OIDServiceDiscovery responseTypesSupported] */

void FUN_104a3f3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9178);
  return;
}



/* Entry: 104a3f3ec; end: 104a3f3fb; -[OIDServiceDiscovery responseModesSupported] */

void FUN_104a3f3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9198);
  return;
}



/* Entry: 104a3f3fc; end: 104a3f40b; -[OIDServiceDiscovery grantTypesSupported] */

void FUN_104a3f3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da91b8);
  return;
}



/* Entry: 104a3f40c; end: 104a3f41b; -[OIDServiceDiscovery acrValuesSupported] */

void FUN_104a3f40c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da91d8);
  return;
}



/* Entry: 104a3f41c; end: 104a3f42b; -[OIDServiceDiscovery subjectTypesSupported] */

void FUN_104a3f41c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da91f8);
  return;
}



/* Entry: 104a3f42c; end: 104a3f43b; -[OIDServiceDiscovery IDTokenSigningAlgorithmValuesSupported] */

void FUN_104a3f42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9218);
  return;
}



/* Entry: 104a3f43c; end: 104a3f44b; -[OIDServiceDiscovery IDTokenEncryptionAlgorithmValuesSupported] */

void FUN_104a3f43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9238);
  return;
}



/* Entry: 104a3f44c; end: 104a3f45b; -[OIDServiceDiscovery IDTokenEncryptionEncodingValuesSupported] */

void FUN_104a3f44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9258);
  return;
}



/* Entry: 104a3f45c; end: 104a3f46b; -[OIDServiceDiscovery userinfoSigningAlgorithmValuesSupported] */

void FUN_104a3f45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9278);
  return;
}



/* Entry: 104a3f46c; end: 104a3f47b; -[OIDServiceDiscovery userinfoEncryptionAlgorithmValuesSupported] */

void FUN_104a3f46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9298);
  return;
}



/* Entry: 104a3f47c; end: 104a3f48b; -[OIDServiceDiscovery userinfoEncryptionEncodingValuesSupported] */

void FUN_104a3f47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da92b8);
  return;
}



/* Entry: 104a3f48c; end: 104a3f49b; -[OIDServiceDiscovery requestObjectSigningAlgorithmValuesSupported] */

void FUN_104a3f48c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da92d8);
  return;
}



/* Entry: 104a3f49c; end: 104a3f4ab; -[OIDServiceDiscovery requestObjectEncryptionAlgorithmValuesSupported] */

void FUN_104a3f49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da92f8);
  return;
}



/* Entry: 104a3f4ac; end: 104a3f4bb; -[OIDServiceDiscovery requestObjectEncryptionEncodingValuesSupported] */

void FUN_104a3f4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9318);
  return;
}



/* Entry: 104a3f4bc; end: 104a3f4cb; -[OIDServiceDiscovery tokenEndpointAuthMethodsSupported] */

void FUN_104a3f4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9338);
  return;
}



/* Entry: 104a3f4cc; end: 104a3f4db; -[OIDServiceDiscovery tokenEndpointAuthSigningAlgorithmValuesSupported] */

void FUN_104a3f4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9358);
  return;
}



/* Entry: 104a3f4dc; end: 104a3f4eb; -[OIDServiceDiscovery displayValuesSupported] */

void FUN_104a3f4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9378);
  return;
}



/* Entry: 104a3f4ec; end: 104a3f4fb; -[OIDServiceDiscovery claimTypesSupported] */

void FUN_104a3f4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9398);
  return;
}



/* Entry: 104a3f4fc; end: 104a3f50b; -[OIDServiceDiscovery claimsSupported] */

void FUN_104a3f4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da93b8);
  return;
}



/* Entry: 104a3f50c; end: 104a3f56b; -[OIDServiceDiscovery serviceDocumentation] */

void FUN_104a3f50c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da93d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f56c; end: 104a3f57b; -[OIDServiceDiscovery claimsLocalesSupported] */

void FUN_104a3f56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da93f8);
  return;
}



/* Entry: 104a3f57c; end: 104a3f58b; -[OIDServiceDiscovery UILocalesSupported] */

void FUN_104a3f57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50,
             &PTR____CFConstantStringClassReference_110da9418);
  return;
}



/* Entry: 104a3f58c; end: 104a3f5d3; -[OIDServiceDiscovery claimsParameterSupported] */

undefined8 FUN_104a3f58c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9438);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104a3f5d4; end: 104a3f61b; -[OIDServiceDiscovery requestParameterSupported] */

undefined8 FUN_104a3f5d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9458);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104a3f61c; end: 104a3f693; -[OIDServiceDiscovery requestURIParameterSupported] */

undefined8 FUN_104a3f61c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110da9478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110da9478);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 104a3f694; end: 104a3f6db; -[OIDServiceDiscovery requireRequestURIRegistration] */

undefined8 FUN_104a3f694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da9498);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104a3f6dc; end: 104a3f73b; -[OIDServiceDiscovery OPPolicyURI] */

void FUN_104a3f6dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da94b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f73c; end: 104a3f79b; -[OIDServiceDiscovery OPTosURI] */

void FUN_104a3f73c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da94d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3f79c; end: 104a3f7b7; -[OIDServiceDiscovery .cxx_destruct] */

void FUN_104a3f79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a3f7b8; end: 104a3f7d7;  */

void FUN_104a3f7b8(void)

{
  _objc_opt_self(&PTR_PTR_1130a5208);
  return;
}



/* Entry: 104a3f7d8; end: 104a3f7f7; -[GTMAuthSession authState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3f7d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130a5260));
  return;
}



/* Entry: 104a3f7f8; end: 104a3f803; -[GTMAuthSession serviceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3f7f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a5268))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a5268);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a3f804; end: 104a3f83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a3f804(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a5268);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a5268) + 8))
  ;
  return auVar1;
}



/* Entry: 104a3f83c; end: 104a3f847; -[GTMAuthSession userID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3f83c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a5270))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a5270);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a3f848; end: 104a3f87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a3f848(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a5270);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a5270) + 8))
  ;
  return auVar1;
}



/* Entry: 104a3f880; end: 104a3f88b; -[GTMAuthSession userEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3f880(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a5278))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a5278);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a3f88c; end: 104a3f91b;  */

void FUN_104a3f88c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a3f91c; end: 104a3f997; -[GTMAuthSession userEmailIsVerified] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a3f91c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ((undefined8 *)(param_1 + _DAT_1130a5280))[1];
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130a5280);
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    uVar1 = uVar3;
    _objc_msgSend();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 104a3f998; end: 104a3f9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a3f998(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_1130a5280))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a5280);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    _objc_msgSend();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 104a3f9f4; end: 104a3fa77; -[GTMAuthSession shouldAuthorizeAllRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104a3f9f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a5288;
  _swift_beginAccess(param_1 + _DAT_1130a5288,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104a3fa78; end: 104a3fb13; -[GTMAuthSession setShouldAuthorizeAllRequests:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3fa78(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a5288;
  _swift_beginAccess(param_1 + _DAT_1130a5288,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104a3fb14; end: 104a3fb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a3fb14(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a5288;
  _swift_beginAccess(unaff_x20 + _DAT_1130a5288,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104a3fb54;
  return auVar2;
}



/* Entry: 104a3fb54; end: 104a3fb57;  */

void FUN_104a3fb54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104a3fb58; end: 104a3fb6f; -[GTMAuthSession delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3fb58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a5290;
  _swift_beginAccess(param_1 + _DAT_1130a5290,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a3fb70; end: 104a3fb87; -[GTMAuthSession setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3fb70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a5290;
  _swift_beginAccess(param_1 + _DAT_1130a5290,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104a3fb88; end: 104a3fc0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a3fb88(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x30,0x6920);
  }
  *param_1 = lVar1;
  lVar2 = _DAT_1130a5290;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  *(long *)(lVar1 + 0x28) = lVar2;
  _swift_beginAccess(unaff_x20 + lVar2,lVar1,0x21,0);
  lVar2 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)(lVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)(lVar1 + 0x18);
  auVar3._0_8_ = 0x104a449e8;
  return auVar3;
}



/* Entry: 104a3fc0c; end: 104a3fc17; -[GTMAuthSession fetcherService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3fc0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a5298;
  _swift_beginAccess(param_1 + _DAT_1130a5298,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a3fc18; end: 104a3fc5b;  */

void FUN_104a3fc18(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a3fc5c; end: 104a3fc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3fc5c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a5298;
  _swift_beginAccess(unaff_x20 + _DAT_1130a5298,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 104a3fc68; end: 104a3fca7;  */

void FUN_104a3fc68(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 104a3fca8; end: 104a3fcb3; -[GTMAuthSession setFetcherService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a3fca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a5298;
  _swift_beginAccess(param_1 + _DAT_1130a5298,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104a3fcb4; end: 104a3fd07;  */

void FUN_104a3fcb4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


