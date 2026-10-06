/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b96834c; end: 10b96835b; -[SCValdiPromiseCallback onFailureWithError:] */

void FUN_10b96834c(void)

{
  FUN_10b9684cc();
  FUN_10b965d04();
  FUN_10b9684cc();
  FUN_10b965d04();
  FUN_10b9684cc();
  FUN_10b965d04();
  return;
}



/* Entry: 10b96835c; end: 10b96836b; -[SCValdiPromise onCompleteWithCallback:] */

void FUN_10b96835c(void)

{
  FUN_10b9684cc();
  FUN_10b965d04();
  FUN_10b9684cc();
  FUN_10b965d04();
  return;
}



/* Entry: 10b96836c; end: 10b96837b; -[SCValdiPromise onCompleteWithCallbackBlock:] */

void FUN_10b96836c(void)

{
  FUN_10b9684cc();
  FUN_10b965d04();
  return;
}



/* Entry: 10b96837c; end: 10b96837f; -[SCValdiPromise cancel] */

void FUN_10b96837c(void)

{
  return;
}



/* Entry: 10b968380; end: 10b968383; -[SCValdiPromise isCancelable] */

undefined8 FUN_10b968380(void)

{
  return 0;
}



/* Entry: 10b968384; end: 10b96838f; -[SCValdiPromise setPeer:] */

void FUN_10b968384(void)

{
  undefined *puVar1;
  
  FUN_10b965d04();
  FUN_10b965d04();
  puVar1 = PTR_PTR_1126e1b48;
  FUN_10b9684cc();
  _objc_alloc(puVar1);
  func_0x00010c060400();
  func_0x00010b9684e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b968390; end: 10b96839b; -[SCValdiPromise getPeer] */

void FUN_10b968390(void)

{
  undefined *puVar1;
  
  FUN_10b965d04();
  puVar1 = PTR_PTR_1126e1b48;
  FUN_10b9684cc();
  _objc_alloc(puVar1);
  func_0x00010c060400();
  func_0x00010b9684e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b96839c; end: 10b9683df; +[SCValdiPromise resolvedPromiseWithValue:] */

void FUN_10b96839c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b48;
  FUN_10b9684cc();
  _objc_alloc(puVar1);
  func_0x00010c060400();
  func_0x00010b9684e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b9683e0; end: 10b9684cb; +[SCValdiPromise rejectedPromiseWithError:] */

void FUN_10b9683e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b50;
  FUN_10b9684cc();
  _objc_alloc(puVar1);
  func_0x00010c010760();
  func_0x00010b9684e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b9684cc; end: 10b96851f;  */

void FUN_10b9684cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b968520; end: 10b96855f;  */

undefined8 FUN_10b968520(void)

{
  if (lRam00000001137fd280 != -1) {
    func_0x000107c27d9c(0x1137fd280,&PTR___NSConcreteGlobalBlock_110d7a378);
  }
  return uRam00000001137fd288;
}



/* Entry: 10b968560; end: 10b96859f;  */

void FUN_10b968560(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uRam00000001137fd288 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9685a0; end: 10b9685a7;  */

double FUN_10b9685a0(float param_1)

{
  double dVar1;
  double unaff_d8;
  
  dVar1 = (double)param_1;
  FUN_10b968684(dVar1);
  return (double)(long)(unaff_d8 * dVar1) / dVar1;
}



/* Entry: 10b9685a8; end: 10b968613;  */

double FUN_10b9685a8(double param_1)

{
  double unaff_d8;
  
  FUN_10b968684();
  return (double)(long)(unaff_d8 * param_1) / param_1;
}



/* Entry: 10b968614; end: 10b968683;  */

double FUN_10b968614(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  FUN_10b9685a0();
  FUN_10b9685a0(param_2);
  FUN_10b9685a0(param_3);
  FUN_10b9685a0(param_4);
  return param_1 + param_3 * 0.5;
}



/* Entry: 10b968684; end: 10b968693;  */

undefined8 FUN_10b968684(void)

{
  if (lRam00000001137fd280 != -1) {
    func_0x000107c27d9c(0x1137fd280,&PTR___NSConcreteGlobalBlock_110d7a378);
  }
  return uRam00000001137fd288;
}



/* Entry: 10b968694; end: 10b968703; -[SCValdiRef initWithInstance:strong:] */

long FUN_10b968694(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  FUN_10b9688c0();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x18) = param_4;
    func_0x00010c1adb20(lVar1,param_2,param_3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10b968704; end: 10b968737; -[SCValdiRef init] */

void FUN_10b968704(long param_1)

{
  FUN_10b9688c0();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



/* Entry: 10b968738; end: 10b9687ab; -[SCValdiRef setInstance:] */

void FUN_10b968738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    _objc_retain(param_3);
    uVar2 = param_3;
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = param_3;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 8,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9687ac; end: 10b9687ef; -[SCValdiRef instance] */

void FUN_10b9687ac(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    param_1 = *(long *)(param_1 + 0x10);
    _objc_retain(param_1);
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9687f0; end: 10b968837; -[SCValdiRef makeStrong] */

void FUN_10b9687f0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c067b40();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x18) = 1;
  func_0x00010b9688d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b968838; end: 10b96887f; -[SCValdiRef makeWeak] */

void FUN_10b968838(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = param_1;
    func_0x00010c067b40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined1 *)(param_1 + 0x18) = 0;
    func_0x00010b9688d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b968880; end: 10b968893; +[SCValdiRef valdiMarshallableObjectDescriptor] */

void FUN_10b968880(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 3;
  return;
}



/* Entry: 10b968894; end: 10b9688bf; -[SCValdiRef .cxx_destruct] */

void FUN_10b968894(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b9688c0; end: 10b9688db;  */

void FUN_10b9688c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10b9688dc; end: 10b9689af;  */

void FUN_10b9688dc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126caff0;
    _objc_opt_class(PTR_PTR_1126caff0);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar4 & 1) != 0) {
      uVar2 = param_1;
      func_0x00010c067b40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar1);
      uVar4 = uVar2;
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar2;
        func_0x00010bf481c0();
        if ((int)uVar3 == 0) {
          uVar4 = 0;
        }
        else {
          func_0x00010c29bf00(uVar2);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        _objc_retain(uVar2);
      }
      _objc_release(uVar2);
      goto LAB_10b968994;
    }
  }
  uVar4 = 0;
LAB_10b968994:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b9689b0; end: 10b9689c3; -[SCValdiRootView initWithViewModelUntyped:componentContextUntyped:runtime:] */

void FUN_10b9689b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c032a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithOwner_viewModel_componen_1125ea498,0,param_3,param_4,param_5);
  return;
}



/* Entry: 10b9689c4; end: 10b968aab; -[SCValdiRootView initWithOwner:viewModel:componentContext:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b9689c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010b96970c();
  func_0x00010b969750();
  _objc_retain(param_5);
  lVar1 = param_6;
  _objc_retain();
  func_0x00010b969714();
  func_0x00010b9696dc();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112795e5c) = 1;
    func_0x00010c1d7bc0(lVar1,param_2,param_3);
    lVar2 = lVar1;
    func_0x00010c29df60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      func_0x00010bf44480(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    func_0x00010bfed800(param_6,param_2,lVar1,param_3,param_4,param_5);
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010b9696fc();
  func_0x00010b969704();
  return lVar1;
}



/* Entry: 10b968aac; end: 10b968b6b; -[SCValdiRootView initWithOwner:cppMarshaller:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b968aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  func_0x00010b96970c();
  func_0x00010b969750();
  func_0x00010b969714();
  func_0x00010b9696dc();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112795e5c) = 1;
    func_0x00010c1d7bc0(param_1,param_2,param_3);
    lVar1 = param_1;
    func_0x00010c29df60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010bf44480(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    func_0x00010bfed7e0(param_5,param_2,param_1,param_3,param_4);
    _objc_release(lVar1);
  }
  func_0x00010b9696fc();
  func_0x00010b969704();
  return param_1;
}



/* Entry: 10b968b6c; end: 10b968b8f; -[SCValdiRootView initWithoutValdiContext] */

void FUN_10b968b6c(void)

{
  func_0x00010b969714();
  func_0x00010b9696dc();
  return;
}



/* Entry: 10b968b90; end: 10b968c7b; -[SCValdiRootView accessibilityElements] */

undefined * FUN_10b968b90(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong *puVar2;
  long unaff_x21;
  ulong auStack_50 [2];
  ulong uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8f080();
  if ((uVar1 & 1) == 0) {
    func_0x00010b9696fc();
  }
  else {
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b969758();
    func_0x00010b9696fc();
    if (unaff_x21 != 0) {
      func_0x00010c2954e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (ulong *)PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_40 = param_1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b9696fc();
      goto LAB_10b968c54;
    }
  }
  func_0x00010b969714();
  auStack_50[0] = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_accessibilityElements_112598d38);
  _objc_retainAutoreleasedReturnValue();
LAB_10b968c54:
  func_0x00010b969780(uStack_38);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return (undefined *)puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 10b968c7c; end: 10b968c83; -[SCValdiRootView willEnqueueIntoValdiPool] */

undefined8 FUN_10b968c7c(void)

{
  return 0;
}



/* Entry: 10b968c84; end: 10b968c8b; -[SCValdiRootView requiresLayoutWhenAnimatingBounds] */

undefined8 FUN_10b968c84(void)

{
  return 0;
}



/* Entry: 10b968c8c; end: 10b968d2f; -[SCValdiRootView bundleName] */

void FUN_10b968c8c(undefined *param_1,undefined8 param_2)

{
  func_0x00010bf44480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != (undefined *)0x0) {
    FUN_10b973668();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined *)0x0) goto LAB_10b968d14;
  }
  param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f9e198);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9696fc();
LAB_10b968d14:
  func_0x00010b969704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b968d30; end: 10b968d8b; -[SCValdiRootView viewName] */

void FUN_10b968d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f9e1b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9696fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b968d8c; end: 10b968e07; -[SCValdiRootView dealloc] */

void FUN_10b968d8c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c295200();
  iVar1 = (int)uVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1417a0();
  func_0x00010b9696fc();
  if (iVar1 != 0) {
    func_0x00010c295200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6ef60();
    func_0x00010b9696fc();
  }
  func_0x00010b969714();
  func_0x00010b969760();
  return;
}



/* Entry: 10b968e08; end: 10b968e63; -[SCValdiRootView safeAreaInsetsDidChange] */

void FUN_10b968e08(void)

{
  func_0x00010b969714();
  func_0x00010b969760();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  func_0x00010b9696fc();
  return;
}



/* Entry: 10b968e64; end: 10b968e7f; -[SCValdiRootView _valdiLayoutDirection] */

bool FUN_10b968e64(long param_1)

{
  func_0x00010bf8d060();
  return param_1 != 0;
}



/* Entry: 10b968e80; end: 10b968f47; -[SCValdiRootView layoutSubviews] */

void FUN_10b968e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long unaff_x21;
  
  func_0x00010c28b480();
  func_0x00010b969714();
  func_0x00010b969760();
  lVar1 = param_5;
  func_0x00010c295200(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b969758();
  if (unaff_x21 == param_5) {
    func_0x00010bf20c00(param_5);
    func_0x00010bee7660(param_5);
    func_0x00010c1b9c60(param_3,param_4,lVar1);
    func_0x00010c2954e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72540();
    func_0x00010b969704();
  }
  func_0x00010b9696fc();
  return;
}



/* Entry: 10b968f48; end: 10b968f57; -[SCValdiRootView intrinsicContentSize] */

void FUN_10b968f48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7ff8000000000000,0x7ff8000000000000,param_1,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10b968f58; end: 10b96900b; -[SCValdiRootView sizeThatFits:] */

undefined1  [16]
FUN_10b968f58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b969758();
  func_0x00010b9696fc();
  uVar2 = 0;
  uVar3 = 0;
  if (unaff_x21 == param_3) {
    lVar1 = param_3;
    func_0x00010c295200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee7660(param_3);
    func_0x00010c0c3ec0(param_1,param_2,lVar1,param_4,param_3);
    func_0x00010b9696fc();
    uVar2 = param_1;
    uVar3 = param_2;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 10b96900c; end: 10b969057; -[SCValdiRootView updateTraitCollection] */

void FUN_10b96900c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219560();
  func_0x00010b969704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b969058; end: 10b969177; -[SCValdiRootView didMoveToWindow] */

void FUN_10b969058(long param_1)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  long alStack_30 [2];
  
  lVar1 = param_1;
  func_0x00010b969714();
  alStack_30[0] = lVar1;
  _objc_msgSendSuper2(alStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10b969150;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010bee3760(param_1);
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104980();
    func_0x00010b9696fc();
  }
  return;
}



/* Entry: 10b969178; end: 10b969207; -[SCValdiRootView _updateViewInflationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969178(long param_1)

{
  byte bVar1;
  long unaff_x19;
  
  bVar1 = *(byte *)(param_1 + _DAT_112795e5c);
  if ((bVar1 & 1) == 0) {
    unaff_x19 = param_1;
    func_0x00010c2a71e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2225e0();
  func_0x00010b9696fc();
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
    return;
  }
  return;
}



/* Entry: 10b969208; end: 10b96930b; -[SCValdiRootView didMoveToValdiContext:viewNode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969208(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar6 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_3;
  func_0x00010b96970c();
  func_0x00010bee3760(param_1);
  lVar8 = (long)_DAT_112795e60;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if ((param_3 != 0) && (lVar1 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010b969750();
    uVar2 = *(ulong *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = 0;
    _objc_release();
    func_0x00010b969750();
    func_0x00010b969720();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar7);
        }
        uVar5 = *(ulong *)(uVar9 * 8);
        uVar3 = param_3;
        func_0x00010c2a1520();
        uVar9 = uVar9 + 1;
        in_ZR = uVar9 == uVar2;
      } while (uVar9 < uVar2);
      func_0x00010b969720();
      uVar2 = uVar3;
    }
    lVar1 = 0;
    func_0x00010b9696fc();
    func_0x00010b9696fc();
  }
  func_0x00010b969704();
  func_0x00010b969780(uVar6);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b96970c();
  if (uVar5 != 0) {
    lVar8 = lVar1;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      lVar10 = (long)_DAT_112795e60;
      lVar8 = *(long *)(lVar1 + lVar10);
      if (lVar8 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        uVar6 = *(undefined8 *)(lVar1 + lVar10);
        *(undefined **)(lVar1 + lVar10) = puVar4;
        _objc_release(uVar6);
        lVar8 = *(long *)(lVar1 + lVar10);
      }
      uVar2 = uVar5;
      _objc_retainBlock(uVar5);
      func_0x00010befa120(lVar8,param_2,uVar2);
      _objc_release(uVar2);
    }
    else {
      func_0x00010c2a1520(lVar8,param_2,uVar5);
    }
    func_0x00010b9696fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10b96930c; end: 10b9693c3; -[SCValdiRootView waitUntilInitialRenderWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96930c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010b96970c();
  if (param_3 != 0) {
    lVar3 = param_1;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = (long)_DAT_112795e60;
      lVar3 = *(long *)(param_1 + lVar4);
      if (lVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        *(undefined **)(param_1 + lVar4) = puVar1;
        _objc_release(uVar2);
        lVar3 = *(long *)(param_1 + lVar4);
      }
      lVar4 = param_3;
      _objc_retainBlock(param_3);
      func_0x00010befa120(lVar3,param_2,lVar4);
      _objc_release(lVar4);
    }
    else {
      func_0x00010c2a1520(lVar3,param_2,param_3);
    }
    func_0x00010b9696fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9693c4; end: 10b969407; -[SCValdiRootView onLayoutDirty:] */

void FUN_10b9693c4(undefined8 param_1)

{
  func_0x00010b96970c();
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4c00();
  func_0x00010b969704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b969408; end: 10b969467; -[SCValdiRootView setVisibleViewportWithFrame:] */

void FUN_10b969408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223d80(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b969468; end: 10b969493; -[SCValdiRootView unsetVisibleViewport] */

void FUN_10b969468(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b969494; end: 10b9694c7; -[SCValdiRootView setRetainsLayoutSpecsOnInvalidateLayout:] */

void FUN_10b969494(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9694c8; end: 10b9694ff; -[SCValdiRootView retainsLayoutSpecsOnInvalidateLayout] */

undefined8 FUN_10b9694c8(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dde0();
  func_0x00010b969704();
  return param_1;
}



/* Entry: 10b969500; end: 10b96951f; -[SCValdiRootView setEnableViewInflationWhenInvisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969500(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112795e5c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112795e5c) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewInflationState_112596780);
  return;
}



/* Entry: 10b969520; end: 10b969597; -[SCValdiRootView traitCollectionDidChange:] */

void FUN_10b969520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_30 [2];
  
  func_0x00010b96970c();
  func_0x00010c28b480(param_1);
  func_0x00010b969714();
  auStack_30[0] = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_traitCollectionDidChange__11267bf88,param_3);
  func_0x00010b969704();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  func_0x00010b969704();
  return;
}



/* Entry: 10b969598; end: 10b9695ab; -[SCValdiRootView componentPath] */

void FUN_10b969598(undefined8 param_1)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bf44490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentPath_1125aeac8);
  return;
}



/* Entry: 10b9695ac; end: 10b969603; +[SCValdiRootView componentPath] */

void FUN_10b9695ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f9e1d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9696fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b969604; end: 10b96965b; -[SCValdiRootView canScrollAtPoint:direction:] */

undefined8 FUN_10b969604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d520(param_1,param_2);
  func_0x00010b9696fc();
  return param_3;
}



/* Entry: 10b96965c; end: 10b96967b; -[SCValdiRootView owner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96965c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112795e64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96967c; end: 10b96968f; -[SCValdiRootView setOwner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96967c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112795e64,param_3);
  return;
}



/* Entry: 10b969690; end: 10b96969f; -[SCValdiRootView enableViewInflationWhenInvisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b969690(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795e5c);
}



/* Entry: 10b9696a0; end: 10b9696db; -[SCValdiRootView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9696a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112795e64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795e60,0);
  return;
}



/* Entry: 10b9696dc; end: 10b969793;  */

void FUN_10b9696dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  return;
}



/* Entry: 10b969794; end: 10b9698f3; -[SCValdiScrollView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b969794(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = auStack_40;
  func_0x00010b96b358();
  _objc_msgSendSuper2(auStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = PTR_PTR_1126e1b58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_112795e70;
    uVar3 = *(undefined8 *)(puVar1 + lVar4);
    *(undefined **)(puVar1 + lVar4) = puVar2;
    func_0x00010b96b410(uVar3);
    func_0x00010befbb60(puVar1);
    puVar1[_DAT_112795e74] = 0;
    uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    *(undefined8 *)((long)(puVar1 + _DAT_112795e78) + 8) =
         *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *(undefined8 *)(puVar1 + _DAT_112795e78) = uVar3;
    puVar1[_DAT_112795e7c] = 0;
    *(undefined8 *)(puVar1 + _DAT_112795e80) = 0;
    puVar1[_DAT_112795e84] = 1;
    puVar1[_DAT_112795e88] = 1;
    func_0x00010c181fc0(*(undefined8 *)(puVar1 + lVar4));
    func_0x00010c17d4c0(puVar1);
    func_0x00010befa220(*(undefined8 *)(puVar1 + lVar4));
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96b468(PTR__UIKeyboardWillShowNotification_110345d20);
    func_0x00010b96b37c();
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96b468(PTR__UIKeyboardWillHideNotification_110345d18);
    func_0x00010b96b37c();
  }
  return puVar1;
}



/* Entry: 10b9698f4; end: 10b969953; -[SCValdiScrollView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9698f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_112795e70;
  func_0x00010c12d580(*(undefined8 *)(param_1 + lVar1),param_2,param_1,
                      &PTR____CFConstantStringClassReference_110db8c58);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_11270c088;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b969954; end: 10b96999b; -[SCValdiScrollView layoutSubviews] */

void FUN_10b969954(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b96b358();
  _objc_msgSendSuper2(auStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be49640(param_1);
  func_0x00010bed7c00(param_1);
  func_0x00010be49060(param_1);
  return;
}



/* Entry: 10b96999c; end: 10b969aef; -[SCValdiScrollView _layoutScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96999c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar1 = (int)&uStack_90;
  lVar4 = (long)_DAT_112795e70;
  lVar2 = *(long *)(param_5 + lVar4);
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c2954e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0762c0();
    func_0x00010b96b37c();
    *(char *)(param_5 + _DAT_112795e74) = (char)uVar3;
    func_0x00010c1a91c0(*(undefined8 *)(param_5 + lVar4),param_6,uVar3);
  }
  func_0x00010bf20c00(param_5);
  if (*(long *)(param_5 + lVar4) == 0) {
    param_1 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_90);
  }
  _CGAffineTransformIsIdentity();
  if (iVar1 == 0) {
    func_0x00010b96b3d8();
    _CGRectGetMidX();
    uVar3 = param_1;
    func_0x00010b96b3d8();
    _CGRectGetMidY();
    uVar5 = uVar3;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
    func_0x00010c17a6a0(param_1,uVar3,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c1739e0(uVar5,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar4));
  }
  else {
    func_0x00010b96b3d8(*(undefined8 *)(param_5 + lVar4));
    func_0x00010c19f0e0();
  }
  return;
}



/* Entry: 10b969af0; end: 10b969b2f; -[SCValdiScrollView observeValueForKeyPath:ofObject:change:context:] */

void FUN_10b969af0(undefined8 param_1)

{
  undefined *in_x5;
  undefined1 auStack_20 [16];
  
  if (in_x5 != PTR_s_contentOffset_1125b0d18) {
    func_0x00010b96b358();
    _objc_msgSendSuper2(auStack_20,PTR_s_observeValueForKeyPath_ofObject__112615e88);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed7c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFadingEdge_1125938a8);
  return;
}



/* Entry: 10b969b30; end: 10b969c13; -[SCValdiScrollView scrollSpecsDidChangeWithContentOffset:contentSize:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969b30(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = *(double *)(param_5 + _DAT_112795e78);
  dVar6 = ((double *)(param_5 + _DAT_112795e78))[1];
  bVar1 = false;
  if ((dVar5 == param_3) && (bVar1 = false, !NAN(dVar6) && !NAN(param_4))) {
    bVar1 = dVar6 == param_4;
  }
  if (!bVar1) {
    func_0x00010c1827c0(param_5);
    dVar5 = param_3;
    dVar6 = param_4;
  }
  lVar4 = (long)_DAT_112795e70;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar4));
  bVar1 = false;
  if ((dVar5 == param_1) && (bVar1 = false, !NAN(dVar6) && !NAN(param_2))) {
    bVar1 = dVar6 == param_2;
  }
  if (!bVar1) {
    func_0x00010c182300(param_1,param_2,param_5);
  }
  lVar3 = *(long *)(param_5 + lVar4);
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar2 = (uint)*(undefined8 *)(param_5 + lVar4);
    func_0x00010c2954e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0762c0();
    func_0x00010b96b37c();
    if (*(byte *)(param_5 + _DAT_112795e74) != uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
      return;
    }
  }
  return;
}



/* Entry: 10b969c14; end: 10b969c23; -[SCValdiScrollView setContentOffset:animated:] */

void FUN_10b969c14(undefined8 param_1)

{
  func_0x00010b96b348();
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setContentOffset_animated__11263e2e0);
  return;
}



/* Entry: 10b969c24; end: 10b969c37; -[SCValdiScrollView setContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969c24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112795e78;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010be49070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__layoutContentSize_11256fdb8);
  return;
}



/* Entry: 10b969c38; end: 10b969cc3; -[SCValdiScrollView _layoutContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969c38(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  long unaff_x20;
  
  if (*(char *)(param_5 + _DAT_112795e74) == '\x01') {
    param_3 = *(double *)(param_5 + _DAT_112795e78);
    func_0x00010b96b418();
  }
  else {
    param_4 = ((double *)(param_5 + _DAT_112795e78))[1];
    func_0x00010b96b418();
  }
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + unaff_x20));
  bVar1 = false;
  if ((param_1 == param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar1 = param_2 == param_4;
  }
  if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c1827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,param_4,*(undefined8 *)(param_5 + unaff_x20),PTR_s_setContentSize__11263e410)
    ;
    return;
  }
  return;
}



/* Entry: 10b969cc4; end: 10b969d03; -[SCValdiScrollView setClipsToBounds:] */

void FUN_10b969cc4(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b96b358();
  _objc_msgSendSuper2(auStack_30,PTR_s_setClipsToBounds__11263cf50);
  func_0x00010b96b384();
  func_0x00010c17d4c0();
  return;
}



/* Entry: 10b969d04; end: 10b969d07; -[SCValdiScrollView clipsToBoundsByDefault] */

undefined8 FUN_10b969d04(void)

{
  return 1;
}



/* Entry: 10b969d08; end: 10b969d4f; -[SCValdiScrollView setValdiContext:] */

void FUN_10b969d08(void)

{
  func_0x00010b96b358();
  func_0x00010b96b394();
  func_0x00010b96b458();
  func_0x00010b96b384();
  func_0x00010c21fea0();
  func_0x00010b96b3a4();
  return;
}



/* Entry: 10b969d50; end: 10b969d97; -[SCValdiScrollView setValdiViewNode:] */

void FUN_10b969d50(void)

{
  func_0x00010b96b358();
  func_0x00010b96b394();
  func_0x00010b96b458();
  func_0x00010b96b384();
  func_0x00010c220000();
  func_0x00010b96b3a4();
  return;
}



/* Entry: 10b969d98; end: 10b969db3; -[SCValdiScrollView contentViewForInsertingValdiChildren] */

void FUN_10b969d98(void)

{
  func_0x00010b96b3ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b969db4; end: 10b969e0f; -[SCValdiScrollView didMoveToValdiContext:viewNode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0762c0();
  *(char *)(param_1 + _DAT_112795e74) = (char)param_4;
  func_0x00010c1a91c0(*(undefined8 *)(param_1 + _DAT_112795e70),param_2,param_4);
  func_0x00010be49060(param_1);
  func_0x00010be9c2a0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b969e10; end: 10b969e63; -[SCValdiScrollView willEnqueueIntoValdiPool] */

undefined8 FUN_10b969e10(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b96b348();
  func_0x00010c18b5e0();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1,param_2,0);
  func_0x00010c1827c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1);
  return 1;
}



/* Entry: 10b969e64; end: 10b969e7f; -[SCValdiScrollView innerScrollView] */

void FUN_10b969e64(void)

{
  func_0x00010b96b3ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b969e80; end: 10b969e9b; -[SCValdiScrollView valdi_setBounces:] */

undefined8 FUN_10b969e80(void)

{
  func_0x00010b96b348();
  func_0x00010c1738c0();
  return 1;
}



/* Entry: 10b969e9c; end: 10b969eb7; -[SCValdiScrollView valdi_setBouncesFromDragAtStart:] */

undefined8 FUN_10b969e9c(void)

{
  func_0x00010b96b348();
  func_0x00010c173900();
  return 1;
}



/* Entry: 10b969eb8; end: 10b969ed3; -[SCValdiScrollView valdi_setBouncesFromDragAtEnd:] */

undefined8 FUN_10b969eb8(void)

{
  func_0x00010b96b348();
  func_0x00010c1738e0();
  return 1;
}



/* Entry: 10b969ed4; end: 10b969eef; -[SCValdiScrollView valdi_setBouncesVerticalWithSmallContent:] */

undefined8 FUN_10b969ed4(void)

{
  func_0x00010b96b348();
  func_0x00010c167a20();
  return 1;
}



/* Entry: 10b969ef0; end: 10b969f0b; -[SCValdiScrollView valdi_setBouncesHorizontalWithSmallContent:] */

undefined8 FUN_10b969ef0(void)

{
  func_0x00010b96b348();
  func_0x00010c167a00();
  return 1;
}



/* Entry: 10b969f0c; end: 10b969fbf; -[SCValdiScrollView _updateKeyboardMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969f0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112795e70;
  func_0x00010c0f36c0(*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e920();
  func_0x00010b96b374();
  if ((*(byte *)(param_1 + _DAT_112795e7c) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    if (*(long *)(param_1 + _DAT_112795e80) == 0) {
      uVar2 = 1;
      goto LAB_10b969fa4;
    }
    func_0x00010c0f36c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    func_0x00010b96b374();
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  uVar2 = 0;
LAB_10b969fa4:
                    /* WARNING: Could not recover jumptable at 0x00010c1b6df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setKeyboardDismissMode__11264b5a0,uVar2);
  return;
}



/* Entry: 10b969fc0; end: 10b969fe3; -[SCValdiScrollView valdi_setDismissKeyboardOnDrag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b969fc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795e7c) = param_3;
  func_0x00010beda120();
  return 1;
}



/* Entry: 10b969fe4; end: 10b96a04f; -[SCValdiScrollView valdi_setDismissKeyboardOnDragMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b969fe4(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x00010b96b338();
  func_0x00010b96b408();
  if (param_1 == 0) {
    func_0x00010b96b408();
    lVar1 = (long)_DAT_112795e80;
    if (param_1 == 0) {
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
      goto LAB_10b96a03c;
    }
    uVar2 = 2;
  }
  else {
    lVar1 = (long)_DAT_112795e80;
    uVar2 = 1;
  }
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
LAB_10b96a03c:
  func_0x00010beda120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96a050; end: 10b96a087; -[SCValdiScrollView valdi_setTranslatesForKeyboard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96a050(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795e90) = param_3;
  if (*(double *)(param_1 + _DAT_112795e8c) != 0.0) {
    *(undefined8 *)(param_1 + _DAT_112795e8c) = 0;
    func_0x00010be49640();
  }
  return 1;
}



/* Entry: 10b96a088; end: 10b96a0a3; -[SCValdiScrollView valdi_setPagingEnabled:] */

undefined8 FUN_10b96a088(void)

{
  func_0x00010b96b348();
  func_0x00010c1d8be0();
  return 1;
}



/* Entry: 10b96a0a4; end: 10b96a0bf; -[SCValdiScrollView valdi_setShowsHorizontalScrollIndicator:] */

undefined8 FUN_10b96a0a4(void)

{
  func_0x00010b96b348();
  func_0x00010c2025c0();
  return 1;
}



/* Entry: 10b96a0c0; end: 10b96a0db; -[SCValdiScrollView valdi_setShowsVerticalScrollIndicator:] */

undefined8 FUN_10b96a0c0(void)

{
  func_0x00010b96b348();
  func_0x00010c2026e0();
  return 1;
}



/* Entry: 10b96a0dc; end: 10b96a113; -[SCValdiScrollView valdi_setCancelsTouchesOnScroll:] */

undefined8 FUN_10b96a0dc(void)

{
  func_0x00010be9c2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1782a0();
  func_0x00010b96b37c();
  return 1;
}



/* Entry: 10b96a114; end: 10b96a12f; -[SCValdiScrollView valdi_setStopScrollingOnTouch:] */

undefined8 FUN_10b96a114(void)

{
  func_0x00010b96b348();
  func_0x00010c20bf80();
  return 1;
}



/* Entry: 10b96a130; end: 10b96a13f; -[SCValdiScrollView valdi_setScrollEnabled:] */

void FUN_10b96a130(undefined8 param_1)

{
  func_0x00010b96b348();
                    /* WARNING: Could not recover jumptable at 0x00010c1d8ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPanGestureRecognizerEnabled__112653dd8);
  return;
}



/* Entry: 10b96a140; end: 10b96a1db; -[SCValdiScrollView valdi_setScrollPerfLoggerBridge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b96a140(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  func_0x00010b96b338();
  if (unaff_x19 == 0) {
    func_0x00010c1f7c40(*(undefined8 *)(unaff_x20 + _DAT_112795e94),param_2,0);
LAB_10b96a1bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  _objc_retain();
  lVar2 = unaff_x19;
  func_0x00010bf481c0();
  lVar5 = unaff_x19;
  if ((int)lVar2 == 0) {
    lVar5 = 0;
  }
  _objc_retain(lVar5);
  func_0x00010b96b3a4();
  if ((int)lVar2 != 0) {
    func_0x00010c1f7c40(*(undefined8 *)(unaff_x20 + _DAT_112795e94));
    func_0x00010b96b3a4();
    goto LAB_10b96a1bc;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f9e238;
  FUN_10b965c10();
  func_0x00010b96b338();
  puVar4 = (undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
  if (unaff_x19 != 0) {
    func_0x00010b96b408();
    iVar1 = (int)ppuVar3;
    puVar4 = (undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
    if ((((ulong)ppuVar3 & 1) == 0) &&
       (func_0x00010b96b408(),
       puVar4 = (undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8, iVar1 == 0)) {
      lVar5 = 0;
      goto LAB_10b96a218;
    }
  }
  func_0x00010b96b384(*puVar4);
  func_0x00010c18a140();
  lVar5 = 1;
LAB_10b96a218:
  func_0x00010b96b3a4();
  return lVar5;
}



/* Entry: 10b96a1dc; end: 10b96a24b; -[SCValdiScrollView valdi_setDecelerationRate:] */

undefined8 FUN_10b96a1dc(ulong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x00010b96b338();
  puVar2 = (undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
  if (unaff_x19 != 0) {
    func_0x00010b96b408();
    iVar1 = (int)param_1;
    puVar2 = (undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
    if (((param_1 & 1) == 0) &&
       (func_0x00010b96b408(),
       puVar2 = (undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8, iVar1 == 0)) {
      uVar3 = 0;
      goto LAB_10b96a218;
    }
  }
  func_0x00010b96b384(*puVar2);
  func_0x00010c18a140();
  uVar3 = 1;
LAB_10b96a218:
  func_0x00010b96b3a4();
  return uVar3;
}



/* Entry: 10b96a24c; end: 10b96a4cb; -[SCValdiScrollView valdi_setFadingEdgeLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b96a24c(double param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(double *)(param_2 + _DAT_112795e98) = param_1;
  uVar1 = param_1 == 0.0;
  if (param_1 <= 0.0) {
    func_0x00010c08c0e0(*(undefined8 *)(param_2 + _DAT_112795e70));
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    func_0x00010c1c2c00();
    func_0x00010b96b37c();
    uVar4 = *(undefined8 *)(param_2 + _DAT_112795e9c);
    *(undefined8 *)(param_2 + _DAT_112795e9c) = 0;
    _objc_release(uVar4);
    lVar5 = *(long *)(param_2 + _DAT_112795ea0);
    *(undefined8 *)(param_2 + _DAT_112795ea0) = 0;
    func_0x00010b96b3b8(uStack_58);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return lVar5;
    }
  }
  else {
    lVar5 = (long)_DAT_112795ea0;
    if (*(long *)(param_2 + lVar5) == 0) {
      param_4 = 8;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a120();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + lVar5);
      *(undefined **)(param_2 + lVar5) = puVar2;
      func_0x00010b96b410(uVar4);
    }
    lVar6 = (long)_DAT_112795e9c;
    if (*(long *)(param_2 + lVar6) == 0) {
      puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)(param_2 + lVar6);
      *(undefined **)(param_2 + lVar6) = puVar2;
      func_0x00010b96b410(uVar4);
      puVar2 = PTR_PTR_1126d91e0;
      func_0x00010c22ba80(PTR_PTR_1126d91e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar6),param_3,puVar2);
      func_0x00010b96b37c();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_78 = puVar2;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_70 = puVar3;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_68 = puVar2;
      func_0x00010bf3ae40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_78,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60(*(undefined8 *)(param_2 + lVar6),param_3,puVar2);
      _objc_release(puVar2);
      func_0x00010b96b400();
      func_0x00010b96b39c();
      func_0x00010b96b374();
      func_0x00010b96b37c();
      func_0x00010c1bff00(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar5))
      ;
      param_4 = (undefined1)*(undefined8 *)(param_2 + lVar6);
      func_0x00010c08c0e0(*(undefined8 *)(param_2 + _DAT_112795e70));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      func_0x00010b96b374();
    }
    func_0x00010bed7c20();
    func_0x00010b96b3b8(uStack_58);
    lVar5 = param_2;
    if ((bool)uVar1) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar5 + _DAT_112795e84) = param_4;
  func_0x00010bed7c00();
  return 1;
}



/* Entry: 10b96a4cc; end: 10b96a4ef; -[SCValdiScrollView valdi_setFadingEdgeStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96a4cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795e84) = param_3;
  func_0x00010bed7c00();
  return 1;
}



/* Entry: 10b96a4f0; end: 10b96a513; -[SCValdiScrollView valdi_setFadingEdgeEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96a4f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795e88) = param_3;
  func_0x00010bed7c00();
  return 1;
}



/* Entry: 10b96a514; end: 10b96a51b; -[SCValdiScrollView _updateFadingEdgeDirection] */

void FUN_10b96a514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed7c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFadingEdgeDirectionAndInv_1125938b8,1)
  ;
  return;
}



/* Entry: 10b96a51c; end: 10b96a59f; -[SCValdiScrollView _updateFadingEdgeDirectionAndInvalidateLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96a51c(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = (long)_DAT_112795e9c;
  if (*(long *)(param_1 + lVar2) != 0) {
    bVar1 = *(char *)(param_1 + _DAT_112795e74) == '\0';
    uVar3 = 0;
    if (bVar1) {
      uVar3 = 0x3fe0000000000000;
    }
    uVar4 = 0x3fe0000000000000;
    if (bVar1) {
      uVar4 = 0;
    }
    uVar5 = 0x3ff0000000000000;
    if (bVar1) {
      uVar5 = 0x3fe0000000000000;
    }
    uVar6 = 0x3fe0000000000000;
    if (bVar1) {
      uVar6 = 0x3ff0000000000000;
    }
    func_0x00010c209760(uVar3,uVar4);
    func_0x00010c196020(uVar5,uVar6,*(undefined8 *)(param_1 + lVar2));
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
      return;
    }
  }
  return;
}


