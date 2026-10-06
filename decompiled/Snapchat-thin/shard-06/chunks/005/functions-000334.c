/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10497bbe4; end: 10497bcaf; -[FBSDKPaymentProductRequestor durationOfSubscriptionPeriod:] */

void FUN_10497bbe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___SKProductSubscriptionPeriod_1126adf50;
    func_0x00010bf39c40(PTR__OBJC_CLASS___SKProductSubscriptionPeriod_1126adf50);
    lVar1 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)lVar1 != 0) {
      lVar1 = param_3;
      _objc_retain();
      func_0x00010c2807a0();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0df580();
      func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da5698);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto LAB_10497bc90;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_10497bc90:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10497bcb0; end: 10497bdcb; -[FBSDKPaymentProductRequestor productsRequest:didReceiveResponse:] */

void FUN_10497bcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain();
  lVar1 = param_4;
  func_0x00010c1163e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c069c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar6 = lVar1;
  func_0x00010bf529e0();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 + lVar6 != 1) {
    uVar4 = param_1;
    func_0x00010c0b37c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf56f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c0a58e0(uVar5,param_2,&PTR____CFConstantStringClassReference_110da56b8);
    _objc_release(uVar5);
  }
  lVar6 = lVar1;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0b1e20(param_1,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10497bdcc; end: 10497bdcf; -[FBSDKPaymentProductRequestor requestDidFinish:] */

void FUN_10497bdcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanUp_1125ac188);
  return;
}



/* Entry: 10497bdd0; end: 10497bdf7; -[FBSDKPaymentProductRequestor request:didFailWithError:] */

void FUN_10497bdd0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0b1e20(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf39f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanUp_1125ac188);
  return;
}



/* Entry: 10497bdf8; end: 10497be7b; -[FBSDKPaymentProductRequestor cleanUp] */

void FUN_10497bdf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010c0f7920();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  func_0x00010bf39c40(param_1);
  func_0x00010c0f7920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(param_1);
  _objc_sync_exit(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10497be7c; end: 10497c0cf; -[FBSDKPaymentProductRequestor logImplicitSubscribeTransaction:ofProduct:] */

void FUN_10497be7c(double param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_4;
  func_0x00010c0eda80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c279820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c279860();
  ppuVar7 = (undefined **)0x0;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110da0f38;
    }
    else if (lVar1 == 1) {
      uVar3 = param_2;
      func_0x00010c07f820(param_2,param_3,param_4,param_5);
      if ((int)uVar3 == 0) {
        if (lVar2 == 0) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110ea7d98;
          _objc_retain(&PTR____CFConstantStringClassReference_110ea7d98);
          lVar1 = param_4;
          func_0x00010c279820(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06e80(param_2,param_3,lVar1);
          _objc_release(lVar1);
        }
        else {
          uVar3 = param_2;
          func_0x00010c0edac0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010bf4b900();
          _objc_release(uVar3);
          if ((uVar6 & 1) != 0) goto LAB_10497c00c;
          ppuVar7 = &PTR____CFConstantStringClassReference_110ea7d98;
          _objc_retain(&PTR____CFConstantStringClassReference_110ea7d98);
          func_0x00010bf06e80(param_2,param_3,lVar2);
        }
      }
      else {
        ppuVar7 = &PTR____CFConstantStringClassReference_110da0d38;
        _objc_retain(&PTR____CFConstantStringClassReference_110da0d38);
        func_0x00010bf3bb80(param_2,param_3,lVar2);
      }
    }
  }
  else if (lVar1 == 2) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110da0f58;
  }
  else if (lVar1 == 3) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110da0f78;
  }
  else if (lVar1 == 4) goto LAB_10497c00c;
  if (param_5 == 0) {
    param_1 = 0.0;
  }
  else {
    lVar1 = param_4;
    func_0x00010c0f67c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c11cf60();
    lVar5 = param_5;
    func_0x00010c112a80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * (double)lVar4;
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  uVar3 = param_2;
  func_0x00010bfc5340(param_2,param_3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a80e0(param_1,param_2,param_3,ppuVar7,uVar3);
  _objc_release(uVar3);
  _objc_release(ppuVar7);
LAB_10497c00c:
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10497c0d0; end: 10497c233; -[FBSDKPaymentProductRequestor logImplicitPurchaseTransaction:ofProduct:] */

void FUN_10497c0d0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_4;
  func_0x00010c279860();
  puVar6 = (undefined *)0x0;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      ppuVar5 = &PTR_PTR_1107b91c0;
    }
    else {
      if (lVar1 != 1) goto LAB_10497c17c;
      ppuVar5 = &PTR_PTR_1107b91c8;
    }
LAB_10497c170:
    puVar6 = *ppuVar5;
    _objc_retain(puVar6);
  }
  else {
    if (lVar1 == 2) {
      ppuVar5 = &PTR_PTR_1107b91d8;
      goto LAB_10497c170;
    }
    if (lVar1 == 3) {
      ppuVar5 = &PTR_PTR_1107b91e0;
      goto LAB_10497c170;
    }
    if (lVar1 == 4) goto LAB_10497c210;
  }
LAB_10497c17c:
  if (param_5 == 0) {
    param_1 = 0.0;
  }
  else {
    lVar1 = param_4;
    func_0x00010c0f67c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11cf60();
    lVar3 = param_5;
    func_0x00010c112a80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * (double)lVar2;
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  uVar4 = param_2;
  func_0x00010bfc5340(param_2,param_3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a80e0(param_1,param_2,param_3,puVar6,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar6);
LAB_10497c210:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10497c234; end: 10497c3ab; -[FBSDKPaymentProductRequestor logImplicitTransactionEvent:valueToSum:parameters:] */

void FUN_10497c234(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf4b900(uVar2,param_3,param_4);
  if ((int)uVar2 != 0) {
    lVar3 = param_2;
    func_0x00010bfa6440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00010bf15da0(lVar3,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(PTR_PTR_1126add78,param_3,puVar1,lVar4,
                          &PTR____CFConstantStringClassReference_110da1b18);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  func_0x00010bf71e80(PTR_PTR_1126add78,param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110db2d38,
                      &PTR____CFConstantStringClassReference_110da1178);
  lVar3 = param_2;
  func_0x00010bf99fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5ac0(param_1);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb2fe0();
  _objc_release(lVar3);
  if (lVar4 != 1) {
    func_0x00010bf99fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3020();
    _objc_release(param_2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10497c3ac; end: 10497c413; -[FBSDKPaymentProductRequestor fetchDeviceReceipt] */

void FUN_10497c3ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf06380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf063a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10497c414; end: 10497c41b; -[FBSDKPaymentProductRequestor transaction] */

undefined8 FUN_10497c414(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10497c41c; end: 10497c427; -[FBSDKPaymentProductRequestor setTransaction:] */

void FUN_10497c41c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10497c428; end: 10497c42f; -[FBSDKPaymentProductRequestor appStoreReceiptProvider] */

undefined8 FUN_10497c428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10497c430; end: 10497c437; -[FBSDKPaymentProductRequestor productsRequest] */

undefined8 FUN_10497c430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10497c438; end: 10497c43f; -[FBSDKPaymentProductRequestor productRequestFactory] */

undefined8 FUN_10497c438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10497c440; end: 10497c447; -[FBSDKPaymentProductRequestor settings] */

undefined8 FUN_10497c440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10497c448; end: 10497c44f; -[FBSDKPaymentProductRequestor eventLogger] */

undefined8 FUN_10497c448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10497c450; end: 10497c457; -[FBSDKPaymentProductRequestor gateKeeperManager] */

undefined8 FUN_10497c450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10497c458; end: 10497c45f; -[FBSDKPaymentProductRequestor store] */

undefined8 FUN_10497c458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10497c460; end: 10497c467; -[FBSDKPaymentProductRequestor loggerFactory] */

undefined8 FUN_10497c460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10497c468; end: 10497c46f; -[FBSDKPaymentProductRequestor originalTransactionSet] */

undefined8 FUN_10497c468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10497c470; end: 10497c47b; -[FBSDKPaymentProductRequestor setOriginalTransactionSet:] */

void FUN_10497c470(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10497c47c; end: 10497c483; -[FBSDKPaymentProductRequestor eventsWithReceipt] */

undefined8 FUN_10497c47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10497c484; end: 10497c48f; -[FBSDKPaymentProductRequestor setEventsWithReceipt:] */

void FUN_10497c484(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10497c490; end: 10497c497; -[FBSDKPaymentProductRequestor formatter] */

undefined8 FUN_10497c490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10497c498; end: 10497c53f; -[FBSDKPaymentProductRequestor .cxx_destruct] */

void FUN_10497c498(long param_1)

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



/* Entry: 10497c540; end: 10497c58b; -[FBSDKProductRequestFactory createWithProductIdentifiers:] */

void FUN_10497c540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SKProductsRequest_1126c0100;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03a920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10497c58c; end: 10497c657;  */

void FUN_10497c58c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar2;
  
  _malloc();
  puVar2 = PTR_PTR_1126addf8;
  func_0x00010c09d6e0();
  iVar1 = (int)puVar2;
  FUN_104957d38();
  if (iVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar2;
      func_0x00010bf15da0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bf25f00();
      puVar4 = puVar2;
      func_0x00010c08fa60(puVar2);
      _bzero(puVar3,puVar4);
    }
    _objc_release(puVar2);
  }
  else {
    _free(param_1);
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10497c658; end: 10497c67b; -[FBSDKRestrictiveDataFilterManager initWithServerConfigurationProvider:] */

undefined8 FUN_10497c658(undefined8 param_1)

{
  func_0x00010c1fd2a0();
  return param_1;
}



/* Entry: 10497c67c; end: 10497c757; -[FBSDKRestrictiveDataFilterManager enable] */

void FUN_10497c67c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010c07c860();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c15f080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf274a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c13ca00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar3 != 0) {
      func_0x00010c285cc0(param_1,param_2,uVar3);
      func_0x00010c1b3f40(param_1,param_2,1);
    }
    _objc_release(uVar3);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10497c758; end: 10497c9ff; -[FBSDKRestrictiveDataFilterManager processParameters:eventName:] */

void FUN_10497c758(ulong param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c07c860();
  if ((uVar2 & 1) == 0) {
    puVar7 = param_3;
    _objc_retain(param_3);
  }
  else if (param_3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010c0865c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        uVar2 = param_1;
        func_0x00010bfc7620();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 != 0) {
          func_0x00010bf71e80(PTR_PTR_1126add78);
          func_0x00010c12d3e0(puVar3);
        }
        _objc_release(uVar2);
        puVar8 = puVar8 + 1;
      } while (puVar7 != puVar8);
      puVar7 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar7 = puVar4;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    if (puVar5 != (undefined *)0x0) {
      puVar7 = PTR_PTR_1126add58;
      func_0x00010bdc19c0(PTR_PTR_1126add58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(PTR_PTR_1126add78);
      _objc_release(puVar7);
    }
    puVar7 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  while( true ) {
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) break;
    ___stack_chk_fail();
    while (param_2 != 1) {
      __Unwind_Resume();
    }
    _objc_begin_catch();
    puVar7 = param_3;
    _objc_retain(param_3);
    _objc_end_catch();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10497ca00; end: 10497cbe3; -[FBSDKRestrictiveDataFilterManager processEvents:] */

void FUN_10497ca00(ulong param_1,int param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  iVar3 = (int)param_1;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c07c860();
  if ((param_1 & 1) != 0) {
    lVar5 = param_3;
    _objc_retain();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar11 = *(undefined8 *)(lVar10 * 8);
        uVar7 = uVar11;
        func_0x00010c0e00e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        iVar4 = iVar3;
        func_0x00010c07c840();
        _objc_release(uVar8);
        _objc_release(uVar7);
        puVar2 = PTR_PTR_1126add78;
        if (iVar4 != 0) {
          func_0x00010c0e00e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(puVar2);
          _objc_release(uVar11);
        }
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
  }
  while (_objc_release(param_3), *(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    while (param_2 != 1) {
      __Unwind_Resume();
    }
    _objc_begin_catch();
    _objc_end_catch();
  }
  return;
}



/* Entry: 10497cbe4; end: 10497cc7b; -[FBSDKRestrictiveDataFilterManager isRestrictedEvent:] */

undefined8 FUN_10497cbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010c13c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10497cc7c; end: 10497ce3b; -[FBSDKRestrictiveDataFilterManager getMatchedDataTypeWithEventName:paramKey:] */

undefined * FUN_10497cc7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x22;
  long lVar9;
  undefined *puVar10;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar11;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar12;
  undefined8 uStack_278;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c0f3900();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x22 = lVar9;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x25 = *(undefined **)(lStack_128 + unaff_x28 * 8);
        puVar1 = unaff_x25;
        func_0x00010bf9a060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        unaff_x24 = PTR_PTR_1126add78;
        if ((int)puVar2 != 0) {
          func_0x00010c13c9e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = unaff_x24;
          func_0x00010bf3f0e0(unaff_x24,param_2,unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          puVar1 = unaff_x24;
          puVar2 = unaff_x25;
          if (puVar10 != (undefined *)0x0) goto LAB_10497cde4;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x22 != unaff_x28);
      unaff_x22 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x24 = puVar1;
      unaff_x25 = puVar2;
    } while (unaff_x22 != 0);
  }
  puVar10 = (undefined *)0x0;
LAB_10497cde4:
  _objc_release(param_1);
  _objc_release(param_4);
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10497ce3c;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126add78;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = puVar10;
  lStack_160 = unaff_x22;
  lStack_158 = param_1;
  uStack_150 = param_4;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf71fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    _objc_retain();
    _objc_sync_enter();
    uVar12 = uVar3;
    func_0x00010c0f3900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(uVar12);
    uVar12 = uVar3;
    func_0x00010c13c980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(uVar12);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    puVar4 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar9 = *plStack_250;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar9) {
            _objc_enumerationMutation(puVar4);
          }
          uVar12 = *(undefined8 *)(lStack_258 + (long)puVar11 * 8);
          puVar6 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            puVar7 = puVar6;
            func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da5778);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar7 != (undefined *)0x0) {
              puVar7 = PTR_PTR_1126adf58;
              _objc_alloc(PTR_PTR_1126adf58);
              puVar8 = puVar6;
              func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da5778);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c010d00(puVar7,param_2,uVar12,puVar8);
              _objc_release(puVar8);
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar2,puVar7);
              _objc_release(puVar7);
            }
            puVar7 = puVar1;
            func_0x00010c0e00e0(puVar1,param_2,uVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar7);
            if (puVar8 != (undefined *)0x0) {
              func_0x00010befa120(puVar10,param_2,uVar12);
            }
          }
          _objc_release(puVar6);
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        puVar5 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_260,auStack_220,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    func_0x00010c1d8f80(uVar3,param_2,puVar2);
    func_0x00010c1ed300(uVar3,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
    uStack_278 = uVar3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uStack_278);
  __Unwind_Resume();
  return (undefined *)(ulong)(byte)puVar1[8];
}



/* Entry: 10497ce3c; end: 10497d153; -[FBSDKRestrictiveDataFilterManager updateFilters:] */

undefined * FUN_10497ce3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uStack_148;
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
  puVar1 = PTR_PTR_1126add78;
  func_0x00010bf71fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    _objc_retain();
    _objc_sync_enter();
    uVar11 = param_1;
    func_0x00010c0f3900(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(uVar11);
    uVar11 = param_1;
    func_0x00010c13c980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar4 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar4);
          }
          uVar11 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
          puVar6 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,uVar11);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            puVar7 = puVar6;
            func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da5778);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar7 != (undefined *)0x0) {
              puVar7 = PTR_PTR_1126adf58;
              _objc_alloc(PTR_PTR_1126adf58);
              puVar8 = puVar6;
              func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da5778);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c010d00(puVar7,param_2,uVar11,puVar8);
              _objc_release(puVar8);
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar2,puVar7);
              _objc_release(puVar7);
            }
            puVar7 = puVar1;
            func_0x00010c0e00e0(puVar1,param_2,uVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar7);
            if (puVar8 != (undefined *)0x0) {
              func_0x00010befa120(puVar3,param_2,uVar11);
            }
          }
          _objc_release(puVar6);
          puVar10 = puVar10 + 1;
        } while (puVar5 != puVar10);
        puVar5 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    func_0x00010c1d8f80(param_1,param_2,puVar2);
    func_0x00010c1ed300(param_1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    uStack_148 = param_1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uStack_148);
  __Unwind_Resume();
  return (undefined *)(ulong)(byte)puVar1[8];
}



/* Entry: 10497d154; end: 10497d15b; -[FBSDKRestrictiveDataFilterManager isRestrictiveEventFilterEnabled] */

undefined1 FUN_10497d154(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10497d15c; end: 10497d163; -[FBSDKRestrictiveDataFilterManager setIsRestrictiveEventFilterEnabled:] */

void FUN_10497d15c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10497d164; end: 10497d16b; -[FBSDKRestrictiveDataFilterManager params] */

undefined8 FUN_10497d164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10497d16c; end: 10497d177; -[FBSDKRestrictiveDataFilterManager setParams:] */

void FUN_10497d16c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10497d178; end: 10497d17f; -[FBSDKRestrictiveDataFilterManager restrictedEvents] */

undefined8 FUN_10497d178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10497d180; end: 10497d18b; -[FBSDKRestrictiveDataFilterManager setRestrictedEvents:] */

void FUN_10497d180(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10497d18c; end: 10497d193; -[FBSDKRestrictiveDataFilterManager serverConfigurationProvider] */

undefined8 FUN_10497d18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10497d194; end: 10497d19f; -[FBSDKRestrictiveDataFilterManager setServerConfigurationProvider:] */

void FUN_10497d194(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10497d1a0; end: 10497d1db; -[FBSDKRestrictiveDataFilterManager .cxx_destruct] */

void FUN_10497d1a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10497d1dc; end: 10497d373; -[FBSDKSKAdNetworkCoarseCVConfig initWithJSON:] */

undefined1 * FUN_10497d1dc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e3418;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_10497d31c:
    puVar7 = (undefined1 *)puVar1;
    _objc_retain(puVar1);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126add78;
    if (puVar2 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_10497d350;
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126adf60;
    puVar4 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010bf71e60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f45a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (((puVar3 != (undefined *)0x0) && (puVar5 != (undefined *)0x0)) &&
       (puVar4 = puVar5, func_0x00010bf529e0(), puVar4 != (undefined *)0x0)) {
      puVar4 = puVar3;
      func_0x00010c067fc0();
      uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 8) = puVar4;
      *(undefined **)((long)puVar1 + 0x10) = puVar5;
      _objc_release(uVar6);
      _objc_release(puVar3);
      param_3 = puVar2;
      goto LAB_10497d31c;
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar7 = (undefined1 *)0x0;
  }
  _objc_release(puVar2);
LAB_10497d350:
  _objc_release(puVar1);
  return puVar7;
}



/* Entry: 10497d374; end: 10497d58b; +[FBSDKSKAdNetworkCoarseCVConfig parseRules:] */

undefined * FUN_10497d374(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_3;
  _objc_retain();
  if (param_3 == (undefined **)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    ppuVar1 = param_3;
    _objc_retain();
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar6 = *plStack_140;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_140 != lVar6) {
            _objc_enumerationMutation(ppuVar1);
          }
          ppuVar5 = *(undefined ***)(lStack_148 + (long)ppuVar8 * 8);
          puVar4 = PTR_PTR_1126adf68;
          _objc_alloc();
          func_0x00010c020680();
          if (puVar4 == (undefined *)0x0) {
            puVar4 = (undefined *)0x0;
            goto LAB_10497d52c;
          }
          func_0x00010bf09f20(PTR_PTR_1126add78);
          _objc_release(puVar4);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar2 = ppuVar1;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    ppuStack_108 = &PTR____CFConstantStringClassReference_110dabe78;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110ddeb38;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110dc02d8;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110ddeb18;
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_10497d58c;
    puStack_160 = &UNK_1107b9c90;
    ppuStack_158 = ppuVar1;
    _objc_retain();
    ppuVar5 = &puStack_178;
    func_0x00010c246ba0(puVar7);
    puVar4 = puVar7;
    func_0x00010bf51e00();
    _objc_release(ppuStack_158);
LAB_10497d52c:
    _objc_release(ppuVar1);
    _objc_release(puVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(ppuVar5);
  puVar4 = param_3[4];
  uVar3 = param_2;
  func_0x00010bf3ec00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  puVar7 = param_3[4];
  ppuVar1 = ppuVar5;
  func_0x00010bf3ec00(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(ppuVar1);
  _objc_release(uVar3);
  if (puVar7 < puVar4) {
    puVar4 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar4 = param_3[4];
    uVar3 = param_2;
    func_0x00010bf3ec00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(puVar4);
    puVar7 = param_3[4];
    ppuVar1 = ppuVar5;
    func_0x00010bf3ec00(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(puVar7);
    puVar4 = (undefined *)(ulong)(puVar4 < puVar7);
    _objc_release(ppuVar1);
    _objc_release(uVar3);
  }
  _objc_release(ppuVar5);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10497d58c; end: 10497d6c3;  */

ulong FUN_10497d58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf3ec00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x00010bf3ec00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar4 < uVar3) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf3ec00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(uVar3);
    uVar4 = *(ulong *)(param_1 + 0x20);
    uVar2 = param_3;
    func_0x00010bf3ec00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(uVar4);
    uVar3 = (ulong)(uVar3 < uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10497d6c4; end: 10497d6cb; -[FBSDKSKAdNetworkCoarseCVConfig postbackSequenceIndex] */

undefined8 FUN_10497d6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10497d6cc; end: 10497d6d3; -[FBSDKSKAdNetworkCoarseCVConfig setPostbackSequenceIndex:] */

void FUN_10497d6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10497d6d4; end: 10497d6db; -[FBSDKSKAdNetworkCoarseCVConfig cvRules] */

undefined8 FUN_10497d6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10497d6dc; end: 10497d6e7; -[FBSDKSKAdNetworkCoarseCVConfig .cxx_destruct] */

void FUN_10497d6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10497d6e8; end: 10497d89b; -[FBSDKSKAdNetworkCoarseCVRule initWithJSON:] */

undefined1 * FUN_10497d6e8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e3420;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_10497d844:
    puVar6 = (undefined1 *)puVar1;
    _objc_retain(puVar1);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126add78;
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined1 *)0x0;
      goto LAB_10497d878;
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126adf70;
    puVar4 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010bf71e60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if ((((puVar3 != (undefined *)0x0) &&
         (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) &&
        (puVar5 != (undefined *)0x0)) &&
       (puVar4 = puVar5, func_0x00010bf529e0(), puVar4 != (undefined *)0x0)) {
      uVar7 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
      _objc_retain(puVar3);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar5;
      _objc_release(uVar7);
      _objc_release(puVar3);
      param_3 = puVar2;
      goto LAB_10497d844;
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar6 = (undefined1 *)0x0;
  }
  _objc_release(puVar2);
LAB_10497d878:
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 10497d89c; end: 10497dc1f; -[FBSDKSKAdNetworkCoarseCVRule isMatchedWithRecordedCoarseEvents:recordedCoarseValues:] */

ulong FUN_10497d89c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = param_4;
  _objc_retain();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf52a60();
  if (lVar6 == 0) {
    uVar14 = 1;
  }
  else {
    lVar12 = *plStack_1b0;
    do {
      param_4 = 0;
      do {
        if (*plStack_1b0 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        lVar16 = *(long *)(lStack_1b8 + param_4 * 8);
        lVar15 = lVar16;
        func_0x00010bf9a060(lVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = param_3;
        func_0x00010bf4b900(param_3,param_2,lVar15);
        _objc_release(lVar15);
        if ((int)lVar13 == 0) {
          uVar14 = 0;
          param_4 = 0;
          goto LAB_10497dbc0;
        }
        lVar15 = lVar16;
        func_0x00010c297360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar8 = PTR_PTR_1126add78;
        if (lVar15 != 0) {
          lVar6 = lVar16;
          func_0x00010bf9a060(lVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          func_0x00010bf71e60(puVar8,param_2,lVar5,lVar6,puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          if (puVar8 == (undefined *)0x0) {
            param_4 = 0;
            goto LAB_10497dbb4;
          }
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
          uVar21 = 0;
          uVar22 = 0;
          uVar23 = 0;
          uVar24 = 0;
          uVar25 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          lVar6 = lVar16;
          func_0x00010c297360();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar6;
          func_0x00010bf52a60();
          if (lVar12 != 0) {
            lVar15 = *plStack_1f0;
            goto LAB_10497da84;
          }
          param_4 = 0;
          goto LAB_10497dbac;
        }
        param_4 = param_4 + 1;
      } while (lVar6 != param_4);
      lVar6 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_1c0,auStack_100,0x10);
      uVar14 = 1;
    } while (lVar6 != 0);
  }
  goto LAB_10497dbc0;
LAB_10497da84:
  do {
    lVar13 = 0;
    do {
      if (*plStack_1f0 != lVar15) {
        _objc_enumerationMutation(lVar6);
      }
      puVar7 = PTR_PTR_1126add78;
      uVar17 = *(undefined8 *)(lStack_1f8 + lVar13 * 8);
      lVar9 = lVar16;
      func_0x00010c297360(lVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x00010bf71e60(puVar7,param_2,lVar9,uVar17,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126add78;
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x00010bf71e60(puVar10,param_2,puVar8,uVar17,puVar11);
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 != (undefined *)0x0 && puVar7 != (undefined *)0x0) {
        func_0x00010bf885a0(puVar10);
        dVar2 = (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13(
                                                  uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)))))
                                                ));
        func_0x00010bf885a0(puVar7);
        bVar3 = false;
        bVar4 = false;
        bVar1 = NAN((double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13
                                                  (uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))))
                                                  ))));
        if (!NAN(dVar2) && !bVar1) {
          bVar3 = dVar2 < (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18)))))));
          bVar4 = dVar2 == (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18)))))));
        }
        if (!bVar4 && bVar3 == (NAN(dVar2) || bVar1)) {
          _objc_release(puVar10);
          _objc_release(puVar7);
          param_4 = 1;
          goto LAB_10497dbac;
        }
      }
      _objc_release(puVar10);
      _objc_release(puVar7);
      lVar13 = lVar13 + 1;
    } while (lVar12 != lVar13);
    lVar12 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_200,auStack_180,0x10);
  } while (lVar12 != 0);
  param_4 = 0;
LAB_10497dbac:
  _objc_release(lVar6);
LAB_10497dbb4:
  _objc_release(puVar8);
  uVar14 = 0;
LAB_10497dbc0:
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (ulong)(uVar14 | (uint)param_4 & 1);
  }
  ___stack_chk_fail();
  return *(ulong *)(param_3 + 8);
}



/* Entry: 10497dc20; end: 10497dc27; -[FBSDKSKAdNetworkCoarseCVRule coarseCvValue] */

undefined8 FUN_10497dc20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10497dc28; end: 10497dc33; -[FBSDKSKAdNetworkCoarseCVRule setCoarseCvValue:] */

void FUN_10497dc28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10497dc34; end: 10497dc3b; -[FBSDKSKAdNetworkCoarseCVRule events] */

undefined8 FUN_10497dc34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10497dc3c; end: 10497dc6b; -[FBSDKSKAdNetworkCoarseCVRule .cxx_destruct] */

void FUN_10497dc3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10497dc6c; end: 10497e0b7; -[FBSDKSKAdNetworkConversionConfiguration initWithJSON:] */

undefined1 * FUN_10497dc6c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e3428;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_10497e038:
    puVar9 = (undefined1 *)puVar1;
    _objc_retain(puVar1);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126add78;
    if (puVar2 == (undefined *)0x0) {
      puVar9 = (undefined1 *)0x0;
      goto LAB_10497e06c;
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010bf71e60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126add78;
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126add78;
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fe0();
      *(undefined **)((long)puVar1 + 0x10) = puVar4;
      _objc_release(puVar6);
      puVar4 = PTR_PTR_1126add78;
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fe0();
      *(double *)((long)puVar1 + 0x18) = (double)(long)puVar4;
      _objc_release(puVar6);
      puVar4 = PTR_PTR_1126add78;
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fe0();
      *(undefined **)((long)puVar1 + 0x20) = puVar4;
      _objc_release(puVar6);
      puVar4 = PTR_PTR_1126add78;
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined **)((long)puVar1 + 0x28) = puVar7;
      _objc_release(uVar8);
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar4 = PTR_PTR_1126adf78;
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f45a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)puVar1 + 0x30);
      *(undefined **)((long)puVar1 + 0x30) = puVar4;
      _objc_release(uVar8);
      _objc_release(puVar6);
      puVar4 = PTR_PTR_1126adf78;
      if ((*(long *)((long)puVar1 + 0x30) != 0) && (*(long *)((long)puVar1 + 0x28) != 0)) {
        puVar6 = puVar5;
        func_0x00010c0e00e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f4220();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + 0x58);
        *(undefined **)((long)puVar1 + 0x58) = puVar4;
        _objc_release(uVar8);
        _objc_release(puVar6);
        puVar4 = PTR_PTR_1126adf78;
        puVar6 = puVar5;
        func_0x00010c0e00e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f3f20();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + 0x60);
        *(undefined **)((long)puVar1 + 0x60) = puVar4;
        _objc_release(uVar8);
        _objc_release(puVar6);
        puVar4 = PTR_PTR_1126add78;
        puVar6 = puVar5;
        func_0x00010c0e00e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3e0();
        *(char *)((long)puVar1 + 8) = (char)puVar4;
        _objc_release(puVar6);
        puVar4 = PTR_PTR_1126adf78;
        func_0x00010bfc53a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + 0x38);
        *(undefined **)((long)puVar1 + 0x38) = puVar4;
        _objc_release(uVar8);
        puVar4 = PTR_PTR_1126adf78;
        func_0x00010bfc4420();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + 0x40);
        *(undefined **)((long)puVar1 + 0x40) = puVar4;
        _objc_release(uVar8);
        puVar4 = PTR_PTR_1126adf78;
        func_0x00010bfc5380();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + 0x48);
        *(undefined **)((long)puVar1 + 0x48) = puVar4;
        _objc_release(uVar8);
        puVar4 = PTR_PTR_1126adf78;
        func_0x00010bfc4400();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + 0x50);
        *(undefined **)((long)puVar1 + 0x50) = puVar4;
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar3);
        param_3 = puVar2;
        goto LAB_10497e038;
      }
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar9 = (undefined1 *)0x0;
  }
  _objc_release(puVar2);
LAB_10497e06c:
  _objc_release(puVar1);
  return puVar9;
}



/* Entry: 10497e0b8; end: 10497e2c7; +[FBSDKSKAdNetworkConversionConfiguration getEventSetFromRules:] */

undefined * FUN_10497e0b8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  long unaff_x22;
  long lVar24;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined *puVar25;
  long unaff_x28;
  undefined **ppuStack_b58;
  undefined *puStack_a60;
  long lStack_a58;
  long *plStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  long lStack_820;
  long lStack_810;
  long lStack_808;
  long lStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  undefined *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined *puStack_7c8;
  undefined1 ***pppuStack_7c0;
  code *pcStack_7b8;
  undefined8 *puStack_7b0;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 uStack_790;
  long lStack_788;
  long *plStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  long lStack_748;
  long *plStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined *puStack_710;
  long lStack_708;
  long *plStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  long lStack_550;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined8 *puStack_4f8;
  undefined1 **ppuStack_4f0;
  code *pcStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  long lStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_270;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain();
  puVar16 = &uStack_1b0;
  lStack_1f8 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    unaff_x26 = *plStack_1a0;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_1a0 != unaff_x26) {
          _objc_enumerationMutation(lStack_1f8);
        }
        lVar3 = *(long *)(lStack_1a8 + unaff_x27 * 8);
        if (lVar3 != 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          func_0x00010bf9a520();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar3;
          func_0x00010bf52a60();
          if (lVar17 != 0) {
            unaff_x28 = *plStack_1e0;
            do {
              lVar18 = 0;
              do {
                if (*plStack_1e0 != unaff_x28) {
                  _objc_enumerationMutation(lVar3);
                }
                unaff_x24 = *(long *)(lStack_1e8 + lVar18 * 8);
                unaff_x25 = unaff_x24;
                func_0x00010bf9a060();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (unaff_x25 != 0) {
                  func_0x00010bf9a060();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar23);
                  _objc_release(unaff_x24);
                }
                lVar18 = lVar18 + 1;
              } while (lVar17 != lVar18);
              lVar17 = lVar3;
              func_0x00010bf52a60();
              unaff_x23 = 0;
            } while (lVar17 != 0);
          }
          _objc_release(lVar3);
          unaff_x22 = lVar3;
        }
        unaff_x27 = unaff_x27 + 1;
      } while (unaff_x27 != param_3);
      puVar16 = &uStack_1b0;
      param_3 = lStack_1f8;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar3 = lStack_1f8;
  _objc_release(lStack_1f8);
  puVar22 = puVar23;
  func_0x00010bf51e00();
  _objc_release(puVar23);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_220 = lVar3;
    pcStack_208 = FUN_10497e2c8;
    lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar16;
    lStack_260 = unaff_x28;
    lStack_258 = unaff_x27;
    lStack_250 = unaff_x26;
    lStack_248 = unaff_x25;
    lStack_240 = unaff_x24;
    lStack_238 = unaff_x23;
    lStack_230 = unaff_x22;
    puStack_228 = puVar22;
    puStack_218 = puVar23;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c0d8420();
    if (puVar16 != (undefined8 *)0x0) {
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      puStack_4e0 = puVar16;
      _objc_retain();
      puVar4 = &uStack_430;
      puStack_4d8 = puVar16;
      func_0x00010bf52a60();
      puStack_4c8 = puVar16;
      if (puVar16 != (undefined8 *)0x0) {
        lStack_4d0 = *plStack_420;
        do {
          puVar16 = (undefined8 *)0x0;
          do {
            if (*plStack_420 != lStack_4d0) {
              _objc_enumerationMutation(puStack_4d8);
            }
            lVar3 = *(long *)(lStack_428 + (long)puVar16 * 8);
            lStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            plStack_460 = (long *)0x0;
            uStack_448 = 0;
            uStack_450 = 0;
            uStack_438 = 0;
            uStack_440 = 0;
            puStack_4c0 = puVar16;
            func_0x00010bf630c0();
            _objc_retainAutoreleasedReturnValue();
            lStack_4b8 = lVar3;
            func_0x00010bf52a60();
            if (lVar3 != 0) {
              lVar17 = *plStack_460;
              unaff_x24 = lVar3;
              do {
                unaff_x22 = 0;
                do {
                  if (*plStack_460 != lVar17) {
                    _objc_enumerationMutation(lStack_4b8);
                  }
                  lVar3 = *(long *)(lStack_468 + unaff_x22 * 8);
                  if (lVar3 != 0) {
                    uStack_488 = 0;
                    uStack_490 = 0;
                    uStack_478 = 0;
                    uStack_480 = 0;
                    lStack_4a8 = 0;
                    uStack_4b0 = 0;
                    uStack_498 = 0;
                    plStack_4a0 = (long *)0x0;
                    func_0x00010bf9a520();
                    _objc_retainAutoreleasedReturnValue();
                    lVar18 = lVar3;
                    func_0x00010bf52a60();
                    if (lVar18 != 0) {
                      lVar19 = *plStack_4a0;
                      do {
                        unaff_x23 = 0;
                        do {
                          if (*plStack_4a0 != lVar19) {
                            _objc_enumerationMutation(lVar3);
                          }
                          unaff_x27 = *(long *)(lStack_4a8 + unaff_x23 * 8);
                          unaff_x28 = unaff_x27;
                          func_0x00010bf9a060();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          if (unaff_x28 != 0) {
                            func_0x00010bf9a060();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010befa120(puVar23);
                            _objc_release(unaff_x27);
                          }
                          unaff_x23 = unaff_x23 + 1;
                        } while (lVar18 != unaff_x23);
                        lVar18 = lVar3;
                        func_0x00010bf52a60();
                        unaff_x26 = 0;
                      } while (lVar18 != 0);
                    }
                    _objc_release(lVar3);
                    unaff_x25 = lVar3;
                  }
                  unaff_x22 = unaff_x22 + 1;
                } while (unaff_x22 != unaff_x24);
                unaff_x24 = lStack_4b8;
                func_0x00010bf52a60();
              } while (unaff_x24 != 0);
            }
            _objc_release(lStack_4b8);
            puVar16 = (undefined8 *)((long)puStack_4c0 + 1);
          } while (puVar16 != puStack_4c8);
          puVar4 = &uStack_430;
          puVar16 = puStack_4d8;
          func_0x00010bf52a60();
          puStack_4c8 = puVar16;
        } while (puVar16 != (undefined8 *)0x0);
      }
      _objc_release(puStack_4d8);
      puVar16 = puStack_4e0;
    }
    puVar22 = puVar23;
    func_0x00010bf51e00();
    _objc_release(puVar23);
    _objc_release(puVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
      ___stack_chk_fail();
      pcStack_4e8 = FUN_10497e580;
      lStack_550 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_540 = unaff_x28;
      lStack_538 = unaff_x27;
      lStack_530 = unaff_x26;
      lStack_528 = unaff_x25;
      lStack_520 = unaff_x24;
      lStack_518 = unaff_x23;
      lStack_510 = unaff_x22;
      puStack_508 = puVar22;
      puStack_500 = puVar23;
      puStack_4f8 = puVar16;
      ppuStack_4f0 = &puStack_210;
      _objc_retain();
      puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c0d8420();
      lStack_708 = 0;
      puStack_710 = (undefined *)0x0;
      uStack_6f8 = 0;
      plStack_700 = (long *)0x0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
      _objc_retain();
      ppuVar5 = &puStack_710;
      puStack_7b0 = puVar4;
      func_0x00010bf52a60();
      puStack_7a0 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        lStack_7a8 = *plStack_700;
        do {
          puVar16 = (undefined8 *)0x0;
          do {
            if (*plStack_700 != lStack_7a8) {
              _objc_enumerationMutation(puStack_7b0);
            }
            lVar3 = *(long *)(lStack_708 + (long)puVar16 * 8);
            if (lVar3 != 0) {
              uStack_728 = 0;
              uStack_730 = 0;
              uStack_718 = 0;
              uStack_720 = 0;
              lStack_748 = 0;
              uStack_750 = 0;
              uStack_738 = 0;
              plStack_740 = (long *)0x0;
              puStack_798 = puVar16;
              func_0x00010bf9a520();
              _objc_retainAutoreleasedReturnValue();
              lVar17 = lVar3;
              func_0x00010bf52a60();
              if (lVar17 != 0) {
                lVar18 = *plStack_740;
                do {
                  unaff_x27 = 0;
                  do {
                    if (*plStack_740 != lVar18) {
                      _objc_enumerationMutation(lVar3);
                    }
                    unaff_x24 = *(long *)(lStack_748 + unaff_x27 * 8);
                    lStack_788 = 0;
                    uStack_790 = 0;
                    uStack_778 = 0;
                    plStack_780 = (long *)0x0;
                    uStack_768 = 0;
                    uStack_770 = 0;
                    uStack_758 = 0;
                    uStack_760 = 0;
                    func_0x00010c297360();
                    _objc_retainAutoreleasedReturnValue();
                    lVar19 = unaff_x24;
                    func_0x00010bf52a60();
                    if (lVar19 != 0) {
                      lVar20 = *plStack_780;
                      unaff_x25 = lVar19;
                      do {
                        unaff_x28 = 0;
                        do {
                          if (*plStack_780 != lVar20) {
                            _objc_enumerationMutation(unaff_x24);
                          }
                          unaff_x26 = *(long *)(lStack_788 + unaff_x28 * 8);
                          func_0x00010c28ed80();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar23);
                          _objc_release(unaff_x26);
                          unaff_x28 = unaff_x28 + 1;
                        } while (unaff_x25 != unaff_x28);
                        unaff_x25 = unaff_x24;
                        func_0x00010bf52a60();
                      } while (unaff_x25 != 0);
                    }
                    _objc_release(unaff_x24);
                    unaff_x27 = unaff_x27 + 1;
                  } while (unaff_x27 != lVar17);
                  lVar17 = lVar3;
                  func_0x00010bf52a60();
                  unaff_x23 = 0;
                } while (lVar17 != 0);
              }
              _objc_release(lVar3);
              puVar16 = puStack_798;
              unaff_x22 = lVar3;
            }
            puVar16 = (undefined8 *)((long)puVar16 + 1);
          } while (puVar16 != puStack_7a0);
          ppuVar5 = &puStack_710;
          puVar16 = puStack_7b0;
          func_0x00010bf52a60();
          puStack_7a0 = puVar16;
        } while (puVar16 != (undefined8 *)0x0);
      }
      puVar16 = puStack_7b0;
      _objc_release(puStack_7b0);
      puVar22 = puVar23;
      func_0x00010bf51e00();
      _objc_release(puVar23);
      _objc_release(puVar16);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_550) {
        ___stack_chk_fail();
        puStack_7d0 = puVar16;
        pcStack_7b8 = FUN_10497e814;
        lStack_820 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar15 = ppuVar5;
        lStack_810 = unaff_x28;
        lStack_808 = unaff_x27;
        lStack_800 = unaff_x26;
        lStack_7f8 = unaff_x25;
        lStack_7f0 = unaff_x24;
        lStack_7e8 = unaff_x23;
        lStack_7e0 = unaff_x22;
        puStack_7d8 = puVar22;
        puStack_7c8 = puVar23;
        pppuStack_7c0 = &ppuStack_4f0;
        _objc_retain();
        puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c0d8420();
        if (ppuVar5 != (undefined **)0x0) {
          uStack_a38 = 0;
          uStack_a40 = 0;
          uStack_a28 = 0;
          uStack_a30 = 0;
          lStack_a58 = 0;
          puStack_a60 = (undefined *)0x0;
          uStack_a48 = 0;
          plStack_a50 = (long *)0x0;
          ppuVar6 = ppuVar5;
          _objc_retain();
          ppuVar15 = &puStack_a60;
          ppuStack_b58 = ppuVar6;
          func_0x00010bf52a60();
          if (ppuStack_b58 != (undefined **)0x0) {
            lVar3 = *plStack_a50;
            do {
              ppuVar15 = (undefined **)0x0;
              do {
                if (*plStack_a50 != lVar3) {
                  _objc_enumerationMutation(ppuVar6);
                }
                lVar19 = *(long *)(lStack_a58 + (long)ppuVar15 * 8);
                func_0x00010bf630c0();
                _objc_retainAutoreleasedReturnValue();
                lVar17 = lVar19;
                func_0x00010bf52a60();
                lVar18 = lRam0000000000000000;
                while (lVar17 != 0) {
                  lVar20 = 0;
                  do {
                    if (lRam0000000000000000 != lVar18) {
                      _objc_enumerationMutation(lVar19);
                    }
                    lVar7 = *(long *)(lVar20 * 8);
                    if (lVar7 != 0) {
                      func_0x00010bf9a520();
                      _objc_retainAutoreleasedReturnValue();
                      lVar8 = lVar7;
                      func_0x00010bf52a60();
                      lVar1 = lRam0000000000000000;
                      while (lVar8 != 0) {
                        lVar24 = 0;
                        do {
                          if (lRam0000000000000000 != lVar1) {
                            _objc_enumerationMutation(lVar7);
                          }
                          lVar9 = *(long *)(lVar24 * 8);
                          func_0x00010c297360();
                          _objc_retainAutoreleasedReturnValue();
                          lVar10 = lVar9;
                          func_0x00010bf52a60();
                          lVar2 = lRam0000000000000000;
                          while (lVar10 != 0) {
                            lVar21 = 0;
                            do {
                              if (lRam0000000000000000 != lVar2) {
                                _objc_enumerationMutation(lVar9);
                              }
                              uVar11 = *(undefined8 *)(lVar21 * 8);
                              func_0x00010c28ed80(uVar11);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010befa120(puVar23);
                              _objc_release(uVar11);
                              lVar21 = lVar21 + 1;
                            } while (lVar10 != lVar21);
                            lVar10 = lVar9;
                            func_0x00010bf52a60();
                          }
                          _objc_release(lVar9);
                          lVar24 = lVar24 + 1;
                        } while (lVar24 != lVar8);
                        lVar8 = lVar7;
                        func_0x00010bf52a60();
                      }
                      _objc_release(lVar7);
                    }
                    lVar20 = lVar20 + 1;
                  } while (lVar20 != lVar17);
                  lVar17 = lVar19;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar19);
                ppuVar15 = (undefined **)((long)ppuVar15 + 1);
              } while (ppuVar15 != ppuStack_b58);
              ppuVar15 = &puStack_a60;
              ppuStack_b58 = ppuVar6;
              func_0x00010bf52a60();
            } while (ppuStack_b58 != (undefined **)0x0);
          }
          _objc_release(ppuVar6);
        }
        puVar22 = puVar23;
        func_0x00010bf51e00();
        _objc_release(puVar23);
        _objc_release(ppuVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_820) {
          ___stack_chk_fail();
          lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar23 = PTR_PTR_1126add78;
          func_0x00010bf0a0a0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar23 == (undefined *)0x0) {
            puVar22 = (undefined *)0x0;
          }
          else {
            puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010c0d8420();
            puVar13 = puVar23;
            _objc_retain();
            puVar22 = puVar13;
            func_0x00010bf52a60();
            lVar17 = lRam0000000000000000;
            while (puVar22 != (undefined *)0x0) {
              puVar25 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar17) {
                  _objc_enumerationMutation(puVar13);
                }
                puVar14 = PTR_PTR_1126adf80;
                _objc_alloc(PTR_PTR_1126adf80);
                func_0x00010c020680();
                func_0x00010bf09f20(PTR_PTR_1126add78);
                _objc_release(puVar14);
                puVar25 = puVar25 + 1;
              } while (puVar22 != puVar25);
              puVar22 = puVar13;
              func_0x00010bf52a60();
            }
            _objc_release(puVar13);
            ppuVar15 = &PTR___NSConcreteGlobalBlock_1107b9ce0;
            func_0x00010c246ba0(puVar12);
            puVar22 = puVar12;
            func_0x00010bf51e00();
            _objc_release(puVar12);
          }
          _objc_release(puVar23);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
            ___stack_chk_fail();
            _objc_retain();
            _objc_retain();
            lVar3 = param_2;
            func_0x00010bf50c20();
            ppuVar5 = ppuVar15;
            func_0x00010bf50c20();
            if (lVar3 < (long)ppuVar5) {
              puVar23 = (undefined *)0x1;
            }
            else {
              lVar3 = param_2;
              func_0x00010bf50c20(param_2);
              ppuVar5 = ppuVar15;
              func_0x00010bf50c20(ppuVar15);
              puVar23 = (undefined *)-(ulong)((long)ppuVar5 < lVar3);
            }
            _objc_release(ppuVar15);
            _objc_release(param_2);
            return puVar23;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return puVar22;
}



/* Entry: 10497e2c8; end: 10497e57f; +[FBSDKSKAdNetworkConversionConfiguration getEventSetFromCoarseConfigs:] */

undefined * FUN_10497e2c8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  long unaff_x22;
  long lVar24;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined *puVar25;
  long unaff_x28;
  undefined **ppuStack_958;
  undefined *puStack_860;
  long lStack_858;
  long *plStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long lStack_620;
  long lStack_610;
  long lStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  undefined *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined *puStack_5c8;
  undefined1 **ppuStack_5c0;
  code *pcStack_5b8;
  undefined8 *puStack_5b0;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_350;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 *puStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  long lStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_3;
  _objc_retain();
  puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420();
  if (param_3 != (undefined8 *)0x0) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    puStack_2e0 = param_3;
    _objc_retain();
    puVar16 = &uStack_230;
    puStack_2d8 = param_3;
    func_0x00010bf52a60();
    puStack_2c8 = param_3;
    if (param_3 != (undefined8 *)0x0) {
      lStack_2d0 = *plStack_220;
      puStack_2c8 = param_3;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_220 != lStack_2d0) {
            _objc_enumerationMutation(puStack_2d8);
          }
          lVar3 = *(long *)(lStack_228 + (long)puVar16 * 8);
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          puStack_2c0 = puVar16;
          func_0x00010bf630c0();
          _objc_retainAutoreleasedReturnValue();
          lStack_2b8 = lVar3;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar17 = *plStack_260;
            unaff_x24 = lVar3;
            do {
              unaff_x22 = 0;
              do {
                if (*plStack_260 != lVar17) {
                  _objc_enumerationMutation(lStack_2b8);
                }
                lVar3 = *(long *)(lStack_268 + unaff_x22 * 8);
                if (lVar3 != 0) {
                  uStack_288 = 0;
                  uStack_290 = 0;
                  uStack_278 = 0;
                  uStack_280 = 0;
                  lStack_2a8 = 0;
                  uStack_2b0 = 0;
                  uStack_298 = 0;
                  plStack_2a0 = (long *)0x0;
                  func_0x00010bf9a520();
                  _objc_retainAutoreleasedReturnValue();
                  lVar18 = lVar3;
                  func_0x00010bf52a60();
                  if (lVar18 != 0) {
                    lVar19 = *plStack_2a0;
                    do {
                      unaff_x23 = 0;
                      do {
                        if (*plStack_2a0 != lVar19) {
                          _objc_enumerationMutation(lVar3);
                        }
                        unaff_x27 = *(long *)(lStack_2a8 + unaff_x23 * 8);
                        unaff_x28 = unaff_x27;
                        func_0x00010bf9a060();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release();
                        if (unaff_x28 != 0) {
                          func_0x00010bf9a060();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar23);
                          _objc_release(unaff_x27);
                        }
                        unaff_x23 = unaff_x23 + 1;
                      } while (lVar18 != unaff_x23);
                      lVar18 = lVar3;
                      func_0x00010bf52a60();
                      unaff_x26 = 0;
                    } while (lVar18 != 0);
                  }
                  _objc_release(lVar3);
                  unaff_x25 = lVar3;
                }
                unaff_x22 = unaff_x22 + 1;
              } while (unaff_x22 != unaff_x24);
              unaff_x24 = lStack_2b8;
              func_0x00010bf52a60();
            } while (unaff_x24 != 0);
          }
          _objc_release(lStack_2b8);
          puVar16 = (undefined8 *)((long)puStack_2c0 + 1);
        } while (puVar16 != puStack_2c8);
        puVar16 = &uStack_230;
        puVar4 = puStack_2d8;
        func_0x00010bf52a60();
        puStack_2c8 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puStack_2d8);
    param_3 = puStack_2e0;
  }
  puVar22 = puVar23;
  func_0x00010bf51e00();
  _objc_release(puVar23);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_2e8 = FUN_10497e580;
    lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_340 = unaff_x28;
    lStack_338 = unaff_x27;
    uStack_330 = unaff_x26;
    lStack_328 = unaff_x25;
    lStack_320 = unaff_x24;
    lStack_318 = unaff_x23;
    lStack_310 = unaff_x22;
    puStack_308 = puVar22;
    puStack_300 = puVar23;
    puStack_2f8 = param_3;
    puStack_2f0 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c0d8420();
    lStack_508 = 0;
    puStack_510 = (undefined *)0x0;
    uStack_4f8 = 0;
    plStack_500 = (long *)0x0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    _objc_retain();
    ppuVar5 = &puStack_510;
    puStack_5b0 = puVar16;
    func_0x00010bf52a60();
    puStack_5a0 = puVar16;
    if (puVar16 != (undefined8 *)0x0) {
      lStack_5a8 = *plStack_500;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_500 != lStack_5a8) {
            _objc_enumerationMutation(puStack_5b0);
          }
          lVar3 = *(long *)(lStack_508 + (long)puVar16 * 8);
          if (lVar3 != 0) {
            uStack_528 = 0;
            uStack_530 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            lStack_548 = 0;
            uStack_550 = 0;
            uStack_538 = 0;
            plStack_540 = (long *)0x0;
            puStack_598 = puVar16;
            func_0x00010bf9a520();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar3;
            func_0x00010bf52a60();
            if (lVar17 != 0) {
              lVar18 = *plStack_540;
              do {
                unaff_x27 = 0;
                do {
                  if (*plStack_540 != lVar18) {
                    _objc_enumerationMutation(lVar3);
                  }
                  unaff_x24 = *(long *)(lStack_548 + unaff_x27 * 8);
                  lStack_588 = 0;
                  uStack_590 = 0;
                  uStack_578 = 0;
                  plStack_580 = (long *)0x0;
                  uStack_568 = 0;
                  uStack_570 = 0;
                  uStack_558 = 0;
                  uStack_560 = 0;
                  func_0x00010c297360();
                  _objc_retainAutoreleasedReturnValue();
                  lVar19 = unaff_x24;
                  func_0x00010bf52a60();
                  if (lVar19 != 0) {
                    lVar20 = *plStack_580;
                    unaff_x25 = lVar19;
                    do {
                      unaff_x28 = 0;
                      do {
                        if (*plStack_580 != lVar20) {
                          _objc_enumerationMutation(unaff_x24);
                        }
                        unaff_x26 = *(undefined8 *)(lStack_588 + unaff_x28 * 8);
                        func_0x00010c28ed80();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puVar23);
                        _objc_release(unaff_x26);
                        unaff_x28 = unaff_x28 + 1;
                      } while (unaff_x25 != unaff_x28);
                      unaff_x25 = unaff_x24;
                      func_0x00010bf52a60();
                    } while (unaff_x25 != 0);
                  }
                  _objc_release(unaff_x24);
                  unaff_x27 = unaff_x27 + 1;
                } while (unaff_x27 != lVar17);
                lVar17 = lVar3;
                func_0x00010bf52a60();
                unaff_x23 = 0;
              } while (lVar17 != 0);
            }
            _objc_release(lVar3);
            puVar16 = puStack_598;
            unaff_x22 = lVar3;
          }
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar16 != puStack_5a0);
        ppuVar5 = &puStack_510;
        puVar16 = puStack_5b0;
        func_0x00010bf52a60();
        puStack_5a0 = puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
    puVar16 = puStack_5b0;
    _objc_release(puStack_5b0);
    puVar22 = puVar23;
    func_0x00010bf51e00();
    _objc_release(puVar23);
    _objc_release(puVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_350) {
      ___stack_chk_fail();
      puStack_5d0 = puVar16;
      pcStack_5b8 = FUN_10497e814;
      lStack_620 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar15 = ppuVar5;
      lStack_610 = unaff_x28;
      lStack_608 = unaff_x27;
      uStack_600 = unaff_x26;
      lStack_5f8 = unaff_x25;
      lStack_5f0 = unaff_x24;
      lStack_5e8 = unaff_x23;
      lStack_5e0 = unaff_x22;
      puStack_5d8 = puVar22;
      puStack_5c8 = puVar23;
      ppuStack_5c0 = &puStack_2f0;
      _objc_retain();
      puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c0d8420();
      if (ppuVar5 != (undefined **)0x0) {
        uStack_838 = 0;
        uStack_840 = 0;
        uStack_828 = 0;
        uStack_830 = 0;
        lStack_858 = 0;
        puStack_860 = (undefined *)0x0;
        uStack_848 = 0;
        plStack_850 = (long *)0x0;
        ppuVar6 = ppuVar5;
        _objc_retain();
        ppuVar15 = &puStack_860;
        ppuStack_958 = ppuVar6;
        func_0x00010bf52a60();
        if (ppuStack_958 != (undefined **)0x0) {
          lVar3 = *plStack_850;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (*plStack_850 != lVar3) {
                _objc_enumerationMutation(ppuVar6);
              }
              lVar19 = *(long *)(lStack_858 + (long)ppuVar15 * 8);
              func_0x00010bf630c0();
              _objc_retainAutoreleasedReturnValue();
              lVar17 = lVar19;
              func_0x00010bf52a60();
              lVar18 = lRam0000000000000000;
              while (lVar17 != 0) {
                lVar20 = 0;
                do {
                  if (lRam0000000000000000 != lVar18) {
                    _objc_enumerationMutation(lVar19);
                  }
                  lVar7 = *(long *)(lVar20 * 8);
                  if (lVar7 != 0) {
                    func_0x00010bf9a520();
                    _objc_retainAutoreleasedReturnValue();
                    lVar8 = lVar7;
                    func_0x00010bf52a60();
                    lVar1 = lRam0000000000000000;
                    while (lVar8 != 0) {
                      lVar24 = 0;
                      do {
                        if (lRam0000000000000000 != lVar1) {
                          _objc_enumerationMutation(lVar7);
                        }
                        lVar9 = *(long *)(lVar24 * 8);
                        func_0x00010c297360();
                        _objc_retainAutoreleasedReturnValue();
                        lVar10 = lVar9;
                        func_0x00010bf52a60();
                        lVar2 = lRam0000000000000000;
                        while (lVar10 != 0) {
                          lVar21 = 0;
                          do {
                            if (lRam0000000000000000 != lVar2) {
                              _objc_enumerationMutation(lVar9);
                            }
                            uVar11 = *(undefined8 *)(lVar21 * 8);
                            func_0x00010c28ed80(uVar11);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010befa120(puVar23);
                            _objc_release(uVar11);
                            lVar21 = lVar21 + 1;
                          } while (lVar10 != lVar21);
                          lVar10 = lVar9;
                          func_0x00010bf52a60();
                        }
                        _objc_release(lVar9);
                        lVar24 = lVar24 + 1;
                      } while (lVar24 != lVar8);
                      lVar8 = lVar7;
                      func_0x00010bf52a60();
                    }
                    _objc_release(lVar7);
                  }
                  lVar20 = lVar20 + 1;
                } while (lVar20 != lVar17);
                lVar17 = lVar19;
                func_0x00010bf52a60();
              }
              _objc_release(lVar19);
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar15 != ppuStack_958);
            ppuVar15 = &puStack_860;
            ppuStack_958 = ppuVar6;
            func_0x00010bf52a60();
          } while (ppuStack_958 != (undefined **)0x0);
        }
        _objc_release(ppuVar6);
      }
      puVar22 = puVar23;
      func_0x00010bf51e00();
      _objc_release(puVar23);
      _objc_release(ppuVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_620) {
        ___stack_chk_fail();
        lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar23 = PTR_PTR_1126add78;
        func_0x00010bf0a0a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar23 == (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010c0d8420();
          puVar13 = puVar23;
          _objc_retain();
          puVar22 = puVar13;
          func_0x00010bf52a60();
          lVar17 = lRam0000000000000000;
          while (puVar22 != (undefined *)0x0) {
            puVar25 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar17) {
                _objc_enumerationMutation(puVar13);
              }
              puVar14 = PTR_PTR_1126adf80;
              _objc_alloc(PTR_PTR_1126adf80);
              func_0x00010c020680();
              func_0x00010bf09f20(PTR_PTR_1126add78);
              _objc_release(puVar14);
              puVar25 = puVar25 + 1;
            } while (puVar22 != puVar25);
            puVar22 = puVar13;
            func_0x00010bf52a60();
          }
          _objc_release(puVar13);
          ppuVar15 = &PTR___NSConcreteGlobalBlock_1107b9ce0;
          func_0x00010c246ba0(puVar12);
          puVar22 = puVar12;
          func_0x00010bf51e00();
          _objc_release(puVar12);
        }
        _objc_release(puVar23);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain();
          lVar3 = param_2;
          func_0x00010bf50c20();
          ppuVar5 = ppuVar15;
          func_0x00010bf50c20();
          if (lVar3 < (long)ppuVar5) {
            puVar23 = (undefined *)0x1;
          }
          else {
            lVar3 = param_2;
            func_0x00010bf50c20(param_2);
            ppuVar5 = ppuVar15;
            func_0x00010bf50c20(ppuVar15);
            puVar23 = (undefined *)-(ulong)((long)ppuVar5 < lVar3);
          }
          _objc_release(ppuVar15);
          _objc_release(param_2);
          return puVar23;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return puVar22;
}



/* Entry: 10497e580; end: 10497e813; +[FBSDKSKAdNetworkConversionConfiguration getCurrencySetFromRules:] */

undefined * FUN_10497e580(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  long unaff_x22;
  long lVar22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined *puVar23;
  long unaff_x28;
  undefined **ppuStack_678;
  undefined *puStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_340;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar21 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420();
  lStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain();
  ppuVar4 = &puStack_230;
  lStack_2d0 = param_3;
  func_0x00010bf52a60();
  lStack_2c0 = param_3;
  if (param_3 != 0) {
    lStack_2c8 = *plStack_220;
    lStack_2c0 = param_3;
    do {
      lVar16 = 0;
      do {
        if (*plStack_220 != lStack_2c8) {
          _objc_enumerationMutation(lStack_2d0);
        }
        lVar3 = *(long *)(lStack_228 + lVar16 * 8);
        if (lVar3 != 0) {
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          lStack_2b8 = lVar16;
          func_0x00010bf9a520();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar3;
          func_0x00010bf52a60();
          if (lVar16 != 0) {
            lVar17 = *plStack_260;
            do {
              unaff_x27 = 0;
              do {
                if (*plStack_260 != lVar17) {
                  _objc_enumerationMutation(lVar3);
                }
                unaff_x24 = *(long *)(lStack_268 + unaff_x27 * 8);
                lStack_2a8 = 0;
                uStack_2b0 = 0;
                uStack_298 = 0;
                plStack_2a0 = (long *)0x0;
                uStack_288 = 0;
                uStack_290 = 0;
                uStack_278 = 0;
                uStack_280 = 0;
                func_0x00010c297360();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = unaff_x24;
                func_0x00010bf52a60();
                if (lVar6 != 0) {
                  lVar18 = *plStack_2a0;
                  unaff_x25 = lVar6;
                  do {
                    unaff_x28 = 0;
                    do {
                      if (*plStack_2a0 != lVar18) {
                        _objc_enumerationMutation(unaff_x24);
                      }
                      unaff_x26 = *(undefined8 *)(lStack_2a8 + unaff_x28 * 8);
                      func_0x00010c28ed80();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar21);
                      _objc_release(unaff_x26);
                      unaff_x28 = unaff_x28 + 1;
                    } while (unaff_x25 != unaff_x28);
                    unaff_x25 = unaff_x24;
                    func_0x00010bf52a60();
                  } while (unaff_x25 != 0);
                }
                _objc_release(unaff_x24);
                unaff_x27 = unaff_x27 + 1;
              } while (unaff_x27 != lVar16);
              lVar16 = lVar3;
              func_0x00010bf52a60();
              unaff_x23 = 0;
            } while (lVar16 != 0);
          }
          _objc_release(lVar3);
          lVar16 = lStack_2b8;
          unaff_x22 = lVar3;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != lStack_2c0);
      ppuVar4 = &puStack_230;
      lVar16 = lStack_2d0;
      func_0x00010bf52a60();
      lStack_2c0 = lVar16;
    } while (lVar16 != 0);
  }
  lVar16 = lStack_2d0;
  _objc_release(lStack_2d0);
  puVar20 = puVar21;
  func_0x00010bf51e00();
  _objc_release(puVar21);
  _objc_release(lVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_2f0 = lVar16;
    pcStack_2d8 = FUN_10497e814;
    lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar15 = ppuVar4;
    lStack_330 = unaff_x28;
    lStack_328 = unaff_x27;
    uStack_320 = unaff_x26;
    lStack_318 = unaff_x25;
    lStack_310 = unaff_x24;
    uStack_308 = unaff_x23;
    lStack_300 = unaff_x22;
    puStack_2f8 = puVar20;
    puStack_2e8 = puVar21;
    puStack_2e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar21 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c0d8420();
    if (ppuVar4 != (undefined **)0x0) {
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      lStack_578 = 0;
      puStack_580 = (undefined *)0x0;
      uStack_568 = 0;
      plStack_570 = (long *)0x0;
      ppuVar5 = ppuVar4;
      _objc_retain();
      ppuVar15 = &puStack_580;
      ppuStack_678 = ppuVar5;
      func_0x00010bf52a60();
      if (ppuStack_678 != (undefined **)0x0) {
        lVar16 = *plStack_570;
        do {
          ppuVar15 = (undefined **)0x0;
          do {
            if (*plStack_570 != lVar16) {
              _objc_enumerationMutation(ppuVar5);
            }
            lVar6 = *(long *)(lStack_578 + (long)ppuVar15 * 8);
            func_0x00010bf630c0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar6;
            func_0x00010bf52a60();
            lVar17 = lRam0000000000000000;
            while (lVar3 != 0) {
              lVar18 = 0;
              do {
                if (lRam0000000000000000 != lVar17) {
                  _objc_enumerationMutation(lVar6);
                }
                lVar7 = *(long *)(lVar18 * 8);
                if (lVar7 != 0) {
                  func_0x00010bf9a520();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar7;
                  func_0x00010bf52a60();
                  lVar1 = lRam0000000000000000;
                  while (lVar8 != 0) {
                    lVar22 = 0;
                    do {
                      if (lRam0000000000000000 != lVar1) {
                        _objc_enumerationMutation(lVar7);
                      }
                      lVar9 = *(long *)(lVar22 * 8);
                      func_0x00010c297360();
                      _objc_retainAutoreleasedReturnValue();
                      lVar10 = lVar9;
                      func_0x00010bf52a60();
                      lVar2 = lRam0000000000000000;
                      while (lVar10 != 0) {
                        lVar19 = 0;
                        do {
                          if (lRam0000000000000000 != lVar2) {
                            _objc_enumerationMutation(lVar9);
                          }
                          uVar11 = *(undefined8 *)(lVar19 * 8);
                          func_0x00010c28ed80(uVar11);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar21);
                          _objc_release(uVar11);
                          lVar19 = lVar19 + 1;
                        } while (lVar10 != lVar19);
                        lVar10 = lVar9;
                        func_0x00010bf52a60();
                      }
                      _objc_release(lVar9);
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != lVar8);
                    lVar8 = lVar7;
                    func_0x00010bf52a60();
                  }
                  _objc_release(lVar7);
                }
                lVar18 = lVar18 + 1;
              } while (lVar18 != lVar3);
              lVar3 = lVar6;
              func_0x00010bf52a60();
            }
            _objc_release(lVar6);
            ppuVar15 = (undefined **)((long)ppuVar15 + 1);
          } while (ppuVar15 != ppuStack_678);
          ppuVar15 = &puStack_580;
          ppuStack_678 = ppuVar5;
          func_0x00010bf52a60();
        } while (ppuStack_678 != (undefined **)0x0);
      }
      _objc_release(ppuVar5);
    }
    puVar20 = puVar21;
    func_0x00010bf51e00();
    _objc_release(puVar21);
    _objc_release(ppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_340) {
      ___stack_chk_fail();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar21 = PTR_PTR_1126add78;
      func_0x00010bf0a0a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar21 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010c0d8420();
        puVar13 = puVar21;
        _objc_retain();
        puVar20 = puVar13;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (puVar20 != (undefined *)0x0) {
          puVar23 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(puVar13);
            }
            puVar14 = PTR_PTR_1126adf80;
            _objc_alloc(PTR_PTR_1126adf80);
            func_0x00010c020680();
            func_0x00010bf09f20(PTR_PTR_1126add78);
            _objc_release(puVar14);
            puVar23 = puVar23 + 1;
          } while (puVar20 != puVar23);
          puVar20 = puVar13;
          func_0x00010bf52a60();
        }
        _objc_release(puVar13);
        ppuVar15 = &PTR___NSConcreteGlobalBlock_1107b9ce0;
        func_0x00010c246ba0(puVar12);
        puVar20 = puVar12;
        func_0x00010bf51e00();
        _objc_release(puVar12);
      }
      _objc_release(puVar21);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
        ___stack_chk_fail();
        _objc_retain();
        _objc_retain();
        lVar16 = param_2;
        func_0x00010bf50c20();
        ppuVar4 = ppuVar15;
        func_0x00010bf50c20();
        if (lVar16 < (long)ppuVar4) {
          puVar21 = (undefined *)0x1;
        }
        else {
          lVar16 = param_2;
          func_0x00010bf50c20(param_2);
          ppuVar4 = ppuVar15;
          func_0x00010bf50c20(ppuVar15);
          puVar21 = (undefined *)-(ulong)((long)ppuVar4 < lVar16);
        }
        _objc_release(ppuVar15);
        _objc_release(param_2);
        return puVar21;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return puVar20;
}



/* Entry: 10497e814; end: 10497eb57; +[FBSDKSKAdNetworkConversionConfiguration getCurrencySetFromCoarseConfigs:] */

undefined * FUN_10497e814(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined **ppuStack_3a8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = param_3;
  _objc_retain();
  puVar20 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420();
  if (param_3 != (undefined **)0x0) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    puStack_2b0 = (undefined *)0x0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    ppuVar4 = param_3;
    _objc_retain();
    ppuVar16 = &puStack_2b0;
    ppuStack_3a8 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuStack_3a8 != (undefined **)0x0) {
      lVar15 = *plStack_2a0;
      do {
        ppuVar16 = (undefined **)0x0;
        do {
          if (*plStack_2a0 != lVar15) {
            _objc_enumerationMutation(ppuVar4);
          }
          lVar5 = *(long *)(lStack_2a8 + (long)ppuVar16 * 8);
          func_0x00010bf630c0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar17 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar5);
              }
              lVar7 = *(long *)(lVar17 * 8);
              if (lVar7 != 0) {
                func_0x00010bf9a520();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010bf52a60();
                lVar2 = lRam0000000000000000;
                while (lVar8 != 0) {
                  lVar21 = 0;
                  do {
                    if (lRam0000000000000000 != lVar2) {
                      _objc_enumerationMutation(lVar7);
                    }
                    lVar9 = *(long *)(lVar21 * 8);
                    func_0x00010c297360();
                    _objc_retainAutoreleasedReturnValue();
                    lVar10 = lVar9;
                    func_0x00010bf52a60();
                    lVar3 = lRam0000000000000000;
                    while (lVar10 != 0) {
                      lVar18 = 0;
                      do {
                        if (lRam0000000000000000 != lVar3) {
                          _objc_enumerationMutation(lVar9);
                        }
                        uVar11 = *(undefined8 *)(lVar18 * 8);
                        func_0x00010c28ed80(uVar11);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puVar20);
                        _objc_release(uVar11);
                        lVar18 = lVar18 + 1;
                      } while (lVar10 != lVar18);
                      lVar10 = lVar9;
                      func_0x00010bf52a60();
                    }
                    _objc_release(lVar9);
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != lVar8);
                  lVar8 = lVar7;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar7);
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 != lVar6);
            lVar6 = lVar5;
            func_0x00010bf52a60();
          }
          _objc_release(lVar5);
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        } while (ppuVar16 != ppuStack_3a8);
        ppuVar16 = &puStack_2b0;
        ppuStack_3a8 = ppuVar4;
        func_0x00010bf52a60();
      } while (ppuStack_3a8 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
  }
  puVar19 = puVar20;
  func_0x00010bf51e00();
  _objc_release(puVar20);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar20 = PTR_PTR_1126add78;
    func_0x00010bf0a0a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar20 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010c0d8420();
      puVar13 = puVar20;
      _objc_retain();
      puVar19 = puVar13;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (puVar19 != (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(puVar13);
          }
          puVar14 = PTR_PTR_1126adf80;
          _objc_alloc(PTR_PTR_1126adf80);
          func_0x00010c020680();
          func_0x00010bf09f20(PTR_PTR_1126add78);
          _objc_release(puVar14);
          puVar22 = puVar22 + 1;
        } while (puVar19 != puVar22);
        puVar19 = puVar13;
        func_0x00010bf52a60();
      }
      _objc_release(puVar13);
      ppuVar16 = &PTR___NSConcreteGlobalBlock_1107b9ce0;
      func_0x00010c246ba0(puVar12);
      puVar19 = puVar12;
      func_0x00010bf51e00();
      _objc_release(puVar12);
    }
    _objc_release(puVar20);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      _objc_retain();
      _objc_retain();
      lVar15 = param_2;
      func_0x00010bf50c20();
      ppuVar4 = ppuVar16;
      func_0x00010bf50c20();
      if (lVar15 < (long)ppuVar4) {
        puVar20 = (undefined *)0x1;
      }
      else {
        lVar15 = param_2;
        func_0x00010bf50c20(param_2);
        ppuVar4 = ppuVar16;
        func_0x00010bf50c20(ppuVar16);
        puVar20 = (undefined *)-(ulong)((long)ppuVar4 < lVar15);
      }
      _objc_release(ppuVar16);
      _objc_release(param_2);
      return puVar20;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return puVar19;
}



/* Entry: 10497eb58; end: 10497ece3; +[FBSDKSKAdNetworkConversionConfiguration parseRules:] */

undefined * FUN_10497eb58(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126add78;
  func_0x00010bf0a0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    puVar3 = puVar8;
    _objc_retain();
    puVar7 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        puVar4 = PTR_PTR_1126adf80;
        _objc_alloc(PTR_PTR_1126adf80);
        func_0x00010c020680();
        func_0x00010bf09f20(PTR_PTR_1126add78);
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar7 != puVar9);
      puVar7 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    param_3 = &PTR___NSConcreteGlobalBlock_1107b9ce0;
    func_0x00010c246ba0(puVar2);
    puVar7 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  lVar6 = param_2;
  func_0x00010bf50c20();
  ppuVar5 = param_3;
  func_0x00010bf50c20();
  if (lVar6 < (long)ppuVar5) {
    puVar8 = (undefined *)0x1;
  }
  else {
    lVar6 = param_2;
    func_0x00010bf50c20(param_2);
    ppuVar5 = param_3;
    func_0x00010bf50c20(param_3);
    puVar8 = (undefined *)-(ulong)((long)ppuVar5 < lVar6);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar8;
}



/* Entry: 10497ece4; end: 10497ed73;  */

long FUN_10497ece4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain();
  lVar2 = param_2;
  func_0x00010bf50c20();
  lVar1 = param_3;
  func_0x00010bf50c20();
  if (lVar2 < lVar1) {
    lVar2 = 1;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf50c20(param_2);
    lVar1 = param_3;
    func_0x00010bf50c20(param_3);
    lVar2 = -(ulong)(lVar1 < lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 10497ed74; end: 10497eeff; +[FBSDKSKAdNetworkConversionConfiguration parseLockWindowRules:] */

undefined * FUN_10497ed74(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126add78;
  func_0x00010bf0a0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    puVar3 = puVar8;
    _objc_retain();
    puVar7 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        puVar4 = PTR_PTR_1126adf88;
        _objc_alloc(PTR_PTR_1126adf88);
        func_0x00010c020680();
        func_0x00010bf09f20(PTR_PTR_1126add78);
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar7 != puVar9);
      puVar7 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    param_3 = &PTR___NSConcreteGlobalBlock_1107b9d20;
    func_0x00010c246ba0(puVar2);
    puVar7 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  lVar6 = param_2;
  func_0x00010c105640();
  ppuVar5 = param_3;
  func_0x00010c105640();
  if (lVar6 < (long)ppuVar5) {
    puVar8 = (undefined *)0xffffffffffffffff;
  }
  else {
    lVar6 = param_2;
    func_0x00010c105640(param_2);
    ppuVar5 = param_3;
    func_0x00010c105640(param_3);
    puVar8 = (undefined *)(ulong)((long)ppuVar5 < lVar6);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar8;
}



/* Entry: 10497ef00; end: 10497ef8f;  */

ulong FUN_10497ef00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c105640();
  lVar2 = param_3;
  func_0x00010c105640();
  if (lVar1 < lVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_2;
    func_0x00010c105640(param_2);
    lVar2 = param_3;
    func_0x00010c105640(param_3);
    uVar3 = (ulong)(lVar2 < lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10497ef90; end: 10497f11b; +[FBSDKSKAdNetworkConversionConfiguration parseCoarseCvConfigs:] */

undefined * FUN_10497ef90(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126add78;
  func_0x00010bf0a0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    puVar3 = puVar8;
    _objc_retain();
    puVar7 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        puVar4 = PTR_PTR_1126adf60;
        _objc_alloc(PTR_PTR_1126adf60);
        func_0x00010c020680();
        func_0x00010bf09f20(PTR_PTR_1126add78);
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar7 != puVar9);
      puVar7 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    param_3 = &PTR___NSConcreteGlobalBlock_1107b9d60;
    func_0x00010c246ba0(puVar2);
    puVar7 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  lVar6 = param_2;
  func_0x00010c105640();
  ppuVar5 = param_3;
  func_0x00010c105640();
  if (lVar6 < (long)ppuVar5) {
    puVar8 = (undefined *)0xffffffffffffffff;
  }
  else {
    lVar6 = param_2;
    func_0x00010c105640(param_2);
    ppuVar5 = param_3;
    func_0x00010c105640(param_3);
    puVar8 = (undefined *)(ulong)((long)ppuVar5 < lVar6);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar8;
}



/* Entry: 10497f11c; end: 10497f1ab;  */

ulong FUN_10497f11c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c105640();
  lVar2 = param_3;
  func_0x00010c105640();
  if (lVar1 < lVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_2;
    func_0x00010c105640(param_2);
    lVar2 = param_3;
    func_0x00010c105640(param_3);
    uVar3 = (ulong)(lVar2 < lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10497f1ac; end: 10497f1b3; -[FBSDKSKAdNetworkConversionConfiguration timerBuckets] */

undefined8 FUN_10497f1ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10497f1b4; end: 10497f1bb; -[FBSDKSKAdNetworkConversionConfiguration timerInterval] */

undefined8 FUN_10497f1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10497f1bc; end: 10497f1c3; -[FBSDKSKAdNetworkConversionConfiguration cutoffTime] */

undefined8 FUN_10497f1bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10497f1c4; end: 10497f1cb; -[FBSDKSKAdNetworkConversionConfiguration defaultCurrency] */

undefined8 FUN_10497f1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10497f1cc; end: 10497f1d3; -[FBSDKSKAdNetworkConversionConfiguration conversionValueRules] */

undefined8 FUN_10497f1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10497f1d4; end: 10497f1db; -[FBSDKSKAdNetworkConversionConfiguration eventSet] */

undefined8 FUN_10497f1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10497f1dc; end: 10497f1e3; -[FBSDKSKAdNetworkConversionConfiguration currencySet] */

undefined8 FUN_10497f1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10497f1e4; end: 10497f1eb; -[FBSDKSKAdNetworkConversionConfiguration coarseEventSet] */

undefined8 FUN_10497f1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10497f1ec; end: 10497f1f3; -[FBSDKSKAdNetworkConversionConfiguration coarseCurrencySet] */

undefined8 FUN_10497f1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10497f1f4; end: 10497f1fb; -[FBSDKSKAdNetworkConversionConfiguration lockWindowRules] */

undefined8 FUN_10497f1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10497f1fc; end: 10497f203; -[FBSDKSKAdNetworkConversionConfiguration coarseCvConfigs] */

undefined8 FUN_10497f1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10497f204; end: 10497f20b; -[FBSDKSKAdNetworkConversionConfiguration isCoarseCVAccumulative] */

undefined1 FUN_10497f204(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10497f20c; end: 10497f283; -[FBSDKSKAdNetworkConversionConfiguration .cxx_destruct] */

void FUN_10497f20c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10497f284; end: 10497f50b; -[FBSDKSKAdNetworkLockWindowRule initWithJSON:] */

undefined1 * FUN_10497f284(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e3430;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_10497f448:
    puVar7 = (undefined1 *)puVar1;
    _objc_retain(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126add78;
    if (puVar2 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_10497f464;
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126adf70;
    puVar5 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010bf71e60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    if (((((puVar3 != (undefined *)0x0) && (puVar5 != (undefined *)0x0)) &&
         (puVar2 = puVar3, func_0x00010c08fa60(), puVar2 != (undefined *)0x0)) &&
        ((puVar2 = puVar3, func_0x00010c071ae0(), (int)puVar2 == 0 || (puVar4 != (undefined *)0x0)))
        ) && ((puVar2 = puVar3, func_0x00010c071ae0(), (int)puVar2 == 0 ||
              ((puVar6 != (undefined *)0x0 &&
               (puVar2 = puVar6, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)))))) {
      uVar8 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
      _objc_retain(puVar3);
      _objc_release(uVar8);
      puVar2 = puVar4;
      func_0x00010c067fc0();
      uVar8 = *(undefined8 *)((long)puVar1 + 0x18);
      *(undefined **)((long)puVar1 + 0x10) = puVar2;
      *(undefined **)((long)puVar1 + 0x18) = puVar6;
      _objc_release(uVar8);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010c067fc0();
      *(undefined **)((long)puVar1 + 0x20) = puVar3;
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_10497f448;
    }
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar7 = (undefined1 *)0x0;
  }
  _objc_release(param_3);
LAB_10497f464:
  _objc_release(puVar1);
  return puVar7;
}



/* Entry: 10497f50c; end: 10497f513; -[FBSDKSKAdNetworkLockWindowRule lockWindowType] */

undefined8 FUN_10497f50c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10497f514; end: 10497f51f; -[FBSDKSKAdNetworkLockWindowRule setLockWindowType:] */

void FUN_10497f514(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10497f520; end: 10497f527; -[FBSDKSKAdNetworkLockWindowRule time] */

undefined8 FUN_10497f520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10497f528; end: 10497f52f; -[FBSDKSKAdNetworkLockWindowRule setTime:] */

void FUN_10497f528(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10497f530; end: 10497f537; -[FBSDKSKAdNetworkLockWindowRule events] */

undefined8 FUN_10497f530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10497f538; end: 10497f53f; -[FBSDKSKAdNetworkLockWindowRule postbackSequenceIndex] */

undefined8 FUN_10497f538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10497f540; end: 10497f547; -[FBSDKSKAdNetworkLockWindowRule setPostbackSequenceIndex:] */

void FUN_10497f540(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10497f548; end: 10497f577; -[FBSDKSKAdNetworkLockWindowRule .cxx_destruct] */

void FUN_10497f548(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10497f578; end: 10497f62b; -[FBSDKSKAdNetworkReporter initWithGraphRequestFactory:dataStore:conversionValueUpdater:] */

undefined1 *
FUN_10497f578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126e3438;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x18),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x20),param_5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 10497f62c; end: 10497f7a3; -[FBSDKSKAdNetworkReporter enable] */

void FUN_10497f62c(undefined8 param_1)

{
  int iVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10497f6bc;
    puStack_30 = &UNK_110842e18;
    if (lRam000000011369d4e8 != -1) {
      uStack_28 = param_1;
      func_0x00010002a2fc(0x11369d4e8,&puStack_48);
    }
  }
  return;
}



/* Entry: 10497f7a4; end: 10497f827; -[FBSDKSKAdNetworkReporter checkAndRevokeTimer] */

void FUN_10497f7a4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if ((iVar1 != 0) && (uVar2 = param_1, func_0x00010c07cdc0(), (int)uVar2 != 0)) {
    func_0x00010be4ce00(param_1);
  }
  return;
}



/* Entry: 10497f828; end: 10497f82f;  */

void FUN_10497f828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkAndRevokeTimer_112554e70);
  return;
}



/* Entry: 10497f830; end: 10497f833; -[FBSDKSKAdNetworkReporter recordAndUpdateEvent:currency:value:parameters:] */

void FUN_10497f830(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c123490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_recordAndUpdateEvent_currency_va_112626740);
  return;
}



/* Entry: 10497f834; end: 10497f94b; -[FBSDKSKAdNetworkReporter recordAndUpdateEvent:currency:value:] */

void FUN_10497f834(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (((iVar1 != 0) && (uVar2 = param_1, func_0x00010c07cdc0(), (int)uVar2 != 0)) &&
     (lVar3 = param_3, func_0x00010c08fa60(), lVar3 != 0)) {
    lVar3 = param_3;
    _objc_retain();
    uVar2 = param_4;
    _objc_retain();
    uVar4 = param_5;
    _objc_retain();
    func_0x00010be4ce00(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10497f94c; end: 10497f95b;  */

void FUN_10497f94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordAndUpdateEvent_currency_v_11257f6b0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10497f95c; end: 10497fad7; -[FBSDKSKAdNetworkReporter _loadConfigurationWithBlock:] */

void FUN_10497f95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar5 = &puStack_90;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c15e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_10497fabc;
  lVar1 = param_1;
  func_0x00010be3f140();
  lVar3 = param_1;
  if ((int)lVar1 == 0) {
LAB_10497fa44:
    func_0x00010c15e780(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10497fc3c;
    puStack_78 = &UNK_11084aaa8;
    puVar6 = &uStack_68;
    uVar4 = param_3;
    lStack_70 = param_1;
    _objc_retain();
    uStack_68 = uVar4;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf64720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_10497fa44;
    func_0x00010c15e780(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10497fad8;
    puStack_48 = &UNK_11084aaa8;
    puVar6 = &uStack_38;
    uVar4 = param_3;
    lStack_40 = param_1;
    _objc_retain();
    ppuVar5 = &puStack_60;
    uStack_38 = uVar4;
  }
  func_0x00010bf851a0(param_1,param_2,lVar3,ppuVar5);
  _objc_release(lVar3);
  _objc_release(*puVar6);
LAB_10497fabc:
  _objc_release(param_3);
  return;
}



/* Entry: 10497fad8; end: 10497fc3b;  */

void FUN_10497fad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar6 = PTR_PTR_1126add78;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock();
  func_0x00010bf09f20(puVar6,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar10 = *plStack_100;
    do {
      unaff_x23 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        (**(code **)(*(long *)(lStack_108 + (long)unaff_x23 * 8) + 0x10))();
        unaff_x23 = unaff_x23 + 1;
      } while (puVar6 != unaff_x23);
      puVar6 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  lVar10 = *(long *)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126add78;
  pcStack_118 = FUN_10497fc3c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = *(undefined ***)(lVar10 + 0x20);
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = *(undefined ***)(lVar10 + 0x28);
  _objc_retainBlock();
  ppuVar8 = ppuVar4;
  ppuVar9 = ppuVar5;
  func_0x00010bf09f20(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  puVar3 = *(undefined **)(lVar10 + 0x20);
  func_0x00010c07c620();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c1b3e80(*(undefined8 *)(lVar10 + 0x20),param_2,1);
    puVar6 = *(undefined **)(lVar10 + 0x20);
    func_0x00010bfcde20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar4 = (undefined **)PTR_PTR_1126ade50;
    func_0x00010c22bfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c0 = ppuVar5;
    func_0x00010c25d9e0(unaff_x23,param_2,&PTR____CFConstantStringClassReference_110da5978);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_188 = &PTR____CFConstantStringClassReference_110dd5c18;
    unaff_x24 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = unaff_x24;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_180 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_180,&ppuStack_188,
                        1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    ppuVar9 = ppuVar8;
    func_0x00010bf565e0(puVar6,param_2,unaff_x23,ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(puVar7);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar6);
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_10497fe74;
    puStack_198 = &UNK_1107b94c8;
    uStack_190 = *(undefined8 *)(lVar10 + 0x20);
    ppuVar8 = &puStack_1b0;
    func_0x00010c251a80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_10497fe74;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  ppuStack_1f0 = ppuVar5;
  ppuStack_1e8 = ppuVar4;
  puStack_1e0 = puVar6;
  lStack_1d8 = lVar10;
  ppuStack_1d0 = &puStack_120;
  _objc_retain();
  _objc_retain();
  uVar2 = *(undefined8 *)(puVar3 + 0x20);
  uVar1 = uVar2;
  func_0x00010c15e780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_10497ff64;
  puStack_220 = &UNK_110848ba8;
  uStack_210 = *(undefined8 *)(puVar3 + 0x20);
  ppuStack_218 = ppuVar9;
  ppuStack_208 = ppuVar8;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar9);
  func_0x00010bf851a0(uVar2,param_2,uVar1,&puStack_238);
  _objc_release(uVar1);
  _objc_release(ppuStack_208);
  _objc_release(ppuStack_218);
  _objc_release(ppuVar8);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 10497fc3c; end: 10497fe73;  */

void FUN_10497fc3c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar4 = PTR_PTR_1126add78;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = *(undefined ***)(param_1 + 0x28);
  _objc_retainBlock();
  ppuVar6 = ppuVar1;
  ppuVar7 = ppuVar2;
  func_0x00010bf09f20(puVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010c07c620();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c1b3e80(*(undefined8 *)(param_1 + 0x20),param_2,1);
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfcde20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar1 = (undefined **)PTR_PTR_1126ade50;
    func_0x00010c22bfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = ppuVar2;
    func_0x00010c25d9e0(unaff_x23,param_2,&PTR____CFConstantStringClassReference_110da5978);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dd5c18;
    unaff_x24 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = unaff_x24;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    ppuVar7 = ppuVar6;
    func_0x00010bf565e0(puVar4,param_2,unaff_x23,ppuVar6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _objc_release(puVar4);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10497fe74;
    puStack_88 = &UNK_1107b94c8;
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    ppuVar6 = &puStack_a0;
    func_0x00010c251a80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10497fe74;
  puStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  ppuStack_e0 = ppuVar2;
  ppuStack_d8 = ppuVar1;
  puStack_d0 = puVar4;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  uVar9 = *(undefined8 *)(puVar3 + 0x20);
  uVar8 = uVar9;
  func_0x00010c15e780(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10497ff64;
  puStack_110 = &UNK_110848ba8;
  uStack_100 = *(undefined8 *)(puVar3 + 0x20);
  ppuStack_108 = ppuVar7;
  ppuStack_f8 = ppuVar6;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  func_0x00010bf851a0(uVar9,param_2,uVar8,&puStack_128);
  _objc_release(uVar8);
  _objc_release(ppuStack_f8);
  _objc_release(ppuStack_108);
  _objc_release(ppuVar6);
  _objc_release(ppuVar7);
  return;
}



/* Entry: 10497fe74; end: 10497ff63;  */

void FUN_10497fe74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010c15e780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10497ff64;
  puStack_60 = &UNK_110848ba8;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf851a0(uVar2,param_2,uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}


