/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a4c414; end: 105a4c49f; +[SIGAlertDialog lowStorageAlert] */

void FUN_105a4c414(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18498,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e184b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e184b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc9c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a4c4a0; end: 105a4c5c3; +[SIGAlertDialog _alertWithTitle:description:] */

void FUN_105a4c4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a4c5c4; end: 105a4c5d3;  */

void FUN_105a4c5c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a4c5d4; end: 105a4c8af; -[SCSpectaclesFirmwareTag initWithDictionary:] */

undefined1 * FUN_105a4c5d4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126eb670;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar5);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar5);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar5);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126c0c68;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126c0c68;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)puVar3;
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = -1;
    uVar6 = 4;
    do {
      puVar3 = puVar2;
      func_0x00010c0720c0();
      if (((ulong)puVar3 & 1) != 0) {
        uVar6 = lVar7 + 1;
        break;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    if (2 < uVar6) {
      uVar6 = 3;
    }
    *(ulong *)((long)puVar1 + 0x48) = uVar6;
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c0c70;
      func_0x00010c087d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0b6e60();
    }
    else {
      func_0x00010c08fa60(puVar2);
      puVar3 = puVar2;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c067fc0();
    }
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a4c8b0; end: 105a4c8b7; -[SCSpectaclesFirmwareTag name] */

undefined8 FUN_105a4c8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a4c8b8; end: 105a4c8bf; -[SCSpectaclesFirmwareTag tagDescription] */

undefined8 FUN_105a4c8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a4c8c0; end: 105a4c8c7; -[SCSpectaclesFirmwareTag lastEditDatetime] */

undefined8 FUN_105a4c8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a4c8c8; end: 105a4c8cf; -[SCSpectaclesFirmwareTag lastEditUser] */

undefined8 FUN_105a4c8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a4c8d0; end: 105a4c8d7; -[SCSpectaclesFirmwareTag latestVersion] */

undefined8 FUN_105a4c8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a4c8d8; end: 105a4c8df; -[SCSpectaclesFirmwareTag minimumAcceptedVersion] */

undefined8 FUN_105a4c8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a4c8e0; end: 105a4c8e7; -[SCSpectaclesFirmwareTag hardwareMajorNumber] */

undefined8 FUN_105a4c8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105a4c8e8; end: 105a4c8ef; -[SCSpectaclesFirmwareTag isRequired] */

undefined1 FUN_105a4c8e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a4c8f0; end: 105a4c8f7; -[SCSpectaclesFirmwareTag category] */

undefined8 FUN_105a4c8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105a4c8f8; end: 105a4c957; -[SCSpectaclesFirmwareTag .cxx_destruct] */

void FUN_105a4c8f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a4c958; end: 105a4ca83; -[SCSpectaclesAuthorizationManager startAuthzAuthenticationForDevice:clientId:] */

void FUN_105a4c958(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a940();
  func_0x00010bfa8e20(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4ca84; end: 105a4cb63;  */

void FUN_105a4ca84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    uVar2 = param_2;
    func_0x00010bf111c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf3ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c124b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b680(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a4cb64; end: 105a4cb67;  */

void FUN_105a4cb64(void)

{
  return;
}



/* Entry: 105a4cb68; end: 105a4cca3; -[SCSpectaclesAuthorizationManager startAccessTokenAuthenticationForClientId:isPreHermosa:scopes:] */

void FUN_105a4cb68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010bfa8e20(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4cca4; end: 105a4ccff;  */

void FUN_105a4cca4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be67220(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a4cd00; end: 105a4cd33;  */

void FUN_105a4cd00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf10ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a4cd34; end: 105a4cec3; -[SCSpectaclesAuthorizationManager _obtainAccessTokenFromResult:clientId:] */

void FUN_105a4cd34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010bf111c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3ef80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c124b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bfa9b60(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4cec4; end: 105a4cf5b;  */

void FUN_105a4cec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c15b460();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a4cf5c; end: 105a4cf8f;  */

void FUN_105a4cf5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf10ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a4cf90; end: 105a4cfa7; -[SCSpectaclesAuthorizationManager delegate] */

void FUN_105a4cf90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a4cfa8; end: 105a4cfeb; -[SCSpectaclesAuthorizationManager .cxx_destruct] */

void FUN_105a4cfa8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a4cfec; end: 105a4d023; -[SCSpectaclesAuthorizationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a4cfec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272de50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272de4c);
  return;
}



/* Entry: 105a4d024; end: 105a4d02b; -[SCSpectaclesOAuth2 invalidate] */

void FUN_105a4d024(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ae810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setInvalidated__112649428,1);
  return;
}



/* Entry: 105a4d02c; end: 105a4d533; -[SCSpectaclesOAuth2 fetchNewTokensWithClientId:completionPerformer:successBlock:failureBlock:isPreHermosa:scopes:] */

void FUN_105a4d02c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined1 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_140 [8];
  undefined1 uStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_8;
  func_0x00010bf529e0();
  uVar2 = param_8;
  if (uVar1 == 0) {
    uVar2 = param_1;
    func_0x00010be91820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
  }
  uVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar3 = param_1;
    func_0x00010c06a280();
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010c156da0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf15de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010c156da0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf15de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar6;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010bdc25a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110db9558;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110db95f8;
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110dfe098;
      uVar1 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110db9578;
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110dfbc58;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e18d98;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110db9598;
      uVar3 = param_1;
      uStack_b0 = uVar1;
      lStack_a8 = param_3;
      func_0x00010be91740();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110db95d8;
      uVar8 = uVar2;
      uStack_98 = uVar3;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110db9618;
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110e18df8;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e18e18;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110dc9298;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_90 = uVar8;
      puStack_88 = puVar5;
      puStack_78 = puVar7;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_initWeak(auStack_130,param_1);
      uVar1 = param_1;
      func_0x00010c15f420();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_140,auStack_130);
      _objc_retain(param_4);
      _objc_retain(param_6);
      _objc_retain(puVar5);
      _objc_retain(puVar6);
      uStack_138 = param_7;
      _objc_retain(param_5);
      _objc_retain(uVar2);
      func_0x00010bfa8e40(uVar3);
      _objc_release(uVar8);
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_130);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      goto LAB_105a4d498;
    }
  }
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_105a4d534;
  puStack_110 = &UNK_110849530;
  _objc_retain(param_6);
  puStack_108 = param_6;
  func_0x00010c0f7fc0(param_4);
  puVar5 = puStack_108;
LAB_105a4d498:
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_130);
  __Unwind_Resume();
  lVar9 = *(long *)(param_3 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar9 + 0x10))(lVar9,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105a4d534; end: 105a4d587;  */

void FUN_105a4d534(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a4d588; end: 105a4d70b;  */

void FUN_105a4d588(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_5 == 0)) {
      lVar2 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = *(long *)(param_1 + 0x40);
        _objc_retain(lVar3);
        func_0x00010c0f7fc0(uVar4);
      }
      else {
        lVar3 = lVar1;
        func_0x00010be91740(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be37ae0(lVar1);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      func_0x00010be2d060(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a4d70c; end: 105a4d75f;  */

void FUN_105a4d70c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a4d760; end: 105a4dacb; -[SCSpectaclesOAuth2 fetchRefreshTokenWithClientId:authzCode:codeVerifier:redirectUri:completionPerformer:successBlock:failureBlock:] */

void FUN_105a4d760(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010c06a280();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e18e78;
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110e18e58;
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110dfe098;
      uVar1 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110db9578;
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110db9598;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110db9558;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110e18e98;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_98 = uVar1;
      lStack_90 = param_3;
      uStack_88 = param_6;
      uStack_80 = param_4;
      uStack_78 = param_5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_initWeak(auStack_100,param_1);
      uVar1 = param_1;
      func_0x00010c15f420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_108,auStack_100);
      _objc_retain(param_7);
      _objc_retain(param_9);
      _objc_retain(param_8);
      func_0x00010bfa9b80(uVar2);
      _objc_release(uVar4);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(param_8);
      _objc_release(param_9);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_108);
      _objc_destroyWeak(auStack_100);
      goto LAB_105a4da20;
    }
  }
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105a4dacc;
  puStack_e0 = &UNK_110849530;
  _objc_retain(param_9);
  puStack_d8 = param_9;
  func_0x00010c0f7fc0(param_7);
  puVar3 = puStack_d8;
LAB_105a4da20:
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_100);
  __Unwind_Resume();
  lVar5 = *(long *)(param_3 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105a4dacc; end: 105a4db1f;  */

void FUN_105a4dacc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a4db20; end: 105a4dd3f;  */

void FUN_105a4db20(long param_1,long param_2,undefined8 param_3,undefined *param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_5 == 0)) {
      puVar2 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar5 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar7);
      if (((ulong)puVar5 & 1) == 0) {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar5 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar7);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((ulong)puVar5 & 1) == 0) {
          puVar7 = (undefined *)0x0;
        }
        else {
          func_0x00010c067fc0(puVar4);
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        _objc_retain(puVar4);
        puVar7 = puVar4;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar6);
      _objc_retain(puVar7);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      func_0x00010c0f7fc0(uVar8);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(uVar6);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar7);
    }
    else {
      func_0x00010be2d040(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a4dd40; end: 105a4dd83;  */

void FUN_105a4dd40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010c2827c0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000105a4dd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,lVar4 * 1000);
  return;
}



/* Entry: 105a4dd84; end: 105a4de1b; -[SCSpectaclesOAuth2 _requestScopesIsPreHermosa:] */

void FUN_105a4dd84(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar3 = &ppuStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    ppuStack_30 = &PTR____CFConstantStringClassReference_110e18d58;
    ppuStack_28 = &PTR____CFConstantStringClassReference_110e18d38;
    uVar4 = 2;
  }
  else {
    ppuStack_20 = &PTR____CFConstantStringClassReference_110e18cf8;
    pppuVar3 = &ppuStack_20;
    uVar4 = 1;
  }
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar3,uVar4);
  iVar2 = (int)pppuVar3;
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e18d18;
    if (iVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e18d78;
    }
    _objc_retain(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a4de1c; end: 105a4de57; -[SCSpectaclesOAuth2 _requestRedirectURLIsPreHermosa:] */

void FUN_105a4de1c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18d18;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e18d78;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105a4de58; end: 105a4df83; -[SCSpectaclesOAuth2 _handleOAuth2NetworkErrorForEndpoint:errorCode:completionPerformer:error:failureBlock:] */

void FUN_105a4de58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  if (param_6 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_6,*(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  func_0x00010c00e2e0();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105a4df84;
  puStack_58 = &UNK_11084aaa8;
  puStack_50 = puVar2;
  uStack_48 = param_7;
  _objc_retain();
  _objc_retain(param_7);
  func_0x00010c0f7fc0(param_5,param_2,&puStack_70);
  _objc_release(param_5);
  _objc_release(puStack_50);
  _objc_release(uStack_48);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 105a4df84; end: 105a4df93;  */

void FUN_105a4df84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a4df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105a4df94; end: 105a4e2b7; -[SCSpectaclesOAuth2 _implicitApprovalForApprovalToken:state:codeVerifier:redirectUri:completionPerformer:successBlock:failureBlock:isPreHermosa:scopes:] */

void FUN_105a4df94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  uVar1 = param_1;
  func_0x00010c06a280();
  if ((int)uVar1 == 0) {
    _objc_initWeak(auStack_c0,param_1);
    func_0x00010c15f420();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dfe078;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e18f38;
    uStack_78 = param_12;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_80 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_7;
    func_0x00010c11de00(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_c0);
    _objc_retain(param_7);
    _objc_retain(param_9);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    func_0x00010bfa51a0(uVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
  }
  else {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105a4e2b8;
    puStack_a0 = &UNK_110849530;
    _objc_retain(param_9);
    uStack_98 = param_9;
    func_0x00010c0f7fc0(param_7);
    _objc_release(uStack_98);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  lVar4 = *(long *)(param_3 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a4e2b8; end: 105a4e30b;  */

void FUN_105a4e2b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a4e30c; end: 105a4e577;  */

void FUN_105a4e30c(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_5 == 0)) {
      uVar2 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar6 = *(ulong *)(param_1 + 0x40);
        _objc_retain(uVar6);
        func_0x00010c0f7fc0(uVar4);
      }
      else {
        uVar6 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar6 == 0) || (uVar3 = uVar6, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          puVar5 = *(undefined **)(param_1 + 0x40);
          _objc_retain(puVar5);
          func_0x00010c0f7fc0(uVar4);
        }
        else {
          puVar5 = PTR_PTR_1126c18b8;
          _objc_alloc_init();
          func_0x00010c16cac0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c17dcc0(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c1e9340(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          _objc_retain(uVar4);
          _objc_retain(puVar5);
          func_0x00010c0f7fc0(uVar7);
          _objc_release(puVar5);
          _objc_release(uVar4);
        }
        _objc_release(puVar5);
      }
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    else {
      func_0x00010be2d060(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a4e578; end: 105a4e65f;  */

void FUN_105a4e578(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a4e660; end: 105a4e827; -[SCSpectaclesOAuth2 _handleOAuth2NetworkErrorForEndpoint:errorCode:completionPerformer:responseData:error:failureBlock:] */

void FUN_105a4e660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  if (param_7 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_7,*(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
  }
  lVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_2,&PTR____CFConstantStringClassReference_110daeeb8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c1d0640(puVar1,param_2,lVar2,*(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568
                       );
  }
  lVar3 = param_6;
  func_0x00010c0e00e0(param_6,param_2,&PTR____CFConstantStringClassReference_110dca358);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar1,param_2,lVar3,
                        *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570);
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  func_0x00010c00e2e0();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a4e828;
  puStack_68 = &UNK_11084aaa8;
  puStack_60 = puVar4;
  uStack_58 = param_8;
  _objc_retain();
  _objc_retain(param_8);
  func_0x00010c0f7fc0(param_5,param_2,&puStack_80);
  _objc_release(param_5);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(puVar4);
  _objc_release(param_8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 105a4e828; end: 105a4e837;  */

void FUN_105a4e828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a4e834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105a4e838; end: 105a4e843; -[SCSpectaclesOAuth2 invalidated] */

byte FUN_105a4e838(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 105a4e844; end: 105a4e84b; -[SCSpectaclesOAuth2 setInvalidated:] */

void FUN_105a4e844(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105a4e84c; end: 105a4e853; -[SCSpectaclesOAuth2 userId] */

undefined8 FUN_105a4e84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a4e854; end: 105a4e85b; -[SCSpectaclesOAuth2 performer] */

undefined8 FUN_105a4e854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a4e85c; end: 105a4e863; -[SCSpectaclesOAuth2 serverMetadataFetcher] */

undefined8 FUN_105a4e85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a4e864; end: 105a4e89f; -[SCSpectaclesOAuth2 .cxx_destruct] */

void FUN_105a4e864(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a4e8a0; end: 105a4e913; -[SCSpectaclesCrashContext initWithAppInsightsMetadataStorage:] */

undefined1 * FUN_105a4e8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb688;
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



/* Entry: 105a4e914; end: 105a4e977; -[SCSpectaclesCrashContext setHasConnectedDevice:] */

void FUN_105a4e914(long param_1,undefined8 param_2,uint param_3)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(byte *)(param_1 + 0x12) != param_3) {
    *(char *)(param_1 + 0x12) = (char)param_3;
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a4e978; end: 105a4ea0f; -[SCSpectaclesCrashContext setConnectedDeviceState:] */

void FUN_105a4e978(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(ulong *)(param_1 + 0x18);
  if ((uVar1 != param_3) && (func_0x00010c0720c0(uVar1,param_2,param_3), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar2);
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4ea10; end: 105a4ea97; -[SCSpectaclesCrashContext setNumberUnPairedDevices:] */

void FUN_105a4ea10(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x20) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = param_3;
    _objc_release(uVar1);
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4ea98; end: 105a4eb1f; -[SCSpectaclesCrashContext setNumberPairedDevices:] */

void FUN_105a4ea98(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x28) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4eb20; end: 105a4ebb7; -[SCSpectaclesCrashContext setPairingSessionId:] */

void FUN_105a4eb20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(ulong *)(param_1 + 0x30);
  if ((uVar1 != param_3) && (func_0x00010c0720c0(uVar1,param_2,param_3), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar2);
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4ebb8; end: 105a4ec4f; -[SCSpectaclesCrashContext setTransferSessionID:] */

void FUN_105a4ebb8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(ulong *)(param_1 + 0x38);
  if ((uVar1 != param_3) && (func_0x00010c0720c0(uVar1,param_2,param_3), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar2);
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4ec50; end: 105a4ecb3; -[SCSpectaclesCrashContext setMemoriesOnScreen:] */

void FUN_105a4ec50(long param_1,undefined8 param_2,uint param_3)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(byte *)(param_1 + 0x14) != param_3) {
    *(char *)(param_1 + 0x14) = (char)param_3;
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a4ecb4; end: 105a4ed17; -[SCSpectaclesCrashContext setSpectaclesSettingsOnScreen:] */

void FUN_105a4ecb4(long param_1,undefined8 param_2,uint param_3)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(byte *)(param_1 + 0x15) != param_3) {
    *(char *)(param_1 + 0x15) = (char)param_3;
    func_0x00010bed63a0(param_1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a4ed18; end: 105a4eef3; -[SCSpectaclesCrashContext _updateCrashContext] */

/* WARNING: Possible PIC construction at 0x000105a4ed74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4edac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4eddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ee10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ee64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ee98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4eec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ee30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a4ee9c) */
/* WARNING: Removing unreachable block (ram,0x000105a4eeb8) */
/* WARNING: Removing unreachable block (ram,0x000105a4ee68) */
/* WARNING: Removing unreachable block (ram,0x000105a4ee14) */
/* WARNING: Removing unreachable block (ram,0x000105a4ee34) */
/* WARNING: Removing unreachable block (ram,0x000105a4ee74) */
/* WARNING: Removing unreachable block (ram,0x000105a4ee88) */
/* WARNING: Removing unreachable block (ram,0x000105a4ee40) */
/* WARNING: Removing unreachable block (ram,0x000105a4ede0) */
/* WARNING: Removing unreachable block (ram,0x000105a4ee20) */
/* WARNING: Removing unreachable block (ram,0x000105a4edec) */
/* WARNING: Removing unreachable block (ram,0x000105a4edb0) */
/* WARNING: Removing unreachable block (ram,0x000105a4edb8) */
/* WARNING: Removing unreachable block (ram,0x000105a4ed78) */
/* WARNING: Removing unreachable block (ram,0x000105a4ed80) */
/* WARNING: Removing unreachable block (ram,0x000105a4ed9c) */
/* WARNING: Removing unreachable block (ram,0x000105a4eecc) */
/* WARNING: Removing unreachable block (ram,0x000105a4eed4) */

void FUN_105a4ed18(long param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c067ec0();
  *(bool *)(param_1 + 0x10) = 0 < iVar2;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0 < iVar2;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | *(byte *)(param_1 + 0x12);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (iVar2 < 1) {
    ppuVar1 = (undefined **)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea3150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCrashLoggerObjectValue_forKe_1125865f8,ppuVar1,
             &PTR____CFConstantStringClassReference_110e18f78);
  return;
}



/* Entry: 105a4eef4; end: 105a4ef77; -[SCSpectaclesCrashContext _setCrashLoggerObjectValue:forKey:] */

void FUN_105a4eef4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c12d3e0();
  }
  else {
    func_0x00010c1d07a0();
  }
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4ef78; end: 105a4ef7f; -[SCSpectaclesCrashContext spectaclesActive] */

undefined1 FUN_105a4ef78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105a4ef80; end: 105a4ef87; -[SCSpectaclesCrashContext spectaclesWasActive] */

undefined1 FUN_105a4ef80(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 105a4ef88; end: 105a4ef8f; -[SCSpectaclesCrashContext hasConnectedDevice] */

undefined1 FUN_105a4ef88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 105a4ef90; end: 105a4ef97; -[SCSpectaclesCrashContext hadConnectedDevice] */

undefined1 FUN_105a4ef90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 105a4ef98; end: 105a4ef9f; -[SCSpectaclesCrashContext connectedDeviceState] */

undefined8 FUN_105a4ef98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a4efa0; end: 105a4efa7; -[SCSpectaclesCrashContext numberUnPairedDevices] */

undefined8 FUN_105a4efa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a4efa8; end: 105a4efaf; -[SCSpectaclesCrashContext numberPairedDevices] */

undefined8 FUN_105a4efa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a4efb0; end: 105a4efb7; -[SCSpectaclesCrashContext pairingSessionId] */

undefined8 FUN_105a4efb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a4efb8; end: 105a4efbf; -[SCSpectaclesCrashContext transferSessionID] */

undefined8 FUN_105a4efb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a4efc0; end: 105a4efc7; -[SCSpectaclesCrashContext memoriesOnScreen] */

undefined1 FUN_105a4efc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 105a4efc8; end: 105a4efcf; -[SCSpectaclesCrashContext spectaclesSettingsOnScreen] */

undefined1 FUN_105a4efc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 105a4efd0; end: 105a4f02f; -[SCSpectaclesCrashContext .cxx_destruct] */

void FUN_105a4efd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a4f030; end: 105a4f1cb; -[SCSpectaclesCrashManager sendCrashWithCrashInfo:] */

void FUN_105a4f030(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf53f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf54040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c23ca00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c086000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf0ce00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a4f1cc;
  puStack_70 = &UNK_110858d00;
  uStack_68 = param_3;
  _objc_retain(param_3);
  func_0x00010c133c80(uVar9,param_2,uVar1,uVar3,uVar4,uVar5,uVar6,uVar8,&puStack_88);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4f1cc; end: 105a4f25f;  */

void FUN_105a4f1cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0ce00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010c12cc40(puVar1,param_2,uVar3,&uStack_38);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105a4f260; end: 105a4f28f; -[SCSpectaclesCrashManager .cxx_destruct] */

void FUN_105a4f260(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a4f290; end: 105a4f3fb; -[SCSpectaclesCrashReport jsonString] */

void FUN_105a4f290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010bfb0d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110e184f8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c23e6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e184d8);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c15e740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e190d8);
  _objc_release(uVar2);
  func_0x00010bf54020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110e190f8);
  _objc_release(param_1);
  uStack_38 = 0;
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a4f3fc; end: 105a4f603; -[SCSpectaclesCrashReport simulatedStackTrace] */

void FUN_105a4f3fc(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf53ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2);
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_opt_isKindOfClass(uVar9,param_2);
      if ((uVar9 & 1) != 0) {
        lVar6 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(puVar2);
        _objc_release(lVar6);
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 105a4f604; end: 105a4f60b;  */

void FUN_105a4f604(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 105a4f60c; end: 105a4f60f; -[SCSpectaclesShakeToReportInfoProviderEntryPoint begin] */

void FUN_105a4f60c(void)

{
  return;
}



/* Entry: 105a4f610; end: 105a4f65f; -[SCSpectaclesShakeToReportInfoProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a4f610(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272dea8);
  _objc_destroyWeak(param_1 + _DAT_11272dea4);
  _objc_destroyWeak(param_1 + _DAT_11272dea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272de9c);
  return;
}



/* Entry: 105a4f660; end: 105a4f717; -[SCSpectaclesSystemSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a4f660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c18c0;
  _objc_alloc(PTR_PTR_1126c18c0);
  lVar2 = param_1 + _DAT_11272deac;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfc0fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b880(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c18c8;
  _objc_alloc(PTR_PTR_1126c18c8);
  func_0x00010c050060();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11272deb0),param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a4f718; end: 105a4f753; -[SCSpectaclesSystemSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a4f718(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272deb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272deac);
  return;
}



/* Entry: 105a4f754; end: 105a4f973; -[SCSpectaclesSystemSettingsManager initWithMessageSender:] */

undefined1 * FUN_105a4f754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb698;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x000106f9a77c(param_3,&PTR____CFConstantStringClassReference_110e19158,
                        &PTR___NSConcreteGlobalBlock_1108cf3f0);
    func_0x000106f9a78c(param_3,&PTR____CFConstantStringClassReference_110e19158,
                        &PTR___NSConcreteGlobalBlock_1108cf430);
    func_0x000106f9a77c(param_3,&PTR____CFConstantStringClassReference_110e19178,
                        &PTR___NSConcreteGlobalBlock_1108cf450);
    puVar3 = PTR_PTR_1126c18e0;
    _objc_alloc_init(PTR_PTR_1126c18e0);
    func_0x000106ec5470(puVar1,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a4f974; end: 105a4fa63;  */

void FUN_105a4f974(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c13ba40();
  if ((int)uVar1 == 0x129) {
    uVar1 = param_2;
    func_0x00010bfca2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c227e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b8600(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72060(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a4fa64; end: 105a4fd6f;  */

/* WARNING: Possible PIC construction at 0x000105a4fb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4fe28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ff24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ff3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a4ff28) */
/* WARNING: Removing unreachable block (ram,0x000105a4fe2c) */
/* WARNING: Removing unreachable block (ram,0x000105a4fe40) */
/* WARNING: Removing unreachable block (ram,0x000105a4fb64) */
/* WARNING: Removing unreachable block (ram,0x000105a4fcd4) */
/* WARNING: Removing unreachable block (ram,0x000105a4ff40) */
/* WARNING: Removing unreachable block (ram,0x000105a4ff70) */
/* WARNING: Removing unreachable block (ram,0x000105a4ff7c) */

void FUN_105a4fa64(undefined8 param_1,undefined8 ***param_2)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 ***pppuVar6;
  undefined **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuStack_3b0;
  long lStack_3a8;
  undefined8 **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined1 **ppuStack_390;
  code *pcStack_388;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_270;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *apuStack_108 [17];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c18d0;
  _objc_alloc_init();
  puStack_1e8 = (undefined8 *)0x0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_2);
  pppuVar2 = param_2;
  func_0x00010bf52a60();
  if (pppuVar2 == (undefined8 ***)0x0) {
    _objc_release(param_2);
    ppuVar7 = apuStack_108;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    apuStack_108[0] = puVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    ___stack_chk_fail();
    pcStack_1f8 = FUN_105a4fd70;
    lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar7);
    puStack_328 = (undefined8 *)0x0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    ppuVar5 = ppuVar7;
    func_0x00010bf52a60();
    if (ppuVar5 == (undefined **)0x0) {
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
        return;
      }
      ___stack_chk_fail();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      pcStack_388 = FUN_105a4ffe0;
      lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_3b0 = pppuVar6;
      ppuStack_3a0 = param_2;
      ppuStack_398 = ppuVar7;
      ppuStack_390 = &puStack_200;
      _objc_retain(pppuVar6);
      param_2 = &ppuStack_3b0;
      func_0x00010bf72080(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8)
      goto _objc_autoreleaseReturnValue;
      ___stack_chk_fail();
      ppuVar8 = pppuVar6[4];
    }
    else {
      if (*plStack_320 != *plStack_320) {
        _objc_enumerationMutation(ppuVar7);
      }
      ppuVar8 = (undefined8 **)*puStack_328;
      param_2 = (undefined8 ***)param_2[4];
    }
  }
  else {
    if (*plStack_1e0 != *plStack_1e0) {
      _objc_enumerationMutation(param_2);
    }
    ppuVar8 = (undefined8 **)*puStack_1e8;
    puVar1 = PTR_PTR_1126c18d8;
    _objc_alloc_init(PTR_PTR_1126c18d8);
    ppuVar3 = ppuVar8;
    func_0x00010c227ea0(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe3c0(puVar1);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_objectForKeyedSubscript__112615a50,ppuVar8);
  return;
}



/* Entry: 105a4fd70; end: 105a4ffdf; -[SCSpectaclesSystemSettingsManager makePropertiesForFetchSettingsResponse:] */

/* WARNING: Possible PIC construction at 0x000105a4fe28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ff24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a4ff3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a4ff28) */
/* WARNING: Removing unreachable block (ram,0x000105a4fe2c) */
/* WARNING: Removing unreachable block (ram,0x000105a4fe40) */
/* WARNING: Removing unreachable block (ram,0x000105a4ff40) */
/* WARNING: Removing unreachable block (ram,0x000105a4ff70) */
/* WARNING: Removing unreachable block (ram,0x000105a4ff7c) */

void FUN_105a4fd70(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_138 = (undefined8 *)0x0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    pcStack_198 = FUN_105a4ffe0;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1c0 = param_2;
    lStack_1b0 = param_1;
    lStack_1a8 = param_3;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain(param_2);
    plVar2 = &lStack_1c0;
    func_0x00010bf72080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    if (*plStack_130 != *plStack_130) {
      _objc_enumerationMutation(param_3);
    }
    uVar4 = *puStack_138;
    plVar2 = *(long **)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(plVar2,PTR_s_objectForKeyedSubscript__112615a50,uVar4);
  return;
}



/* Entry: 105a4ffe0; end: 105a50073;  */

void FUN_105a4ffe0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_30 = param_2;
  _objc_retain(param_2);
  plVar2 = &lStack_30;
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (plVar2,PTR_s_objectForKeyedSubscript__112615a50,*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 105a50074; end: 105a50083;  */

void FUN_105a50074(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKeyedSubscript__112615a50,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105a50084; end: 105a502c3; -[SCSpectaclesSystemSettingsManager settingsForCategory:] */

void FUN_105a50084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar5 = *(long *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar5 == 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR_PTR_1126c18e8;
    _objc_alloc(PTR_PTR_1126c18e8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uStack_60 = param_3;
    _objc_copyWeak(auStack_68,auStack_58);
    func_0x00010c0457a0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c18f0;
    _objc_alloc(PTR_PTR_1126c18f0);
    func_0x00010c00ba60();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105a502c4; end: 105a50373;  */

void FUN_105a502c4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c0f3800();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c2827c0();
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_release(param_2);
  if (lVar1 == lVar3) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0b76c0();
    _objc_release(param_1);
    uVar2 = param_3;
    func_0x00010bf002e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a50374; end: 105a5037b; -[SCSpectaclesSystemSettingsManager valueForSetting:] */

void FUN_105a50374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 105a5037c; end: 105a503c3; -[SCSpectaclesSystemSettingsManager .cxx_destruct] */

void FUN_105a5037c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a503c4; end: 105a504f3;  */

void FUN_105a503c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0ec880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c1900;
  _objc_alloc(PTR_PTR_1126c1900);
  uVar1 = param_2;
  func_0x00010c227ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33240();
  uVar4 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf6e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0457e0(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a504f4; end: 105a506c7;  */

void FUN_105a504f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c18f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c087500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c296d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x000105a505a8(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0214a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a506c8; end: 105a5070f;  */

void FUN_105a506c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c296d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000105a505a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a50710; end: 105a5073f;  */

void FUN_105a50710(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c173050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBoolValue__11263a630,param_2);
  return;
}



/* Entry: 105a50740; end: 105a507b3; -[SCSpectaclesSystemSettingsService initWithSystemSettingsManager:] */

undefined1 * FUN_105a50740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb6a0;
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



/* Entry: 105a507b4; end: 105a507bb; -[SCSpectaclesSystemSettingsService systemSettingsManager] */

undefined8 FUN_105a507b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


