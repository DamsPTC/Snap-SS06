/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a32190; end: 104a32197; -[OIDIDToken claims] */

undefined8 FUN_104a32190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a32198; end: 104a3219f; -[OIDIDToken issuer] */

undefined8 FUN_104a32198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a321a0; end: 104a321a7; -[OIDIDToken subject] */

undefined8 FUN_104a321a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a321a8; end: 104a321af; -[OIDIDToken audience] */

undefined8 FUN_104a321a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a321b0; end: 104a321b7; -[OIDIDToken expiresAt] */

undefined8 FUN_104a321b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a321b8; end: 104a321bf; -[OIDIDToken issuedAt] */

undefined8 FUN_104a321b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a321c0; end: 104a321c7; -[OIDIDToken nonce] */

undefined8 FUN_104a321c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a321c8; end: 104a3223f; -[OIDIDToken .cxx_destruct] */

void FUN_104a321c8(long param_1)

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



/* Entry: 104a32240; end: 104a32253;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a32240(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107bf208;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107bf208);
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
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107bf208);
  func_0x000107c61180();
  (*pcVar3)(0x1136a15c8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a32254; end: 104a322f7; -[OIDEndSessionResponse init] */

undefined1 * FUN_104a32254(undefined8 param_1,undefined8 param_2)

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
  puStack_88 = PTR_PTR_1126e3520;
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
    uVar7 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined **)((long)ppuVar4 + 0x18) = puVar1;
    _objc_release(uVar7);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  return (undefined1 *)ppuVar4;
}



/* Entry: 104a322f8; end: 104a323eb; -[OIDEndSessionResponse initWithRequest:parameters:] */

undefined1 *
FUN_104a322f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_48 = PTR_PTR_1126e3520;
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
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a323ec; end: 104a3241b; +[OIDEndSessionResponse fieldMap] */

void FUN_104a323ec(void)

{
  if (lRam00000001136a15d8 != -1) {
    FUN_104a3273c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a15d0);
  return;
}



/* Entry: 104a3241c; end: 104a324a7;  */

void FUN_104a3241c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a15d0;
  puRam00000001136a15d0 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8458,puVar3);
  func_0x00010c1d0640(puRam00000001136a15d0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110db9618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a324a8; end: 104a324ab; -[OIDEndSessionResponse copyWithZone:] */

void FUN_104a324a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a324ac; end: 104a324b3; +[OIDEndSessionResponse supportsSecureCoding] */

undefined8 FUN_104a324ac(void)

{
  return 1;
}



/* Entry: 104a324b4; end: 104a325cb; -[OIDEndSessionResponse initWithCoder:] */

long FUN_104a324b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae340;
  _objc_opt_class(PTR_PTR_1126ae340);
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
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a325cc; end: 104a32663; -[OIDEndSessionResponse encodeWithCoder:] */

void FUN_104a325cc(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a32664; end: 104a326e7; -[OIDEndSessionResponse description] */

void FUN_104a32664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da8478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a326e8; end: 104a326ef; -[OIDEndSessionResponse request] */

undefined8 FUN_104a326e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a326f0; end: 104a326f7; -[OIDEndSessionResponse state] */

undefined8 FUN_104a326f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a326f8; end: 104a326ff; -[OIDEndSessionResponse additionalParameters] */

undefined8 FUN_104a326f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a32700; end: 104a3273b; -[OIDEndSessionResponse .cxx_destruct] */

void FUN_104a32700(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a3273c; end: 104a3274f;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a3273c(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107bf288;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107bf288);
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
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107bf288);
  func_0x000107c61180();
  (*pcVar3)(0x1136a15d8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a32750; end: 104a32803; +[OIDTokenUtilities encodeBase64urlNoPadding:] */

void FUN_104a32750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf15da0(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c25cfc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dacf38,
                      &PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c25cfc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db9ab8,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a32804; end: 104a328a3; +[OIDTokenUtilities randomURLSafeStringWithSize:] */

void FUN_104a32804(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)PTR__kSecRandomDefault_110347808;
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010c0d3c60();
  _SecRandomCopyBytes(uVar4,puVar2,puVar3);
  if ((int)uVar4 == 0) {
    _objc_opt_class(param_1);
    func_0x00010bf92d60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a328a4; end: 104a3293b; +[OIDTokenUtilities sha256:] */

void FUN_104a328a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  puVar4 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010c0d3c60();
  _CC_SHA256(uVar2,uVar3,puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a3293c; end: 104a329d7; +[OIDTokenUtilities redact:] */

void FUN_104a3293c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  if (param_3 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = param_3;
    func_0x00010c08fa60();
    if (puVar2 < (undefined *)0x9) {
      puVar2 = (&PTR_PTR_1107bf2a8)[(long)puVar2];
    }
    else {
      puVar1 = param_3;
      func_0x00010c260c20(param_3,param_2,6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a329d8; end: 104a32a8f; +[OIDTokenUtilities formUrlEncode:] */

void FUN_104a329d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_3;
    _objc_retain(param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110da8498);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c25cda0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a32a90; end: 104a32b33; -[OIDRegistrationRequest init] */

void FUN_104a32a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_initWithConfiguration_redirectUR_112525628;
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
  func_0x00010c001d60();
  return;
}



/* Entry: 104a32b34; end: 104a32b57; -[OIDRegistrationRequest initWithConfiguration:redirectURIs:responseTypes:grantTypes:subjectType:tokenEndpointAuthMethod:additionalParameters:] */

void FUN_104a32b34(void)

{
  func_0x00010c001d60();
  return;
}



/* Entry: 104a32b58; end: 104a32d5f; -[OIDRegistrationRequest initWithConfiguration:redirectURIs:responseTypes:grantTypes:subjectType:tokenEndpointAuthMethod:initialAccessToken:additionalParameters:] */

undefined1 *
FUN_104a32b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e3528;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar4);
    _objc_storeStrong((undefined1 *)((long)puVar1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dd59f8);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a32d60; end: 104a32d63; -[OIDRegistrationRequest copyWithZone:] */

void FUN_104a32d60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a32d64; end: 104a32d6b; +[OIDRegistrationRequest supportsSecureCoding] */

undefined8 FUN_104a32d64(void)

{
  return 1;
}



/* Entry: 104a32d6c; end: 104a3300f; -[OIDRegistrationRequest initWithCoder:] */

long FUN_104a32d6c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126ae348;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(puVar1);
  lVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110df9f78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da84f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  lVar4 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8518);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  lVar5 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8538);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  lVar6 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8558);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar7 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8578);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar8 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da8898);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar9;
  _objc_opt_class();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  lVar11 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da83f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar12 = lVar2;
  func_0x00010c001d60(param_1,param_2,lVar2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar3,lVar11);
  _objc_release(lVar11);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(lVar12);
  func_0x00010bf93020();
  func_0x00010bf93020(lVar12,param_2,*(undefined8 *)(lVar2 + 0x10),
                      &PTR____CFConstantStringClassReference_110da84f8);
  func_0x00010bf93020(lVar12,param_2,*(undefined8 *)(lVar2 + 0x20),
                      &PTR____CFConstantStringClassReference_110da8518);
  func_0x00010bf93020(lVar12,param_2,*(undefined8 *)(lVar2 + 0x28),
                      &PTR____CFConstantStringClassReference_110da8538);
  func_0x00010bf93020(lVar12,param_2,*(undefined8 *)(lVar2 + 0x30),
                      &PTR____CFConstantStringClassReference_110da8558);
  func_0x00010bf93020(lVar12,param_2,*(undefined8 *)(lVar2 + 0x38),
                      &PTR____CFConstantStringClassReference_110da8578);
  func_0x00010bf93020(lVar12,param_2,*(undefined8 *)(lVar2 + 0x40),
                      &PTR____CFConstantStringClassReference_110da8898);
  func_0x00010bf93020(lVar12,param_2,*(undefined8 *)(lVar2 + 0x48),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return lVar12;
}



/* Entry: 104a33010; end: 104a330e7; -[OIDRegistrationRequest encodeWithCoder:] */

void FUN_104a33010(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110da84f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110da8518);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110da8538);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110da8558);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110da8578);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110da8898);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a330e8; end: 104a331e3; -[OIDRegistrationRequest description] */

void FUN_104a330e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bdc3120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010bdc1620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar2,param_2,uVar3,4);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da8598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a331e4; end: 104a3330b; -[OIDRegistrationRequest URLRequest] */

void FUN_104a331e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bdc1980();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c127a80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
    func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    func_0x00010c1a4fc0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dada18);
    func_0x00010c2201e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e01958,
                        &PTR____CFConstantStringClassReference_110dbea38);
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110db27b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2201e0(puVar4,param_2,puVar3,&PTR____CFConstantStringClassReference_110e3f358);
      _objc_release(puVar3);
    }
    func_0x00010c1a4f00(puVar4,param_2,lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a3330c; end: 104a33573; -[OIDRegistrationRequest JSONString] */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_104a3330c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long alStack_138 [3];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar2);
  func_0x00010bf0a0e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  alStack_138[2] = 0;
  alStack_138[1] = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = *(undefined8 *)(alStack_138[2] + lVar9 * 8);
        func_0x00010beec820(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3,param_2,uVar2);
        _objc_release(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,alStack_138 + 1,auStack_e8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110da8518);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110da88b8);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bef7f60(puVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110da8538);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x30),
                        &PTR____CFConstantStringClassReference_110da8558);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x38),
                        &PTR____CFConstantStringClassReference_110da8578);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_110da8898);
  }
  alStack_138[0] = 0;
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,alStack_138);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined *)0x0;
  if ((puVar6 != (undefined *)0x0) && (alStack_138[0] == 0)) {
    puVar7 = puVar6;
    _objc_retain(puVar6);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 8);
}



/* Entry: 104a33574; end: 104a3357b; -[OIDRegistrationRequest configuration] */

undefined8 FUN_104a33574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a3357c; end: 104a33583; -[OIDRegistrationRequest initialAccessToken] */

undefined8 FUN_104a3357c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a33584; end: 104a3358b; -[OIDRegistrationRequest applicationType] */

undefined8 FUN_104a33584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a3358c; end: 104a33593; -[OIDRegistrationRequest redirectURIs] */

undefined8 FUN_104a3358c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a33594; end: 104a3359b; -[OIDRegistrationRequest responseTypes] */

undefined8 FUN_104a33594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a3359c; end: 104a335a3; -[OIDRegistrationRequest grantTypes] */

undefined8 FUN_104a3359c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a335a4; end: 104a335ab; -[OIDRegistrationRequest subjectType] */

undefined8 FUN_104a335a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a335ac; end: 104a335b3; -[OIDRegistrationRequest tokenEndpointAuthenticationMethod] */

undefined8 FUN_104a335ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a335b4; end: 104a335bb; -[OIDRegistrationRequest additionalParameters] */

undefined8 FUN_104a335b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a335bc; end: 104a3363f; -[OIDRegistrationRequest .cxx_destruct] */

void FUN_104a335bc(long param_1)

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



/* Entry: 104a33640; end: 104a336e3; -[OIDTokenRequest init] */

void FUN_104a33640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_initWithConfiguration_grantType__1125ddff0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00010c0018c0();
  return;
}



/* Entry: 104a336e4; end: 104a33717; -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scopes:refreshToken:codeVerifier:additionalParameters:] */

void FUN_104a336e4(void)

{
  func_0x00010c0018c0();
  return;
}



/* Entry: 104a33718; end: 104a3374b; -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scope:refreshToken:codeVerifier:additionalParameters:] */

void FUN_104a33718(void)

{
  func_0x00010c0018a0();
  return;
}



/* Entry: 104a3374c; end: 104a338f3; -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scopes:refreshToken:codeVerifier:additionalParameters:additionalHeaders:] */

undefined8
FUN_104a3374c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae350;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c150be0(puVar1,param_2,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0018a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
                      param_10,param_11,param_12,param_13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104a338f4; end: 104a33bcb; -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scope:refreshToken:codeVerifier:additionalParameters:additionalHeaders:] */

undefined8 *
FUN_104a338f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e3530;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar2[1];
    puVar2[1] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar2[2];
    puVar2[2] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar2[3];
    puVar2[3] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_6;
    func_0x00010bf51e00();
    uVar4 = puVar2[4];
    puVar2[4] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar2[5];
    puVar2[5] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_8;
    func_0x00010bf51e00();
    uVar4 = puVar2[6];
    puVar2[6] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_9;
    func_0x00010bf51e00();
    uVar4 = puVar2[7];
    puVar2[7] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_10;
    func_0x00010bf51e00();
    uVar4 = puVar2[8];
    puVar2[8] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_11;
    func_0x00010bf51e00();
    uVar4 = puVar2[9];
    puVar2[9] = uVar5;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    uVar5 = puVar2[10];
    puVar2[10] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    uVar5 = puVar2[0xb];
    puVar2[0xb] = puVar3;
    _objc_release(uVar5);
    iVar1 = (int)puVar2[2];
    func_0x00010c071ae0();
    if ((iVar1 != 0) && (puVar2[4] == 0)) {
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104a33bcc; end: 104a33bcf; -[OIDTokenRequest copyWithZone:] */

void FUN_104a33bcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a33bd0; end: 104a33bd7; +[OIDTokenRequest supportsSecureCoding] */

undefined8 FUN_104a33bd0(void)

{
  return 1;
}



/* Entry: 104a33bd8; end: 104a3408b; -[OIDTokenRequest initWithCoder:] */

undefined8 * FUN_104a33bd8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar12 = PTR_PTR_1126ae348;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(puVar12);
  puVar1 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar4 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar6 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar7 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar8 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar9 = param_3;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar10;
  _objc_opt_class();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar13 = param_3;
  func_0x00010bf67040();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_88 = puVar10;
  _objc_opt_class();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar15 = param_3;
  puVar17 = puVar14;
  func_0x00010bf67040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_90 = PTR_PTR_1126e3530;
  puVar16 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar16,PTR_s_init_1125d9248);
  if (puVar16 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    uVar18 = puVar16[1];
    puVar16[1] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar2;
    func_0x00010bf51e00();
    uVar18 = puVar16[2];
    puVar16[2] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar3;
    func_0x00010bf51e00();
    uVar18 = puVar16[3];
    puVar16[3] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar9;
    func_0x00010bf51e00();
    uVar18 = puVar16[4];
    puVar16[4] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar4;
    func_0x00010bf51e00();
    uVar18 = puVar16[5];
    puVar16[5] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar5;
    func_0x00010bf51e00();
    uVar18 = puVar16[6];
    puVar16[6] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar6;
    func_0x00010bf51e00();
    uVar18 = puVar16[7];
    puVar16[7] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar7;
    func_0x00010bf51e00();
    uVar18 = puVar16[8];
    puVar16[8] = puVar1;
    _objc_release(uVar18);
    puVar1 = puVar8;
    func_0x00010bf51e00();
    uVar18 = puVar16[9];
    puVar16[9] = puVar1;
    _objc_release(uVar18);
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    uVar18 = puVar16[10];
    puVar16[10] = puVar10;
    _objc_release(uVar18);
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    puVar17 = puVar15;
    func_0x00010c00c580();
    uVar18 = puVar16[0xb];
    puVar16[0xb] = puVar10;
    _objc_release(uVar18);
  }
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar16;
  }
  ___stack_chk_fail();
  _objc_retain(puVar17);
  func_0x00010bf93020();
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
  func_0x00010bf93020(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return puVar17;
}



/* Entry: 104a3408c; end: 104a3419b; -[OIDTokenRequest encodeWithCoder:] */

void FUN_104a3408c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e18e58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110db9558);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110db9578);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110da85d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110db9598);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110db95d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e18ed8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110e18e98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110da83f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110da85f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a3419c; end: 104a34297; -[OIDTokenRequest description] */

void FUN_104a3419c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bdc3120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010bdc1620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar2,param_2,uVar3,4);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da8598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a34298; end: 104a3429f; -[OIDTokenRequest tokenRequestURL] */

void FUN_104a34298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_tokenEndpoint_11267a628)
  ;
  return;
}



/* Entry: 104a342a0; end: 104a3438f; -[OIDTokenRequest tokenRequestBody] */

void FUN_104a342a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae320;
  _objc_alloc_init(PTR_PTR_1126ae320);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e18e58);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db95d8);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9598,lVar2);
    _objc_release(lVar2);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e18ed8);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9558);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e18e98);
  }
  func_0x00010befa5e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a34390; end: 104a34767; -[OIDTokenRequest URLRequest] */

undefined * FUN_104a34390(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c2731e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  func_0x00010c1a4fc0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dada18);
  func_0x00010c2201e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da8618,
                      &PTR____CFConstantStringClassReference_110dbea38);
  lVar4 = param_1;
  func_0x00010c2731c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  if (*(long *)(param_1 + 0x30) == 0) {
    func_0x00010befa5c0(lVar4,param_2,&PTR____CFConstantStringClassReference_110db9578,
                        *(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar5 = PTR_PTR_1126ae358;
    func_0x00010bfb57c0(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126ae358;
    func_0x00010bfb57c0(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da8638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar2,param_2,puVar9,&PTR____CFConstantStringClassReference_110e3f358);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar17);
    _objc_release(puVar5);
  }
  lVar10 = lVar4;
  func_0x00010bdc2e40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4f00(puVar3,param_2,lVar11);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain();
  puVar5 = puVar2;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar15 = *plStack_1a0;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(puVar2);
        }
        uVar13 = *(undefined8 *)(lStack_1a8 + (long)puVar17 * 8);
        puVar6 = puVar2;
        func_0x00010c0e00e0(puVar2,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2201e0(puVar3,param_2,puVar6,uVar13);
        _objc_release(puVar6);
        puVar17 = puVar17 + 1;
      } while (puVar5 != puVar17);
      puVar5 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x58);
  _objc_retain();
  lVar15 = lVar12;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar16 = *plStack_1e0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1e0 != lVar16) {
          _objc_enumerationMutation(lVar12);
        }
        uVar14 = *(undefined8 *)(lStack_1e8 + lVar18 * 8);
        uVar13 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c0e00e0(uVar13,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2201e0(puVar3,param_2,uVar13,uVar14);
        _objc_release(uVar13);
        lVar18 = lVar18 + 1;
      } while (lVar15 != lVar18);
      lVar15 = lVar12;
      func_0x00010bf52a60(lVar12,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar15 != 0);
  }
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(lVar1 + 8);
}



/* Entry: 104a34768; end: 104a3476f; -[OIDTokenRequest configuration] */

undefined8 FUN_104a34768(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a34770; end: 104a34777; -[OIDTokenRequest grantType] */

undefined8 FUN_104a34770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a34778; end: 104a3477f; -[OIDTokenRequest authorizationCode] */

undefined8 FUN_104a34778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a34780; end: 104a34787; -[OIDTokenRequest redirectURL] */

undefined8 FUN_104a34780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a34788; end: 104a3478f; -[OIDTokenRequest clientID] */

undefined8 FUN_104a34788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a34790; end: 104a34797; -[OIDTokenRequest clientSecret] */

undefined8 FUN_104a34790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a34798; end: 104a3479f; -[OIDTokenRequest scope] */

undefined8 FUN_104a34798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a347a0; end: 104a347a7; -[OIDTokenRequest refreshToken] */

undefined8 FUN_104a347a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a347a8; end: 104a347af; -[OIDTokenRequest codeVerifier] */

undefined8 FUN_104a347a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a347b0; end: 104a347b7; -[OIDTokenRequest additionalParameters] */

undefined8 FUN_104a347b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104a347b8; end: 104a347bf; -[OIDTokenRequest additionalHeaders] */

undefined8 FUN_104a347b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104a347c0; end: 104a3485b; -[OIDTokenRequest .cxx_destruct] */

void FUN_104a347c0(long param_1)

{
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



/* Entry: 104a3485c; end: 104a34913; +[OIDAuthState authStateByPresentingAuthorizationRequest:presentingViewController:callback:] */

void FUN_104a3485c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010bf10a20(param_1,param_2,param_3,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a34914; end: 104a349d3; +[OIDAuthState authStateByPresentingAuthorizationRequest:presentingViewController:prefersEphemeralSession:callback:] */

void FUN_104a34914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010bf10a20(param_1,param_2,param_3,puVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a349d4; end: 104a34a63; +[OIDAuthState authStateByPresentingAuthorizationRequest:callback:] */

void FUN_104a349d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae360;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010bf10a20(param_1,param_2,param_3,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a34a64; end: 104a34a93; +[OIDTokenResponse fieldMap] */

void FUN_104a34a64(void)

{
  if (lRam00000001136a15e8 != -1) {
    FUN_104a351d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a15e0);
  return;
}



/* Entry: 104a34a94; end: 104a34cbf;  */

void FUN_104a34a94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a15e0;
  puRam00000001136a15e0 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8678,puVar3);
  func_0x00010c1d0640(puRam00000001136a15e0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110e18ef8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar4 = PTR_PTR_1126ae338;
  func_0x00010bf65400(PTR_PTR_1126ae338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8698,puVar3,puVar4)
  ;
  func_0x00010c1d0640(puRam00000001136a15e0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110e18f18);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da86b8,puVar3);
  func_0x00010c1d0640(puRam00000001136a15e0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8658);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da86d8,puVar3);
  func_0x00010c1d0640(puRam00000001136a15e0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da24f8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da86f8,puVar3);
  func_0x00010c1d0640(puRam00000001136a15e0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110e18ed8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8718,puVar3);
  func_0x00010c1d0640(puRam00000001136a15e0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110db95d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a34cc0; end: 104a34d63; -[OIDTokenResponse init] */

undefined1 * FUN_104a34cc0(undefined8 param_1,undefined8 param_2)

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
  puStack_88 = PTR_PTR_1126e3538;
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
    uVar7 = *(undefined8 *)((long)ppuVar4 + 0x40);
    *(undefined **)((long)ppuVar4 + 0x40) = puVar1;
    _objc_release(uVar7);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  return (undefined1 *)ppuVar4;
}



/* Entry: 104a34d64; end: 104a34e57; -[OIDTokenResponse initWithRequest:parameters:] */

undefined1 *
FUN_104a34d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_48 = PTR_PTR_1126e3538;
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
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a34e58; end: 104a34e5b; -[OIDTokenResponse copyWithZone:] */

void FUN_104a34e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a34e5c; end: 104a34e63; +[OIDTokenResponse supportsSecureCoding] */

undefined8 FUN_104a34e5c(void)

{
  return 1;
}



/* Entry: 104a34e64; end: 104a34f7b; -[OIDTokenResponse initWithCoder:] */

long FUN_104a34e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae368;
  _objc_opt_class(PTR_PTR_1126ae368);
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
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a34f7c; end: 104a35013; -[OIDTokenResponse encodeWithCoder:] */

void FUN_104a34f7c(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a35014; end: 104a3511b; -[OIDTokenResponse description] */

void FUN_104a35014(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae358;
  func_0x00010c124920(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae358;
  func_0x00010c124920(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae358;
  func_0x00010c124920(PTR_PTR_1126ae358,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da8738);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104a3511c; end: 104a35123; -[OIDTokenResponse request] */

undefined8 FUN_104a3511c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a35124; end: 104a3512b; -[OIDTokenResponse accessToken] */

undefined8 FUN_104a35124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a3512c; end: 104a35133; -[OIDTokenResponse accessTokenExpirationDate] */

undefined8 FUN_104a3512c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a35134; end: 104a3513b; -[OIDTokenResponse tokenType] */

undefined8 FUN_104a35134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a3513c; end: 104a35143; -[OIDTokenResponse idToken] */

undefined8 FUN_104a3513c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a35144; end: 104a3514b; -[OIDTokenResponse refreshToken] */

undefined8 FUN_104a35144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a3514c; end: 104a35153; -[OIDTokenResponse scope] */

undefined8 FUN_104a3514c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a35154; end: 104a3515b; -[OIDTokenResponse additionalParameters] */

undefined8 FUN_104a35154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a3515c; end: 104a351d3; -[OIDTokenResponse .cxx_destruct] */

void FUN_104a3515c(long param_1)

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



/* Entry: 104a351d4; end: 104a351e7;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a351d4(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107bf300;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107bf300);
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
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107bf300);
  func_0x000107c61180();
  (*pcVar3)(0x1136a15e8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a351e8; end: 104a35217; +[OIDScopeUtilities disallowedScopeCharacters] */

void FUN_104a351e8(void)

{
  if (lRam00000001136a15f8 != -1) {
    func_0x000104a352b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a15f0);
  return;
}



/* Entry: 104a35218; end: 104a35293;  */

void FUN_104a35218(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  func_0x00010bf35a40(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248,param_2,0x23,0x39);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7600();
  func_0x00010bef7620(puVar2,param_2,&PTR____CFConstantStringClassReference_110f59178);
  puVar3 = puVar2;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a15f0;
  puRam00000001136a15f0 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a35294; end: 104a352a3; +[OIDScopeUtilities scopesWithArray:] */

void FUN_104a35294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf446f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_componentsJoinedByString__1125aeb60,
             &PTR____CFConstantStringClassReference_110db2d98);
  return;
}



/* Entry: 104a352a4; end: 104a352c7; +[OIDScopeUtilities scopesArrayWithString:] */

void FUN_104a352a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf44750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_componentsSeparatedByString__1125aeb78,
             &PTR____CFConstantStringClassReference_110db2d98);
  return;
}



/* Entry: 104a352c8; end: 104a352f7; +[OIDAuthorizationResponse fieldMap] */

void FUN_104a352c8(void)

{
  if (lRam00000001136a1608 != -1) {
    FUN_104a35c5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1600);
  return;
}


