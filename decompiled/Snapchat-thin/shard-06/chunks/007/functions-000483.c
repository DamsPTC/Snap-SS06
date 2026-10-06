/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d3bd74; end: 104d3bd7f; -[SCUserPhoneVerificationLoggerImpl .cxx_destruct] */

void FUN_104d3bd74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3bd80; end: 104d3bee7; -[SCUserPhoneVerificationUIRouteActions initWithUIContainer:phoneEntryScopeExposer:codeVerificationScopeExposer:ngoCodeVerificationScopeServices:phoneEntryService:phoneNumberProvider:] */

undefined1 *
FUN_104d3bd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e3f58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af108;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf0c980(param_3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d3bee8; end: 104d3bfeb; -[SCUserPhoneVerificationUIRouteActions showPhoneEntryScreenWithDelegate:dataSource:context:] */

void FUN_104d3bee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126afb20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058640(puVar1,param_2,uVar5,uVar3,param_5,uVar4,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3bfec; end: 104d3c00b; -[SCUserPhoneVerificationUIRouteActions removePhoneEntryScreen] */

void FUN_104d3bfec(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d3c00c; end: 104d3c0d3; -[SCUserPhoneVerificationUIRouteActions showCodeVerificationScreenWithDelegate:codeVerificationService:channel:] */

void FUN_104d3c00c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf24120(uVar2,param_2,puVar1,param_5,1,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3c0d4; end: 104d3c0f3; -[SCUserPhoneVerificationUIRouteActions removeCodeVerificationScreen] */

void FUN_104d3c0d4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d3c0f4; end: 104d3c153; -[SCUserPhoneVerificationUIRouteActions .cxx_destruct] */

void FUN_104d3c0f4(long param_1)

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



/* Entry: 104d3c154; end: 104d3c1d7; -[SCUserPhoneVerificationCodeVerificationService initWithPhoneMutator:verificationType:] */

undefined1 *
FUN_104d3c154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3f60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d3c1d8; end: 104d3c207; -[SCUserPhoneVerificationCodeVerificationService setPhoneNumber:] */

void FUN_104d3c1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d3c208; end: 104d3c393; -[SCUserPhoneVerificationCodeVerificationService requestCodeResendWithSuccessBlock:failureBlock:] */

void FUN_104d3c208(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = param_4;
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126af128;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x000106b857fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282380(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (param_4 != (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,puVar5);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0cf3c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0fafc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf18f00(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    puVar5 = param_4;
  }
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d3c394; end: 104d3c4bf;  */

void FUN_104d3c394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0a60(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d3c4c0; end: 104d3c5a7;  */

void FUN_104d3c4c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af128;
  lVar2 = param_1;
  func_0x000106b857fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13fb20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3c5a8; end: 104d3c5bb;  */

void FUN_104d3c5a8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104d3c5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104d3c5bc; end: 104d3c60b;  */

void FUN_104d3c5bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af128;
  func_0x00010c13fb20(PTR_PTR_1126af128,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3c60c; end: 104d3c703; -[SCUserPhoneVerificationCodeVerificationService verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

void FUN_104d3c60c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d3c704;
  puStack_58 = &UNK_11084c190;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bfafde0(uVar2,param_2,param_3,uVar1,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104d3c704; end: 104d3c8cb;  */

void FUN_104d3c704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0a40(param_2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d3c8cc; end: 104d3c93b;  */

void FUN_104d3c8cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af130;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03fb60();
  _objc_release(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3c93c; end: 104d3c9ff;  */

void FUN_104d3c93c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afb28;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c053220();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126af130;
  _objc_alloc(PTR_PTR_1126af130);
  func_0x00010c03fb60();
  _objc_release(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3ca00; end: 104d3ca73;  */

void FUN_104d3ca00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af138;
  lVar2 = param_1;
  func_0x000106b857fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13fb20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3ca74; end: 104d3cbb3;  */

void FUN_104d3ca74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af138;
  func_0x00010c13fb20(PTR_PTR_1126af138,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3cbb4; end: 104d3cbe3; -[SCUserPhoneVerificationCodeVerificationService .cxx_destruct] */

void FUN_104d3cbb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3cbe4; end: 104d3cc67; -[SCUserPhoneVerificationPhoneEntryService initWithPhoneMutator:verificationType:] */

undefined1 *
FUN_104d3cbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3f68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d3cc68; end: 104d3cdb3; -[SCUserPhoneVerificationPhoneEntryService submitPhoneNumber:successBlock:failureBlock:] */

void FUN_104d3cc68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0cf3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d3cdb4;
  puStack_68 = &UNK_11084c130;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf18f00(uVar3,param_2,uVar1,uVar2,1,0,0,uVar4,&puStack_80);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d3cdb4; end: 104d3cedf;  */

void FUN_104d3cdb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0a60(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d3cee0; end: 104d3d0af;  */

void FUN_104d3cee0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afb30;
  _objc_alloc(PTR_PTR_1126afb30);
  puVar2 = PTR_PTR_1126afb38;
  func_0x00010c0db140(PTR_PTR_1126afb38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060920(puVar1);
  _objc_release(puVar2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3d0b0; end: 104d3d0fb;  */

void FUN_104d3d0b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb48;
  func_0x00010c13fb20(PTR_PTR_1126afb48,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3d0fc; end: 104d3d107; -[SCUserPhoneVerificationPhoneEntryService .cxx_destruct] */

void FUN_104d3d0fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3d108; end: 104d3d2a7; -[SCUserPhoneVerificationWorkflow initWithRouter:delegate:context:codeVerificationService:userSearchabilityService:contactPermissionInfoProvider:contactSyncer:logger:] */

undefined1 *
FUN_104d3d108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126e3f70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
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



/* Entry: 104d3d2a8; end: 104d3d2ff; -[SCUserPhoneVerificationWorkflow begin] */

void FUN_104d3d2a8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d3d300;
  puStack_20 = &UNK_11084c1c0;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d3d300; end: 104d3d347;  */

void FUN_104d3d300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be737e0(uVar1);
  func_0x00010c239040(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d3d348; end: 104d3d51f; -[SCUserPhoneVerificationWorkflow phoneEntryFinishedWithSuccess:] */

void FUN_104d3d348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2983a0();
  if ((int)uVar1 == 0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104d3d530;
    puStack_98 = &UNK_11084c1c0;
    lStack_90 = param_1;
    func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_b0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0faf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db1c0(uVar2,param_2,uVar1);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126aed98;
    uVar1 = param_3;
    func_0x00010c0faf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0faf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5dc0(puVar6,param_2,uVar3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126af120;
    func_0x00010c0fb340(PTR_PTR_1126af120,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d3d520;
    puStack_70 = &UNK_11084c1f0;
    lStack_68 = param_1;
    uStack_60 = uVar2;
    puStack_58 = puVar7;
    func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_88);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104d3d520; end: 104d3d52f;  */

void FUN_104d3d520(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2369d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCodeVerificationScreenWithDe_11266b498,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104d3d530; end: 104d3d56b;  */

void FUN_104d3d530(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c12da20(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c293180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d3d56c; end: 104d3d5c3; -[SCUserPhoneVerificationWorkflow phoneEntryExited] */

void FUN_104d3d56c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d3d5c4;
  puStack_20 = &UNK_11084c1c0;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d3d5c4; end: 104d3d5ff;  */

void FUN_104d3d5c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c12da20(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2931a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d3d600; end: 104d3d657; -[SCUserPhoneVerificationWorkflow phoneEntryExitedWithUnretryableError:] */

void FUN_104d3d600(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d3d658;
  puStack_20 = &UNK_11084c1c0;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d3d658; end: 104d3d693;  */

void FUN_104d3d658(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c12da20(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2931a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d3d694; end: 104d3d697; -[SCUserPhoneVerificationWorkflow headerTitleForPhoneEntry] */

void FUN_104d3d694(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad138;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad138,
                      &PTR____CFConstantStringClassReference_110db07f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104d3d698; end: 104d3d77b; -[SCUserPhoneVerificationWorkflow accessoryTextForPhoneEntry] */

void FUN_104d3d698(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d3d77c;
  uStack_30 = 0x104d3d78c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d3d794;
  puStack_60 = &UNK_110847658;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104d3d7d0;
  puStack_88 = &UNK_110847658;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0be000(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_78,&puStack_a0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d3d77c; end: 104d3d793;  */

void FUN_104d3d77c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d3d794; end: 104d3d80b;  */

void FUN_104d3d794(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000104d3dd4c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d3d80c; end: 104d3d823; -[SCUserPhoneVerificationWorkflow codeVerificationExited] */

void FUN_104d3d80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11084c240);
  return;
}



/* Entry: 104d3d824; end: 104d3d83b; -[SCUserPhoneVerificationWorkflow codeVerificationExitedWithUnretryableError] */

void FUN_104d3d824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11084c260);
  return;
}



/* Entry: 104d3d83c; end: 104d3d927; -[SCUserPhoneVerificationWorkflow codeVerificationFinished:] */

void FUN_104d3d83c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be6f880(param_1);
  func_0x00010c0b2ba0(uVar2,param_2,lVar3,*(undefined1 *)(param_1 + 0x48),
                      *(undefined4 *)(param_1 + 0x4c));
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d3d928;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104d3d974;
  puStack_68 = &UNK_110842e18;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c0be000(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_58,&puStack_80,0);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x104d3d9c0;
  puStack_90 = &UNK_11084c1c0;
  lStack_88 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_a8);
  return;
}



/* Entry: 104d3d928; end: 104d3d9fb;  */

void FUN_104d3d928(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2898c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__syncContactsIfPossible_11258ffb8);
  return;
}



/* Entry: 104d3d9fc; end: 104d3da07; -[SCUserPhoneVerificationWorkflow codeVerificationResendCodeAttempted] */

void FUN_104d3d9fc(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 104d3da08; end: 104d3da17; -[SCUserPhoneVerificationWorkflow codeVerificationVerifyCodeAttempted] */

void FUN_104d3da08(long param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}



/* Entry: 104d3da18; end: 104d3daeb; -[SCUserPhoneVerificationWorkflow _phoneEntryContext] */

undefined8 FUN_104d3da18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_98 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d3daec;
  puStack_50 = &UNK_110847658;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x104d3db00;
  puStack_78 = &UNK_110847658;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x104d3db14;
  puStack_a0 = &UNK_110847658;
  puStack_70 = puStack_98;
  puStack_48 = puStack_98;
  puStack_38 = puStack_98;
  func_0x00010c0be000(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_68,&puStack_90,&puStack_b8);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 104d3daec; end: 104d3db27;  */

void FUN_104d3daec(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 104d3db28; end: 104d3dbff; -[SCUserPhoneVerificationWorkflow _pageType] */

undefined8 FUN_104d3db28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_98 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d3dc00;
  puStack_50 = &UNK_110847658;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x104d3dc14;
  puStack_78 = &UNK_110847658;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x104d3dc28;
  puStack_a0 = &UNK_110847658;
  puStack_70 = puStack_98;
  puStack_48 = puStack_98;
  puStack_38 = puStack_98;
  func_0x00010c0be000(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_68,&puStack_90,&puStack_b8);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 104d3dc00; end: 104d3dc3b;  */

void FUN_104d3dc00(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 99;
  return;
}



/* Entry: 104d3dc3c; end: 104d3dcbf; -[SCUserPhoneVerificationWorkflow _syncContactsIfPossible] */

void FUN_104d3dc3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdbe0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104d3dcc0; end: 104d3dd33; -[SCUserPhoneVerificationWorkflow .cxx_destruct] */

void FUN_104d3dcc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3dd34; end: 104d3dd63;  */

void FUN_104d3dd34(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad138;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad138,
                      &PTR____CFConstantStringClassReference_110db07f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104d3dd64; end: 104d3e167; -[SCAcceptTermsOfUseEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3dd64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar21 = (long)_DAT_1127119bc;
  lVar20 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar20);
  lVar19 = lVar20;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc40();
  _objc_release(lVar19);
  _objc_release(lVar20);
  puVar1 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127119ec;
    _objc_loadWeakRetained(lVar20);
  }
  lVar19 = lVar20;
  func_0x00010bfa2bc0(lVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dafb58,lVar19);
  _objc_release(lVar19);
  _objc_release(lVar20);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af890;
  _objc_alloc();
  lVar20 = param_1 + _DAT_1127119c0;
  _objc_loadWeakRetained(lVar20);
  lVar19 = lVar20;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063220(puVar1,param_2,lVar19);
  _objc_release(lVar19);
  _objc_release(lVar20);
  puVar2 = PTR_PTR_1126aefc0;
  _objc_alloc_init();
  func_0x00010bf0c980(puVar1);
  puVar3 = PTR_PTR_1126aead0;
  _objc_alloc();
  func_0x00010c02e4c0();
  lVar20 = param_1 + _DAT_1127119c4;
  _objc_loadWeakRetained();
  lVar19 = lVar20;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar19;
  func_0x00010bf1f440();
  _objc_release(lVar19);
  _objc_release(lVar20);
  puVar5 = PTR_PTR_1126afb50;
  _objc_alloc();
  lVar16 = (long)_DAT_1127119c8;
  lVar20 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar6 = lVar20;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_1127119cc;
  _objc_loadWeakRetained();
  lVar7 = lVar19;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127119d0;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127119d4;
  lVar11 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c26b500();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar13 = lVar21;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dde0(puVar5,param_2,lVar6,lVar7,puVar2,lVar10,lVar12,puVar3,lVar13,(char)lVar4);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar20);
  puVar14 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar15 = PTR_PTR_1126afb58;
  _objc_alloc();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar17);
  lVar20 = lVar17;
  func_0x00010c26b500();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar16);
  lVar21 = lVar16;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040940(puVar15,param_2,puVar14,lVar20,lVar21);
  lVar19 = (long)_DAT_1127119d8;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar15;
  _objc_release(uVar18);
  _objc_release(lVar21);
  _objc_release(lVar16);
  _objc_release(lVar20);
  _objc_release(lVar17);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3e168; end: 104d3e227; -[SCAcceptTermsOfUseEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3e168(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127119c4);
  _objc_destroyWeak(param_1 + _DAT_1127119bc);
  _objc_destroyWeak(param_1 + _DAT_1127119d0);
  _objc_destroyWeak(param_1 + _DAT_1127119cc);
  _objc_destroyWeak(param_1 + _DAT_1127119ec);
  _objc_destroyWeak(param_1 + _DAT_1127119e8);
  _objc_destroyWeak(param_1 + _DAT_1127119e4);
  _objc_destroyWeak(param_1 + _DAT_1127119d4);
  _objc_destroyWeak(param_1 + _DAT_1127119c8);
  _objc_destroyWeak(param_1 + _DAT_1127119e0);
  _objc_destroyWeak(param_1 + _DAT_1127119dc);
  _objc_destroyWeak(param_1 + _DAT_1127119c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127119d8,0);
  return;
}



/* Entry: 104d3e228; end: 104d3e28b; -[SCTermsOfUseFeatureLoggerImpl init] */

undefined1 * FUN_104d3e228(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3f78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126afb60;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d3e28c; end: 104d3e2f3; -[SCTermsOfUseFeatureLoggerImpl logWebViewLoadLocalHtmlLatency:version:] */

void FUN_104d3e28c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  FUN_104d405e4(param_1,*(undefined8 *)(param_2 + 8),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3e2f4; end: 104d3e2ff; -[SCTermsOfUseFeatureLoggerImpl .cxx_destruct] */

void FUN_104d3e2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3e300; end: 104d3e46b; -[SCTermsOfUseNavigationPageRouter initWithUserSession:multiSourceCountryProvider:navigationController:resourceDownloader:termsOfUseService:navigationUIContainer:currentPageTracker:deferHTMLParse:] */

undefined1 *
FUN_104d3e300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126e3f80;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
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
    *(undefined1 *)((long)puVar1 + 0x48) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d3e46c; end: 104d3e57b; -[SCTermsOfUseNavigationPageRouter showServerDrivenTermsOfUseWithDelegate:] */

void FUN_104d3e46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126afb68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00af20(puVar1,param_2,param_3,uVar2,*(undefined1 *)(param_1 + 0x48));
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126afb70;
  _objc_alloc(PTR_PTR_1126afb70);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423c0(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar2);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3e57c; end: 104d3e5f3; -[SCTermsOfUseNavigationPageRouter showWebBrowserWithUrl:] */

void FUN_104d3e57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3e5f4; end: 104d3e62b; -[SCTermsOfUseNavigationPageRouter dismissServerDrivenTermsOfUsePage] */

void FUN_104d3e5f4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d3e62c; end: 104d3e693; -[SCTermsOfUseNavigationPageRouter .cxx_destruct] */

void FUN_104d3e62c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d3e694; end: 104d3e7af; -[SCServerDrivenTermsOfUsePageBusinessLogic initWithDelegate:termsOfUseService:parseHTMLInBusinessLogic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d3e694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3f88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112711a18),param_3);
    lVar4 = (long)_DAT_112711a1c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be447a0();
    *(char *)((long)puVar1 + (long)_DAT_112711a20) = (char)puVar3;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be18c40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112711a24);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112711a24) = puVar3;
    _objc_release(uVar2);
    if (param_5 != 0) {
      puVar3 = (undefined1 *)puVar1;
      func_0x00010be70660();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112711a28);
      *(undefined1 **)((long)puVar1 + (long)_DAT_112711a28) = puVar3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d3e7b0; end: 104d3e8db; -[SCServerDrivenTermsOfUsePageBusinessLogic _parsedAttributedStringFromHTML:] */

void FUN_104d3e7b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    lVar1 = param_3;
    func_0x00010bf64920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)PTR__NSDocumentTypeDocumentAttribute_1103457e0;
    uStack_48 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
    uStack_50 = *(undefined8 *)PTR__NSCharacterEncodingDocumentAttribute_1103457c8;
    ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bddf0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008460(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_104d3e8dc;
  puStack_78 = PTR_PTR_1126e3f88;
  lStack_80 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_80,PTR_s_begin_1125a3840);
  return;
}



/* Entry: 104d3e8dc; end: 104d3e90f; -[SCServerDrivenTermsOfUsePageBusinessLogic begin] */

void FUN_104d3e8dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3f88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_begin_1125a3840);
  return;
}



/* Entry: 104d3e910; end: 104d3e9a3; -[SCServerDrivenTermsOfUsePageBusinessLogic handleAction:] */

void FUN_104d3e910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d3e9a4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104d3e9dc;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d3ea14;
  puStack_70 = &UNK_1108480f8;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc5a0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104d3e9a4; end: 104d3ea13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3e9a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711a18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c293e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d3ea14; end: 104d3ea6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3ea14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_112711a18;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c158d80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d3ea6c; end: 104d3eab3; -[SCServerDrivenTermsOfUsePageBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3ea6c(void)

{
  _objc_alloc(PTR_PTR_1126afb80);
  func_0x00010c046020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d3eab4; end: 104d3eb13; -[SCServerDrivenTermsOfUsePageBusinessLogic _formattedHtmlString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3eab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711a1c);
  func_0x00010bf27560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d3eb14; end: 104d3eb3b; -[SCServerDrivenTermsOfUsePageBusinessLogic _isTOSPromptSkippable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d3eb14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112711a1c);
  func_0x00010c275e40(lVar1);
  return lVar1 == 2;
}



/* Entry: 104d3eb3c; end: 104d3eb97; -[SCServerDrivenTermsOfUsePageBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3eb3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711a28,0);
  _objc_storeStrong(param_1 + _DAT_112711a24,0);
  _objc_storeStrong(param_1 + _DAT_112711a1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711a18);
  return;
}



/* Entry: 104d3eb98; end: 104d3ec53; -[SCServerDrivenTermsOfUseViewController initWithScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d3eb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3f90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112711a2c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112711a30;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d3ec54; end: 104d3ec5b; -[SCServerDrivenTermsOfUseViewController pageViewName] */

undefined8 FUN_104d3ec54(void)

{
  return 0x147;
}



/* Entry: 104d3ec5c; end: 104d3ec67; -[SCServerDrivenTermsOfUseViewController supportedInterfaceOrientations] */

undefined8 FUN_104d3ec5c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 104d3ec68; end: 104d3ecb7; -[SCServerDrivenTermsOfUseViewController viewDidLoad] */

void FUN_104d3ec68(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3f90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104d3ecb8; end: 104d3ed17; -[SCServerDrivenTermsOfUseViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3ecb8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3f90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711a30);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104d3ed18; end: 104d3edc7; -[SCServerDrivenTermsOfUseViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3ed18(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711a2c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d3edc8; end: 104d3ee0f;  */

void FUN_104d3edc8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d3ee10; end: 104d3f07b; -[SCServerDrivenTermsOfUseViewController _updateUIWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104d3ee10(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c22fa80(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112711a34),param_2,(uint)puVar1 ^ 1);
  puVar1 = param_3;
  func_0x00010bf0e280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = param_3;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010bfe4aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)PTR__NSDocumentTypeDocumentAttribute_1103457e0;
    uStack_68 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
    uStack_70 = *(undefined8 *)PTR__NSCharacterEncodingDocumentAttribute_1103457c8;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bde08;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_68,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008460(puVar1,param_2,puVar2,puVar3,0,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf0e280();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c0d3c80();
  }
  _objc_release(puVar5);
  uStack_98 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar5;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&uStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c08fa60(puVar1);
  func_0x00010bef6f40(puVar1,param_2,puVar3,0,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112711a38),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_104d3f07c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(puVar1);
  func_0x00010be39660(param_3);
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_opt_new();
  lVar21 = (long)_DAT_112711a38;
  uVar19 = *(undefined8 *)(param_3 + lVar21);
  *(undefined **)(param_3 + lVar21) = puVar1;
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_3 + lVar21),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_3 + lVar21),param_2,param_3);
  func_0x00010c193a00(*(undefined8 *)(param_3 + lVar21),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_3 + lVar21),param_2,0);
  puVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puStack_160 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = *(undefined **)(param_3 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  puStack_138 = puVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  func_0x00010bf493a0(puVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + lVar21);
  puStack_150 = puVar5;
  puStack_128 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  uStack_168 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4034000000000000,uVar6,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + lVar21);
  uStack_120 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar7;
  func_0x00010bf493c0(0xc034000000000000,uVar7,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar21);
  uStack_118 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + _DAT_112711a3c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar8;
  func_0x00010bf493c0(0xc034000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_128,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_160,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar20);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar19);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(puStack_158);
  _objc_release(uStack_168);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_130);
  puVar4 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_104d3f424;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_1d0 = puVar1;
  uStack_1c8 = uVar6;
  puStack_1c0 = puVar3;
  uStack_1b8 = uVar20;
  uStack_1b0 = uVar8;
  uStack_1a8 = uVar19;
  puStack_1a0 = puVar2;
  puStack_198 = puVar5;
  uStack_190 = uVar7;
  uStack_188 = uVar9;
  ppuStack_180 = &puStack_b0;
  _objc_opt_new();
  lVar21 = (long)_DAT_112711a3c;
  uVar19 = *(undefined8 *)(puVar4 + lVar21);
  *(undefined **)(puVar4 + lVar21) = puVar10;
  _objc_release(uVar19);
  func_0x00010c16e060(*(undefined8 *)(puVar4 + lVar21),param_2,1);
  func_0x00010c207380(0x4034000000000000,*(undefined8 *)(puVar4 + lVar21));
  puVar1 = puVar4;
  func_0x00010c29bf00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(puVar4 + lVar21),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(puVar4 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar8;
  func_0x00010bf493c0(0xc034000000000000,uVar8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar4 + lVar21);
  uStack_1f8 = uVar19;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar4 + lVar21);
  uStack_1f0 = uVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010c29bf00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bf493c0(0x4034000000000000,uVar12,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar4 + lVar21);
  uStack_1e8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c29bf00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar15;
  func_0x00010bf493c0(0xc034000000000000,uVar15,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1e0 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1f8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar18);
  _objc_release(puVar18);
  _objc_release(uVar7);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar20);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112711a40;
  uVar19 = *(undefined8 *)(puVar4 + lVar22);
  *(undefined **)(puVar4 + lVar22) = puVar1;
  _objc_release(uVar19);
  uVar20 = *(undefined8 *)(puVar4 + lVar22);
  FUN_104d3fe5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar20,param_2,uVar19,0);
  _objc_release(uVar19);
  func_0x00010c20eaa0(*(undefined8 *)(puVar4 + lVar22),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar4 + lVar22),param_2,
                      &PTR____CFConstantStringClassReference_110db0898);
  func_0x00010c219b60(*(undefined8 *)(puVar4 + lVar22),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(puVar4 + lVar22),param_2,puVar4,
                      PTR_s__continueButtonPressed_112525e08,0x40);
  func_0x00010bef6d60(*(undefined8 *)(puVar4 + lVar21),param_2,*(undefined8 *)(puVar4 + lVar22));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112711a34;
  uVar19 = *(undefined8 *)(puVar4 + lVar22);
  *(undefined **)(puVar4 + lVar22) = puVar1;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(puVar4 + lVar22);
  func_0x00010c1a7f60(uVar19,param_2,1);
  uVar20 = *(undefined8 *)(puVar4 + lVar22);
  func_0x000104d3fe74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar20,param_2,uVar19,0);
  _objc_release(uVar19);
  func_0x00010c20eaa0(*(undefined8 *)(puVar4 + lVar22),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(puVar4 + lVar22),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar4 + lVar22),param_2,
                      &PTR____CFConstantStringClassReference_110db08b8);
  puVar1 = PTR_s__remindMeLaterButtonPressed_112525e10;
  func_0x00010befbd60(*(undefined8 *)(puVar4 + lVar22),param_2,puVar4,
                      PTR_s__remindMeLaterButtonPressed_112525e10,0x40);
  puVar5 = *(undefined **)(puVar4 + lVar21);
  func_0x00010bef6d60(puVar5,param_2,*(undefined8 *)(puVar4 + lVar22));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return puVar5;
  }
  ___stack_chk_fail();
  uVar19 = *(undefined8 *)(puVar5 + _DAT_112711a2c);
  puVar5 = PTR_PTR_1126afb90;
  func_0x00010c158da0(PTR_PTR_1126afb90,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar19,param_2,puVar5);
  _objc_release(puVar5);
  return (undefined *)0x0;
}



/* Entry: 104d3f07c; end: 104d3f423; -[SCServerDrivenTermsOfUseViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d3f07c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar21);
  _objc_release(puVar1);
  lVar21 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(lVar21);
  func_0x00010be39660(param_1);
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_opt_new();
  lVar20 = (long)_DAT_112711a38;
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  func_0x00010c193a00(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  lVar21 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar21);
  puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  lStack_98 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar21;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar21;
  func_0x00010bf493a0(lVar2,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  lStack_b0 = lVar2;
  lStack_88 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  uStack_c8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4034000000000000,uVar3,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf493c0(0xc034000000000000,uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112711a3c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar6;
  func_0x00010bf493c0(0xc034000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar18);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar21);
  _objc_release(lStack_b8);
  _objc_release(uStack_c8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar20 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar20;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_104d3f424;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  lStack_130 = lVar21;
  uStack_128 = uVar3;
  puStack_120 = puVar1;
  uStack_118 = uVar18;
  uStack_110 = uVar6;
  uStack_108 = uVar17;
  lStack_100 = lVar5;
  lStack_f8 = lVar2;
  uStack_f0 = uVar4;
  uStack_e8 = uVar7;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar19 = (long)_DAT_112711a3c;
  uVar17 = *(undefined8 *)(lVar20 + lVar19);
  *(undefined **)(lVar20 + lVar19) = puVar8;
  _objc_release(uVar17);
  func_0x00010c16e060(*(undefined8 *)(lVar20 + lVar19),param_2,1);
  func_0x00010c207380(0x4034000000000000,*(undefined8 *)(lVar20 + lVar19));
  lVar21 = lVar20;
  func_0x00010c29bf00(lVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar21);
  func_0x00010c219b60(*(undefined8 *)(lVar20 + lVar19),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(lVar20 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar21;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf493c0(0xc034000000000000,uVar6,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar20 + lVar19);
  uStack_158 = uVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar20;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar20 + lVar19);
  uStack_150 = uVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar20;
  func_0x00010c29bf00(lVar20);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf493c0(0x4034000000000000,uVar11,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar20 + lVar19);
  uStack_148 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar20;
  func_0x00010c29bf00(lVar20);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf493c0(0xc034000000000000,uVar14,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_158,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar18);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar21);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112711a40;
  uVar17 = *(undefined8 *)(lVar20 + lVar21);
  *(undefined **)(lVar20 + lVar21) = puVar1;
  _objc_release(uVar17);
  uVar18 = *(undefined8 *)(lVar20 + lVar21);
  FUN_104d3fe5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar18,param_2,uVar17,0);
  _objc_release(uVar17);
  func_0x00010c20eaa0(*(undefined8 *)(lVar20 + lVar21),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(lVar20 + lVar21),param_2,
                      &PTR____CFConstantStringClassReference_110db0898);
  func_0x00010c219b60(*(undefined8 *)(lVar20 + lVar21),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(lVar20 + lVar21),param_2,lVar20,
                      PTR_s__continueButtonPressed_112525e08,0x40);
  func_0x00010bef6d60(*(undefined8 *)(lVar20 + lVar19),param_2,*(undefined8 *)(lVar20 + lVar21));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112711a34;
  uVar17 = *(undefined8 *)(lVar20 + lVar2);
  *(undefined **)(lVar20 + lVar2) = puVar1;
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(lVar20 + lVar2);
  func_0x00010c1a7f60(uVar17,param_2,1);
  uVar18 = *(undefined8 *)(lVar20 + lVar2);
  func_0x000104d3fe74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar18,param_2,uVar17,0);
  _objc_release(uVar17);
  func_0x00010c20eaa0(*(undefined8 *)(lVar20 + lVar2),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(lVar20 + lVar2),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(lVar20 + lVar2),param_2,
                      &PTR____CFConstantStringClassReference_110db08b8);
  puVar1 = PTR_s__remindMeLaterButtonPressed_112525e10;
  func_0x00010befbd60(*(undefined8 *)(lVar20 + lVar2),param_2,lVar20,
                      PTR_s__remindMeLaterButtonPressed_112525e10,0x40);
  lVar21 = *(long *)(lVar20 + lVar19);
  func_0x00010bef6d60(lVar21,param_2,*(undefined8 *)(lVar20 + lVar2));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return lVar21;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(lVar21 + _DAT_112711a2c);
  puVar8 = PTR_PTR_1126afb90;
  func_0x00010c158da0(PTR_PTR_1126afb90,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar17,param_2,puVar8);
  _objc_release(puVar8);
  return 0;
}



/* Entry: 104d3f424; end: 104d3f89b; -[SCServerDrivenTermsOfUseViewController _initButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d3f424(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar18 = (long)_DAT_112711a3c;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar16);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar18),param_2,1);
  func_0x00010c207380(0x4034000000000000,*(undefined8 *)(param_1 + lVar18));
  lVar20 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar20;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010bf493c0(0xc034000000000000,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  uStack_88 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493c0(0x4034000000000000,uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493c0(0xc034000000000000,uVar11,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lVar20);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112711a40;
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar16);
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  FUN_104d3fe5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar17,param_2,uVar16,0);
  _objc_release(uVar16);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar20),param_2,
                      &PTR____CFConstantStringClassReference_110db0898);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar20),param_2,param_1,
                      PTR_s__continueButtonPressed_112525e08,0x40);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar18),param_2,*(undefined8 *)(param_1 + lVar20));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112711a34;
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c1a7f60(uVar16,param_2,1);
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  func_0x000104d3fe74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar17,param_2,uVar16,0);
  _objc_release(uVar16);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar19),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar19),param_2,
                      &PTR____CFConstantStringClassReference_110db08b8);
  puVar1 = PTR_s__remindMeLaterButtonPressed_112525e10;
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar19),param_2,param_1,
                      PTR_s__remindMeLaterButtonPressed_112525e10,0x40);
  lVar20 = *(long *)(param_1 + lVar18);
  func_0x00010bef6d60(lVar20,param_2,*(undefined8 *)(param_1 + lVar19));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar20;
  }
  ___stack_chk_fail();
  uVar16 = *(undefined8 *)(lVar20 + _DAT_112711a2c);
  puVar15 = PTR_PTR_1126afb90;
  func_0x00010c158da0(PTR_PTR_1126afb90,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar16,param_2,puVar15);
  _objc_release(puVar15);
  return 0;
}



/* Entry: 104d3f89c; end: 104d3f8f3; -[SCServerDrivenTermsOfUseViewController textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d3f89c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711a2c);
  puVar1 = PTR_PTR_1126afb90;
  func_0x00010c158da0(PTR_PTR_1126afb90,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 104d3f8f4; end: 104d3f93f; -[SCServerDrivenTermsOfUseViewController _continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3f8f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711a2c);
  puVar1 = PTR_PTR_1126afb90;
  func_0x00010beec980(PTR_PTR_1126afb90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3f940; end: 104d3f98b; -[SCServerDrivenTermsOfUseViewController _remindMeLaterButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3f940(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711a2c);
  puVar1 = PTR_PTR_1126afb90;
  func_0x00010c1293c0(PTR_PTR_1126afb90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d3f98c; end: 104d3fa1b; -[SCServerDrivenTermsOfUseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3f98c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711a30,0);
  _objc_storeStrong(param_1 + _DAT_112711a3c,0);
  _objc_storeStrong(param_1 + _DAT_112711a38,0);
  _objc_storeStrong(param_1 + _DAT_112711a44,0);
  _objc_storeStrong(param_1 + _DAT_112711a2c,0);
  _objc_storeStrong(param_1 + _DAT_112711a34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711a40,0);
  return;
}



/* Entry: 104d3fa1c; end: 104d3fadf; -[SCTermsOfUseWorkflow initWithRouter:termsOfUseService:delegate:] */

undefined1 *
FUN_104d3fa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e3f98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d3fae0; end: 104d3fbf7; -[SCTermsOfUseWorkflow beginWorkflow] */

void FUN_104d3fae0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2322c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd340();
    _objc_release(uVar4);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104d3fbf8;
    puStack_40 = &UNK_11084c2b0;
    lStack_38 = param_1;
    func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
    return;
  }
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c26b540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d3fbf8; end: 104d3fc03;  */

void FUN_104d3fbf8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showServerDrivenTermsOfUseWithDe_11266c180,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d3fc04; end: 104d3fcc3; -[SCTermsOfUseWorkflow userTappedAccept] */

void FUN_104d3fc04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beecb40();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104d3fc88;
  puStack_30 = &UNK_11084c2b0;
  lStack_28 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  return;
}



/* Entry: 104d3fcc4; end: 104d3fd83; -[SCTermsOfUseWorkflow userTappedRemindMeLater] */

void FUN_104d3fcc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beecb00();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104d3fd48;
  puStack_30 = &UNK_11084c2b0;
  lStack_28 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  return;
}



/* Entry: 104d3fd84; end: 104d3fe0b; -[SCTermsOfUseWorkflow selectLinkInTOSWebView:] */

void FUN_104d3fd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d3fe0c;
  puStack_30 = &UNK_11084c2b0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d3fe0c; end: 104d3fe17;  */

void FUN_104d3fe0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl__11266c560,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d3fe18; end: 104d3fe5b; -[SCTermsOfUseWorkflow .cxx_destruct] */

void FUN_104d3fe18(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3fe5c; end: 104d3fe8b;  */

void FUN_104d3fe5c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db08f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db08f8,
                      &PTR____CFConstantStringClassReference_110db08d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104d3fe8c; end: 104d3fed3; +[SCServerDrivenTermsOfUsePageAction accept] */

void FUN_104d3fe8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afb90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d3fed4; end: 104d3ff1f; +[SCServerDrivenTermsOfUsePageAction remindMeLater] */

void FUN_104d3fed4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afb90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d3ff20; end: 104d3ff87; +[SCServerDrivenTermsOfUsePageAction selectLinkWithUrl:] */

void FUN_104d3ff20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afb90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


