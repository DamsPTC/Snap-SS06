/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b602fc; end: 106b60557; -[SCRecoverPasswordLoginCodeService _requestMagicCodeResultFromLoginError:] */

void FUN_106b602fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106b5fd18;
  uStack_50 = 0x106b5fd28;
  uStack_48 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_106b5fd18;
  uStack_80 = 0x106b5fd28;
  uStack_78 = 0;
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0bb0;
  if (puStack_98[5] == 0) {
    if (puStack_68[5] == 0) {
      func_0x00010c282360(PTR_PTR_1126d0bb0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c13fb00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c261980(PTR_PTR_1126d0bb0);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b60558; end: 106b6055b;  */

void FUN_106b60558(void)

{
  return;
}



/* Entry: 106b6055c; end: 106b60593;  */

void FUN_106b6055c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b60594; end: 106b60597;  */

void FUN_106b60594(void)

{
  return;
}



/* Entry: 106b60598; end: 106b60607;  */

void FUN_106b60598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b60608; end: 106b6060b;  */

void FUN_106b60608(void)

{
  return;
}



/* Entry: 106b6060c; end: 106b606b3;  */

void FUN_106b6060c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b606b4; end: 106b606c7;  */

void FUN_106b606b4(void)

{
  return;
}



/* Entry: 106b606c8; end: 106b607bf; -[SCRecoverPasswordLoginCodeService _didRequestMagicCodeSucceed:] */

undefined1 FUN_106b606c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0980(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106b607c0; end: 106b607f3;  */

void FUN_106b607c0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106b607f4; end: 106b6085f; -[SCRecoverPasswordLoginCodeService .cxx_destruct] */

void FUN_106b607f4(long param_1)

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



/* Entry: 106b60860; end: 106b608d3; -[UNISCJanusAccountRecoveryService initWithUnifiedGrpcService:] */

undefined1 * FUN_106b60860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b608d4; end: 106b609b7; -[UNISCJanusAccountRecoveryService accountRecoveryRequestCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_106b608d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d0bb8;
  _objc_opt_class(PTR_PTR_1126d0bb8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e75418,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b609b8; end: 106b60a9b; -[UNISCJanusAccountRecoveryService accountRecoveryVerifyCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_106b609b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d0bc0;
  _objc_opt_class(PTR_PTR_1126d0bc0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e75438,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b60a9c; end: 106b60aa7; -[UNISCJanusAccountRecoveryService .cxx_destruct] */

void FUN_106b60a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b60aa8; end: 106b60c57; -[SCRecoverPasswordPhoneServiceGrpcImpl initWithAccountRecoveryService:clientRequestIdProvider:clientIdProvider:deviceIdentifierProvider:preLoginAttestationProvider:deviceCheckManager:identityRequestLogger:skipDeviceCheckToken:] */

undefined1 *
FUN_106b60aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f5180;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 106b60c58; end: 106b60e47; -[SCRecoverPasswordPhoneServiceGrpcImpl requestCodeWithPhoneNumber:countryCode:usernameOrEmail:isResolvingChallenge:preAuthToken:phoneCall:completion:] */

void FUN_106b60c58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde1380(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_70 = param_6;
  _objc_retain(param_7);
  uStack_6f = param_8;
  _objc_retain(param_9);
  func_0x00010be911c0(param_1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b60e48; end: 106b60eb3;  */

void FUN_106b60e48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90bc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b60eb4; end: 106b6115b; -[SCRecoverPasswordPhoneServiceGrpcImpl _requestCodeWithPhoneNumber:countryCode:usernameOrEmail:isResolvingChallenge:preAuthToken:phoneCall:requestHeader:completion:] */

void FUN_106b60eb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126d0bc8;
  _objc_opt_new(PTR_PTR_1126d0bc8);
  puVar5 = PTR_PTR_1126af038;
  func_0x00010c2967a0();
  if ((int)puVar5 == 0) {
    func_0x00010c21f760(puVar1);
  }
  else {
    func_0x00010c194080(puVar1);
  }
  func_0x00010c083b00(PTR_PTR_1126afa00);
  func_0x00010c1b5b20(puVar1);
  func_0x00010c1db1e0(puVar1);
  func_0x00010c1db1c0(puVar1);
  func_0x00010c1c7660(puVar1);
  func_0x00010c1ebc80(puVar1);
  lVar2 = param_8;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1613c0(puVar1);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b20();
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_2);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  FUN_106b6115c(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_1;
  _objc_retain(param_11);
  func_0x00010beed620(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106b6115c; end: 106b61277;  */

void FUN_106b6115c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dadcb8);
  }
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x00010bf15da0(param_1,param_2,0x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110dd9cf8);
    _objc_release(lVar3);
  }
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c16c6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106b61278; end: 106b612e7;  */

void FUN_106b61278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2f140(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b612e8; end: 106b61533; -[SCRecoverPasswordPhoneServiceGrpcImpl _handleRequestCodeResponse:error:submitRequestTime:completion:] */

void FUN_106b612e8(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  if (param_3 != (undefined *)0x0) {
    FUN_106b80478(param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126d0b48;
  if ((param_3 == (undefined *)0x0) || (param_4 != 0)) {
    func_0x00010be0b060(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0200(puVar4);
    _objc_retainAutoreleasedReturnValue();
LAB_106b61458:
    (**(code **)(param_5 + 0x10))(param_5,puVar4);
  }
  else {
    puVar4 = param_3;
    func_0x00010c252ee0();
    puVar5 = PTR_PTR_1126d0b48;
    uVar2 = (uint)puVar4;
    if (uVar2 < 0xe) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      if (((uVar1 & 0x3cf8) == 0) && ((uVar1 & 5) == 0)) {
        if (uVar2 == 1) {
          puVar4 = param_3;
          func_0x00010c2617a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010beed640();
          _objc_retainAutoreleasedReturnValue();
          param_1 = puVar5;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = PTR_PTR_1126d0b48;
          func_0x00010c261a00(PTR_PTR_1126d0b48);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106b61458;
        }
        goto LAB_106b61520;
      }
    }
    else {
LAB_106b61520:
      if (uVar2 != 0xfbadbeef) goto LAB_106b6147c;
    }
    param_1 = param_3;
    func_0x00010bf98a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bfe4e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_1);
LAB_106b6147c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b61534; end: 106b615bb; -[SCRecoverPasswordPhoneServiceGrpcImpl verifyChallengeResponseWithCountryCode:phoneNumber:type:response:completion:] */

void FUN_106b61534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x22;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  uVar5 = param_4;
  uVar6 = param_6;
  uVar7 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _objc_retain(param_8);
  _objc_retain(unaff_x22);
  lVar2 = *(long *)(puVar1 + 0x10);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bde1380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_98,puVar1);
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _objc_retain(param_8);
  _objc_retain(unaff_x22);
  func_0x00010be911c0(puVar1);
  _objc_release(unaff_x22);
  _objc_release(param_8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(unaff_x22);
  _objc_release(param_8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 106b615bc; end: 106b617eb; -[SCRecoverPasswordPhoneServiceGrpcImpl verifyPhoneWithCode:countryCode:usernameOrEmail:preAuthToken:phoneNumber:successBlock:failureBlock:] */

void FUN_106b615bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde1380(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be911c0(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b617ec; end: 106b61857;  */

void FUN_106b617ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b61858; end: 106b61af7; -[SCRecoverPasswordPhoneServiceGrpcImpl _verifyPhoneWithCode:countryCode:usernameOrEmail:preAuthToken:phoneNumber:requestHeader:successBlock:failureBlock:] */

void FUN_106b61858(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126d0bd0;
  _objc_opt_new(PTR_PTR_1126d0bd0);
  func_0x00010c1d6b40();
  func_0x00010c1db1c0(puVar1);
  func_0x00010c1db1e0(puVar1);
  func_0x00010c1ebc80(puVar1);
  lVar2 = param_7;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1613c0(puVar1);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b20();
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_2);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  FUN_106b6115c(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_1;
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010beed660(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106b61af8; end: 106b61b67;  */

void FUN_106b61af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be32f80(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b61b68; end: 106b61d6f; -[SCRecoverPasswordPhoneServiceGrpcImpl _handleVerifyCodeResponse:error:submitRequestTime:successBlock:failureBlock:] */

void FUN_106b61b68(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  if (param_3 != 0) {
    FUN_106b80620(param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar3);
  _objc_release(uVar3);
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x00010be0b060(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bf3ec40(param_4);
    (**(code **)(param_6 + 0x10))(param_6,param_1,lVar4 == 0xe);
  }
  else {
    lVar4 = param_3;
    func_0x00010c252ee0();
    uVar2 = (uint)lVar4;
    param_1 = param_3;
    if (uVar2 < 0xe) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      if (((uVar1 & 0x3df8) != 0) || ((uVar1 & 5) != 0)) goto LAB_106b61c54;
      if (uVar2 != 1) goto LAB_106b61d5c;
      func_0x00010c2617a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,lVar4);
    }
    else {
LAB_106b61d5c:
      if (uVar2 != 0xfbadbeef) goto LAB_106b61cd8;
LAB_106b61c54:
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bfe4e60();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,lVar4,0);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_1);
LAB_106b61cd8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b61d70; end: 106b61e17; -[SCRecoverPasswordPhoneServiceGrpcImpl _errorMessage:] */

void FUN_106b61d70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3ec40();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0xe) {
    func_0x000108b9aabc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108b9aad4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf3ec40();
  _objc_release(param_3);
  func_0x00010c14de00(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b61e18; end: 106b61fc7; -[SCRecoverPasswordPhoneServiceGrpcImpl _requestHeaderWithClientRequestId:clientAttestationPayload:completion:] */

void FUN_106b61e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b8ad8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c17d040();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a40(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180840(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c17ca60(puVar1);
  _objc_release(param_4);
  lVar3 = *(long *)(param_1 + 0x40);
  (**(code **)(lVar3 + 0x10))();
  if ((int)lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010bfa6480(uVar4);
    _objc_release(uVar4);
    _objc_release(param_5);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 106b61fc8; end: 106b61ff7;  */

void FUN_106b61fc8(long param_1,undefined8 param_2)

{
  func_0x00010c1aee20(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x000106b61ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106b61ff8; end: 106b620c7; -[SCRecoverPasswordPhoneServiceGrpcImpl _clientAttestationPayload:] */

void FUN_106b61ff8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(param_1 * 1000.0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfbf000(uVar4,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106b620c8; end: 106b6213f; -[SCRecoverPasswordPhoneServiceGrpcImpl .cxx_destruct] */

void FUN_106b620c8(long param_1)

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



/* Entry: 106b62140; end: 106b621f7; +[SCUnauthenticatedPasswordService sharedInstance] */

void FUN_106b62140(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c6a28 != -1) {
    func_0x00010002a2fc(0x1136c6a28,&PTR___NSConcreteGlobalBlock_110962af8);
  }
  uVar1 = uRam00000001136c6a20;
  _objc_retain(uRam00000001136c6a20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b621f8; end: 106b6226b; -[SCUnauthenticatedPasswordService initWithRequestManager:] */

undefined1 * FUN_106b621f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6226c; end: 106b62383; -[SCUnauthenticatedPasswordService changePassword:preAuthToken:usernameOrEmail:successBlock:failureBlock:] */

void FUN_106b6226c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106b62384;
  puStack_78 = &UNK_110962b18;
  uStack_70 = param_6;
  _objc_retain(param_7);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106b62448;
  puStack_a0 = &UNK_1108ab6d0;
  uStack_98 = param_7;
  uStack_68 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bddc9a0(param_1,param_2,param_3,param_4,param_5,&puStack_90,&puStack_b8);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 106b62384; end: 106b624eb;  */

void FUN_106b62384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_106b7f20c(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c080320();
  puVar1 = PTR_PTR_1126afca8;
  if ((int)uVar2 == 0) {
    uVar2 = param_2;
    func_0x00010bf98d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      uVar2 = param_2;
      func_0x00010bf98d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,uVar2);
      _objc_release(uVar2);
    }
  }
  else if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b624ec; end: 106b6264b; -[SCUnauthenticatedPasswordService _changePassword:preAuthToken:usernameOrEmail:successBlock:failureBlock:] */

void FUN_106b624ec(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_70 = param_3;
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110df8f98;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110df8e98;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuStack_68 = param_5;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e75398;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuStack_60 = param_4;
  }
  ppuVar7 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1,param_2,&ppuStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e75498;
  puVar2 = puVar1;
  ppuVar5 = param_6;
  ppuVar6 = param_7;
  func_0x00010bec6420(param_1);
  iVar4 = (int)puVar2;
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar3);
  _objc_alloc_init(puVar2);
  func_0x00010c220220();
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar3 = ppuVar6;
  }
  func_0x00010c220220(puVar2,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110df8e98);
  _objc_release(ppuVar6);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar3 = ppuVar5;
  }
  func_0x00010c220220(puVar2,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110e75398);
  _objc_release(ppuVar5);
  if (iVar4 != 0) {
    func_0x00010c220220(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad378,
                        &PTR____CFConstantStringClassReference_110df8fd8);
  }
  func_0x00010be23f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110e754b8,puVar2,ppuVar7
                      ,param_8);
  _objc_release(puVar2);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 106b6264c; end: 106b6278b; -[SCUnauthenticatedPasswordService getPasswordStrength:quickCheck:preAuthToken:usernameOrEmail:successBlock:failureBlock:] */

void FUN_106b6264c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined **param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar2);
  func_0x00010c220220();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_6 != (undefined **)0x0) {
    ppuVar1 = param_6;
  }
  func_0x00010c220220(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110df8e98);
  _objc_release(param_6);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  func_0x00010c220220(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e75398);
  _objc_release(param_5);
  if (param_4 != 0) {
    func_0x00010c220220(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad378,
                        &PTR____CFConstantStringClassReference_110df8fd8);
  }
  func_0x00010be23f20(param_1,param_2,&PTR____CFConstantStringClassReference_110e754b8,puVar2,
                      param_7,param_8);
  _objc_release(puVar2);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106b6278c; end: 106b62917; -[SCUnauthenticatedPasswordService _getpasswordStrengthWithEndpoint:parameters:successBlock:failureBlock:] */

void FUN_106b6278c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106b62874;
  puStack_50 = &UNK_110962b48;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106b62918;
  puStack_78 = &UNK_1108ab6d0;
  uStack_70 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bec6420(param_1,param_2,param_3,param_4,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106b62918; end: 106b6292b;  */

void FUN_106b62918(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106b62924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106b6292c; end: 106b62b37; -[SCUnauthenticatedPasswordService _submitPostRequestWithEndpoint:parameters:successBlock:failureBlock:] */

void FUN_106b6292c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR_PTR_1126b4960;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920(PTR_PTR_1126bbf20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf586a0(puVar4,param_2,param_3,param_4,0,puVar2,PTR____NSArray0__struct_11034ab48,
                      puVar3,5,1,3,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010b277124();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b62b38;
  puStack_70 = &UNK_1108ab730;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106b62b54;
  puStack_98 = &UNK_1108a0d30;
  uStack_90 = param_6;
  uStack_68 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_5);
  puVar2 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f5a0(uVar5,param_2,puVar4,uVar1,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,&puStack_88,&puStack_b0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar4);
  return;
}



/* Entry: 106b62b38; end: 106b62b6f;  */

void FUN_106b62b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106b62b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 106b62b70; end: 106b62b7b; -[SCUnauthenticatedPasswordService .cxx_destruct] */

void FUN_106b62b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b62b7c; end: 106b62f1b; -[SCRecoverPasswordUIRouteActions initWithParentUIContainer:window:codeVerificationScopeExposer:ngoCodeVerificationScopeServices:countryCodePickerScopeExposer:inAppSupportScopeExposer:webBrowsingScopeExposer:emailEntryScopeExposer:loggerServices:composerServices:inAppSupportEnabled:emailFirstEnabled:recoverPasswordPhoneService:loginCodeService:cos:accountRecoveryViaSignIn:currentPageTracker:] */

undefined8 *
FUN_106b62b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126f5190;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1d) = param_18;
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af108;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1a) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xd1) = param_13._1_1_;
    _objc_retain(param_15);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af348;
    _objc_alloc();
    func_0x00010c05a560();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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
  return puVar1;
}



/* Entry: 106b62f1c; end: 106b62fff; -[SCRecoverPasswordUIRouteActions showRecoverPasswordAlertWithDelegate:logger:] */

void FUN_106b62f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d0be0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00a8c0();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126d0be8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042620(puVar2,param_2,uVar3,*(undefined8 *)(param_1 + 8),
                      *(undefined1 *)(param_1 + 0xd1));
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b63000; end: 106b63003; -[SCRecoverPasswordUIRouteActions removeRecoverPasswordAlert] */

void FUN_106b63000(void)

{
  return;
}



/* Entry: 106b63004; end: 106b63287; -[SCRecoverPasswordUIRouteActions showRecoverPasswordPhoneEntryWithDelegate:phoneNumber:usernameOrEmail:logger:] */

void FUN_106b63004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126af2d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126af2e0;
  func_0x00010c124000(PTR_PTR_1126af2e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035a00(puVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    puVar2 = *(undefined **)(param_1 + 0x58);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126d0ac8;
    _objc_alloc(PTR_PTR_1126d0ac8);
    uVar8 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035c00(puVar2);
    _objc_release(uVar8);
  }
  puVar3 = PTR_PTR_1126d0bf0;
  _objc_alloc(PTR_PTR_1126d0bf0);
  func_0x00010c00ab40();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar4;
  _objc_release(uVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bef76a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd08a0(param_1);
  puVar4 = PTR_PTR_1126d0bf8;
  _objc_alloc(PTR_PTR_1126d0bf8);
  uVar8 = uVar5;
  func_0x00010c150e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c150e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af160;
  _objc_opt_new(PTR_PTR_1126af160);
  func_0x00010c0358c0(puVar4);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_storeWeak(param_1 + 0x40,puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b63288; end: 106b632b7; -[SCRecoverPasswordUIRouteActions removePhoneEntryScreen] */

void FUN_106b63288(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b632b8; end: 106b63433; -[SCRecoverPasswordUIRouteActions showWebviewEmailEntryScreenWithDelegate:usernameOrEmail:url:] */

void FUN_106b632b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bdd08a0(param_1);
  puVar2 = PTR_PTR_1126b4f58;
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_opt_new(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x00010bdc3620(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d0c00;
  _objc_alloc(PTR_PTR_1126d0c00);
  if (param_5 == 0) {
    func_0x00010c062ea0();
  }
  else {
    func_0x00010c062f00();
  }
  puVar3 = PTR_PTR_1126d0c08;
  _objc_alloc(PTR_PTR_1126d0c08);
  func_0x00010c00b400();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar4;
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126d0c10;
  _objc_alloc(PTR_PTR_1126d0c10);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c150e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042600(puVar4,param_2,uVar5,puVar2);
  _objc_release(uVar5);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b63434; end: 106b6350f; -[SCRecoverPasswordUIRouteActions showNativeEmailEntryScreenWithDelegate:email:dataSource:] */

void FUN_106b63434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdd08a0(param_1);
  puVar1 = PTR_PTR_1126d0c18;
  _objc_alloc(PTR_PTR_1126d0c18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058460(puVar1,param_2,uVar3,param_4,1,uVar2,param_3,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 200),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b63510; end: 106b6356f; -[SCRecoverPasswordUIRouteActions removeEmailEntryScreen] */

void FUN_106b63510(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 200);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar2);
  }
  else {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 200));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b63570; end: 106b6379b; -[SCRecoverPasswordUIRouteActions showPhoneCodeEntryScreenForPhoneReceivingCode:codeSentViaSMS:usernameOrEmail:passwordResetToken:recoverPasswordLogger:delegate:] */

void FUN_106b63570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d0c20;
  _objc_alloc(PTR_PTR_1126d0c20);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0b43e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035bc0(puVar1,param_2,param_3,param_4,param_6,param_5,uVar7,uVar2,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c038f40(puVar3,param_2,lVar4,1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar2);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126aed98;
  uVar2 = param_3;
  func_0x00010c0cf3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfb5dc0(puVar3,param_2,uVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126af120;
  func_0x00010c0fb340(PTR_PTR_1126af120,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf24120(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),puVar6,1,puVar1,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa0),param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106b6379c; end: 106b63947; -[SCRecoverPasswordUIRouteActions showCodeVerificationScreenWithChannel:delegate:] */

void FUN_106b6379c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106b63948;
  uStack_60 = 0x106b63958;
  uStack_58 = 0;
  func_0x00010c0bd9c0(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa0));
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b63948; end: 106b6395f;  */

void FUN_106b63948(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b63960; end: 106b639a7;  */

void FUN_106b63960(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af120;
  func_0x00010bf8db60(PTR_PTR_1126af120,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b639a8; end: 106b63a77;  */

void FUN_106b639a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126aed98;
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0cf3c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0fafc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfb5dc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126af120;
  func_0x00010c0fb340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b63a78; end: 106b63aaf; -[SCRecoverPasswordUIRouteActions removePhoneCodeEntryScreen] */

void FUN_106b63a78(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x28),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b63ab0; end: 106b63c3f; -[SCRecoverPasswordUIRouteActions showChooseNewPasswordScreenWithPasswordResetToken:usernameOrEmail:logger:delegate:] */

void FUN_106b63ab0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d0bd8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0b43e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d0c28;
  _objc_alloc(PTR_PTR_1126d0c28);
  func_0x00010c034580();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126d0c30;
  _objc_alloc(PTR_PTR_1126d0c30);
  func_0x00010c02f900();
  _objc_release(param_6);
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126d0c38;
  _objc_alloc(PTR_PTR_1126d0c38);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c150e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423c0(puVar5,param_2,uVar6,*(undefined8 *)(param_1 + 0xf0));
  _objc_release(uVar6);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b63c40; end: 106b63c6f; -[SCRecoverPasswordUIRouteActions removeChooseNewPasswordScreen] */

void FUN_106b63c40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b63c70; end: 106b63cd7; -[SCRecoverPasswordUIRouteActions showPasswordResetSuccessScreen:] */

void FUN_106b63c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0c40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00a620();
  _objc_release(param_3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b63cd8; end: 106b63ce3; -[SCRecoverPasswordUIRouteActions removePasswordResetSuccessScreen] */

void FUN_106b63cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b63ce4; end: 106b63e5f; -[SCRecoverPasswordUIRouteActions showUsernameChallengeWithDelegate:phoneNumber:codeSentViaSMS:maskedUsername:logger:] */

void FUN_106b63ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d0ac8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035c00(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d0c48;
  _objc_alloc(PTR_PTR_1126d0c48);
  func_0x00010c00ab60();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar4;
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d0c50;
  _objc_alloc(PTR_PTR_1126d0c50);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c150e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423c0(puVar4,param_2,uVar2,*(undefined8 *)(param_1 + 0xf0));
  _objc_release(uVar2);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b63e60; end: 106b63e8f; -[SCRecoverPasswordUIRouteActions removeUsernameChallenge] */

void FUN_106b63e60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b63e90; end: 106b63f8b; -[SCRecoverPasswordUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:email:phone:delegate:] */

void FUN_106b63e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf048a0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b63f8c; end: 106b6427b; -[SCRecoverPasswordUIRouteActions showUserChallengeWithPhoneNumber:challengePrompts:logger:delegate:] */

void FUN_106b63f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126d0c58;
    _objc_alloc();
    func_0x00010c035a20();
    uVar10 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar4;
    _objc_release(uVar10);
    puVar4 = PTR_PTR_1126d0c60;
    _objc_alloc();
    func_0x00010c007120();
    puVar5 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    func_0x00010c1c1bc0();
    puVar6 = PTR_PTR_1126d0c68;
    _objc_opt_new(PTR_PTR_1126d0c68);
    func_0x00010c1cba60();
    uVar10 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110962b98);
    func_0x00010c1d5fe0(puVar6);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c1146c0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e36a0(puVar6);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c0abd20(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0380(puVar6);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bfd0e80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a51e0(puVar6);
    _objc_release(uVar10);
    puVar7 = PTR_PTR_1126d0c78;
    _objc_alloc(PTR_PTR_1126d0c78);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c295440(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar8);
    func_0x00010c1801a0(puVar4);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar10);
    func_0x00010bdd08a0(param_1);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6427c; end: 106b6431f;  */

void FUN_106b6427c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d0c70;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c27dd80();
  uVar2 = param_2;
  func_0x00010bfe36a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c055b80(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b64320; end: 106b64353; -[SCRecoverPasswordUIRouteActions removeUserChallenge] */

void FUN_106b64320(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x38),param_2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b64354; end: 106b643ff; -[SCRecoverPasswordUIRouteActions showInAppSupport:] */

void FUN_106b64354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126d0c80;
  _objc_alloc(PTR_PTR_1126d0c80);
  func_0x00010c0582c0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xb8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b64400; end: 106b64437; -[SCRecoverPasswordUIRouteActions supportScopeDidComplete] */

void FUN_106b64400(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x28),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xb8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b64438; end: 106b6443f; -[SCRecoverPasswordUIRouteActions openUrlInWebBrowser:browsingDelegate:] */

void FUN_106b64438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exposeWebBrowserWithUrl_browsin_112560ef8,param_3,param_4,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106b64440; end: 106b64473; -[SCRecoverPasswordUIRouteActions dismissWebBrowser] */

void FUN_106b64440(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xc0));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b64474; end: 106b64513; -[SCRecoverPasswordUIRouteActions openUrlInModalWebBrowser:browsingDelegate:] */

void FUN_106b64474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xc0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar3);
    func_0x00010be0d560(param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b64514; end: 106b6455f; -[SCRecoverPasswordUIRouteActions dismissModalWebBrowser] */

void FUN_106b64514(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xc0));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x30),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106b64560; end: 106b6470b; -[SCRecoverPasswordUIRouteActions _exposeWebBrowserWithUrl:browsingDelegate:container:] */

void FUN_106b64560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b6470c;
  puStack_60 = &UNK_110842308;
  uVar4 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&puStack_78,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar5 = puVar3;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xc0),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 106b6470c; end: 106b6471f;  */

void FUN_106b6470c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106b64720; end: 106b64757; -[SCRecoverPasswordUIRouteActions _attachUIIfNecessary] */

void FUN_106b64720(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



/* Entry: 106b64758; end: 106b648af; -[SCRecoverPasswordUIRouteActions .cxx_destruct] */

void FUN_106b64758(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106b648b0; end: 106b64a03; -[SCRecoverPasswordWorkflow initWithRouter:delegate:logger:usernameOrEmail:accountRecoveryViaSignIn:loginLogger:loginStateTransitionLogger:] */

undefined1 *
FUN_106b648b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f5198;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x41) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b64a04; end: 106b64a5b; -[SCRecoverPasswordWorkflow beginWorkflow] */

void FUN_106b64a04(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b64a5c;
  puStack_20 = &UNK_110962bb8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b64a5c; end: 106b64a6b;  */

void FUN_106b64a5c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2398b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showRecoverPasswordAlertWithDele_11266c050,*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  return;
}



/* Entry: 106b64a6c; end: 106b64a97; -[SCRecoverPasswordWorkflow recoverPasswordAlertDidCancel] */

void FUN_106b64a6c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c124040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b64a98; end: 106b64b63; -[SCRecoverPasswordWorkflow recoverPasswordViaPhone] */

void FUN_106b64a98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126af2d8;
  _objc_alloc();
  func_0x00010c02c420();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106b64b1c;
  puStack_38 = &UNK_110962be8;
  lStack_30 = param_1;
  puStack_28 = puVar1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_50);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b64b64; end: 106b64bbb; -[SCRecoverPasswordWorkflow recoverPasswordViaEmail] */

void FUN_106b64b64(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b64bbc;
  puStack_20 = &UNK_110962bb8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b64bbc; end: 106b64c5b;  */

void FUN_106b64bbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c12df20(param_2);
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x41) == '\x01') {
    func_0x00010c0ae4a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be1ec60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238a40(param_2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c23ad60(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b64c5c; end: 106b64c87; -[SCRecoverPasswordWorkflow recoverPasswordViaEmailExited] */

void FUN_106b64c5c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c124060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b64c88; end: 106b64cbf; -[SCRecoverPasswordWorkflow recoverPasswordPhoneEntryExited] */

void FUN_106b64c88(long param_1)

{
  func_0x00010c0ae3a0(*(undefined8 *)(param_1 + 0x38));
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c124060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b64cc0; end: 106b64d9b; -[SCRecoverPasswordWorkflow passwordResetInitiatedWithPhone:passwordResetToken:codeSentViaSMS:] */

void FUN_106b64cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x40) = param_5;
  func_0x00010c0ae4a0(*(undefined8 *)(param_1 + 0x38),param_2,0x46);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b64d9c;
  puStack_50 = &UNK_110962bb8;
  lStack_48 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b64d9c; end: 106b64db3;  */

void FUN_106b64d9c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c238ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showPhoneCodeEntryScreenForPhone_11266be20,*(undefined8 *)(lVar1 + 0x30),
             *(undefined1 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x18),
             *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x38));
  return;
}



/* Entry: 106b64db4; end: 106b64f03; -[SCRecoverPasswordWorkflow userChallengedCOS:phoneNumber:clientRequestId:authSessionPayload:optedIn1TL:] */

void FUN_106b64db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0x43) = param_7;
  *(undefined8 *)(param_1 + 0x48) = 6;
  puVar1 = PTR_PTR_1126d0b98;
  func_0x00010c0fb340(PTR_PTR_1126d0b98,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar2);
  func_0x00010c0ae4a0(*(undefined8 *)(param_1 + 0x38),param_2,0x46);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b64f04;
  puStack_70 = &UNK_110962c18;
  uStack_68 = param_3;
  uStack_60 = param_6;
  uStack_58 = param_5;
  uStack_50 = param_4;
  lStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar2,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 106b64f04; end: 106b64f1b;  */

void FUN_106b64f04(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCOSChallenge_authSessionPayl_11266b340,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106b64f1c; end: 106b64fef; -[SCRecoverPasswordWorkflow magicCodeEncounteredWithPhone:optedIn1TL:] */

void FUN_106b64f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x43) = param_4;
  *(undefined8 *)(param_1 + 0x48) = 6;
  puVar1 = PTR_PTR_1126d0b98;
  func_0x00010c0fb340(PTR_PTR_1126d0b98,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae4a0(*(undefined8 *)(param_1 + 0x38),param_2,0x46);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b64ff0;
  puStack_48 = &UNK_110962be8;
  puStack_40 = puVar1;
  lStack_38 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_60);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b64ff0; end: 106b64ffb;  */

void FUN_106b64ff0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2369b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCodeVerificationScreenWithCh_11266b490,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106b64ffc; end: 106b650e3; -[SCRecoverPasswordWorkflow usernameChallengeEncounteredWithPhone:codeSentViaSMS:maskedUsername:] */

void FUN_106b64ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x40) = param_4;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b650e4;
  puStack_50 = &UNK_110962c48;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106b650e4; end: 106b6512f;  */

void FUN_106b650e4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12da20(param_2);
  func_0x00010c23ab80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b65130; end: 106b65203; -[SCRecoverPasswordWorkflow userChallengeEncounteredWithPhone:codeSentViaSMS:challengePrompts:] */

void FUN_106b65130(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x40) = param_4;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b65204;
  puStack_50 = &UNK_110962c48;
  uStack_48 = param_3;
  uStack_40 = param_5;
  lStack_38 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106b65204; end: 106b65217;  */

void FUN_106b65204(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showUserChallengeWithPhoneNumber_11266c4f8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
  return;
}



/* Entry: 106b65218; end: 106b652a7; -[SCRecoverPasswordWorkflow recoverPasswordPhoneEntrySelectedRecoveryViaEmail:] */

void FUN_106b65218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b652a8;
  puStack_48 = &UNK_110962be8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b652a8; end: 106b652eb;  */

void FUN_106b652a8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12da20(param_2);
  func_0x00010c23ad60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b652ec; end: 106b6537f; -[SCRecoverPasswordWorkflow userChallengeCompletedWithPasswordResetToken:] */

void FUN_106b652ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b65380;
  puStack_40 = &UNK_110962bb8;
  lStack_38 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  _objc_release(param_3);
  return;
}


