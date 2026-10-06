/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae9ca44; end: 10ae9cc37; +[SCLensMetadataFetchingAdapter _resultWithLensMetadata:inputLensIds:] */

void FUN_10ae9ca44(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar8 * 8);
      lVar3 = lVar7;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        func_0x00010c094540(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(lVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_retain(puVar2);
  puVar4 = param_4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    lVar5 = *(long *)(param_3 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126de278;
    if (lVar5 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010c092620(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf993a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      func_0x00010c2615e0(PTR_PTR_1126de278);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar5);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ae9cc38; end: 10ae9ccfb;  */

void FUN_10ae9cc38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126de278;
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c092620(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf993a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c2615e0(PTR_PTR_1126de278);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae9ccfc; end: 10ae9cdbb; +[SCLensMetadataFetchingAdapter _resultWithError:inputLensIds:] */

void FUN_10ae9ccfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_4);
  func_0x00010c092640(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ae9cdbc;
  puStack_40 = &UNK_110c8d480;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_4;
  func_0x00010c0b8600(param_4,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ae9cdbc; end: 10ae9cdd3;  */

void FUN_10ae9cdbc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf993b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de278,PTR_s_errorWithLensId_error__1125c3e90,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10ae9cdd4; end: 10ae9cddf; -[SCLensMetadataFetchingAdapter .cxx_destruct] */

void FUN_10ae9cdd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae9cde0; end: 10ae9ce53; -[SCLensScheduleNamespaceCachedDataAdapter initWithNamespaceDataProvider:] */

undefined1 * FUN_10ae9cde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701580;
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



/* Entry: 10ae9ce54; end: 10ae9cf33; -[SCLensScheduleNamespaceCachedDataAdapter cachedLensMetadataForLensId:] */

void FUN_10ae9ce54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126de318;
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf273a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c095320(puVar4,param_2,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (puVar4 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126de320;
      _objc_alloc(PTR_PTR_1126de320);
      func_0x00010c0228c0();
    }
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae9cf34; end: 10ae9d003; -[SCLensScheduleNamespaceCachedDataAdapter cachedLensMetadataArrayForLensIds:] */

void FUN_10ae9cf34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126de318;
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf273a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c095020(puVar4,param_2,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x00010c0b8600(puVar4,param_2,&PTR___NSConcreteGlobalBlock_110c8d680);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae9d004; end: 10ae9d053;  */

void FUN_10ae9d004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de320;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0228c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9d054; end: 10ae9d05f; -[SCLensScheduleNamespaceCachedDataAdapter .cxx_destruct] */

void FUN_10ae9d054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae9d060; end: 10ae9d0df; +[SCLensScheduleNamespaceDataHelper lensMetadataWithLensId:namespaceData:] */

void FUN_10ae9d060(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = (undefined *)0x0;
  if ((param_4 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126de318;
    func_0x00010be4b620(PTR_PTR_1126de318,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9d0e0; end: 10ae9d167; +[SCLensScheduleNamespaceDataHelper lensMetadataArrayWithLensIds:namespaceData:] */

void FUN_10ae9d0e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de318;
  puVar2 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    func_0x00010bef0be0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4b380(puVar1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_4);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9d168; end: 10ae9d2ab; +[SCLensScheduleNamespaceDataHelper lensMetadataWithLensId:namespaceDataArray:] */

void FUN_10ae9d168(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_4);
  puVar4 = auStack_d8;
  lVar7 = param_4;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        puVar4 = *(undefined **)(lStack_118 + lVar8 * 8);
        puVar5 = PTR_PTR_1126de318;
        puVar3 = (undefined8 *)param_3;
        func_0x00010be4b620();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) goto LAB_10ae9d258;
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      puVar4 = auStack_d8;
      lVar7 = param_4;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  puVar5 = (undefined *)0x0;
LAB_10ae9d258:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = (undefined *)puVar3;
    _objc_retain(puVar3);
    _objc_retain(puVar4);
    puVar5 = (undefined *)puVar3;
    func_0x00010bf529e0();
    if ((puVar5 == (undefined *)0x0) ||
       (puVar5 = puVar4, func_0x00010bf529e0(), puVar5 == (undefined *)0x0)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar4;
      func_0x00010bf529e0();
      puVar1 = puVar4;
      if (puVar5 == (undefined *)0x1) {
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bef0be0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        plStack_230 = (long *)0x0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        _objc_retain(puVar4);
        puVar5 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_240,auStack_1f8,0x10);
        if (puVar5 != (undefined *)0x0) {
          lVar7 = *plStack_230;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_230 != lVar7) {
                _objc_enumerationMutation(puVar4);
              }
              lVar6 = *(long *)(lStack_238 + (long)puVar9 * 8);
              func_0x00010bef0be0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar6 != 0) {
                func_0x00010bef7f60(puVar2,param_2,lVar6);
              }
              _objc_release(lVar6);
              puVar9 = puVar9 + 1;
            } while (puVar5 != puVar9);
            puVar5 = puVar4;
            func_0x00010bf52a60(puVar4,param_2,&uStack_240,auStack_1f8,0x10);
          } while (puVar5 != (undefined *)0x0);
        }
      }
      _objc_release(puVar1);
      puVar5 = PTR_PTR_1126de318;
      puVar1 = (undefined *)puVar3;
      func_0x00010be4b380(PTR_PTR_1126de318,param_2,puVar3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_retain(puVar1);
      puVar5 = puVar1;
      func_0x00010bf529e0(puVar1);
      func_0x00010bf71fe0(puVar4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c124d20(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110c8d6c0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar5 = puVar2;
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae9d2ac; end: 10ae9d48b; +[SCLensScheduleNamespaceDataHelper lensMetadataArrayWithLensIds:namespaceDataArray:] */

void FUN_10ae9d2ac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
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
  puVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = param_3;
  func_0x00010bf529e0();
  if ((puVar4 == (undefined *)0x0) ||
     (puVar4 = param_4, func_0x00010bf529e0(), puVar4 == (undefined *)0x0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_4;
    func_0x00010bf529e0();
    puVar1 = param_4;
    if (puVar4 == (undefined *)0x1) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bef0be0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      _objc_retain(param_4);
      puVar4 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_120,auStack_d8,0x10);
      if (puVar4 != (undefined *)0x0) {
        lVar5 = *plStack_110;
        do {
          puVar6 = (undefined *)0x0;
          do {
            if (*plStack_110 != lVar5) {
              _objc_enumerationMutation(param_4);
            }
            lVar3 = *(long *)(lStack_118 + (long)puVar6 * 8);
            func_0x00010bef0be0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 != 0) {
              func_0x00010bef7f60(puVar2,param_2,lVar3);
            }
            _objc_release(lVar3);
            puVar6 = puVar6 + 1;
          } while (puVar4 != puVar6);
          puVar4 = param_4;
          func_0x00010bf52a60(param_4,param_2,&uStack_120,auStack_d8,0x10);
        } while (puVar4 != (undefined *)0x0);
      }
    }
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126de318;
    puVar1 = param_3;
    func_0x00010be4b380(PTR_PTR_1126de318,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(puVar1);
    puVar4 = puVar1;
    func_0x00010bf529e0(puVar1);
    func_0x00010bf71fe0(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c124d20(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110c8d6c0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = puVar6;
    func_0x00010bf51e00(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ae9d48c; end: 10ae9d5b3; +[SCLensScheduleNamespaceDataHelper lensMetadataMapWithLensMetadata:] */

void FUN_10ae9d48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c124d20(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8d6c0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10ae9d5b4; end: 10ae9d61f; +[SCLensScheduleNamespaceDataHelper _lensMetadataWithLensId:namespaceData:] */

void FUN_10ae9d5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bef0be0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae9d620; end: 10ae9d6b3; +[SCLensScheduleNamespaceDataHelper _lensMetadataArrayWithLensIds:namespaceDataMap:] */

void FUN_10ae9d620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10ae9d6b4;
  puStack_30 = &UNK_110ae0448;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bf43280(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10ae9d6b4; end: 10ae9d6bf;  */

void FUN_10ae9d6b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 10ae9d6c0; end: 10ae9d6d7; -[SCCompositeLensMetadataStore didUpdateLenses:lensMetadataStore:] */

void FUN_10ae9d6c0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didUpdateLenses_lensMetadataStor_1125bd278,puVar1);
  return;
}



/* Entry: 10ae9d6d8; end: 10ae9d6ef; -[SCCompositeLensMetadataStore didUpdateLensesToPrefetch:lensMetadataStore:] */

void FUN_10ae9d6d8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didUpdateLensesToPrefetch_lensMe_1125bd288,puVar1);
  return;
}



/* Entry: 10ae9d6f0; end: 10ae9d6f7; -[SCCompositeLensMetadataStore addListener:] */

void FUN_10ae9d6f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ae9d6f8; end: 10ae9d6ff; -[SCCompositeLensMetadataStore removeListener:] */

void FUN_10ae9d6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10ae9d700; end: 10ae9d84f; -[SCCompositeLensMetadataStore lenses] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010ae9d8c8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10ae9d700(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar8 = *(long *)(puVar2 + 0x10);
    _objc_retain(lVar8);
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar4 = *(undefined8 *)(lVar9 * 8);
        func_0x00010c0987c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar6);
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    puVar5 = puVar6;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar7 = *(long *)(puVar6 + 0x10);
      _objc_retain(lVar7);
      lVar3 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          uVar4 = *(undefined8 *)(lVar9 * 8);
          func_0x00010bef9980(uVar4);
          func_0x00010c251660(uVar4);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar7 = *(long *)(lVar7 + 0x10);
      _objc_retain(lVar7);
      lVar3 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          uVar4 = *(undefined8 *)(lVar9 * 8);
          func_0x00010c12cf80(uVar4);
          func_0x00010c256d40(uVar4);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar7 = *(long *)(lVar7 + 0x10);
      _objc_retain(lVar7);
      lVar3 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x00010c266b80(*(undefined8 *)(lVar9 * 8));
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar7 + 0x10),PTR_s_any__11259ebf0,
                 &PTR___NSConcreteGlobalBlock_110c8d700);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae9d850; end: 10ae9d99f; -[SCCompositeLensMetadataStore lensesToPrefetch] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010ae9d8c8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10ae9d850(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar7 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c0987c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(puVar2 + 0x10);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010bef9980(uVar4);
      func_0x00010c251660(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar6 + 0x10);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c12cf80(uVar4);
      func_0x00010c256d40(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar6 + 0x10);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      func_0x00010c266b80(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar6 + 0x10),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110c8d700);
  return;
}



/* Entry: 10ae9d9a0; end: 10ae9dab3; -[SCCompositeLensMetadataStore startUpdatingWithMode:] */

void FUN_10ae9d9a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      func_0x00010bef9980(uVar5);
      func_0x00010c251660(uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar4 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c12cf80(uVar5);
      func_0x00010c256d40(uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar4 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c266b80(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 0x10),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110c8d700);
  return;
}



/* Entry: 10ae9dab4; end: 10ae9dbbf; -[SCCompositeLensMetadataStore stopUpdating] */

void FUN_10ae9dab4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c12cf80(uVar5);
      func_0x00010c256d40(uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar4 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c266b80(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 0x10),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110c8d700);
  return;
}



/* Entry: 10ae9dbc0; end: 10ae9dcaf; -[SCCompositeLensMetadataStore synchronize] */

void FUN_10ae9dbc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c266b80(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 0x10),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110c8d700);
  return;
}



/* Entry: 10ae9dcb0; end: 10ae9dcc7; -[SCCompositeLensMetadataStore hasMoreLensesToLoad] */

void FUN_10ae9dcb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110c8d700);
  return;
}



/* Entry: 10ae9dcc8; end: 10ae9ddcf; -[SCCompositeLensMetadataStore loadMoreTriggerDistance] */

ulong FUN_10ae9dcc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      lVar7 = 0;
      uVar6 = uVar5;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(ulong *)(lVar7 * 8);
        func_0x00010c09bc00();
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        lVar7 = lVar7 + 1;
        uVar6 = uVar5;
      } while (lVar2 != lVar7);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar4 + 0x10,0);
    uVar5 = lVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(uVar5,0);
    return uVar5;
  }
  return uVar5;
}



/* Entry: 10ae9ddd0; end: 10ae9ddff; -[SCCompositeLensMetadataStore .cxx_destruct] */

void FUN_10ae9ddd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae9de00; end: 10ae9dec7; -[SCLensNotificationProcessorEntryPoint end] */

void FUN_10ae9de00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_1;
  func_0x000107c2ba60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0dc760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_48 = PTR_PTR_112701590;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae9dec8; end: 10ae9df1b; -[SCLensNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9dec8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112784874,0);
  _objc_destroyWeak(param_1 + _DAT_112784870);
  _objc_destroyWeak(param_1 + _DAT_11278486c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112784868);
  return;
}



/* Entry: 10ae9df1c; end: 10ae9df23; -[SCLensUnlockableNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_10ae9df1c(void)

{
  return 0;
}



/* Entry: 10ae9df24; end: 10ae9e083; -[SCLensUnlockableNotificationProcessor processNotification:] */

void FUN_10ae9df24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x61) {
    lVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126b0820;
      _objc_opt_new(PTR_PTR_1126b0820);
      puVar4 = puVar3;
      func_0x00010c2b2880();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c2005c0(puVar5,param_2,1);
      _objc_release(puVar5);
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284e60();
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1049a0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e77f18,0,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ae9e084; end: 10ae9e08f; -[SCLensUnlockableNotificationProcessor .cxx_destruct] */

void FUN_10ae9e084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae9e090; end: 10ae9e0f7; -[SCBundledLensMetadataProviderPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e090(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112784880);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278487c);
  return;
}



/* Entry: 10ae9e0f8; end: 10ae9e1bf; -[SCLensMetadataRepositoryLensPickerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e0f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112784884);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112784888);
  return;
}



/* Entry: 10ae9e1c0; end: 10ae9e2a7; -[SCLensMetadataRepositoryLensSchedulePluginEntryPoint _lensMetadataProviderWithMetadataStoreCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11278488c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf56200(param_3,param_2,uVar1,7,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126bcca8;
  _objc_alloc(PTR_PTR_1126bcca8);
  func_0x00010c025000();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae9e2a8; end: 10ae9e31b; -[SCLensMetadataRepositoryLensSchedulePluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e2a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278488c);
  _objc_destroyWeak(param_1 + _DAT_112784894);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112784890);
  return;
}



/* Entry: 10ae9e31c; end: 10ae9e35f; -[SCLensMetadataRepositoryUnlockablesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e31c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112784898);
  _objc_destroyWeak(param_1 + _DAT_1127848a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278489c);
  return;
}



/* Entry: 10ae9e360; end: 10ae9e4d7; -[SCCallLensPickerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e360(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127848a8;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10ae9e454;
  puStack_40 = &UNK_110855710;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126de348;
  _objc_alloc(PTR_PTR_1126de348);
  func_0x00010c025360();
  _objc_release(puVar2);
  _objc_release(lStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae9e4d8; end: 10ae9e58b; -[SCCallLensPickerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e4d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127848b0);
  _objc_destroyWeak(param_1 + _DAT_1127848ac);
  _objc_destroyWeak(param_1 + _DAT_1127848a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127848a4);
  return;
}



/* Entry: 10ae9e58c; end: 10ae9e67b; -[SCLensMetadataUpdatingServiceProvider _scheduleForceUpdaterWithConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126de358;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127848b8;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c150160(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127848c0;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010c095be0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025760(puVar1,param_2,lVar2,lVar4,param_3);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9e67c; end: 10ae9e72f; -[SCLensMetadataUpdatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e67c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127848c4);
  _objc_destroyWeak(param_1 + _DAT_1127848c0);
  _objc_destroyWeak(param_1 + _DAT_1127848bc);
  _objc_destroyWeak(param_1 + _DAT_1127848b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127848b4);
  return;
}



/* Entry: 10ae9e730; end: 10ae9e73f; -[SCLensOnboardingMetadataStoreServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127848c8);
  return;
}



/* Entry: 10ae9e740; end: 10ae9e7df; -[SCLensPickerMetadataStoreServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e740(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127848d4,0);
  _objc_storeStrong(param_1 + _DAT_1127848d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127848cc);
  return;
}



/* Entry: 10ae9e7e0; end: 10ae9e907;  */

void FUN_10ae9e7e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b6868;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c02dd60();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0cc7e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126de3d8;
  _objc_alloc();
  uVar3 = uVar4;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c2c0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126de410;
    _objc_alloc(PTR_PTR_1126de410);
    uVar4 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010bfa6860(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0128c0(puVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9e908; end: 10ae9e963;  */

void FUN_10ae9e908(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126de410;
  _objc_alloc(PTR_PTR_1126de410);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa6860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0128c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9e964; end: 10ae9ebeb; -[SCLensScheduleNamespaceServiceEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9e964(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127848fc;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127848e4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010bf3a580(uVar2);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127848e8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  func_0x00010bf3a580(uVar2);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126ae558;
  puVar5 = puVar3;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_retain(puVar1);
  func_0x00010c297260(puVar8);
  puVar5 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(puVar3 + 0x20);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10ae9ebec; end: 10ae9ec7b;  */

void FUN_10ae9ebec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ae9ec7c; end: 10ae9ec83;  */

void FUN_10ae9ec7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10ae9ec84; end: 10ae9ec9f;  */

void FUN_10ae9ec84(void)

{
  _objc_opt_new(PTR_PTR_1126de448);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae9eca0; end: 10ae9ed0f;  */

void FUN_10ae9eca0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126de3c8;
  _objc_alloc(PTR_PTR_1126de3c8);
  func_0x00010c0129c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9ed10; end: 10ae9ee0f;  */

void FUN_10ae9ed10(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bdf94e0(PTR_PTR_1126de3a0);
    puVar2 = PTR_PTR_1126de3a8;
    _objc_alloc(PTR_PTR_1126de3a8);
    func_0x00010c026e60(param_1);
    puVar5 = PTR_PTR_1126de470;
    _objc_alloc(PTR_PTR_1126de470);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a7c0(puVar5,param_3,uVar3,uVar4,*(undefined8 *)(param_2 + 0x38),
                        *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),puVar2,
                        *(undefined8 *)(param_2 + 0x50));
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae9ee10; end: 10ae9ef4f; +[SCLensScheduleNamespaceServiceEntryPoint _centralizedMetadataStoreFactoryV2WithLensDataFetcher:scheduleServiceProvider:additionalCacheNamespaces:applicationLifecycleEvents:lensDataConfig:graphene:docObjectContext:performerProvider:] */

void FUN_10ae9ee10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de308;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c8c48;
  func_0x00010c0d5460(PTR_PTR_1126c8c48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024f00(puVar1,param_2,param_3,param_4,puVar2,param_5,param_6,param_7,param_8,param_9,
                      param_10);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9ef50; end: 10ae9ef6f; -[SCLensScheduleNamespaceServiceEntryPoint lensDataLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9ef50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127848ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae9ef70; end: 10ae9ef83; -[SCLensScheduleNamespaceServiceEntryPoint setLensDataLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9ef70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127848ec,param_3);
  return;
}



/* Entry: 10ae9ef84; end: 10ae9f197; -[SCLensScheduleNamespaceServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9ef84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127848dc);
  _objc_storeStrong(param_1 + _DAT_1127848e0,0);
  _objc_storeStrong(param_1 + _DAT_11278496c,0);
  _objc_storeStrong(param_1 + _DAT_112784968,0);
  _objc_storeStrong(param_1 + _DAT_112784964,0);
  _objc_destroyWeak(param_1 + _DAT_112784960);
  _objc_destroyWeak(param_1 + _DAT_1127848ec);
  _objc_storeStrong(param_1 + _DAT_11278495c,0);
  _objc_destroyWeak(param_1 + _DAT_112784958);
  _objc_destroyWeak(param_1 + _DAT_112784954);
  _objc_destroyWeak(param_1 + _DAT_112784950);
  _objc_destroyWeak(param_1 + _DAT_11278494c);
  _objc_destroyWeak(param_1 + _DAT_112784948);
  _objc_destroyWeak(param_1 + _DAT_112784944);
  _objc_destroyWeak(param_1 + _DAT_112784940);
  _objc_destroyWeak(param_1 + _DAT_1127848f8);
  _objc_destroyWeak(param_1 + _DAT_11278493c);
  _objc_destroyWeak(param_1 + _DAT_112784938);
  _objc_destroyWeak(param_1 + _DAT_112784934);
  _objc_destroyWeak(param_1 + _DAT_112784930);
  _objc_destroyWeak(param_1 + _DAT_11278492c);
  _objc_destroyWeak(param_1 + _DAT_112784928);
  _objc_destroyWeak(param_1 + _DAT_112784924);
  _objc_destroyWeak(param_1 + _DAT_112784920);
  _objc_destroyWeak(param_1 + _DAT_11278491c);
  _objc_destroyWeak(param_1 + _DAT_112784918);
  _objc_destroyWeak(param_1 + _DAT_112784914);
  _objc_destroyWeak(param_1 + _DAT_112784910);
  _objc_destroyWeak(param_1 + _DAT_11278490c);
  _objc_destroyWeak(param_1 + _DAT_112784908);
  _objc_destroyWeak(param_1 + _DAT_112784904);
  _objc_destroyWeak(param_1 + _DAT_112784900);
  _objc_storeStrong(param_1 + _DAT_1127848fc,0);
  _objc_storeStrong(param_1 + _DAT_1127848f4,0);
  _objc_storeStrong(param_1 + _DAT_1127848f0,0);
  _objc_storeStrong(param_1 + _DAT_1127848e8,0);
  _objc_storeStrong(param_1 + _DAT_1127848e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127848d8,0);
  return;
}



/* Entry: 10ae9f198; end: 10ae9f1b7;  */

void FUN_10ae9f198(long param_1)

{
  func_0x00010c269d40(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae9f1b8; end: 10ae9f26b; -[SCUnlockableDataStoreServicesEntryPoint end] */

void FUN_10ae9f1b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010c280fc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10ae9f26c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain();
  func_0x000107c312cc("APPSTORE",&puStack_48);
  puStack_50 = PTR_PTR_1127015a0;
  puVar2 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9f26c; end: 10ae9f273;  */

void FUN_10ae9f26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_clear_1125ac340);
  return;
}



/* Entry: 10ae9f274; end: 10ae9f2db;  */

void FUN_10ae9f274(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126de4e0;
  _objc_alloc(PTR_PTR_1126de4e0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059120(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9f2dc; end: 10ae9f373;  */

void FUN_10ae9f2dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9f374; end: 10ae9f3df;  */

void FUN_10ae9f374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de4e0;
  _objc_alloc(PTR_PTR_1126de4e0);
  puVar2 = PTR_PTR_1126b84f0;
  func_0x00010c22ba80(PTR_PTR_1126b84f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059120(puVar1,param_2,puVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9f3e0; end: 10ae9f3eb; +[SCUnlockableDataStoreServicesEntryPoint _karmaUnlockableMetadataManager] */

void FUN_10ae9f3e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b84f0,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 10ae9f3ec; end: 10ae9f3fb; -[SCUnlockableDataStoreServicesEntryPoint unlockableDataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10ae9f3ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784994);
}



/* Entry: 10ae9f3fc; end: 10ae9f49f; -[SCUnlockableDataStoreServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ae9f3fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112784994,0);
  _objc_storeStrong(param_1 + _DAT_112784990,0);
  _objc_storeStrong(param_1 + _DAT_11278498c,0);
  _objc_destroyWeak(param_1 + _DAT_112784988);
  _objc_destroyWeak(param_1 + _DAT_112784984);
  _objc_destroyWeak(param_1 + _DAT_112784980);
  _objc_destroyWeak(param_1 + _DAT_11278497c);
  _objc_destroyWeak(param_1 + _DAT_112784978);
  _objc_destroyWeak(param_1 + _DAT_112784974);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112784970);
  return;
}



/* Entry: 10ae9f4a0; end: 10ae9f507; -[SCLensScheduleNamespaceSettings testLiveCameraNamespaceName] */

void FUN_10ae9f4a0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = *(undefined ***)(param_1 + 8);
  func_0x00010c25d780(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f2eff8,
                      &PTR____CFConstantStringClassReference_110f78678,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f78678;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10ae9f508; end: 10ae9f513;  */

void FUN_10ae9f508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22e090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126de4e8,PTR_s_shouldAutoSave_112669248);
  return;
}



/* Entry: 10ae9f514; end: 10ae9f5a7; -[SCLensBGPrefetchStepMetricsTracker initWithGrapheneRegistryLazy:] */

undefined1 * FUN_10ae9f514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127015b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae9f5a8; end: 10ae9f69b; -[SCLensBGPrefetchStepMetricsTracker logBGPrefetchStart] */

void FUN_10ae9f5a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _os_unfair_lock_lock(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined ***)(param_2 + 0x20) = &PTR____CFConstantStringClassReference_110f2f0d8;
  _objc_release(uVar1);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x18);
  puVar2 = PTR_PTR_1126de4f0;
  func_0x00010bf19b60(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x30);
  return;
}



/* Entry: 10ae9f69c; end: 10ae9f6a7; -[SCLensBGPrefetchStepMetricsTracker logLensesMetadataFetchTriggered] */

void FUN_10ae9f69c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logStep__112573d98,&PTR____CFConstantStringClassReference_110f2f0f8);
  return;
}



/* Entry: 10ae9f6a8; end: 10ae9f743; -[SCLensBGPrefetchStepMetricsTracker logLensesUpdatedWithLensesCount:sponsoredLensCount:metadataStoreName:nonFetchedCount:] */

void FUN_10ae9f6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  func_0x00010be58fe0(param_1,param_2,&PTR____CFConstantStringClassReference_110f2f118);
  func_0x00010be55320(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110dbfff8);
  func_0x00010be55320(param_1,param_2,param_4,&PTR____CFConstantStringClassReference_110e77bf8);
  func_0x00010be55fa0(param_1,param_2,param_5,param_3,param_4,param_6,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10ae9f744; end: 10ae9f7df; -[SCLensBGPrefetchStepMetricsTracker logPrefetchLensesUpdatedWithLensesCount:sponsoredLensCount:metadataStoreName:nonFetchedCount:] */

void FUN_10ae9f744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  func_0x00010be58fe0(param_1,param_2,&PTR____CFConstantStringClassReference_110f2f138);
  func_0x00010be55320(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110dbfff8);
  func_0x00010be55320(param_1,param_2,param_4,&PTR____CFConstantStringClassReference_110e77bf8);
  func_0x00010be55fa0(param_1,param_2,param_5,param_3,param_4,param_6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10ae9f7e0; end: 10ae9f7eb; -[SCLensBGPrefetchStepMetricsTracker logLensSortStarted] */

void FUN_10ae9f7e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logStep__112573d98,&PTR____CFConstantStringClassReference_110f2f158);
  return;
}



/* Entry: 10ae9f7ec; end: 10ae9f897; -[SCLensBGPrefetchStepMetricsTracker logLensDownloadStartedWithLensesCount:sponsoredLensCount:nonFetchedCount:precacheSponsoredLensCount:precacheOrganicLensCount:] */

/* WARNING: Possible PIC construction at 0x00010ae9f834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae9f85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae9f838) */
/* WARNING: Removing unreachable block (ram,0x00010ae9f860) */

void FUN_10ae9f7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be58fe0(param_1,param_2,&PTR____CFConstantStringClassReference_110f2f178);
                    /* WARNING: Could not recover jumptable at 0x00010be55330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLensCount_countDimensionValu_112572e68,param_3,
             &PTR____CFConstantStringClassReference_110dbfff8);
  return;
}



/* Entry: 10ae9f898; end: 10ae9fa7f; -[SCLensBGPrefetchStepMetricsTracker logBGPrefetchEndWithTotalLensDownloadCount:endStep:isBGPrefetchEligible:] */

void FUN_10ae9f898(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  func_0x00010be58fe0(param_2,param_3,&PTR____CFConstantStringClassReference_110f2f198);
  puVar1 = PTR_PTR_1126de4f0;
  func_0x00010bf19b60(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010befc000(param_1 - *(double *)(param_2 + 0x18),uVar4,param_3,puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126de4f0;
  func_0x00010bf19b00(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f2f018,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010be55320(param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  func_0x00010be55340(param_2);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ae9fa80; end: 10ae9fb6b; -[SCLensBGPrefetchStepMetricsTracker logLensContentDownloadedWithAllDataFetchedStatus:] */

void FUN_10ae9fa80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126de4f0;
  func_0x00010bf19b20(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f058,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10ae9fb6c; end: 10ae9fcff; -[SCLensBGPrefetchStepMetricsTracker _logStep:] */

void FUN_10ae9fb6c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (param_1 = *(double *)(param_2 + 0x10), 0.0 < param_1)) {
    _CACurrentMediaTime();
    param_1 = param_1 - *(double *)(param_2 + 0x10);
    puVar2 = PTR_PTR_1126de4f0;
    func_0x00010bf19b60(PTR_PTR_1126de4f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c098200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc000();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    *(double *)(param_2 + 0x10) = param_1;
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = param_4;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126de4f0;
    func_0x00010bf19b60(PTR_PTR_1126de4f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c098200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10ae9fd00; end: 10ae9fdef; -[SCLensBGPrefetchStepMetricsTracker _logLensCount:countDimensionValue:] */

void FUN_10ae9fd00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de4f0;
  _objc_retain(param_4);
  func_0x00010bf19b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd1dd8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ae9fdf0; end: 10aea033b; -[SCLensBGPrefetchStepMetricsTracker _logMetadataUpdateFromDataStore:lensesCount:sponsoredLensCount:nonFetchedCount:isPrefetch:] */

void FUN_10ae9fdf0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 in_x6;
  double dVar12;
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_2 + 0x30);
  lVar1 = param_2;
  func_0x00010be5ab60(param_2,param_3,param_4,in_x6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x28);
  func_0x00010c0e00e0(lVar2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d24d8,lVar1);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0e00e0(uVar3,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c282760();
  func_0x00010c0df820(puVar5,param_3,(int)uVar4 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar5,lVar1);
  _objc_release(puVar5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0e00e0(uVar3,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126de4f0;
  func_0x00010bf19b40(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126de4f0;
  func_0x00010bf19b40(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar8;
  func_0x00010c2ac460(puVar8,param_3,&PTR____CFConstantStringClassReference_110f2f038,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110dd1dd8,
                      &PTR____CFConstantStringClassReference_110dbfff8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126de4f0;
  func_0x00010bf19b40(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar9;
  func_0x00010c2ac460(puVar9,param_3,&PTR____CFConstantStringClassReference_110f2f038,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110dd1dd8,
                      &PTR____CFConstantStringClassReference_110e77bf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126de4f0;
  func_0x00010bf19b40(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar10;
  func_0x00010c2ac460(puVar10,param_3,&PTR____CFConstantStringClassReference_110f2f038,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110dd1dd8,
                      &PTR____CFConstantStringClassReference_110f2f0b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar7);
  _CACurrentMediaTime();
  dVar12 = *(double *)(param_2 + 0x18);
  puVar5 = PTR_PTR_1126de4f0;
  func_0x00010bf19b40(PTR_PTR_1126de4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar11;
  func_0x00010c2ac460(puVar11,param_3,&PTR____CFConstantStringClassReference_110f2f038,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c098200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - dVar12);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10aea033c; end: 10aea0527; -[SCLensBGPrefetchStepMetricsTracker _logLensMetadataCbCounts] */

void FUN_10aea033c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_130;
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
  _os_unfair_lock_lock(param_1 + 0x30);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar13 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar13);
  ppuVar10 = &puStack_130;
  puVar12 = auStack_f0;
  lVar2 = lVar13;
  func_0x00010bf52a60(lVar13,param_2,ppuVar10,puVar12,0x10);
  iVar11 = (int)puVar12;
  if (lVar2 != 0) {
    lVar17 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(lVar13);
        }
        uVar16 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        puVar3 = PTR_PTR_1126de4f0;
        func_0x00010bf19b40(PTR_PTR_1126de4f0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c098200();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(ulong *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar7,param_2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c282760();
        func_0x00010bef9180(uVar6,param_2,puVar4,uVar8 & 0xffffffff);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(puVar4);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      ppuVar10 = &puStack_130;
      puVar12 = auStack_f0;
      lVar2 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,ppuVar10,puVar12,0x10);
      iVar11 = (int)puVar12;
    } while (lVar2 != 0);
  }
  _objc_release(lVar13);
  lVar2 = param_1 + 0x30;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x30);
  __Unwind_Resume(lVar2);
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar10);
  uVar8 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f1d8,param_2,ppuVar10);
  if ((uVar8 & 1) == 0) {
    uVar8 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f218,param_2,ppuVar10);
    if ((uVar8 & 1) == 0) {
      uVar8 = 0;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f238,param_2,ppuVar10);
      if ((uVar8 & 1) == 0) {
        iVar1 = 0x10f2f278;
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f278,param_2,ppuVar10);
        ppuVar15 = ppuVar10;
        if (iVar1 == 0) goto LAB_10aea05d8;
        ppuVar15 = &PTR____CFConstantStringClassReference_110f2f298;
      }
      else {
        ppuVar15 = &PTR____CFConstantStringClassReference_110f2f258;
      }
    }
    else {
      ppuVar15 = &PTR____CFConstantStringClassReference_110e21258;
    }
  }
  else {
    ppuVar15 = &PTR____CFConstantStringClassReference_110f2f1f8;
  }
  _objc_release(ppuVar10);
LAB_10aea05d8:
  ppuVar9 = ppuVar15;
  if (iVar11 != 0) {
    func_0x00010c25ce40(ppuVar15,param_2,&PTR____CFConstantStringClassReference_110f2f2b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
  }
  _objc_release(ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 10aea0528; end: 10aea061f; -[SCLensBGPrefetchStepMetricsTracker _loggingNameFromDataStoreName:isPrefetch:] */

void FUN_10aea0528(undefined8 param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f1d8,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f218,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f238,param_2,param_3);
      if ((uVar2 & 1) == 0) {
        iVar1 = 0x10f2f278;
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2f278,param_2,param_3);
        ppuVar4 = param_3;
        if (iVar1 == 0) goto LAB_10aea05d8;
        ppuVar4 = &PTR____CFConstantStringClassReference_110f2f298;
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f2f258;
      }
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e21258;
    }
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f2f1f8;
  }
  _objc_release(param_3);
LAB_10aea05d8:
  ppuVar3 = ppuVar4;
  if (param_4 != 0) {
    func_0x00010c25ce40(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110f2f2b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10aea0620; end: 10aea065b; -[SCLensBGPrefetchStepMetricsTracker .cxx_destruct] */

void FUN_10aea0620(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aea065c; end: 10aea08b7; -[SCLensBackgroundPrefetcher initWithLensDataFetcher:performer:scheduledMetadataRetriever:sortStrategy:lensPrefetchFilterProvider:lensDataConfig:appStartExperimentReader:prefetchStepMetricsTracker:lensContentDataProvider:lensUserProvider:] */

undefined8 *
FUN_10aea065c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1127015b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 10aea08b8; end: 10aea0963; -[SCLensBackgroundPrefetcher lensesToPrefetch] */

void FUN_10aea08b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10aea0964; end: 10aea0a1b; -[SCLensBackgroundPrefetcher didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10aea0964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aea0a1c;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10aea0a1c; end: 10aea0a2b;  */

void FUN_10aea0a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkFetchedLens_error__112554f80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10aea0a2c; end: 10aea0ae3; -[SCLensBackgroundPrefetcher didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10aea0a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aea0ae4;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10aea0ae4; end: 10aea0af3;  */

void FUN_10aea0ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkFetchedLens_error__112554f80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10aea0af4; end: 10aea0bab; -[SCLensBackgroundPrefetcher didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_10aea0af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aea0bac;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10aea0bac; end: 10aea0bbb;  */

void FUN_10aea0bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkFetchedLens_error__112554f80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10aea0bbc; end: 10aea0c73; -[SCLensBackgroundPrefetcher didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_10aea0bbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aea0c74;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aea0c74; end: 10aea0c83;  */

void FUN_10aea0c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkFetchedLens_error__112554f80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10aea0c84; end: 10aea0c87; -[SCLensBackgroundPrefetcher willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_10aea0c84(void)

{
  return;
}



/* Entry: 10aea0c88; end: 10aea0c8b; -[SCLensBackgroundPrefetcher willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10aea0c88(void)

{
  return;
}



/* Entry: 10aea0c8c; end: 10aea0c8f; -[SCLensBackgroundPrefetcher willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_10aea0c8c(void)

{
  return;
}



/* Entry: 10aea0c90; end: 10aea0c93; -[SCLensBackgroundPrefetcher willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10aea0c90(void)

{
  return;
}



/* Entry: 10aea0c94; end: 10aea0c97; -[SCLensBackgroundPrefetcher willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_10aea0c94(void)

{
  return;
}



/* Entry: 10aea0c98; end: 10aea0e1b; -[SCLensBackgroundPrefetcher _checkFetchedLens:error:] */

void FUN_10aea0c98(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
      if (param_4 == 0) {
        lVar1 = param_3;
        func_0x00010c072d20();
        if ((int)lVar1 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          lVar1 = param_3;
          func_0x00010c094540(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar3,param_2,puVar2,lVar1);
          _objc_release(lVar1);
          _objc_release(puVar2);
          *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
          lVar1 = param_1;
          func_0x00010c0987c0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar1;
          func_0x00010bf529e0();
          _objc_release(lVar1);
          if (lVar4 == 0) {
            func_0x00010bde2fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110f2f378);
          }
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x48);
        lVar1 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar3,param_2,0,lVar1);
        _objc_release(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


