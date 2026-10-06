/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d15ff8; end: 104d16073;  */

void FUN_104d15ff8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d16074; end: 104d160d7; -[SCRegistrationBirthdayEntryPoint _shouldShowPrivacyPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d16074(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1127113e8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29c000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf602a0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 1;
}



/* Entry: 104d160d8; end: 104d161d3; -[SCRegistrationBirthdayEntryPoint _shouldShowKoreanUserConsentChecklist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d160d8(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + _DAT_1127113e8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c29c000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf602a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 1) {
    param_1 = param_1 + _DAT_112711410;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010c0d2660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c083f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      lVar2 = lVar4;
      func_0x00010bf32ee0(lVar4,param_2,&PTR____CFConstantStringClassReference_110dafdb8);
      bVar1 = lVar2 == 0;
    }
    _objc_release(lVar4);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104d161d4; end: 104d1628f; -[SCRegistrationBirthdayEntryPoint _createBirthdayLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d161d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af758;
  _objc_alloc(PTR_PTR_1126af758);
  lVar2 = param_1 + _DAT_1127113d8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112711414;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03dc60(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d16290; end: 104d16443; -[SCRegistrationBirthdayEntryPoint _registrationDatePicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16290(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_1127113f0;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010befe8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf653e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = (undefined *)(param_1 + lVar9);
  _objc_loadWeakRetained(puVar5);
  puVar6 = puVar5;
  func_0x00010befe8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf65560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (lVar4 == 2) {
    puVar5 = PTR_PTR_1126af770;
    _objc_opt_new(PTR_PTR_1126af770);
  }
  else if (lVar4 == 1) {
    puVar5 = PTR_PTR_1126af768;
    _objc_alloc(PTR_PTR_1126af768);
    func_0x00010c0095a0();
  }
  else if (lVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIDatePicker_1126af760;
    _objc_opt_new(PTR__OBJC_CLASS___UIDatePicker_1126af760);
    func_0x00010c189bc0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    func_0x00010c189a20(puVar5,param_2,puVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110dafdd8);
    _objc_release(puVar6);
    func_0x00010c1dff00(puVar5,param_2,1);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d16444; end: 104d1651f; -[SCRegistrationBirthdayEntryPoint _dateFormatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16444(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_1 = param_1 + _DAT_1127113f0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010befe8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf653e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c0b4aa0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  if (lVar3 == 1) {
    puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_alloc(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    func_0x00010bffabc0();
    func_0x00010c175640(puVar5,param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d16520; end: 104d166bb; -[SCRegistrationBirthdayEntryPoint declaredAgeCompletedWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16520(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271140c);
  _objc_retain(param_3);
  func_0x00010c12e1c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_112711404),param_2,0);
  lVar1 = param_3;
  func_0x00010c13ca20();
  _objc_release(param_3);
  if (lVar1 == 1) {
    lVar1 = param_1 + _DAT_1127113f0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010befe8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250340();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bde0e40(param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127113d4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ada20();
    _objc_release(uVar4);
    lVar1 = param_1 + _DAT_112711418;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf1cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1309c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_1127113e8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a660();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d166bc; end: 104d1676b; -[SCRegistrationBirthdayEntryPoint _clearScheduledIncompleteRegNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d166bc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127113e4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d1676c; end: 104d16797;  */

void FUN_104d1676c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d16798; end: 104d1687f; -[SCRegistrationBirthdayEntryPoint _clearScheduledIncompleteRegNotificationHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16798(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + _DAT_1127113f4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c09dc80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dafd18;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1a0(lVar2,param_2,puVar3,&PTR___NSConcreteGlobalBlock_11084ab38);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104d16880; end: 104d16883;  */

void FUN_104d16880(void)

{
  return;
}



/* Entry: 104d16884; end: 104d1698f; -[SCRegistrationBirthdayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16884(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271140c,0);
  _objc_destroyWeak(param_1 + _DAT_112711400);
  _objc_destroyWeak(param_1 + _DAT_1127113fc);
  _objc_destroyWeak(param_1 + _DAT_1127113f4);
  _objc_destroyWeak(param_1 + _DAT_1127113e0);
  _objc_destroyWeak(param_1 + _DAT_112711414);
  _objc_destroyWeak(param_1 + _DAT_112711410);
  _objc_destroyWeak(param_1 + _DAT_112711418);
  _objc_destroyWeak(param_1 + _DAT_1127113d8);
  _objc_destroyWeak(param_1 + _DAT_1127113f0);
  _objc_destroyWeak(param_1 + _DAT_112711408);
  _objc_destroyWeak(param_1 + _DAT_1127113ec);
  _objc_destroyWeak(param_1 + _DAT_1127113dc);
  _objc_destroyWeak(param_1 + _DAT_1127113e8);
  _objc_storeStrong(param_1 + _DAT_1127113d4,0);
  _objc_storeStrong(param_1 + _DAT_1127113e4,0);
  _objc_storeStrong(param_1 + _DAT_112711404,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127113f8,0);
  return;
}



/* Entry: 104d16990; end: 104d16a03;  */

void FUN_104d16990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25d780(uVar2,param_2,&PTR____CFConstantStringClassReference_110dafcd8,
                      &PTR____CFConstantStringClassReference_110dafd38,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136b8a50;
  uRam00000001136b8a50 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d16a04; end: 104d16a63;  */

void FUN_104d16a04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b900();
  uRam00000001136b8a41 = SUB81(puVar3,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d16a64; end: 104d16aef; -[SCDashedRegistrationDatePicker initWithDateAboveTheDash:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104d16a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3e18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271141c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d16af0; end: 104d16b6b; -[SCDashedRegistrationDatePicker setDate:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16af0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_112711420;
    if ((*(long *)(param_1 + lVar3) == 0) || (lVar1 = param_3, func_0x00010bf433a0(), lVar1 != 0)) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar2);
      func_0x00010be9d880(param_1,param_2,*(undefined8 *)(param_1 + lVar3),param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d16b6c; end: 104d16b73; -[SCDashedRegistrationDatePicker datePickerType] */

undefined8 FUN_104d16b6c(void)

{
  return 0;
}



/* Entry: 104d16b74; end: 104d16bab; -[SCDashedRegistrationDatePicker setMinimumDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711428);
  *(undefined8 *)(param_1 + _DAT_112711428) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d16bac; end: 104d16be3; -[SCDashedRegistrationDatePicker setMaximumDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711424);
  *(undefined8 *)(param_1 + _DAT_112711424) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d16be4; end: 104d16bf3; -[SCDashedRegistrationDatePicker numberOfComponentsInPickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271142c),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104d16bf4; end: 104d16c5f; -[SCDashedRegistrationDatePicker pickerView:numberOfRowsInComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d16bf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112711430);
  lVar1 = *(long *)(param_1 + _DAT_11271142c);
  func_0x00010c0dfd40(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (param_4 != lVar3) {
    lVar2 = lVar2 * 100;
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 104d16c60; end: 104d16d8b; -[SCDashedRegistrationDatePicker pickerView:titleForRow:forComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16c60(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11271142c;
  ppuVar1 = *(undefined ***)(param_1 + lVar7);
  func_0x00010c0dfd40(ppuVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c0dfd40(uVar2,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = param_4 / uVar3;
  }
  ppuVar4 = ppuVar1;
  func_0x00010c0dfd40(ppuVar1,param_2,param_4 - uVar5 * uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  uVar5 = param_1;
  func_0x00010be40040(param_1,param_2,ppuVar4);
  if ((uVar5 & 1) == 0) {
    if ((param_5 == *(long *)(param_1 + (long)_DAT_112711434)) ||
       (param_5 == *(long *)(param_1 + (long)_DAT_112711430))) {
      ppuVar1 = ppuVar4;
      func_0x00010c25d700(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = *(undefined ***)(param_1 + (long)_DAT_112711438);
      ppuVar6 = ppuVar4;
      func_0x00010c067fc0(ppuVar4);
      func_0x00010c0dfd40(ppuVar1,param_2,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dafe18;
  }
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104d16d8c; end: 104d16e6f; -[SCDashedRegistrationDatePicker pickerView:didSelectRow:inComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16d8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010be9dee0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112711434));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be9dee0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11271143c));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be9dee0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112711430));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdc95a0(param_1,param_2,lVar1,lVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112711420;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar4;
  _objc_release(uVar5);
  func_0x00010be9d880(param_1,param_2,*(undefined8 *)(param_1 + lVar6),0);
  func_0x00010c15b4c0(param_1,param_2,0x1000);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d16e70; end: 104d16fc7; -[SCDashedRegistrationDatePicker _adjustedDateWithDay:month:year:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d16e70(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bdd0040();
  if ((uVar1 & 1) != 0) {
    uVar4 = 0;
    goto LAB_104d16f94;
  }
  uVar2 = param_3;
  func_0x000106b90310(param_3,param_4,param_5);
  if ((int)uVar2 == 0) {
    uVar2 = param_4;
    func_0x000106b90418(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    uVar2 = param_3;
  }
  uVar1 = param_1;
  func_0x00010be1e6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (ulong *)(param_1 + (long)_DAT_112711428);
  if ((*puVar5 == 0) || (uVar4 = uVar1, func_0x00010bf433a0(), uVar4 != 0xffffffffffffffff)) {
    puVar5 = (ulong *)(param_1 + (long)_DAT_112711424);
    uVar4 = uVar1;
    if ((*puVar5 != 0) && (uVar3 = uVar1, func_0x00010bf433a0(), uVar3 == 1)) goto LAB_104d16f74;
  }
  else {
LAB_104d16f74:
    uVar4 = *puVar5;
    _objc_retain(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
LAB_104d16f94:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104d16fc8; end: 104d1700f; -[SCDashedRegistrationDatePicker pickerView:widthForComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d16fc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == *(long *)(param_1 + _DAT_112711434)) {
    return 0x4049000000000000;
  }
  uVar1 = 0x4064000000000000;
  if (param_4 != *(long *)(param_1 + _DAT_11271143c)) {
    uVar1 = 0x4059000000000000;
  }
  return uVar1;
}



/* Entry: 104d17010; end: 104d170e3; -[SCDashedRegistrationDatePicker setValue:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d17010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    puStack_38 = PTR_PTR_1126e3e18;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_setValue_forKey__112665ab0,param_3,param_4);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112711440);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d170e4; end: 104d1713f; -[SCDashedRegistrationDatePicker _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d170e4(long param_1)

{
  long lVar1;
  
  func_0x00010beabe80();
  func_0x00010beb14e0(param_1);
  lVar1 = (long)_DAT_112711444;
  func_0x00010be9d8a0(param_1);
  func_0x00010be9da40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be9dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__selectYear_animated__1125850e8,*(undefined8 *)(param_1 + lVar1),0);
  return;
}



/* Entry: 104d17140; end: 104d174e3; -[SCDashedRegistrationDatePicker _setupData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d17140(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lRam00000001136b8a68 != -1) {
    func_0x00010002a2fc(0x1136b8a68,&PTR___NSConcreteGlobalBlock_11084ab78);
  }
  *(undefined8 *)(param_1 + _DAT_112711434) = uRam00000001136b8a70;
  if (lRam00000001136b8a78 != -1) {
    func_0x00010002a2fc(0x1136b8a78,&PTR___NSConcreteGlobalBlock_11084ab98);
  }
  *(undefined8 *)(param_1 + _DAT_11271143c) = uRam00000001136b8a80;
  if (lRam00000001136b8a88 != -1) {
    func_0x00010002a2fc(0x1136b8a88,&PTR___NSConcreteGlobalBlock_11084abb8);
  }
  *(undefined8 *)(param_1 + _DAT_112711430) = uRam00000001136b8a90;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711444);
  *(undefined ***)(param_1 + _DAT_112711444) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdda8;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be1e7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be20900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be23ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(puVar2);
  _objc_release(lVar3);
  lVar22 = *(long *)(param_1 + _DAT_11271142c);
  *(undefined **)(param_1 + _DAT_11271142c) = puVar2;
  _objc_retain(puVar2);
  _objc_release();
  func_0x000108b9ab7c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x000108b9ab94();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108b9abac();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000108b9abc4();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x000108b9abdc();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar12;
  func_0x000108b9abf4();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x000108b9ac0c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar21;
  func_0x000108b9ac24();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000108b9ac3c();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x000108b9ac54();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x000108b9ac6c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x000108b9ac84();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711438);
  *(undefined **)(param_1 + _DAT_112711438) = puVar11;
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIPickerView_1126af780;
  _objc_opt_new();
  lVar21 = (long)_DAT_112711440;
  uVar1 = *(undefined8 *)(lVar22 + lVar21);
  *(undefined **)(lVar22 + lVar21) = puVar2;
  _objc_release(uVar1);
  func_0x00010c189840(*(undefined8 *)(lVar22 + lVar21));
  func_0x00010c18b5e0(*(undefined8 *)(lVar22 + lVar21));
  func_0x00010befbb60(lVar22);
  func_0x00010c219b60(*(undefined8 *)(lVar22 + lVar21));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(lVar22 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar22 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar22 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar22;
  func_0x00010c274200(lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar22 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar17);
  _objc_release(lVar22);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar5);
  _objc_release(uVar14);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = 1;
  do {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar11);
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x20);
  uVar1 = *(undefined8 *)(lVar12 + _DAT_11271141c);
  FUN_104d17868(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65700();
  _objc_release(uVar1);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010bfecde0();
  _objc_release(puVar11);
  if (puVar18 != (undefined *)0x7fffffffffffffff) {
    func_0x00010c066b00(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d174e4; end: 104d1775b; -[SCDashedRegistrationDatePicker _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d174e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIPickerView_1126af780;
  _objc_opt_new();
  lVar14 = (long)_DAT_112711440;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar14),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar14),param_2,param_1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,0x1f);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 1;
  do {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar10);
    _objc_release(puVar10);
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x20);
  uVar11 = *(undefined8 *)(lVar2 + _DAT_11271141c);
  FUN_104d17868(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf65700();
  _objc_release(uVar11);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bfecde0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  if (puVar12 != (undefined *)0x7fffffffffffffff) {
    func_0x00010c066b00(puVar1,param_2,*(undefined8 *)(lVar2 + _DAT_112711444),puVar12 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d1775c; end: 104d17867; -[SCDashedRegistrationDatePicker _getDays] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1775c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,0x1f);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 1;
  do {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271141c);
  FUN_104d17868(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf65700();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfecde0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (puVar5 != (undefined *)0x7fffffffffffffff) {
    func_0x00010c066b00(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112711444),puVar5 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d17868; end: 104d178df;  */

void FUN_104d17868(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bffabc0();
  puVar2 = puVar1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d178e0; end: 104d179eb; -[SCDashedRegistrationDatePicker _getMonths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d178e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,0xc);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 1;
  do {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xd);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271141c);
  FUN_104d17868(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d0e40();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfecde0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (puVar5 != (undefined *)0x7fffffffffffffff) {
    func_0x00010c066b00(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112711444),puVar5 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d179ec; end: 104d17b3b; -[SCDashedRegistrationDatePicker _getYears] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d179ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  puVar1 = puVar5;
  FUN_104d17868();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bedc0();
  _objc_release(puVar1);
  _objc_release(puVar5);
  puVar5 = puVar2 + -0x707;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (0x707 < (long)puVar2) {
    lVar6 = 0x708;
    do {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      lVar6 = lVar6 + 1;
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271141c);
  FUN_104d17868(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2bedc0();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfecde0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  if (puVar2 != (undefined *)0x7fffffffffffffff) {
    func_0x00010c066b00(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112711444),puVar2 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d17b3c; end: 104d17b53; -[SCDashedRegistrationDatePicker _isEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d17b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToNumber__1125fa1e0,*(undefined8 *)(param_1 + _DAT_112711444));
  return;
}



/* Entry: 104d17b54; end: 104d17bdf; -[SCDashedRegistrationDatePicker _atLeastOneEmptyWithDay:month:year:] */

ulong FUN_104d17b54(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be40040(param_1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1, func_0x00010be40040(param_1,param_2,param_4), (uVar1 & 1) == 0)) {
    func_0x00010be40040(param_1,param_2,param_5);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 104d17be0; end: 104d17ceb; -[SCDashedRegistrationDatePicker _getDateFromDay:month:year:] */

void FUN_104d17be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010c189d40(puVar1,param_2,uVar2);
  uVar2 = param_4;
  func_0x00010c067fc0(param_4);
  _objc_release(param_4);
  func_0x00010c1c8fc0(puVar1,param_2,uVar2);
  uVar2 = param_5;
  func_0x00010c067fc0(param_5);
  _objc_release(param_5);
  func_0x00010c2278a0(puVar1,param_2,uVar2);
  puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf27bc0(PTR__OBJC_CLASS___NSCalendar_1126aeec8,param_2,
                      *(undefined8 *)PTR__NSCalendarIdentifierGregorian_11034aa28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d17cec; end: 104d17d2f; -[SCDashedRegistrationDatePicker _selectDay:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d17cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be97b00();
                    /* WARNING: Could not recover jumptable at 0x00010c158fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711440),
             PTR_s_selectRow_inComponent_animated__112633e10,lVar1,
             *(undefined8 *)(param_1 + _DAT_112711434),param_4);
  return;
}



/* Entry: 104d17d30; end: 104d17d6f; -[SCDashedRegistrationDatePicker _selectMonth:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d17d30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be97b20();
                    /* WARNING: Could not recover jumptable at 0x00010c158fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711440),
             PTR_s_selectRow_inComponent_animated__112633e10,lVar1,
             *(undefined8 *)(param_1 + _DAT_11271143c),param_4);
  return;
}



/* Entry: 104d17d70; end: 104d17db3; -[SCDashedRegistrationDatePicker _selectYear:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d17d70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be97b40();
                    /* WARNING: Could not recover jumptable at 0x00010c158fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711440),
             PTR_s_selectRow_inComponent_animated__112633e10,lVar1,
             *(undefined8 *)(param_1 + _DAT_112711430),param_4);
  return;
}



/* Entry: 104d17db4; end: 104d17eb7; -[SCDashedRegistrationDatePicker _selectDate:animated:] */

void FUN_104d17db4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    FUN_104d17868(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_3;
    func_0x00010bf65700();
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9d8a0(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_3;
    func_0x00010c0d0e40(param_3);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9da40(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_3;
    func_0x00010c2bedc0(param_3);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9dd00(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 104d17eb8; end: 104d17f6b; -[SCDashedRegistrationDatePicker _rowOfDay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d17eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11271142c;
  lVar2 = *(long *)(param_1 + lVar4);
  lVar5 = (long)_DAT_112711434;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_3);
  func_0x00010c0dfd40(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010c0dfd40(lVar4,param_2,*(undefined8 *)(param_1 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(lVar4);
  return lVar2 + ((ulong)(lVar1 * 100) >> 1);
}



/* Entry: 104d17f6c; end: 104d1801f; -[SCDashedRegistrationDatePicker _rowOfMonth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d17f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11271142c;
  lVar2 = *(long *)(param_1 + lVar4);
  lVar5 = (long)_DAT_11271143c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_3);
  func_0x00010c0dfd40(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010c0dfd40(lVar4,param_2,*(undefined8 *)(param_1 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(lVar4);
  return lVar2 + ((ulong)(lVar1 * 100) >> 1);
}



/* Entry: 104d18020; end: 104d18097; -[SCDashedRegistrationDatePicker _rowOfYear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d18020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271142c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711430);
  _objc_retain(param_3);
  func_0x00010c0dfd40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104d18098; end: 104d18117; -[SCDashedRegistrationDatePicker _selectedInComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d18098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be9df00(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112711440),param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271142c);
  func_0x00010c0dfd40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d18118; end: 104d18187; -[SCDashedRegistrationDatePicker _selectedIndexWithinPickerView:inComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d18118(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c159ec0(param_3,param_2,param_4);
  uVar2 = *(ulong *)(param_1 + _DAT_11271142c);
  func_0x00010c0dfd40(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = param_3 / uVar3;
  }
  _objc_release(uVar2);
  return param_3 - uVar1 * uVar3;
}



/* Entry: 104d18188; end: 104d18197; -[SCDashedRegistrationDatePicker date] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d18188(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711420);
}



/* Entry: 104d18198; end: 104d181d7; -[SCDashedRegistrationDatePicker setDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d18198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711420;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d181d8; end: 104d181e7; -[SCDashedRegistrationDatePicker minimumDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d181d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711428);
}



/* Entry: 104d181e8; end: 104d181f7; -[SCDashedRegistrationDatePicker maximumDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d181e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711424);
}



/* Entry: 104d181f8; end: 104d183cf; -[SCDashedRegistrationDatePicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d181f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711424,0);
  _objc_storeStrong(param_1 + _DAT_112711428,0);
  _objc_storeStrong(param_1 + _DAT_112711420,0);
  _objc_storeStrong(param_1 + _DAT_112711438,0);
  _objc_storeStrong(param_1 + _DAT_112711444,0);
  _objc_storeStrong(param_1 + _DAT_11271141c,0);
  _objc_storeStrong(param_1 + _DAT_11271142c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711440,0);
  return;
}



/* Entry: 104d183d0; end: 104d183d7; -[SCDefaultRegistrationDatePicker datePickerType] */

undefined8 FUN_104d183d0(void)

{
  return 0;
}



/* Entry: 104d183d8; end: 104d18563; -[SCNGORegistrationBirthdayNumpadViewController initWithScreen:viewConfig:datePicker:currentPageTracker:privacyPolicyViewFactory:shouldShowPrivacyPolicy:shouldShowKoreanUserConsentChecklist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d183d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar4 = param_4;
  func_0x00010bf602a0(param_4);
  uVar1 = param_4;
  func_0x00010c276d00(param_4);
  uVar2 = param_4;
  func_0x00010bf4fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126e3e20;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar4,uVar1,uVar2,
                      param_6);
  _objc_release(param_6);
  _objc_release(uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112711448;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11271144c;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_5;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112711450;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_7;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + (long)_DAT_112711454) = param_9;
    *(undefined1 *)((long)puVar3 + (long)_DAT_112711458) = param_8;
    uVar4 = param_4;
    func_0x00010c235860();
    *(char *)((long)puVar3 + (long)_DAT_11271145c) = (char)uVar4;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 104d18564; end: 104d1856b; -[SCNGORegistrationBirthdayNumpadViewController pageViewName] */

undefined8 FUN_104d18564(void)

{
  return 0x17;
}



/* Entry: 104d1856c; end: 104d185c7; -[SCNGORegistrationBirthdayNumpadViewController viewDidLoad] */

void FUN_104d1856c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3e20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c177c20(param_1);
  return;
}



/* Entry: 104d185c8; end: 104d18657; -[SCNGORegistrationBirthdayNumpadViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d185c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3e20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  if (*(char *)(param_1 + _DAT_112711454) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112711448);
    puVar1 = PTR_PTR_1126af790;
    func_0x00010bf352e0(PTR_PTR_1126af790);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 104d18658; end: 104d186a7; -[SCNGORegistrationBirthdayNumpadViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d18658(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3e20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010beefbe0(*(undefined8 *)(param_1 + _DAT_11271144c));
  return;
}



/* Entry: 104d186a8; end: 104d186f3; -[SCNGORegistrationBirthdayNumpadViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d186a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711448);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c25ed20(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d186f4; end: 104d1873f; -[SCNGORegistrationBirthdayNumpadViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d186f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711448);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c268d80(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d18740; end: 104d18747; -[SCNGORegistrationBirthdayNumpadViewController bottomConstant] */

undefined8 FUN_104d18740(void)

{
  return 0x4030000000000000;
}



/* Entry: 104d18748; end: 104d187f7; -[SCNGORegistrationBirthdayNumpadViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d18748(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711448);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d187f8; end: 104d1883f;  */

void FUN_104d187f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d18840; end: 104d189e7; -[SCNGORegistrationBirthdayNumpadViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d18840(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c177be0(param_1,param_2,lVar1);
  lVar1 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010c1b2440(param_1,param_2,lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010c21e900(lVar1,param_2,(uint)lVar5 ^ 1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11271144c;
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c071280();
    _objc_release(lVar1);
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      lVar1 = param_3;
      func_0x00010bf1a5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189a40(uVar4,param_2,lVar1,0);
      _objc_release(lVar1);
    }
  }
  lVar1 = param_3;
  func_0x00010c0cd5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11271144c;
  func_0x00010c1c8220(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08b300();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_3;
    func_0x00010c0c1fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c3ac0(*(undefined8 *)(param_1 + lVar5),param_2,lVar3);
    _objc_release(lVar3);
  }
  else {
    func_0x00010c1c3ac0(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c23ab60();
  if ((int)lVar1 != 0) {
    func_0x00010bebbb60(param_1);
  }
  lVar1 = param_3;
  func_0x00010c2336e0();
  if ((int)lVar1 != 0) {
    func_0x00010c237f20(*(undefined8 *)(param_1 + lVar5));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d189e8; end: 104d196f3; -[SCNGORegistrationBirthdayNumpadViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d189e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar68 = (long)_DAT_112711460;
  uVar67 = *(undefined8 *)(param_1 + lVar68);
  *(undefined **)(param_1 + lVar68) = puVar1;
  _objc_release(uVar67);
  uVar67 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010c219b60(uVar67,param_2,0);
  func_0x00010537c24c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar68),param_2,uVar67);
  _objc_release(uVar67);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar68),param_2,3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar68),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar68),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126af088;
  _objc_opt_new();
  lVar69 = (long)_DAT_112711464;
  uVar67 = *(undefined8 *)(param_1 + lVar69);
  *(undefined **)(param_1 + lVar69) = puVar1;
  _objc_release(uVar67);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar69),param_2,param_1);
  func_0x00010c1749e0(*(undefined8 *)(param_1 + lVar69),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar69),param_2,
                      &PTR____CFConstantStringClassReference_110dae578);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar69),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar69),param_2,
                      (*(byte *)(param_1 + _DAT_11271145c) ^ 0xff) & 1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_new();
  func_0x00010c2026e0();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(puVar3,param_2,0);
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c219b60(puVar4,param_2,0);
  func_0x00010c190b80(puVar4,param_2,2);
  puVar1 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfe0660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf493a0(puVar1,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  func_0x00010c1e3380(0x437a0000,puVar6);
  func_0x00010befbb60(puVar3,param_2,puVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  puStack_a0 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  puStack_98 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010c2793a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493a0(puVar12,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  puStack_90 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  func_0x00010c08de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  puStack_88 = puVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493a0(puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar20;
  puStack_78 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  if (*(char *)(param_1 + _DAT_112711458) == '\x01') {
    uVar22 = *(undefined8 *)(param_1 + _DAT_112711450);
    func_0x00010c269d40(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar67 = uVar22;
    func_0x00010c113f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
    func_0x00010c219b60(uVar67,param_2,0);
    func_0x00010bef6d60(puVar4,param_2,uVar67);
    func_0x00010c1887e0(0x4030000000000000,puVar4,param_2,uVar67);
    _objc_release(uVar67);
  }
  if (*(char *)(param_1 + _DAT_112711454) == '\x01') {
    puVar1 = PTR_PTR_1126af798;
    _objc_alloc(PTR_PTR_1126af798);
    func_0x00010c00a2c0();
    func_0x00010c219b60();
    func_0x00010bef6d60(puVar4,param_2,puVar1);
    _objc_release(puVar1);
  }
  lVar70 = (long)_DAT_11271144c;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar70),param_2,
                      &PTR____CFConstantStringClassReference_110dafe38);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar70),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar70),param_2,param_1,
                      PTR_s__birthdayPickerDidChange_112525da0,0x1000);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar69);
  uStack_110 = uVar67;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar25;
  func_0x00010bf49460(uVar25,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar69);
  uStack_108 = uVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar29;
  func_0x00010bf49500(uVar29,param_2,lVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar69);
  uStack_100 = uVar33;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010bf25ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar34;
  func_0x00010bf493c0(0xc030000000000000,uVar34,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar68);
  uStack_f8 = uVar36;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar37;
  func_0x00010bf493c0(0x4048000000000000,uVar37,param_2,lVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar68);
  uStack_f0 = uVar40;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar41;
  func_0x00010bf493c0(0x4034000000000000,uVar41,param_2,lVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_1 + lVar68);
  uStack_e8 = uVar44;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar45;
  func_0x00010bf493c0(0xc034000000000000,uVar45,param_2,lVar47);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar70);
  uStack_e0 = uVar48;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar50;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar49;
  func_0x00010bf493a0(uVar49,param_2,lVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_1 + lVar70);
  uStack_d8 = uVar52;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar53;
  func_0x00010bf493a0(uVar53,param_2,lVar55);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_1 + lVar70);
  uStack_d0 = uVar56;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_1 + lVar68);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar57;
  func_0x00010bf493c0(0x4020000000000000,uVar57,param_2,uVar58);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  uStack_c8 = uVar59;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = lVar68;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = lVar60;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,lVar61);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  puStack_c0 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = lVar62;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = lVar63;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,lVar64);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puStack_b8 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar65 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar11;
  func_0x00010bf493c0(0x4030000000000000,puVar11,param_2,uVar65);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_b0 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar66 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf49520(0xc030000000000000,puVar9,param_2,uVar66);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_110,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar8);
  _objc_release(uVar66);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(uVar65);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar68);
  _objc_release(puVar5);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(lVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(uVar29);
  _objc_release(uVar22);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar25);
  _objc_release(uVar67);
  _objc_release(lVar24);
  _objc_release(lVar2);
  _objc_release(uVar23);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126af790;
  uVar22 = *(undefined8 *)(puVar3 + _DAT_112711448);
  uVar67 = *(undefined8 *)(puVar3 + _DAT_11271144c);
  func_0x00010bf64de0(uVar67);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a620(puVar1,param_2,uVar67);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar22,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar67);
  return;
}



/* Entry: 104d196f4; end: 104d1976f; -[SCNGORegistrationBirthdayNumpadViewController _birthdayPickerDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d196f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af790;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711448);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271144c);
  func_0x00010bf64de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a620(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d19770; end: 104d19937; -[SCNGORegistrationBirthdayNumpadViewController _showUserUnderageError] */

void FUN_104d19770(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108b9a8dc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_58;
  _objc_copyWeak(auStack_60,puVar6);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x00010537c474();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  puVar1 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar6);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bed0fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d19938; end: 104d19977;  */

void FUN_104d19938(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d19978; end: 104d199c3; -[SCNGORegistrationBirthdayNumpadViewController _underageAlertAcknowledged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711448);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c291040(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d199c4; end: 104d19a13; -[SCNGORegistrationBirthdayNumpadViewController checklistView:allChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d199c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711448);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010bf352e0(PTR_PTR_1126af790,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d19a14; end: 104d19a63; -[SCNGORegistrationBirthdayNumpadViewController checklistView:selectedLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711448);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c158da0(PTR_PTR_1126af790,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d19a64; end: 104d19aaf; -[SCNGORegistrationBirthdayNumpadViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19a64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711448);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c272ea0(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d19ab0; end: 104d19b1f; -[SCNGORegistrationBirthdayNumpadViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19ab0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711450,0);
  _objc_storeStrong(param_1 + _DAT_11271144c,0);
  _objc_storeStrong(param_1 + _DAT_112711460,0);
  _objc_storeStrong(param_1 + _DAT_112711464,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711448,0);
  return;
}



/* Entry: 104d19b20; end: 104d19cd7; -[SCNGORegistrationBirthdayViewController initWithScreen:viewConfig:birthdayContextualCopy:datePicker:currentPageTracker:privacyPolicyViewFactory:shouldShowPrivacyPolicy:shouldShowKoreanUserConsentChecklist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d19b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar4 = param_4;
  func_0x00010bf602a0(param_4);
  uVar1 = param_4;
  func_0x00010c276d00(param_4);
  uVar2 = param_4;
  func_0x00010bf4fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126e3e28;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar4,uVar1,uVar2,
                      param_7);
  _objc_release(param_7);
  _objc_release(uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112711468;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11271146c;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_6;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112711470;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_5;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112711474;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_8;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + (long)_DAT_112711478) = param_9._1_1_;
    *(undefined1 *)((long)puVar3 + (long)_DAT_11271147c) = (undefined1)param_9;
    uVar4 = param_4;
    func_0x00010c235860();
    *(char *)((long)puVar3 + (long)_DAT_112711480) = (char)uVar4;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 104d19cd8; end: 104d19cdf; -[SCNGORegistrationBirthdayViewController pageViewName] */

undefined8 FUN_104d19cd8(void)

{
  return 0x17;
}



/* Entry: 104d19ce0; end: 104d19d3b; -[SCNGORegistrationBirthdayViewController viewDidLoad] */

void FUN_104d19ce0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3e28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c177c20(param_1);
  return;
}



/* Entry: 104d19d3c; end: 104d19dcb; -[SCNGORegistrationBirthdayViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19d3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3e28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  if (*(char *)(param_1 + _DAT_112711478) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112711468);
    puVar1 = PTR_PTR_1126af790;
    func_0x00010bf352e0(PTR_PTR_1126af790);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 104d19dcc; end: 104d19dd3; -[SCNGORegistrationBirthdayViewController textFieldShouldBeginEditing:] */

undefined8 FUN_104d19dcc(void)

{
  return 0;
}



/* Entry: 104d19dd4; end: 104d19e1f; -[SCNGORegistrationBirthdayViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19dd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711468);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c25ed20(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d19e20; end: 104d19e6b; -[SCNGORegistrationBirthdayViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19e20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711468);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c268d80(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d19e6c; end: 104d19e77; -[SCNGORegistrationBirthdayViewController bottomConstant] */

undefined8 FUN_104d19e6c(void)

{
  return 0x40707999a0000000;
}



/* Entry: 104d19e78; end: 104d19f27; -[SCNGORegistrationBirthdayViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19e78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711468);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d19f28; end: 104d19f6f;  */

void FUN_104d19f28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d19f70; end: 104d1a163; -[SCNGORegistrationBirthdayViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d19f70(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c177be0(param_1,param_2,lVar3);
  lVar3 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010c1b2440(param_1,param_2,lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c076be0(param_3);
  func_0x00010c21e900(lVar3,param_2,(uint)lVar4 ^ 1);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271146c);
    lVar3 = param_3;
    func_0x00010bf1a5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189a40(uVar2,param_2,lVar3,0);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c0cd5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11271146c;
  func_0x00010c1c8220(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0c1fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3ac0(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c2350e0();
  if ((int)lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bfb5fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2133c0(*(undefined8 *)(param_1 + _DAT_112711484),param_2,lVar3);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c23ab60();
  if ((int)lVar3 != 0) {
    func_0x00010bebbb60(param_1);
  }
  lVar3 = param_3;
  func_0x00010c2336e0();
  if ((int)lVar3 == 0) {
    lVar3 = (long)_DAT_112711484;
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar3),param_2,
                        *(undefined8 *)(param_1 + _DAT_112711470));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    uVar1 = 0;
  }
  else {
    func_0x00010537c2ac();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112711484;
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    uVar1 = 4;
  }
  func_0x00010c209fc0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d1a164; end: 104d1b033; -[SCNGORegistrationBirthdayViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1a164(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  lVar53 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar53);
  puVar2 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar53;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493e0(0x3fc5555560000000,puVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar53);
  _objc_release(puVar2);
  func_0x00010c1e3380(0x43790000,puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar53;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_90 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_88 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar54;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar13;
  puStack_78 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar54);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar53);
  _objc_release(puVar5);
  puVar2 = PTR_PTR_1126af088;
  _objc_opt_new();
  lVar55 = (long)_DAT_112711488;
  uVar52 = *(undefined8 *)(param_1 + lVar55);
  *(undefined **)(param_1 + lVar55) = puVar2;
  _objc_release(uVar52);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar55),param_2,param_1);
  func_0x00010c1749e0(*(undefined8 *)(param_1 + lVar55),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar55),param_2,
                      &PTR____CFConstantStringClassReference_110dae578);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar55),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar55),param_2,
                      (*(byte *)(param_1 + _DAT_112711480) ^ 0xff) & 1);
  lVar53 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar53);
  puVar5 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_new();
  func_0x00010c2026e0();
  lVar53 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar53);
  func_0x00010c219b60(puVar5,param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  puStack_b0 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar53;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  puStack_a8 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar9;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar54;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar5;
  puStack_a0 = puVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar26;
  func_0x00010bf49520(0xc030000000000000,puVar26,param_2,uVar52);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(uVar52);
  _objc_release(puVar26);
  _objc_release(puVar23);
  _objc_release(lVar12);
  _objc_release(lVar54);
  _objc_release(lVar9);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar53);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar15 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c219b60(puVar15,param_2,0);
  func_0x00010c190b80(puVar15,param_2,2);
  puVar2 = puVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010bf493a0(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  func_0x00010c1e3380(0x437a0000,puVar16);
  func_0x00010befbb60(puVar5,param_2,puVar15);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493a0(puVar17,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar15;
  puStack_e0 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493a0(puVar20,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar15;
  puStack_d8 = puVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010bf493a0(puVar23,param_2,puVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar15;
  puStack_d0 = puVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar26;
  func_0x00010bf493a0(puVar26,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  puStack_c8 = puVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar7;
  puStack_b8 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  puVar6 = PTR_PTR_1126af0a0;
  _objc_alloc();
  puVar2 = puVar6;
  func_0x00010537c234();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051880(puVar6,param_2,0,puVar2,0);
  lVar53 = (long)_DAT_112711484;
  uVar52 = *(undefined8 *)(param_1 + lVar53);
  *(undefined **)(param_1 + lVar53) = puVar6;
  _objc_release(uVar52);
  _objc_release(puVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar53),param_2,param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar53),param_2,0);
  func_0x00010c202520(*(undefined8 *)(param_1 + lVar53),param_2,1);
  func_0x00010bef6d60(puVar15,param_2,*(undefined8 *)(param_1 + lVar53));
  if (*(char *)(param_1 + _DAT_11271147c) == '\x01') {
    uVar27 = *(undefined8 *)(param_1 + _DAT_112711474);
    func_0x00010c269d40(uVar27);
    _objc_retainAutoreleasedReturnValue();
    uVar52 = uVar27;
    func_0x00010c113f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    func_0x00010c219b60(uVar52,param_2,0);
    func_0x00010bef6d60(puVar15,param_2,uVar52);
    func_0x00010c1887e0(0x4030000000000000,puVar15,param_2,uVar52);
    _objc_release(uVar52);
  }
  if (*(char *)(param_1 + _DAT_112711478) == '\x01') {
    puVar2 = PTR_PTR_1126af798;
    _objc_alloc(PTR_PTR_1126af798);
    func_0x00010c00a2c0();
    func_0x00010c219b60();
    func_0x00010bef6d60(puVar15,param_2,puVar2);
    _objc_release(puVar2);
  }
  lVar54 = (long)_DAT_11271146c;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar54),param_2,
                      &PTR____CFConstantStringClassReference_110dafe38);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar54),param_2,0);
  uVar52 = *(undefined8 *)(param_1 + lVar54);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar52,param_2,puVar2,&PTR____CFConstantStringClassReference_110dafdd8);
  _objc_release(puVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar54),param_2,param_1,
                      PTR_s__birthdayPickerDidChange_112525da0,0x1000);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar28 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar28;
  func_0x00010bf494e0(0x4056800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar54);
  uStack_128 = uVar52;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar53;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar29;
  func_0x00010bf493a0(uVar29,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar54);
  uStack_120 = uVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010bf493a0(uVar30,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar54);
  uStack_118 = uVar31;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar32;
  func_0x00010bf49420(0x406bf33340000000);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar54);
  uStack_110 = uVar33;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar54;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar34;
  func_0x00010bf493c0(0xc044000000000000,uVar34,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar55);
  uStack_108 = uVar35;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar36;
  func_0x00010bf493a0(uVar36,param_2,lVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar55);
  uStack_100 = uVar39;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar40;
  func_0x00010bf49460(uVar40,param_2,lVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_1 + lVar55);
  uStack_f8 = uVar44;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar45;
  func_0x00010bf49500(uVar45,param_2,lVar48);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = *(undefined8 *)(param_1 + lVar55);
  uStack_f0 = uVar49;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar50;
  func_0x00010bf493c0(0xc030000000000000,uVar50,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar51;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_128,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar51);
  _objc_release(param_1);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(lVar12);
  _objc_release(lVar54);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar30);
  _objc_release(uVar27);
  _objc_release(lVar3);
  _objc_release(lVar53);
  _objc_release(uVar29);
  _objc_release(uVar52);
  _objc_release(uVar28);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af790;
  uVar27 = *(undefined8 *)(puVar1 + _DAT_112711468);
  uVar52 = *(undefined8 *)(puVar1 + _DAT_11271146c);
  func_0x00010bf64de0(uVar52);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a620(puVar2,param_2,uVar52);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar27,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar52);
  return;
}



/* Entry: 104d1b034; end: 104d1b0af; -[SCNGORegistrationBirthdayViewController _birthdayPickerDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b034(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af790;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711468);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271146c);
  func_0x00010bf64de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a620(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d1b0b0; end: 104d1b277; -[SCNGORegistrationBirthdayViewController _showUserUnderageError] */

void FUN_104d1b0b0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108b9a8dc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_58;
  _objc_copyWeak(auStack_60,puVar6);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x00010537c474();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  puVar1 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar6);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bed0fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d1b278; end: 104d1b2b7;  */

void FUN_104d1b278(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d1b2b8; end: 104d1b303; -[SCNGORegistrationBirthdayViewController _underageAlertAcknowledged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b2b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711468);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c291040(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d1b304; end: 104d1b353; -[SCNGORegistrationBirthdayViewController checklistView:allChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711468);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010bf352e0(PTR_PTR_1126af790,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d1b354; end: 104d1b3a3; -[SCNGORegistrationBirthdayViewController checklistView:selectedLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b354(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711468);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c158da0(PTR_PTR_1126af790,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d1b3a4; end: 104d1b3ef; -[SCNGORegistrationBirthdayViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b3a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711468);
  puVar1 = PTR_PTR_1126af790;
  func_0x00010c272ea0(PTR_PTR_1126af790);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d1b3f0; end: 104d1b46f; -[SCNGORegistrationBirthdayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b3f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711474,0);
  _objc_storeStrong(param_1 + _DAT_112711470,0);
  _objc_storeStrong(param_1 + _DAT_11271146c,0);
  _objc_storeStrong(param_1 + _DAT_112711488,0);
  _objc_storeStrong(param_1 + _DAT_112711484,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711468,0);
  return;
}



/* Entry: 104d1b470; end: 104d1b74f; -[SCRegistrationBirthdayBusinessLogic initWithBirthday:delegate:signupTransitionLogger:birthdayLogger:userInitialInputLogger:ageVerificationInfoProvider:resetClientId:circumstanceEngine:dateFormatter:performer:localNotificationScheduling:registrationRequestObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104d1b470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e3e30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271148c,param_4);
    lVar4 = (long)_DAT_112711490;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112711494;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112711498;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271149c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127114a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127114a0) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127114a4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127114a8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127114ac;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127114b0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127114b4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127114b8) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127114bc) = 1;
    func_0x00010be3aa00(puVar1);
  }
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 104d1b750; end: 104d1b8c7; -[SCRegistrationBirthdayBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b750(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3e30;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_begin_1125a3840);
  lVar3 = (long)_DAT_112711494;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adb00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  lVar3 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127114b4);
  _objc_retain();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127114c0);
  *(undefined8 *)(param_1 + _DAT_1127114c0) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104d1b8c8; end: 104d1b987;  */

void FUN_104d1b8c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d1b988;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d1b988; end: 104d1b9c7;  */

void FUN_104d1b988(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010be8a120(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d1b9c8; end: 104d1b9d7; -[SCRegistrationBirthdayBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1b9c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127114c4),PTR_s_build_1125a6180);
  return;
}



/* Entry: 104d1b9d8; end: 104d1bae7; -[SCRegistrationBirthdayBusinessLogic handleAction:] */

void FUN_104d1b9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d1bae8;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104d1baf0;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104d1baf8;
  puStack_80 = &UNK_11084ac38;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104d1bb04;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104d1bbb8;
  puStack_d0 = &UNK_110841f20;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_104d1bbc4;
  puStack_f8 = &UNK_1108480f8;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104d1bc1c;
  puStack_120 = &UNK_110841f20;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c0660(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138);
  return;
}



/* Entry: 104d1bae8; end: 104d1bb03;  */

void FUN_104d1bae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__submit_11258f0f8);
  return;
}



/* Entry: 104d1bb04; end: 104d1bbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1bb04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127114a0) + 0x10))();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271149c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250340();
  _objc_release(uVar1);
  func_0x00010bde0e40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711494);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada20();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11271148c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf1a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d1bbb8; end: 104d1bbc3;  */

void FUN_104d1bbb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee6a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__userConsentDidChange__112597448,param_2);
  return;
}


