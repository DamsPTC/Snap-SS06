/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f66bbc; end: 106f66c47; -[SCAuxiliaryLazyProtobufDataType isDataValid:] */

uint FUN_106f66bbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    _objc_opt_isKindOfClass();
    uVar1 = (uint)lVar4;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar1 & 1;
}



/* Entry: 106f66c48; end: 106f66ce7; -[SCAuxiliaryLazyProtobufDataType dataWithPath:] */

void FUN_106f66c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106f66ce8;
  puStack_38 = &UNK_1109859d8;
  uStack_30 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f66ce8; end: 106f66d9f;  */

void FUN_106f66ce8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64aa0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x20),0,
                      &uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_38;
  _objc_retain(uStack_38);
  if (puVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar4;
    func_0x00010c0f40e0(uVar3,param_2,puVar2,&uStack_40);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_40;
    _objc_retain(uStack_40);
    _objc_release(uVar4);
    uVar4 = uVar1;
  }
  _objc_release(puVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f66da0; end: 106f66e27; -[SCAuxiliaryLazyProtobufDataType persistData:toPath:] */

void FUN_106f66da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e040();
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106f66e28; end: 106f66e33; -[SCAuxiliaryLazyProtobufDataType .cxx_destruct] */

void FUN_106f66e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f66e34; end: 106f66eb7; -[SCAuxiliarySimpleDataType initWithKey:dataClass:] */

undefined1 *
FUN_106f66e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7f98;
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



/* Entry: 106f66eb8; end: 106f66edf; -[SCAuxiliarySimpleDataType key] */

void FUN_106f66eb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f66ee0; end: 106f66f07; -[SCAuxiliarySimpleDataType dataClass] */

void FUN_106f66ee0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f66f08; end: 106f66f13; -[SCAuxiliarySimpleDataType .cxx_destruct] */

void FUN_106f66f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f66f14; end: 106f66f67; -[SCAuxiliaryTypedInputDataMapper inputKeys] */

undefined * FUN_106f66f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f66f68; end: 106f66fc7; -[SCAuxiliaryTypedInputDataMapper inputObjectFromInputData:] */

undefined * FUN_106f66f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f66fc8; end: 106f6701b; -[SCAuxiliaryTypedOutputDataMapper outputKeys] */

undefined * FUN_106f66fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f6701c; end: 106f6707b; -[SCAuxiliaryTypedOutputDataMapper outputDataFromOutputObject:] */

undefined * FUN_106f6701c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f6707c; end: 106f67087; -[SCAuxiliaryNilInputDataMapper inputKeys] */

undefined * FUN_106f6707c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106f67088; end: 106f67093; -[SCAuxiliaryNilInputDataMapper inputObjectFromInputData:] */

void FUN_106f67088(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return;
}



/* Entry: 106f67094; end: 106f67117; -[SCAuxiliaryKeyPathInputDataMapper initWithClass:keyPaths:] */

undefined1 *
FUN_106f67094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7fa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f67118; end: 106f6711f; -[SCAuxiliaryKeyPathInputDataMapper inputKeys] */

void FUN_106f67118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf002f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_allKeys_11259da60);
  return;
}



/* Entry: 106f67120; end: 106f6728f; -[SCAuxiliaryKeyPathInputDataMapper inputObjectFromInputData:] */

void FUN_106f67120(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_opt_new(uVar2);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220240(uVar2);
      _objc_release(uVar5);
      _objc_release(lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 0x10,0);
  return;
}



/* Entry: 106f67290; end: 106f6729b; -[SCAuxiliaryKeyPathInputDataMapper .cxx_destruct] */

void FUN_106f67290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f6729c; end: 106f6730f; -[SCAuxiliarySingleKeyInputDataMapper initWithKey:] */

undefined1 * FUN_106f6729c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7fa8;
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



/* Entry: 106f67310; end: 106f67377; -[SCAuxiliarySingleKeyInputDataMapper inputKeys] */

void FUN_106f67310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_objectForKeyedSubscript__112615a50,*(undefined8 *)(puVar1 + 8));
  return;
}



/* Entry: 106f67378; end: 106f67387; -[SCAuxiliarySingleKeyInputDataMapper inputObjectFromInputData:] */

void FUN_106f67378(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKeyedSubscript__112615a50,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 106f67388; end: 106f67393; -[SCAuxiliarySingleKeyInputDataMapper .cxx_destruct] */

void FUN_106f67388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f67394; end: 106f67407; -[SCAuxiliaryKeyPathOutputDataMapper initWithKeyPaths:] */

undefined1 * FUN_106f67394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7fb0;
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



/* Entry: 106f67408; end: 106f6740f; -[SCAuxiliaryKeyPathOutputDataMapper outputKeys] */

void FUN_106f67408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf002f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_allKeys_11259da60);
  return;
}



/* Entry: 106f67410; end: 106f67587; -[SCAuxiliaryKeyPathOutputDataMapper outputDataFromOutputObject:] */

void FUN_106f67410(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar7 = *(long *)(param_1 + 8);
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
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c296f80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(lVar5);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106f67588; end: 106f67593; -[SCAuxiliaryKeyPathOutputDataMapper .cxx_destruct] */

void FUN_106f67588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f67594; end: 106f67607; -[SCAuxiliarySingleKeyOutputDataMapper initWithKey:] */

undefined1 * FUN_106f67594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7fb8;
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



/* Entry: 106f67608; end: 106f6766f; -[SCAuxiliarySingleKeyOutputDataMapper outputKeys] */

void FUN_106f67608(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    func_0x00010bf72080(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)((undefined1 *)((long)puVar2 + 8),0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f67670; end: 106f67703; -[SCAuxiliarySingleKeyOutputDataMapper outputDataFromOutputObject:] */

void FUN_106f67670(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106f67704; end: 106f6770f; -[SCAuxiliarySingleKeyOutputDataMapper .cxx_destruct] */

void FUN_106f67704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f67710; end: 106f6777b; -[SCAuxiliaryTypedDataProcessor runWithInputData:completion:] */

undefined1 *
FUN_106f67710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined *puStack_58;
  
  uVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  ppuVar2 = &puStack_60;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f7fc0;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined8 *)((long)ppuVar2 + 8) = uVar4;
    _objc_release(uVar3);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
    *(undefined8 *)((long)ppuVar2 + 0x10) = uVar5;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x18);
    *(undefined8 *)((long)ppuVar2 + 0x18) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 106f6777c; end: 106f67847; -[SCAuxiliaryTypedDataProcessorWrapper initWithProcessor:inputMapper:outputMapper:] */

undefined1 *
FUN_106f6777c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f7fc0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f67848; end: 106f6784f; -[SCAuxiliaryTypedDataProcessorWrapper inputDataKeys] */

void FUN_106f67848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_inputKeys_1125f7118);
  return;
}



/* Entry: 106f67850; end: 106f67857; -[SCAuxiliaryTypedDataProcessorWrapper outputDataKeys] */

void FUN_106f67850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_outputKeys_1126195b0)
  ;
  return;
}



/* Entry: 106f67858; end: 106f679e3; -[SCAuxiliaryTypedDataProcessorWrapper runWithInputData:completion:] */

void FUN_106f67858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c065d20(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106f67938;
  puStack_58 = &UNK_110985a08;
  uStack_50 = uVar3;
  uStack_48 = param_4;
  _objc_retain(uVar3);
  _objc_retain(param_4);
  func_0x00010c142bc0(uVar1,param_2,uVar2,&puStack_70);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 106f679e4; end: 106f67a43; -[SCAuxiliaryTypedDataProcessorWrapper respondsToSelector:] */

void FUN_106f679e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,param_3);
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_1126f7fc0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_respondsToSelector__11262c7e0,param_3);
  }
  return;
}



/* Entry: 106f67a44; end: 106f67a6b; -[SCAuxiliaryTypedDataProcessorWrapper forwardingTargetForSelector:] */

void FUN_106f67a44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f67a6c; end: 106f67aa7; -[SCAuxiliaryTypedDataProcessorWrapper .cxx_destruct] */

void FUN_106f67a6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f67aa8; end: 106f67cc7; -[SCAuxiliaryDataGraph initWithPerformer:graphId:dataTypes:processors:subgraphs:processorQueue:repo:] */

undefined1 *
FUN_106f67aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126f7fc8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_5;
    func_0x00010c0b8600(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar5);
    uVar4 = param_7;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar4);
    func_0x00010c13dd00(*(undefined8 *)((long)puVar1 + 0x38));
    _objc_release(uVar2);
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



/* Entry: 106f67cc8; end: 106f67ccf;  */

void FUN_106f67cc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_key_1125ff368);
  return;
}



/* Entry: 106f67cd0; end: 106f67d1b; -[SCAuxiliaryDataGraph dealloc] */

void FUN_106f67cd0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c128520(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126f7fc8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106f67d1c; end: 106f67e6f; -[SCAuxiliaryDataGraph _subgraphForKey:] */

void FUN_106f67d1c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar7);
  puVar6 = auStack_e8;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        puVar8 = *(undefined **)(lStack_128 + lVar11 * 8);
        puVar2 = puVar8;
        func_0x00010c0eec20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        puVar5 = (undefined8 *)param_3;
        func_0x00010bf4b900();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar8);
          goto LAB_106f67e20;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar6 = auStack_e8;
      lVar1 = lVar7;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar8 = (undefined *)0x0;
LAB_106f67e20:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    puVar2 = param_3;
    func_0x00010bec5c80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ae560;
      _objc_opt_new();
      _objc_initWeak(auStack_198,param_3);
      uVar9 = *(undefined8 *)(param_3 + 8);
      puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c8 = 0xc2000000;
      pcStack_1c0 = FUN_106f68090;
      puStack_1b8 = &UNK_110848218;
      _objc_copyWeak(auStack_1a0,auStack_198);
      _objc_retain(puVar5);
      puStack_1b0 = (undefined *)puVar5;
      _objc_retain(puVar3);
      puStack_1a8 = puVar3;
      func_0x00010c0f7fc0(uVar9);
      if (puVar6 != (undefined1 *)0x0) {
        puVar4 = auStack_198;
        _objc_loadWeakRetained(puVar4);
        _objc_copyWeak(auStack_1d8,auStack_198);
        _objc_retain(puVar6);
        func_0x00010bfa79e0(puVar4);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_1d8);
      }
      puVar8 = puVar3;
      func_0x00010bfbc3e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_1a8);
      _objc_release(puStack_1b0);
      _objc_destroyWeak(auStack_1a0);
      _objc_destroyWeak(auStack_198);
    }
    else {
      puVar3 = puVar2;
      func_0x00010bfcdca0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bfa6340();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106f67e70; end: 106f6808f; -[SCAuxiliaryDataGraph fetchDataWithKey:progressBlock:] */

void FUN_106f67e70(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bec5c80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106f68090;
    puStack_88 = &UNK_110848218;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(puVar2);
    puStack_78 = puVar2;
    func_0x00010c0f7fc0(uVar5);
    if (param_4 != 0) {
      puVar3 = auStack_68;
      _objc_loadWeakRetained(puVar3);
      _objc_copyWeak(auStack_a8,auStack_68);
      _objc_retain(param_4);
      func_0x00010bfa79e0(puVar3);
      _objc_release(puVar3);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_a8);
    }
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bfcdca0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfa6340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f68090; end: 106f680c3;  */

void FUN_106f68090(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f680c4; end: 106f68117;  */

void FUN_106f680c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be61180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f68118; end: 106f682d3; -[SCAuxiliaryDataGraph _fetchDataWithKey:promise:] */

void FUN_106f68118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfbc3e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar2);
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfa62e0(uVar4);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde30c0(param_1);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f682d4; end: 106f68393;  */

void FUN_106f682d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106f68394; end: 106f683f3;  */

void FUN_106f68394(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010be80be0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x38));
    }
    else {
      func_0x00010befa120(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x30));
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f683f4; end: 106f6848b; -[SCAuxiliaryDataGraph _completePromise:withFuture:] */

void FUN_106f683f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106f6848c;
  puStack_40 = &UNK_11084e010;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(param_4,param_2,&puStack_58,uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6848c; end: 106f6849f;  */

void FUN_106f6848c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106f684a0; end: 106f6868b; -[SCAuxiliaryDataGraph _futuresAfterStoringToDisk:] */

void FUN_106f684a0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar5 = puVar4;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar5);
      lVar6 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      func_0x00010c297260(lVar6);
      _objc_release(lVar6);
      _objc_release(puVar4);
      _objc_release(puVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x30));
  }
  else {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x48));
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x38);
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar9);
    _objc_retain(param_2);
    func_0x00010c2bdaa0(uVar10);
    _objc_release(uVar7);
    _objc_release(param_2);
    _objc_release(uVar9);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106f6868c; end: 106f68793;  */

void FUN_106f6868c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010c2bdaa0(uVar3);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106f68794; end: 106f6879f;  */

void FUN_106f68794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f687a0; end: 106f688f3; -[SCAuxiliaryDataGraph _processorForKey:] */

void FUN_106f687a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  puVar5 = auStack_e8;
  lVar16 = lVar11;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar15 * 8);
        uVar1 = uVar13;
        func_0x00010c0eec20();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        puVar10 = (undefined8 *)param_3;
        func_0x00010bf4b900();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          _objc_retain(uVar13);
          goto LAB_106f688a4;
        }
        lVar15 = lVar15 + 1;
      } while (lVar16 != lVar15);
      puVar5 = auStack_e8;
      lVar16 = lVar11;
      puVar10 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  uVar13 = 0;
LAB_106f688a4:
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106f688f4;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar5);
  puVar3 = param_3;
  puVar6 = (undefined1 *)puVar10;
  func_0x00010be82b40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_268 = puVar5;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar5 = puVar3;
    func_0x00010c0658c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar16 = *plStack_250;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar16) {
            _objc_enumerationMutation(puVar5);
          }
          puVar7 = param_3;
          func_0x00010bfa6340(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(puVar7);
          puVar12 = puVar12 + 1;
        } while (puVar6 != puVar12);
        puVar6 = puVar5;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar5);
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c11df40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010be19f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(*(undefined8 *)(param_3 + 0x40));
    puVar9 = puVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_268;
    puVar6 = puStack_268;
    puVar12 = puVar9;
    func_0x00010bde30c0(param_3);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(uVar8);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar7 = (undefined1 *)puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_106f68b20;
  puStack_2a0 = param_3;
  puStack_298 = puVar3;
  puStack_290 = puVar5;
  puStack_288 = (undefined1 *)puVar10;
  ppuStack_280 = &puStack_140;
  _objc_retain(puVar6);
  _objc_retain(puVar12);
  _objc_initWeak(auStack_2a8,puVar7);
  uVar8 = *(undefined8 *)(puVar7 + 8);
  _objc_copyWeak(auStack_2b0,auStack_2a8);
  _objc_retain(puVar6);
  _objc_retain(puVar12);
  func_0x00010c0f7fc0(uVar8);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(puVar12);
  _objc_release(puVar6);
  return;
}



/* Entry: 106f688f4; end: 106f68b1f; -[SCAuxiliaryDataGraph _processDataWithKey:promise:] */

void FUN_106f688f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  lVar3 = param_3;
  func_0x00010be82b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lStack_138 = param_4;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = lVar1;
    func_0x00010c0658c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          lVar5 = param_1;
          func_0x00010bfa6340(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(lVar5);
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11df40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010be19f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x40));
    lVar7 = lVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = lStack_138;
    lVar3 = lStack_138;
    lVar4 = lVar7;
    func_0x00010bde30c0(param_1);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  lVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106f68b20;
  lStack_170 = param_1;
  lStack_168 = lVar1;
  lStack_160 = param_4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(lVar3);
  _objc_retain(lVar4);
  _objc_initWeak(auStack_178,lVar8);
  uVar6 = *(undefined8 *)(lVar8 + 8);
  _objc_copyWeak(auStack_180,auStack_178);
  _objc_retain(lVar3);
  _objc_retain(lVar4);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 106f68b20; end: 106f68c1f; -[SCAuxiliaryDataGraph fetchIncompleteProcessorsForKey:completion:] */

void FUN_106f68b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f68c20; end: 106f68c53;  */

void FUN_106f68c20(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f68c54; end: 106f68fb7; -[SCAuxiliaryDataGraph _fetchIncompleteProcessorsForKey:completion:] */

void FUN_106f68c54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c2268e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _dispatch_group_create();
  lVar13 = *(long *)(param_1 + 8);
  _objc_retain(lVar13);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  while (puVar6 != (undefined *)0x0) {
    puVar6 = puVar3;
    func_0x00010bf04a20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(puVar3);
    func_0x00010befa120(puVar2);
    uVar7 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf4b900();
    if ((uVar7 & 1) == 0) {
      lVar8 = param_1;
      func_0x00010bec5c80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        lVar9 = param_1;
        func_0x00010be82b40(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126d3778;
        _objc_alloc(PTR_PTR_1126d3778);
        uVar12 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c0e00e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03a500(puVar10);
        _objc_release(uVar12);
        func_0x00010befa120(puVar4);
        lVar11 = lVar9;
        func_0x00010c0658c0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        _objc_release(lVar11);
        _objc_release(puVar10);
      }
      else {
        _dispatch_group_enter(puVar5);
        lVar9 = lVar8;
        func_0x00010bfcdca0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = puVar1;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_106f68fb8;
        puStack_98 = &UNK_110860b18;
        _objc_retain(lVar13);
        lStack_90 = lVar13;
        _objc_retain(puVar4);
        puStack_88 = puVar4;
        _objc_retain(puVar5);
        puStack_80 = puVar5;
        func_0x00010be11d20(lVar9);
        _objc_release(lVar9);
        _objc_release(puStack_80);
        _objc_release(puStack_88);
        lVar9 = lStack_90;
      }
      _objc_release(lVar9);
      func_0x00010c0ce860(puVar3);
      _objc_release(lVar8);
    }
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf529e0();
  }
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x106f6909c;
  puStack_c8 = &UNK_11084aaa8;
  puStack_c0 = puVar4;
  uStack_b8 = param_4;
  _objc_retain(puVar4);
  _objc_retain(param_4);
  func_0x000100bc0718(puVar5,uVar12,&puStack_e0);
  _objc_release(uVar12);
  _objc_release(puStack_c0);
  _objc_release(uStack_b8);
  _objc_release(lVar13);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106f68fb8; end: 106f6906f;  */

void FUN_106f68fb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 106f69070; end: 106f690db;  */

void FUN_106f69070(long param_1,undefined8 param_2)

{
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106f690dc; end: 106f69333; -[SCAuxiliaryDataGraph _monitorProgressOfProcessors:progressBlock:] */

void FUN_106f690dc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  float fVar16;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined4 uStack_158;
  float fStack_154;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  uVar10 = 0;
  uVar12 = 0;
  uVar14 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_150,auStack_108,0x10);
  if (uVar5 == 0) {
    fVar16 = 0.0;
  }
  else {
    lVar6 = *plStack_140;
    fVar16 = 0.0;
    do {
      uVar7 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c2a4a60(*(undefined8 *)(lStack_148 + uVar7 * 8));
        fVar16 = fVar16 + (float)CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8)));
        func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c99a0);
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      uVar5 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_150,auStack_108,0x10);
    } while (uVar5 != 0);
  }
  _objc_release(param_3);
  uVar5 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar7 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a4a60();
      uVar1 = CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8)));
      _objc_release(uVar7);
      uVar7 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_190 = puVar2;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_106f69334;
      puStack_178 = &UNK_110985ac8;
      uStack_158 = uVar1;
      _objc_retain(puVar3);
      puStack_170 = puVar3;
      uStack_160 = uVar5;
      _objc_retain(param_4);
      uStack_168 = param_4;
      fStack_154 = fVar16;
      func_0x00010c0d0d00(uVar7,param_2,&puStack_190,*(undefined8 *)(param_1 + 8));
      _objc_release(uVar7);
      _objc_release(uStack_168);
      _objc_release(puStack_170);
      uVar5 = uVar5 + 1;
      uVar7 = param_3;
      func_0x00010bf529e0();
    } while (uVar5 < uVar7);
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  fVar16 = *(float *)(param_3 + 0x38);
  uVar9 = SUB41(fVar16,0);
  uVar11 = (undefined1)((uint)fVar16 >> 8);
  uVar13 = (undefined1)((uint)fVar16 >> 0x10);
  uVar15 = (undefined1)((uint)fVar16 >> 0x18);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0dfd40(uVar4,param_2,*(undefined8 *)(param_3 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar4);
  if ((float)CONCAT13(uVar15,CONCAT12(uVar13,CONCAT11(uVar11,uVar9))) <
      (float)CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8))) * fVar16) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x20),param_2,puVar3,
                        *(undefined8 *)(param_3 + 0x30));
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c124d20(uVar4,param_2,&PTR___NSConcreteGlobalBlock_110985aa8,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c99a0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_3 + 0x28);
    func_0x00010bfb2c80();
    (**(code **)(lVar6 + 0x10))(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106f69334; end: 106f69437;  */

void FUN_106f69334(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_2 + 0x38);
  fVar5 = param_1 * fVar4;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0dfd40(uVar1,param_3,*(undefined8 *)(param_2 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  if (fVar4 < fVar5) {
    param_1 = param_1 * *(float *)(param_2 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x20),param_3,puVar2,
                        *(undefined8 *)(param_2 + 0x30));
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c124d20(uVar1,param_3,&PTR___NSConcreteGlobalBlock_110985aa8,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c99a0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_2 + 0x28);
    func_0x00010bfb2c80();
    (**(code **)(lVar3 + 0x10))(param_1 / *(float *)(param_2 + 0x3c),lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106f69438; end: 106f6949f;  */

void FUN_106f69438(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  float fVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010bfb2c80(param_3);
  fVar2 = param_1;
  func_0x00010bfb2c80(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 + fVar2,puVar1,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 106f694a0; end: 106f695bf; -[SCAuxiliaryDataGraph hasCachedDataWithKey:] */

void FUN_106f694a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f695c0; end: 106f695f3;  */

void FUN_106f695c0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f695f4; end: 106f696ef; -[SCAuxiliaryDataGraph _hasCachedDataWithKey:promise:] */

void FUN_106f695f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f696f0;
    puStack_50 = &UNK_11088b6c8;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010bfa62e0(uVar3,param_2,uVar1,uVar2,&puStack_68);
    _objc_release(uVar1);
    _objc_release(uStack_48);
  }
  else {
    func_0x00010bf43d60(param_4,param_2,PTR____kCFBooleanTrue_11034ab68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f696f0; end: 106f6973b;  */

void FUN_106f696f0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f6973c; end: 106f697ff; -[SCAuxiliaryDataGraph prioritizeDataWithKey:] */

void FUN_106f6973c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa79e0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f69800; end: 106f69847;  */

void FUN_106f69800(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f69848; end: 106f698d3; -[SCAuxiliaryDataGraph _prioritizeProcessors:] */

void FUN_106f69848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_3);
  func_0x00010c0ddbe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ba200(param_3,param_2,&PTR___NSConcreteGlobalBlock_110985b18,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c113b80(*(undefined8 *)(param_1 + 0x30),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f698d4; end: 106f698db;  */

void FUN_106f698d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c115b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_processor_1126230e0);
  return;
}



/* Entry: 106f698dc; end: 106f699db; -[SCAuxiliaryDataGraph injectData:forKey:] */

void FUN_106f698dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f699dc; end: 106f69a0f;  */

void FUN_106f699dc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3bf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f69a10; end: 106f69b3b; -[SCAuxiliaryDataGraph _injectData:forKey:] */

void FUN_106f69a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bec5c80(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0(lVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_106f69aa8;
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar3,param_4);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bdaa0(uVar4,param_2,param_3,lVar2,*(undefined8 *)(param_1 + 0x10),0);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfcdca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3bf60();
  }
  _objc_release(lVar2);
LAB_106f69aa8:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f69b3c; end: 106f69bbf; -[SCAuxiliaryDataGraph .cxx_destruct] */

void FUN_106f69b3c(long param_1)

{
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



/* Entry: 106f69bc0; end: 106f69bd7; -[SCAuxiliaryDataGraphVerifier initWithDataTypes:processors:subgraphs:] */

undefined8 FUN_106f69bc0(void)

{
  _objc_release();
  return 0;
}



/* Entry: 106f69bd8; end: 106f69c47; -[SCAuxiliaryDataGraphVerifier assertIsWellFormed] */

void FUN_106f69bd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  while (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf04a20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becb300(param_1,param_2,uVar3,puVar1);
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
  }
  return;
}



/* Entry: 106f69c48; end: 106f69ddf; -[SCAuxiliaryDataGraphVerifier _testProcessorIsCyclic:descendents:] */

void FUN_106f69c48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4b900();
  if (iVar2 != 0) {
    uVar3 = param_4;
    func_0x00010bf09f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0658c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        lVar6 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          func_0x00010becb300(param_1);
        }
        _objc_release(lVar6);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106f69de0; end: 106f69e1b; -[SCAuxiliaryDataGraphVerifier .cxx_destruct] */

void FUN_106f69de0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f69e1c; end: 106f69ebf; -[SCAuxiliaryDataIncompleteProcessor initWithProcessor:future:] */

undefined1 *
FUN_106f69e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7fd8;
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



/* Entry: 106f69ec0; end: 106f69f87; -[SCAuxiliaryDataIncompleteProcessor isEqual:] */

undefined8 FUN_106f69ec0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d3778;
  _objc_opt_class(PTR_PTR_1126d3778);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010c115b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c115b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c071ae0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106f69f88; end: 106f69fc3; -[SCAuxiliaryDataIncompleteProcessor hash] */

undefined8 FUN_106f69f88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c115b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f69fc4; end: 106f6a02b; -[SCAuxiliaryDataIncompleteProcessor weight] */

ulong FUN_106f69fc4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  uVar1 = *(ulong *)(param_2 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_progressWeight_1126238e0);
  uVar2 = *(ulong *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c117b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_progressWeight_1126238e0);
    return CONCAT44(uVar5,uVar3);
  }
  _objc_opt_respondsToSelector(uVar2,PTR_s_isExpensive_1125fa318);
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    func_0x00010c072420();
    uVar4 = 0x41200000;
    if ((uVar1 & 1) != 0) goto LAB_106f6a020;
  }
  uVar4 = 0x3f800000;
LAB_106f6a020:
  return (ulong)uVar4;
}



/* Entry: 106f6a02c; end: 106f6a147; -[SCAuxiliaryDataIncompleteProcessor monitorProgress:performer:] */

void FUN_106f6a02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_monitorProgressWithBlock__112611d68);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0d0d40(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106f6a148; end: 106f6a1c7;  */

void FUN_106f6a148(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f6a1c8;
  puStack_48 = &UNK_110890350;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  uStack_38 = param_1;
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106f6a1c8; end: 106f6a1eb;  */

void FUN_106f6a1c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106f6a1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(undefined4 *)(param_1 + 0x28),*(long *)(param_1 + 0x20));
  return;
}



/* Entry: 106f6a1ec; end: 106f6a1f3; -[SCAuxiliaryDataIncompleteProcessor processor] */

undefined8 FUN_106f6a1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f6a1f4; end: 106f6a1fb; -[SCAuxiliaryDataIncompleteProcessor future] */

undefined8 FUN_106f6a1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f6a1fc; end: 106f6a22b; -[SCAuxiliaryDataIncompleteProcessor .cxx_destruct] */

void FUN_106f6a1fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f6a22c; end: 106f6a233; -[SCAuxiliaryDataQueuedProcessorJob processor] */

undefined8 FUN_106f6a22c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f6a234; end: 106f6a263; -[SCAuxiliaryDataQueuedProcessorJob setProcessor:] */

void FUN_106f6a234(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f6a264; end: 106f6a26b; -[SCAuxiliaryDataQueuedProcessorJob inputData] */

undefined8 FUN_106f6a264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f6a26c; end: 106f6a29b; -[SCAuxiliaryDataQueuedProcessorJob setInputData:] */

void FUN_106f6a26c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f6a29c; end: 106f6a2a3; -[SCAuxiliaryDataQueuedProcessorJob outputPromises] */

undefined8 FUN_106f6a29c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f6a2a4; end: 106f6a2d3; -[SCAuxiliaryDataQueuedProcessorJob setOutputPromises:] */

void FUN_106f6a2a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f6a2d4; end: 106f6a30f; -[SCAuxiliaryDataQueuedProcessorJob .cxx_destruct] */

void FUN_106f6a2d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f6a310; end: 106f6a3a7; -[SCAuxiliaryDataProcessorQueue initWithPerformer:] */

undefined1 * FUN_106f6a310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7fe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f6a3a8; end: 106f6a60f; -[SCAuxiliaryDataProcessorQueue queueJobForProcessor:inputDataFutures:] */

void FUN_106f6a3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0eec20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0658c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106f6a62c;
  puStack_88 = &UNK_110985ba8;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_3);
  uVar5 = uVar4;
  uStack_78 = param_3;
  func_0x00010c0b8600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_a8,param_1);
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_3);
  func_0x00010c297260(puVar6);
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010c0ba440(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f6a610; end: 106f6a62b;  */

void FUN_106f6a610(void)

{
  _objc_opt_new(PTR_PTR_1126ae560);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


