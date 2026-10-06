/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056facd0; end: 1056faf3b; -[SCLoginSessionInfoUpdateEntryPoint _updateLastLoginInfoFromJanus:] */

void FUN_1056facd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  FUN_1056fab80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_1056fab80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_1056fab80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_1056facac(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0fafc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0cf3c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c293a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar8;
  func_0x00010c298400(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c127de0();
  func_0x00010c28d060(uVar2,param_2,uVar4,uVar6,uVar3,uVar7,uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1056faf3c; end: 1056faf8f; -[SCLoginSessionInfoUpdateEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056faf3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728264);
  _objc_destroyWeak(param_1 + _DAT_112728260);
  _objc_destroyWeak(param_1 + _DAT_11272825c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112728258,0);
  return;
}



/* Entry: 1056faf90; end: 1056fb14b; -[SCDefaultLastLoginInfoRepository lastLoginUsernameOrEmail] */

void FUN_1056faf90(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar1 = uVar7;
  func_0x00010c0894e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar2 = param_1;
    func_0x00010be20100(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
    uVar2 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retain(uVar2);
    uVar7 = uVar2;
  }
  else {
    uVar7 = param_1;
    func_0x00010be468e0();
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010be46880();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar7 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar4);
      if (uVar7 == 0) {
        uVar4 = uVar1;
        func_0x00010c0e00e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar4);
      }
      _objc_release(uVar7);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80();
      if ((int)puVar3 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = param_1 + 8;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c1b81a0();
        _objc_release(lVar6);
        func_0x00010be46900();
        uVar7 = uVar4;
        if ((int)param_1 == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
      }
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1056fb14c; end: 1056fb3b7; -[SCDefaultLastLoginInfoRepository lastLoginPhoneNumber] */

void FUN_1056fb14c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  
  puVar1 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  puVar11 = puVar1;
  func_0x00010c0894a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar11 != (undefined *)0x0) goto LAB_1056fb398;
  uVar2 = param_1;
  func_0x00010be468e0();
  if ((int)uVar2 == 0) {
    puVar11 = (undefined *)0x0;
    goto LAB_1056fb398;
  }
  uVar3 = param_1;
  func_0x00010be46880();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar1);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar1 == 0) {
LAB_1056fb37c:
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80();
    if ((int)puVar1 == 0) goto LAB_1056fb37c;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfc42a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126aed98;
    func_0x00010bfb5bc0(PTR_PTR_1126aed98);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af240;
    _objc_alloc(PTR_PTR_1126af240);
    puVar11 = PTR_PTR_1126af250;
    _objc_alloc(PTR_PTR_1126af250);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfc5f80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0063a0(puVar11);
    func_0x00010c0062e0(puVar8);
    _objc_release(puVar11);
    _objc_release(uVar9);
    lVar10 = param_1 + 8;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c1b8180();
    _objc_release(lVar10);
    func_0x00010be46900();
    puVar11 = puVar8;
    if ((int)param_1 == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar1);
    _objc_release(uVar7);
    _objc_release(puVar8);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_1056fb398:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1056fb3b8; end: 1056fb417; -[SCDefaultLastLoginInfoRepository hasLoggedInBefore] */

long FUN_1056fb3b8(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be1f880(param_1);
  }
  else {
    func_0x00010bf1f3c0();
  }
  _os_unfair_lock_unlock(param_1 + 0x30);
  return lVar1;
}



/* Entry: 1056fb418; end: 1056fb50b; -[SCDefaultLastLoginInfoRepository updateWithUsername:] */

void FUN_1056fb418(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1b81a0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be46880(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110df8e58);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110df8e78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beda140(param_1,param_2,param_3,lVar2,lVar3,lVar4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056fb50c; end: 1056fb637; -[SCDefaultLastLoginInfoRepository updateWithUsername:email:countryCode:fullPhoneNumber:verified:] */

void FUN_1056fb50c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1b81a0();
  _objc_release(lVar1);
  func_0x00010beda460(param_1,param_2,param_5,param_6);
  uVar2 = param_1;
  func_0x00010bfd8b00();
  if (((uVar2 & 1) == 0) &&
     (((puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
       func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3), (int)puVar3 == 0
       || (puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
          func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4),
          (int)puVar3 == 0)) ||
      (puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
      func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6),
      ((ulong)puVar3 & 1) == 0)))) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1a63a0();
    _objc_release(lVar1);
  }
  func_0x00010beda140(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056fb638; end: 1056fb7a7; -[SCDefaultLastLoginInfoRepository _updateLastLoginPhoneNumberWithCountryCode:fullPhoneNumber:] */

void FUN_1056fb638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
    if ((int)puVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bfc42a0(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126aed98;
      func_0x00010bfb5bc0(PTR_PTR_1126aed98,param_2,param_4,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfc5f80(uVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126af240;
      _objc_alloc(PTR_PTR_1126af240);
      puVar5 = PTR_PTR_1126af250;
      _objc_alloc(PTR_PTR_1126af250);
      func_0x00010c0063a0();
      func_0x00010c0062e0(puVar4,param_2,puVar5,puVar1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1b8180();
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(puVar1);
      goto LAB_1056fb77c;
    }
  }
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1b8180();
LAB_1056fb77c:
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056fb7a8; end: 1056fb7fb; -[SCDefaultLastLoginInfoRepository _getLegacyLastLoggedInUsernameOrEmail] */

void FUN_1056fb7a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056fb7fc; end: 1056fb80f; -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoEnabled:] */

void FUN_1056fb7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be468d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__keychainLastLoginInfoCofConfigE_11256f3d0,
             &PTR____CFConstantStringClassReference_110df8db8,param_3,1);
  return;
}



/* Entry: 1056fb810; end: 1056fb81f; -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoReadEnabled:] */

void FUN_1056fb810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be468b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__keychainLastLoginInfoCofConfigE_11256f3c8,
             &PTR____CFConstantStringClassReference_110df8dd8,param_3);
  return;
}



/* Entry: 1056fb820; end: 1056fb827; -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoCofConfigEnabled:source:] */

void FUN_1056fb820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be468d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__keychainLastLoginInfoCofConfigE_11256f3d0,param_3,param_4,0);
  return;
}



/* Entry: 1056fb828; end: 1056fb95b; -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfoCofConfigEnabled:source:manual:] */

undefined *
FUN_1056fb828(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    puVar3 = puVar4;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  else {
    puVar1 = puVar4;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar4;
      func_0x00010bf1f3c0(puVar4);
      func_0x00010c0df6e0(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    puVar4 = puVar1;
  }
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf1f3c0(puVar3);
  func_0x00010be38500(param_1,param_2,puVar3,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 1056fb95c; end: 1056fbacf; -[SCDefaultLastLoginInfoRepository _updateKeychainLastLoginInfoWithUsername:email:countryCode:fullPhoneNumber:] */

void FUN_1056fb95c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110df8df8);
  _objc_release(puVar2);
  if (param_3 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_3,&PTR____CFConstantStringClassReference_110df8e18);
  }
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_4,&PTR____CFConstantStringClassReference_110df8e38);
  }
  if ((param_5 != 0) && (param_6 != 0)) {
    func_0x00010c1d0640(puVar1,param_2,param_5,&PTR____CFConstantStringClassReference_110df8e58);
    func_0x00010c1d0640(puVar1,param_2,param_6,&PTR____CFConstantStringClassReference_110df8e78);
  }
  puVar2 = PTR_PTR_1126aef90;
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1894c0(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f39ff8);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056fbad0; end: 1056fbbb3; -[SCDefaultLastLoginInfoRepository _keychainLastLoginInfo] */

void FUN_1056fbad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110f39ff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar3 = puVar2;
  func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46f80(param_1,param_2,puVar3);
  puVar4 = puVar3;
  if ((int)param_1 != 0) {
    func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110f39ff8);
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
  }
  _objc_retain(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056fbbb4; end: 1056fbc5b; -[SCDefaultLastLoginInfoRepository _lastLoginInfoExpired:] */

bool FUN_1056fbbb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110df8df8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf64e40(0x415da9c000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010bf433a0(lVar3,param_2,puVar2);
  _objc_release(puVar2);
  return lVar3 == -1;
}



/* Entry: 1056fbc5c; end: 1056fbcd3; -[SCDefaultLastLoginInfoRepository _incrementKeychainLastLoginInfoEnabledSyncedMetric:checkSource:] */

void FUN_1056fbc5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c25d8c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1056fc070(uVar2,param_4,puVar1,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056fbcd4; end: 1056fbd2f; -[SCDefaultLastLoginInfoRepository .cxx_destruct] */

void FUN_1056fbcd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1056fbd30; end: 1056fbda3; -[SCDefaultLogInSessionService initWithApplicationPreferences:] */

undefined1 * FUN_1056fbd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9d98;
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



/* Entry: 1056fbda4; end: 1056fbdab; -[SCDefaultLogInSessionService getLoginFlowUUID] */

void FUN_1056fbda4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc74d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getLoginFlowUUID__1125cf6d8,1);
  return;
}



/* Entry: 1056fbdac; end: 1056fbe2f; -[SCDefaultLogInSessionService getLoginFlowUUID:] */

void FUN_1056fbdac(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0b3fc0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (puVar1 == (undefined *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1c08e0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056fbe30; end: 1056fbe3b; -[SCDefaultLogInSessionService clearLoginFlowUUID] */

void FUN_1056fbe30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c08f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLoginFlowUUID__11264dc60,0);
  return;
}



/* Entry: 1056fbe3c; end: 1056fbe47; -[SCDefaultLogInSessionService fsnJanusRolloutSource] */

undefined ** FUN_1056fbe3c(void)

{
  return &PTR____CFConstantStringClassReference_110df8eb8;
}



/* Entry: 1056fbe48; end: 1056fbe4f; -[SCDefaultLogInSessionService getClientAttemptId] */

void FUN_1056fbe48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc3a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getClientAttemptId__1125ce838,1);
  return;
}



/* Entry: 1056fbe50; end: 1056fbec3; -[SCDefaultLogInSessionService getClientAttemptId:] */

void FUN_1056fbe50(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if ((param_3 != 0) && (lVar4 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1056fbec4; end: 1056fbed3; -[SCDefaultLogInSessionService clearClientAttemptId] */

void FUN_1056fbec4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056fbed4; end: 1056fbedb; -[SCDefaultLogInSessionService loginSource] */

undefined8 FUN_1056fbed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056fbedc; end: 1056fbee3; -[SCDefaultLogInSessionService setLoginSource:] */

void FUN_1056fbedc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1056fbee4; end: 1056fbf13; -[SCDefaultLogInSessionService .cxx_destruct] */

void FUN_1056fbee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056fbf14; end: 1056fbf77; -[SCPreferences lastLoginUsername] */

void FUN_1056fbf14(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110df8ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056fbf78; end: 1056fbf83; -[SCPreferences setLastLoginUsername:] */

void FUN_1056fbf78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110df8ed8);
  return;
}



/* Entry: 1056fbf84; end: 1056fbfe7; -[SCPreferences lastLoginPhoneNumber] */

void FUN_1056fbf84(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110df8ef8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af240;
  _objc_opt_class(PTR_PTR_1126af240);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056fbfe8; end: 1056fbff3; -[SCPreferences setLastLoginPhoneNumber:] */

void FUN_1056fbfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110df8ef8);
  return;
}



/* Entry: 1056fbff4; end: 1056fbfff; -[SCPreferences setHasLoggedInBefore:] */

void FUN_1056fbff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110df8f18);
  return;
}



/* Entry: 1056fc000; end: 1056fc063; -[SCPreferences loginFlowUUID] */

void FUN_1056fc000(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110df8f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056fc064; end: 1056fc06f; -[SCPreferences setLoginFlowUUID:] */

void FUN_1056fc064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110df8f38);
  return;
}



/* Entry: 1056fc070; end: 1056fc29f;  */

char * FUN_1056fc070(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108ab970);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_e0;
  pcStack_a8 = FUN_1056fc2a0;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126e9da8;
  pcStack_e0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar5);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = uVar6;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 1056fc2a0; end: 1056fc36b; -[SCAuthenticatedPasswordNetworkRequesterImpl initWithDefaultsAndNetworkServices:passwordHashRepository:userId:] */

undefined1 *
FUN_1056fc2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e9da8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056fc36c; end: 1056fc4d7; -[SCAuthenticatedPasswordNetworkRequesterImpl changePassword:successBlock:failureBlock:] */

void FUN_1056fc36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010bddc9c0(param_1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056fc4d8; end: 1056fc5eb;  */

void FUN_1056fc4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddca00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056fc5ec; end: 1056fc72b; -[SCAuthenticatedPasswordNetworkRequesterImpl _changePassword:successBlock:failureBlock:] */

void FUN_1056fc5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010af82634();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110df8f98;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110df8fb8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_68 = param_3;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  uVar1 = param_4;
  uVar11 = param_5;
  func_0x00010bddca40(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar11);
  puVar5 = puVar4;
  func_0x00010bdd1520(puVar4,param_2,&PTR____CFConstantStringClassReference_110df8f58);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar4 + 8);
  func_0x00010bfe4d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1056fc940;
  puStack_100 = &UNK_110884ec8;
  puStack_f8 = puVar2;
  _objc_retain(puVar2);
  uVar8 = uVar7;
  func_0x00010bf225e0(uVar7,param_2,1,puVar5,0,0,&puStack_118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar9 = *(undefined8 *)(puVar4 + 8);
  func_0x00010bfe4c00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar3;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1056fc984;
  puStack_130 = &UNK_11089e820;
  uStack_128 = uVar1;
  uStack_120 = uVar11;
  _objc_retain(uVar11);
  _objc_retain(uVar1);
  func_0x00010c25f600(uVar7,param_2,uVar8,0,uVar10,&puStack_148);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uVar8);
  _objc_release(puStack_f8);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(puVar5);
  return;
}



/* Entry: 1056fc72c; end: 1056fc93f; -[SCAuthenticatedPasswordNetworkRequesterImpl _changePasswordWithParameters:successBlock:failureBlock:] */

void FUN_1056fc72c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010bdd1520(param_1,param_2,&PTR____CFConstantStringClassReference_110df8f58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1056fc940;
  puStack_80 = &UNK_110884ec8;
  uStack_78 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010bf225e0(uVar4,param_2,1,lVar2,0,0,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1056fc984;
  puStack_b0 = &UNK_11089e820;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c25f600(uVar4,param_2,uVar5,0,uVar7,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1056fc940; end: 1056fc983;  */

void FUN_1056fc940(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290d20(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056fc984; end: 1056fca9f;  */

/* WARNING: Removing unreachable block (ram,0x0001056fca2c) */

void FUN_1056fc984(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    lVar2 = 0x20;
  }
  else {
    _objc_retain(param_6);
    lVar2 = 0x28;
    puVar1 = param_6;
  }
  (**(code **)(*(long *)(param_1 + lVar2) + 0x10))(*(long *)(param_1 + lVar2),param_4,puVar1);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1056fcaa0; end: 1056fcbd7; -[SCAuthenticatedPasswordNetworkRequesterImpl _changePasswordSuccess:response:responseDictionary:successBlock:failureBlock:] */

void FUN_1056fcaa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x000106b7f20c(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c080320();
  puVar1 = PTR_PTR_1126afca8;
  if ((int)uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010bf98d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
    _objc_release(uVar2);
    if (param_7 != 0) {
      uVar2 = param_4;
      func_0x00010bf98d60(param_4);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_7 + 0x10))(param_7,0,uVar2);
      _objc_release(uVar2);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdea40();
    _objc_release(uVar2);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056fcbd8; end: 1056fcd13; -[SCAuthenticatedPasswordNetworkRequesterImpl getPasswordStrength:quickCheck:successBlock:failureBlock:] */

void FUN_1056fcbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_4 & 1) == 0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110df8f98;
    uStack_70 = param_3;
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    puVar9 = &uStack_70;
    pppuVar11 = &ppuStack_78;
    uVar12 = 1;
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110df8f98;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110df8fd8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110dad378;
    uStack_58 = param_3;
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    puVar9 = &uStack_58;
    pppuVar11 = &ppuStack_68;
    uVar12 = 2;
  }
  func_0x00010bf72080(puVar2,param_2,puVar9,pppuVar11,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar10 = puVar2;
  uVar12 = param_5;
  uVar13 = param_6;
  func_0x00010be23f40(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  puVar3 = puVar2;
  func_0x00010bdd1520(puVar2,param_2,&PTR____CFConstantStringClassReference_110df8f78);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar2 + 8);
  func_0x00010bfe4d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1056fcf28;
  puStack_100 = &UNK_110884ec8;
  puStack_f8 = puVar10;
  _objc_retain(puVar10);
  uVar6 = uVar5;
  func_0x00010bf225e0(uVar5,param_2,1,puVar3,0,0,&puStack_118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(puVar2 + 8);
  func_0x00010bfe4c00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1056fcf6c;
  puStack_130 = &UNK_11089e820;
  uStack_128 = uVar12;
  uStack_120 = uVar13;
  _objc_retain(uVar13);
  _objc_retain(uVar12);
  func_0x00010c25f600(uVar5,param_2,uVar6,0,uVar8,&puStack_148);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uVar6);
  _objc_release(puStack_f8);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release(puVar3);
  return;
}



/* Entry: 1056fcd14; end: 1056fcf27; -[SCAuthenticatedPasswordNetworkRequesterImpl _getpasswordStrengthWithParameters:successBlock:failureBlock:] */

void FUN_1056fcd14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010bdd1520(param_1,param_2,&PTR____CFConstantStringClassReference_110df8f78);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1056fcf28;
  puStack_80 = &UNK_110884ec8;
  uStack_78 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010bf225e0(uVar4,param_2,1,lVar2,0,0,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1056fcf6c;
  puStack_b0 = &UNK_11089e820;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c25f600(uVar4,param_2,uVar5,0,uVar7,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1056fcf28; end: 1056fcf6b;  */

void FUN_1056fcf28(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290d20(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056fcf6c; end: 1056fd0ef;  */

/* WARNING: Removing unreachable block (ram,0x0001056fd018) */

void FUN_1056fcf6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar2 = param_4;
    func_0x000106b7f408(param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x20);
    uVar3 = uVar2;
    func_0x00010c25cb20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c149da0(uVar2);
    uVar5 = uVar2;
    func_0x00010c0cb140(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,uVar3,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1056fd0f0; end: 1056fd18f; -[SCAuthenticatedPasswordNetworkRequesterImpl _authURLForEndpoint:] */

void FUN_1056fd0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8670;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  func_0x00010bf10920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056fd190; end: 1056fd1cb; -[SCAuthenticatedPasswordNetworkRequesterImpl .cxx_destruct] */

void FUN_1056fd190(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056fd1cc; end: 1056fd1f7; +[SCGrapheneAvatarBuilderMetric updateAvatarSuccess] */

void FUN_1056fd1cc(void)

{
  _objc_alloc(PTR_PTR_1126bd568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fd1f8; end: 1056fd223; +[SCGrapheneAvatarBuilderMetric updateAvatarError] */

void FUN_1056fd1f8(void)

{
  _objc_alloc(PTR_PTR_1126bd568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fd224; end: 1056fd24f; +[SCGrapheneAvatarBuilderMetric createAvatarSuccess] */

void FUN_1056fd224(void)

{
  _objc_alloc(PTR_PTR_1126bd568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fd250; end: 1056fd27b; +[SCGrapheneAvatarBuilderMetric createAvatarError] */

void FUN_1056fd250(void)

{
  _objc_alloc(PTR_PTR_1126bd568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fd27c; end: 1056fd2a7; +[SCGrapheneAvatarBuilderMetric avatarBuilderLaunchSuccess] */

void FUN_1056fd27c(void)

{
  _objc_alloc(PTR_PTR_1126bd568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fd2a8; end: 1056fd2d3; +[SCGrapheneAvatarBuilderMetric avatarBuilderLaunchError] */

void FUN_1056fd2a8(void)

{
  _objc_alloc(PTR_PTR_1126bd568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fd2d4; end: 1056fd373; -[SCGrapheneAvatarBuilderMetric description] */

void FUN_1056fd2d4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8ff8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df8ff8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9db0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1056fd374; end: 1056fd4e7; -[SCGrapheneRegistry avatarBuilderGraphene] */

void FUN_1056fd374(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056fd3fc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfaf8 != -1) {
    func_0x00010002a2fc(0x1136bfaf8,&puStack_48);
  }
  uVar1 = uRam00000001136bfaf0;
  _objc_retain(uRam00000001136bfaf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056fd4e8; end: 1056fd5cb; -[SCBitmojiCameraAdaptorPermissionRequesterServiceProvider provide] */

void FUN_1056fd4e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd570;
  _objc_alloc(PTR_PTR_1126bd570);
  func_0x00010c035540();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056fd5cc; end: 1056fd60b;  */

void FUN_1056fd5cc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be72fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056fd60c; end: 1056fd6df; -[SCBitmojiCameraAdaptorPermissionRequesterServiceProvider _permissionRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fd60c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bd578;
  _objc_alloc(PTR_PTR_1126bd578);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127282a4;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bf2a280(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127282a8;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf10e60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035560(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056fd6e0; end: 1056fd723; -[SCBitmojiCameraAdaptorPermissionRequesterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fd6e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127282a8);
  _objc_destroyWeak(param_1 + _DAT_1127282a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127282a0);
  return;
}



/* Entry: 1056fd724; end: 1056fd807; -[SCBitmojiCreateFlowPreviewViewProviderServiceProvider provide] */

void FUN_1056fd724(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd580;
  _objc_alloc(PTR_PTR_1126bd580);
  func_0x00010c039e20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056fd808; end: 1056fd847;  */

void FUN_1056fd808(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be80000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056fd848; end: 1056fd8a7; -[SCBitmojiCreateFlowPreviewViewProviderServiceProvider _previewViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fd848(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bd588;
  _objc_alloc(PTR_PTR_1126bd588);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127282b0;
    _objc_loadWeakRetained(lVar2);
  }
  func_0x00010bffc240(puVar1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056fd8a8; end: 1056fd8df; -[SCBitmojiCreateFlowPreviewViewProviderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fd8a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127282b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127282ac);
  return;
}



/* Entry: 1056fd8e0; end: 1056fd9c3; -[SCBitmojiEditAvatarBuilderPreviewViewProviderServiceProvider provide] */

void FUN_1056fd8e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd580;
  _objc_alloc(PTR_PTR_1126bd580);
  func_0x00010c039e20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056fd9c4; end: 1056fda03;  */

void FUN_1056fd9c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be80000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056fda04; end: 1056fda63; -[SCBitmojiEditAvatarBuilderPreviewViewProviderServiceProvider _previewViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fda04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bd588;
  _objc_alloc(PTR_PTR_1126bd588);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127282b8;
    _objc_loadWeakRetained(lVar2);
  }
  func_0x00010bffc240(puVar1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056fda64; end: 1056fda9b; -[SCBitmojiEditAvatarBuilderPreviewViewProviderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fda64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127282b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127282b4);
  return;
}



/* Entry: 1056fda9c; end: 1056fdb3f; -[SCBitmojiCameraAdaptorPermissionRequester initWithPermissionRequester:captureDeviceAuthorizationChecker:] */

undefined1 *
FUN_1056fda9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9db8;
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



/* Entry: 1056fdb40; end: 1056fdbb7; -[SCBitmojiCameraAdaptorPermissionRequester isVideoCaptureAuthorized] */

uint FUN_1056fdb40(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0831c0();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0831a0();
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(uVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1056fdbb8; end: 1056fdbf7; -[SCBitmojiCameraAdaptorPermissionRequester isVideoCaptureDenied] */

undefined8 FUN_1056fdbb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0831a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1056fdbf8; end: 1056fdc47; -[SCBitmojiCameraAdaptorPermissionRequester requestAccessForVideoCaptureWithCompletionHandler:] */

void FUN_1056fdbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134dc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056fdc48; end: 1056fdc77; -[SCBitmojiCameraAdaptorPermissionRequester .cxx_destruct] */

void FUN_1056fdc48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056fdc78; end: 1056fdd37; -[SCBitmojiCameraAdaptorPreviewWrapperView didMoveToSuperview] */

void FUN_1056fdc78(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e9dc0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToSuperview_1125bb968);
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c29f120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != param_1) {
      return;
    }
    func_0x00010c29f120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    lVar1 = param_1;
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1056fdd38; end: 1056fdd57; -[SCBitmojiCameraAdaptorPreviewWrapperView viewfinder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fdd38(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127282c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fdd58; end: 1056fdd6b; -[SCBitmojiCameraAdaptorPreviewWrapperView setViewfinder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fdd58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127282c4,param_3);
  return;
}



/* Entry: 1056fdd6c; end: 1056fdd7b; -[SCBitmojiCameraAdaptorPreviewWrapperView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fdd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127282c4);
  return;
}



/* Entry: 1056fdd7c; end: 1056fddef; -[SCBitmojiCameraAdaptorPreviewViewProvider initWithCameraViewfinderServices:] */

undefined1 * FUN_1056fdd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9dc8;
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



/* Entry: 1056fddf0; end: 1056fe0ab; -[SCBitmojiCameraAdaptorPreviewViewProvider generateCaptureVideoPreviewView] */

void FUN_1056fddf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c18c560(lVar3,param_2,param_1);
  lVar2 = lVar3;
  func_0x00010c29f120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd590;
  _objc_alloc_init();
  func_0x00010c223140();
  func_0x00010befbb60(puVar4,param_2,lVar2);
  func_0x00010c219b60(lVar2,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  lStack_88 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf493a0(lVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  lStack_80 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010bf493a0(lVar11,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  lStack_78 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c2793a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010bf493a0(lVar14,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010beef8c0(puVar1,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar18);
  lVar3 = lVar3 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c29cd20();
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1056fe0ac; end: 1056fe0f3; -[SCBitmojiCameraAdaptorPreviewViewProvider viewfinderDidDetach:] */

void FUN_1056fe0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29cd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056fe0f4; end: 1056fe10b; -[SCBitmojiCameraAdaptorPreviewViewProvider delegate] */

void FUN_1056fe0f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056fe10c; end: 1056fe117; -[SCBitmojiCameraAdaptorPreviewViewProvider setDelegate:] */

void FUN_1056fe10c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1056fe118; end: 1056fe143; -[SCBitmojiCameraAdaptorPreviewViewProvider .cxx_destruct] */

void FUN_1056fe118(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056fe144; end: 1056fed7b; -[SCBitmojiEditAvatarBuilderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fe144(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined *puVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  ulong in_stack_fffffffffffffcd8;
  undefined8 uStack_f8;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar56 = (long)_DAT_1127282d0;
  lVar1 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb2ec0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 3) {
    lVar1 = param_1 + _DAT_1127282d4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf12d00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1335c0();
LAB_1056fe228:
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else if (lVar3 == 2) {
    lVar1 = param_1 + _DAT_1127282d4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf12d00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1326c0();
    goto LAB_1056fe228;
  }
  lVar1 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa0c20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar55 = param_1 + lVar56;
    _objc_loadWeakRetained();
    lVar4 = lVar55;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = lVar4;
    func_0x00010c0f0be0();
    _objc_release(lVar4);
    _objc_release(lVar55);
  }
  else {
    uStack_f8 = 1;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa0c20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar55 = param_1 + lVar56;
    _objc_loadWeakRetained();
    lVar4 = lVar55;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c063be0();
    _objc_release(lVar4);
    _objc_release(lVar55);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar3;
  func_0x00010c08fa60();
  if (lVar55 == 0) {
    uStack_70 = 0;
  }
  else {
    lVar55 = param_1 + lVar56;
    _objc_loadWeakRetained();
    lVar4 = lVar55;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = lVar4;
    func_0x00010c0643e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar55);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1abe0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar3;
  func_0x00010c08fa60();
  if (lVar55 == 0) {
    uStack_78 = 0;
  }
  else {
    lVar55 = param_1 + lVar56;
    _objc_loadWeakRetained();
    lVar4 = lVar55;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = lVar4;
    func_0x00010bf1abe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar55);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b1c10;
  _objc_alloc();
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  lVar1 = param_1;
  func_0x00010be418e0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + lVar56;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf13220();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar44 = PTR_PTR_1126bd598;
      _objc_alloc();
      lVar1 = param_1 + _DAT_1127282d8;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010bf89340();
      _objc_retainAutoreleasedReturnValue();
      lVar57 = (long)_DAT_1127282dc;
      lVar2 = param_1 + lVar57;
      _objc_loadWeakRetained(lVar2);
      lVar55 = lVar2;
      func_0x00010c2a3700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0312c0(puVar44,param_2,lVar3,lVar55,0);
      _objc_release(lVar55);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      uStack_88 = PTR_PTR_1126bd5a0;
      _objc_alloc();
      lVar55 = (long)_DAT_1127282e0;
      lVar1 = param_1 + lVar55;
      _objc_loadWeakRetained();
      lVar45 = lVar1;
      func_0x00010bf299a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + lVar55;
      _objc_loadWeakRetained();
      lVar46 = lVar2;
      func_0x00010bf29960();
      _objc_retainAutoreleasedReturnValue();
      lVar47 = lVar46;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + _DAT_1127282e4;
      _objc_loadWeakRetained();
      lVar48 = lVar3;
      func_0x00010c135640();
      _objc_retainAutoreleasedReturnValue();
      lVar55 = param_1 + lVar55;
      _objc_loadWeakRetained();
      lVar49 = lVar55;
      func_0x00010bf29940();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + _DAT_1127282e8;
      _objc_loadWeakRetained();
      lVar50 = lVar4;
      func_0x00010bf294e0();
      _objc_retainAutoreleasedReturnValue();
      lVar51 = lVar50;
      func_0x00010bf70fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar57 = param_1 + lVar57;
      _objc_loadWeakRetained();
      lVar52 = lVar57;
      func_0x00010c2a3700();
      _objc_retainAutoreleasedReturnValue();
      lVar53 = param_1 + _DAT_1127282ec;
      _objc_loadWeakRetained();
      lVar54 = lVar53;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffb5c0(uStack_88,param_2,lVar45,lVar47,lVar48,lVar49,lVar51,puVar44,lVar52,
                          in_stack_fffffffffffffcd8 & 0xffffffffffffff00,lVar54);
      _objc_release(lVar54);
      _objc_release(lVar53);
      _objc_release(lVar52);
      _objc_release(lVar57);
      _objc_release(lVar51);
      _objc_release(lVar50);
      _objc_release(lVar4);
      _objc_release(lVar49);
      _objc_release(lVar55);
      _objc_release(lVar48);
      _objc_release(lVar3);
      _objc_release(lVar47);
      _objc_release(lVar46);
      _objc_release(lVar2);
      _objc_release(lVar45);
      _objc_release(lVar1);
      _objc_release(puVar44);
      goto LAB_1056fe4e0;
    }
  }
  uStack_88 = (undefined *)0x0;
LAB_1056fe4e0:
  puVar44 = PTR_PTR_1126bd5a8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127282f0;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127282f4;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_1127282f8;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + _DAT_1127282fc;
  _objc_loadWeakRetained();
  lVar9 = lVar55;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112728300;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar12 = lVar57;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar12;
  func_0x00010bfb2ec0();
  lVar13 = param_1;
  func_0x00010bdd6f40(param_1,param_2,lVar53);
  lVar53 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar14 = lVar53;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf13220();
  lVar45 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar16 = lVar45;
  func_0x00010c0f1e60();
  lVar46 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar17 = lVar46;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar18 = lVar47;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bfa0c20();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar20 = lVar48;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bfcdc80();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_112728304;
  _objc_loadWeakRetained();
  lVar22 = lVar49;
  func_0x00010bfa0c00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_1127282d4;
  _objc_loadWeakRetained();
  lVar23 = lVar50;
  func_0x00010bf12d00();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_112728308;
  _objc_loadWeakRetained();
  lVar24 = lVar51;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11272830c;
  _objc_loadWeakRetained();
  lVar25 = lVar52;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_112728310;
  _objc_loadWeakRetained();
  lVar26 = lVar54;
  func_0x00010bf1b7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf131a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c0ee880();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112728314;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfbe0();
  lVar37 = param_1 + _DAT_11272831c;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c112480();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112728320;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c29cc80();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112728324;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_11272832c;
  _objc_loadWeakRetained();
  func_0x00010c05fe20(puVar44,param_2,lVar6,lVar2,lVar8,lVar10,lVar11,lVar13,0,lVar15,uStack_f8,
                      lVar16,0);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar54);
  _objc_release(lVar25);
  _objc_release(lVar52);
  _objc_release(lVar24);
  _objc_release(lVar51);
  _objc_release(lVar23);
  _objc_release(lVar50);
  _objc_release(lVar22);
  _objc_release(lVar49);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar48);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar47);
  _objc_release(lVar17);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar14);
  _objc_release(lVar53);
  _objc_release(lVar12);
  _objc_release(lVar57);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar55);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  func_0x00010c18b5e0(puVar44,param_2,param_1);
  param_1 = param_1 + lVar56;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar44);
  _objc_release(uStack_88);
  _objc_release(puVar5);
  _objc_release(uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_70);
  return;
}



/* Entry: 1056fed7c; end: 1056fed93; -[SCBitmojiEditAvatarBuilderEntryPoint _builderFlowModeForFlowMode:] */

undefined8 FUN_1056fed7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 == 3) {
    uVar1 = 3;
  }
  if (param_3 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1056fed94; end: 1056fee0b; -[SCBitmojiEditAvatarBuilderEntryPoint _isLiveMirrorSupported] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1056fed94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112728330;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f9c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c083180();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1056fee0c; end: 1056fee97; -[SCBitmojiEditAvatarBuilderEntryPoint avatarComposerBuilderViewControllerDidTapExit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fee0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127282d0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ab00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056fee98; end: 1056fef23; -[SCBitmojiEditAvatarBuilderEntryPoint avatarComposerBuilderViewControllerDidFinishWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fee98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127282d0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ab20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056fef24; end: 1056feff7; -[SCBitmojiEditAvatarBuilderEntryPoint avatarComposerBuilderViewControllerDidSaveOutfitChange:avatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056fef24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_1127282d0;
  uVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1b340(lVar5);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056feff8; end: 1056ff163; -[SCBitmojiEditAvatarBuilderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056feff8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728328,0);
  _objc_storeStrong(param_1 + _DAT_112728318,0);
  _objc_destroyWeak(param_1 + _DAT_11272832c);
  _objc_destroyWeak(param_1 + _DAT_112728324);
  _objc_destroyWeak(param_1 + _DAT_112728320);
  _objc_destroyWeak(param_1 + _DAT_1127282e4);
  _objc_destroyWeak(param_1 + _DAT_1127282e8);
  _objc_destroyWeak(param_1 + _DAT_1127282e0);
  _objc_destroyWeak(param_1 + _DAT_11272831c);
  _objc_destroyWeak(param_1 + _DAT_112728330);
  _objc_destroyWeak(param_1 + _DAT_1127282d8);
  _objc_destroyWeak(param_1 + _DAT_11272830c);
  _objc_destroyWeak(param_1 + _DAT_112728314);
  _objc_destroyWeak(param_1 + _DAT_112728338);
  _objc_destroyWeak(param_1 + _DAT_112728300);
  _objc_destroyWeak(param_1 + _DAT_1127282fc);
  _objc_destroyWeak(param_1 + _DAT_1127282f4);
  _objc_destroyWeak(param_1 + _DAT_1127282f8);
  _objc_destroyWeak(param_1 + _DAT_1127282f0);
  _objc_destroyWeak(param_1 + _DAT_112728310);
  _objc_destroyWeak(param_1 + _DAT_1127282ec);
  _objc_destroyWeak(param_1 + _DAT_112728304);
  _objc_destroyWeak(param_1 + _DAT_1127282dc);
  _objc_destroyWeak(param_1 + _DAT_1127282d4);
  _objc_destroyWeak(param_1 + _DAT_112728308);
  _objc_destroyWeak(param_1 + _DAT_112728334);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127282d0);
  return;
}



/* Entry: 1056ff164; end: 1056ff1cb; -[SCAvatarBuilderInAppBrowserPresenter initWithUIContainer:] */

undefined1 * FUN_1056ff164(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  FUN_1056ff568();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x18) = 0;
  }
  func_0x0001056ff588();
  return puVar1;
}



/* Entry: 1056ff1cc; end: 1056ff2ef; -[SCAvatarBuilderInAppBrowserPresenter presentWithUrl:] */

void FUN_1056ff1cc(void)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  FUN_1056ff568();
  _os_unfair_lock_lock(unaff_x20 + 0x18);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar1;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(unaff_x20 + 0x18);
    _objc_initWeak(auStack_38);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain();
    func_0x0001056ff578();
    func_0x00010c0d9840(*(undefined8 *)(unaff_x20 + 0x10));
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x00010c272120(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x19);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _os_unfair_lock_unlock(unaff_x20 + 0x18);
    uVar2 = 0;
  }
  func_0x0001056ff588();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056ff2f0; end: 1056ff323;  */

void FUN_1056ff2f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ff324; end: 1056ff393; -[SCAvatarBuilderInAppBrowserPresenter presentSystemBrowserWithUrl:] */

void FUN_1056ff324(void)

{
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001056ff578();
  func_0x0001056ff588();
  return;
}



/* Entry: 1056ff394; end: 1056ff41b;  */

void FUN_1056ff394(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf2cf00();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1056ff41c; end: 1056ff4ab; -[SCAvatarBuilderInAppBrowserPresenter _presentWebViewWithUrl:] */

void FUN_1056ff41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bd5b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001056ff588();
  func_0x00010c057840(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1fe4c0(puVar1,param_2,param_1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056ff4ac; end: 1056ff4b7; -[SCAvatarBuilderInAppBrowserPresenter pushToValdiMarshaller:] */

undefined8 FUN_1056ff4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df148;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010af9d7f0();
  return param_3;
}


