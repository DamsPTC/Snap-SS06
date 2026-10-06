/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10546af80; end: 10546b19b; -[SCUnlockableAdTracker _handleNetworkResponse:responseData:request:trackType:] */

void FUN_10546af80(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar2 = PTR_PTR_1126afec0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf604e0(puVar2);
  puVar2 = PTR_PTR_1126afec0;
  dVar7 = param_1;
  func_0x00010bef4dc0(param_6);
  func_0x00010c0cd480(puVar2);
  uVar1 = param_6;
  func_0x00010bfc3140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c252ee0(param_4);
  uVar1 = param_6;
  func_0x00010bfcbc40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bef60a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1cbe0(param_2);
  func_0x00010c08fa60();
  _objc_release(uVar5);
  func_0x00010c08fa60();
  _objc_release(param_5);
  func_0x00010c1364a0(param_1 - dVar7,uVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c252ee0(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010bef60a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010be5a160(param_2);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10546b19c; end: 10546b2f3; -[SCUnlockableAdTracker _logUnlockableAdTrackStatusMetric:adType:trackType:] */

void FUN_10546b19c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c281500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110ddfd98,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c278a60(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24c78,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10546b2f4; end: 10546b317; -[SCUnlockableAdTracker trackTypeStringWithType:] */

undefined ** FUN_10546b2f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return (undefined **)(&PTR_PTR_11088b2a8)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110dcc2f8;
}



/* Entry: 10546b318; end: 10546b3cf; -[SCUnlockableAdTracker _logUnlockableAdTrackRawUserDataMetric:] */

void FUN_10546b318(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b93d0;
  func_0x00010bef5e80(PTR_PTR_1126b93d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c281080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10546b3d0; end: 10546b4bb; -[SCUnlockableAdTracker _submitTrackRequest:debugViewContext:successBlock:failureBlock:] */

void FUN_10546b3d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bfcbc40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010c0ae200(*(undefined8 *)(param_1 + 0x18),param_2,1,0,1,1);
  }
  else {
    func_0x00010c25ede0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_5,param_6);
    func_0x00010c1368e0(*(undefined8 *)(param_1 + 0x18),param_2,0,1,lVar1,0,param_4,1);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10546b4bc; end: 10546b4f3; -[SCUnlockableAdTracker _getAdProductTypeFromAdType:] */

undefined8 FUN_10546b4bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b8ca0;
  func_0x00010bef6100();
  uVar1 = 0x14;
  if (puVar3 != (undefined *)0xc) {
    uVar1 = 10;
  }
  uVar2 = 0x13;
  if (puVar3 != (undefined *)0xb) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10546b4f4; end: 10546b65f; -[SCUnlockableAdTracker _isInventorySpectrumMigrationApplicableWithInventoryType:] */

undefined * FUN_10546b4f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bef5ee0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar5 = lVar1;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar18 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar1);
        }
        uVar14 = *(ulong *)(lStack_128 + lVar18 * 8);
        puVar2 = param_3;
        func_0x000106bc2f14();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar14;
        puVar11 = (undefined8 *)puVar2;
        func_0x00010c0720c0();
        _objc_release(uVar14);
        _objc_release(puVar2);
        if ((uVar3 & 1) != 0) {
          puVar12 = (undefined *)0x1;
          goto LAB_10546b610;
        }
        lVar18 = lVar18 + 1;
      } while (lVar5 != lVar18);
      lVar5 = lVar1;
      puVar11 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  puVar12 = (undefined *)0x0;
LAB_10546b610:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar12;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = *(undefined **)(lVar1 + 0x20);
  _objc_retain(puVar11);
  func_0x00010c292860(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar12;
  func_0x00010bfcbcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b93c8;
  lVar5 = *(long *)(lVar1 + 0x50);
  if (lVar5 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13aee0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  uVar15 = *(undefined8 *)(lVar1 + 0x20);
  puVar2 = (undefined1 *)puVar11;
  func_0x00010c15e680(puVar11);
  uVar17 = *(undefined8 *)(lVar1 + 0x18);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)puVar11;
  func_0x000106bc22e4(puVar11,uVar15,puVar4,puVar2,uVar17,uVar6,uVar7,puVar12,uVar8,
                      *(undefined8 *)(lVar1 + 0x60),0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(lVar1 + 0x20);
  puVar2 = (undefined1 *)puVar11;
  func_0x00010c15e680(puVar11);
  uVar15 = *(undefined8 *)(lVar1 + 0x18);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined1 *)puVar11;
  func_0x000106bc22e4(puVar11,uVar8,puVar4,puVar2,uVar15,uVar6,uVar7,puVar12,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar13 = (undefined *)0x0;
  if ((puVar9 != (undefined1 *)0x0) && (puVar10 != (undefined1 *)0x0)) {
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be5a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar4;
}



/* Entry: 10546b660; end: 10546b8db; -[SCUnlockableAdTracker protoTrackRequestsForTrackInfo:] */

void FUN_10546b660(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c292860(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bfcbcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar9 = PTR_PTR_1126b93c8;
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13aee0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_3;
  func_0x00010c15e680(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x000106bc22e4(param_3,uVar11,uVar1,lVar2,uVar12,uVar8,uVar3,puVar9,uVar4,
                      *(undefined8 *)(param_1 + 0x60),0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_3;
  func_0x00010c15e680(param_3);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x000106bc22e4(param_3,uVar4,uVar1,lVar2,uVar11,uVar8,uVar3,puVar9,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar8);
  puVar10 = (undefined *)0x0;
  if ((lVar5 != 0) && (lVar6 != 0)) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar9);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be5a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10546b8dc; end: 10546b8df; -[SCUnlockableAdTracker logUnlockableAdTrackRawUserDataMetricWithFallbackToRawUserData:] */

void FUN_10546b8dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logUnlockableAdTrackRawUserData_1125741f0);
  return;
}



/* Entry: 10546b8e0; end: 10546b99f; -[SCUnlockableAdTracker .cxx_destruct] */

void FUN_10546b8e0(long param_1)

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



/* Entry: 10546b9a0; end: 10546ba03; -[SCAdHideInteractionHistoryTracker init] */

undefined1 * FUN_10546b9a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8580;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10546ba04; end: 10546babb; -[SCAdHideInteractionHistoryTracker hideAd:withReason:] */

void FUN_10546ba04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b93d8;
    _objc_alloc(PTR_PTR_1126b93d8);
    if (param_4 == 0) {
      param_4 = lVar1;
      func_0x00010bef2ba0(lVar1);
    }
    func_0x00010bff16a0(puVar2,param_2,1,param_4);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10546babc; end: 10546bac3; -[SCAdHideInteractionHistoryTracker adHideTrackInfoForAdIdentifier:] */

void FUN_10546babc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10546bac4; end: 10546bacf; -[SCAdHideInteractionHistoryTracker .cxx_destruct] */

void FUN_10546bac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10546bad0; end: 10546bbaf; -[SCAdLifecycleTimestampsTracker initWithAdConfigProvider:timeProvider:] */

undefined1 *
FUN_10546bad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8588;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10546bbb0; end: 10546bbd7; -[SCAdLifecycleTimestampsTracker adWebviewLifecycleEventObservable] */

void FUN_10546bbb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10546bbd8; end: 10546be67; -[SCAdLifecycleTimestampsTracker onLifecycleEvent:] */

void FUN_10546bbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010beec800(*(undefined8 *)(param_1 + 0x10));
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0c14e0(param_3);
  if ((*(byte *)(puStack_48 + 3) & 1) == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 10546be68; end: 10546bea7;  */

void FUN_10546be68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be6c5e0(*(undefined8 *)(param_1 + 0x30),uVar1,param_2,param_2,param_3);
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (byte)uVar1 ^ 1;
  return;
}



/* Entry: 10546bea8; end: 10546bebf;  */

void FUN_10546bea8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__onPageLoaded_snapIndex_timestam_1125783e8,param_2,param_3);
  return;
}



/* Entry: 10546bec0; end: 10546beff;  */

void FUN_10546bec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be68400(*(undefined8 *)(param_1 + 0x30),uVar1,param_2,param_2,param_3);
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (byte)uVar1 ^ 1;
  return;
}



/* Entry: 10546bf00; end: 10546bfc3;  */

void FUN_10546bf00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__onAttachmentPresented_snapIndex_112577908,param_2,param_3);
  return;
}



/* Entry: 10546bfc4; end: 10546c077;  */

void FUN_10546bfc4(double param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf8f2c0();
  _objc_release(uVar3);
  bVar1 = (byte)*(undefined8 *)(param_2 + 0x20);
  if ((int)uVar2 == 0) {
    param_1 = param_1 * 1000.0;
  }
  func_0x00010be69460(param_1);
  _objc_release(param_3);
  *(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = bVar1 ^ 1;
  return;
}



/* Entry: 10546c078; end: 10546c08f;  */

void FUN_10546c078(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__onExitAd_snapIndex_timestamp__112577de0,param_2,param_3);
  return;
}



/* Entry: 10546c090; end: 10546c153; -[SCAdLifecycleTimestampsTracker _onPageLoaded:snapIndex:timestamp:] */

bool FUN_10546c090(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d160();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2a8940(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c154; end: 10546c217; -[SCAdLifecycleTimestampsTracker _onClick:snapIndex:timestamp:] */

bool FUN_10546c154(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d540();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2a89c0(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c218; end: 10546c2db; -[SCAdLifecycleTimestampsTracker _onAttachmentPresented:snapIndex:timestamp:] */

bool FUN_10546c218(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ce80();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2a88e0(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c2dc; end: 10546c39f; -[SCAdLifecycleTimestampsTracker _onNavigationStart:snapIndex:timestamp:] */

bool FUN_10546c2dc(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6be0();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2b4520(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c3a0; end: 10546c463; -[SCAdLifecycleTimestampsTracker _onNavigationFinish:snapIndex:timestamp:] */

bool FUN_10546c3a0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d67c0();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2b4500(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c464; end: 10546c527; -[SCAdLifecycleTimestampsTracker _onDismiss:snapIndex:timestamp:] */

bool FUN_10546c464(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0cd80();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2a88a0(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c528; end: 10546c5eb; -[SCAdLifecycleTimestampsTracker _onView:snapIndex:timestamp:] */

bool FUN_10546c528(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274aa0();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2bb540(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c5ec; end: 10546c6af; -[SCAdLifecycleTimestampsTracker _onExitAd:snapIndex:timestamp:] */

bool FUN_10546c5ec(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274a00();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2bb500(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c6b0; end: 10546c773; -[SCAdLifecycleTimestampsTracker _onHtmlDownloaded:snapIndex:timestamp:] */

bool FUN_10546c6b0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe49a0();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2af8a0(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c774; end: 10546c837; -[SCAdLifecycleTimestampsTracker _onDomContentLoaded:snapIndex:timestamp:] */

bool FUN_10546c774(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf87c20();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2ac840(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c838; end: 10546c8fb; -[SCAdLifecycleTimestampsTracker _onPaint:snapIndex:timestamp:] */

bool FUN_10546c838(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2ac0();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2b54e0(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c8fc; end: 10546c9bf; -[SCAdLifecycleTimestampsTracker _onFullyLoaded:snapIndex:timestamp:] */

bool FUN_10546c8fc(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbbec0();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2ae9c0(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546c9c0; end: 10546ca83; -[SCAdLifecycleTimestampsTracker _onFirstGA:snapIndex:timestampMs:] */

bool FUN_10546c9c0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1460();
    _objc_release(uVar3);
    bVar1 = dVar4 == 0.0;
    if (bVar1) {
      func_0x00010c2ae2e0(param_1,param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10546ca84; end: 10546cb37; -[SCAdLifecycleTimestampsTracker onTopSnapPlaybackBegin:snapIndex:] */

void FUN_10546ca84(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010be20fc0(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274d40();
    _objc_release(uVar2);
    if (param_1 == 0.0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c2bb560(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10546cb38; end: 10546cc8f; -[SCAdLifecycleTimestampsTracker updateForAdIdentifier:adResponseParseCompleteTimestampInMillis:adInsertionTimestampInMillis:] */

void FUN_10546cb38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010c08fa60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar2 = *(long *)(param_3 + 0x18);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar2);
          }
          uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          func_0x00010c2a7c60(param_1,uVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2a7900(param_2,uVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar2;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    puVar5 = (undefined1 *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar1 = puVar5;
  func_0x00010c08fa60();
  if (puVar1 == (undefined1 *)0x0) {
    uVar7 = 0;
  }
  else {
    _os_unfair_lock_lock(param_5 + 0x28);
    uVar4 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x000100504554();
    _objc_release(uVar4);
    _os_unfair_lock_unlock(param_5 + 0x28);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10546cc90; end: 10546cd37; -[SCAdLifecycleTimestampsTracker adLifecycleTimestampsArrayForAdIdentifier:] */

void FUN_10546cc90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100504554();
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10546cd38; end: 10546cd3f;  */

void FUN_10546cd38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_build_1125a6180);
  return;
}



/* Entry: 10546cd40; end: 10546cdab; -[SCAdLifecycleTimestampsTracker adLifecycleTimestampsForAdIdentifier:snapIndex:] */

void FUN_10546cd40(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  func_0x00010bef3360();
  _objc_retainAutoreleasedReturnValue();
  if (((long)param_4 < 0) || (uVar1 = param_1, func_0x00010bf529e0(), uVar1 <= param_4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10546cdac; end: 10546ce0b; -[SCAdLifecycleTimestampsTracker resetForAdIdentifier:] */

void FUN_10546cdac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,0,param_3);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10546ce0c; end: 10546cf7b; -[SCAdLifecycleTimestampsTracker _getOrCreateAdLifecycleTimestampBuilderForAdIdentifier:snapIndex:] */

void FUN_10546ce0c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,param_3);
    _objc_release(puVar2);
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 <= param_4) {
    uVar3 = uVar1;
    func_0x00010bf529e0();
    puVar2 = PTR_PTR_1126b9308;
    for (; PTR_PTR_1126b9308 = puVar2, uVar3 <= param_4; uVar3 = uVar3 + 1) {
      _objc_opt_new(puVar2);
      func_0x00010befa120(uVar1,param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b9308;
    }
  }
  uVar3 = uVar1;
  func_0x00010bf529e0();
  uVar4 = uVar1;
  if (param_4 < uVar3) {
    func_0x00010c0dfd40(uVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10546cf7c; end: 10546cfc3; -[SCAdLifecycleTimestampsTracker .cxx_destruct] */

void FUN_10546cf7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10546cfc4; end: 10546d027; -[SCAdReportInteractionHistoryTrackerImpl init] */

undefined1 * FUN_10546cfc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8590;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10546d028; end: 10546d17b; -[SCAdReportInteractionHistoryTrackerImpl reportAd:adFlagged:adFlaggedReason:adFlaggedNote:] */

void FUN_10546d028(long param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_10546d0fc;
  lVar1 = *(long *)(param_1 + 8);
  if (param_4 == 0) {
    func_0x00010c12d3e0(lVar1,param_2,param_3);
    goto LAB_10546d0fc;
  }
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b93e0;
  _objc_alloc(PTR_PTR_1126b93e0);
  if (param_5 == 0) {
    lVar3 = lVar1;
    func_0x00010bef2a60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 0) goto LAB_10546d140;
LAB_10546d0b0:
    func_0x00010bff1680(puVar2,param_2,1,lVar3,param_6);
  }
  else {
    lVar3 = param_5;
    if (param_6 != 0) goto LAB_10546d0b0;
LAB_10546d140:
    lVar4 = lVar1;
    func_0x00010bef2a40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1680(puVar2,param_2,1,lVar3,lVar4);
    _objc_release(lVar4);
  }
  if (param_5 == 0) {
    _objc_release(lVar3);
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
LAB_10546d0fc:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10546d17c; end: 10546d183; -[SCAdReportInteractionHistoryTrackerImpl adReportTrackInfoForAdIdentifier:] */

void FUN_10546d17c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10546d184; end: 10546d18f; -[SCAdReportInteractionHistoryTrackerImpl .cxx_destruct] */

void FUN_10546d184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10546d190; end: 10546d217; -[SCSKOverlayParams key] */

void FUN_10546d190(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2415a0();
  uVar2 = uVar1;
  func_0x00010c25cde0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ddf938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10546d218; end: 10546d27b; -[SCSKOverlayTimestamps init] */

undefined1 * FUN_10546d218(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8598;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10546d27c; end: 10546d58b; -[SCSKOverlayTimestamps overlayAdTrackInfo] */

void FUN_10546d27c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar1 = param_2;
  func_0x00010bf79ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf79ee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720(param_1,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c108d00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c108d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720(param_1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf7a060();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf7a060(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720(param_1,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf76d60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf76d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720(param_1,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf990a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf990a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c0df720(param_1 * 1000.0,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010c29e560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed820();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b93e8;
  _objc_alloc(PTR_PTR_1126b93e8);
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038620(puVar4,param_3,puVar5,puVar6,puVar7,puVar8,param_2,puVar9,puVar3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10546d58c; end: 10546d593; -[SCSKOverlayTimestamps didRequestPreloadTs] */

undefined8 FUN_10546d58c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10546d594; end: 10546d5c3; -[SCSKOverlayTimestamps setDidRequestPreloadTs:] */

void FUN_10546d594(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10546d5c4; end: 10546d5cb; -[SCSKOverlayTimestamps preloadedTs] */

undefined8 FUN_10546d5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10546d5cc; end: 10546d5fb; -[SCSKOverlayTimestamps setPreloadedTs:] */

void FUN_10546d5cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10546d5fc; end: 10546d603; -[SCSKOverlayTimestamps didRequestTs] */

undefined8 FUN_10546d5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10546d604; end: 10546d633; -[SCSKOverlayTimestamps setDidRequestTs:] */

void FUN_10546d604(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10546d634; end: 10546d63b; -[SCSKOverlayTimestamps errorTs] */

undefined8 FUN_10546d634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10546d63c; end: 10546d66b; -[SCSKOverlayTimestamps setErrorTs:] */

void FUN_10546d63c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10546d66c; end: 10546d673; -[SCSKOverlayTimestamps didLoadTs] */

undefined8 FUN_10546d66c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10546d674; end: 10546d6a3; -[SCSKOverlayTimestamps setDidLoadTs:] */

void FUN_10546d674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546d6a4; end: 10546d6ab; -[SCSKOverlayTimestamps willStartPresentationTs] */

undefined8 FUN_10546d6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10546d6ac; end: 10546d6db; -[SCSKOverlayTimestamps setWillStartPresentationTs:] */

void FUN_10546d6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546d6dc; end: 10546d6e3; -[SCSKOverlayTimestamps didFinishPresentationTs] */

undefined8 FUN_10546d6dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10546d6e4; end: 10546d713; -[SCSKOverlayTimestamps setDidFinishPresentationTs:] */

void FUN_10546d6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546d714; end: 10546d71b; -[SCSKOverlayTimestamps willStartDismissalTs] */

undefined8 FUN_10546d714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10546d71c; end: 10546d74b; -[SCSKOverlayTimestamps setWillStartDismissalTs:] */

void FUN_10546d71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546d74c; end: 10546d753; -[SCSKOverlayTimestamps didFinishDismissalTs] */

undefined8 FUN_10546d74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10546d754; end: 10546d783; -[SCSKOverlayTimestamps setDidFinishDismissalTs:] */

void FUN_10546d754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546d784; end: 10546d78b; -[SCSKOverlayTimestamps viewTimeStopwatch] */

undefined8 FUN_10546d784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10546d78c; end: 10546d7bb; -[SCSKOverlayTimestamps setViewTimeStopwatch:] */

void FUN_10546d78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546d7bc; end: 10546d7c3; -[SCSKOverlayTimestamps error] */

undefined8 FUN_10546d7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10546d7c4; end: 10546d7f3; -[SCSKOverlayTimestamps setError:] */

void FUN_10546d7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546d7f4; end: 10546d88f; -[SCSKOverlayTimestamps .cxx_destruct] */

void FUN_10546d7f4(long param_1)

{
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



/* Entry: 10546d890; end: 10546dc6b; -[SCAdSKOverlayLifecycleTracker initWithOverlayLifecycleEvents:skAdNetworkMetricsManager:trackSeqNumProvider:applicationLifecycleEvents:application:adConfigProvider:mainQueuePerformer:timeProvider:] */

undefined8 *
FUN_10546d890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_80 = PTR_PTR_1126e85a0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = puVar1[1];
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10546dc6c;
    puStack_a0 = &UNK_11088b3d8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c2a6420(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10546dcb4;
    puStack_c8 = &UNK_110846510;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf75dc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 10546dc6c; end: 10546dd0b;  */

void FUN_10546dc6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a8a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10546dd0c; end: 10546df83; -[SCAdSKOverlayLifecycleTracker _onOverlayLifecycleEvent:] */

void FUN_10546dd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0efc40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c098cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10546df84;
  puStack_80 = &UNK_110848ba8;
  uStack_78 = param_1;
  uStack_70 = uVar2;
  _objc_retain(param_3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10546dfb4;
  puStack_b8 = &UNK_11088b408;
  uStack_b0 = param_1;
  uStack_a8 = uVar2;
  uStack_68 = param_3;
  _objc_retain(param_3);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10546e008;
  puStack_f0 = &UNK_11088b438;
  uStack_e8 = param_1;
  uStack_e0 = uVar2;
  uStack_a0 = param_3;
  _objc_retain(param_3);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x10546e038;
  puStack_128 = &UNK_11088b438;
  uStack_120 = param_1;
  uStack_118 = uVar2;
  uStack_d8 = param_3;
  _objc_retain(param_3);
  puStack_178 = puVar1;
  uStack_170 = 0xc2000000;
  uStack_168 = 0x10546e068;
  puStack_160 = &UNK_11088b438;
  uStack_158 = param_1;
  uStack_150 = uVar2;
  uStack_110 = param_3;
  _objc_retain(param_3);
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x10546e098;
  puStack_198 = &UNK_11088b438;
  uStack_190 = param_1;
  uStack_188 = uVar2;
  uStack_148 = param_3;
  _objc_retain(param_3);
  puStack_1e0 = puVar1;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_10546e0c8;
  puStack_1c8 = &UNK_110841f80;
  uStack_1c0 = param_1;
  uStack_180 = param_3;
  _objc_retain(param_3);
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x10546e0d8;
  puStack_1f8 = &UNK_110841f80;
  uStack_1f0 = param_1;
  uStack_1b8 = param_3;
  _objc_retain(param_3);
  puStack_240 = puVar1;
  uStack_238 = 0xc2000000;
  uStack_230 = 0x10546e0e8;
  puStack_228 = &UNK_110841f80;
  uStack_220 = param_1;
  uStack_218 = param_3;
  uStack_1e8 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bd680(uVar3,param_2,&puStack_98,&puStack_d0,&puStack_108,&puStack_140,&puStack_178,
                      &puStack_1b0,&puStack_1e0,&puStack_210,&puStack_240);
  _objc_release(uVar3);
  _objc_release(uStack_218);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1b8);
  _objc_release(uStack_180);
  _objc_release(uStack_148);
  _objc_release(uStack_110);
  _objc_release(uStack_d8);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10546df84; end: 10546dfb3;  */

void FUN_10546df84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c07aa40(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be68dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__onDidRequest_isPreload__112577d10,uVar2,uVar3)
  ;
  return;
}



/* Entry: 10546dfb4; end: 10546e007;  */

void FUN_10546dfb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c07aa40(uVar2);
  func_0x00010be68ca0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10546e008; end: 10546e0c7;  */

void FUN_10546e008(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c07aa40(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be6cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__onWillStartPresentation_isPrelo_112578c48,uVar2,uVar3);
  return;
}



/* Entry: 10546e0c8; end: 10546e0f3;  */

void FUN_10546e0c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onPreloaderEvent_eventType__112578510,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10546e0f4; end: 10546e23f; -[SCAdSKOverlayLifecycleTracker _onDidRequest:isPreload:] */

void FUN_10546e0f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar2 = *(undefined **)(param_2 + 0x38);
  uVar4 = param_4;
  func_0x00010c086560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar2,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b93f0;
    _objc_opt_new(PTR_PTR_1126b93f0);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_3,puVar2,uVar4);
    _objc_release(uVar4);
  }
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_5 == 0) {
    func_0x00010c18dbc0(puVar2,param_3,puVar1);
    uVar4 = 2;
  }
  else {
    func_0x00010c18dba0();
    uVar4 = 0;
  }
  _objc_release(puVar1);
  func_0x00010be082e0(param_1,param_2,param_3,uVar4,param_4,0);
  func_0x00010be58100(0,param_2,param_3,3,param_4,param_5,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10546e240; end: 10546e40b; -[SCAdSKOverlayLifecycleTracker _onDidFailToLoad:isPreload:error:] */

void FUN_10546e240(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c086560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
  uVar1 = uVar4;
  if (param_5 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d880(uVar4,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197360(uVar4,param_3,puVar2);
    _objc_release(puVar2);
    func_0x00010c196ee0(uVar4,param_3,param_6);
    func_0x00010be082e0(param_1,param_2,param_3,3,param_4,0);
    func_0x00010bf77be0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar3 = uVar4;
    dVar5 = param_1;
    func_0x00010bf7a060(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be58100(param_1 - dVar5,param_2,param_3,4,param_4,0,param_6);
    _objc_release(param_6);
  }
  else {
    dVar5 = param_1;
    func_0x00010bf79ee0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be58100(param_1 - dVar5,param_2,param_3,4,param_4,1,param_6);
    uVar3 = param_4;
    param_4 = param_6;
  }
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10546e40c; end: 10546e7ab; -[SCAdSKOverlayLifecycleTracker _emitSKOverlayTrackEvent:overlayParams:timestamp:error:] */

void FUN_10546e40c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec0c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_5;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c278840();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c29e180();
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bfa41e0();
    _objc_release(uVar6);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar8 = PTR_PTR_1126b9150;
    _objc_alloc(PTR_PTR_1126b9150);
    uVar6 = uVar2;
    func_0x00010c15ed20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bef2c20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_5;
    func_0x00010c2415a0();
    uVar12 = uVar2;
    func_0x00010bef60a0();
    uVar13 = uVar2;
    func_0x00010bef4240();
    puVar7 = PTR_PTR_1126b8cd8;
    func_0x00010bef4240(uVar2);
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b88f85c(param_1 * 1000.0,puVar8,puVar9,uVar3,uVar6,uVar10,0,uVar1,uVar4,uVar5,0,
                        uVar11,uVar12,0,0,uVar13,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar10);
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126b8ff0;
    _objc_alloc(PTR_PTR_1126b8ff0);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = param_5;
    func_0x00010c086560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c29e560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed820();
    func_0x00010b895e84(puVar7,puVar9,param_4,0,0);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    puVar14 = PTR_PTR_1126b8ff8;
    _objc_alloc(PTR_PTR_1126b8ff8);
    func_0x00010c000060();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar14);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10546e7ac; end: 10546e8b3; -[SCAdSKOverlayLifecycleTracker _logSKOverlayEvent:overlayParams:latency:preload:error:] */

void FUN_10546e7ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c2415a0(param_5);
  uVar2 = uVar1;
  func_0x00010bef52e0(uVar1,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0aeac0(param_1,uVar3,param_3,param_4,uVar1,uVar2,param_6,param_7);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10546e8b4; end: 10546ea67; -[SCAdSKOverlayLifecycleTracker _onWillStartPresentation:isPreload:] */

void FUN_10546e8b4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = param_4;
  func_0x00010c086560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  uVar4 = uVar5;
  if ((int)param_5 == 0) {
    func_0x00010c18d880(uVar5,param_3,puVar2);
    func_0x00010c225a80(uVar5,param_3,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = param_4;
    _objc_release(uVar3);
    uVar3 = uVar5;
    func_0x00010c2a6e60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be082e0(param_2,param_3,3,param_4,0);
    _objc_release(uVar3);
    func_0x00010bf77be0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar6 = param_1;
    func_0x00010bf7a060(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1e08e0();
    _objc_release(puVar2);
    func_0x00010c108d00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar6 = param_1;
    func_0x00010bf79ee0(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf885a0();
  func_0x00010be58100(param_1 - dVar6,param_2,param_3,4,param_4,param_5,0);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10546ea68; end: 10546ec07; -[SCAdSKOverlayLifecycleTracker _onDidFinishPresentation:isPreload:] */

void FUN_10546ea68(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (param_5 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(param_4);
    uVar1 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d740(uVar4,param_3,puVar2);
    _objc_release(puVar2);
    uVar1 = uVar4;
    func_0x00010c29e560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138160();
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf76d60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be082e0(param_2,param_3,4,param_4,0);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf76d60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar3 = uVar4;
    dVar5 = param_1;
    func_0x00010c2a6e60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be58100(param_1 - dVar5,param_2,param_3,6,param_4,0,0);
    _objc_release(param_4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_4);
    func_0x00010be58100(0,param_2,param_3,6,param_4,1,0);
    uVar4 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10546ec08; end: 10546ecbf; -[SCAdSKOverlayLifecycleTracker _onDismissalRequested:] */

void FUN_10546ec08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07aa40();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0efc40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec800(*(undefined8 *)(param_1 + 0x30));
    func_0x00010be082e0(param_1,param_2,5,uVar1,0);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c0efc40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c07aa40(param_3);
    func_0x00010be58100(0,param_1,param_2,2,uVar1,uVar2,0);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10546ecc0; end: 10546edef; -[SCAdSKOverlayLifecycleTracker _onWillStartDismissal:isPreload:] */

void FUN_10546ecc0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010be58100(0,param_1,param_2,7,param_3,param_4,0);
  if ((param_4 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beec800(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225a60(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    uVar1 = uVar3;
    func_0x00010c29e560(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010c2a6c60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be082e0(param_1,param_2,6,param_3,0);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10546edf0; end: 10546ef53; -[SCAdSKOverlayLifecycleTracker _onDidFinishDismissal:isPreload:] */

void FUN_10546edf0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
  if (param_5 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = param_4;
    dVar5 = param_1;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c2a6c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be58100(param_1 - dVar5,param_2,param_3,8,param_4,0,0);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d6a0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be58100(0,param_2,param_3,8,param_4,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10546ef54; end: 10546f02b; -[SCAdSKOverlayLifecycleTracker _onAppWillEnterForeground] */

void FUN_10546ef54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beec800(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d740(uVar4,param_2,puVar2);
    func_0x00010c18dbc0(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = uVar4;
    func_0x00010c29e560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24d960();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10546f02c; end: 10546f0af; -[SCAdSKOverlayLifecycleTracker _onAppDidEnterBackground] */

void FUN_10546f02c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c29e560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(uVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10546f0b0; end: 10546f133; -[SCAdSKOverlayLifecycleTracker _onPreloaderEvent:eventType:] */

void FUN_10546f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0efc40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c07aa40(param_3);
  _objc_release(param_3);
  func_0x00010be58100(0,param_1,param_2,param_4,uVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10546f134; end: 10546f1e3; -[SCAdSKOverlayLifecycleTracker didMoveToSnapWithSameOverlay:previousParams:] */

void FUN_10546f134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c086560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0640(uVar2,param_2,uVar3,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10546f1e4; end: 10546f26f; -[SCAdSKOverlayLifecycleTracker skOverlayAdTrackInfoForIdentifier:snapIndex:] */

void FUN_10546f1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c25cde0(param_3,param_2,&PTR____CFConstantStringClassReference_110ddf938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0ef4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10546f270; end: 10546f38b; -[SCAdSKOverlayLifecycleTracker resetForExitTracking:] */

void FUN_10546f270(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf07b60();
  if (lVar1 != 2) {
    uVar5 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uVar2 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar4,param_2,0,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar5 = uVar5 + 1;
        uVar2 = param_3;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf529e0();
        _objc_release(uVar2);
      } while (uVar5 < uVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10546f38c; end: 10546f393; -[SCAdSKOverlayLifecycleTracker streamsType] */

undefined8 FUN_10546f38c(void)

{
  return 3;
}



/* Entry: 10546f394; end: 10546f39b; -[SCAdSKOverlayLifecycleTracker adLifecycleEventObservableV2] */

undefined8 FUN_10546f394(void)

{
  return 0;
}



/* Entry: 10546f39c; end: 10546f3a3; -[SCAdSKOverlayLifecycleTracker adLifecycleEventObservable] */

undefined8 FUN_10546f39c(void)

{
  return 0;
}



/* Entry: 10546f3a4; end: 10546f3ab; -[SCAdSKOverlayLifecycleTracker adInteractionEventObservable] */

undefined8 FUN_10546f3a4(void)

{
  return 0;
}


