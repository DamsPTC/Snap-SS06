/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060ef29c; end: 1060ef2a3; -[BTClientMetadata sessionId] */

undefined8 FUN_1060ef29c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060ef2a4; end: 1060ef2af; -[BTClientMetadata .cxx_destruct] */

void FUN_1060ef2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1060ef2b0; end: 1060ef2b7; -[BTMutableClientMetadata setIntegration:] */

void FUN_1060ef2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1060ef2b8; end: 1060ef2bf; -[BTMutableClientMetadata setSource:] */

void FUN_1060ef2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1060ef2c0; end: 1060ef2ef; -[BTMutableClientMetadata setSessionId:] */

void FUN_1060ef2c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060ef2f0; end: 1060ef307; -[BTClientToken init] */

undefined8 FUN_1060ef2f0(void)

{
  _objc_release();
  return 0;
}



/* Entry: 1060ef308; end: 1060ef45b; -[BTClientToken initWithClientToken:error:] */

undefined1 * FUN_1060ef308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126efa80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bf66d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar5;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0aa60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c296840();
    if ((int)puVar5 == 0) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_1060ef434;
    }
  }
  _objc_retain(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_1060ef434:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 1060ef45c; end: 1060ef64b; -[BTClientToken validateClientToken:] */

undefined * FUN_1060ef45c(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  if ((param_3 == (long *)0x0) || (*param_3 == 0)) {
    func_0x00010bf10f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    if (puVar4 == (undefined *)0x0) {
      if (param_3 == (long *)0x0) goto LAB_1060ef610;
    }
    else {
      puVar1 = param_1;
      func_0x00010bf46360();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar2 = puVar1;
      _objc_opt_isKindOfClass(puVar1,puVar4);
      if (((ulong)puVar2 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        func_0x00010bf46360();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c08fa60();
        puVar4 = (undefined *)(ulong)(puVar4 != (undefined *)0x0);
        _objc_release(puVar2);
        _objc_release(param_1);
      }
      _objc_release(puVar1);
      if ((param_3 == (long *)0x0) || ((int)puVar4 != 0)) goto LAB_1060ef614;
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = (long)puVar4;
    _objc_release(puVar1);
  }
LAB_1060ef610:
  puVar4 = (undefined *)0x0;
LAB_1060ef614:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    puVar4 = puVar1;
    _objc_opt_class();
    func_0x00010bf00e40();
    func_0x00010c0edb00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff220(puVar4);
    _objc_release(puVar1);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1060ef64c; end: 1060ef6af; -[BTClientToken copyWithZone:] */

undefined8 FUN_1060ef64c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010c0edb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff220(uVar1,param_2,param_1,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1060ef6b0; end: 1060ef713; -[BTClientToken parseJSONString:error:] */

void FUN_1060ef6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060ef714; end: 1060ef76f; -[BTClientToken encodeWithCoder:] */

void FUN_1060ef714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0edb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e3f638);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060ef770; end: 1060ef7cb; -[BTClientToken initWithCoder:] */

undefined8 FUN_1060ef770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e3f638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff220(param_1,param_2,param_3,0);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1060ef7cc; end: 1060efbd3; -[BTClientToken decodeClientToken:error:] */

void FUN_1060ef7cc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long alStack_100 [3];
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  plVar5 = alStack_100;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  func_0x00010bff6b20();
  if (puVar1 == (undefined *)0x0) {
    alStack_100[0] = 0;
    func_0x00010c0f41e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    alStack_100[1] = 0;
    plVar5 = alStack_100 + 1;
    param_1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = *plVar5;
  _objc_retain(lVar6);
  if (param_1 == (undefined *)0x0) {
    if (param_4 == (undefined8 *)0x0) {
LAB_1060efac4:
      puVar7 = (undefined *)0x0;
      goto LAB_1060efb74;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uStack_88 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e3f5d8;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e3f658;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c560(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar6 != 0) {
      func_0x00010c1d0640(puVar3);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    }
LAB_1060efaa0:
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar7 = (undefined *)0x0;
    *param_4 = puVar4;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar4);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (((ulong)puVar3 & 1) == 0) {
      if (param_4 == (undefined8 *)0x0) goto LAB_1060efac4;
      uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      uStack_a8 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e3f5d8;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110e3f678;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060efaa0;
    }
    uVar9 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uVar8 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110e3f698;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e3f6b8;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_d0 = uVar9;
    uStack_c8 = uVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c067fc0();
    _objc_release(puVar3);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = puVar4;
    if (puVar2 + -2 < (undefined *)0x2) {
      if (puVar1 == (undefined *)0x0) {
LAB_1060efad8:
        if (param_4 == (undefined8 *)0x0) goto LAB_1060efb68;
        _objc_retainAutorelease(puVar4);
        puVar7 = (undefined *)0x0;
        *param_4 = puVar4;
      }
      else {
LAB_1060ef96c:
        puVar7 = PTR_PTR_1126c7fb8;
        _objc_alloc(PTR_PTR_1126c7fb8);
        func_0x00010c060400();
      }
    }
    else {
      if (puVar2 == (undefined *)0x1) {
        if (puVar1 != (undefined *)0x0) goto LAB_1060efad8;
        goto LAB_1060ef96c;
      }
      if (param_4 != (undefined8 *)0x0) {
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110e3f6d8;
        ppuStack_d8 = &PTR____CFConstantStringClassReference_110e3f6f8;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        alStack_100[2] = uVar9;
        uStack_e8 = uVar8;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar7;
        _objc_release(puVar4);
      }
LAB_1060efb68:
      puVar7 = (undefined *)0x0;
    }
  }
  _objc_release(puVar3);
LAB_1060efb74:
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar8 = param_3;
    func_0x00010bf10f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060efbd4; end: 1060efc5f; -[BTClientToken description] */

void FUN_1060efbd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bf10f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e3f718);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060efc60; end: 1060efd63; -[BTClientToken isEqual:] */

ulong FUN_1060efc60(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar5 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126be448;
    _objc_opt_class(PTR_PTR_1126be448);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      _objc_retain(param_3);
      func_0x00010c085d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf0a640();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c085d00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      uVar4 = uVar3;
      func_0x00010bf0a640(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c071d00(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1060efd64; end: 1060efd6b; -[BTClientToken json] */

undefined8 FUN_1060efd64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060efd6c; end: 1060efd9b; -[BTClientToken setJson:] */

void FUN_1060efd6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060efd9c; end: 1060efda3; -[BTClientToken authorizationFingerprint] */

undefined8 FUN_1060efd9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060efda4; end: 1060efdab; -[BTClientToken setAuthorizationFingerprint:] */

void FUN_1060efda4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060efdac; end: 1060efdb3; -[BTClientToken configURL] */

undefined8 FUN_1060efdac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060efdb4; end: 1060efde3; -[BTClientToken setConfigURL:] */

void FUN_1060efdb4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060efde4; end: 1060efdeb; -[BTClientToken originalValue] */

undefined8 FUN_1060efde4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060efdec; end: 1060efdf3; -[BTClientToken setOriginalValue:] */

void FUN_1060efdec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060efdf4; end: 1060efe3b; -[BTClientToken .cxx_destruct] */

void FUN_1060efdf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060efe3c; end: 1060efee3; -[BTConfiguration isGraphQLEnabled] */

bool FUN_1060efe3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar4 != 0;
}



/* Entry: 1060efee4; end: 1060eff17; -[BTConfiguration init] */

undefined1 * FUN_1060efee4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _objc_alloc();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e3f738;
  func_0x00010c02da20();
  _objc_autorelease();
  _objc_exception_throw();
  ppuVar2 = &puStack_40;
  _objc_retain(ppuVar4);
  puStack_38 = PTR_PTR_1126efa88;
  puStack_40 = puVar1;
  _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_retain(ppuVar4);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined ***)((long)ppuVar2 + 8) = ppuVar4;
    _objc_release(uVar3);
  }
  _objc_release(ppuVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 1060eff18; end: 1060eff8b; -[BTConfiguration initWithJSON:] */

undefined1 * FUN_1060eff18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efa88;
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



/* Entry: 1060eff8c; end: 1060eff93; +[BTConfiguration isBetaEnabledPaymentOption:] */

undefined8 FUN_1060eff8c(void)

{
  return 0;
}



/* Entry: 1060eff94; end: 1060eff97; +[BTConfiguration setBetaPaymentOption:isEnabled:] */

void FUN_1060eff94(void)

{
  return;
}



/* Entry: 1060eff98; end: 1060eff9f; -[BTConfiguration json] */

undefined8 FUN_1060eff98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060effa0; end: 1060effab; -[BTConfiguration .cxx_destruct] */

void FUN_1060effa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060effac; end: 1060effc7; -[BTGraphQLHTTP GET:completion:] */

void FUN_1060effac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             &PTR____CFConstantStringClassReference_110daafd8,
             &PTR____CFConstantStringClassReference_110e3f7b8);
  return;
}



/* Entry: 1060effc8; end: 1060effe3; -[BTGraphQLHTTP GET:parameters:completion:] */

void FUN_1060effc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             &PTR____CFConstantStringClassReference_110daafd8,
             &PTR____CFConstantStringClassReference_110e3f7b8);
  return;
}



/* Entry: 1060effe4; end: 1060efff7; -[BTGraphQLHTTP POST:completion:] */

void FUN_1060effe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_httpRequest_parameters_completio_1125d6d08,
             &PTR____CFConstantStringClassReference_110dada18,0,param_4);
  return;
}



/* Entry: 1060efff8; end: 1060f0003; -[BTGraphQLHTTP POST:parameters:completion:] */

void FUN_1060efff8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_httpRequest_parameters_completio_1125d6d08,
             &PTR____CFConstantStringClassReference_110dada18);
  return;
}



/* Entry: 1060f0004; end: 1060f001f; -[BTGraphQLHTTP PUT:completion:] */

void FUN_1060f0004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             &PTR____CFConstantStringClassReference_110daafd8,
             &PTR____CFConstantStringClassReference_110e3f7d8);
  return;
}



/* Entry: 1060f0020; end: 1060f003b; -[BTGraphQLHTTP PUT:parameters:completion:] */

void FUN_1060f0020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             &PTR____CFConstantStringClassReference_110daafd8,
             &PTR____CFConstantStringClassReference_110e3f7d8);
  return;
}



/* Entry: 1060f003c; end: 1060f0057; -[BTGraphQLHTTP DELETE:completion:] */

void FUN_1060f003c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             &PTR____CFConstantStringClassReference_110daafd8,
             &PTR____CFConstantStringClassReference_110e3f7f8);
  return;
}



/* Entry: 1060f0058; end: 1060f0073; -[BTGraphQLHTTP DELETE:parameters:completion:] */

void FUN_1060f0058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             &PTR____CFConstantStringClassReference_110daafd8,
             &PTR____CFConstantStringClassReference_110e3f7f8);
  return;
}



/* Entry: 1060f0074; end: 1060f0763; -[BTGraphQLHTTP handleRequestCompletion:response:error:completionBlock:] */

/* WARNING: Possible PIC construction at 0x0001060f00e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001060f06c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001060f0518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060f06c4) */
/* WARNING: Removing unreachable block (ram,0x0001060f00e4) */
/* WARNING: Removing unreachable block (ram,0x0001060f051c) */
/* WARNING: Removing unreachable block (ram,0x0001060f0708) */
/* WARNING: Removing unreachable block (ram,0x0001060f0718) */
/* WARNING: Removing unreachable block (ram,0x0001060f0760) */
/* WARNING: Removing unreachable block (ram,0x0001060f07d0) */
/* WARNING: Removing unreachable block (ram,0x0001060f08b8) */
/* WARNING: Removing unreachable block (ram,0x0001060f09bc) */
/* WARNING: Removing unreachable block (ram,0x0001060f09d0) */
/* WARNING: Removing unreachable block (ram,0x0001060f0a10) */
/* WARNING: Removing unreachable block (ram,0x0001060f0a18) */
/* WARNING: Removing unreachable block (ram,0x0001060f0a4c) */
/* WARNING: Removing unreachable block (ram,0x0001060f0a28) */
/* WARNING: Removing unreachable block (ram,0x0001060f0a54) */
/* WARNING: Removing unreachable block (ram,0x0001060f0ac0) */
/* WARNING: Removing unreachable block (ram,0x0001060f0aa4) */
/* WARNING: Removing unreachable block (ram,0x0001060f0bb4) */
/* WARNING: Removing unreachable block (ram,0x0001060f0824) */
/* WARNING: Removing unreachable block (ram,0x0001060f0838) */
/* WARNING: Removing unreachable block (ram,0x0001060f084c) */
/* WARNING: Removing unreachable block (ram,0x0001060f0850) */
/* WARNING: Removing unreachable block (ram,0x0001060f0864) */
/* WARNING: Removing unreachable block (ram,0x0001060f0bd0) */
/* WARNING: Removing unreachable block (ram,0x0001060f0c24) */
/* WARNING: Removing unreachable block (ram,0x0001060f0c4c) */
/* WARNING: Removing unreachable block (ram,0x00010bfd24c0) */
/* WARNING: Removing unreachable block (ram,0x0001060f0c3c) */
/* WARNING: Removing unreachable block (ram,0x0001060f0c04) */
/* WARNING: Removing unreachable block (ram,0x0001060f0740) */

void FUN_1060f0074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 == (undefined *)0x0) {
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c7fb8;
    _objc_alloc();
    func_0x00010c060400();
    puVar3 = puVar12;
    func_0x00010bf0a640();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      _objc_release(puVar3);
      if (puVar13 == (undefined *)0x0) {
        param_5 = (undefined *)0x0;
        goto code_r0x00010bf27e00;
      }
    }
    puVar3 = puVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar13;
    func_0x00010bf0a9e0();
    iVar2 = (int)puVar5;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    iVar1 = iVar2;
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      func_0x00010c0720c0();
      if (iVar2 == 0) {
        func_0x00010c1d0640(puVar3);
      }
      else {
        puVar12 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf0a9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar12);
        if (puVar13 != (undefined *)0x0) {
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar4;
          func_0x00010bf0a9e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar4);
        }
      }
    }
    else {
      func_0x00010c1d0640(puVar3);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar13 = puVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      _objc_release(puVar5);
      _objc_release(puVar13);
      if (puVar6 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          puVar5 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = puVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf0aa00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar5);
          if (puVar9 != (undefined *)0x0) {
            func_0x00010bf529e0(puVar9);
            puVar5 = puVar9;
            func_0x00010c25e980(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf0a640(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef8000(param_1);
            _objc_release(puVar8);
            _objc_release(puVar5);
          }
          _objc_release(puVar9);
          _objc_release(puVar7);
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
      }
      puVar12 = puVar4;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = puVar4;
        func_0x00010bf51e00(puVar4);
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar12);
      }
      _objc_release(puVar4);
    }
    _objc_retain(param_4);
    _objc_alloc();
    uVar10 = param_4;
    func_0x00010bdc2b80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_4;
    func_0x00010bf001c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ca0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    param_5 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar12 = PTR_PTR_1126c7fb8;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c060400();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0(param_5);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar4);
    puVar12 = PTR_PTR_1126c7fb8;
    _objc_alloc(PTR_PTR_1126c7fb8);
    func_0x00010bf51e00(puVar3);
    func_0x00010c060400(puVar12);
  }
  else {
    puVar12 = (undefined *)0x0;
    param_4 = 0;
  }
code_r0x00010bf27e00:
                    /* WARNING: Could not recover jumptable at 0x00010bf27e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_callCompletionBlock_body_respons_1125a7928,param_6,puVar12,param_4,
             param_5);
  return;
}



/* Entry: 1060f0764; end: 1060f0c27; -[BTGraphQLHTTP httpRequest:parameters:completion:] */

void FUN_1060f0764(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf16280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf16280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    if ((int)lVar4 == 0) {
      lVar1 = param_1;
      func_0x00010bf16280(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44760(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e2d8f8;
      lVar1 = param_1;
      func_0x00010c2912e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_80 = &PTR____CFConstantStringClassReference_110e3f318;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e3f798;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_78 = lVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72020(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar1);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar1 = param_1;
      func_0x00010bf10f00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      if (lVar1 == 0) {
        lVar2 = param_1;
        func_0x00010c273360();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c25d9e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar8);
      _objc_release(puVar7);
      if (lVar1 == 0) {
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      if (param_4 == (undefined *)0x0) {
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      }
      else {
        func_0x00010bf72020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
      }
      func_0x00010c1d0640(puVar8);
      ppuStack_90 = (undefined **)0x0;
      puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuStack_90;
      _objc_retain(ppuStack_90);
      puVar10 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
      if (ppuVar5 == (undefined **)0x0) {
        puVar11 = puVar6;
        func_0x00010bdc2b80(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137160(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        func_0x00010c1a4f00(puVar10);
        func_0x00010c166e40(puVar10);
        func_0x00010c1a4fc0(puVar10);
        lVar1 = param_1;
        func_0x00010c15fac0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_1060f0c28;
        puStack_a8 = &UNK_11090e648;
        lStack_a0 = param_1;
        _objc_retain(param_5);
        ppuVar12 = &puStack_c0;
        lVar2 = lVar1;
        puVar11 = puVar10;
        lStack_98 = param_5;
        func_0x00010bf647e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        func_0x00010c13d1c0(lVar2);
        _objc_release(lVar2);
        _objc_release(lStack_98);
        _objc_release(puVar10);
      }
      else {
        param_2 = 0;
        puVar11 = (undefined *)0x0;
        ppuVar12 = ppuVar5;
        (**(code **)(param_5 + 0x10))(param_5,0,0);
      }
      _objc_release(puVar9);
      _objc_release(ppuVar5);
      _objc_release(puVar8);
      goto LAB_1060f0bd0;
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_3 != 0) {
    func_0x00010c1d0640(puVar6);
  }
  if (param_4 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar6);
  }
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  param_2 = 0;
  puVar11 = (undefined *)0x0;
  ppuVar12 = ppuVar5;
  (**(code **)(param_5 + 0x10))(param_5,0,0);
  _objc_release(ppuVar5);
  puVar7 = param_4;
LAB_1060f0bd0:
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar12 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf27e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s_callCompletionBlock_body_respons_1125a7928,
               *(undefined8 *)(param_3 + 0x28),0,puVar11,ppuVar12);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd24d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_handleRequestCompletion_response_1125d22d8,
             param_2,puVar11,0,*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1060f0c28; end: 1060f0c5f;  */

void FUN_1060f0c28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf27e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_callCompletionBlock_body_respons_1125a7928,
               *(undefined8 *)(param_1 + 0x28),0,param_3,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd24d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleRequestCompletion_response_1125d22d8,
             param_2,param_3,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1060f0c60; end: 1060f0f1b; -[BTGraphQLHTTP addErrorForInputPath:withGraphQLError:toArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1060f0c60(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x1) {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e3f978;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dd9438;
    puVar2 = param_4;
    puStack_80 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110db9558;
    puVar4 = param_4;
    puStack_78 = puVar2;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e3f838);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar5 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e3f998);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_5,param_2,puVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e3f9b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010bfaea40(param_5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110e3e7f8;
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110e3f978;
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puStack_a8 = puVar1;
      _objc_opt_new();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a0 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a8,&ppuStack_b8,
                          2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010befa120(param_5,param_2,puVar4);
    }
    puVar3 = param_3;
    func_0x00010bf529e0(param_3);
    puVar5 = param_3;
    func_0x00010c25e980(param_3,param_2,1,puVar3 + -1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e3e7f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8000(param_1,param_2,puVar5,param_4,puVar3);
    _objc_release(param_4);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + _DAT_11273f570);
}



/* Entry: 1060f0f1c; end: 1060f0f2b; -[BTGraphQLHTTP tokenizationKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060f0f1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f570);
}



/* Entry: 1060f0f2c; end: 1060f0f37; -[BTGraphQLHTTP setTokenizationKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060f0f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f0f38; end: 1060f0f47; -[BTGraphQLHTTP authorizationFingerprint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060f0f38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f574);
}



/* Entry: 1060f0f48; end: 1060f0f53; -[BTGraphQLHTTP setAuthorizationFingerprint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060f0f48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f0f54; end: 1060f0f93; -[BTGraphQLHTTP .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060f0f54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f574,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f570,0);
  return;
}



/* Entry: 1060f0f94; end: 1060f0fab; -[BTHTTP init] */

undefined8 FUN_1060f0f94(void)

{
  _objc_release();
  return 0;
}



/* Entry: 1060f0fac; end: 1060f1017; -[BTHTTP initWithBaseURL:] */

undefined1 * FUN_1060f0fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efa90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c16f420(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060f1018; end: 1060f115b; -[BTHTTP initWithBaseURL:authorizationFingerprint:] */

long FUN_1060f1018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bff7040(param_1,param_2,param_3);
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
    func_0x00010bf98460(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf697c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4ee0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x00010c1cafa0();
    func_0x00010c1c3080(puVar3,param_2,0xffffffffffffffff);
    func_0x00010c16ca20(param_1,param_2,param_4);
    puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
    func_0x00010c1606c0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8,param_2,puVar1,param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd860(param_1,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c8008;
    func_0x00010c27cc00(PTR_PTR_1126c8008);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dbc20(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1060f115c; end: 1060f129f; -[BTHTTP initWithBaseURL:tokenizationKey:] */

long FUN_1060f115c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bff7040(param_1,param_2,param_3);
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
    func_0x00010bf98460(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf697c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4ee0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x00010c1cafa0();
    func_0x00010c1c3080(puVar3,param_2,0xffffffffffffffff);
    puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
    func_0x00010c1606c0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8,param_2,puVar1,param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd860(param_1,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c8008;
    func_0x00010c27cc00(PTR_PTR_1126c8008);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dbc20(param_1,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c216ca0(param_1,param_2,param_4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1060f12a0; end: 1060f1367; -[BTHTTP initWithClientToken:] */

undefined8 FUN_1060f12a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c085d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0aa60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf10f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff7080(param_1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1060f1368; end: 1060f144f; -[BTHTTP copyWithZone:] */

long FUN_1060f1368(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf10f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf00e40();
  lVar3 = param_1;
  func_0x00010bf16280(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  if (lVar1 == 0) {
    func_0x00010c273360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7100(lVar2,param_2,lVar3,lVar4);
  }
  else {
    func_0x00010bf10f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7080(lVar2,param_2,lVar3,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar5);
  func_0x00010c1dbc20(lVar2,param_2,uVar5);
  _objc_release(uVar5);
  return lVar2;
}



/* Entry: 1060f1450; end: 1060f148b; -[BTHTTP setSession:] */

void FUN_1060f1450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c069d40();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060f148c; end: 1060f1497; -[BTHTTP GET:completion:] */

void FUN_1060f148c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_GET_parameters_completion__11254def0,param_3,0,param_4);
  return;
}



/* Entry: 1060f1498; end: 1060f14af; -[BTHTTP GET:parameters:completion:] */

void FUN_1060f1498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_httpRequest_path_parameters_comp_1125d6d10,
             &PTR____CFConstantStringClassReference_110deec98,param_3,param_4,param_5);
  return;
}



/* Entry: 1060f14b0; end: 1060f14bb; -[BTHTTP POST:completion:] */

void FUN_1060f14b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_POST_parameters_completion__11254e128,param_3,0,param_4);
  return;
}



/* Entry: 1060f14bc; end: 1060f14d3; -[BTHTTP POST:parameters:completion:] */

void FUN_1060f14bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_httpRequest_path_parameters_comp_1125d6d10,
             &PTR____CFConstantStringClassReference_110dada18,param_3,param_4,param_5);
  return;
}



/* Entry: 1060f14d4; end: 1060f14df; -[BTHTTP PUT:completion:] */

void FUN_1060f14d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_PUT_parameters_completion__11254e140,param_3,0,param_4);
  return;
}



/* Entry: 1060f14e0; end: 1060f14f7; -[BTHTTP PUT:parameters:completion:] */

void FUN_1060f14e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_httpRequest_path_parameters_comp_1125d6d10,
             &PTR____CFConstantStringClassReference_110deecb8,param_3,param_4,param_5);
  return;
}



/* Entry: 1060f14f8; end: 1060f1503; -[BTHTTP DELETE:completion:] */

void FUN_1060f14f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_DELETE_parameters_completion__11254de80,param_3,0,param_4);
  return;
}



/* Entry: 1060f1504; end: 1060f151b; -[BTHTTP DELETE:parameters:completion:] */

void FUN_1060f1504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_httpRequest_path_parameters_comp_1125d6d10,
             &PTR____CFConstantStringClassReference_110deecd8,param_3,param_4,param_5);
  return;
}



/* Entry: 1060f151c; end: 1060f1c2f; -[BTHTTP httpRequest:path:parameters:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001060f1bd4) */

void FUN_1060f151c(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined *param_5,long param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_4 == 0) || (uVar2 = param_4, func_0x00010bfda7c0(), (uVar2 & 1) == 0)) {
    puVar3 = param_1;
    func_0x00010bf16280();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010bf16280();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar3);
      if ((int)puVar5 == 0) {
        bVar1 = false;
        goto LAB_1060f16ac;
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    if (param_3 != 0) {
      func_0x00010c1d0640(puVar3);
    }
    if (param_4 != 0) {
      func_0x00010c1d0640(puVar3);
    }
    if (param_5 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar3);
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,0,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    bVar1 = true;
LAB_1060f16ac:
    puVar3 = param_1;
    func_0x00010bf16280();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((param_4 == 0) || (((ulong)puVar9 & 1) != 0)) {
      puVar3 = param_1;
      func_0x00010bf16280();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    }
    else if (bVar1) {
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    }
    else {
      puVar4 = param_1;
      func_0x00010bf16280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bdc2c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    }
    puVar5 = param_5;
    PTR__OBJC_CLASS___NSDictionary_1126ae670 = puVar4;
    if (param_5 == (undefined *)0x0) {
      func_0x00010bf71e20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf10f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 != (undefined *)0x0) {
      puVar6 = param_1;
      func_0x00010bf10f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar6);
    }
    param_5 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    if (puVar3 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      if (param_3 != 0) {
        func_0x00010c1d0640(puVar9);
      }
      if (param_4 != 0) {
        func_0x00010c1d0640(puVar9);
      }
      if (param_5 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar9);
      }
      func_0x00010c1d0640(puVar9);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,0,0,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar9);
    }
    else {
      puVar6 = puVar3;
      func_0x00010beec820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44760(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puVar7 = param_1;
      func_0x00010bf697c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72020(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      uVar2 = param_3;
      func_0x00010c0720c0();
      if (((uVar2 & 1) == 0) &&
         (uVar2 = param_3, func_0x00010c0720c0(),
         puVar7 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8, (int)uVar2 == 0)) {
        puVar9 = puVar5;
        func_0x00010bdc2b80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137160(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        puVar8 = param_5;
        _objc_opt_isKindOfClass(param_5,puVar9);
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
        }
        func_0x00010c1a4f00(puVar7);
        func_0x00010c1d0640(puVar6);
      }
      else {
        if (((ulong)puVar9 & 1) == 0) {
          puVar9 = PTR_PTR_1126c8018;
          func_0x00010c11d9c0(PTR_PTR_1126c8018);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1da640(puVar5);
          _objc_release(puVar9);
        }
        puVar7 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
        puVar9 = puVar5;
        func_0x00010bdc2b80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137160(puVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar9);
      puVar9 = param_1;
      func_0x00010c273360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar9 != (undefined *)0x0) {
        puVar9 = param_1;
        func_0x00010c273360(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(puVar9);
      }
      func_0x00010c166e40(puVar7);
      func_0x00010c1a4fc0(puVar7);
      func_0x00010c15fac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      puVar9 = param_1;
      func_0x00010bf647e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      func_0x00010c13d1c0(puVar9);
      _objc_release(puVar9);
      _objc_release(param_6);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060f1c30; end: 1060f1c47;  */

void FUN_1060f1c30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd24d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleRequestCompletion_response_1125d22d8,
             param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1060f1c48; end: 1060f2233; -[BTHTTP handleRequestCompletion:response:error:completionBlock:] */

void FUN_1060f1c48(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 != 0) {
    func_0x00010bf27e00(param_1);
    goto LAB_1060f2200;
  }
  puVar9 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  puVar10 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar9);
  if (((ulong)puVar10 & 1) == 0) {
    puVar9 = param_4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    if ((int)puVar1 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
      _objc_alloc();
      puVar10 = param_4;
      func_0x00010bdc2b80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c057ca0();
      _objc_release(puVar10);
    }
  }
  else {
    _objc_retain(param_4);
    puVar9 = param_4;
  }
  puVar1 = param_4;
  func_0x00010bdc1c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  puVar3 = puVar9;
  func_0x00010c252ee0();
  puVar10 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  if ((long)puVar3 < 400) {
    lVar4 = param_3;
    func_0x00010c08fa60();
    puVar10 = PTR_PTR_1126c7fb8;
    if (lVar4 == 0) {
      _objc_opt_new();
    }
    else {
      _objc_alloc();
      func_0x00010c008240();
    }
    puVar3 = puVar10;
    func_0x00010c072200();
    if ((int)puVar3 == 0) {
      func_0x00010bf27e00(param_1);
    }
    else {
      puVar3 = puVar1;
      func_0x00010c0720c0();
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        puVar5 = puVar2;
        func_0x00010bf51e00(puVar2);
        func_0x00010bf99240(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010bf27e00(param_1);
      }
      else {
        puVar3 = puVar10;
        func_0x00010bf0a680(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf27e00(param_1);
      }
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010c252ee0(puVar9);
    func_0x00010c09e820(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar10);
    puVar10 = puVar1;
    func_0x00010c0720c0();
    if ((int)puVar10 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar4 = param_3;
      func_0x00010c08fa60();
      puVar10 = PTR_PTR_1126c7fb8;
      if (lVar4 == 0) {
        _objc_opt_new();
      }
      else {
        _objc_alloc();
        func_0x00010c008240();
      }
      puVar3 = puVar10;
      func_0x00010c072200();
      if (((ulong)puVar3 & 1) == 0) {
        func_0x00010c1d0640(puVar2);
        puVar3 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c080000();
        puVar6 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf0a9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        if (puVar8 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar2);
        }
        _objc_release(puVar8);
      }
    }
    func_0x00010c252ee0();
    puVar3 = puVar9;
    func_0x00010c252ee0();
    if (puVar3 == (undefined *)0x1ad) {
      func_0x00010c1d0640(puVar2);
LAB_1060f2140:
      func_0x00010c1d0640(puVar2);
    }
    else {
      puVar3 = puVar9;
      func_0x00010c252ee0();
      if (499 < (long)puVar3) goto LAB_1060f2140;
    }
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf27e00(param_1);
    _objc_release(puVar3);
  }
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar9);
LAB_1060f2200:
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060f2234; end: 1060f235f; -[BTHTTP callCompletionBlock:body:response:error:] */

void FUN_1060f2234(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    func_0x00010bf851e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1060f2360;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    _objc_retain(param_6);
    uStack_50 = param_6;
    func_0x00010007380c(param_1,&puStack_80);
    _objc_release(param_1);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060f2360; end: 1060f2373;  */

void FUN_1060f2360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001060f2370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1060f2374; end: 1060f23a7; -[BTHTTP dispatchQueue] */

void FUN_1060f2374(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (*(undefined **)(param_1 + 0x20) == (undefined *)0x0) {
    puVar1 = PTR___dispatch_main_q_11034be20;
  }
  _objc_retain(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f23a8; end: 1060f24a7; -[BTHTTP defaultHeaders] */

void FUN_1060f23a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e2d8f8;
  uVar1 = param_1;
  func_0x00010c2912e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dbea58;
  uVar2 = param_1;
  uStack_50 = uVar1;
  func_0x00010beecb20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dbeff8;
  uStack_48 = uVar2;
  func_0x00010beeca40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_68,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e3fad8);
  return;
}



/* Entry: 1060f24a8; end: 1060f24df; -[BTHTTP userAgentString] */

void FUN_1060f24a8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e3fad8);
  return;
}



/* Entry: 1060f24e0; end: 1060f256f; -[BTHTTP platformString] */

undefined ** FUN_1060f24e0(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uStack_140;
  undefined1 auStack_138 [128];
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [128];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0x80;
  iVar1 = 0xf3678bc;
  _sysctlbyname(&DAT_10f3678bc,auStack_98,&uStack_a0,0,0);
  ppuVar2 = (undefined **)0x0;
  if (iVar1 == 0) {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_1060f2570;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_140 = 0x80;
    iVar1 = 0xf3678c5;
    puStack_b0 = &stack0xfffffffffffffff0;
    _sysctlbyname(&DAT_10f3678c5,auStack_138,&uStack_140,0,0);
    ppuVar2 = (undefined **)0x0;
    if (iVar1 == 0) {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      return &PTR____CFConstantStringClassReference_110e01958;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar2;
}



/* Entry: 1060f2570; end: 1060f25ff; -[BTHTTP architectureString] */

undefined ** FUN_1060f2570(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uStack_a0;
  undefined1 auStack_98 [128];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0x80;
  iVar1 = 0xf3678c5;
  _sysctlbyname(&DAT_10f3678c5,auStack_98,&uStack_a0,0,0);
  ppuVar2 = (undefined **)0x0;
  if (iVar1 == 0) {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e01958;
}



/* Entry: 1060f2600; end: 1060f260b; -[BTHTTP acceptString] */

undefined ** FUN_1060f2600(void)

{
  return &PTR____CFConstantStringClassReference_110e01958;
}



/* Entry: 1060f260c; end: 1060f26cb; -[BTHTTP acceptLanguageString] */

void FUN_1060f260c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0dff20(puVar1,param_2,*(undefined8 *)PTR__NSLocaleCountryCode_11034aa58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060f26cc; end: 1060f2803; -[BTHTTP pinnedCertificateData] */

undefined1 * FUN_1060f26cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  int iStack_184;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fc420();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_d8;
  lVar10 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar3 = 0;
      _SecCertificateCreateWithData(0,*(undefined8 *)(lVar10 * 8));
      func_0x00010befa120(puVar9);
      _objc_release(uVar3);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    puVar8 = auStack_d8;
    lVar10 = 0x10;
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(lVar10);
  puVar4 = puVar8;
  func_0x00010c118f00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010bf10c60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar11;
  func_0x00010c0720c0();
  _objc_release(puVar11);
  _objc_release(puVar4);
  if ((int)puVar5 == 0) {
    puVar9 = (undefined *)0x0;
    (**(code **)(lVar10 + 0x10))(lVar10,1,0);
  }
  else {
    puVar4 = puVar8;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar8;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c15f640();
    _objc_release(puVar4);
    uVar3 = 1;
    _SecPolicyCreateSSL(1,puVar11);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_180 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _SecTrustSetPolicies(puVar5,puVar6);
    func_0x00010c0fc400();
    _objc_retainAutoreleasedReturnValue();
    _SecTrustSetAnchorCertificates(puVar5,param_1);
    _objc_release(param_1);
    _SecTrustEvaluate(puVar5,&iStack_184);
    if (((int)puVar5 == 0) && (iStack_184 == 4 || iStack_184 == 1)) {
      puVar7 = PTR__OBJC_CLASS___NSURLCredential_1126c8020;
      func_0x00010bf5bfa0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      (**(code **)(lVar10 + 0x10))(lVar10,0,puVar7);
      _objc_release(puVar7);
    }
    else {
      puVar9 = (undefined *)0x0;
      (**(code **)(lVar10 + 0x10))(lVar10,3,0);
    }
    _objc_release(puVar6);
    _objc_release(puVar11);
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar4 = puVar8;
  func_0x00010bf16280();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar9;
  func_0x00010bf16280(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010c071ae0();
  if ((int)puVar11 == 0) {
    puVar11 = (undefined1 *)0x0;
  }
  else {
    func_0x00010bf10f00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf10f00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c0720c0(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar9);
  return puVar11;
}



/* Entry: 1060f2804; end: 1060f2a3b; -[BTHTTP URLSession:didReceiveChallenge:completionHandler:] */

undefined8
FUN_1060f2804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010c118f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf10c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
    (**(code **)(param_5 + 0x10))(param_5,1,0);
  }
  else {
    uVar2 = param_4;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c15f640();
    _objc_release(uVar2);
    uVar2 = 1;
    _SecPolicyCreateSSL(1,uVar6);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _SecTrustSetPolicies(uVar1,puVar3);
    func_0x00010c0fc400();
    _objc_retainAutoreleasedReturnValue();
    _SecTrustSetAnchorCertificates(uVar1,param_1);
    _objc_release(param_1);
    _SecTrustEvaluate(uVar1,&iStack_64);
    if (((int)uVar1 == 0) && (iStack_64 == 4 || iStack_64 == 1)) {
      puVar4 = PTR__OBJC_CLASS___NSURLCredential_1126c8020;
      func_0x00010bf5bfa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (**(code **)(param_5 + 0x10))(param_5,0,puVar4);
      _objc_release(puVar4);
    }
    else {
      puVar5 = (undefined *)0x0;
      (**(code **)(param_5 + 0x10))(param_5,3,0);
    }
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar2 = param_4;
  func_0x00010bf16280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf16280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c071ae0();
  if ((int)uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x00010bf10f00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf10f00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c0720c0(param_4);
    _objc_release(puVar4);
    _objc_release(param_4);
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
  return uVar6;
}



/* Entry: 1060f2a3c; end: 1060f2b17; -[BTHTTP isEqualToHTTP:] */

undefined8 FUN_1060f2a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf16280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf16280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,uVar2);
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010bf10f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf10f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0720c0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1060f2b18; end: 1060f2b8f; -[BTHTTP isEqual:] */

ulong FUN_1060f2b18(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126c7fc8;
    _objc_opt_class(PTR_PTR_1126c7fc8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071dc0(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1060f2b90; end: 1060f2b97; -[BTHTTP pinnedCertificates] */

undefined8 FUN_1060f2b90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060f2b98; end: 1060f2bc7; -[BTHTTP setPinnedCertificates:] */

void FUN_1060f2b98(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060f2bc8; end: 1060f2bcf; -[BTHTTP session] */

undefined8 FUN_1060f2bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060f2bd0; end: 1060f2bd7; -[BTHTTP baseURL] */

undefined8 FUN_1060f2bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060f2bd8; end: 1060f2c07; -[BTHTTP setBaseURL:] */

void FUN_1060f2bd8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060f2c08; end: 1060f2c37; -[BTHTTP setDispatchQueue:] */

void FUN_1060f2c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060f2c38; end: 1060f2c3f; -[BTHTTP authorizationFingerprint] */

undefined8 FUN_1060f2c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060f2c40; end: 1060f2c47; -[BTHTTP setAuthorizationFingerprint:] */

void FUN_1060f2c40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f2c48; end: 1060f2c4f; -[BTHTTP tokenizationKey] */

undefined8 FUN_1060f2c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060f2c50; end: 1060f2c57; -[BTHTTP setTokenizationKey:] */

void FUN_1060f2c50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060f2c58; end: 1060f2cb7; -[BTHTTP .cxx_destruct] */

void FUN_1060f2c58(long param_1)

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



/* Entry: 1060f2cb8; end: 1060f2d3b; -[BTJSON init] */

undefined1 * FUN_1060f2cb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efa98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f620(puVar1);
    _objc_release(puVar2);
    func_0x00010c220160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060f2d3c; end: 1060f2dcb; -[BTJSON initWithData:] */

undefined8 FUN_1060f2d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_38;
  
  puStack_38 = (undefined *)0x0;
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,4,&puStack_38)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_38;
  _objc_retain(puStack_38);
  puVar1 = puVar3;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x00010c060400(param_1,param_2,puVar1);
  _objc_retain();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 1060f2dcc; end: 1060f2e1b; -[BTJSON initWithValue:] */

long FUN_1060f2dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c220160(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1060f2e1c; end: 1060f2eb7; -[BTJSON objectForKeyedSubscript:] */

void FUN_1060f2e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7fb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060400();
  func_0x00010c260ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c20f620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f2eb8; end: 1060f2f67; -[BTJSON objectAtIndexedSubscript:] */

void FUN_1060f2eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c7fb8;
  _objc_alloc(PTR_PTR_1126c7fb8);
  func_0x00010c060400();
  func_0x00010c260ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf09f60(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f620(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f2f68; end: 1060f3203; -[BTJSON value] */

undefined * FUN_1060f2f68(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar9);
  puVar2 = param_1;
  func_0x00010c260ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar3 == (undefined *)0x0) {
LAB_1060f31bc:
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
        return puVar9;
      }
      ___stack_chk_fail();
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
      puVar3 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar9);
      _objc_release(puVar2);
      return (undefined *)(ulong)((uint)puVar3 & 1);
    }
    puVar7 = (undefined *)0x0;
    puVar8 = puVar9;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      puVar10 = *(undefined **)((long)puVar7 * 8);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar4 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar9);
      puVar9 = puVar8;
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        puVar5 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_opt_isKindOfClass(puVar10,puVar4);
          if (((ulong)puVar10 & 1) != 0) {
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1060f30cc;
          }
          goto LAB_1060f3108;
        }
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf34ba0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar3);
LAB_1060f31b4:
        _objc_release(puVar9);
        puVar9 = param_1;
        goto LAB_1060f31bc;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar5 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar4);
      if (((ulong)puVar5 & 1) == 0) {
LAB_1060f3108:
        func_0x00010bf34ba0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1060f31b4;
      }
      func_0x00010c2827c0();
      puVar4 = puVar8;
      func_0x00010bf529e0();
      if (puVar4 <= puVar10) {
        param_1 = (undefined *)0x0;
        goto LAB_1060f31b4;
      }
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
LAB_1060f30cc:
      _objc_release(puVar8);
      puVar7 = puVar7 + 1;
      puVar8 = puVar9;
    } while (puVar3 != puVar7);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1060f3204; end: 1060f3253; -[BTJSON isError] */

uint FUN_1060f3204(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1060f3254; end: 1060f32c7; -[BTJSON asError] */

void FUN_1060f3254(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060f32c8; end: 1060f332f; -[BTJSON asJSONAndReturnError:] */

void FUN_1060f32c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar1,param_2,param_1,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f3330; end: 1060f33cb; -[BTJSON asPrettyJSONAndReturnError:] */

void FUN_1060f3330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar2,param_2,param_1,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar1,param_2,puVar2,4);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


