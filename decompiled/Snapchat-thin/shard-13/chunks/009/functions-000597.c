/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aea6130; end: 10aea613f; +[SCMixerRequestProvider _rankingCameraTypeFromCameraType:] */

int FUN_10aea6130(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10aea6140; end: 10aea6157; +[SCMixerRequestProvider _rankingSnapTypeFromSnapType:] */

undefined1 FUN_10aea6140(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10aea6158; end: 10aea6167; +[SCMixerRequestProvider _rankingSnapSourceFromSnapSource:] */

int FUN_10aea6158(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 5) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10aea6168; end: 10aea630f; +[SCMixerRequestProvider _namespaceRequestsForNamespaces:params:] */

void FUN_10aea6168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be61e80(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10aea6218;
  puStack_40 = &UNK_110c8e1b0;
  uVar1 = param_3;
  uStack_38 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aea6310; end: 10aea6513; +[SCMixerRequestProvider _namespacePaginationDataFromParams:] */

void FUN_10aea6310(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c28d880();
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar1 == (undefined *)0x3) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar2 = param_3;
    func_0x00010bf27360();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          lVar8 = *(long *)(lStack_128 + (long)puVar10 * 8);
          lVar4 = lVar8;
          func_0x00010c14ffc0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c0d53e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          if (lVar5 != 0) {
            lVar4 = lVar8;
            func_0x00010c0cf080(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0f2920();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14ffc0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar8;
            func_0x00010c0d53e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1,param_2,lVar5,lVar6);
            _objc_release(lVar6);
            _objc_release(lVar8);
            _objc_release(lVar5);
            _objc_release(lVar4);
          }
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = puVar2;
        puVar7 = &uStack_130;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
    puVar3 = (undefined *)puVar7;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010bfb2660(puVar3,param_2,&PTR___NSConcreteGlobalBlock_110c8e200);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aea6514; end: 10aea656b; +[SCMixerRequestProvider _cachedItemsFromCachedMixerData:] */

void FUN_10aea6514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfb2660(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8e200);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aea656c; end: 10aea663f;  */

void FUN_10aea656c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010bef09a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c105c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010c105c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aea6640; end: 10aea673b;  */

void FUN_10aea6640(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aea673c;
  uStack_30 = 0x10aea674c;
  uStack_28 = 0;
  func_0x00010c0bd220(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aea673c; end: 10aea6753;  */

void FUN_10aea673c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aea6754; end: 10aea688b;  */

void FUN_10aea6754(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96ee0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((int)uVar2 == 0x10) {
    puVar3 = PTR_PTR_1126de558;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar4);
    uVar4 = param_2;
    func_0x00010c0840e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar4 = param_2;
    func_0x00010bf38a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17c2a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(uVar4);
    func_0x00010c21acc0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aea688c; end: 10aea698b;  */

void FUN_10aea688c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126de558;
  _objc_retain(param_2);
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126de538;
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c17c2a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setType__112664558,0);
  return;
}



/* Entry: 10aea698c; end: 10aea6b5f; +[SCMixerRequestProvider _adsRequestWithRequestFeatureInfo:] */

void FUN_10aea698c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_10aea673c;
  uStack_108 = 0x10aea674c;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  iVar3 = (int)param_6;
  while (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c0bcd40(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_3;
    func_0x00010bf52a60();
    iVar3 = (int)param_6;
  }
  _objc_release(param_3);
  uVar4 = puStack_120[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  uVar4 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  _objc_retain(uVar4);
  if (iVar3 != 0) {
    lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 8);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10aea6b60; end: 10aea6bb7;  */

void FUN_10aea6b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int in_w5;
  long lVar2;
  
  _objc_retain(param_2);
  if (in_w5 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aea6bb8; end: 10aea6ec7; +[SCMixerRequestProvider _mixerUserInfoWithRequestFeatureInfo:locationInfo:userAdIdProvider:countryCode:] */

void FUN_10aea6bb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126de560;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c149400(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205c80(puVar2);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126de470;
  func_0x00010be1c760(PTR_PTR_1126de470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf6c0(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2158a0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  dVar9 = 0.0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(puVar2);
      _objc_retain(puVar2);
      func_0x00010c0bcd40(uVar8);
      _objc_release(puVar2);
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar7);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar10 = dVar9;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c16a720((float)(dVar9 / dVar10),puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c184aa0(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_setHasCameo__1126470d8,param_2);
  return;
}



/* Entry: 10aea6ec8; end: 10aea6edf;  */

void FUN_10aea6ec8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHasCameo__1126470d8,param_2);
  return;
}



/* Entry: 10aea6ee0; end: 10aea6fb3; +[SCMixerRequestProvider _geoLocationWithLocationInfo:] */

void FUN_10aea6ee0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126de568;
    func_0x00010c0cb140(PTR_PTR_1126de568);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_5);
    func_0x00010c1b9520(puVar3);
    func_0x00010bf51c80(param_5);
    func_0x00010c1c0e80(param_2,puVar3);
    func_0x00010bfe4080(param_5);
    func_0x00010c1a9120(puVar3);
    puVar1 = PTR_PTR_1126afec0;
    lVar2 = param_5;
    func_0x00010c2709c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c155420(puVar1);
    func_0x00010c215e80(puVar3,param_4,(long)param_2);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aea6fb4; end: 10aea6fc7; +[SCMixerRequestProvider _cachedItemsFromCachedDataProvider:] */

void FUN_10aea6fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf27230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_cachedLensIdentifiersFutureForLe_1125a7630,
             &PTR____CFConstantStringClassReference_110f5daf8);
  return;
}



/* Entry: 10aea6fc8; end: 10aea70df; +[SCMixerRequestProvider _networkProfileWithConnectivityMonitor:bandwidthEstimator:] */

void FUN_10aea6fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de570;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf48f60(uVar2);
  uVar4 = param_1;
  func_0x00010be86040(param_1,param_2,uVar3);
  func_0x00010c1e7a00(puVar1,param_2,uVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dd960();
  func_0x00010bde63c0(param_1,param_2,uVar3);
  func_0x00010c1911c0(puVar1,param_2,param_1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c0dd920(uVar2);
  func_0x00010c1911e0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea70e0; end: 10aea7103; +[SCMixerRequestProvider _reachabilityFromConnectivityStatus:] */

undefined4 FUN_10aea70e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined4 *)(&UNK_10dd961a0 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10aea7104; end: 10aea7113; +[SCMixerRequestProvider _connectionClassFromNetworkBandwidth:] */

ulong FUN_10aea7104(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (6 < param_3) {
    param_3 = 7;
  }
  return param_3;
}



/* Entry: 10aea7114; end: 10aea717f; +[SCMixerRequestProvider _coreUUIDFromUUIDString:] */

void FUN_10aea7114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c3094c(param_3,&uStack_28,&uStack_30);
  puVar1 = (undefined *)0x0;
  if ((int)param_3 != 0) {
    puVar1 = PTR_PTR_1126afad0;
    func_0x00010c0cb140(PTR_PTR_1126afad0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea7180; end: 10aea7337; +[SCMixerRequestProvider _predictedContextFromFeatureInfo:contextualInfo:] */

void FUN_10aea7180(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_3);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(puVar1);
      func_0x00010c0bcd40(uVar6);
      _objc_release(puVar1);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126de578;
    _objc_opt_new(PTR_PTR_1126de578);
    func_0x00010c223f60();
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_3 + 0x28);
  func_0x00010beea320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_3 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10aea7338; end: 10aea7383;  */

void FUN_10aea7338(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010beea320(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aea7384; end: 10aea75b3; +[SCMixerRequestProvider _visualTagsFromClassifications:] */

void FUN_10aea7384(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuStack_200;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  ppuStack_200 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (ppuStack_200 != (undefined **)0x0) {
    lVar7 = *plStack_1a0;
    do {
      ppuVar8 = (undefined **)0x0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar10 = *(long *)(lStack_1a8 + (long)ppuVar8 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar1 = lVar10;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar9 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar9) {
                _objc_enumerationMutation(lVar1);
              }
              uVar11 = *(undefined8 *)(lStack_1e8 + lVar12 * 8);
              puVar3 = PTR_PTR_1126de580;
              func_0x00010c0cb140(PTR_PTR_1126de580);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar10;
              func_0x00010c0e00e0(lVar10,param_2,uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              func_0x00010c1f6cc0(puVar3);
              func_0x00010c19f6e0(puVar3,param_2,uVar11);
              func_0x00010befa120(ppuVar5,param_2,puVar3);
              _objc_release(lVar4);
              _objc_release(puVar3);
              lVar12 = lVar12 + 1;
            } while (lVar2 != lVar12);
            lVar2 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar2 != 0);
        }
        _objc_release(lVar1);
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar8 != ppuStack_200);
      ppuStack_200 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (ppuStack_200 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar8 = param_3;
    func_0x00010b0ec840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010c08fa60();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = (undefined **)param_3[7];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      ppuVar5 = &PTR____CFConstantStringClassReference_110f13d78;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar5 = ppuVar6;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar6);
    }
    else {
      _objc_retain(ppuVar8);
      ppuVar5 = ppuVar8;
    }
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10aea75b4; end: 10aea765b; -[SCMixerRequestProvider _countryCode] */

void FUN_10aea75b4(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = param_1;
  func_0x00010b0ec840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = (undefined **)param_1[7];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f13d78;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar2 = ppuVar3;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar3);
  }
  else {
    _objc_retain(ppuVar1);
    ppuVar2 = ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10aea765c; end: 10aea767f; +[SCMixerRequestProvider _requestContextFromGroupId:] */

undefined4 FUN_10aea765c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xc) {
    return *(undefined4 *)(&UNK_10e532864 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10aea7680; end: 10aea76eb; -[SCMixerRequestProvider .cxx_destruct] */

void FUN_10aea7680(long param_1)

{
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



/* Entry: 10aea76ec; end: 10aea84ab; -[SCMixerResponseParser parsedMixerResponse:requestId:params:error:] */

void FUN_10aea76ec(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puStack_348;
  ulong uStack_2a8;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_270;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    puVar27 = PTR_PTR_1126de588;
    _objc_opt_class(PTR_PTR_1126de588);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar27);
    if ((uVar1 & 1) != 0) {
      func_0x00010c0d54a0(param_3);
      uVar1 = param_3;
      func_0x00010c0d54a0();
      puStack_348 = PTR____NSArray0__struct_11034ab48;
      if (uVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bf5e5e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126de478;
        func_0x00010be4f700();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c098340();
        puVar27 = PTR_PTR_1126de478;
        if (uVar1 == 0) {
          puVar27 = (undefined *)0x0;
        }
        else {
          uVar1 = param_3;
          func_0x00010c098320(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be4b340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar1);
        }
        uVar1 = param_3;
        func_0x00010bf5ce20();
        puVar24 = PTR_PTR_1126de478;
        if (uVar1 == 0) {
          puVar24 = (undefined *)0x0;
        }
        else {
          uVar1 = param_3;
          func_0x00010bf5ce00(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdf63c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
        }
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010bf529e0(puVar27);
        func_0x00010bf529e0(puVar24);
        func_0x00010c225ec0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar27 != (undefined *)0x0) {
          puVar6 = puVar27;
          func_0x00010bf002e0(puVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5);
          _objc_release(puVar6);
        }
        if (puVar24 != (undefined *)0x0) {
          puVar6 = puVar24;
          func_0x00010bf002e0(puVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5);
          _objc_release(puVar6);
        }
        lVar25 = param_5;
        func_0x00010bf27360();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar25;
        func_0x00010bfb2660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar25);
        puVar8 = PTR_PTR_1126de478;
        func_0x00010be46280();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010c0d54a0(param_3);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf65600(0x412a5e0000000000);
        _objc_retainAutoreleasedReturnValue();
        lStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        plStack_140 = (long *)0x0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uVar1 = param_3;
        func_0x00010c0d5480();
        _objc_retainAutoreleasedReturnValue();
        uStack_2a8 = uVar1;
        func_0x00010bf52a60();
        if (uStack_2a8 != 0) {
          lVar25 = *plStack_140;
          do {
            uVar26 = 0;
            do {
              if (*plStack_140 != lVar25) {
                _objc_enumerationMutation(uVar1);
              }
              puVar28 = *(undefined **)(lStack_148 + uVar26 * 8);
              puVar12 = puVar28;
              func_0x00010c0d54e0();
              _objc_retainAutoreleasedReturnValue();
              puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c078d80();
              if ((int)puVar29 != 0) {
                uStack_170 = 0;
                uStack_160 = 0x2020000000;
                uStack_158 = 0;
                uStack_198 = 0;
                uStack_190 = 0;
                uStack_180 = 0x2020000000;
                uStack_178 = 0;
                uStack_1b0 = 0;
                uStack_1a0 = 0x2020000000;
                uStack_1d0 = 0;
                uStack_1c0 = 0x2020000000;
                uStack_1b8 = 0;
                puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                puStack_1c8 = &uStack_1d0;
                puStack_1a8 = &uStack_1b0;
                puStack_188 = &uStack_190;
                puStack_168 = &uStack_170;
                func_0x00010c1607a0();
                _objc_retainAutoreleasedReturnValue();
                puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_250 = 0xc2000000;
                pcStack_248 = FUN_10aea8574;
                puStack_240 = &UNK_110c8e310;
                _objc_retain(puVar27);
                puStack_238 = puVar27;
                puStack_1f0 = &uStack_170;
                _objc_retain(puVar5);
                puStack_230 = puVar5;
                _objc_retain(puVar9);
                puStack_228 = puVar9;
                _objc_retain(puVar13);
                puStack_220 = puVar13;
                puStack_1e8 = &uStack_1d0;
                _objc_retain(puVar12);
                puStack_218 = puVar12;
                _objc_retain(puVar11);
                puStack_210 = puVar11;
                lStack_208 = param_1;
                puStack_1e0 = &uStack_190;
                _objc_retain(puVar24);
                puStack_200 = puVar24;
                _objc_retain(puVar10);
                ppuVar14 = &puStack_258;
                puStack_1f8 = puVar10;
                puStack_1d8 = &uStack_1b0;
                _objc_retainBlock();
                puVar29 = puVar28;
                func_0x00010c13cf40();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar29;
                func_0x00010bf43280();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar29);
                puVar29 = puVar28;
                func_0x00010c1060e0();
                _objc_retainAutoreleasedReturnValue();
                puStack_280 = puVar29;
                func_0x00010bf43280();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar29);
                func_0x00010bf529e0();
                func_0x00010bf529e0();
                puVar16 = puVar28;
                func_0x00010c095880();
                puVar29 = PTR_PTR_1126de478;
                if (puVar16 == (undefined *)0x0) {
                  puVar29 = (undefined *)0x0;
                }
                else {
                  puVar16 = puVar28;
                  func_0x00010c095860(puVar28);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010be63e40(puVar29);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar16);
                }
                puVar16 = puVar28;
                func_0x00010bfd9260();
                if ((int)puVar16 == 0) {
                  puStack_290 = (undefined *)0x0;
                }
                else {
                  puVar16 = puVar28;
                  func_0x00010c0cf060();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_290 = puVar16;
                  func_0x00010bfe2ee0();
                  puVar17 = puVar16;
                  func_0x00010c0b5940(puVar16);
                  func_0x000107c30948(puStack_290,puVar17);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar16);
                }
                puVar16 = puVar28;
                func_0x00010c0f2820();
                _objc_retainAutoreleasedReturnValue();
                puVar17 = puVar16;
                func_0x00010c08fa60();
                _objc_release(puVar16);
                if (puVar17 == (undefined *)0x0) {
                  puStack_288 = (undefined *)0x0;
                }
                else {
                  puStack_288 = puVar28;
                  func_0x00010c0f2820();
                  _objc_retainAutoreleasedReturnValue();
                }
                puVar16 = puVar28;
                func_0x00010c0f2800();
                if ((int)puVar16 != 0) {
                  func_0x00010c0f2800(puVar28);
                }
                puStack_270 = PTR_PTR_1126de478;
                lVar18 = param_5;
                func_0x00010c135ee0(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be61ee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar18);
                if (puStack_270 == (undefined *)0x0) {
                  puStack_270 = PTR_PTR_1126b6868;
                  _objc_alloc();
                  func_0x00010c02dd60();
                }
                puVar17 = PTR_PTR_1126de5a8;
                _objc_alloc();
                lVar18 = param_5;
                func_0x00010bf4f820(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfff1e0();
                _objc_release(lVar18);
                puVar16 = PTR_PTR_1126de478;
                lVar18 = param_5;
                func_0x00010bf27360(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be61de0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar18);
                lVar18 = param_5;
                func_0x00010c28d880();
                if (lVar18 == 3) {
                  puVar19 = puVar16;
                  func_0x00010c0da7c0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar23 = PTR____NSArray0__struct_11034ab48;
                  if (puVar19 != (undefined *)0x0) {
                    puVar23 = puVar19;
                  }
                  _objc_retain(puVar23);
                  _objc_release(puVar19);
                  puVar19 = puVar23;
                  func_0x00010bf09f80(puVar23);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar29);
                  puVar20 = puVar16;
                  func_0x00010bef09a0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar29 = PTR____NSArray0__struct_11034ab48;
                  if (puVar20 != (undefined *)0x0) {
                    puVar29 = puVar20;
                  }
                  _objc_retain(puVar29);
                  _objc_release(puVar20);
                  puVar21 = puVar16;
                  func_0x00010c105c40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = PTR____NSArray0__struct_11034ab48;
                  if (puVar21 != (undefined *)0x0) {
                    puVar20 = puVar21;
                  }
                  _objc_retain(puVar20);
                  _objc_release(puVar21);
                  puVar21 = puVar29;
                  func_0x00010bf09f80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar15);
                  puVar15 = puVar20;
                  func_0x00010bf09f80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puStack_280);
                  func_0x00010bf529e0();
                  func_0x00010bf529e0();
                  _objc_release(puVar20);
                  _objc_release(puVar29);
                  _objc_release(puVar23);
                  puStack_280 = puVar15;
                  puVar15 = puVar21;
                  puVar29 = puVar19;
                }
                lVar22 = *(long *)(param_1 + 0x18);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lVar22;
                func_0x00010c0c2520();
                _objc_release(lVar22);
                if (lVar18 != 0) {
                  func_0x00010bf529e0(puVar15);
                  func_0x00010bf529e0(puStack_280);
                  func_0x00010bf529e0(puVar29);
                  puVar23 = puVar15;
                  func_0x00010c099060(puVar15);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar15);
                  puVar19 = puStack_280;
                  func_0x00010c099060();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puStack_280);
                  puVar20 = puVar29;
                  func_0x00010c099060(puVar29);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar29);
                  func_0x00010bf529e0(puVar23);
                  func_0x00010bf529e0(puVar19);
                  func_0x00010bf529e0(puVar20);
                  puVar15 = puVar23;
                  puVar29 = puVar20;
                  puStack_280 = puVar19;
                }
                puVar19 = PTR_PTR_1126de5b0;
                _objc_alloc();
                puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010bf26d40(puVar28);
                func_0x00010c0df880(puVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf93ca0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c041be0();
                _objc_release(puVar28);
                _objc_release(puVar23);
                func_0x00010c28d880(param_5);
                puVar28 = puVar16;
                func_0x00010bef09a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf529e0();
                puVar23 = puVar16;
                func_0x00010c105c40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf529e0();
                _objc_release(puVar23);
                _objc_release(puVar28);
                puVar28 = PTR_PTR_1126de5c0;
                _objc_alloc();
                func_0x00010bf529e0();
                func_0x00010c02dca0();
                puVar23 = PTR_PTR_1126de5c8;
                _objc_alloc(PTR_PTR_1126de5c8);
                puVar20 = puVar13;
                func_0x00010bf51e00(puVar13);
                func_0x00010c01e880(puVar23);
                _objc_release(puVar20);
                func_0x00010befa120(puVar6);
                _objc_release(puVar23);
                _objc_release(puVar28);
                _objc_release(puVar19);
                _objc_release(puVar16);
                _objc_release(puVar17);
                _objc_release(puStack_270);
                _objc_release(puStack_288);
                _objc_release(puStack_290);
                _objc_release(puVar29);
                _objc_release(puStack_280);
                _objc_release(puVar15);
                _objc_release(ppuVar14);
                _objc_release(puStack_1f8);
                _objc_release(puStack_200);
                _objc_release(puStack_210);
                _objc_release(puStack_218);
                _objc_release(puStack_220);
                _objc_release(puStack_228);
                _objc_release(puStack_230);
                _objc_release(puStack_238);
                _objc_release(puVar13);
                __Block_object_dispose(&uStack_1d0,8);
                __Block_object_dispose(&uStack_1b0,8);
                __Block_object_dispose(&uStack_190,8);
                __Block_object_dispose(&uStack_170,8);
              }
              _objc_release(puVar12);
              uVar26 = uVar26 + 1;
            } while (uStack_2a8 != uVar26);
            uStack_2a8 = uVar1;
            func_0x00010bf52a60();
          } while (uStack_2a8 != 0);
        }
        _objc_release(uVar1);
        puStack_348 = puVar6;
        func_0x00010bf51e00();
        _objc_release(puVar11);
        _objc_release(puVar6);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(lVar7);
        _objc_release(puVar5);
        _objc_release(puVar24);
        _objc_release(puVar27);
        _objc_release(puVar3);
        _objc_release(uVar2);
      }
      goto LAB_10aea83a8;
    }
  }
  if (param_6 == (undefined8 *)0x0) {
    puStack_348 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99440();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puStack_348 = (undefined *)0x0;
    *param_6 = puVar27;
  }
LAB_10aea83a8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1d0,8);
    __Block_object_dispose(&uStack_1b0,8);
    __Block_object_dispose(&uStack_190,8);
    puVar24 = (undefined *)0x8;
    __Block_object_dispose(&uStack_170);
    __Unwind_Resume(param_3);
    _objc_retain(puVar24);
    puVar3 = puVar24;
    func_0x00010bef09a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar27 = puVar3;
    }
    _objc_retain(puVar27);
    _objc_release(puVar3);
    puVar3 = puVar24;
    func_0x00010c105c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_348 = puVar27;
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar24;
      func_0x00010c105c40(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f80(puVar27);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar27);
      _objc_release(puVar3);
    }
    _objc_release(puVar24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_348);
  return;
}



/* Entry: 10aea84ac; end: 10aea8573;  */

void FUN_10aea84ac(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010bef09a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c105c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = puVar1;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010c105c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aea8574; end: 10aea884b;  */

void FUN_10aea8574(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126de590;
  _objc_alloc(PTR_PTR_1126de590);
  uVar4 = param_2;
  func_0x00010bfe5ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b540(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      lVar6 = lVar3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(lVar6);
      lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 8);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
      goto LAB_10aea8690;
    }
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x60);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar7 = (undefined *)0x0;
        lVar3 = *(long *)(*(long *)(param_1 + 0x80) + 8);
        *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
        goto LAB_10aea8730;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 8);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x28));
    }
    puVar5 = PTR_PTR_1126de5a0;
    _objc_alloc(PTR_PTR_1126de5a0);
    uVar4 = param_2;
    func_0x00010bf38a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe040(puVar5);
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126de598;
    func_0x00010bf5cde0(PTR_PTR_1126de598);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 8);
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x28));
LAB_10aea8690:
    puVar5 = PTR_PTR_1126de478;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5fba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar7 = puVar5;
    func_0x00010c07bb00();
    if ((int)puVar7 != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 8);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    }
    puVar7 = PTR_PTR_1126de598;
    func_0x00010c098140(PTR_PTR_1126de598);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(lVar3);
LAB_10aea8730:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aea884c; end: 10aea88ef;  */

void FUN_10aea884c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  return;
}



/* Entry: 10aea88f0; end: 10aea8a73; -[SCMixerResponseParser parsedMixerFeeds:requestId:params:error:] */

void FUN_10aea88f0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
LAB_10aea89fc:
    if (param_6 != (undefined8 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99440();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar4 = (undefined *)0x0;
      *param_6 = puVar1;
      goto LAB_10aea8a3c;
    }
  }
  else {
    puVar1 = PTR_PTR_1126de588;
    _objc_opt_class(PTR_PTR_1126de588);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) goto LAB_10aea89fc;
    uVar2 = param_3;
    func_0x00010bfa4620();
    if (uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010bfa4600();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010bf529e0();
      if (uVar2 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        uVar2 = param_3;
        func_0x00010bfa4640(param_3);
        puVar4 = PTR_PTR_1126de5d8;
        _objc_alloc(PTR_PTR_1126de5d8);
        func_0x00010c012820((double)uVar2);
      }
      _objc_release(uVar3);
      goto LAB_10aea8a3c;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_10aea8a3c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aea8a74; end: 10aea8ba3;  */

void FUN_10aea8a74(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be45380();
  if (iVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126de5d0;
    _objc_alloc(PTR_PTR_1126de5d0);
    uVar2 = param_2;
    func_0x00010c0d54e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c121e80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be8e4e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bfe5b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf69d40(param_2);
    func_0x00010c02ddc0(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aea8ba4; end: 10aea8c37; +[SCMixerResponseParser _namespaceData:withNamespaceName:] */

void FUN_10aea8ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10aea8c38;
  puStack_30 = &UNK_110c8e370;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bfb2040(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10aea8c38; end: 10aea8c9f;  */

undefined8 FUN_10aea8c38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10aea8ca0; end: 10aea8d7b; +[SCMixerResponseParser _namespaceWithNamespaceId:namespaces:] */

void FUN_10aea8ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10aea8d34;
  puStack_30 = &UNK_110c8e3a0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2040(param_4,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10aea8d7c; end: 10aea8f97; +[SCMixerResponseParser _itemsMapFromMetadataItems:] */

void FUN_10aea8d7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(undefined8 *)(lVar11 * 8);
      _objc_retain(puVar3);
      _objc_retain(puVar2);
      func_0x00010c0bd220(uVar10);
      _objc_release(puVar2);
      _objc_release(puVar3);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126de478;
  _objc_retain(param_2);
  uVar10 = param_2;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be3c500(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10aea8f98; end: 10aea9067;  */

void FUN_10aea8f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126de478;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be3c500(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aea9068; end: 10aea9123;  */

void FUN_10aea9068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126de538;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094580(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126de478;
  uVar2 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3c500(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10aea9124; end: 10aea91cf; +[SCMixerResponseParser _insertItem:forId:checksum:intoMap:] */

void FUN_10aea9124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de590;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b540();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c1d0640(param_6,param_2,param_3,puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aea91d0; end: 10aea942f; +[SCMixerResponseParser _lensMapFromLensesChecksums:lensMapper:] */

void FUN_10aea91d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *unaff_x22;
  undefined1 *puVar15;
  undefined *unaff_x23;
  undefined *puVar16;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 uVar17;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *puVar18;
  undefined8 *unaff_x28;
  undefined *puVar19;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [128];
  long lStack_2e0;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_138 = param_4;
  _objc_retain(param_4);
  puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar14 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar16,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = &uStack_130;
  lVar14 = param_3;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    unaff_x28 = (undefined8 *)*puStack_120;
    do {
      param_4 = 0;
      do {
        if ((undefined8 *)*puStack_120 != unaff_x28) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_128 + param_4 * 8);
        puVar1 = unaff_x24;
        func_0x00010bfd84e0();
        puVar2 = PTR_PTR_1126de538;
        if ((int)puVar1 != 0) {
          puVar1 = unaff_x24;
          func_0x00010c08fb40(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar1;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar19;
          func_0x00010bfe5ea0();
          func_0x00010c094560(puVar2,param_2,puVar18);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar19);
          _objc_release(puVar1);
          unaff_x25 = unaff_x24;
          func_0x00010bf38a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = PTR_PTR_1126bbee8;
          _objc_alloc();
          func_0x00010c0259e0();
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = lStack_138;
          func_0x00010c095100(lStack_138,param_2,unaff_x24,unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x24);
          param_6 = puVar16;
          func_0x00010be3c500(PTR_PTR_1126de478,param_2,unaff_x27,puVar2,unaff_x25);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(puVar2);
          unaff_x23 = puVar2;
        }
        param_4 = param_4 + 1;
      } while (lVar14 != param_4);
      puVar7 = &uStack_130;
      lVar14 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = (undefined *)0x0;
    } while (lVar14 != 0);
  }
  _objc_release(param_3);
  _objc_release(lStack_138);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar10 = &uStack_270;
    pcStack_148 = FUN_10aea9430;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = unaff_x28;
    lStack_198 = unaff_x27;
    puStack_190 = unaff_x26;
    puStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    puStack_178 = unaff_x23;
    puStack_170 = unaff_x22;
    puStack_168 = puVar16;
    lStack_160 = param_4;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar3 = puVar7;
    func_0x00010bf529e0(puVar7);
    func_0x00010bf71fe0(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(puVar7);
    puVar12 = auStack_230;
    uVar13 = 0x10;
    puVar3 = puVar7;
    func_0x00010bf52a60();
    puVar2 = puVar16;
    if (puVar3 != (undefined8 *)0x0) {
      unaff_x27 = *plStack_260;
      do {
        unaff_x28 = (undefined8 *)0x0;
        do {
          if (*plStack_260 != unaff_x27) {
            _objc_enumerationMutation(puVar7);
          }
          unaff_x22 = *(undefined **)(lStack_268 + (long)unaff_x28 * 8);
          puVar2 = unaff_x22;
          func_0x00010bfd5f60();
          puVar16 = PTR_PTR_1126de478;
          if ((int)puVar2 != 0) {
            unaff_x24 = unaff_x22;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x22;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf38a80();
            _objc_retainAutoreleasedReturnValue();
            param_6 = puVar1;
            func_0x00010be3c500(puVar16,param_2,unaff_x24,unaff_x26,unaff_x22);
            _objc_release(unaff_x22);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            unaff_x23 = puVar16;
          }
          unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
        } while (puVar3 != unaff_x28);
        puVar12 = auStack_230;
        uVar13 = 0x10;
        puVar3 = puVar7;
        puVar10 = &uStack_270;
        func_0x00010bf52a60();
        puVar2 = (undefined *)0x0;
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puVar7);
    puVar3 = puVar7;
    _objc_release();
    puVar16 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      pcStack_278 = FUN_10aea9600;
      lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_2d0 = unaff_x28;
      lStack_2c8 = unaff_x27;
      puStack_2c0 = unaff_x26;
      puStack_2b8 = unaff_x25;
      puStack_2b0 = unaff_x24;
      puStack_2a8 = unaff_x23;
      puStack_2a0 = unaff_x22;
      puStack_298 = puVar2;
      puStack_290 = puVar1;
      puStack_288 = puVar7;
      ppuStack_280 = &puStack_150;
      _objc_retain(puVar10);
      _objc_retain(puVar12);
      _objc_retain(uVar13);
      _objc_retain(param_6);
      _objc_retain(param_7);
      puVar2 = PTR_PTR_1126b0820;
      func_0x00010c094120(PTR_PTR_1126b0820,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar12;
      func_0x00010bfdd8c0();
      if ((int)puVar4 != 0) {
        puVar4 = puVar12;
        func_0x00010c278f20(puVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_7;
        func_0x00010c095280(param_7,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bbb40(puVar2,param_2,uVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf328e0(puVar4);
        puVar7 = puVar3;
        func_0x00010be4c020(puVar3,param_2,puVar6);
        func_0x00010c2bbd20(puVar2,param_2,puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(puVar4);
      }
      puVar4 = puVar12;
      func_0x00010bfd5280();
      if ((int)puVar4 != 0) {
        puVar4 = puVar12;
        func_0x00010bf329c0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_7;
        func_0x00010bf329e0(param_7,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x00010c2aa340(puVar2,param_2,uVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar5);
      }
      puVar1 = PTR_PTR_1126de5e0;
      puVar4 = (undefined1 *)puVar10;
      func_0x00010c0953c0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0953e0(puVar1,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar12;
      func_0x00010c29c5c0(puVar12);
      func_0x00010c2bc880(puVar1,param_2,puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      plStack_390 = (long *)0x0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      puVar6 = puVar12;
      func_0x00010c090280();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = auStack_360;
      puVar8 = puVar6;
      func_0x00010bf52a60();
      if (puVar8 != (undefined1 *)0x0) {
        lVar14 = *plStack_390;
        do {
          puVar15 = (undefined1 *)0x0;
          do {
            if (*plStack_390 != lVar14) {
              _objc_enumerationMutation(puVar6);
            }
            uVar17 = *(undefined8 *)(lStack_398 + (long)puVar15 * 8);
            uVar5 = uVar17;
            func_0x00010bf153e0();
            puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)uVar5 == 2) {
              func_0x00010c292160(uVar17);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar17;
              func_0x00010bfb8680();
              func_0x00010c0df760(puVar19,param_2,uVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar17);
              _objc_release(puVar6);
              if (puVar19 == (undefined *)0x0) {
                puVar18 = (undefined *)0x0;
              }
              else {
                puVar18 = PTR_PTR_1126de5e8;
                _objc_alloc(PTR_PTR_1126de5e8);
                func_0x00010c015880();
              }
              goto LAB_10aea98ec;
            }
            puVar15 = puVar15 + 1;
          } while (puVar8 != puVar15);
          puVar4 = auStack_360;
          puVar8 = puVar6;
          func_0x00010bf52a60(puVar6,param_2,&uStack_3a0,puVar4,0x10);
        } while (puVar8 != (undefined1 *)0x0);
      }
      _objc_release(puVar6);
      puVar18 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
LAB_10aea98ec:
      func_0x00010c2a9160(puVar1,param_2,puVar18);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c1074e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4b8c0(puVar3,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010c2b5ac0(puVar2,param_2,puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b44a0(puVar2,param_2,uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ad7e0(puVar2,param_2,param_6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c2b2a60(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar16 = puVar2;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar18);
      _objc_release(puVar19);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(uVar13);
      _objc_release(puVar12);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e0) {
        ___stack_chk_fail();
        _objc_retain(puVar11);
        _objc_retain(puVar4);
        puVar16 = puVar11;
        func_0x00010bfd70c0();
        if ((int)puVar16 == 0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar2 = puVar11;
          func_0x00010bfa8260(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar2;
          func_0x00010c153620();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be1c660(puVar10,param_2,puVar16);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          puVar16 = puVar2;
          func_0x00010c0d6ec0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar16;
          func_0x00010c0b8620();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          puVar16 = PTR_PTR_1126de5f0;
          _objc_alloc(PTR_PTR_1126de5f0);
          puVar19 = puVar2;
          func_0x00010bf26d40(puVar2);
          func_0x00010c042900(puVar16,param_2,puVar10,puVar1,puVar19,puVar4);
          _objc_release(puVar1);
          _objc_release(puVar10);
          _objc_release(puVar2);
        }
        _objc_release(puVar4);
        _objc_release(puVar11);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10aea9430; end: 10aea95ff; +[SCMixerResponseParser _ctItemsMapFromCTItemsChecksum:] */

void FUN_10aea9430(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 unaff_x21;
  long lVar13;
  undefined8 unaff_x22;
  undefined1 *puVar14;
  undefined *unaff_x23;
  undefined *puVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar16;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined *puVar17;
  long unaff_x28;
  undefined *puVar18;
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
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar15,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar11 = auStack_f0;
  uVar12 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
        uVar12 = unaff_x22;
        func_0x00010bfd5f60();
        puVar2 = PTR_PTR_1126de478;
        if ((int)uVar12 != 0) {
          unaff_x24 = unaff_x22;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x22;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf38a80();
          _objc_retainAutoreleasedReturnValue();
          param_6 = puVar15;
          func_0x00010be3c500(puVar2,param_2,unaff_x24,unaff_x26,unaff_x22);
          _objc_release(unaff_x22);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          unaff_x23 = puVar2;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar1 != unaff_x28);
      puVar11 = auStack_f0;
      uVar12 = 0x10;
      lVar1 = param_3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10aea9600;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    uStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    puStack_150 = puVar15;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    _objc_retain(puVar11);
    _objc_retain(uVar12);
    _objc_retain(param_6);
    _objc_retain(param_7);
    puVar2 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010bfdd8c0();
    if ((int)puVar3 != 0) {
      puVar3 = puVar11;
      func_0x00010c278f20(puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_7;
      func_0x00010c095280(param_7,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bbb40(puVar2,param_2,uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf328e0(puVar3);
      lVar13 = lVar1;
      func_0x00010be4c020(lVar1,param_2,puVar5);
      func_0x00010c2bbd20(puVar2,param_2,lVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
    puVar3 = puVar11;
    func_0x00010bfd5280();
    if ((int)puVar3 != 0) {
      puVar3 = puVar11;
      func_0x00010bf329c0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_7;
      func_0x00010bf329e0(param_7,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c2aa340(puVar2,param_2,uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    puVar6 = PTR_PTR_1126de5e0;
    puVar3 = (undefined1 *)puVar9;
    func_0x00010c0953c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0953e0(puVar6,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar11;
    func_0x00010c29c5c0(puVar11);
    func_0x00010c2bc880(puVar6,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar5 = puVar11;
    func_0x00010c090280();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_220;
    puVar7 = puVar5;
    func_0x00010bf52a60();
    if (puVar7 != (undefined1 *)0x0) {
      lVar13 = *plStack_250;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar13) {
            _objc_enumerationMutation(puVar5);
          }
          uVar16 = *(undefined8 *)(lStack_258 + (long)puVar14 * 8);
          uVar4 = uVar16;
          func_0x00010bf153e0();
          puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)uVar4 == 2) {
            func_0x00010c292160(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar16;
            func_0x00010bfb8680();
            func_0x00010c0df760(puVar18,param_2,uVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar16);
            _objc_release(puVar5);
            if (puVar18 == (undefined *)0x0) {
              puVar17 = (undefined *)0x0;
            }
            else {
              puVar17 = PTR_PTR_1126de5e8;
              _objc_alloc(PTR_PTR_1126de5e8);
              func_0x00010c015880();
            }
            goto LAB_10aea98ec;
          }
          puVar14 = puVar14 + 1;
        } while (puVar7 != puVar14);
        puVar3 = auStack_220;
        puVar7 = puVar5;
        func_0x00010bf52a60(puVar5,param_2,&uStack_260,puVar3,0x10);
      } while (puVar7 != (undefined1 *)0x0);
    }
    _objc_release(puVar5);
    puVar17 = (undefined *)0x0;
    puVar18 = (undefined *)0x0;
LAB_10aea98ec:
    func_0x00010c2a9160(puVar6,param_2,puVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    func_0x00010c1074e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4b8c0(lVar1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c2b5ac0(puVar2,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b44a0(puVar2,param_2,uVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ad7e0(puVar2,param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c2b2a60(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar8);
    _objc_release(puVar17);
    _objc_release(puVar18);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      _objc_retain(puVar10);
      _objc_retain(puVar3);
      puVar15 = puVar10;
      func_0x00010bfd70c0();
      if ((int)puVar15 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar2 = puVar10;
        func_0x00010bfa8260(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar2;
        func_0x00010c153620();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1c660(puVar9,param_2,puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar15 = puVar2;
        func_0x00010c0d6ec0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar15;
        func_0x00010c0b8620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar15 = PTR_PTR_1126de5f0;
        _objc_alloc(PTR_PTR_1126de5f0);
        puVar18 = puVar2;
        func_0x00010bf26d40(puVar2);
        func_0x00010c042900(puVar15,param_2,puVar9,puVar6,puVar18,puVar3);
        _objc_release(puVar6);
        _objc_release(puVar9);
        _objc_release(puVar2);
      }
      _objc_release(puVar3);
      _objc_release(puVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10aea9600; end: 10aea9a43; +[SCMixerResponseParser _mergedLensMetadata:mixerResult:namespaceId:expirationDate:lensSnapchatMapper:] */

void FUN_10aea9600(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bfdd8c0();
  if ((int)lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c278f20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_7;
    func_0x00010c095280(param_7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbb40(puVar1,param_2,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf328e0(lVar2);
    uVar12 = param_1;
    func_0x00010be4c020(param_1,param_2,lVar4);
    func_0x00010c2bbd20(puVar1,param_2,uVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bfd5280();
  if ((int)lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bf329c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_7;
    func_0x00010bf329e0(param_7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c2aa340(puVar1,param_2,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  puVar5 = PTR_PTR_1126de5e0;
  uVar3 = param_3;
  func_0x00010c0953c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0953e0(puVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar2 = param_4;
  func_0x00010c29c5c0(param_4);
  func_0x00010c2bc880(puVar5,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_4;
  func_0x00010c090280();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_f0;
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar12;
        func_0x00010bf153e0();
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar3 == 2) {
          func_0x00010c292160(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar12;
          func_0x00010bfb8680();
          func_0x00010c0df760(puVar14,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(lVar2);
          if (puVar14 == (undefined *)0x0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar13 = PTR_PTR_1126de5e8;
            _objc_alloc(PTR_PTR_1126de5e8);
            func_0x00010c015880();
          }
          goto LAB_10aea98ec;
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      puVar8 = auStack_f0;
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  puVar13 = (undefined *)0x0;
  puVar14 = (undefined *)0x0;
LAB_10aea98ec:
  func_0x00010c2a9160(puVar5,param_2,puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c1074e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4b8c0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c2b5ac0(puVar1,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b44a0(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad7e0(puVar1,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b2a60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    puVar1 = puVar7;
    func_0x00010bfd70c0();
    if ((int)puVar1 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar7;
      func_0x00010bfa8260(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c153620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1c660(param_3,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar1;
      func_0x00010c0d6ec0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      func_0x00010c0b8620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar11 = PTR_PTR_1126de5f0;
      _objc_alloc(PTR_PTR_1126de5f0);
      puVar5 = puVar1;
      func_0x00010bf26d40(puVar1);
      func_0x00010c042900(puVar11,param_2,param_3,puVar14,puVar5,puVar8);
      _objc_release(puVar14);
      _objc_release(param_3);
      _objc_release(puVar1);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10aea9a44; end: 10aea9bb3; +[SCMixerResponseParser _locationMetadataFromResponse:currentDate:] */

void FUN_10aea9a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfd70c0();
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bfa8260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c153620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1c660(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0d6ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126de5f0;
    _objc_alloc(PTR_PTR_1126de5f0);
    uVar2 = uVar1;
    func_0x00010bf26d40(uVar1);
    func_0x00010c042900(puVar4,param_2,param_1,uVar3,uVar2,param_4);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aea9bb4; end: 10aea9bbf;  */

void FUN_10aea9bb4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__geofenceFromLPGeofence__112564b88,param_2);
  return;
}



/* Entry: 10aea9bc0; end: 10aea9ca3; +[SCMixerResponseParser _geofenceFromLPGeofence:] */

void FUN_10aea9bc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfc14c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126de5f8;
    _objc_alloc(PTR_PTR_1126de5f8);
    lVar1 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_release(param_3);
    func_0x00010c0178c0(puVar3,param_2,lVar1,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aea9ca4; end: 10aea9caf;  */

void FUN_10aea9ca4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__coordinateFromULCoordinate__112557fe8,param_2);
  return;
}



/* Entry: 10aea9cb0; end: 10aea9d63; +[SCMixerResponseParser _geoCircleFromGeoCircle:] */

void FUN_10aea9cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010bf345e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9920(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126de600;
    _objc_alloc(PTR_PTR_1126de600);
    func_0x00010c11ef60(param_4);
    _objc_release(param_4);
    func_0x00010bffd460(param_1,puVar2,param_3,param_2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aea9d64; end: 10aea9ddf; +[SCMixerResponseParser _coordinateFromULCoordinate:] */

void FUN_10aea9d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126de608;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010c08aca0(param_4);
    uVar2 = param_1;
    func_0x00010c09abe0(param_4);
    _objc_release(param_4);
    func_0x00010c021a60(param_1,uVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aea9de0; end: 10aea9ea7; +[SCMixerResponseParser _lensPrefetchContextsFromLPPrefetchContexts:] */

void FUN_10aea9de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c225ec0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10aea9ea8;
  puStack_30 = &UNK_110842ff8;
  puStack_28 = puVar3;
  _objc_retain();
  func_0x00010bf980c0(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea9ea8; end: 10aea9ecb;  */

void FUN_10aea9ea8(long param_1,int param_2)

{
  if (param_2 - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
               (&PTR_PTR_110c8e480)[param_2 - 1U]);
    return;
  }
  return;
}



/* Entry: 10aea9ecc; end: 10aea9eef; +[SCMixerResponseParser _lensTypeFromLensSource:] */

undefined8 FUN_10aea9ecc(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 4U < 0xb) {
    return *(undefined8 *)(&UNK_10e532898 + (ulong)(param_3 - 4U) * 8);
  }
  return 3;
}



/* Entry: 10aea9ef0; end: 10aea9f03; +[SCMixerResponseParser _noFillLensesFromNoFillLensArray:] */

void FUN_10aea9ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map_notFoundMarker__11260bba0,&PTR___NSConcreteGlobalBlock_110c8e460,0);
  return;
}



/* Entry: 10aea9f04; end: 10aea9ff7;  */

void FUN_10aea9f04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c15ed20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b70473c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf93980(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126de610;
  _objc_alloc(PTR_PTR_1126de610);
  func_0x00010bf32840(param_2);
  _objc_release(param_2);
  func_0x00010bffccc0(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aea9ff8; end: 10aeaa1c7; -[SCMixerResponseParser _renderStrategyFromSCGFeed:] */

void FUN_10aea9ff8(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  double dVar10;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfdb120();
  if ((int)uVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar1 = param_4;
    func_0x00010c130180();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126de618;
    _objc_alloc(PTR_PTR_1126de618);
    uVar2 = uVar1;
    func_0x00010c2480a0(uVar1);
    uVar3 = uVar1;
    func_0x00010c0ed100(uVar1);
    uVar4 = param_2;
    func_0x00010be6e580(param_2,param_3,uVar3);
    uVar3 = uVar1;
    func_0x00010c27dd80(uVar1);
    uVar5 = param_2;
    func_0x00010bde8100(param_2,param_3,uVar3);
    func_0x00010c0852a0(uVar1);
    dVar10 = (double)param_1;
    uVar3 = uVar1;
    func_0x00010c2902c0(uVar1);
    uVar6 = uVar1;
    func_0x00010c2902e0();
    uVar7 = uVar1;
    func_0x00010c097560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4bf00(param_2,param_3,uVar7);
    uVar8 = uVar1;
    func_0x00010bfd8740();
    if ((uVar8 & 1) == 0) {
      func_0x00010c04ad80(dVar10,0,puVar9,param_3,(long)(int)uVar2,uVar4,uVar5,uVar3,uVar6,param_2);
    }
    else {
      uVar8 = uVar1;
      func_0x00010c097560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26e960();
      func_0x00010c04ad80(dVar10,(double)param_1,puVar9,param_3,(long)(int)uVar2,uVar4,uVar5,uVar3,
                          uVar6 & 0xffffffff,param_2);
      _objc_release(uVar8);
    }
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10aeaa1c8; end: 10aeaa23f; -[SCMixerResponseParser _lensTileLayoutFromProtoPresentation:] */

undefined8 FUN_10aeaa1c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar2 = param_3, func_0x00010c097580(), (int)lVar2 == 1)) {
    lVar2 = param_3;
    func_0x00010c1062a0();
    iVar1 = (int)lVar2;
    if ((iVar1 != -0x4524111) && (iVar1 != 0)) {
      uVar3 = 1;
      if (iVar1 == 2) {
        uVar3 = 2;
      }
      goto LAB_10aeaa228;
    }
  }
  uVar3 = 0;
LAB_10aeaa228:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10aeaa240; end: 10aeaa24b; -[SCMixerResponseParser _orientationFromProtoOrientation:] */

bool FUN_10aeaa240(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 10aeaa24c; end: 10aeaa257; -[SCMixerResponseParser _contentTypeFromProtoType:] */

bool FUN_10aeaa24c(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 10aeaa258; end: 10aeaa2d3; -[SCMixerResponseParser _isValidFeed:] */

undefined * FUN_10aeaa258(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = param_3;
  func_0x00010c0d54e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    puVar2 = param_3;
    func_0x00010bfdb120(param_3);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10aeaa2d4; end: 10aeaa30f; -[SCMixerResponseParser .cxx_destruct] */

void FUN_10aeaa2d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeaa310; end: 10aeaa33b; +[SCLensIdMapper lensIdDataFromStringLensId:] */

void FUN_10aeaa310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0b4ca0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c094570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lensIdDataFromIntLensId__112602b68,param_3);
  return;
}



/* Entry: 10aeaa33c; end: 10aeaa373; +[SCLensIdMapper lensIdDataFromIntLensId:] */

void FUN_10aeaa33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,&uStack_18,8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeaa374; end: 10aeaa573; +[SCMixerLoggingHelper stringIdsFromItems:] */

void FUN_10aeaa374(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lVar8 * 8);
        _objc_retain(ppuVar3);
        _objc_retain(ppuVar3);
        func_0x00010c0bd220(uVar7);
        _objc_release(ppuVar3);
        _objc_release(ppuVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    ppuVar4 = ppuVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bdf8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10aeaa574; end: 10aeaa5b3;  */

void FUN_10aeaa574(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdf8600(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aeaa5b4; end: 10aeaa62f;  */

void FUN_10aeaa5b4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aeaa630; end: 10aeaa85b; +[SCMixerLoggingHelper _debugIdentifierForCTMetadataItem:] */

void FUN_10aeaa630(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf96ee0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = param_3;
  if ((int)puVar3 == 0x10) {
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bfad780();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfadea0();
    func_0x00010c0df880(puVar2,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f4b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)puVar3 != 0x17) {
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c271dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f4d8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10aeaa81c;
    }
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c119e40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010bf97a60();
    func_0x00010c0df760(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f498);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar7;
  }
  _objc_release(puVar2);
LAB_10aeaa81c:
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeaa85c; end: 10aeaa9ef; +[SCMixerUpdateStrategyMetadata updateStrategyFromNamespaceData:] */

void FUN_10aeaa85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126de620;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c14ffc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bef0bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar5 = param_3;
  func_0x00010c27d100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08a660(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bfa81c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0cf080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf4f820();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar11 = uVar10;
  func_0x00010c0f2920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041c00(puVar1,param_2,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeaa9f0; end: 10aeaaaaf;  */

void FUN_10aeaa9f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bf9c0(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aeaaab0; end: 10aeaaaf7;  */

void FUN_10aeaaab0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be57d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de3f8,PTR_s__logResponseEvent_requestedNames_1125738f8,param_4,param_2,
             param_3,param_5,param_6,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10aeaaaf8; end: 10aeaafc3; +[SCMixerBlizzardLogWorkflow _logResponseEvent:requestedNamespaces:requestParams:clientRequestId:feedData:blizzardLogger:] */

long FUN_10aeaaaf8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126de628;
  _objc_opt_new();
  func_0x00010c17d040();
  func_0x00010c20a3c0(puVar1);
  func_0x00010c28d880(param_5);
  func_0x00010c224840(puVar1);
  func_0x00010c0d53c0(param_5);
  func_0x00010c1cb0e0(puVar1);
  uVar11 = param_7;
  func_0x00010bfa45e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c1cfb00(puVar1);
  _objc_release(uVar11);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_3);
      }
      lVar3 = *(long *)(lVar10 * 8);
      func_0x00010c069460();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0cf080();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0f2920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar5 != 0) goto LAB_10aeaace0;
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
LAB_10aeaace0:
  _objc_release(param_3);
  func_0x00010c1a6480(puVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_4);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      lVar4 = param_3;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126de630;
      _objc_opt_new(PTR_PTR_1126de630);
      func_0x00010c0d53e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cb0c0(puVar7);
      _objc_release(uVar11);
      if (lVar4 == 0) {
        func_0x00010c20f900(puVar7);
        func_0x00010c1cfcc0(puVar7);
        func_0x00010c1cfe80(puVar7);
      }
      else {
        func_0x00010c20f900(puVar7);
        lVar5 = lVar4;
        func_0x00010c069460(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bef09a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c1cfcc0(puVar7);
        _objc_release(lVar3);
        _objc_release(lVar5);
        lVar5 = lVar4;
        func_0x00010c069460();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010c105c40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c1cfe80(puVar7);
        _objc_release(lVar3);
        _objc_release(lVar5);
      }
      func_0x00010befa120(puVar6);
      _objc_release(puVar7);
      _objc_release(lVar4);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  func_0x00010c1cb140(puVar1);
  uVar11 = param_8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar11);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c069460(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0d53e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0720c0(lVar8);
  _objc_release(uVar11);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(param_2);
  return lVar9;
}



/* Entry: 10aeaafc4; end: 10aeab06b;  */

undefined8 FUN_10aeaafc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c069460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d53e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10aeab06c; end: 10aeab337; +[SCMixerBlizzardLogWorkflow _logFailureEventWithRequestParams:error:clientRequestId:blizzardLogger:] */

void FUN_10aeab06c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126de628;
  _objc_opt_new(PTR_PTR_1126de628);
  func_0x00010c17d040();
  if (param_4 != 0) {
    func_0x00010bf3ec40(param_4);
  }
  func_0x00010c20a3c0(puVar2);
  func_0x00010c28d880(param_3);
  func_0x00010c224840(puVar2);
  func_0x00010c0d53c0(param_3);
  func_0x00010c1cb0e0(puVar2);
  func_0x00010c1cfb00(puVar2);
  func_0x00010c1a6480(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar3 = param_3;
  func_0x00010c135ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar5 = param_3;
  func_0x00010c135ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar9 = *(undefined8 *)(lVar8 * 8);
      puVar6 = PTR_PTR_1126de630;
      _objc_opt_new(PTR_PTR_1126de630);
      func_0x00010c0d53e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cb0c0(puVar6);
      _objc_release(uVar9);
      func_0x00010c20f900(puVar6);
      func_0x00010c1cfcc0(puVar6);
      func_0x00010c1cfe80(puVar6);
      func_0x00010befa120(puVar4);
      _objc_release(puVar6);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010c1cb140(puVar2);
  uVar9 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10aeab338; end: 10aeab367; -[SCMixerBlizzardLogWorkflow .cxx_destruct] */

void FUN_10aeab338(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeab368; end: 10aeab45b;  */

void FUN_10aeab368(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bf9c0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aeab45c; end: 10aeab4bf;  */

void FUN_10aeab45c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2c630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de3f0,PTR_s__handleMixerRequestNamespaces_re_112568b28,param_2,param_3,
             *(undefined8 *)(param_1 + 0x20),param_4,param_5,param_6);
  return;
}



/* Entry: 10aeab4c0; end: 10aeab73b; +[SCMixerLogWorkflow _handleMixerRequestNamespaces:requestParams:dataLogger:downloadBandwidthEstimation:downloadBandwidthClass:reachability:] */

void FUN_10aeab4c0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c0aa620(param_5);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10aeab73c;
  puStack_100 = &UNK_110842e18;
  _objc_retain(param_5);
  uStack_f8 = param_5;
  if (lRam00000001137edc20 != -1) {
    func_0x000107c27d9c(0x1137edc20,&puStack_118);
  }
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar5 == 0) {
LAB_10aeab6b4:
      _objc_release(param_3);
      _objc_release(uStack_f8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      uVar5 = param_3;
      FUN_10aee6fe0();
      if (0 < (long)uVar5) {
        dVar9 = (double)uVar5;
        dVar10 = dVar9 / -1000000.0;
        _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c0aa610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_3 + 0x20),PTR_s_logMixerAppStartDelta__112608390,
                   (long)((dVar9 + dVar10) * 1000.0));
        return;
      }
      return;
    }
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar6 = *(long *)(uVar8 * 8);
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08fa60();
      if (lVar7 == 0) {
        _objc_release(lVar6);
        goto LAB_10aeab6b4;
      }
      func_0x00010bdd80a0(param_1);
      func_0x00010c0aec20(param_5);
      _objc_release(lVar6);
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    uVar5 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10aeab73c; end: 10aeab7a7;  */

void FUN_10aeab73c(ulong param_1)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = param_1;
  FUN_10aee6fe0();
  if (0 < (long)uVar1) {
    dVar2 = (double)uVar1;
    dVar3 = dVar2 / -1000000.0;
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c0aa610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_logMixerAppStartDelta__112608390,
               (long)((dVar2 + dVar3) * 1000.0));
    return;
  }
  return;
}



/* Entry: 10aeab7a8; end: 10aeab8b7; +[SCMixerLogWorkflow _cachedItemsCountFromRequestParams:namespaceId:] */

long FUN_10aeab7a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bf27360(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aeab8b8;
  puStack_50 = &UNK_110c8e370;
  uStack_48 = param_4;
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfb2040(param_3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bef09a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = lVar1;
  func_0x00010c105c40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return lVar5 + lVar3;
}



/* Entry: 10aeab8b8; end: 10aeab923;  */

undefined8 FUN_10aeab8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10aeab924; end: 10aeabaef; +[SCMixerLogWorkflow _handleMixerResponse:requestParams:latency:dataLogger:] */

void FUN_10aeab924(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar6 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar8 = auStack_f8;
  uVar9 = 0x10;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar14 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = *(long *)(lStack_138 + lVar14 * 8);
        func_0x00010c13b9a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          func_0x00010c0aec40(param_6);
          lVar3 = lVar2;
          func_0x00010c0d5240(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0aec00(param_1,param_6);
          _objc_release(lVar3);
          func_0x00010c28d880();
          lVar3 = lVar2;
          func_0x00010c0d5240();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c072fe0(lVar2);
          func_0x00010c0aec60(param_6);
          _objc_release(lVar3);
        }
        _objc_release(lVar2);
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      puVar8 = auStack_f8;
      uVar9 = 0x10;
      lVar1 = param_4;
      puVar6 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  func_0x00010c28d880();
  dVar15 = 0.0;
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c135ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar13 = *(undefined8 *)((long)puVar10 * 8);
      func_0x00010bf3ec40();
      func_0x00010c28d880(puVar6);
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aec60(uVar9);
      _objc_release(uVar13);
      puVar10 = puVar10 + 1;
    } while (puVar5 != puVar10);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  dVar15 = dVar15 * -1000.0;
  _objc_release(uVar13);
  uVar11 = *(undefined8 *)((long)puVar6 + 0x20);
  func_0x00010c09eea0(param_3);
  _objc_release(param_3);
  func_0x00010bfe4080(uVar9);
  uVar13 = *(undefined8 *)((long)puVar6 + 0x28);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076e40();
  uVar7 = *(undefined8 *)((long)puVar6 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e960();
  func_0x00010c0aa640(dVar15,uVar11);
  _objc_release(uVar7);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 10aeabaf0; end: 10aeabc9b; +[SCMixerLogWorkflow _handleMixerFailureWithParams:error:dataLogger:] */

void FUN_10aeabaf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c28d880();
  dVar10 = 0.0;
  lVar2 = param_3;
  func_0x00010c135ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar9 = *(undefined8 *)(lVar7 * 8);
      func_0x00010bf3ec40();
      func_0x00010c28d880(param_3);
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aec60(param_5);
      _objc_release(uVar9);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar9 = param_2;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  dVar10 = dVar10 * -1000.0;
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c09eea0(param_2);
  _objc_release(param_2);
  func_0x00010bfe4080(uVar9);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076e40();
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e960();
  func_0x00010c0aa640(dVar10,uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 10aeabc9c; end: 10aeabdab;  */

void FUN_10aeabc9c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  param_1 = param_1 * -1000.0;
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c09eea0(param_3);
  _objc_release(param_3);
  func_0x00010bfe4080(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076e40();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e960();
  func_0x00010c0aa640(param_1,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeabdac; end: 10aeabde7; -[SCMixerLogWorkflow .cxx_destruct] */

void FUN_10aeabdac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeabde8; end: 10aeabdef; -[SCMixerNamespaceDataUpdater updateNamespaces:updateParameters:enableThrottling:] */

void FUN_10aeabde8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateNamespaces_updateParameter_11267f9f8);
  return;
}



/* Entry: 10aeabdf0; end: 10aeabee7; -[SCMixerNamespaceDataUpdater updateNamespaces:updateParameters:enableThrottling:groupId:] */

void FUN_10aeabdf0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                  long param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 != 0 || param_6 != 0) &&
     ((uVar2 = param_1, func_0x00010bdd2ea0(param_1,param_2,param_3,param_4,param_6), param_5 == 0
      || ((uVar2 & 1) == 0)))) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10aeabee8;
    puStack_68 = &UNK_11084d788;
    uStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    lStack_48 = param_6;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aeabee8; end: 10aeabef7;  */

void FUN_10aeabee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateNamespaces_updateParamete_1125949b8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10aeabef8; end: 10aeabfaf; -[SCMixerNamespaceDataUpdater isNamespaceDataUpdatedAfterLaunch:] */

undefined8 FUN_10aeabef8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4b900(uVar3,param_2,lVar2);
    _os_unfair_lock_unlock(param_1 + 0x40);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10aeabfb0; end: 10aeabfb7; -[SCMixerNamespaceDataUpdater _updateNamespaces:updateParameters:] */

void FUN_10aeabfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateNamespaces_updateParamete_1125949b8,param_3,param_4,0);
  return;
}



/* Entry: 10aeabfb8; end: 10aeac1db; -[SCMixerNamespaceDataUpdater _updateNamespaces:updateParameters:groupId:] */

void FUN_10aeabfb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0d52e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126de638;
  _objc_alloc(PTR_PTR_1126de638);
  uVar1 = param_4;
  func_0x00010bf4f820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d880(param_4);
  func_0x00010c03f4e0(puVar4);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa8d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aeac1dc; end: 10aeac357;  */

void FUN_10aeac1dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bfa39a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0cc7a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar6;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14a640();
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
    lVar5 = lVar1;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf43280(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be5d220(lVar3);
      _objc_release(uVar6);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14aa20();
      _objc_release(uVar6);
      func_0x00010be5d220(lVar3);
      func_0x00010be5d620(lVar3);
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aeac358; end: 10aeac35f;  */

void FUN_10aeac358(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_namespaceId_112612f10);
  return;
}



/* Entry: 10aeac360; end: 10aeac4df; -[SCMixerNamespaceDataUpdater _markNamespaceDataRetrieved:] */

void FUN_10aeac360(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_118 + lVar8 * 8);
        func_0x00010c14ffc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0d53e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (lVar3 != 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,lVar3);
        }
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x40);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x40);
  __Unwind_Resume(param_3);
  func_0x00010bf43280(puVar4,param_2,&PTR___NSConcreteGlobalBlock_110c8e668);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f2f4f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeac4e0; end: 10aeac577; -[SCMixerNamespaceDataUpdater _requestKeyForNamespaces:groupId:] */

void FUN_10aeac4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8e668);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f2f4f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeac578; end: 10aeac57f;  */

void FUN_10aeac578(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_namespaceId_112612f10);
  return;
}



/* Entry: 10aeac580; end: 10aeac643; -[SCMixerNamespaceDataUpdater _batchRequestIsInProgressAndMarkIfNeeded:updateParameters:groupId:] */

ulong FUN_10aeac580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar1 = param_1;
  func_0x00010be912c0(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf4b900(uVar2,param_2,lVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,lVar1);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x40);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10aeac644; end: 10aeac6cf; -[SCMixerNamespaceDataUpdater _markBatchRequestNotInProgress:groupId:] */

void FUN_10aeac644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar1 = param_1;
  func_0x00010be912c0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30),param_2,lVar1);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeac6d0; end: 10aeac73b; -[SCMixerNamespaceDataUpdater .cxx_destruct] */

void FUN_10aeac6d0(long param_1)

{
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



/* Entry: 10aeac73c; end: 10aeac827; -[SCMixerNamespaceService feedsObservable] */

void FUN_10aeac73c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10aeac7cc;
  puStack_30 = &UNK_11089afa0;
  puVar1 = PTR_PTR_1126ae6b8;
  uStack_28 = param_1;
  func_0x00010bf6ab80(PTR_PTR_1126ae6b8,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeac828; end: 10aeac8a7; -[SCMixerNamespaceService cachedMixerNamespaceData] */

void FUN_10aeac828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf273e0(uVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aeac8a8; end: 10aeac8fb; -[SCMixerNamespaceService cachedFeedData] */

void FUN_10aeac8a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27080(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


