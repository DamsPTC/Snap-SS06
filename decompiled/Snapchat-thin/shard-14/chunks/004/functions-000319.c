/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2770fc; end: 10b277103; -[SCRequestAuthenticatorStatic userId] */

undefined8 FUN_10b2770fc(void)

{
  return 0;
}



/* Entry: 10b277104; end: 10b27710b; -[SCRequestAuthenticatorStatic username] */

undefined8 FUN_10b277104(void)

{
  return 0;
}



/* Entry: 10b27710c; end: 10b277123; -[SCRequestAuthenticatorStatic authToken] */

undefined8 FUN_10b27710c(void)

{
  return 0;
}



/* Entry: 10b277124; end: 10b277177;  */

void FUN_10b277124(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f45f8 != -1) {
    func_0x000107c27d9c(0x1137f45f8,&PTR___NSConcreteGlobalBlock_110ccc508);
  }
  uVar1 = uRam00000001137f4600;
  _objc_retain(uRam00000001137f4600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b277178; end: 10b2771a3;  */

void FUN_10b277178(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfff0;
  _objc_opt_new();
  uVar1 = puRam00000001137f4600;
  puRam00000001137f4600 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2771a4; end: 10b2772f7; +[SCAPI paramDictionary:endpoint:authenticator:] */

void FUN_10b2771a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b8238;
  uVar2 = param_5;
  func_0x00010bf10a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c294420(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c2923e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126af568;
  func_0x00010c22b6a0(PTR_PTR_1126af568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10c80(puVar6,param_2,param_4,uVar2,uVar3,uVar4,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bef7f60(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bef7f60(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2772f8; end: 10b2779eb; +[SCAPI URLRequestWithEndpoint:parameters:uploadData:additionalHTTPHeaders:method:compressionConfig:authenticator:] */

void FUN_10b2772f8(long param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined8 param_7,long param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010bdd6980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0000;
  func_0x00010c074b60();
  if ((int)puVar2 == 0) {
    if (param_5 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126e0000;
      func_0x00010c06ca20();
      if ((int)puVar2 == 0) {
        puVar2 = PTR_PTR_1126e0000;
        func_0x00010c076fc0();
        puVar6 = PTR_PTR_1126b8240;
        if ((int)puVar2 == 0) {
          func_0x00010c22b800();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c22bc00();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar6 = PTR_PTR_1126b8240;
        func_0x00010c22b740();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = PTR_PTR_1126bc0e8;
      func_0x00010c25d320(PTR_PTR_1126bc0e8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c1370c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      param_2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class();
      puVar2 = param_5;
      _objc_opt_isKindOfClass();
      if (((ulong)puVar2 & 1) == 0) {
        param_2 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class();
        puVar2 = param_5;
        _objc_opt_isKindOfClass();
        if (((ulong)puVar2 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          goto LAB_10b277984;
        }
        puVar2 = PTR_PTR_1126b8240;
        func_0x00010c22b800();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126bc0e8;
        func_0x00010c25d320(PTR_PTR_1126bc0e8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010c1370c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar2);
        if (param_9 != 0) {
          ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111183b18;
          func_0x00010bf52a60();
          lVar5 = lRam0000000000000000;
          if (ppuVar3 != (undefined **)0x0) {
            do {
              ppuVar9 = (undefined **)0x0;
              do {
                if (lRam0000000000000000 != lVar5) {
                  _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183b18);
                }
                lVar4 = lVar1;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (lVar4 != 0) {
                  func_0x00010c2201e0(puVar10);
                }
                _objc_release(lVar4);
                ppuVar9 = (undefined **)((long)ppuVar9 + 1);
              } while (ppuVar3 != ppuVar9);
              ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111183b18;
              func_0x00010bf52a60();
            } while (ppuVar3 != (undefined **)0x0);
          }
          lVar5 = lVar1;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            func_0x00010c2201e0(puVar10);
          }
          _objc_release(lVar5);
        }
LAB_10b277868:
        func_0x00010c2201e0(puVar10);
LAB_10b27786c:
        func_0x00010c1a4f00(puVar10);
        goto LAB_10b27790c;
      }
      puVar2 = PTR_PTR_1126b8240;
      func_0x00010c22b800();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126bc0e8;
      func_0x00010c25d320(PTR_PTR_1126bc0e8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      puVar10 = puVar2;
      func_0x00010c0d27a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar2);
      puVar6 = param_5;
    }
LAB_10b277908:
    _objc_release(puVar6);
  }
  else {
    puVar2 = PTR_PTR_1126b8240;
    func_0x00010c22b740();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bc0e8;
    func_0x00010c25d320(PTR_PTR_1126bc0e8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c1370c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar2);
    if (param_9 != 0) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111183b00;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      if (ppuVar3 != (undefined **)0x0) {
        do {
          ppuVar9 = (undefined **)0x0;
          do {
            if (lRam0000000000000000 != lVar5) {
              _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183b00);
            }
            lVar4 = lVar1;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 != 0) {
              func_0x00010c2201e0(puVar10);
            }
            _objc_release(lVar4);
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar3 != ppuVar9);
          ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111183b00;
          func_0x00010bf52a60();
        } while (ppuVar3 != (undefined **)0x0);
      }
      lVar5 = lVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        func_0x00010c2201e0(puVar10);
      }
      _objc_release(lVar5);
    }
    if (param_5 != (undefined *)0x0) {
      param_2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class();
      puVar2 = param_5;
      _objc_opt_isKindOfClass();
      if (((ulong)puVar2 & 1) != 0) {
        func_0x00010c2201e0(puVar10);
        puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a4f00(puVar10);
        goto LAB_10b277908;
      }
      param_2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class();
      puVar2 = param_5;
      _objc_opt_isKindOfClass();
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = PTR_PTR_1126e0000;
        func_0x00010c07b640();
        if ((int)puVar2 != 0) {
          func_0x00010c2201e0(puVar10);
          goto LAB_10b277868;
        }
        goto LAB_10b27786c;
      }
    }
  }
LAB_10b27790c:
  if (param_6 != 0) {
    _objc_retain(param_3);
    _objc_retain(puVar10);
    func_0x00010bf97ce0(param_6);
    _objc_release(puVar10);
    _objc_release(param_3);
  }
  if (param_8 != 0) {
    func_0x00010bde41c0(param_1);
  }
LAB_10b277984:
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(param_2);
    func_0x00010bf97ce0(uVar8);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b2779ec; end: 10b277a6f;  */

void FUN_10b2779ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf97ce0(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b277a70; end: 10b277a87;  */

void FUN_10b277a70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendPartWithFileData_name_file_11259f560,
             param_3,param_2,param_2,&PTR____CFConstantStringClassReference_110dd69d8);
  return;
}



/* Entry: 10b277a88; end: 10b277b97;  */

void FUN_10b277a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c296ee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010c296ee0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2201e0(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c2201e0(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b277b98; end: 10b277c7b; +[SCAPI _compressData:compressionConfig:] */

/* WARNING: Removing unreachable block (ram,0x00010b277c2c) */

void FUN_10b277b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bdc1620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c2bf34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retain(&PTR____CFConstantStringClassReference_110daafd8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(&PTR____CFConstantStringClassReference_110daafd8);
  _objc_release(param_3);
  return;
}



/* Entry: 10b277c7c; end: 10b277d8b; +[SCAPI URLRequestWithURL:parameters:uploadFileURL:additionalHTTPHeaders:method:authenticator:] */

void FUN_10b277c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd6980(param_1,param_2,0,param_4,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8240;
  func_0x00010c22b800(PTR_PTR_1126b8240);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc0e8;
  func_0x00010c25d320(PTR_PTR_1126bc0e8,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c1370e0(puVar2,param_2,puVar3,param_3,uVar1,param_8 != 0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bede8c0(param_1,param_2,puVar4,param_6);
  _objc_release(param_6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b277d8c; end: 10b277e0f;  */

void FUN_10b277d8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf97ce0(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b277e10; end: 10b277e27;  */

void FUN_10b277e10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendPartWithFileData_name_file_11259f560,
             param_3,param_2,param_2,&PTR____CFConstantStringClassReference_110dd69d8);
  return;
}



/* Entry: 10b277e28; end: 10b2780a7; +[SCAPI snapConnectURLRequestForPath:parameters:uploadData:additionalHTTPHeaders:method:] */

void FUN_10b277e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bdd6980(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b8240;
    func_0x00010c22bfe0(PTR_PTR_1126b8240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bc0e8;
    func_0x00010c25d320(PTR_PTR_1126bc0e8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c1370c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
LAB_10b277fbc:
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = PTR_PTR_1126b8240;
      func_0x00010c22bfe0(PTR_PTR_1126b8240);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bc0e8;
      func_0x00010c25d320(PTR_PTR_1126bc0e8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      puVar4 = puVar2;
      func_0x00010c0d27a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_5;
      goto LAB_10b277fbc;
    }
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_10b277fd0;
    }
    puVar2 = PTR_PTR_1126b8240;
    func_0x00010c22bfe0(PTR_PTR_1126b8240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bc0e8;
    func_0x00010c25d320(PTR_PTR_1126bc0e8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c1370c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1a4f00(puVar4);
  }
  func_0x00010bede8c0(param_1);
LAB_10b277fd0:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b2780a8; end: 10b27812b;  */

void FUN_10b2780a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf97ce0(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b27812c; end: 10b278143;  */

void FUN_10b27812c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendPartWithFileData_name_file_11259f560,
             param_3,param_2,param_2,&PTR____CFConstantStringClassReference_110dd69d8);
  return;
}



/* Entry: 10b278144; end: 10b2781a7; +[SCAPI incSeqnoWithAuthenticator:] */

void FUN_10b278144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  lRam00000001137f45f0 = lRam00000001137f45f0 + 1;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139e20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2781a8; end: 10b2781fb; +[SCAPIClient sharedAuthServiceClient] */

void FUN_10b2781a8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4630 != -1) {
    func_0x000107c27d9c(0x1137f4630,&PTR___NSConcreteGlobalBlock_110ccc588);
  }
  uVar1 = uRam00000001137f4610;
  _objc_retain(uRam00000001137f4610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2781fc; end: 10b27828f;  */

void FUN_10b2781fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b8240;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR_PTR_1126b8670;
  func_0x00010bf10920(PTR_PTR_1126b8670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7040(puVar2,param_2,puVar4);
  uVar1 = puRam00000001137f4610;
  puRam00000001137f4610 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b278290; end: 10b2782e3; +[SCAPIClient sharedLoginServiceClient] */

void FUN_10b278290(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4638 != -1) {
    func_0x000107c27d9c(0x1137f4638,&PTR___NSConcreteGlobalBlock_110ccc5a8);
  }
  uVar1 = uRam00000001137f4618;
  _objc_retain(uRam00000001137f4618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2782e4; end: 10b278377;  */

void FUN_10b2782e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b8240;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR_PTR_1126e0008;
  func_0x00010c0b4260(PTR_PTR_1126e0008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7040(puVar2,param_2,puVar4);
  uVar1 = puRam00000001137f4618;
  puRam00000001137f4618 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b278378; end: 10b2783cb; +[SCAPIClient sharedSnapConnectClient] */

void FUN_10b278378(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4640 != -1) {
    func_0x000107c27d9c(0x1137f4640,&PTR___NSConcreteGlobalBlock_110ccc5c8);
  }
  uVar1 = uRam00000001137f4620;
  _objc_retain(uRam00000001137f4620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2783cc; end: 10b27845f;  */

void FUN_10b2783cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b8240;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR_PTR_1126b4968;
  func_0x00010c23f940(PTR_PTR_1126b4968);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7040(puVar2,param_2,puVar4);
  uVar1 = puRam00000001137f4620;
  puRam00000001137f4620 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b278460; end: 10b27860f; +[SCAPIClient updateSharedClientWithUrl:] */

void FUN_10b278460(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar4 = PTR_PTR_1126b4968;
  iVar1 = (int)param_1;
  _objc_retain(param_3);
  func_0x00010c196380(puVar4,param_2,param_3);
  uVar3 = uRam00000001137f4608;
  func_0x00010c0ebaa0(uRam00000001137f4608);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dd20();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c18ae80(uRam00000001137f4608,param_2,puVar4);
  _objc_release(puVar4);
  iVar2 = iVar1;
  func_0x00010c0707e0();
  if ((iVar2 == 0) || (uVar5 = param_1, func_0x00010c0707c0(), (uVar5 & 1) != 0)) {
    func_0x00010c0707e0();
    if (((param_1 & 1) != 0) || (func_0x00010c0707c0(), iVar1 == 0)) goto LAB_10b2785ec;
    func_0x00010c138200(PTR_PTR_1126b8670);
    uVar3 = uRam00000001137f4610;
    func_0x00010c0ebaa0(uRam00000001137f4610);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dd20();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar6 = PTR_PTR_1126b8670;
    func_0x00010bf68d20(PTR_PTR_1126b8670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c16c7e0(PTR_PTR_1126b8670);
    uVar3 = uRam00000001137f4610;
    func_0x00010c0ebaa0(uRam00000001137f4610);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dd20();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar6 = PTR_PTR_1126b8670;
    func_0x00010bf68d40(PTR_PTR_1126b8670);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bdc3460(puVar4,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ae80(uRam00000001137f4610,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
LAB_10b2785ec:
  uVar3 = uRam00000001137f4608;
  _objc_retain(uRam00000001137f4608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b278610; end: 10b2786bb; +[SCAPIClient updateSharedSnapConnectClientWithUrl:] */

void FUN_10b278610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b4968;
  _objc_retain(param_3);
  func_0x00010c203c60(puVar2,param_2,param_3);
  uVar1 = uRam00000001137f4620;
  func_0x00010c0ebaa0(uRam00000001137f4620);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dd20();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c18ae80(uRam00000001137f4620,param_2,puVar2);
  _objc_release(puVar2);
  uVar1 = uRam00000001137f4620;
  _objc_retain(uRam00000001137f4620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2786bc; end: 10b2786eb; +[SCAPIClient defaultUrl] */

void FUN_10b2786bc(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dd1f18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dd1f18);
  return;
}



/* Entry: 10b2786ec; end: 10b27871b; +[SCAPIClient defaultSnapConnectUrl] */

void FUN_10b2786ec(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f63698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f63698);
  return;
}



/* Entry: 10b27871c; end: 10b27884f; +[SCAPIClient isDevSnapchat] */

undefined * FUN_10b27871c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b8240;
  func_0x00010c22b800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf68e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c0720c0();
  if (((ulong)puVar8 & 1) == 0) {
    puVar4 = puVar1;
    func_0x00010bf68e00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfdcf80();
    puVar8 = PTR_PTR_1126bd000;
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = puVar1;
      func_0x00010bf68e00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c360(puVar8,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    else {
      puVar8 = (undefined *)0x1;
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar8 = (undefined *)0x1;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar8;
}



/* Entry: 10b278850; end: 10b27896b; +[SCAPIClient isDevAuthService] */

undefined * FUN_10b278850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b8240;
  func_0x00010c22b740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf68e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b8670;
  func_0x00010bf68d40(PTR_PTR_1126b8670);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0720c0(puVar3,param_2,puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar1;
    func_0x00010bf68e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b8670;
    func_0x00010bf68d60(PTR_PTR_1126b8670);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bfdcf80(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    puVar8 = (undefined *)0x1;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar8;
}



/* Entry: 10b27896c; end: 10b278a43; +[SCAPIClient isDevSnapConnect] */

undefined * FUN_10b27896c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b8240;
  func_0x00010c22bfe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf68e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar1;
    func_0x00010bf68e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfdcf80();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar6 = (undefined *)0x1;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 10b278a44; end: 10b278d0f; -[SCAPIClient authenticateRequest:path:parameters:requestId:] */

void FUN_10b278a44(int param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_4 != (undefined **)0x0) {
    lVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      _objc_retain(param_4);
      ppuVar5 = param_4;
      func_0x00010bfda7c0();
      ppuVar6 = param_4;
      if (((ulong)ppuVar5 & 1) == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dacf38;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dacf38);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
      }
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      FUN_10b29afd4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      dVar9 = 1.60807493534087e-314;
      _objc_retain(param_3);
      func_0x00010bf97ce0(lVar7);
      func_0x000104b2d97c();
      func_0x00010c26f3a0(puVar2);
      dVar10 = dVar9;
      func_0x00010c26f3a0(puVar1);
      func_0x00010beb4640();
      if (param_1 != 0) {
        puVar3 = PTR_PTR_1126b7ec0;
        _objc_alloc_init(PTR_PTR_1126b7ec0);
        func_0x00010c1d9ac0(-dVar10);
        func_0x00010c1d9aa0(-dVar9,puVar3);
        func_0x00010c1ec020(puVar3);
        puVar8 = PTR_PTR_1126dfd80;
        func_0x00010c266e20(PTR_PTR_1126dfd80);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2b40();
        _objc_release(puVar8);
        _objc_release(puVar3);
      }
      _objc_release(param_3);
      _objc_release(lVar7);
      _objc_release(puVar2);
      _objc_release(ppuVar6);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b278d10; end: 10b278d1b;  */

void FUN_10b278d10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2201f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__112665aa0,param_3,
             param_2);
  return;
}



/* Entry: 10b278d1c; end: 10b278d3b; -[SCAPIClient _shouldLogPayloadGeneration] */

bool FUN_10b278d1c(void)

{
  uint uVar1;
  
  uVar1 = 10000;
  _arc4random_uniform(10000);
  return uVar1 < 500;
}



/* Entry: 10b278d3c; end: 10b278df7; -[SCAPIClient multipartFormRequestWithMethod:path:parameters:constructingBodyWithBlock:] */

void FUN_10b278d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_multipartFormRequestWithMethod_p_112612400;
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_112706080;
  uStack_50 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10ac0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b278df8; end: 10b278f0f; -[SCAPIClient requestWithMethod:path:parameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b278df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc34c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_112706080;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_requestWithMethod_path_parameter_11262b650,param_3,puVar2,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bf10ac0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b278f10; end: 10b278f1f; -[SCAPIClient defaultBaseURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b278f10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278df50);
}



/* Entry: 10b278f20; end: 10b278f2f; -[SCAPIClient loggingRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b278f20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278df4c);
}



/* Entry: 10b278f30; end: 10b278f3f; -[SCAPIClient dateFormatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b278f30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278df54);
}



/* Entry: 10b278f40; end: 10b278f7f; -[SCAPIClient setDateFormatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b278f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278df54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b278f80; end: 10b279087; -[SCAPIClient .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b278f80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278df54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278df50,0);
  return;
}



/* Entry: 10b279088; end: 10b27915b;  */

undefined8 FUN_10b279088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010c2a4be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14ed20();
  if ((int)puVar3 != 0) {
    func_0x00010c06c740();
  }
  _objc_release(puVar1);
  _objc_release(uVar2);
  return 0xffffffffffffffff;
}



/* Entry: 10b27915c; end: 10b27919f; +[SCAPIClientLogger getHttpRTT] */

undefined * FUN_10b27915c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe4cc0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10b2791a0; end: 10b2791e3; +[SCAPIClientLogger getTransportRTT] */

undefined * FUN_10b2791a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27af00();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10b2791e4; end: 10b2792ef; +[SCAPIClientLogger logURLRequestStart:name:requestInfo:] */

void FUN_10b2791e4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c296ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110f9c858);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  uVar3 = param_5;
  func_0x00010c292820(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f9c8b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  ppuVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar4 = ppuVar2;
  func_0x00010c0f5800(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c08fa60(ppuVar4);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10b2792f0; end: 10b27931b; +[SCAPIClientLogger systemBlizzardLogger] */

void FUN_10b2792f0(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001137f4660;
  _objc_retain(uRam00000001137f4660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b27931c; end: 10b279347; +[SCAPIClientLogger connectivityLogger] */

void FUN_10b27931c(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001137f4650;
  _objc_retain(uRam00000001137f4650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b279348; end: 10b279ce7;  */

void FUN_10b279348(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_540 [272];
  long lStack_430;
  long lStack_428;
  undefined1 *puStack_420;
  code *pcStack_418;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined1 auStack_370 [272];
  undefined *puStack_260;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 uStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40c = param_5;
  _objc_retain();
  _objc_retain(param_2);
  lStack_3e0 = param_3;
  _objc_retain(param_3);
  lStack_3d8 = param_4;
  _objc_retain(param_4);
  uStack_408 = param_6;
  _objc_retain(param_6);
  uStack_400 = param_7;
  _objc_retain(param_7);
  uStack_3f8 = param_8;
  _objc_retain(param_8);
  uStack_3f0 = param_9;
  _objc_retain(param_9);
  uStack_3e8 = param_10;
  _objc_retain(param_10);
  lVar3 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) goto LAB_10b279c0c;
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1a0 = 0;
  lStack_190 = 0;
  lStack_198 = 0;
  uVar10 = 0;
  lStack_178 = 0;
  lStack_180 = 0;
  lStack_168 = 0;
  lStack_170 = 0;
  puStack_158 = (undefined *)0x0;
  lStack_160 = 0;
  puStack_148 = (undefined *)0x0;
  puStack_150 = (undefined *)0x0;
  lStack_138 = 0;
  lStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  lStack_120 = 0;
  lStack_110 = 0;
  puStack_100 = (undefined *)0x0;
  lStack_108 = 0;
  lVar3 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf96480(param_1);
  uStack_208 = uVar10;
  func_0x00010bf10820(param_1);
  uStack_1f8 = uVar10;
  func_0x00010bf0dcc0(param_1);
  lVar3 = param_1;
  uStack_1f0 = uVar10;
  func_0x00010bf09d00();
  uStack_1e8 = (undefined1)lVar3;
  func_0x00010c08a9c0(param_1);
  lVar3 = param_1;
  uStack_200 = uVar10;
  func_0x00010bf061e0();
  lVar5 = param_1;
  lStack_1e0 = lVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_1d8 = lVar5;
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_1d0 = lVar3;
  func_0x00010c136da0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_1c8 = lVar5;
  func_0x00010c07ffc0();
  uStack_1c0 = (undefined1)lVar3;
  lVar3 = param_1;
  func_0x00010c136d60();
  lVar5 = param_1;
  lStack_1b8 = lVar3;
  func_0x00010c081c40();
  uStack_1b0 = (undefined1)lVar5;
  lVar3 = param_1;
  func_0x00010c292920();
  uStack_1af = (undefined1)lVar3;
  lVar3 = param_1;
  func_0x00010c113c80();
  lVar5 = param_1;
  lStack_1a8 = lVar3;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_1a0 = lVar5;
  func_0x00010c291820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_198 = lVar3;
  func_0x00010c26a580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_190 = lVar5;
  func_0x00010bf08cc0();
  lVar5 = param_1;
  lStack_188 = lVar3;
  func_0x00010c278f20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar3;
  _objc_release(lVar5);
  lVar3 = param_1;
  func_0x00010c278f20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = lVar5;
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c278f20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = lVar5;
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c278f20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf4d300();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar5;
  _objc_release(lVar3);
  lVar3 = param_2;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110f9c858);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  lStack_160 = lVar3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  puStack_158 = puVar6;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  puStack_150 = puVar7;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  puStack_148 = puVar6;
  func_0x00010bfe4ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0cc940();
  func_0x00010b25b6a4();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar5;
  _objc_release(lVar3);
  lVar3 = param_2;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110dba138);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  lStack_138 = lVar3;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110f9cdb8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  lStack_130 = lVar5;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110e98978);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  lStack_128 = lVar3;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110dd6978);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar3 = param_1;
    func_0x00010c0727e0();
    uStack_118 = (undefined1)lVar3;
  }
  else {
    uStack_118 = 1;
  }
  _objc_release(lVar5);
  lVar3 = param_2;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110dc6318);
  _objc_retainAutoreleasedReturnValue();
  uStack_117 = lVar3 != 0;
  _objc_release();
  lVar3 = param_2;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110f61f78);
  _objc_retainAutoreleasedReturnValue();
  uStack_116 = lVar3 != 0;
  _objc_release();
  lVar3 = param_2;
  FUN_10b25b6cc(param_2,&PTR____CFConstantStringClassReference_110f5fa78);
  _objc_retainAutoreleasedReturnValue();
  uStack_115 = lVar3 != 0;
  _objc_release();
  lVar3 = param_1;
  func_0x00010c0c59e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_120 = lVar3;
  func_0x00010c0ed540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_110 = lVar5;
  func_0x00010bf3d460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar3);
  if (lVar8 != 0) {
    lVar3 = param_1;
    func_0x00010bf3d460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = lVar5;
    _objc_release(lVar3);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  if (lStack_3d8 == 0) {
    lVar3 = lStack_3e0;
    func_0x00010c252ee0();
    if (lVar3 < 200) goto LAB_10b2798e8;
    lVar3 = lStack_3e0;
    func_0x00010c252ee0();
    if (299 < lVar3) goto LAB_10b2798e8;
  }
  else {
LAB_10b2798e8:
    lVar3 = param_1;
    func_0x00010bfa0620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010bfa0620();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bfc55c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar5;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x00010c0ecd20();
        _objc_retainAutoreleasedReturnValue();
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        plStack_240 = (long *)0x0;
        _objc_retain(lVar5);
        lVar3 = lVar5;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar8 = *plStack_240;
          do {
            lVar9 = 0;
            do {
              if (*plStack_240 != lVar8) {
                _objc_enumerationMutation(lVar5);
              }
              puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
              func_0x00010bdc3460();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010bfe4420();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
              puVar6 = puVar7;
              func_0x00010c08fa60();
              if (puVar6 != (undefined *)0x0) {
                func_0x00010befa120(puVar4);
              }
              _objc_release(puVar7);
              lVar9 = lVar9 + 1;
            } while (lVar3 != lVar9);
            lVar3 = lVar5;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar5);
        puVar6 = puVar4;
        func_0x00010bf529e0();
        if (puVar6 != (undefined *)0x0) {
          puVar6 = puVar4;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_100 = puVar7;
          _objc_release(0);
          _objc_release(puVar6);
        }
        _objc_release(puVar4);
      }
      _objc_release(lVar5);
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c136d40(param_1);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0b4ca0();
  _objc_release(puVar4);
  lVar3 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137f4698 != -1) {
    func_0x000107c27d9c(0x1137f4698,&PTR___NSConcreteGlobalBlock_110ccc678);
  }
  uVar10 = uRam00000001137f4670;
  puStack_3d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3c8 = 0xc2000000;
  pcStack_3c0 = FUN_10b279ce8;
  puStack_3b8 = &UNK_110ccc5e8;
  _objc_retain(uRam00000001137f4670);
  FUN_10b27bbc8(auStack_370,&uStack_208);
  lVar5 = lStack_3e0;
  _objc_retain(lStack_3e0);
  lVar8 = lStack_3d8;
  lStack_3b0 = lVar5;
  _objc_retain(lStack_3d8);
  uVar1 = uStack_408;
  lStack_3a8 = lVar8;
  uStack_258 = (undefined1)uStack_40c;
  _objc_retain(uStack_408);
  uVar2 = uStack_400;
  uStack_3a0 = uVar1;
  _objc_retain(uStack_400);
  uVar1 = uStack_3f8;
  uStack_398 = uVar2;
  _objc_retain(uStack_3f8);
  uVar2 = uStack_3f0;
  uStack_390 = uVar1;
  _objc_retain(uStack_3f0);
  uVar1 = uStack_3e8;
  uStack_388 = uVar2;
  _objc_retain(uStack_3e8);
  uStack_380 = uVar1;
  lStack_378 = lVar3;
  puStack_260 = puVar6;
  func_0x000107c27d8c(uVar10,&puStack_3d0);
  _objc_release(uVar10);
  _objc_release(uStack_380);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  _objc_release(uStack_398);
  _objc_release(uStack_3a0);
  _objc_release(lStack_3a8);
  _objc_release(lStack_3b0);
  func_0x00010b278fc0(auStack_370);
  _objc_release(lVar3);
  func_0x00010b278fc0(&uStack_208);
LAB_10b279c0c:
  _objc_release(uStack_3e8);
  _objc_release(uStack_3f0);
  _objc_release(uStack_3f8);
  _objc_release(uStack_400);
  _objc_release(uStack_408);
  _objc_release(lStack_3d8);
  _objc_release(lStack_3e0);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b278fc0(&uStack_208);
  lVar3 = param_1;
  __Unwind_Resume();
  pcStack_418 = FUN_10b279ce8;
  lStack_430 = param_2;
  lStack_428 = param_1;
  puStack_420 = &stack0xfffffffffffffff0;
  FUN_10b27bbc8(auStack_540,lVar3 + 0x60);
  FUN_10b279d40(auStack_540,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),
                *(undefined1 *)(lVar3 + 0x178),*(undefined8 *)(lVar3 + 0x30),
                *(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40),
                *(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50),
                *(undefined8 *)(lVar3 + 0x170),*(undefined8 *)(lVar3 + 0x58));
  return;
}



/* Entry: 10b279ce8; end: 10b279d3f;  */

void FUN_10b279ce8(long param_1)

{
  undefined1 auStack_130 [272];
  
  FUN_10b27bbc8(auStack_130,param_1 + 0x60);
  FUN_10b279d40(auStack_130,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined1 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 10b279d40; end: 10b27bbc7;  */

void FUN_10b279d40(undefined8 *param_1,undefined **param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined **param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  double dVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined1 auStack_440 [272];
  undefined1 auStack_330 [272];
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  if (lRam00000001137f4668 != -1) {
    ppuVar11 = &PTR___NSConcreteGlobalBlock_110ccc618;
    func_0x000107c27d9c(0x1137f4668);
  }
  if ((bRam00000001137f4658 & 1) == 0) goto LAB_10b27ba44;
  puVar29 = PTR_PTR_1126dffa8;
  _objc_opt_new(PTR_PTR_1126dffa8);
  uVar5 = param_5;
  func_0x00010c13b920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c135860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf9b260();
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c135860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf9b220();
  _objc_release(uVar6);
  func_0x00010c1691e0(puVar29);
  func_0x00010c1c4880(puVar29);
  func_0x00010c212840(puVar29);
  uVar9 = param_1[8];
  func_0x00010c0720c0();
  if ((int)uVar9 == 0) {
    func_0x00010b26bef4();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  func_0x00010c212920(puVar29);
  func_0x00010c1c5440(puVar29);
  func_0x00010c1c43a0(puVar29);
  func_0x00010c0b4ca0(param_1[0x14]);
  func_0x00010c182600(puVar29);
  ppuVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(ppuVar11);
    func_0x00010bdc2040(PTR_PTR_1126bfb10);
    func_0x00010c1e7a80(puVar29);
  }
  puVar32 = PTR_PTR_1126dfd80;
  func_0x00010bf48f00();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar32;
  func_0x00010bf48ea0((double)(long)uVar7 / 1000000000.0,(double)(long)uVar8 / 1000000000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x00010bf446e0(puVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7a20(puVar29);
  _objc_release(puVar34);
  ppuVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar11);
  puVar34 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27000();
  _objc_release(puVar34);
  func_0x00010c16efe0(puVar29);
  func_0x00010c16efc0(puVar29);
  ppuVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar12 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar11);
  func_0x00010c21cc00(puVar29);
  ppuVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar12 = ppuVar11;
  }
  _objc_retain();
  _objc_release(ppuVar11);
  ppuVar11 = (undefined **)PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar11;
  func_0x00010bf5e740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar1 = ppuVar13;
  }
  _objc_retain();
  _objc_release(ppuVar13);
  _objc_release(ppuVar11);
  func_0x00010c16f060(puVar29);
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ef40(puVar29);
  _objc_release(puVar34);
  uVar6 = param_5;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf99800();
  _objc_release(uVar6);
  if (uVar14 != 0) {
    uVar6 = param_5;
    func_0x00010bf66200(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99800();
    func_0x00010c1eec80(puVar29);
    _objc_release(uVar6);
  }
  uVar6 = param_5;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010c0b5180();
  _objc_release(uVar6);
  if (uVar14 != 0) {
    uVar6 = param_5;
    func_0x00010bf66200(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b5180();
    func_0x00010c1eeca0(puVar29);
    _objc_release(uVar6);
  }
  puVar34 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4cc0();
  func_0x00010c1a9560(puVar29);
  _objc_release(puVar34);
  puVar34 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27af00();
  func_0x00010c219c80(puVar29);
  _objc_release(puVar34);
  uVar6 = param_5;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf27aa0();
  _objc_release(uVar6);
  if (uVar14 != 0) {
    uVar6 = param_5;
    func_0x00010bf66200(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf27aa0();
    func_0x00010c197540(puVar29);
    _objc_release(uVar6);
  }
  uVar6 = param_5;
  func_0x00010bf66200(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7d60();
  func_0x00010c1cc400(puVar29);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010bf66200(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080f00();
  func_0x00010c1b5020(puVar29);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010c08ad80();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar14;
  func_0x00010bf529e0();
  _objc_release(uVar14);
  _objc_release(uVar6);
  if (uVar26 != 0) {
    puVar34 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uVar6 = param_5;
    func_0x00010bf66200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010c08ad80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar14;
    func_0x00010bf52a60();
    if (uVar6 != 0) {
      lVar28 = *plStack_1d0;
      do {
        uVar26 = 0;
        do {
          if (*plStack_1d0 != lVar28) {
            _objc_enumerationMutation(uVar14);
          }
          uVar9 = *(undefined8 *)(lStack_1d8 + uVar26 * 8);
          puVar35 = PTR_PTR_1126e0010;
          _objc_opt_new(PTR_PTR_1126e0010);
          func_0x00010bfb6240(uVar9);
          func_0x00010c19ed60(puVar35);
          func_0x00010c08ae80(uVar9);
          func_0x00010c1b9320(puVar35);
          func_0x00010c142500(uVar9);
          func_0x00010c1eec40(puVar35);
          func_0x00010c26d700(uVar9);
          func_0x00010c213dc0(puVar35);
          func_0x00010c26d720(uVar9);
          func_0x00010c213de0(puVar35);
          func_0x00010bf996e0(uVar9);
          func_0x00010c197440(puVar35);
          func_0x00010befa120(puVar34);
          _objc_release(puVar35);
          uVar26 = uVar26 + 1;
        } while (uVar6 != uVar26);
        uVar6 = uVar14;
        func_0x00010bf52a60();
      } while (uVar6 != 0);
    }
    _objc_release(uVar14);
    func_0x00010c1b9220(puVar29);
    _objc_release(puVar34);
  }
  puVar34 = PTR_PTR_1126c1078;
  func_0x00010bf32da0(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179de0(puVar29);
  _objc_release(puVar34);
  puVar34 = PTR_PTR_1126c1078;
  func_0x00010bf48dc0(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180f60(puVar29);
  _objc_release(puVar34);
  func_0x00010c1e6840(puVar29);
  func_0x00010c21e020(puVar29);
  func_0x00010c21a2a0(puVar29);
  if (-1 < param_10) {
    func_0x00010c1eba60(puVar29);
  }
  uVar6 = param_5;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf4f420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar6);
  if (uVar14 != 0) {
    puVar34 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    uVar6 = param_5;
    func_0x00010bf66200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010bf4f420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar14;
    func_0x00010bf52a60();
    if (uVar6 != 0) {
      lVar28 = *plStack_210;
      do {
        uVar26 = 0;
        do {
          if (*plStack_210 != lVar28) {
            _objc_enumerationMutation(uVar14);
          }
          uVar9 = *(undefined8 *)(lStack_218 + uVar26 * 8);
          puVar35 = PTR_PTR_1126e0018;
          _objc_opt_new(PTR_PTR_1126e0018);
          func_0x00010c2867c0(uVar9);
          func_0x00010c21c5a0(puVar35);
          func_0x00010c28b0a0(uVar9);
          func_0x00010c21c880(puVar35);
          func_0x00010c28d540();
          func_0x00010c21c9e0(puVar35);
          func_0x00010c28d3a0(uVar9);
          func_0x00010c21c960(puVar35);
          func_0x00010c28d680(uVar9);
          func_0x00010c21ca80(puVar35);
          func_0x00010c28d4c0(uVar9);
          func_0x00010c21c9c0(puVar35);
          func_0x00010befa120(puVar34);
          _objc_release(puVar35);
          uVar26 = uVar26 + 1;
        } while (uVar6 != uVar26);
        uVar6 = uVar14;
        func_0x00010bf52a60();
      } while (uVar6 != 0);
    }
    _objc_release(uVar14);
    puVar35 = puVar34;
    func_0x00010bf529e0();
    if (puVar35 != (undefined *)0x0) {
      func_0x00010c1ebb60(puVar29);
    }
    _objc_release(puVar34);
  }
  func_0x00010c1cc2a0(puVar29);
  uVar6 = uVar5;
  func_0x00010c0d7620(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5260(puVar29);
  uVar14 = param_5;
  func_0x00010c135860();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar14;
  func_0x00010bf5c560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  if (uVar5 != 0) {
    uVar14 = uVar26;
    func_0x00010bf87320();
    if (0 < (long)uVar14) {
      func_0x00010bf87320(uVar26);
      func_0x00010c136740(uVar26);
    }
    func_0x00010c1a13a0(puVar29);
    func_0x00010bf872c0(uVar26);
    func_0x00010bf87320(uVar26);
    func_0x00010c190c00(puVar29);
    func_0x00010bf482a0(uVar26);
    func_0x00010bf48340(uVar26);
    func_0x00010c180f40(puVar29);
  }
  func_0x00010c2463c0(uVar26);
  func_0x00010c180ee0(puVar29);
  if (uVar5 != 0) {
    func_0x00010c24cc40(uVar26);
    func_0x00010c24cd00(uVar26);
    func_0x00010c1f99e0(puVar29);
  }
  uVar14 = uVar26;
  func_0x00010c15e000();
  if ((0 < (long)uVar14) && (uVar14 = uVar26, func_0x00010c15e060(), 0 < (long)uVar14)) {
    func_0x00010c15e000(uVar26);
    func_0x00010c15e060(uVar26);
    func_0x00010c1eba20(puVar29);
  }
  ppuVar11 = param_2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar11;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  uVar14 = uVar26;
  func_0x00010c15efa0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c08fa60();
  _objc_release(uVar14);
  if (uVar15 != 0) {
    uVar14 = uVar26;
    func_0x00010c15efa0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd4a0(puVar29);
    _objc_release(uVar14);
  }
  ppuVar11 = param_2;
  func_0x00010bf001c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd660(puVar29);
  _objc_release(ppuVar16);
  _objc_release(ppuVar11);
  ppuVar11 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar11);
  ppuVar11 = param_2;
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar16 = param_2;
    func_0x00010bf001c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar16;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar16);
    if (ppuVar17 != (undefined **)0x0) {
      func_0x00010bf001c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1fd680(puVar29);
      goto LAB_10b27abe4;
    }
  }
  else {
    func_0x00010bf001c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1fd680(puVar29);
LAB_10b27abe4:
    _objc_release(ppuVar16);
    _objc_release(ppuVar11);
  }
  ppuVar11 = param_2;
  func_0x00010bf001c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar11;
  func_0x00010b27be48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a2c0(puVar29);
  _objc_release(ppuVar16);
  _objc_release(ppuVar11);
  ppuVar17 = ppuVar13;
  FUN_10b27be90(param_2);
  func_0x00010c17a2a0(puVar29);
  ppuVar11 = param_2;
  func_0x00010bf001c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175060(puVar29);
  _objc_release(ppuVar16);
  _objc_release(ppuVar11);
  uVar9 = param_1[0x15];
  _objc_retain(uVar9);
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar34 & 1) == 0) {
    uVar10 = uVar9;
    func_0x00010bf93720(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar29);
    _objc_release(uVar10);
  }
  else if (param_1[0xd] != 0) {
    func_0x00010c1ebd20(puVar29);
  }
  puVar34 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar14 = uVar26;
  func_0x00010c136740(uVar26);
  func_0x00010bf655e0((double)(long)uVar14 / 1000.0,puVar34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eba40(puVar29);
  _objc_release(puVar34);
  func_0x00010c1a9200(puVar29);
  func_0x00010c1d9820(puVar29);
  lVar28 = param_1[0x18];
  _objc_retain(lVar28);
  if (lVar28 != 0) {
    func_0x00010c1e6480(puVar29);
  }
  func_0x00010c1a9540(puVar29);
  func_0x00010c1eb9e0(puVar29);
  func_0x00010c15e280(uVar26);
  func_0x00010c1eba80(puVar29);
  func_0x00010c1b3f80(puVar29);
  func_0x00010c1ed600(puVar29);
  ppuVar16 = &PTR____CFConstantStringClassReference_110dae278;
  if ((undefined **)param_1[0x1a] != (undefined **)0x0) {
    ppuVar16 = (undefined **)param_1[0x1a];
  }
  _objc_retain(ppuVar16);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dae278;
  if ((undefined **)param_1[0x1b] != (undefined **)0x0) {
    ppuVar2 = (undefined **)param_1[0x1b];
  }
  _objc_retain(ppuVar2);
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb960(puVar29);
  _objc_release(puVar34);
  func_0x00010c20f8a0(puVar29);
  func_0x00010bfe4dc0(uVar5);
  func_0x00010c20a3c0(puVar29);
  if (param_3 != 0) {
    func_0x00010bf3ec40(param_3);
    func_0x00010c196fe0(puVar29);
    lVar18 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar18;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar18);
    if (lVar30 != 0) {
      lVar18 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar18;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(lVar30);
      _objc_release(lVar18);
      func_0x00010c1780a0(puVar29);
    }
    lVar18 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar18;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar18);
    if (lVar30 != 0) {
      lVar18 = param_3;
      func_0x00010c292820(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar18;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1ae560(puVar29);
      _objc_release(lVar30);
      _objc_release(lVar18);
    }
    lVar18 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar18;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar18);
    if (lVar30 != 0) {
      lVar18 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar18;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = lVar30;
      func_0x00010c067fc0();
      _objc_release(lVar30);
      _objc_release(lVar18);
      if (lVar27 != 0) {
        func_0x00010c1e68a0(puVar29);
      }
    }
  }
  lVar18 = param_1[0x21];
  func_0x00010c08fa60();
  if (lVar18 != 0) {
    func_0x00010c19a140(puVar29);
  }
  func_0x00010c21e120(puVar29);
  func_0x00010c2127c0(puVar29);
  ppuVar11 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar11;
  FUN_10b27c0e8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  func_0x00010c1decc0(puVar29);
  uVar14 = uVar26;
  func_0x00010c13bc60();
  if (0 < (long)uVar14) {
    uVar14 = uVar26;
    func_0x00010c13bc60();
    uVar15 = uVar26;
    func_0x00010c136740();
    if ((long)uVar15 <= (long)uVar14) {
      func_0x00010c13bc60(uVar26);
      func_0x00010c136740(uVar26);
      func_0x00010c21a8a0(puVar29);
    }
  }
  uVar14 = uVar26;
  func_0x00010c135300();
  if (0 < (long)uVar14) {
    uVar14 = uVar26;
    func_0x00010c135300();
    uVar15 = uVar26;
    func_0x00010c136740();
    if ((long)uVar15 <= (long)uVar14) {
      func_0x00010c135300(uVar26);
      func_0x00010c136740(uVar26);
      func_0x00010c21a9a0(puVar29);
    }
  }
  uVar14 = uVar5;
  func_0x00010c28f420();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf529e0();
  _objc_release(uVar14);
  if (1 < uVar15) {
    func_0x00010c1b3d00(puVar29);
    uVar14 = uVar5;
    func_0x00010c28f340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ca80(puVar29);
    _objc_release(uVar14);
  }
  func_0x00010c1cc2c0(puVar29);
  func_0x00010c21e000(puVar29);
  if (param_3 != 0) {
    func_0x00010bf3ec40(param_3);
  }
  uVar14 = uVar26;
  func_0x00010c136740();
  if (0 < (long)uVar14) {
    func_0x00010c135300(uVar26);
    func_0x00010c136740(uVar26);
    func_0x00010c1eba00(puVar29);
  }
  puVar34 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  lVar30 = param_1[0x1c];
  _objc_retain(lVar30);
  func_0x00010c2a4be0(puVar34);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar30;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  _objc_release(puVar34);
  if (lVar18 == 0) {
    lVar27 = 0;
    lVar30 = -1;
  }
  else {
    lVar20 = lVar18;
    func_0x00010c11f420();
    lVar27 = 0;
    lVar30 = -1;
    if ((ppuVar17 != (undefined **)0x0) && (lVar20 != 0)) {
      lVar27 = lVar18;
      func_0x00010c11f440();
      if (lVar27 == 0x7fffffffffffffff) {
        lVar27 = 0;
      }
      else {
        lVar20 = lVar18;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar18;
        func_0x00010c260c00();
        _objc_retainAutoreleasedReturnValue();
        lVar30 = lVar20;
        FUN_10b279088();
        lVar27 = lVar21;
        FUN_10b279088();
        if ((lVar30 < 0) || ((lVar27 < lVar30 && (lVar27 != -1)))) {
          lVar27 = 0;
          lVar30 = -1;
        }
        else {
          lVar3 = 0;
          if (lVar27 != -1) {
            lVar3 = lVar30;
          }
          lVar27 = lVar27 - lVar3;
        }
        _objc_release(lVar21);
        _objc_release(lVar20);
      }
    }
  }
  _objc_release(lVar18);
  if ((lVar30 != -1) && (func_0x00010c1eb9c0(puVar29), lVar27 != -1)) {
    func_0x00010c1eb9a0(puVar29);
  }
  FUN_10b27bbc8(auStack_330,param_1);
  func_0x00010b278fc0(auStack_330);
  func_0x00010c16a260(puVar29);
  FUN_10b27bbc8(auStack_440,param_1);
  func_0x00010b278fc0(auStack_440);
  func_0x00010c16c8a0(puVar29);
  ppuVar11 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  if (ppuVar17 != (undefined **)0x0) {
    func_0x00010c0b4ca0(ppuVar17);
    func_0x00010c1ecde0(puVar29);
  }
  func_0x00010bf675a0(uVar5);
  func_0x00010c1ece20(puVar29);
  func_0x00010c122220(uVar26);
  func_0x00010c1ece40(puVar29);
  ppuVar11 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dae278;
  if (ppuVar22 != (undefined **)0x0) {
    ppuVar4 = ppuVar22;
  }
  _objc_retain(ppuVar4);
  _objc_release(ppuVar22);
  _objc_release(ppuVar11);
  ppuVar11 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = &PTR____CFConstantStringClassReference_110dae278;
  if (ppuVar23 != (undefined **)0x0) {
    ppuVar22 = ppuVar23;
  }
  _objc_retain(ppuVar22);
  _objc_release(ppuVar23);
  _objc_release(ppuVar11);
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ece00(puVar29);
  _objc_release(puVar34);
  func_0x00010c1b3f60(puVar29);
  func_0x00010c1b3320(puVar29);
  ppuVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c180720(puVar29);
    _objc_release(ppuVar11);
  }
  ppuVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c180740(puVar29);
    _objc_release(ppuVar11);
  }
  _objc_retain(param_2);
  ppuVar11 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar11;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar11);
  ppuVar11 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar23 == (undefined **)0x0) {
    ppuVar23 = ppuVar11;
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar11);
    if (ppuVar23 != (undefined **)0x0) {
      ppuVar11 = param_2;
      func_0x00010bf001c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar11;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b27b720;
    }
  }
  else {
    ppuVar23 = ppuVar11;
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
LAB_10b27b720:
    _objc_release(ppuVar11);
    if (ppuVar23 != (undefined **)0x0) {
      func_0x00010bc9ab98(ppuVar23);
      _objc_release(ppuVar23);
    }
  }
  _objc_release(param_2);
  func_0x00010c20c000(puVar29);
  lVar18 = param_1[0x11];
  if (lVar18 == 0) {
    if (param_1[0x1d] != 0) {
      func_0x00010c19d9e0(puVar29);
      lVar18 = param_1[0x1d];
      goto LAB_10b27b788;
    }
    lVar18 = 0;
  }
  else {
LAB_10b27b788:
    _objc_retain(lVar18);
  }
  func_0x00010c219300(puVar29);
  if ((double)param_1[2] != -1.0) {
    func_0x00010c16c760(puVar29);
    func_0x00010c16c860(puVar29);
  }
  dVar31 = (double)param_1[3];
  if (dVar31 != -1.0) {
    func_0x00010c16a220(puVar29);
    func_0x00010c16a240(puVar29);
  }
  uVar10 = param_9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar10;
  func_0x00010bf1f3c0();
  if ((int)uVar24 == 0) {
    _objc_release(uVar10);
  }
  else {
    lVar30 = param_1[0x20];
    _objc_release(uVar10);
    if (lVar30 != 0) {
      func_0x00010c17d140(puVar29);
    }
  }
  if (param_1[0x1f] != 0) {
    func_0x00010c1d65e0(puVar29);
  }
  uVar10 = param_11;
  func_0x00010c07bc40();
  if ((int)uVar10 != 0) {
    uVar10 = param_11;
    func_0x00010bfc1d60();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar10;
    func_0x00010c0888a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar24);
    puVar34 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar34);
    if (0.0 < dVar31 / 1000.0) {
      uVar24 = uVar10;
      func_0x00010bf6d0a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1e9360(puVar29);
      _objc_release(uVar24);
      func_0x00010c214fc0(puVar29);
    }
    uVar24 = uVar10;
    func_0x00010bf4be00();
    if (0 < (int)uVar24) {
      func_0x00010bf4be00(uVar10);
      func_0x00010c181bc0(puVar29);
    }
    _objc_release(uVar10);
  }
  func_0x00010c0b29e0(param_7);
  puVar34 = puVar29;
  func_0x00010bf0a640(puVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_release(puVar34);
  _objc_release(puVar34);
  uVar10 = param_1[0x16];
  ppuVar11 = (undefined **)param_1[0x17];
  uVar14 = uVar5;
  func_0x00010bfe4dc0(uVar5);
  FUN_10b27c178((double)(long)uVar8 / 1000000000.0 - (double)(long)uVar7 / 1000000000.0,uVar10,
                ppuVar11,uVar6,&PTR____CFConstantStringClassReference_110db8b78,(long)(int)uVar14,
                param_1[0x19],param_8);
  _objc_release(lVar18);
  _objc_release(ppuVar22);
  _objc_release(ppuVar4);
  _objc_release(ppuVar17);
  _objc_release(ppuVar19);
  _objc_release(ppuVar2);
  _objc_release(ppuVar16);
  _objc_release(lVar28);
  _objc_release(uVar9);
  _objc_release(ppuVar13);
  _objc_release(uVar26);
  _objc_release(uVar6);
  _objc_release(ppuVar1);
  _objc_release(ppuVar12);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(uVar5);
  _objc_release(puVar29);
LAB_10b27ba44:
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar25 = param_1;
  func_0x00010b278fc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    func_0x00010b278fc0(param_1);
    __Unwind_Resume();
    puVar32 = ppuVar11[1];
    puVar29 = *ppuVar11;
    puVar33 = ppuVar11[2];
    puVar35 = ppuVar11[5];
    puVar34 = ppuVar11[4];
    puVar25[3] = ppuVar11[3];
    puVar25[2] = puVar33;
    puVar25[5] = puVar35;
    puVar25[4] = puVar34;
    puVar25[1] = puVar32;
    *puVar25 = puVar29;
    puVar29 = ppuVar11[6];
    _objc_retain(puVar29);
    puVar25[6] = puVar29;
    puVar29 = ppuVar11[7];
    _objc_retain(puVar29);
    puVar25[7] = puVar29;
    puVar29 = ppuVar11[8];
    _objc_retain(puVar29);
    puVar25[8] = puVar29;
    puVar32 = ppuVar11[0xc];
    puVar29 = ppuVar11[0xb];
    puVar33 = ppuVar11[9];
    puVar25[10] = ppuVar11[10];
    puVar25[9] = puVar33;
    puVar25[0xc] = puVar32;
    puVar25[0xb] = puVar29;
    puVar29 = ppuVar11[0xd];
    _objc_retain(puVar29);
    puVar25[0xd] = puVar29;
    puVar29 = ppuVar11[0xe];
    _objc_retain(puVar29);
    puVar25[0xe] = puVar29;
    puVar29 = ppuVar11[0xf];
    _objc_retain(puVar29);
    puVar25[0xf] = puVar29;
    puVar25[0x10] = ppuVar11[0x10];
    puVar29 = ppuVar11[0x11];
    _objc_retain(puVar29);
    puVar25[0x11] = puVar29;
    puVar29 = ppuVar11[0x12];
    _objc_retain(puVar29);
    puVar25[0x12] = puVar29;
    puVar29 = ppuVar11[0x13];
    _objc_retain(puVar29);
    puVar25[0x13] = puVar29;
    puVar29 = ppuVar11[0x14];
    _objc_retain(puVar29);
    puVar25[0x14] = puVar29;
    puVar29 = ppuVar11[0x15];
    _objc_retain(puVar29);
    puVar25[0x15] = puVar29;
    puVar29 = ppuVar11[0x16];
    _objc_retain(puVar29);
    puVar25[0x16] = puVar29;
    puVar29 = ppuVar11[0x17];
    _objc_retain(puVar29);
    puVar25[0x17] = puVar29;
    puVar29 = ppuVar11[0x18];
    _objc_retain(puVar29);
    puVar25[0x18] = puVar29;
    puVar29 = ppuVar11[0x19];
    _objc_retain(puVar29);
    puVar25[0x19] = puVar29;
    puVar29 = ppuVar11[0x1a];
    _objc_retain(puVar29);
    puVar25[0x1a] = puVar29;
    puVar29 = ppuVar11[0x1b];
    _objc_retain(puVar29);
    puVar25[0x1b] = puVar29;
    puVar29 = ppuVar11[0x1c];
    _objc_retain(puVar29);
    puVar25[0x1c] = puVar29;
    puVar29 = ppuVar11[0x1d];
    _objc_retain(puVar29);
    puVar25[0x1d] = puVar29;
    *(undefined4 *)(puVar25 + 0x1e) = *(undefined4 *)(ppuVar11 + 0x1e);
    puVar29 = ppuVar11[0x1f];
    _objc_retain(puVar29);
    puVar25[0x1f] = puVar29;
    puVar29 = ppuVar11[0x20];
    _objc_retain(puVar29);
    puVar25[0x20] = puVar29;
    puVar29 = ppuVar11[0x21];
    _objc_retain(puVar29);
    puVar25[0x21] = puVar29;
    return;
  }
  return;
}



/* Entry: 10b27bbc8; end: 10b27bd7f;  */

void FUN_10b27bbc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_2[6];
  _objc_retain(uVar1);
  param_1[6] = uVar1;
  uVar1 = param_2[7];
  _objc_retain(uVar1);
  param_1[7] = uVar1;
  uVar1 = param_2[8];
  _objc_retain(uVar1);
  param_1[8] = uVar1;
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xb];
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  _objc_retain(uVar1);
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xe];
  _objc_retain(uVar1);
  param_1[0xe] = uVar1;
  uVar1 = param_2[0xf];
  _objc_retain(uVar1);
  param_1[0xf] = uVar1;
  param_1[0x10] = param_2[0x10];
  uVar1 = param_2[0x11];
  _objc_retain(uVar1);
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x12];
  _objc_retain(uVar1);
  param_1[0x12] = uVar1;
  uVar1 = param_2[0x13];
  _objc_retain(uVar1);
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x14];
  _objc_retain(uVar1);
  param_1[0x14] = uVar1;
  uVar1 = param_2[0x15];
  _objc_retain(uVar1);
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x16];
  _objc_retain(uVar1);
  param_1[0x16] = uVar1;
  uVar1 = param_2[0x17];
  _objc_retain(uVar1);
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x18];
  _objc_retain(uVar1);
  param_1[0x18] = uVar1;
  uVar1 = param_2[0x19];
  _objc_retain(uVar1);
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1a];
  _objc_retain(uVar1);
  param_1[0x1a] = uVar1;
  uVar1 = param_2[0x1b];
  _objc_retain(uVar1);
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1c];
  _objc_retain(uVar1);
  param_1[0x1c] = uVar1;
  uVar1 = param_2[0x1d];
  _objc_retain(uVar1);
  param_1[0x1d] = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  uVar1 = param_2[0x1f];
  _objc_retain(uVar1);
  param_1[0x1f] = uVar1;
  uVar1 = param_2[0x20];
  _objc_retain(uVar1);
  param_1[0x20] = uVar1;
  uVar1 = param_2[0x21];
  _objc_retain(uVar1);
  param_1[0x21] = uVar1;
  return;
}



/* Entry: 10b27bd80; end: 10b27be8f;  */

void FUN_10b27bd80(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 200);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 200) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x108);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x130);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x160);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  return;
}



/* Entry: 10b27be90; end: 10b27c0e7;  */

ulong FUN_10b27be90(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar6 = 0;
    goto LAB_10b27bfb4;
  }
  uVar6 = param_1;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f5e818;
  func_0x00010bf32ee0();
  if (ppuVar2 == (undefined **)0x0) {
LAB_10b27bf90:
    uVar6 = uVar1;
    func_0x00010c0720c0(uVar1);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df7718;
    func_0x00010bf32ee0();
    if (ppuVar2 == (undefined **)0x0) goto LAB_10b27bf90;
    ppuVar2 = &PTR____CFConstantStringClassReference_110f9cf98;
    func_0x00010bf32ee0();
    if (ppuVar2 == (undefined **)0x0) {
      if (uVar1 == 0) {
LAB_10b27c044:
        uVar6 = 0;
      }
      else {
        if (lRam00000001137f4690 != -1) {
          func_0x000107c27d9c(0x1137f4690,&PTR___NSConcreteGlobalBlock_110ccc658);
        }
        uVar6 = uRam00000001137f4688;
        func_0x00010bf4b900(uRam00000001137f4688);
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f9cfb8;
      func_0x00010bf32ee0();
      if (ppuVar2 == (undefined **)0x0) {
        if (uVar1 == 0) goto LAB_10b27c044;
        uVar3 = uVar1;
        func_0x00010c11f420();
        if (uVar3 == 0x7fffffffffffffff) {
          func_0x00010b27d990();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010bf4b900();
        }
        else {
          uVar4 = uVar1;
          func_0x00010c260c20(uVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010c25d0a0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(uVar4);
          func_0x00010b27d990();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf4b900();
          _objc_release(uVar4);
        }
      }
      else {
        uVar3 = param_1;
        func_0x00010bf001c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = (ulong)(uVar6 != 0);
        _objc_release();
      }
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar1);
LAB_10b27bfb4:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 10b27c0e8; end: 10b27c177;  */

void FUN_10b27c0e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110f9ce58);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110f9ce78);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b27c178; end: 10b27d933;  */

void FUN_10b27c178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined **param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuStack_78;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010c232720(0x4014000000000000,0);
  if ((int)puVar1 != 0) {
    ppuVar2 = param_7;
    func_0x00010c0720c0();
    if (((((ulong)ppuVar2 & 1) == 0) &&
        (ppuVar2 = param_7, func_0x00010c0720c0(), ((ulong)ppuVar2 & 1) == 0)) &&
       (ppuVar2 = param_7, func_0x00010c0720c0(), (int)ppuVar2 == 0)) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dcdfd8;
    }
    else {
      _objc_retain(param_7);
      ppuStack_78 = param_7;
    }
    func_0x00010c08fa60();
    uVar3 = param_2;
    func_0x00010c260c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    uVar4 = param_3;
    func_0x00010c260c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    FUN_10b27f940(param_8,uVar3,ppuStack_78,uVar4,param_4,param_5,puVar5,1);
    FUN_10b280188(param_1,param_8,uVar3,ppuStack_78,uVar4,param_4,param_5,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b27d934; end: 10b27d9e3;  */

uint FUN_10b27d934(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain();
    _objc_opt_class(puVar1);
    lVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    _objc_release(param_1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 10b27d9e4; end: 10b27da5b;  */

void FUN_10b27d9e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111183b30);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f4680;
  puRam00000001137f4680 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b27da5c; end: 10b27dab7;  */

void FUN_10b27da5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_10f73f219;
  _dispatch_queue_create(&UNK_10f73f219,uVar2);
  uVar1 = puRam00000001137f4670;
  puRam00000001137f4670 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b27dab8; end: 10b27db23; +[SCCarrierNetworkInfoStaticProvider connectionType] */

void FUN_10b27dab8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam00000001137f46a0;
  func_0x00010c269d40(uRam00000001137f46a0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c121b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b27db24; end: 10b27db73; -[SCDeviceIDManager init] */

undefined1 * FUN_10b27db24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be4d520(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b27db74; end: 10b27dbeb; -[SCDeviceIDManager _deviceIdentifierExists] */

bool FUN_10b27db74(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf71180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08fa60();
    bVar1 = lVar3 != 0;
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10b27dbec; end: 10b27dc87; -[SCDeviceIDManager _loadFromKeychain] */

void FUN_10b27dbec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b20(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110f60cd8,
                      (long)&uStack_38 + 4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cf40(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b20(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110f60cf8,
                      &uStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cf60(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b27dc88; end: 10b27dd2b; -[SCDeviceIDManager _writeToKeychain] */

void FUN_10b27dc88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010bdfbde0();
  puVar1 = PTR_PTR_1126aef90;
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf71180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e540(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f60cd8);
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126aef90;
    func_0x00010bf711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e540(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110f60cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b27dd2c; end: 10b27df7f; -[SCDeviceIDManager getChallengeResponseParametersForChallenge:endpoint:username:] */

void FUN_10b27dd2c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bdfbde0();
  if ((int)puVar3 == 0) {
    puVar3 = puVar2;
    func_0x00010bf446e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _objc_release(puVar3);
    puVar3 = puVar4;
    _strlen(puVar4);
    _CC_SHA256(puVar4,puVar3,auStack_78);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar3;
    func_0x00010c271dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1d0640(puVar1);
  }
  else {
    puVar3 = param_1;
    func_0x00010bf71180(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_10b27df80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    FUN_10b27dfcc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain();
    _objc_alloc(puVar3);
    func_0x00010c008340();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b27df80; end: 10b27dfcb;  */

void FUN_10b27df80(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c008340();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b27dfcc; end: 10b27e0f7;  */

void FUN_10b27dfcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retainAutorelease();
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf25f00();
  uVar2 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  uVar3 = param_2;
  func_0x00010bf446e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  _objc_retainAutorelease(uVar3);
  func_0x00010bdc3520();
  _objc_release(uVar3);
  uVar3 = uVar4;
  _strlen(uVar4);
  _CCHmac(2,uVar1,uVar2,uVar4,uVar3,auStack_58);
  puVar9 = auStack_58;
  lVar10 = 10;
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c271dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(lVar10);
  puVar6 = puVar5;
  func_0x00010bdfbde0();
  if (((((ulong)puVar6 & 1) == 0) &&
      (puVar7 = puVar9, func_0x00010c08fa60(), puVar7 != (undefined1 *)0x0)) &&
     (lVar8 = lVar10, func_0x00010c08fa60(), lVar8 != 0)) {
    puVar7 = puVar9;
    func_0x00010bf64920(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cf40(puVar5);
    _objc_release(puVar7);
    lVar8 = lVar10;
    func_0x00010bf64920(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cf60(puVar5);
    _objc_release(lVar8);
    func_0x00010beebca0(puVar5);
  }
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10b27e0f8; end: 10b27e1c3; -[SCDeviceIDManager storeDeviceIDWithKey:value:] */

void FUN_10b27e0f8(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bdfbde0();
  if ((((uVar1 & 1) == 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) &&
     (lVar2 = param_4, func_0x00010c08fa60(), lVar2 != 0)) {
    lVar2 = param_3;
    func_0x00010bf64920(param_3,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cf40(param_1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf64920(param_4,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cf60(param_1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010beebca0(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b27e1c4; end: 10b27e457; -[SCDeviceIDManager deviceIDParameters:] */

void FUN_10b27e1c4(ulong param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137f46a8 != 0) {
    lVar2 = lRam00000001137f46a8;
    func_0x00010bf51e00();
    func_0x00010c1d0640(ppuVar1);
    _objc_release(lVar2);
  }
  uVar3 = param_1;
  func_0x00010bdfbde0();
  ppuVar10 = ppuVar1;
  if ((uVar3 & 1) == 0) {
    func_0x00010c1d0640(ppuVar1);
    _objc_retain(ppuVar1);
  }
  else {
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar5 = ppuVar6;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar6 = ppuVar7;
    }
    uVar3 = param_1;
    func_0x00010bf71180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    FUN_10b27df80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar1);
    _objc_release(uVar8);
    _objc_release(uVar3);
    func_0x00010bf711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    FUN_10b27dfcc(param_1,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar1);
    _objc_release(uVar3);
    _objc_release(puVar9);
    _objc_release(param_1);
    func_0x00010bf51e00(ppuVar1);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    func_0x00010bf71180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_3;
    FUN_10b27df80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 10b27e458; end: 10b27e49b; -[SCDeviceIDManager deviceToken] */

void FUN_10b27e458(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf71180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b27df80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b27e49c; end: 10b27e59f; -[SCDeviceIDManager deviceSignatureWithUsernameOrEmail:timestamp:requestToken:] */

void FUN_10b27e49c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_9c [20];
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_1;
  FUN_10b27dfcc(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_10b27e5a0;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = param_1;
    uStack_80 = param_4;
    puStack_78 = puVar2;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010bdfbde0();
    if ((int)puVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010bf71180(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      _objc_release(param_1);
      puVar1 = puVar2;
      _strlen(puVar2);
      _CC_SHA1(puVar2,puVar1,auStack_9c);
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      puVar2 = puVar1;
      func_0x00010c271dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      if (lRam00000001137f46b0 != -1) {
        func_0x000107c27d9c(0x1137f46b0,&PTR___NSConcreteGlobalBlock_110ccc698);
      }
      puVar2 = puRam00000001137f46b8;
      _objc_retain(puRam00000001137f46b8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b27e5a0; end: 10b27e677; -[SCDeviceIDManager deviceTokenIdHash] */

void FUN_10b27e5a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_3c [20];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bdfbde0();
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010bf71180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    _objc_release(param_1);
    uVar2 = uVar1;
    _strlen(uVar1);
    _CC_SHA1(uVar1,uVar2,auStack_3c);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bffa160();
    puVar4 = puVar3;
    func_0x00010c271dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (lRam00000001137f46b0 != -1) {
      func_0x000107c27d9c(0x1137f46b0,&PTR___NSConcreteGlobalBlock_110ccc698);
    }
    puVar4 = puRam00000001137f46b8;
    _objc_retain(puRam00000001137f46b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b27e678; end: 10b27e6cb; +[SCDeviceIDManager shared] */

void FUN_10b27e678(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f46b0 != -1) {
    func_0x000107c27d9c(0x1137f46b0,&PTR___NSConcreteGlobalBlock_110ccc698);
  }
  uVar1 = uRam00000001137f46b8;
  _objc_retain(uRam00000001137f46b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b27e6cc; end: 10b27e6f7;  */

void FUN_10b27e6cc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af568;
  _objc_alloc_init();
  uVar1 = puRam00000001137f46b8;
  puRam00000001137f46b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b27e6f8; end: 10b27e727; +[SCDeviceIDManager setPushNotificationDeviceToken:] */

void FUN_10b27e6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = uRam00000001137f46a8;
  uRam00000001137f46a8 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b27e728; end: 10b27e733; -[SCDeviceIDManager deviceTokenKey] */

void FUN_10b27e728(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10b27e734; end: 10b27e73b; -[SCDeviceIDManager setDeviceTokenKey:] */

void FUN_10b27e734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10b27e73c; end: 10b27e747; -[SCDeviceIDManager deviceTokenVal] */

void FUN_10b27e73c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 10b27e748; end: 10b27e74f; -[SCDeviceIDManager setDeviceTokenVal:] */

void FUN_10b27e748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10b27e750; end: 10b27e77f; -[SCDeviceIDManager .cxx_destruct] */

void FUN_10b27e750(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b27e780; end: 10b27e78b; +[SCAuthService isAuthServiceEndpoint:] */

void FUN_10b27e780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantArray_111183b60,PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10b27e78c; end: 10b27e797; +[SCAuthService isHeaderAuthedEndpoint:] */

void FUN_10b27e78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantArray_111183b78,PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10b27e798; end: 10b27e7a3; +[SCAuthService isApiGatewayEndpoint:] */

void FUN_10b27e798(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantArray_111183b90,PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10b27e7a4; end: 10b27e7af; +[SCAuthService isProtobufEndpoint:] */

void FUN_10b27e7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantArray_111183ba8,PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10b27e7b0; end: 10b27e7bb; +[SCAuthService isLoginServiceEndpoint:] */

void FUN_10b27e7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantArray_111183bc0,PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10b27e7bc; end: 10b27e7fb; -[SCAuthTokenManager setWithNewToken:] */

void FUN_10b27e7bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c08fa60();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c187d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setCurrentToken__11263f970,
               &PTR____CFConstantStringClassReference_110db1df8);
    return;
  }
  return;
}



/* Entry: 10b27e7fc; end: 10b27e807; -[SCAuthTokenManager clear] */

void FUN_10b27e7fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c187d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCurrentToken__11263f970,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10b27e808; end: 10b27e80f; -[SCAuthTokenManager setCurrentToken:] */

void FUN_10b27e808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10b27e810; end: 10b27e81b; -[SCAuthTokenManager .cxx_destruct] */

void FUN_10b27e810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b27e81c; end: 10b27e8d7; +[SCAPIClient showAlertAndWaitForDismissalWithUrl:] */

void FUN_10b27e81c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = 0;
  _dispatch_semaphore_create();
  uVar1 = uRam00000001137f46d8;
  uRam00000001137f46d8 = uVar2;
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b27e8d8;
  puStack_48 = &UNK_110848c48;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bcbe380("APPSTORE",0x1137f46e0,&puStack_60);
  _dispatch_semaphore_wait(uRam00000001137f46d8,0xffffffffffffffff);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b27e8d8; end: 10b27e96f;  */

void FUN_10b27e8d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f60ef8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIAlertView_1126e0028;
  _objc_alloc();
  func_0x00010c053260();
  uVar1 = puRam00000001137f46d0;
  puRam00000001137f46d0 = puVar3;
  _objc_release(uVar1);
  func_0x00010c235840(puRam00000001137f46d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b27e970; end: 10b27e9a3; +[SCAPIClient alertView:didDismissWithButtonIndex:] */

void FUN_10b27e970(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c289da0(PTR_PTR_1126b8240,param_2,&PTR____CFConstantStringClassReference_110dd1f18);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(uRam00000001137f46d8);
  return;
}



/* Entry: 10b27e9a4; end: 10b27e9af; -[SCDeckServices .cxx_destruct] */

void FUN_10b27e9a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b27e9b0; end: 10b27eb23;  */

/* WARNING: Removing unreachable block (ram,0x00010b27eea8) */

void FUN_10b27e9b0(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110ccc6e8;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar9;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar9;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined8 *)puVar1;
  puVar4 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f73f459;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar9 = (undefined8 *)&UNK_110ccc738;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar4 = (undefined *)puVar5;
    param_5 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar4 = (undefined *)puVar5;
      param_5 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_1c0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)puVar9;
  puVar2 = puVar4;
  puVar6 = param_5;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar3 + 8);
    puVar1 = &UNK_110ccc788;
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_110ccc788);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(puVar3 + 8);
      puVar1 = &UNK_10f73f4d1;
      if ((int)puVar9 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_1a0,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar1 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_188,puVar1);
      puVar1 = &UNK_10f73f4d1;
      if ((int)param_5 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_170,puVar1);
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_158,3);
      puVar1 = &UNK_110ccc788;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110ccc788,&uStack_1c0,param_6);
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      func_0x000107c278ac(&puStack_1a8);
      lVar7 = 0;
      puVar2 = (undefined *)puVar5;
      puVar6 = param_6;
      do {
        if ((&cStack_159)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        puVar9 = &uStack_1c0;
      } while (lVar7 != -0x48);
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      puVar9 = (undefined8 *)((long)puVar9 + -0x18);
    } while (puVar9 != (undefined8 *)auStack_1a0);
    _objc_release(puVar4);
    __Unwind_Resume();
    _objc_retain(puVar2);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b27ec98(puVar3,puVar1,puVar2,puVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b27eb24; end: 10b27ec97;  */

/* WARNING: Removing unreachable block (ram,0x00010b27eea8) */

void FUN_10b27eb24(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined8 *)param_3;
  puVar1 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar9 = (undefined8 *)&UNK_110ccc738;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar1 = (undefined *)puVar4;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar1 = (undefined *)puVar4;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar4 = &uStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)puVar9;
  puVar5 = puVar1;
  puVar6 = param_5;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110ccc788;
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_110ccc788);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(puVar2 + 8);
      puVar2 = &UNK_10f73f4d1;
      if ((int)puVar9 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_120,puVar2);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(puVar1);
        puVar2 = puVar1;
        func_0x00010bdc3520(puVar1);
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_108,puVar2);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_5 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_f0,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x000107c27984(&uStack_140,auStack_120,&lStack_d8,3);
      puVar3 = &UNK_110ccc788;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110ccc788,&uStack_140,param_6);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x000107c278ac(&puStack_128);
      lVar7 = 0;
      puVar5 = (undefined *)puVar4;
      puVar6 = param_6;
      do {
        if ((&cStack_d9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        puVar9 = &uStack_140;
      } while (lVar7 != -0x48);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    do {
      puVar9 = (undefined8 *)((long)puVar9 + -0x18);
    } while (puVar9 != (undefined8 *)auStack_120);
    _objc_release(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar5);
    if (puVar2 != (undefined *)0x0) {
      FUN_10b27ec98(puVar2,puVar3,puVar5,puVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10b27ec98; end: 10b27eed7;  */

/* WARNING: Removing unreachable block (ram,0x00010b27eea8) */

void FUN_10b27ec98(double param_1,long param_2,undefined8 *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)param_3;
  puVar4 = param_4;
  uVar6 = param_5;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110ccc788;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110ccc788);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,puVar2);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_5 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_110ccc788;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ccc788,&uStack_c0,param_6);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar7 = 0;
      puVar4 = (undefined *)puVar5;
      uVar6 = param_6;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        param_3 = &uStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_3 = (undefined8 *)((long)param_3 + -0x18);
    } while (param_3 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(puVar4);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b27ec98(puVar3,puVar2,puVar4,uVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10b27eed8; end: 10b27ef5b;  */

void FUN_10b27eed8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b27ec98(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b27ef5c; end: 10b27f19b;  */

/* WARNING: Removing unreachable block (ram,0x00010b27f16c) */

void FUN_10b27ef5c(double param_1,long param_2,undefined8 *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)param_3;
  puVar4 = param_4;
  uVar6 = param_5;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110ccc828;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110ccc828);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,puVar2);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_5 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_110ccc828;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ccc828,&uStack_c0,param_6);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar7 = 0;
      puVar4 = (undefined *)puVar5;
      uVar6 = param_6;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        param_3 = &uStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_3 = (undefined8 *)((long)param_3 + -0x18);
    } while (param_3 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(puVar4);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b27ef5c(puVar3,puVar2,puVar4,uVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10b27f19c; end: 10b27f21f;  */

void FUN_10b27f19c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b27ef5c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b27f220; end: 10b27f493;  */

/* WARNING: Removing unreachable block (ram,0x00010b27f464) */
/* WARNING: Removing unreachable block (ram,0x00010b27f88c) */

void FUN_10b27f220(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [24];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar12 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar7 = (undefined1 *)param_5;
  puVar9 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,puVar2);
    unaff_x24 = auStack_70;
    puVar1 = &UNK_10f73f4d1;
    if ((int)param_5 == 0) {
      puVar1 = &UNK_10f73f4d6;
    }
    func_0x000107c278b8(unaff_x24,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110ccc8c8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar10 = 0;
    puVar2 = puVar12;
    puVar7 = param_6;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f0 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puStack_f0);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_10b27f494;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined8 *)puVar1;
  puVar6 = puVar2;
  puVar8 = puVar7;
  puStack_100 = unaff_x24;
  puStack_f8 = (undefined1 *)param_5;
  puStack_e8 = puVar3;
  puStack_e0 = param_4;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f73f459;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_138,puVar3);
    puVar3 = &UNK_10f73f4d1;
    if ((int)puVar2 == 0) {
      puVar3 = &UNK_10f73f4d6;
    }
    func_0x000107c278b8(auStack_120,puVar3);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_108,2);
    puVar12 = (undefined8 *)&UNK_110ccc918;
    puVar6 = &uStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_140 = &uStack_158;
    func_0x000107c278ac(&puStack_140);
    lVar10 = 0;
    puVar8 = puVar7;
    do {
      if ((&cStack_109)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_220;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)puVar12;
  puVar2 = puVar6;
  puVar7 = puVar8;
  _objc_retain(puVar6);
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    puVar1 = &UNK_110ccc968;
    (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_110ccc968);
    if ((int)plVar11 != 0) {
      plVar11 = *(long **)(puVar3 + 8);
      puVar1 = &UNK_10f73f4d1;
      if ((int)puVar12 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_200,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar2 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_1e8,puVar2);
      puVar1 = &UNK_10f73f4d1;
      if ((int)puVar8 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_1d0,puVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,auStack_200,&lStack_1b8,3);
      puVar1 = &UNK_110ccc968;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110ccc968,&uStack_220,puVar9);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      lVar10 = 0;
      puVar2 = puVar5;
      puVar7 = puVar9;
      do {
        if ((&cStack_1b9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        puVar12 = &uStack_220;
      } while (lVar10 != -0x48);
    }
  }
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      puVar12 = (undefined8 *)((long)puVar12 + -0x18);
    } while (puVar12 != (undefined8 *)auStack_200);
    _objc_release(puVar6);
    __Unwind_Resume();
    _objc_retain(puVar2);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_10b27f67c(puVar5,puVar1,puVar2,puVar7,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b27f494; end: 10b27f67b;  */

/* WARNING: Removing unreachable block (ram,0x00010b27f88c) */

void FUN_10b27f494(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)param_3;
  puVar4 = param_4;
  uVar6 = param_5;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,puVar1);
    puVar1 = &UNK_10f73f4d1;
    if ((int)param_4 == 0) {
      puVar1 = &UNK_10f73f4d6;
    }
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar10 = (undefined8 *)&UNK_110ccc918;
    puVar4 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar8 = 0;
    uVar6 = param_5;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar2 = &uStack_160;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)puVar10;
  puVar5 = puVar4;
  uVar7 = uVar6;
  _objc_retain(puVar4);
  if (puVar1 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar1 + 8);
    puVar3 = &UNK_110ccc968;
    (**(code **)(*plVar9 + 0x28))(plVar9,&UNK_110ccc968);
    if ((int)plVar9 != 0) {
      plVar9 = *(long **)(puVar1 + 8);
      puVar1 = &UNK_10f73f4d1;
      if ((int)puVar10 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_140,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar10 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_128,puVar10);
      puVar1 = &UNK_10f73f4d1;
      if ((int)uVar6 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_110,puVar1);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x000107c27984(&uStack_160,auStack_140,&lStack_f8,3);
      puVar3 = &UNK_110ccc968;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110ccc968,&uStack_160,param_6);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x000107c278ac(&puStack_148);
      lVar8 = 0;
      puVar5 = puVar2;
      uVar7 = param_6;
      do {
        if ((&cStack_f9)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
        puVar10 = &uStack_160;
      } while (lVar8 != -0x48);
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      puVar10 = (undefined8 *)((long)puVar10 + -0x18);
    } while (puVar10 != (undefined8 *)auStack_140);
    _objc_release(puVar4);
    __Unwind_Resume();
    _objc_retain(puVar5);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_10b27f67c(puVar2,puVar3,puVar5,uVar7,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}


