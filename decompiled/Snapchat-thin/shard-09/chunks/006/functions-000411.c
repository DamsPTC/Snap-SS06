/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f796dc; end: 106f796eb; -[SCSpectaclesCheeriosPushMessage pushMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f796dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761b48);
}



/* Entry: 106f796ec; end: 106f796ff; -[SCSpectaclesCheeriosPushMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f796ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761b48,0);
  return;
}



/* Entry: 106f79700; end: 106f7978b; -[SCSpectaclesCheeriosResponseMessage initWithCheeriosResponse:request:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f79700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRequest__1125ed4b8,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761b4c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f7978c; end: 106f7983b; -[SCSpectaclesCheeriosResponseMessage responseStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f7978c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c13ba40();
  iVar2 = (int)*(undefined8 *)(param_1 + lVar7);
  if (iVar1 == 1) {
    func_0x00010bf987e0();
    uVar5 = iVar2 - 3;
    if (3 < uVar5) {
      return 1;
    }
    puVar6 = &UNK_10de19120;
  }
  else {
    func_0x00010c13ba40();
    if (iVar2 != 0x3e) {
      return 4;
    }
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf98ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf98940();
    _objc_release(uVar3);
    uVar5 = (int)uVar4 - 3;
    if (5 < uVar5) {
      return 1;
    }
    puVar6 = &UNK_10de19140;
  }
  return *(undefined8 *)(puVar6 + (ulong)uVar5 * 8);
}



/* Entry: 106f7983c; end: 106f798d7; -[SCSpectaclesCheeriosResponseMessage peerPublicKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7983c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x14) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1d8d60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdac20();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c1d8d60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11a480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f798c4;
    }
  }
  uVar3 = 0;
LAB_106f798c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f798d8; end: 106f79973; -[SCSpectaclesCheeriosResponseMessage peerVerificationNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f798d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x14) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1d8d60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd9820();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c1d8d60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0db0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f79960;
    }
  }
  uVar3 = 0;
LAB_106f79960:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f79974; end: 106f79a0f; -[SCSpectaclesCheeriosResponseMessage peerVerificationSigPairing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f79974(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x15) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1da100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdc120();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c1da100(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c23b8a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f799fc;
    }
  }
  uVar3 = 0;
LAB_106f799fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f79a10; end: 106f79a7b; -[SCSpectaclesCheeriosResponseMessage peerVerificationPairingSCCertChain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f79a10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x15) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1da100(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f3320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f79a7c; end: 106f79b0f; -[SCSpectaclesCheeriosResponseMessage validatePairingResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f79a7c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x27) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c2969e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdb3a0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c2969e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c13ca20();
      _objc_release(uVar2);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 106f79b10; end: 106f79bbf; -[SCSpectaclesCheeriosResponseMessage previousUserMediaCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f79b10(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x27) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c2969e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8f60();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c2969e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0c47a0();
      func_0x00010c0df820(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f79bac;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106f79bac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f79bc0; end: 106f79c93; -[SCSpectaclesCheeriosResponseMessage socTemperature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f79bc0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 0x13) {
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bfcb160();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd8ca0();
      _objc_release(uVar3);
      _objc_release(lVar2);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)uVar4 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010bfcb160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b6ca0();
        func_0x00010c0df740(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        goto LAB_106f79c7c;
      }
    }
  }
  puVar5 = (undefined *)0x0;
LAB_106f79c7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f79c94; end: 106f79cf7; -[SCSpectaclesCheeriosResponseMessage hasTemperatureLevelStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f79c94(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x13) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfcb160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdcb40();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 106f79cf8; end: 106f79dbb; -[SCSpectaclesCheeriosResponseMessage temperatureStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f79cf8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x13) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfcb160();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfdcb40();
      _objc_release(uVar3);
      _objc_release(lVar2);
      if ((int)uVar4 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010bfcb160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c252d60();
        _objc_release(uVar4);
      }
    }
  }
  return;
}



/* Entry: 106f79dbc; end: 106f79dc3; -[SCSpectaclesCheeriosResponseMessage nrfErrorType] */

undefined8 FUN_106f79dbc(void)

{
  return 0;
}



/* Entry: 106f79dc4; end: 106f79e07; -[SCSpectaclesCheeriosResponseMessage hasNrfError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f79dc4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c13ba40();
  if (iVar1 != 1) {
    func_0x00010c13ba40(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 106f79e08; end: 106f79e6b; -[SCSpectaclesCheeriosResponseMessage hasFlightMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f79e08(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x20) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfc4d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfda660();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 106f79e6c; end: 106f79ee3; -[SCSpectaclesCheeriosResponseMessage flightMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f79e6c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010bfd72c0();
  if ((int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112761b4c);
    func_0x00010bfc4d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c104260();
    _objc_release(uVar3);
    uVar1 = (int)uVar4 - 1;
    if (uVar1 < 8) {
      uVar4 = *(undefined8 *)(&UNK_10de19170 + (ulong)uVar1 * 8);
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* Entry: 106f79ee4; end: 106f79f3f; -[SCSpectaclesCheeriosResponseMessage hasFlightStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f79ee4(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761b4c;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c13ba40();
  if (iVar2 == 0x21) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bfc5a60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106f79f40; end: 106f7a0b3; -[SCSpectaclesCheeriosResponseMessage flightStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f79f40(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar2 = param_1;
  func_0x00010bfd7320();
  if ((int)lVar2 == 0) {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112761b4c);
  func_0x00010bfc5a60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c13ba40();
  uVar7 = 0;
  iVar1 = (int)uVar4;
  if (iVar1 < 3) {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_106f7a098;
LAB_106f79fb8:
      uVar4 = uVar3;
      func_0x00010c087da0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bfd8300();
      _objc_release(uVar4);
      if ((int)uVar7 == 0) goto LAB_106f7a094;
      uVar4 = uVar3;
      func_0x00010c087da0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c087da0();
      _objc_release(uVar4);
      uVar5 = (int)uVar7 - 1;
      if (uVar5 < 3) {
        puVar6 = &UNK_10de191d8;
LAB_106f7a084:
        uVar7 = *(undefined8 *)(puVar6 + (ulong)uVar5 * 8);
        goto LAB_106f7a098;
      }
    }
    uVar7 = 1;
  }
  else {
    if (iVar1 - 3U < 2 || iVar1 == 6) {
      uVar7 = 3;
      goto LAB_106f7a098;
    }
    if (iVar1 != 5) goto LAB_106f7a098;
    uVar4 = uVar3;
    func_0x00010bfb3500();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfdce80();
    _objc_release(uVar4);
    if ((int)uVar7 != 0) {
      uVar4 = uVar3;
      func_0x00010bfb3500();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c260ba0();
      _objc_release(uVar4);
      uVar5 = (int)uVar7 - 1;
      if (4 < uVar5) goto LAB_106f79fb8;
      puVar6 = &UNK_10de191b0;
      goto LAB_106f7a084;
    }
LAB_106f7a094:
    uVar7 = 0;
  }
LAB_106f7a098:
  _objc_release(uVar3);
  return uVar7;
}



/* Entry: 106f7a0b4; end: 106f7a0db; -[SCSpectaclesCheeriosResponseMessage isAbortingFlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f7a0b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761b4c);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x22;
}



/* Entry: 106f7a0dc; end: 106f7a143; -[SCSpectaclesCheeriosResponseMessage hasFlightStateErrors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f7a0dc(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar2 == 0x35) {
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010bfc5a40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf99580();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106f7a144; end: 106f7a1c7; -[SCSpectaclesCheeriosResponseMessage flightStateErrors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7a144(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bfd7300();
  if ((int)lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761b4c);
    func_0x00010bfc5a40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf99560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_106f7b5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f7a1c8; end: 106f7a4e7; -[SCSpectaclesCheeriosResponseMessage allFlightModesSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7a1c8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar15 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x00010c13ba40();
  if (iVar1 == 0x46) {
    lVar2 = *(long *)(param_1 + lVar15);
    func_0x00010bfc2260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + lVar15);
      func_0x00010bfc2260();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd7ca0();
      if ((int)uVar4 != 0) {
        uVar4 = uVar3;
        func_0x00010bfe4880(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_106f7b694();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar14,param_2,uVar5,
                            &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c99d0);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      uVar4 = uVar3;
      func_0x00010bfdb460();
      if ((int)uVar4 != 0) {
        uVar4 = uVar3;
        func_0x00010c13fe60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_106f7b694();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar14,param_2,uVar5,
                            &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c99e8);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      uVar4 = uVar3;
      func_0x00010bfd7360();
      if ((int)uVar4 != 0) {
        uVar4 = uVar3;
        func_0x00010bfb3960(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_106f7b694();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar14,param_2,uVar5,
                            &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9a00);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      uVar4 = uVar3;
      func_0x00010bfd9c60();
      if ((int)uVar4 != 0) {
        uVar4 = uVar3;
        func_0x00010c0ec960(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_106f7b694();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar14,param_2,uVar5,
                            &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9a18);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      uVar4 = uVar3;
      func_0x00010bfd6140();
      puVar6 = PTR_PTR_1126c19d0;
      if ((int)uVar4 != 0) {
        uVar4 = uVar3;
        func_0x00010bf61bc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_106f7b694();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c248b40(puVar6,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c2ae3e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010bf61560();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfb2960();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c27dd80();
        if ((uint)uVar10 < 6) {
          uVar13 = *(undefined8 *)(&UNK_10de191f0 + (uVar10 & 0xffffffff) * 8);
        }
        else {
          uVar13 = 1;
        }
        puVar11 = puVar7;
        func_0x00010c2ae400(puVar7,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar14,param_2,puVar12,
                            &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9a30);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
      goto LAB_106f7a4c8;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_106f7a4c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106f7a4e8; end: 106f7a61f; -[SCSpectaclesCheeriosResponseMessage firmwareVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7a4e8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c13ba40();
  if (iVar1 != 6) {
    puVar7 = (undefined *)0x0;
    goto LAB_106f7a608;
  }
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010bfccc80();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010bfdd1e0(), (int)lVar3 == 0)) {
LAB_106f7a5fc:
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c0c68;
    _objc_alloc();
    lVar3 = lVar2;
    func_0x00010c268120(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    if (puVar4 == (undefined *)0x0) {
      lVar3 = lVar2;
      func_0x00010bfd5760();
      if ((int)lVar3 == 0) goto LAB_106f7a5fc;
      puVar7 = PTR_PTR_1126c0c68;
      _objc_alloc(PTR_PTR_1126c0c68);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bfccc80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf42800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar7,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      _objc_retain(puVar4);
      puVar7 = puVar4;
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
LAB_106f7a608:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f7a620; end: 106f7a757; -[SCSpectaclesCheeriosResponseMessage serialNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7a620(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lStack_40;
  undefined *puStack_38;
  
  plVar7 = &lStack_40;
  lVar6 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 5) {
    puVar2 = *(undefined1 **)(param_1 + lVar6);
    func_0x00010bfca140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c25d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf01c80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = puVar4;
    func_0x00010c11f340();
    if (puVar2 == (undefined1 *)0x7fffffffffffffff) {
      plVar7 = (long *)puVar4;
      func_0x00010c28ed80(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      plVar7 = (long *)0x0;
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puStack_38 = PTR_PTR_1126f8050;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_serialNumber_1126353f0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
  return;
}



/* Entry: 106f7a758; end: 106f7a8e7; -[SCSpectaclesCheeriosResponseMessage mediaCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7a758(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uVar6;
  long lVar9;
  
  lVar11 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c13ba40();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 == 10) {
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c0c47c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfde500();
    if ((int)uVar5 == 0) {
      iVar1 = 0;
    }
    else {
      uStack_68 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c0c47c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = uStack_68;
      func_0x00010c0c47a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uStack_70;
      func_0x00010c29bec0();
      iVar1 = (int)uVar6;
    }
    uVar7 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c0c47c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bfda300();
    iVar2 = 0;
    if ((int)uVar8 != 0) {
      param_1 = *(long *)(param_1 + lVar11);
      func_0x00010c0c47c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c0c47a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar11;
      func_0x00010c0fb780();
      iVar2 = (int)lVar9;
    }
    func_0x00010c0df820(puVar10,param_2,iVar2 + iVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar8 != 0) {
      _objc_release(lVar11);
      _objc_release(param_1);
    }
    _objc_release(uVar6);
    _objc_release(uVar7);
    if ((int)uVar5 != 0) {
      _objc_release(uStack_70);
      _objc_release(uStack_68);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106f7a8e8; end: 106f7a9bb; -[SCSpectaclesCheeriosResponseMessage batteryLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7a8e8(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lStack_30;
  undefined *puStack_28;
  
  plVar5 = &lStack_30;
  lVar6 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 0xe) {
    uVar2 = *(ulong *)(param_1 + lVar6);
    func_0x00010bf177c0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 != 0) &&
       (uVar3 = uVar2, func_0x00010bfdc600(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       (uVar3 & 1) != 0)) {
      func_0x00010c246020();
      func_0x00010c0df760(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      plVar5 = (long *)puVar4;
      goto LAB_106f7a9a8;
    }
    _objc_release(uVar2);
  }
  puStack_28 = PTR_PTR_1126f8050;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_batteryLevel_1125a36e8);
  _objc_retainAutoreleasedReturnValue();
LAB_106f7a9a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 106f7a9bc; end: 106f7aa83; -[SCSpectaclesCheeriosResponseMessage voltageLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7a9bc(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lStack_30;
  undefined *puStack_28;
  
  plVar5 = &lStack_30;
  lVar6 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 0xe) {
    uVar2 = *(ulong *)(param_1 + lVar6);
    func_0x00010bf177c0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 != 0) &&
       (uVar3 = uVar2, func_0x00010bfde5e0(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       (uVar3 & 1) != 0)) {
      func_0x00010c2a0d80(uVar2);
      func_0x00010c0df760(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      plVar5 = (long *)puVar4;
      goto LAB_106f7aa70;
    }
    _objc_release(uVar2);
  }
  puStack_28 = PTR_PTR_1126f8050;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_voltageLevel_112685d90);
  _objc_retainAutoreleasedReturnValue();
LAB_106f7aa70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 106f7aa84; end: 106f7aacb; -[SCSpectaclesCheeriosResponseMessage hasCharging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f7aa84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761b4c);
  func_0x00010bf35b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8100();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f7aacc; end: 106f7ab13; -[SCSpectaclesCheeriosResponseMessage charging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f7aacc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761b4c);
  func_0x00010bf35b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e400();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106f7ab14; end: 106f7ab5f; -[SCSpectaclesCheeriosResponseMessage hasWifiState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f7ab14(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar2 == 0xc) {
    bVar1 = true;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c13ba40(uVar3);
    bVar1 = (int)uVar3 == 0xd;
  }
  return bVar1;
}



/* Entry: 106f7ab60; end: 106f7abaf; -[SCSpectaclesCheeriosResponseMessage wifiOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f7ab60(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c13ba40();
  if (iVar1 != 0xc) {
    func_0x00010c13ba40(*(undefined8 *)(param_1 + lVar2));
  }
  return iVar1 == 0xc;
}



/* Entry: 106f7abb0; end: 106f7ac8b; -[SCSpectaclesCheeriosResponseMessage hardwareVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7abb0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x11) {
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf1e980();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar2 == 0) || (uVar3 = uVar2, func_0x00010bfd7ac0(), (int)uVar3 == 0)) ||
       (uVar3 = uVar2, func_0x00010bfd7ae0(), (int)uVar3 == 0)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126c0c70;
      func_0x00010bf38ca0(PTR_PTR_1126c0c70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c0b6e60();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c0c70;
      _objc_alloc(PTR_PTR_1126c0c70);
      uVar3 = uVar2;
      func_0x00010bfd3860(uVar2);
      func_0x00010c00c380(puVar6,param_2,1,puVar4,uVar3 & 0xffffffff);
    }
    _objc_release(uVar2);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f7ac8c; end: 106f7acb3; -[SCSpectaclesCheeriosResponseMessage contentCleared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f7ac8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761b4c);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x19;
}



/* Entry: 106f7acb4; end: 106f7ad1b; -[SCSpectaclesCheeriosResponseMessage usbImportEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7acb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761b4c;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar2 == 0x38) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfc5140(uVar3);
    func_0x00010c0df6e0(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7ad1c; end: 106f7adcb; -[SCSpectaclesCheeriosResponseMessage usbConnected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7ad1c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761b4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x38) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfcbca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8140();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfcbca0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06f140();
      func_0x00010c0df6e0(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f7adb8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106f7adb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f7adcc; end: 106f7afff; -[SCSpectaclesCheeriosResponseMessage firmwareUpdateResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7adcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112761b4c;
  iVar6 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c13ba40();
  if (iVar6 == 0x1e) {
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0ede20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfd9ce0();
    _objc_release(uVar1);
    if ((int)uVar3 == 0) goto LAB_106f7ae80;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0ede20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0ed180();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c136d60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c1a90;
    iVar6 = (int)uVar1;
    if (iVar6 < 5) {
      if (iVar6 - 2U < 2) {
        puVar4 = (undefined *)0x0;
      }
      else if (iVar6 == 4) {
        uVar1 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c0ede20(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010bf38a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf38b00(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar1);
      }
      else {
        puVar4 = (undefined *)0x0;
      }
    }
    else {
      puVar5 = (undefined *)0x0;
      if (iVar6 == 5) goto LAB_106f7afe8;
      puVar4 = (undefined *)0x0;
    }
    puVar5 = PTR_PTR_1126d3868;
    _objc_alloc(PTR_PTR_1126d3868);
  }
  else {
LAB_106f7ae80:
    iVar6 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010c13ba40();
    puVar4 = PTR_PTR_1126c1a90;
    if (iVar6 == 0x24) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c1f6880(uVar3);
      func_0x00010c150400(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d3868;
      _objc_alloc(PTR_PTR_1126d3868);
    }
    else {
      iVar6 = (int)*(undefined8 *)(param_1 + lVar7);
      func_0x00010c13ba40();
      puVar4 = PTR_PTR_1126c1a90;
      if (iVar6 != 0x3d) {
        puVar5 = (undefined *)0x0;
        goto LAB_106f7afe8;
      }
      lVar7 = *(long *)(param_1 + lVar7);
      func_0x00010bf2efe0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2f6e0(puVar4,param_2,lVar7 != 0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      puVar5 = PTR_PTR_1126d3868;
      _objc_alloc(PTR_PTR_1126d3868);
    }
  }
  func_0x00010c04c2c0();
  _objc_release(puVar4);
LAB_106f7afe8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f7b000; end: 106f7b007; -[SCSpectaclesCheeriosResponseMessage firmwareScheduledUpdate] */

undefined8 FUN_106f7b000(void)

{
  return 0;
}



/* Entry: 106f7b008; end: 106f7b02f; -[SCSpectaclesCheeriosResponseMessage hasGetDeveloperModeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f7b008(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761b4c);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x39;
}



/* Entry: 106f7b030; end: 106f7b06b; -[SCSpectaclesCheeriosResponseMessage developerModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7b030(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfd7700();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfc5130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112761b4c),PTR_s_getEnableAdbResponse_1125cedf0);
    return;
  }
  return;
}



/* Entry: 106f7b06c; end: 106f7b07b; -[SCSpectaclesCheeriosResponseMessage cheeriosResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f7b06c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761b4c);
}



/* Entry: 106f7b07c; end: 106f7b08f; -[SCSpectaclesCheeriosResponseMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f7b07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761b4c,0);
  return;
}



/* Entry: 106f7b090; end: 106f7b167; -[SCSpectaclesCheeriosRpcMessageFactory responseFromData:requestProvidingBlock:error:] */

void FUN_106f7b090(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d3880;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      puVar3 = puVar1;
      func_0x00010bfe5ea0(puVar1);
      lVar2 = param_4;
      (**(code **)(param_4 + 0x10))(param_4,(ulong)puVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126d3888;
    _objc_alloc(PTR_PTR_1126d3888);
    func_0x00010bffe080();
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7b168; end: 106f7b1bb; -[SCSpectaclesCheeriosRpcMessageFactory setupRpcRequest:withRequestID:] */

void FUN_106f7b168(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3890;
  _objc_opt_class(PTR_PTR_1126d3890);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1a99c0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f7b1bc; end: 106f7b1c3; -[SCSpectaclesCheeriosRpcMessageFactory rpcRequestsFromSpecsRequestMessage:] */

void FUN_106f7b1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_cheeriosRequests_1125abca8);
  return;
}



/* Entry: 106f7b1c4; end: 106f7b24b; -[SCSpectaclesCheeriosRpcMessageFactory pushResponseMessageFromData:error:] */

void FUN_106f7b1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3898;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d38a0;
    _objc_alloc(PTR_PTR_1126d38a0);
    func_0x00010c04b040();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f7b24c; end: 106f7b253; -[SCSpectaclesCheeriosRpcMessageFactory genericChannelRequestsFromNetworkRequest:] */

void FUN_106f7b24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_cheeriosRequests_1125abca8);
  return;
}



/* Entry: 106f7b254; end: 106f7b2eb; -[SCSpectaclesCheeriosRpcMessageFactory networkResponseFromData:URLResponse:error:] */

void FUN_106f7b254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3880;
  _objc_alloc();
  func_0x00010c008360();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d38a8;
    _objc_alloc(PTR_PTR_1126d38a8);
    uVar2 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c040ae0(puVar3,param_2,puVar1,uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7b2ec; end: 106f7b4c3; -[SCSpectaclesCheeriosRpcMessageFactory networkResponseDescriptionFromData:] */

void FUN_106f7b2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d3880;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c13ba40();
  if ((int)puVar2 == 0xb) {
    puVar2 = puVar1;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd6200();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar4 != 0) {
      puVar4 = puVar1;
      func_0x00010c0c64c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08fa60();
      func_0x00010c0df840(puVar3,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8fd78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar3 = puVar2;
      func_0x00010bf64920(puVar2,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0c64c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189980();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  puVar2 = puVar1;
  func_0x00010bf6e340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f7b4c4; end: 106f7b59f; -[SCSpectaclesCheeriosRpcMessageFactory networkResponseFromResponseMessage:] */

void FUN_106f7b4c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126d3888;
  _objc_opt_class(PTR_PTR_1126d3888);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d38a8;
    _objc_alloc(PTR_PTR_1126d38a8);
    uVar2 = param_3;
    func_0x00010bf38c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf38c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ebe0();
    func_0x00010c040ae0(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f7b5a0; end: 106f7b643;  */

void FUN_106f7b5a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f7b644;
  puStack_30 = &UNK_110842ff8;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010bf980c0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f7b644; end: 106f7b693;  */

void FUN_106f7b644(long param_1,int param_2)

{
  undefined **ppuVar1;
  
  if (param_2 - 1U < 0x15) {
    ppuVar1 = (undefined **)(&PTR_PTR_110985fd8)[param_2 - 1U];
  }
  else {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9a48;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,ppuVar1);
  return;
}



/* Entry: 106f7b694; end: 106f7b787;  */

void FUN_106f7b694(float param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain();
  uVar4 = param_2;
  func_0x00010bfb2960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  if ((uint)uVar5 < 6) {
    uVar7 = *(undefined8 *)(&UNK_10de19260 + (uVar5 & 0xffffffff) * 8);
  }
  else {
    uVar7 = 1;
  }
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126c19c0;
  _objc_alloc(PTR_PTR_1126c19c0);
  uVar4 = param_2;
  func_0x00010bf8b160(param_2);
  func_0x00010bf86fc0(param_2);
  uVar5 = param_2;
  func_0x00010bf31460();
  uVar3 = (int)uVar5 - 1;
  lVar2 = 0;
  if (uVar3 < 3) {
    lVar2 = (ulong)uVar3 + 1;
  }
  uVar5 = param_2;
  func_0x00010c278cc0();
  _objc_release(param_2);
  uVar1 = 1;
  if ((int)uVar5 != 0) {
    uVar1 = 2;
  }
  func_0x00010c013860((double)param_1,puVar6,param_3,uVar7,uVar4 & 0xffffffff,lVar2,uVar1,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7b788; end: 106f7b797;  */

long FUN_106f7b788(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 - 1U < 6) {
    lVar1 = (ulong)(param_1 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 106f7b798; end: 106f7b79f; -[SCSpectaclesStatelessAEADPacketEncryptor connectionReady] */

undefined8 FUN_106f7b798(void)

{
  return 1;
}



/* Entry: 106f7b7a0; end: 106f7b7cf; -[SCSpectaclesStatelessAEADPacketEncryptorBuilder setKey:] */

void FUN_106f7b7a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7b7d0; end: 106f7b7d7; -[SCSpectaclesStatelessAEADPacketEncryptorBuilder nextEncryptionSetupRequest] */

undefined8 FUN_106f7b7d0(void)

{
  return 0;
}



/* Entry: 106f7b7d8; end: 106f7b7db; -[SCSpectaclesStatelessAEADPacketEncryptorBuilder handleEncryptionSetupResponse:] */

void FUN_106f7b7d8(void)

{
  return;
}



/* Entry: 106f7b7dc; end: 106f7b7df; -[SCSpectaclesStatelessAEADPacketEncryptorBuilder handleEncryptionSetupNetworkResponse:] */

void FUN_106f7b7dc(void)

{
  return;
}



/* Entry: 106f7b7e0; end: 106f7b80f; -[SCSpectaclesStatelessAEADPacketEncryptorBuilder buildEncryptor] */

void FUN_106f7b7e0(void)

{
  _objc_alloc(PTR_PTR_1126d38b0);
  func_0x00010c00fd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7b810; end: 106f7b81b; -[SCSpectaclesStatelessAEADPacketEncryptorBuilder .cxx_destruct] */

void FUN_106f7b810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f7b81c; end: 106f7b893; -[SCSpectaclesAEADPacketEncryptorBuilder initWithChannelType:] */

undefined1 * FUN_106f7b81c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8058;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    puVar2 = PTR_PTR_1126d3178;
    func_0x00010c0db120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106f7b894; end: 106f7b8c3; -[SCSpectaclesAEADPacketEncryptorBuilder setKey:] */

void FUN_106f7b894(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f7b8c4; end: 106f7b903; -[SCSpectaclesAEADPacketEncryptorBuilder nextEncryptionSetupRequest] */

void FUN_106f7b8c4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010bf9aaa0(PTR_PTR_1126b6718,param_2,*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7b904; end: 106f7b93b; -[SCSpectaclesAEADPacketEncryptorBuilder handleEncryptionSetupResponse:] */

void FUN_106f7b904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf35660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f7b93c; end: 106f7b973; -[SCSpectaclesAEADPacketEncryptorBuilder handleEncryptionSetupNetworkResponse:] */

void FUN_106f7b93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf93f80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f7b974; end: 106f7b9f3; -[SCSpectaclesAEADPacketEncryptorBuilder buildEncryptor] */

void FUN_106f7b974(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d38b8;
    _objc_alloc_init();
    func_0x00010c195ce0();
    func_0x00010c21ac80(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c1ef020(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    puVar2 = puVar1;
    func_0x00010bf48ce0();
    puVar3 = puVar1;
    if ((int)puVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f7b9f4; end: 106f7ba2f; -[SCSpectaclesAEADPacketEncryptorBuilder .cxx_destruct] */

void FUN_106f7b9f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f7ba30; end: 106f7bbbf; -[SCSpectaclesBLENetworkClient initWithPeripheral:rpcMessageFactory:connectivityDelegate:messagingDelegate:] */

undefined1 *
FUN_106f7ba30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_5);
  _objc_initWeak(auStack_50,param_6);
  puStack_58 = PTR_PTR_1126f8060;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),puVar2);
    _objc_release(puVar2);
    puVar2 = auStack_50;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),puVar2);
    _objc_release(puVar2);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar3);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f7bbc0; end: 106f7bbc3; -[SCSpectaclesBLENetworkClient cancelOutstandingRequest] */

void FUN_106f7bbc0(void)

{
  return;
}



/* Entry: 106f7bbc4; end: 106f7bbcb; -[SCSpectaclesBLENetworkClient halt] */

void FUN_106f7bbc4(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bec3250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopMonitoringStream_11258e638);
  return;
}



/* Entry: 106f7bbcc; end: 106f7bbd3; -[SCSpectaclesBLENetworkClient isActive] */

undefined1 FUN_106f7bbcc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106f7bbd4; end: 106f7bbdb; -[SCSpectaclesBLENetworkClient isConnected] */

void FUN_106f7bbd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isReadyToExchangeMessages_1125fc950);
  return;
}



/* Entry: 106f7bbdc; end: 106f7bd73; -[SCSpectaclesBLENetworkClient sendRequest:] */

void FUN_106f7bbdc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_1[0x38] & 1) == 0) {
    puVar3 = param_1;
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(puVar3,param_2,param_1,puVar1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x00010bfc0ec0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf9c300();
    *(long *)(param_1 + 0x18) = lVar4;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
    puVar3 = puVar1;
    if (puVar2 != (undefined *)0x0) {
      lVar4 = *plStack_110;
      do {
        puVar5 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x00010be176c0(param_1,param_2,*(undefined8 *)(lStack_118 + (long)puVar5 * 8));
          puVar5 = puVar5 + 1;
        } while (puVar2 != puVar5);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010bec06a0();
    *(undefined2 *)(param_3 + 0x38) = 1;
    func_0x00010bf48ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106f7bd74; end: 106f7bdbb; -[SCSpectaclesBLENetworkClient start] */

void FUN_106f7bd74(long param_1)

{
  func_0x00010bec06a0();
  *(undefined2 *)(param_1 + 0x38) = 1;
  func_0x00010bf48ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7bdbc; end: 106f7bdc7; -[SCSpectaclesBLENetworkClient suspend] */

void FUN_106f7bdbc(long param_1)

{
  *(undefined2 *)(param_1 + 0x38) = 0x100;
                    /* WARNING: Could not recover jumptable at 0x00010bec3250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopMonitoringStream_11258e638);
  return;
}



/* Entry: 106f7bdc8; end: 106f7bf97; -[SCSpectaclesBLENetworkClient _fireBLERequest:] */

void FUN_106f7bdc8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 8) == 0) {
    func_0x00010bf48ec0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(param_1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    func_0x00010c1423c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == (undefined *)0x0) {
      func_0x00010bf48ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42c80(param_1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(param_1);
    }
    else {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c15c6e0(*(undefined8 *)(param_1 + 8));
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
      return;
    }
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_3 + 8);
  if (lVar3 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_3 + 0x30,lVar3);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 8),PTR_s_setDelegate__112640798,param_3);
    return;
  }
  return;
}



/* Entry: 106f7bf98; end: 106f7bff3; -[SCSpectaclesBLENetworkClient _startMonitoringStream] */

void FUN_106f7bf98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x30,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_setDelegate__112640798,param_1);
    return;
  }
  return;
}



/* Entry: 106f7bff4; end: 106f7c057; -[SCSpectaclesBLENetworkClient _stopMonitoringStream] */

void FUN_106f7bff4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,0);
    return;
  }
  return;
}



/* Entry: 106f7c058; end: 106f7c0bb; -[SCSpectaclesBLENetworkClient _handlePeripheralResponse:requestMessage:] */

void FUN_106f7c058(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d7f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42ca0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f7c0bc; end: 106f7c213; -[SCSpectaclesBLENetworkClient _dequeuePendingRPCRequestForResponse:] */

void FUN_106f7c0bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
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
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  puVar3 = auStack_d8;
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,puVar3,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        puVar5 = *(undefined1 **)(lStack_118 + lVar7 * 8);
        if (puVar5 == param_3) {
          _objc_retain(puVar5);
          _objc_release(lVar4);
          if (param_3 == (undefined1 *)0x0) goto LAB_106f7c1cc;
          puVar2 = (undefined8 *)puVar5;
          func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20),param_2,puVar5);
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
          goto LAB_106f7c1d0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar3 = auStack_d8;
      lVar1 = lVar4;
      puVar2 = &uStack_120;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,puVar3,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
LAB_106f7c1cc:
  puVar5 = (undefined1 *)0x0;
LAB_106f7c1d0:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  puVar5 = param_3;
  func_0x00010bf48ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42c80();
  _objc_release(puVar5);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010c0f99e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f7c214; end: 106f7c2a3; -[SCSpectaclesBLENetworkClient peripheral:didFailWithError:] */

void FUN_106f7c214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf48ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42c80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f99e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7c2a4; end: 106f7c30b; -[SCSpectaclesBLENetworkClient peripheral:didReceiveEncryptionResponse:] */

void FUN_106f7c2a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f9a00();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7c30c; end: 106f7c40b; -[SCSpectaclesBLENetworkClient peripheral:didReceiveResponse:] */

void FUN_106f7c30c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f7c40c; end: 106f7c497;  */

void FUN_106f7c40c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bdfae80(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = lVar1 + 0x30;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c0f9a20();
      _objc_release(lVar3);
    }
    else {
      func_0x00010be2dde0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f7c498; end: 106f7c4df; -[SCSpectaclesBLENetworkClient peripheralDidOpenStream:] */

void FUN_106f7c498(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f9a40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7c4e0; end: 106f7c527; -[SCSpectaclesBLENetworkClient peripheralRequiresEncryptionSetup:] */

void FUN_106f7c4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f9a60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f7c528; end: 106f7c53f; -[SCSpectaclesBLENetworkClient connectivityDelegate] */

void FUN_106f7c528(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7c540; end: 106f7c54b; -[SCSpectaclesBLENetworkClient setConnectivityDelegate:] */

void FUN_106f7c540(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106f7c54c; end: 106f7c563; -[SCSpectaclesBLENetworkClient messagingDelegate] */

void FUN_106f7c54c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f7c564; end: 106f7c56f; -[SCSpectaclesBLENetworkClient setMessagingDelegate:] */

void FUN_106f7c564(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106f7c570; end: 106f7c5cf; -[SCSpectaclesBLENetworkClient .cxx_destruct] */

void FUN_106f7c570(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f7c5d0; end: 106f7c87b; -[SCSpectaclesDevicePeripheral initWithPeripheral:rpcMessageFactory:packetEncryptorBuilder:enableBLEImprovements:delegate:] */

undefined8 *
FUN_106f7c5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f8068;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_7);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d38c0;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d37e8;
    func_0x00010c22bca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3240;
    puVar5 = PTR_PTR_1126d38c8;
    func_0x00010c0b7ca0(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d38c8;
    func_0x00010c0b7cc0(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d38c8;
    func_0x00010c0b7c80(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95e80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf550e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x405e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106f7c87c; end: 106f7c967; -[SCSpectaclesDevicePeripheral _findAndDequeueRequestMessageForResponse:] */

void FUN_106f7c87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c1373a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  uVar1 = uVar3;
  func_0x00010c134680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f7c968; end: 106f7cb83; -[SCSpectaclesDevicePeripheral _handleResponseData:] */

/* WARNING: Removing unreachable block (ram,0x000106f7ca14) */

void FUN_106f7c968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  lVar4 = *(long *)(param_1 + 0x60);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c13b8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  lVar1 = param_1;
  func_0x00010c0ef280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar4;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0ef280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar2 == lVar3) {
      func_0x00010be28e40(param_1);
      goto LAB_106f7cb0c;
    }
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9a20();
  _objc_release(param_1);
LAB_106f7cb0c:
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(0);
  _objc_release(param_3);
  return;
}



/* Entry: 106f7cb84; end: 106f7cbcb;  */

void FUN_106f7cb84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be167e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f7cbcc; end: 106f7cd07; -[SCSpectaclesDevicePeripheral _handlePushMessageData:] */

/* WARNING: Removing unreachable block (ram,0x000106f7cc44) */

void FUN_106f7cbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1423a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11c2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(0);
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9a20();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(0);
  return;
}



/* Entry: 106f7cd08; end: 106f7cdcf; -[SCSpectaclesDevicePeripheral _cleanupStalePendingRequests] */

void FUN_106f7cd08(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f7cdd0; end: 106f7d03b;  */

ulong FUN_106f7cdd0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  double dVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 1.60807493534087e-314;
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (uVar3 != 0) {
    func_0x00010bf529e0(uVar5);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    dVar13 = 0.0;
    _objc_retain(uVar5);
    uVar3 = uVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = uVar2;
        func_0x00010c1373a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        uVar12 = uVar12 + 1;
      } while (uVar3 != uVar12);
      uVar3 = uVar5;
      func_0x00010bf52a60();
    }
    _objc_release(uVar5);
    uVar3 = uVar2;
    func_0x00010c1373a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d4a0();
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return uVar2;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(uVar2 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1373a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar11);
  uVar11 = uVar9;
  func_0x00010c15e300(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(uVar11);
  _objc_release(uVar9);
  return (ulong)(dVar13 < -120.0);
}



/* Entry: 106f7d03c; end: 106f7d0df;  */

bool FUN_106f7d03c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c1373a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c15e300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1 < -120.0;
}


