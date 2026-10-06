/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054049b4; end: 105404caf; -[SCUnauthenticatedPhoneService _handleUpdatePhoneNumberWithResponse:error:phoneNumber:clientRequestId:submitRequestTime:successBlock:failureBlock:] */

void FUN_1054049b4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x00010c252ee0(param_3);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c0adac0(uVar2);
  _objc_release(param_6);
  _objc_release(uVar2);
  if (param_4 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010c252ee0();
    iVar1 = (int)puVar3;
    puVar3 = param_3;
    puVar5 = param_3;
    if (iVar1 < 2) {
      if ((iVar1 != -0x4524111) && (iVar1 != 0)) {
        if (iVar1 != 1) goto LAB_105404b40;
        func_0x00010c2617a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0fb300();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2617a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf10980();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_7 + 0x10))(param_7,1,0,param_5,0,puVar4,puVar6);
        goto LAB_105404c9c;
      }
LAB_105404af4:
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfe4e60();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_8 + 0x10))(param_8,param_5,puVar4,0);
    }
    else {
      if (iVar1 - 6U < 7) goto LAB_105404af4;
      if (iVar1 != 2) goto LAB_105404b40;
      puVar4 = param_3;
      func_0x00010c0b3ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      FUN_10540c8f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126afc68;
      func_0x00010c0b3ec0(PTR_PTR_1126afc68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfe4e60();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_8 + 0x10))(param_8,param_5,puVar6,puVar4);
LAB_105404c9c:
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
  }
  else {
    puVar3 = param_4;
    func_0x00010c09e4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_8 + 0x10))(param_8,param_5,puVar3,0);
  }
  _objc_release(puVar3);
LAB_105404b40:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105404cb0; end: 105404f57; -[SCUnauthenticatedPhoneService _handleVerifyPhoneWithCodeResponse:error:authSessionPayload:clientRequestId:submitRequestTime:successBlock:failureBlock:] */

void FUN_105404cb0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x00010c252ee0(param_3);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c0adac0(uVar2);
  _objc_release(param_6);
  _objc_release(uVar2);
  if (param_4 == 0) {
    lVar3 = param_3;
    func_0x00010c252ee0();
    uVar1 = (uint)lVar3;
    lVar3 = param_3;
    if (uVar1 < 0xb) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x6c1U) != 0) goto LAB_105404df0;
      if (uVar1 != 1) {
        if (uVar1 != 8) goto LAB_105404ecc;
        func_0x00010bf98a00(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfe4e60();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = *(code **)(param_8 + 0x10);
        uVar2 = 0;
        goto LAB_105404e2c;
      }
      func_0x00010c2617a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0fb300();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c2617a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf10980();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_7 + 0x10))(param_7,0,0,lVar4,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    else {
LAB_105404ecc:
      if (uVar1 != 0xfbadbeef) goto LAB_105404e44;
LAB_105404df0:
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfe4e60();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = *(code **)(param_8 + 0x10);
      uVar2 = 1;
LAB_105404e2c:
      (*pcVar7)(param_8,lVar4,PTR____kCFBooleanFalse_11034ab60,uVar2,0);
    }
    _objc_release(lVar4);
  }
  else {
    lVar3 = param_4;
    func_0x00010c09e4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_8 + 0x10))(param_8,lVar3,PTR____kCFBooleanTrue_11034ab68,1,0);
  }
  _objc_release(lVar3);
LAB_105404e44:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105404f58; end: 105404fd7; -[SCUnauthenticatedPhoneService _carrierCountryCodeFromSIM] */

void FUN_105404f58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf32ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105404fd8; end: 105405097; -[SCUnauthenticatedPhoneService .cxx_destruct] */

void FUN_105404fd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105405098; end: 105405293; -[SCGrpcEmailService initWithClientIdProvider:performerProvider:grpcClientFactory:registrationLogger:networkLoggingService:hostnameFetchBlock:] */

undefined8 *
FUN_105405098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e8378;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105405294; end: 1054052db;  */

void FUN_105405294(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc4020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054052dc; end: 105405727; -[SCGrpcEmailService updateEmail:emailMutatorType:successBlock:failureBlock:] */

void FUN_1054052dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x000105405408(param_4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8b00;
  func_0x00010c0cb140(PTR_PTR_1126b8b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec2c0();
  _objc_release(param_3);
  func_0x00010c161620(puVar1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bed75c0(param_1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105405728; end: 10540593b; -[SCGrpcEmailService requestEmailVerificationWithType:onComplete:] */

void FUN_105405728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x000105405408(param_3,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8b00;
  func_0x00010c0cb140(PTR_PTR_1126b8b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620();
  _objc_retain(param_4);
  func_0x00010bed75c0(param_1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10540593c; end: 105405cdf; -[SCGrpcEmailService _updateEmailWithRequest:networkLoggingExtraFields:onCompletion:] */

void FUN_10540593c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aaea0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a40(param_4);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dacc0(param_4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c17ce20(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c16c6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af528;
  func_0x00010c1368c0(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aaea0(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_initWeak(auStack_78,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c285700(uVar2);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105405ce0; end: 105405d53;  */

void FUN_105405ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed7580(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105405d54; end: 105405f63; -[SCGrpcEmailService _updateEmailCompleteWithResponse:error:clientNetworkRequestId:submitRequestTime:networkLoggingExtraFields:onCompletion:] */

void FUN_105405d54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x00010c252ee0();
  if ((int)uVar2 == 1) {
    bVar1 = true;
  }
  else {
    uVar2 = param_3;
    func_0x00010c252ee0();
    bVar1 = (int)uVar2 == 2;
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c0adac0(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aaea0();
  _objc_release(uVar2);
  if (bVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aaea0(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  (**(code **)(param_7 + 0x10))(param_7,param_3,param_4);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105405f64; end: 1054060cb; -[SCGrpcEmailService _accountEmailService:] */

void FUN_105405f64(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c196320(puVar2,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c1eeba0(puVar2,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b8b08;
  _objc_alloc(PTR_PTR_1126b8b08);
  func_0x00010c058f80();
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054060cc; end: 10540612b; -[SCGrpcEmailService .cxx_destruct] */

void FUN_1054060cc(long param_1)

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



/* Entry: 10540612c; end: 10540641f; -[SCUnauthenticatedEmailService initWithUnifiedGrpcJanusRegistrationService:deviceIdentifierProvider:authenticationSessionInfoProvider:registrationFlowUUIDService:deviceToken:deviceCheckManager:carrierNetworkInfoProvider:networkConnectivityMonitor:circumstanceEngine:clientIdProvider:registrationLogger:clientRequestIdProvider:cloudAccountIdProvider:] */

undefined8 *
FUN_10540612c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e8380;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    uVar2 = param_14;
    _objc_retainBlock();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
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
  return puVar1;
}



/* Entry: 105406420; end: 10540656f; -[SCUnauthenticatedEmailService updateEmail:emailMutatorType:successBlock:failureBlock:] */

void FUN_105406420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfa6480(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105406570; end: 105406693;  */

void FUN_105406570(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010bf46540(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105406694; end: 1054066eb;  */

void FUN_105406694(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054066ec; end: 10540699f; -[SCUnauthenticatedEmailService _checkEmail:deviceCheckToken:cofEtag:successBlock:failureBlock:] */

void FUN_1054066ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_2 + 0x60);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b8b10;
  func_0x00010c0cb140(PTR_PTR_1126b8b10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x20;
  FUN_1054087c4(0x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x48),uVar3,lVar1,
                *(undefined8 *)(param_2 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e97a0(puVar4);
  _objc_release(uVar2);
  func_0x00010c194080(puVar4);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  FUN_105407d00(uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(lVar1);
  uStack_80 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf37dc0(uVar5);
  _objc_release(uVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054069a0; end: 105406a13;  */

void FUN_1054069a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be27200(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105406a14; end: 105406c33; -[SCUnauthenticatedEmailService _handleCheckEmailWithResponse:error:clientRequestId:submitRequestTime:successBlock:failureBlock:] */

void FUN_105406a14(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c252ee0(param_3);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010c252ee0(param_3);
  func_0x00010c0adac0(uVar2);
  _objc_release(param_5);
  _objc_release(uVar2);
  if ((param_3 == 0) || (param_4 != 0)) {
LAB_105406b98:
    (**(code **)(param_6 + 0x10))(param_6);
    goto LAB_105406ba4;
  }
  lVar3 = param_3;
  func_0x00010c252ee0();
  iVar1 = (int)lVar3;
  if (iVar1 < 2) {
    if ((iVar1 != -0x4524111) && (iVar1 != 0)) {
      if (iVar1 != 1) goto LAB_105406ba4;
      goto LAB_105406b98;
    }
LAB_105406b20:
    lVar4 = param_3;
    func_0x00010bf98a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bfe4e60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,0,0,0,0,0,lVar3);
    _objc_release(lVar3);
  }
  else {
    if (iVar1 - 6U < 6) goto LAB_105406b20;
    if (iVar1 != 2) goto LAB_105406ba4;
    lVar3 = param_3;
    func_0x00010c0b3ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_10540c8f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    (**(code **)(param_7 + 0x10))(param_7,lVar4,0,0,0,0,0);
  }
  _objc_release(lVar4);
LAB_105406ba4:
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105406c34; end: 105406ce7; -[SCUnauthenticatedEmailService .cxx_destruct] */

void FUN_105406c34(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105406ce8; end: 105406d5b; -[UNISCAccountEmailServicePbAccountEmailService initWithUnifiedGrpcService:] */

undefined1 * FUN_105406ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8388;
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



/* Entry: 105406d5c; end: 105406e3f; -[UNISCAccountEmailServicePbAccountEmailService updateEmailWithRequest:callOptionsBuilder:handler:] */

void FUN_105406d5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b18;
  _objc_opt_class(PTR_PTR_1126b8b18);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9b78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105406e40; end: 105406f23; -[UNISCAccountEmailServicePbAccountEmailService confirmEmailWithRequest:callOptionsBuilder:handler:] */

void FUN_105406e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b20;
  _objc_opt_class(PTR_PTR_1126b8b20);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9bd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105406f24; end: 105406f83; -[UNISCAccountEmailServicePbAccountEmailService .cxx_destruct] */

void FUN_105406f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105406f84; end: 105406ff7; -[UNISCJanusRegistrationService initWithUnifiedGrpcService:] */

undefined1 * FUN_105406f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8390;
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



/* Entry: 105406ff8; end: 1054070db; -[UNISCJanusRegistrationService registerWithUsernamePasswordWithRequest:callOptionsBuilder:handler:] */

void FUN_105406ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b28;
  _objc_opt_class(PTR_PTR_1126b8b28);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd4778,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054070dc; end: 1054071bf; -[UNISCJanusRegistrationService appRegisterAnswerChallengeWithRequest:callOptionsBuilder:handler:] */

void FUN_1054070dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b30;
  _objc_opt_class(PTR_PTR_1126b8b30);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9c18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054071c0; end: 1054072a3; -[UNISCJanusRegistrationService webRegisterWithRequest:callOptionsBuilder:handler:] */

void FUN_1054071c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b38;
  _objc_opt_class(PTR_PTR_1126b8b38);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9c38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054072a4; end: 105407387; -[UNISCJanusRegistrationService webRegisterVerifyChallengeWithRequest:callOptionsBuilder:handler:] */

void FUN_1054072a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b40;
  _objc_opt_class(PTR_PTR_1126b8b40);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9c58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105407388; end: 10540746b; -[UNISCJanusRegistrationService webRegisterRequestChallengeWithRequest:callOptionsBuilder:handler:] */

void FUN_105407388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b48;
  _objc_opt_class(PTR_PTR_1126b8b48);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9c78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540746c; end: 10540754f; -[UNISCJanusRegistrationService registerWithGoogleWithRequest:callOptionsBuilder:handler:] */

void FUN_10540746c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b50;
  _objc_opt_class(PTR_PTR_1126b8b50);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd47d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105407550; end: 105407633; -[UNISCJanusRegistrationService getPreferredVerificationMethodWithRequest:callOptionsBuilder:handler:] */

void FUN_105407550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b58;
  _objc_opt_class(PTR_PTR_1126b8b58);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9c98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105407634; end: 105407717; -[UNISCJanusRegistrationService checkEmailWithRequest:callOptionsBuilder:handler:] */

void FUN_105407634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b60;
  _objc_opt_class(PTR_PTR_1126b8b60);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9bb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105407718; end: 1054077fb; -[UNISCJanusRegistrationService requestPhoneVerificationCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_105407718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b68;
  _objc_opt_class(PTR_PTR_1126b8b68);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9b18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054077fc; end: 1054078df; -[UNISCJanusRegistrationService verifyPhoneWithCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_1054077fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b70;
  _objc_opt_class(PTR_PTR_1126b8b70);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd9b38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054078e0; end: 1054079c3; -[UNISCJanusRegistrationService registerWithPhoneEmailWithRequest:callOptionsBuilder:handler:] */

void FUN_1054078e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b78;
  _objc_opt_class(PTR_PTR_1126b8b78);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd4798,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054079c4; end: 105407aa7; -[UNISCJanusRegistrationService registerOAuthWithRequest:callOptionsBuilder:handler:] */

void FUN_1054079c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b8b80;
  _objc_opt_class(PTR_PTR_1126b8b80);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd47b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105407aa8; end: 105407ab3; -[UNISCJanusRegistrationService .cxx_destruct] */

void FUN_105407aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105407ab4; end: 105407b73;  */

void FUN_105407ab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105407b74; end: 105407cff;  */

void FUN_105407b74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010540a2f8(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,30000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "com.snapchat.janus.RegistrationServiceGRPCClient");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar3,param_2,puVar4,0x19,0,0x17);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcfa00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b8b88;
  _objc_alloc(PTR_PTR_1126b8b88);
  func_0x00010c058f80();
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105407d00; end: 10540818f;  */

void FUN_105407d00(double param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined4 uVar23;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  double dStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126ae748;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar2;
  func_0x00010c16c6a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar2;
  func_0x00010c1eeba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010befab20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dd9d18;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd9d38;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd9cb8;
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  param_1 = param_1 * 1000.0;
  dStack_a0 = param_1;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0d3c80();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release();
  func_0x000105406f6c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000105406f6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release();
  }
  func_0x000105406f48();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000105406f48();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release();
  }
  func_0x000105406f54();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000105406f54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release();
  }
  func_0x000105406f60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000105406f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release();
  }
  func_0x000105406f78();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  puVar8 = puVar6;
  _objc_release();
  if (puVar7 != (undefined *)0x0) {
    func_0x000105406f78();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release(puVar8);
    puVar6 = puVar8;
  }
  uVar10 = param_2;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c08fa60();
  if (uVar11 != 0) {
    func_0x00010c1d0640(puVar9);
  }
  ppuVar22 = (undefined **)0x1;
  uVar23 = 0;
  uVar11 = param_2;
  func_0x00010bf1f440();
  if (((uVar11 & 1) != 0) || (lVar12 = param_3, func_0x00010bfa2380(), (int)lVar12 != 0)) {
    ppuVar22 = &PTR____CFConstantStringClassReference_110dda238;
    func_0x00010c1d0640(puVar9);
  }
  _objc_release(uVar10);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar8 = puVar5;
  puVar21 = puVar9;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_98);
  puVar4 = puStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_105408190;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_e0 = puVar3;
    puStack_d8 = puVar2;
    lStack_d0 = param_3;
    puStack_c8 = puVar8;
    puStack_c0 = puVar7;
    puStack_b8 = puVar6;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(lVar20);
    if (lVar20 == 0) {
      _objc_retain(puVar4);
      puVar8 = puVar4;
    }
    else {
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR_PTR_1126ae748;
        func_0x00010bf24820();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110dd9cf8;
      lVar12 = lVar20;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = (undefined **)&ppuStack_f8;
      uVar23 = 1;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_f0 = lVar12;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      puVar21 = puVar7;
      func_0x00010bef9140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar12);
    }
    _objc_release(lVar20);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      puVar3 = puStack_c0;
      lVar1 = lStack_d0;
      puVar2 = puStack_d8;
      puVar7 = puStack_e0;
      lVar12 = lStack_e8;
      lVar20 = lStack_f0;
      ppuVar16 = ppuStack_f8;
      _objc_retain(puVar21);
      _objc_retain(in_x6);
      _objc_retain(lVar20);
      _objc_retain(puVar3);
      _objc_retain(lVar1);
      _objc_retain(puVar2);
      _objc_retain(puVar7);
      _objc_retain(lVar12);
      _objc_retain(ppuVar16);
      _objc_retain(uStack_100);
      _objc_retain(in_x7);
      _objc_retain(in_x5);
      _objc_retain(ppuVar22);
      puVar8 = PTR_PTR_1126b8b90;
      func_0x00010c0cb140(PTR_PTR_1126b8b90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c171a40();
      _objc_release(puVar7);
      uVar13 = uStack_100;
      func_0x00010c269d40(uStack_100);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_100);
      uVar14 = uVar13;
      func_0x00010bfcb960(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9800(puVar8);
      _objc_release(uVar14);
      _objc_release(uVar13);
      func_0x00010c1cc560(puVar8);
      _objc_release(puVar2);
      ppuVar15 = ppuVar16;
      func_0x00010c269d40(ppuVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar16);
      ppuVar16 = ppuVar15;
      func_0x00010c15ffa0(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c8e0(puVar8);
      _objc_release(ppuVar16);
      _objc_release(ppuVar15);
      func_0x00010c1aee20(puVar8);
      _objc_release(ppuVar22);
      uVar13 = in_x7;
      func_0x00010c269d40(in_x7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(in_x7);
      uVar14 = uVar13;
      func_0x00010c25d160(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17de60(puVar8);
      _objc_release(uVar14);
      _objc_release(uVar13);
      ppuVar22 = &PTR____CFConstantStringClassReference_110daafd8;
      func_0x00010c08fa60();
      if (ppuVar22 != (undefined **)0x0) {
        func_0x00010c17de60(puVar8);
      }
      func_0x00010c19b6c0(puVar8);
      uVar13 = in_x5;
      FUN_10540b9f4(in_x5,uVar23);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(in_x5);
      func_0x00010c17dfe0(puVar8);
      _objc_release(uVar13);
      lVar17 = lVar12;
      func_0x00010bfca0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar12;
      func_0x00010bfca0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      puVar7 = PTR_PTR_1126b7828;
      func_0x00010bf529e0(lVar17);
      func_0x00010bf529e0(lVar18);
      func_0x00010bf0a0e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar17;
      func_0x00010bf529e0();
      if (lVar12 != 0) {
        func_0x00010befc860(puVar7);
      }
      lVar12 = lVar18;
      func_0x00010bf529e0();
      if (lVar12 != 0) {
        func_0x00010befc860(puVar7);
      }
      puVar2 = PTR_PTR_1126b7820;
      func_0x00010c0cb140(PTR_PTR_1126b7820);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcf40();
      func_0x00010c17de40(puVar8);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = PTR_PTR_1126afab0;
        func_0x00010c0cb140(PTR_PTR_1126afab0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0();
        func_0x00010c18cf20(puVar8);
        _objc_release(puVar5);
      }
      lVar12 = lVar20;
      func_0x00010c269d40(lVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df720(param_1 * 1000.0,puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar12;
      func_0x00010bfbf040(lVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(lVar12);
      func_0x00010c17ca60(puVar8);
      func_0x00010c2206e0(puVar8);
      _objc_release(lVar1);
      func_0x00010c16b4c0(puVar8);
      puVar5 = puVar3;
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010540bb20(puVar4);
      puVar3 = puVar5;
      func_0x00010bfc3c20(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17d780(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(lVar19);
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar20);
      _objc_release(in_x6);
      _objc_release(puVar21);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105408190; end: 1054082b7;  */

void FUN_105408190(double param_1,undefined *param_2,long param_3,undefined *param_4,
                  undefined ***param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    if (param_2 == (undefined *)0x0) {
      param_2 = PTR_PTR_1126ae748;
      func_0x00010bf24820();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dd9cf8;
    lVar1 = param_3;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = &ppuStack_58;
    param_6 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = lVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    param_4 = puVar2;
    func_0x00010bef9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar10 = lStack_48;
    lVar1 = lStack_50;
    ppuVar7 = ppuStack_58;
    _objc_retain(param_4);
    _objc_retain(param_8);
    _objc_retain(lVar1);
    _objc_retain(unaff_x20);
    _objc_retain(unaff_x22);
    _objc_retain(unaff_x23);
    _objc_retain(unaff_x24);
    _objc_retain(lVar10);
    _objc_retain(ppuVar7);
    _objc_retain(uStack_60);
    _objc_retain(param_9);
    _objc_retain(param_7);
    _objc_retain(param_5);
    puVar3 = PTR_PTR_1126b8b90;
    func_0x00010c0cb140(PTR_PTR_1126b8b90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171a40();
    _objc_release(unaff_x24);
    uVar4 = uStack_60;
    func_0x00010c269d40(uStack_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_60);
    uVar5 = uVar4;
    func_0x00010bfcb960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9800(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c1cc560(puVar3);
    _objc_release(unaff_x23);
    ppuVar6 = ppuVar7;
    func_0x00010c269d40(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar6;
    func_0x00010c15ffa0(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c8e0(puVar3);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    func_0x00010c1aee20(puVar3);
    _objc_release(param_5);
    uVar4 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_9);
    uVar5 = uVar4;
    func_0x00010c25d160(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17de60(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010c08fa60();
    if (ppuVar7 != (undefined **)0x0) {
      func_0x00010c17de60(puVar3);
    }
    func_0x00010c19b6c0(puVar3);
    uVar4 = param_7;
    FUN_10540b9f4(param_7,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00010c17dfe0(puVar3);
    _objc_release(uVar4);
    lVar8 = lVar10;
    func_0x00010bfca0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar10;
    func_0x00010bfca0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar2 = PTR_PTR_1126b7828;
    func_0x00010bf529e0(lVar8);
    func_0x00010bf529e0(lVar9);
    func_0x00010bf0a0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      func_0x00010befc860(puVar2);
    }
    lVar10 = lVar9;
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      func_0x00010befc860(puVar2);
    }
    puVar11 = PTR_PTR_1126b7820;
    func_0x00010c0cb140(PTR_PTR_1126b7820);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcf40();
    func_0x00010c17de40(puVar3);
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar12 & 1) == 0) {
      puVar12 = PTR_PTR_1126afab0;
      func_0x00010c0cb140(PTR_PTR_1126afab0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      func_0x00010c18cf20(puVar3);
      _objc_release(puVar12);
    }
    lVar10 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720(param_1 * 1000.0,puVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar10;
    func_0x00010bfbf040(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar13);
    _objc_release(lVar10);
    func_0x00010c17ca60(puVar3);
    func_0x00010c2206e0(puVar3);
    _objc_release(unaff_x22);
    func_0x00010c16b4c0(puVar3);
    uVar4 = unaff_x20;
    func_0x00010c269d40(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    func_0x00010540bb20(param_2);
    uVar5 = uVar4;
    func_0x00010bfc3c20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d780(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar14);
    _objc_release(puVar11);
    _objc_release(puVar2);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(param_8);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054082b8; end: 1054087c3;  */

void FUN_1054082b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_19);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b8b90;
  func_0x00010c0cb140(PTR_PTR_1126b8b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a40();
  _objc_release(param_14);
  uVar2 = param_10;
  func_0x00010c269d40(param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  uVar3 = uVar2;
  func_0x00010bfcb960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9800(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1cc560(puVar1);
  _objc_release(param_15);
  uVar2 = param_11;
  func_0x00010c269d40(param_11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  uVar3 = uVar2;
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c8e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1aee20(puVar1);
  _objc_release(param_5);
  uVar2 = param_9;
  func_0x00010c269d40(param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar3 = uVar2;
  func_0x00010c25d160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17de60(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar4 != (undefined **)0x0) {
    func_0x00010c17de60(puVar1);
  }
  func_0x00010c19b6c0(puVar1);
  uVar2 = param_7;
  FUN_10540b9f4(param_7,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c17dfe0(puVar1);
  _objc_release(uVar2);
  lVar5 = param_13;
  func_0x00010bfca0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_13;
  func_0x00010bfca0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  puVar7 = PTR_PTR_1126b7828;
  func_0x00010bf529e0(lVar5);
  func_0x00010bf529e0(lVar6);
  func_0x00010bf0a0e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    func_0x00010befc860(puVar7);
  }
  lVar8 = lVar6;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    func_0x00010befc860(puVar7);
  }
  puVar9 = PTR_PTR_1126b7820;
  func_0x00010c0cb140(PTR_PTR_1126b7820);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf40();
  func_0x00010c17de40(puVar1);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar10 & 1) == 0) {
    puVar10 = PTR_PTR_1126afab0;
    func_0x00010c0cb140(PTR_PTR_1126afab0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    func_0x00010c18cf20(puVar1);
    _objc_release(puVar10);
  }
  uVar2 = param_12;
  func_0x00010c269d40(param_12);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(param_1 * 1000.0,puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbf040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(uVar2);
  func_0x00010c17ca60(puVar1);
  func_0x00010c2206e0(puVar1);
  _objc_release(param_16);
  func_0x00010c16b4c0(puVar1);
  uVar2 = param_19;
  func_0x00010c269d40(param_19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_19);
  func_0x00010540bb20(param_2);
  uVar12 = uVar2;
  func_0x00010bfc3c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d780(puVar1);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054087c4; end: 1054089bf;  */

void FUN_1054087c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8b98;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a40();
  _objc_release(param_6);
  func_0x00010c17ce20(puVar1);
  _objc_release(param_7);
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bfcb960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9800(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c25d160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17de60(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17caa0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010540bb20(param_1);
  uVar3 = uVar2;
  func_0x00010bfc3c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d780(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054089c0; end: 105408a3b;  */

undefined * FUN_1054089c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bba50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd9dd8,
                        &UNK_10dda8e1c,&UNK_10dda8e38,3,FUN_105408a3c,0);
    do {
      if (puRam00000001136bba50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bba50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bba50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bba50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bba50;
}



/* Entry: 105408a3c; end: 105408a53;  */

uint FUN_105408a3c(uint param_1)

{
  return (uint)(param_1 < 0xb) & 0x403U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 105408a54; end: 105408abb; +[SCJanusGetPreferredVerificationMethodRequest descriptor] */

void FUN_105408a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a352e0,
                        &PTR____CFConstantStringClassReference_110dd9df8,
                        &PTR_s_snapchat_janus_api_1130d58b8,&PTR_s_appRegisterContext_1130d5910,3,
                        0x20,0x1c);
    puRam00000001136bba58 = puVar1;
  }
  return;
}



/* Entry: 105408abc; end: 105408b9f; +[SCJanusGetPreferredVerificationMethodResponse descriptor] */

void FUN_105408abc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35330,
                        &PTR____CFConstantStringClassReference_110dd9e18,
                        &PTR_s_snapchat_janus_api_1130d58b8,&PTR_s_statusCode_1130d58d0,2,0x10,0x1c)
    ;
    puRam00000001136bba60 = puVar1;
  }
  return;
}



/* Entry: 105408ba0; end: 105408bab;  */

bool FUN_105408ba0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 105408bac; end: 105408c37; +[SCJanusRegisterWithGoogleRequest descriptor] */

undefined * FUN_105408bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a353d0,
                        &PTR____CFConstantStringClassReference_110dd9e58,
                        &PTR_s_snapchat_janus_api_1130d5988,&PTR_s_idToken_1130d5a20,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bba70 = puVar1;
  }
  return puRam00000001136bba70;
}



/* Entry: 105408c38; end: 105408cc3; +[SCJanusRegisterWithGoogleResponse descriptor] */

undefined * FUN_105408c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35420,
                        &PTR____CFConstantStringClassReference_110dd9e78,
                        &PTR_s_snapchat_janus_api_1130d5988,&PTR_s_response_1130d59a0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bba78 = puVar1;
  }
  return puRam00000001136bba78;
}



/* Entry: 105408cc4; end: 105408d4f; +[SCJanusRegisterWithGoogleErrorResponse descriptor] */

undefined * FUN_105408cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35470,
                        &PTR____CFConstantStringClassReference_110dd9e98,
                        &PTR_s_snapchat_janus_api_1130d5988,&PTR_s_statusCode_1130d59e0,2,0x18,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bba80 = puVar1;
  }
  return puRam00000001136bba80;
}



/* Entry: 105408d50; end: 105408e03;  */

undefined * FUN_105408d50(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8ba0;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 105408e04; end: 105408e1f;  */

uint FUN_105408e04(uint param_1)

{
  return (uint)(param_1 < 0x1e) & 0x3ffff807U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 105408e20; end: 105408eab; +[SCJanusRegisterOAuthRequest descriptor] */

undefined * FUN_105408e20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35510,
                        &PTR____CFConstantStringClassReference_110dd9ed8,
                        &PTR_s_snapchat_janus_api_1130d5a90,&PTR_s_displayName_1130d5ba8,10,0x50,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136bba90 = puVar1;
  }
  return puRam00000001136bba90;
}



/* Entry: 105408eac; end: 105408f13; +[SCJanusAppleOAuth descriptor] */

void FUN_105408eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35560,
                        &PTR____CFConstantStringClassReference_110dd9ef8,
                        &PTR_s_snapchat_janus_api_1130d5a90,&PTR_s_identityToken_1130d5aa8,2,0x18,
                        0x1c);
    puRam00000001136bba98 = puVar1;
  }
  return;
}



/* Entry: 105408f14; end: 105408f9f; +[SCJanusRegisterOAuthResponse descriptor] */

undefined * FUN_105408f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbaa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a355b0,
                        &PTR____CFConstantStringClassReference_110dd9f18,
                        &PTR_s_snapchat_janus_api_1130d5a90,&PTR_s_statusCode_1130d5ae8,6,0x38,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbaa0 = puVar1;
  }
  return puRam00000001136bbaa0;
}



/* Entry: 105408fa0; end: 105409053;  */

undefined * FUN_105408fa0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8b80;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 105409054; end: 10540906f;  */

uint FUN_105409054(uint param_1)

{
  return (uint)(param_1 < 0x17) & 0x7ffc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 105409070; end: 1054090eb;  */

undefined * FUN_105409070(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbab0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd9f58,
                        &UNK_10dda91cc,&UNK_10dda921c,7,FUN_1054090ec,0);
    do {
      if (puRam00000001136bbab0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbab0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbab0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbab0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbab0;
}



/* Entry: 1054090ec; end: 105409103;  */

uint FUN_1054090ec(uint param_1)

{
  return (uint)(param_1 < 0xd) & 0x1e07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 105409104; end: 10540917f;  */

undefined * FUN_105409104(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbab8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd9f78,
                        &UNK_10dda9238,&UNK_10dda926c,5,FUN_105409180,0);
    do {
      if (puRam00000001136bbab8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbab8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbab8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbab8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbab8;
}



/* Entry: 105409180; end: 105409197;  */

uint FUN_105409180(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0xe03U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 105409198; end: 105409213; +[SCJanusWebRegisterRequest descriptor] */

undefined * FUN_105409198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a356a0,
                        &PTR____CFConstantStringClassReference_110dd9f98,
                        &PTR_s_snapchat_janus_api_1130d5d00,&PTR_s_webRegistrationHeader_1130d5ff8,
                        0xf,0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bbac0 = puVar1;
  }
  return puRam00000001136bbac0;
}



/* Entry: 105409214; end: 10540929f; +[SCJanusWebRegisterResponse descriptor] */

undefined * FUN_105409214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a356f0,
                        &PTR____CFConstantStringClassReference_110dd9fb8,
                        &PTR_s_snapchat_janus_api_1130d5d00,&PTR_s_statusCode_1130d5e78,6,0x38,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbac8 = puVar1;
  }
  return puRam00000001136bbac8;
}



/* Entry: 1054092a0; end: 105409307; +[SCJanusWebErrorData descriptor] */

void FUN_1054092a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35740,
                        &PTR____CFConstantStringClassReference_110dd9fd8,
                        &PTR_s_snapchat_janus_api_1130d5d00,&PTR_s_errorField_1130d5d18,2,0x10,0x1c)
    ;
    puRam00000001136bbad0 = puVar1;
  }
  return;
}



/* Entry: 105409308; end: 10540936f; +[SCJanusWebRegisterVerifyChallengeRequest descriptor] */

void FUN_105409308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35790,
                        &PTR____CFConstantStringClassReference_110dd9ff8,
                        &PTR_s_snapchat_janus_api_1130d5d00,&PTR_s_webRegistrationHeader_1130d5d98,3
                        ,0x20,0x1c);
    puRam00000001136bbad8 = puVar1;
  }
  return;
}



/* Entry: 105409370; end: 1054093fb; +[SCJanusWebRegisterVerifyChallengeResponse descriptor] */

undefined * FUN_105409370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a357e0,
                        &PTR____CFConstantStringClassReference_110dda018,
                        &PTR_s_snapchat_janus_api_1130d5d00,&PTR_s_statusCode_1130d5f38,6,0x38,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbae0 = puVar1;
  }
  return puRam00000001136bbae0;
}



/* Entry: 1054093fc; end: 105409463; +[SCJanusWebRegisterRequestChallengeRequest descriptor] */

void FUN_1054093fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35830,
                        &PTR____CFConstantStringClassReference_110dda038,
                        &PTR_s_snapchat_janus_api_1130d5d00,&PTR_s_webRegistrationHeader_1130d5d58,2
                        ,0x18,0x1c);
    puRam00000001136bbae8 = puVar1;
  }
  return;
}



/* Entry: 105409464; end: 1054094ef; +[SCJanusWebRegisterRequestChallengeResponse descriptor] */

undefined * FUN_105409464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbaf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35880,
                        &PTR____CFConstantStringClassReference_110dda058,
                        &PTR_s_snapchat_janus_api_1130d5d00,&PTR_s_statusCode_1130d5df8,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbaf0 = puVar1;
  }
  return puRam00000001136bbaf0;
}



/* Entry: 1054094f0; end: 10540956b;  */

undefined * FUN_1054094f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbaf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda078,
                        &UNK_10dda928c,&UNK_10dda92dc,3,FUN_10540956c,0);
    do {
      if (puRam00000001136bbaf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbaf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbaf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbaf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbaf8;
}



/* Entry: 10540956c; end: 105409577;  */

bool FUN_10540956c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105409578; end: 1054095f3;  */

undefined * FUN_105409578(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbb00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda098,
                        &UNK_10dda92e8,&UNK_10dda9354,6,FUN_1054095f4,0);
    do {
      if (puRam00000001136bbb00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbb00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbb00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbb00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbb00;
}



/* Entry: 1054095f4; end: 1054095ff;  */

bool FUN_1054095f4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 105409600; end: 10540967b;  */

undefined * FUN_105409600(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbb08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda0b8,
                        &UNK_10dda936c,&UNK_10dda93e0,4,FUN_10540967c,0);
    do {
      if (puRam00000001136bbb08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbb08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbb08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbb08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbb08;
}



/* Entry: 10540967c; end: 105409687;  */

bool FUN_10540967c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105409688; end: 1054096ef; +[SCJanusWebRegistrationHeader descriptor] */

void FUN_105409688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35920,
                        &PTR____CFConstantStringClassReference_110dda0d8,
                        &PTR_s_snapchat_janus_api_1130d61d8,&PTR_s_clientCookieId_1130d62b0,0xe,0x78
                        ,0x1c);
    puRam00000001136bbb10 = puVar1;
  }
  return;
}



/* Entry: 1054096f0; end: 1054097d3; +[SCJanusWebRegistrationHeaderBrowser descriptor] */

void FUN_1054096f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35970,
                        &PTR____CFConstantStringClassReference_110dda0f8,
                        &PTR_s_snapchat_janus_api_1130d61d8,&PTR_s_arkoseToken_1130d61f0,6,0x28,0x1c
                       );
    puRam00000001136bbb18 = puVar1;
  }
  return;
}



/* Entry: 1054097d4; end: 1054097df;  */

bool FUN_1054097d4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1054097e0; end: 105409847; +[SCJanusCaptchaPayload descriptor] */

void FUN_1054097e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35a10,
                        &PTR____CFConstantStringClassReference_110dda138,
                        &PTR_s_snapchat_janus_api_1130d6470,&PTR_s_provider_1130d6488,3,0x18,0x1c);
    puRam00000001136bbb28 = puVar1;
  }
  return;
}



/* Entry: 105409848; end: 1054098af; +[SCJanusWebBootstrapData descriptor] */

void FUN_105409848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35ab0,
                        &PTR____CFConstantStringClassReference_110dda158,
                        &PTR_s_snapchat_janus_api_1130d64e8,&PTR_s_userId_1130d6540,3,0x18,0x1c);
    puRam00000001136bbb30 = puVar1;
  }
  return;
}



/* Entry: 1054098b0; end: 1054099a7; +[SCJanusWebBootstrapDataBrowser descriptor] */

undefined * FUN_1054098b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35b00,
                        &PTR____CFConstantStringClassReference_110dda178,
                        &PTR_s_snapchat_janus_api_1130d64e8,&PTR_s_redirectURL_1130d6500,2,0x18,0x1c
                       );
    func_0x00010c2289e0();
    puRam00000001136bbb38 = puVar1;
  }
  return puRam00000001136bbb38;
}



/* Entry: 1054099a8; end: 1054099bf;  */

uint FUN_1054099a8(uint param_1)

{
  return (uint)(param_1 < 5) & 0x1bU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 1054099c0; end: 105409a63; -[SCUsernameServices initWithSuggester:validator:] */

undefined1 *
FUN_1054099c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8398;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105409a64; end: 105409a6b; -[SCUsernameServices suggester] */

undefined8 FUN_105409a64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105409a6c; end: 105409a73; -[SCUsernameServices validator] */

undefined8 FUN_105409a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105409a74; end: 105409aa3; -[SCUsernameServices .cxx_destruct] */

void FUN_105409a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105409aa4; end: 105409b2f; -[SCUsernameSuggestionResponse initWithGrpcStatusCode:protoStatusCode:result:] */

undefined1 *
FUN_105409aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e83a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105409b30; end: 105409b53; -[SCUsernameSuggestionResponse copyWithZone:] */

undefined8 FUN_105409b30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105409b54; end: 105409bbb; -[SCUsernameSuggestionResponse hash] */

undefined8 * FUN_105409b54(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105409c50;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_105409c50;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_105409c50;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_105409c50:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 105409bbc; end: 105409c6b; -[SCUsernameSuggestionResponse isEqual:] */

long FUN_105409bbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105409c50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_105409c50;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_105409c50;
    }
  }
  lVar3 = 1;
LAB_105409c50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105409c6c; end: 105409c73; -[SCUsernameSuggestionResponse grpcStatusCode] */

undefined8 FUN_105409c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105409c74; end: 105409c7b; -[SCUsernameSuggestionResponse protoStatusCode] */

undefined8 FUN_105409c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105409c7c; end: 105409c83; -[SCUsernameSuggestionResponse result] */

undefined8 FUN_105409c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105409c84; end: 105409c8f; -[SCUsernameSuggestionResponse .cxx_destruct] */

void FUN_105409c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105409c90; end: 105409cfb; +[SCUsernameSuggestionResult errorWithErrorMessage:] */

void FUN_105409c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aee40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105409cfc; end: 105409d5f; +[SCUsernameSuggestionResult successWithRequestedUsername:] */

void FUN_105409cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aee40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105409d60; end: 105409e2b; +[SCUsernameSuggestionResult suggestionsWithMessage:requestedUsername:suggestions:] */

void FUN_105409d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aee40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105409e2c; end: 105409ec3; +[SCUsernameSuggestionResult unavailableWithRequestedUsername:errorMessage:] */

void FUN_105409e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aee40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


